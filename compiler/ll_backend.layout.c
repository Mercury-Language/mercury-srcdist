/*
** Automatically generated from `layout.m'
** by the Mercury compiler,
** version DEV, configured for x86_64-apple-darwin13.1.0.
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




#line 138 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_alloc_site_info_0_0[4];

#line 141 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_alloc_site_info_0_0[4];

#line 144 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_alloc_site_info_0_0;

#line 147 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_alloc_site_info_0_0[1];

#line 150 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_alloc_site_info_0[1];

#line 153 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_alloc_site_info_0[1];

#line 156 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_alloc_site_info_0[1];

#line 159 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_trace_port_0;

#line 162 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1bool__type_ctor_info_bool_0;

#line 165 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

#line 168 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_layout_slot_name_0;

#line 171 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_basic_label_layout_0_0[8];

#line 174 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_basic_label_layout_0_0[8];

#line 177 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_basic_label_layout_0_0;

#line 180 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_basic_label_layout_0_0[1];

#line 183 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_basic_label_layout_0[1];

#line 186 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_basic_label_layout_0[1];

#line 189 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_basic_label_layout_0[1];

#line 192 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_closure_proc_id_data_0_0[8];

#line 195 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_closure_proc_id_data_0_0[8];

#line 198 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_closure_proc_id_data_0_0;

#line 201 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_closure_proc_id_data_0_0[1];

#line 204 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_closure_proc_id_data_0[1];

#line 207 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_closure_proc_id_data_0[1];

#line 210 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_closure_proc_id_data_0[1];

#line 213 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_data_or_slot_id_0_0[1];

#line 216 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_data_or_slot_id_0_0;

#line 219 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_data_or_slot_id_0_1[1];

#line 222 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_data_or_slot_id_0_1;

#line 225 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_data_or_slot_id_0_0[1];

#line 228 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_data_or_slot_id_0_1[1];

#line 231 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_data_or_slot_id_0[2];

#line 234 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_data_or_slot_id_0[2];

#line 237 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_data_or_slot_id_0[2];

#line 240 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_deep_excp_slots_0_0[3];

#line 243 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_deep_excp_slots_0_0[3];

#line 246 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_deep_excp_slots_0_0;

#line 249 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_deep_excp_slots_0_0[1];

#line 252 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_deep_excp_slots_0[1];

#line 255 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_deep_excp_slots_0[1];

#line 258 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_deep_excp_slots_0[1];

#line 261 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__layout__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_rval_0;

#line 264 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_event_set_layout_data_0_0[2];

#line 267 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_event_set_layout_data_0_0;

#line 270 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_event_set_layout_data_0_0[1];

#line 273 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_event_set_layout_data_0[1];

#line 276 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_event_set_layout_data_0[1];

#line 279 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_event_set_layout_data_0[1];

#line 282 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__layout__pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__layout__type_ctor_info_layout_slot_name_0;

#line 285 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__layout__type_ctor_info_layout_slot_name_0;

#line 288 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_file_layout_data_0_0[2];

#line 291 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_file_layout_data_0_0[2];

#line 294 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_file_layout_data_0_0;

#line 297 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_file_layout_data_0_0[1];

#line 300 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_file_layout_data_0[1];

#line 303 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_file_layout_data_0[1];

#line 306 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_file_layout_data_0[1];

#line 309 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_label_layout_long_vars_0_0[2];

#line 312 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_label_layout_long_vars_0_0;

#line 315 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_label_layout_long_vars_0_0[1];

#line 318 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_layout_long_vars_0[1];

#line 321 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_label_layout_long_vars_0[1];

#line 324 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_layout_long_vars_0[1];

#line 327 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_layout_no_vars_0[1];

#line 330 "ll_backend.layout.c"
static const MR_NotagFunctorDesc ll_backend__layout__ll_backend__layout__notag_functor_desc_label_layout_no_vars_0;

#line 333 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_label_layout_short_vars_0_0[2];

#line 336 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_label_layout_short_vars_0_0;

#line 339 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_label_layout_short_vars_0_0[1];

#line 342 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_layout_short_vars_0[1];

#line 345 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_label_layout_short_vars_0[1];

#line 348 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_layout_short_vars_0[1];

#line 351 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_label_long_var_info_0_0[6];

#line 354 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_label_long_var_info_0_0[6];

#line 357 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_label_long_var_info_0_0;

#line 360 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_label_long_var_info_0_0[1];

#line 363 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_long_var_info_0[1];

#line 366 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_label_long_var_info_0[1];

#line 369 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_long_var_info_0[1];

#line 372 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_label_short_var_info_0_0[5];

#line 375 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_label_short_var_info_0_0[5];

#line 378 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_label_short_var_info_0_0;

#line 381 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_label_short_var_info_0_0[1];

#line 384 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_short_var_info_0[1];

#line 387 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_label_short_var_info_0[1];

#line 390 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_short_var_info_0[1];

#line 393 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_0;

#line 396 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_1;

#line 399 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_2;

#line 402 "ll_backend.layout.c"
static const MR_EnumFunctorDescPtr ll_backend__layout__ll_backend__layout__enum_value_ordered_label_vars_0[3];

#line 405 "ll_backend.layout.c"
static const MR_EnumFunctorDescPtr ll_backend__layout__ll_backend__layout__enum_name_ordered_label_vars_0[3];

#line 408 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_vars_0[3];

#line 411 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_0;

#line 414 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_1;

#line 417 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_2;

#line 420 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_3;

#line 423 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_4;

#line 426 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_5;

#line 429 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_array_name_0_6[1];

#line 432 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_6;

#line 435 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_7;

#line 438 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_8;

#line 441 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_9;

#line 444 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_10;

#line 447 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_11;

#line 450 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_12;

#line 453 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_13;

#line 456 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_14;

#line 459 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_15;

#line 462 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_16;

#line 465 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_17;

#line 468 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_18;

#line 471 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_array_name_0_0[18];

#line 474 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_array_name_0_1[1];

#line 477 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_layout_array_name_0[2];

#line 480 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_layout_array_name_0[19];

#line 483 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_layout_array_name_0[19];

#line 486 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_0[2];

#line 489 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_0;

#line 492 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_1[3];

#line 495 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_1;

#line 498 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_2[2];

#line 501 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_2;

#line 504 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_3[2];

#line 507 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_3;

#line 510 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_4[2];

#line 513 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_4;

#line 516 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_5[1];

#line 519 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_5;

#line 522 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_6[1];

#line 525 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_6;

#line 528 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_7[1];

#line 531 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_7;

#line 534 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_8[2];

#line 537 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_8;

#line 540 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_9[1];

#line 543 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_9;

#line 546 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_10[2];

#line 549 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_10;

#line 552 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_11[2];

#line 555 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_11;

#line 558 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_12[3];

#line 561 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_12;

#line 564 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_13[3];

#line 567 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_13;

#line 570 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_14[2];

#line 573 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_14;

#line 576 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_15[1];

#line 579 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_15;

#line 582 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_16[1];

#line 585 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_16;

#line 588 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_17[1];

#line 591 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_17;

#line 594 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_18[1];

#line 597 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_18;

#line 600 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_name_0_0[1];

#line 603 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_name_0_1[1];

#line 606 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_name_0_2[1];

#line 609 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_name_0_3[16];

#line 612 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_layout_name_0[4];

#line 615 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_layout_name_0[19];

#line 618 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_layout_name_0[19];

#line 621 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_slot_name_0_0[2];

#line 624 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_slot_name_0_0;

#line 627 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_slot_name_0_0[1];

#line 630 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_layout_slot_name_0[1];

#line 633 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_layout_slot_name_0[1];

#line 636 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_layout_slot_name_0[1];

#line 639 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_maybe_proc_id_and_more_0_0;

#line 642 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_maybe_proc_id_and_more_0_1[4];

#line 645 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_maybe_proc_id_and_more_0_1[4];

#line 648 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_maybe_proc_id_and_more_0_1;

#line 651 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_maybe_proc_id_and_more_0_0[1];

#line 654 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_maybe_proc_id_and_more_0_1[1];

#line 657 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_maybe_proc_id_and_more_0[2];

#line 660 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_maybe_proc_id_and_more_0[2];

#line 663 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_maybe_proc_id_and_more_0[2];

#line 666 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_module_layout_deep_prof_0;

#line 669 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_module_layout_debug_0;

#line 672 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_module_layout_data_0_0[5];

#line 675 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_module_layout_data_0_0[5];

#line 678 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_data_0_0;

#line 681 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_data_0_0[1];

#line 684 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_module_layout_data_0[1];

#line 687 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_module_layout_data_0[1];

#line 690 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_module_layout_data_0[1];

#line 693 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1ll_backend__layout__type_ctor_info_layout_name_0;

#line 696 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1ll_backend__layout__type_ctor_info_file_layout_data_0;

#line 699 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_event_set_layout_data_0;

#line 702 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_module_layout_debug_0_0[6];

#line 705 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_module_layout_debug_0_0[6];

#line 708 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_debug_0_0;

#line 711 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_debug_0_0[1];

#line 714 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_module_layout_debug_0[1];

#line 717 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_module_layout_debug_0[1];

#line 720 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_module_layout_debug_0[1];

#line 723 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1builtin__type_ctor_info_int_0;

#line 726 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_module_layout_deep_prof_0_0[4];

#line 729 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_module_layout_deep_prof_0_0[4];

#line 732 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_deep_prof_0_0;

#line 735 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_deep_prof_0_0[1];

#line 738 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_module_layout_deep_prof_0[1];

#line 741 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_module_layout_deep_prof_0[1];

#line 744 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_module_layout_deep_prof_0[1];

#line 747 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_data_0_0[3];

#line 750 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_proc_layout_data_0_0[3];

#line 753 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_data_0_0;

#line 756 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_data_0_0[1];

#line 759 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_data_0[1];

#line 762 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_data_0[1];

#line 765 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_data_0[1];

#line 768 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_data_or_slot_id_0;

#line 771 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_exec_trace_0_0[19];

#line 774 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_proc_layout_exec_trace_0_0[19];

#line 777 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_exec_trace_0_0;

#line 780 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_exec_trace_0_0[1];

#line 783 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_exec_trace_0[1];

#line 786 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_exec_trace_0[1];

#line 789 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_exec_trace_0[1];

#line 792 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_kind_0_0;

#line 795 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_kind_0_1[1];

#line 798 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_kind_0_1;

#line 801 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_kind_0_0[1];

#line 804 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_kind_0_1[1];

#line 807 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_kind_0[2];

#line 810 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_kind_0[2];

#line 813 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_kind_0[2];

#line 816 "ll_backend.layout.c"
static const MR_VA_TypeInfo_Struct2 ll_backend__layout____vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 819 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 822 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_proc_static_0_0[6];

#line 825 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_proc_layout_proc_static_0_0[6];

#line 828 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_proc_static_0_0;

#line 831 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_proc_static_0_0[1];

#line 834 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_proc_static_0[1];

#line 837 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_proc_static_0[1];

#line 840 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_proc_static_0[1];

#line 843 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0;

#line 846 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_stack_traversal_0_0[4];

#line 849 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_proc_layout_stack_traversal_0_0[4];

#line 852 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_stack_traversal_0_0;

#line 855 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_stack_traversal_0_0[1];

#line 858 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_stack_traversal_0[1];

#line 861 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_stack_traversal_0[1];

#line 864 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_stack_traversal_0[1];

#line 867 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_0;

#line 870 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_1;

#line 873 "ll_backend.layout.c"
static const MR_EnumFunctorDescPtr ll_backend__layout__ll_backend__layout__enum_value_ordered_proc_layout_user_or_uci_0[2];

#line 876 "ll_backend.layout.c"
static const MR_EnumFunctorDescPtr ll_backend__layout__ll_backend__layout__enum_name_ordered_proc_layout_user_or_uci_0[2];

#line 879 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_user_or_uci_0[2];

#line 882 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_string_with_0s_0[1];

#line 885 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1builtin__type_ctor_info_string_0;

#line 888 "ll_backend.layout.c"
static const MR_NotagFunctorDesc ll_backend__layout__ll_backend__layout__notag_functor_desc_string_with_0s_0;

#line 891 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_table_io_decl_data_0_0[4];

#line 894 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_table_io_decl_data_0_0[4];

#line 897 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_table_io_decl_data_0_0;

#line 900 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_table_io_decl_data_0_0[1];

#line 903 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_table_io_decl_data_0[1];

#line 906 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_table_io_decl_data_0[1];

#line 909 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_table_io_decl_data_0[1];

#line 912 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_user_event_data_0_0[3];

#line 915 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_user_event_data_0_0[3];

#line 918 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_user_event_data_0_0;

#line 921 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_user_event_data_0_0[1];

#line 924 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_user_event_data_0[1];

#line 927 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_user_event_data_0[1];

#line 930 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_user_event_data_0[1];

#line 933 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____alloc_site_info_0_0_10001(
#line 936 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 938 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 941 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____alloc_site_info_0_0_10001(
#line 944 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 946 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 948 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 951 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____basic_label_layout_0_0_10001(
#line 954 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 956 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 959 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____basic_label_layout_0_0_10001(
#line 962 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 964 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 966 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 969 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____closure_proc_id_data_0_0_10001(
#line 972 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 974 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 977 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____closure_proc_id_data_0_0_10001(
#line 980 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 982 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 984 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 987 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____data_or_slot_id_0_0_10001(
#line 990 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 992 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 995 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____data_or_slot_id_0_0_10001(
#line 998 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1000 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1002 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1005 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____deep_excp_slots_0_0_10001(
#line 1008 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1010 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1013 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____deep_excp_slots_0_0_10001(
#line 1016 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1018 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1020 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1023 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____event_set_layout_data_0_0_10001(
#line 1026 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1028 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1031 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____event_set_layout_data_0_0_10001(
#line 1034 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1036 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1038 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1041 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____file_layout_data_0_0_10001(
#line 1044 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1046 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1049 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____file_layout_data_0_0_10001(
#line 1052 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1054 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1056 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1059 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_layout_long_vars_0_0_10001(
#line 1062 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1064 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1067 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_layout_long_vars_0_0_10001(
#line 1070 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1072 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1074 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1077 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_layout_no_vars_0_0_10001(
#line 1080 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1082 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1085 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_layout_no_vars_0_0_10001(
#line 1088 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1090 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1092 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1095 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_layout_short_vars_0_0_10001(
#line 1098 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1100 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1103 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_layout_short_vars_0_0_10001(
#line 1106 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1108 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1110 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1113 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_long_var_info_0_0_10001(
#line 1116 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1118 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1121 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_long_var_info_0_0_10001(
#line 1124 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1126 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1128 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1131 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_short_var_info_0_0_10001(
#line 1134 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1136 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1139 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_short_var_info_0_0_10001(
#line 1142 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1144 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1146 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1149 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_vars_0_0_10001(
#line 1152 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1154 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1157 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_vars_0_0_10001(
#line 1160 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1162 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1164 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1167 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____layout_array_name_0_0_10001(
#line 1170 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1172 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1175 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____layout_array_name_0_0_10001(
#line 1178 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1180 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1182 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1185 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____layout_name_0_0_10001(
#line 1188 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1190 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1193 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____layout_name_0_0_10001(
#line 1196 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1198 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1200 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1203 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____layout_slot_name_0_0_10001(
#line 1206 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1208 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1211 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____layout_slot_name_0_0_10001(
#line 1214 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1216 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1218 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1221 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____maybe_proc_id_and_more_0_0_10001(
#line 1224 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1226 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1229 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____maybe_proc_id_and_more_0_0_10001(
#line 1232 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1234 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1236 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1239 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____module_layout_data_0_0_10001(
#line 1242 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1244 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1247 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____module_layout_data_0_0_10001(
#line 1250 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1252 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1254 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1257 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____module_layout_debug_0_0_10001(
#line 1260 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1262 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1265 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____module_layout_debug_0_0_10001(
#line 1268 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1270 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1272 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1275 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____module_layout_deep_prof_0_0_10001(
#line 1278 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1280 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1283 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____module_layout_deep_prof_0_0_10001(
#line 1286 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1288 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1290 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1293 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_data_0_0_10001(
#line 1296 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1298 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1301 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_data_0_0_10001(
#line 1304 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1306 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1308 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1311 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_exec_trace_0_0_10001(
#line 1314 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1316 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1319 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_exec_trace_0_0_10001(
#line 1322 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1324 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1326 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1329 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_kind_0_0_10001(
#line 1332 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1334 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1337 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_kind_0_0_10001(
#line 1340 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1342 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1344 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1347 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_proc_static_0_0_10001(
#line 1350 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1352 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1355 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_proc_static_0_0_10001(
#line 1358 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1360 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1362 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1365 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_stack_traversal_0_0_10001(
#line 1368 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1370 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1373 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_stack_traversal_0_0_10001(
#line 1376 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1378 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1380 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1383 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_user_or_uci_0_0_10001(
#line 1386 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1388 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1391 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_user_or_uci_0_0_10001(
#line 1394 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1396 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1398 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1401 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____string_with_0s_0_0_10001(
#line 1404 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1406 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1409 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____string_with_0s_0_0_10001(
#line 1412 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1414 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1416 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1419 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____table_io_decl_data_0_0_10001(
#line 1422 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1424 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1427 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____table_io_decl_data_0_0_10001(
#line 1430 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1432 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1434 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1437 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____user_event_data_0_0_10001(
#line 1440 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1442 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1445 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____user_event_data_0_0_10001(
#line 1448 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1450 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1452 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);


static /* final */ const MR_Box ll_backend__layout_scalar_common_1[15][2];

static /* final */ const MR_Box ll_backend__layout_scalar_common_2[2][3];

static /* final */ const MR_Box ll_backend__layout_scalar_common_3[1][4];




static /* final */ const MR_Box ll_backend__layout_scalar_common_1[15][2] = {
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



#line 1585 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_alloc_site_info_0_0[4] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1593 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_alloc_site_info_0_0[4] = {
  (MR_String) "as_proc_label",
  (MR_String) "as_context",
  (MR_String) "as_type",
  (MR_String) "as_size"
};

#line 1601 "ll_backend.layout.c"
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

#line 1616 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_alloc_site_info_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_alloc_site_info_0_0
};

#line 1621 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_alloc_site_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_alloc_site_info_0_0
  }
};

#line 1630 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_alloc_site_info_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_alloc_site_info_0_0
};

#line 1635 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_alloc_site_info_0[1] = {
  (MR_Integer) 0
};

#line 1640 "ll_backend.layout.c"
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

#line 1661 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_trace_port_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0
  }
};

#line 1669 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1bool__type_ctor_info_bool_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 1677 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1685 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
  }
};

#line 1693 "ll_backend.layout.c"
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

#line 1705 "ll_backend.layout.c"
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

#line 1717 "ll_backend.layout.c"
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

#line 1732 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_basic_label_layout_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_basic_label_layout_0_0
};

#line 1737 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_basic_label_layout_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_basic_label_layout_0_0
  }
};

#line 1746 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_basic_label_layout_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_basic_label_layout_0_0
};

#line 1751 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_basic_label_layout_0[1] = {
  (MR_Integer) 0
};

#line 1756 "ll_backend.layout.c"
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

#line 1777 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_closure_proc_id_data_0_0[8] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_origin_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1789 "ll_backend.layout.c"
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

#line 1801 "ll_backend.layout.c"
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

#line 1816 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_closure_proc_id_data_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_closure_proc_id_data_0_0
};

#line 1821 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_closure_proc_id_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_closure_proc_id_data_0_0
  }
};

#line 1830 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_closure_proc_id_data_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_closure_proc_id_data_0_0
};

#line 1835 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_closure_proc_id_data_0[1] = {
  (MR_Integer) 0
};

#line 1840 "ll_backend.layout.c"
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

#line 1861 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_data_or_slot_id_0_0[1] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0
};

#line 1866 "ll_backend.layout.c"
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

#line 1881 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_data_or_slot_id_0_1[1] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
};

#line 1886 "ll_backend.layout.c"
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

#line 1901 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_data_or_slot_id_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_data_or_slot_id_0_1
};

#line 1906 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_data_or_slot_id_0_1[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_data_or_slot_id_0_0
};

#line 1911 "ll_backend.layout.c"
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

#line 1925 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_data_or_slot_id_0[2] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_data_or_slot_id_0_0,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_data_or_slot_id_0_1
};

#line 1931 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_data_or_slot_id_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1937 "ll_backend.layout.c"
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

#line 1958 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_deep_excp_slots_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1965 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_deep_excp_slots_0_0[3] = {
  (MR_String) "top_csd",
  (MR_String) "middle_csd",
  (MR_String) "old_outermost"
};

#line 1972 "ll_backend.layout.c"
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

#line 1987 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_deep_excp_slots_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_deep_excp_slots_0_0
};

#line 1992 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_deep_excp_slots_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_deep_excp_slots_0_0
  }
};

#line 2001 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_deep_excp_slots_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_deep_excp_slots_0_0
};

#line 2006 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_deep_excp_slots_0[1] = {
  (MR_Integer) 0
};

#line 2011 "ll_backend.layout.c"
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

#line 2032 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__layout__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0
  }
};

#line 2041 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_event_set_layout_data_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_set_data_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_rval_0
};

#line 2047 "ll_backend.layout.c"
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

#line 2062 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_event_set_layout_data_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_event_set_layout_data_0_0
};

#line 2067 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_event_set_layout_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_event_set_layout_data_0_0
  }
};

#line 2076 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_event_set_layout_data_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_event_set_layout_data_0_0
};

#line 2081 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_event_set_layout_data_0[1] = {
  (MR_Integer) 0
};

#line 2086 "ll_backend.layout.c"
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

#line 2107 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__layout__pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
  }
};

#line 2116 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__layout__pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__layout__type_ctor_info_layout_slot_name_0
  }
};

#line 2124 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_file_layout_data_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__layout__type_ctor_info_layout_slot_name_0
};

#line 2130 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_file_layout_data_0_0[2] = {
  (MR_String) "file_name",
  (MR_String) "line_no_label_list"
};

#line 2136 "ll_backend.layout.c"
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

#line 2151 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_file_layout_data_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_file_layout_data_0_0
};

#line 2156 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_file_layout_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_file_layout_data_0_0
  }
};

#line 2165 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_file_layout_data_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_file_layout_data_0_0
};

#line 2170 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_file_layout_data_0[1] = {
  (MR_Integer) 0
};

#line 2175 "ll_backend.layout.c"
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

#line 2196 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_label_layout_long_vars_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_basic_label_layout_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_label_long_var_info_0
};

#line 2202 "ll_backend.layout.c"
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

#line 2217 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_label_layout_long_vars_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_label_layout_long_vars_0_0
};

#line 2222 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_layout_long_vars_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_label_layout_long_vars_0_0
  }
};

#line 2231 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_label_layout_long_vars_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_label_layout_long_vars_0_0
};

#line 2236 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_layout_long_vars_0[1] = {
  (MR_Integer) 0
};

#line 2241 "ll_backend.layout.c"
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

#line 2262 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_layout_no_vars_0[1] = {
  (MR_Integer) 0
};

#line 2267 "ll_backend.layout.c"
static const MR_NotagFunctorDesc ll_backend__layout__ll_backend__layout__notag_functor_desc_label_layout_no_vars_0 = {
  (MR_String) "label_layout_no_vars",
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_basic_label_layout_0,
  NULL
};

#line 2274 "ll_backend.layout.c"
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

#line 2295 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_label_layout_short_vars_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_basic_label_layout_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_label_short_var_info_0
};

#line 2301 "ll_backend.layout.c"
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

#line 2316 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_label_layout_short_vars_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_label_layout_short_vars_0_0
};

#line 2321 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_layout_short_vars_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_label_layout_short_vars_0_0
  }
};

#line 2330 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_label_layout_short_vars_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_label_layout_short_vars_0_0
};

#line 2335 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_layout_short_vars_0[1] = {
  (MR_Integer) 0
};

#line 2340 "ll_backend.layout.c"
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

#line 2361 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_label_long_var_info_0_0[6] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2371 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_label_long_var_info_0_0[6] = {
  (MR_String) "llvi_encoded_var_count",
  (MR_String) "llvi_type_params",
  (MR_String) "llvi_ptis",
  (MR_String) "llvi_hlds_var_nums",
  (MR_String) "llvi_short_locns",
  (MR_String) "llvi_long_locns"
};

#line 2381 "ll_backend.layout.c"
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

#line 2396 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_label_long_var_info_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_label_long_var_info_0_0
};

#line 2401 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_long_var_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_label_long_var_info_0_0
  }
};

#line 2410 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_label_long_var_info_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_label_long_var_info_0_0
};

#line 2415 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_long_var_info_0[1] = {
  (MR_Integer) 0
};

#line 2420 "ll_backend.layout.c"
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

#line 2441 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_label_short_var_info_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2450 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_label_short_var_info_0_0[5] = {
  (MR_String) "lsvi_encoded_var_count",
  (MR_String) "lsvi_type_params",
  (MR_String) "lsvi_ptis",
  (MR_String) "lsvi_hlds_var_nums",
  (MR_String) "lsvi_short_locns"
};

#line 2459 "ll_backend.layout.c"
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

#line 2474 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_label_short_var_info_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_label_short_var_info_0_0
};

#line 2479 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_short_var_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_label_short_var_info_0_0
  }
};

#line 2488 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_label_short_var_info_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_label_short_var_info_0_0
};

#line 2493 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_short_var_info_0[1] = {
  (MR_Integer) 0
};

#line 2498 "ll_backend.layout.c"
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

#line 2519 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_0 = {
  (MR_String) "label_has_no_var_info",
  (MR_Integer) 0
};

#line 2525 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_1 = {
  (MR_String) "label_has_short_var_info",
  (MR_Integer) 1
};

#line 2531 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_2 = {
  (MR_String) "label_has_long_var_info",
  (MR_Integer) 2
};

#line 2537 "ll_backend.layout.c"
static const MR_EnumFunctorDescPtr ll_backend__layout__ll_backend__layout__enum_value_ordered_label_vars_0[3] = {
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_0,
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_1,
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_2
};

#line 2544 "ll_backend.layout.c"
static const MR_EnumFunctorDescPtr ll_backend__layout__ll_backend__layout__enum_name_ordered_label_vars_0[3] = {
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_2,
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_0,
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_1
};

#line 2551 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_vars_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 2558 "ll_backend.layout.c"
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

#line 2579 "ll_backend.layout.c"
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

#line 2594 "ll_backend.layout.c"
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

#line 2609 "ll_backend.layout.c"
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

#line 2624 "ll_backend.layout.c"
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

#line 2639 "ll_backend.layout.c"
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

#line 2654 "ll_backend.layout.c"
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

#line 2669 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_array_name_0_6[1] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_label_vars_0
};

#line 2674 "ll_backend.layout.c"
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

#line 2689 "ll_backend.layout.c"
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

#line 2704 "ll_backend.layout.c"
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

#line 2719 "ll_backend.layout.c"
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

#line 2734 "ll_backend.layout.c"
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

#line 2749 "ll_backend.layout.c"
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

#line 2764 "ll_backend.layout.c"
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

#line 2779 "ll_backend.layout.c"
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

#line 2794 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_14 = {
  (MR_String) "proc_table_io_decl_array",
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

#line 2809 "ll_backend.layout.c"
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

#line 2824 "ll_backend.layout.c"
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

#line 2839 "ll_backend.layout.c"
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

#line 2854 "ll_backend.layout.c"
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

#line 2869 "ll_backend.layout.c"
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

#line 2891 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_array_name_0_1[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_6
};

#line 2896 "ll_backend.layout.c"
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

#line 2910 "ll_backend.layout.c"
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

#line 2933 "ll_backend.layout.c"
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

#line 2956 "ll_backend.layout.c"
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

#line 2977 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_kind_0
};

#line 2983 "ll_backend.layout.c"
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

#line 2998 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_1[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0
};

#line 3005 "ll_backend.layout.c"
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

#line 3020 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_2[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3026 "ll_backend.layout.c"
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

#line 3041 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_3[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3047 "ll_backend.layout.c"
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

#line 3062 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_4[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3068 "ll_backend.layout.c"
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

#line 3083 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_5[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
};

#line 3088 "ll_backend.layout.c"
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

#line 3103 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_6[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
};

#line 3108 "ll_backend.layout.c"
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

#line 3123 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_7[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
};

#line 3128 "ll_backend.layout.c"
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

#line 3143 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_8[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3149 "ll_backend.layout.c"
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

#line 3164 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_9[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
};

#line 3169 "ll_backend.layout.c"
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

#line 3184 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_10[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3190 "ll_backend.layout.c"
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

#line 3205 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_11[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3211 "ll_backend.layout.c"
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

#line 3226 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_12[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3233 "ll_backend.layout.c"
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

#line 3248 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_13[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3255 "ll_backend.layout.c"
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

#line 3270 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_14[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3276 "ll_backend.layout.c"
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

#line 3291 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_15[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
};

#line 3296 "ll_backend.layout.c"
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

#line 3311 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_16[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
};

#line 3316 "ll_backend.layout.c"
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

#line 3331 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_17[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
};

#line 3336 "ll_backend.layout.c"
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

#line 3351 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_18[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
};

#line 3356 "ll_backend.layout.c"
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

#line 3371 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_name_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_0
};

#line 3376 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_name_0_1[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_1
};

#line 3381 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_name_0_2[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_2
};

#line 3386 "ll_backend.layout.c"
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

#line 3406 "ll_backend.layout.c"
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

#line 3430 "ll_backend.layout.c"
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

#line 3453 "ll_backend.layout.c"
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

#line 3476 "ll_backend.layout.c"
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

#line 3497 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_slot_name_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_array_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3503 "ll_backend.layout.c"
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

#line 3518 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_slot_name_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_slot_name_0_0
};

#line 3523 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_layout_slot_name_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_slot_name_0_0
  }
};

#line 3532 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_layout_slot_name_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_slot_name_0_0
};

#line 3537 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_layout_slot_name_0[1] = {
  (MR_Integer) 0
};

#line 3542 "ll_backend.layout.c"
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

#line 3563 "ll_backend.layout.c"
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

#line 3578 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_maybe_proc_id_and_more_0_1[4] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_layout_slot_name_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_layout_slot_name_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_layout_slot_name_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0
};

#line 3586 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_maybe_proc_id_and_more_0_1[4] = {
  (MR_String) "maybe_proc_static",
  (MR_String) "maybe_exec_trace",
  (MR_String) "proc_body_bytes",
  (MR_String) "proc_module_layout"
};

#line 3594 "ll_backend.layout.c"
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

#line 3609 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_maybe_proc_id_and_more_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_maybe_proc_id_and_more_0_0
};

#line 3614 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_maybe_proc_id_and_more_0_1[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_maybe_proc_id_and_more_0_1
};

#line 3619 "ll_backend.layout.c"
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

#line 3633 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_maybe_proc_id_and_more_0[2] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_maybe_proc_id_and_more_0_0,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_maybe_proc_id_and_more_0_1
};

#line 3639 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_maybe_proc_id_and_more_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3645 "ll_backend.layout.c"
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

#line 3666 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_module_layout_deep_prof_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_module_layout_deep_prof_0
  }
};

#line 3674 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_module_layout_debug_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_module_layout_debug_0
  }
};

#line 3682 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_module_layout_data_0_0[5] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_string_with_0s_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_module_layout_deep_prof_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_module_layout_debug_0
};

#line 3691 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_module_layout_data_0_0[5] = {
  (MR_String) "mld_module_name",
  (MR_String) "mld_string_table_size",
  (MR_String) "mld_string_table",
  (MR_String) "mld_maybe_deep_prof",
  (MR_String) "mld_maybe_debug"
};

#line 3700 "ll_backend.layout.c"
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

#line 3715 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_data_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_data_0_0
};

#line 3720 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_module_layout_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_data_0_0
  }
};

#line 3729 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_module_layout_data_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_data_0_0
};

#line 3734 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_module_layout_data_0[1] = {
  (MR_Integer) 0
};

#line 3739 "ll_backend.layout.c"
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

#line 3760 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1ll_backend__layout__type_ctor_info_layout_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0
  }
};

#line 3768 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1ll_backend__layout__type_ctor_info_file_layout_data_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_file_layout_data_0
  }
};

#line 3776 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_event_set_layout_data_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_event_set_layout_data_0
  }
};

#line 3784 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_module_layout_debug_0_0[6] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__list__ti_list_1ll_backend__layout__type_ctor_info_layout_name_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__list__ti_list_1ll_backend__layout__type_ctor_info_file_layout_data_0,
  (MR_PseudoTypeInfo) &libs__trace_params__libs__trace_params__type_ctor_info_trace_level_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_event_set_layout_data_0
};

#line 3794 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_module_layout_debug_0_0[6] = {
  (MR_String) "mld_proc_layout_names",
  (MR_String) "mld_file_layouts",
  (MR_String) "mld_trace_level",
  (MR_String) "mld_suppressed_events",
  (MR_String) "mld_num_label_exec_count",
  (MR_String) "mld_maybe_event_specs"
};

#line 3804 "ll_backend.layout.c"
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

#line 3819 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_debug_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_debug_0_0
};

#line 3824 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_module_layout_debug_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_debug_0_0
  }
};

#line 3833 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_module_layout_debug_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_debug_0_0
};

#line 3838 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_module_layout_debug_0[1] = {
  (MR_Integer) 0
};

#line 3843 "ll_backend.layout.c"
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

#line 3864 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 3872 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_module_layout_deep_prof_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 3880 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_module_layout_deep_prof_0_0[4] = {
  (MR_String) "mldp_num_oisu_types",
  (MR_String) "mldp_oisu_bytes",
  (MR_String) "mldp_num_table_types",
  (MR_String) "mldp_type_table_bytes"
};

#line 3888 "ll_backend.layout.c"
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

#line 3903 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_deep_prof_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_deep_prof_0_0
};

#line 3908 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_module_layout_deep_prof_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_deep_prof_0_0
  }
};

#line 3917 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_module_layout_deep_prof_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_deep_prof_0_0
};

#line 3922 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_module_layout_deep_prof_0[1] = {
  (MR_Integer) 0
};

#line 3927 "ll_backend.layout.c"
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

#line 3948 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_data_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_stack_traversal_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_maybe_proc_id_and_more_0
};

#line 3955 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_proc_layout_data_0_0[3] = {
  (MR_String) "proc_layout_label",
  (MR_String) "proc_layout_trav",
  (MR_String) "proc_layout_more"
};

#line 3962 "ll_backend.layout.c"
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

#line 3977 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_data_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_data_0_0
};

#line 3982 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_data_0_0
  }
};

#line 3991 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_data_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_data_0_0
};

#line 3996 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_data_0[1] = {
  (MR_Integer) 0
};

#line 4001 "ll_backend.layout.c"
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

#line 4022 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_data_or_slot_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_data_or_slot_id_0
  }
};

#line 4030 "ll_backend.layout.c"
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

#line 4053 "ll_backend.layout.c"
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

#line 4076 "ll_backend.layout.c"
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

#line 4091 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_exec_trace_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_exec_trace_0_0
};

#line 4096 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_exec_trace_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_exec_trace_0_0
  }
};

#line 4105 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_exec_trace_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_exec_trace_0_0
};

#line 4110 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_exec_trace_0[1] = {
  (MR_Integer) 0
};

#line 4115 "ll_backend.layout.c"
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

#line 4136 "ll_backend.layout.c"
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

#line 4151 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_kind_0_1[1] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_user_or_uci_0
};

#line 4156 "ll_backend.layout.c"
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

#line 4171 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_kind_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_kind_0_0
};

#line 4176 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_kind_0_1[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_kind_0_1
};

#line 4181 "ll_backend.layout.c"
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

#line 4195 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_kind_0[2] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_kind_0_1,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_kind_0_0
};

#line 4201 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_kind_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 4207 "ll_backend.layout.c"
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

#line 4228 "ll_backend.layout.c"
static const MR_VA_TypeInfo_Struct2 ll_backend__layout____vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 4238 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__layout____vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
  }
};

#line 4246 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_proc_static_0_0[6] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_deep_excp_slots_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
};

#line 4256 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_proc_layout_proc_static_0_0[6] = {
  (MR_String) "plps_file_name",
  (MR_String) "plps_line_number",
  (MR_String) "plps_is_in_interface",
  (MR_String) "plps_excp_slots",
  (MR_String) "plps_call_site_statics",
  (MR_String) "plps_coverage_points"
};

#line 4266 "ll_backend.layout.c"
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

#line 4281 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_proc_static_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_proc_static_0_0
};

#line 4286 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_proc_static_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_proc_static_0_0
  }
};

#line 4295 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_proc_static_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_proc_static_0_0
};

#line 4300 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_proc_static_0[1] = {
  (MR_Integer) 0
};

#line 4305 "ll_backend.layout.c"
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

#line 4326 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 4334 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_stack_traversal_0_0[4] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0
};

#line 4342 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_proc_layout_stack_traversal_0_0[4] = {
  (MR_String) "plst_entry_label",
  (MR_String) "plst_succip_slot",
  (MR_String) "plst_stack_slot_count",
  (MR_String) "plst_detism"
};

#line 4350 "ll_backend.layout.c"
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

#line 4365 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_stack_traversal_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_stack_traversal_0_0
};

#line 4370 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_stack_traversal_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_stack_traversal_0_0
  }
};

#line 4379 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_stack_traversal_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_stack_traversal_0_0
};

#line 4384 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_stack_traversal_0[1] = {
  (MR_Integer) 0
};

#line 4389 "ll_backend.layout.c"
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

#line 4410 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_0 = {
  (MR_String) "user",
  (MR_Integer) 0
};

#line 4416 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_1 = {
  (MR_String) "uci",
  (MR_Integer) 1
};

#line 4422 "ll_backend.layout.c"
static const MR_EnumFunctorDescPtr ll_backend__layout__ll_backend__layout__enum_value_ordered_proc_layout_user_or_uci_0[2] = {
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_0,
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_1
};

#line 4428 "ll_backend.layout.c"
static const MR_EnumFunctorDescPtr ll_backend__layout__ll_backend__layout__enum_name_ordered_proc_layout_user_or_uci_0[2] = {
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_1,
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_0
};

#line 4434 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_user_or_uci_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 4440 "ll_backend.layout.c"
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

#line 4461 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_string_with_0s_0[1] = {
  (MR_Integer) 0
};

#line 4466 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4474 "ll_backend.layout.c"
static const MR_NotagFunctorDesc ll_backend__layout__ll_backend__layout__notag_functor_desc_string_with_0s_0 = {
  (MR_String) "string_with_0s",
  (MR_PseudoTypeInfo) &ll_backend__layout__list__ti_list_1builtin__type_ctor_info_string_0,
  NULL
};

#line 4481 "ll_backend.layout.c"
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

#line 4502 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_table_io_decl_data_0_0[4] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0
};

#line 4510 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_table_io_decl_data_0_0[4] = {
  (MR_String) "tid_proc_ptr",
  (MR_String) "tid_num_ptis",
  (MR_String) "tid_ptis",
  (MR_String) "tid_type_params"
};

#line 4518 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_table_io_decl_data_0_0 = {
  (MR_String) "table_io_decl_data",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__layout__ll_backend__layout__field_types_table_io_decl_data_0_0,
  ll_backend__layout__ll_backend__layout__field_names_table_io_decl_data_0_0,
  NULL,
  NULL
};

#line 4533 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_table_io_decl_data_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_table_io_decl_data_0_0
};

#line 4538 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_table_io_decl_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_table_io_decl_data_0_0
  }
};

#line 4547 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_table_io_decl_data_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_table_io_decl_data_0_0
};

#line 4552 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_table_io_decl_data_0[1] = {
  (MR_Integer) 0
};

#line 4557 "ll_backend.layout.c"
const MR_TypeCtorInfo_Struct ll_backend__layout__ll_backend__layout__type_ctor_info_table_io_decl_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__layout____Unify____table_io_decl_data_0_0_10001)),
  ((MR_Box) (ll_backend__layout____Compare____table_io_decl_data_0_0_10001)),
  (MR_String) "ll_backend.layout",
  (MR_String) "table_io_decl_data",
  {
    ll_backend__layout__ll_backend__layout__du_name_ordered_table_io_decl_data_0
  },
  {
    ll_backend__layout__ll_backend__layout__du_ptag_ordered_table_io_decl_data_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__layout__ll_backend__layout__functor_number_map_table_io_decl_data_0
};

#line 4578 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_user_event_data_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
};

#line 4585 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_user_event_data_0_0[3] = {
  (MR_String) "user_event_number",
  (MR_String) "user_event_locns",
  (MR_String) "user_event_var_nums"
};

#line 4592 "ll_backend.layout.c"
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

#line 4607 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_user_event_data_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_user_event_data_0_0
};

#line 4612 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_user_event_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_user_event_data_0_0
  }
};

#line 4621 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_user_event_data_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_user_event_data_0_0
};

#line 4626 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_user_event_data_0[1] = {
  (MR_Integer) 0
};

#line 4631 "ll_backend.layout.c"
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

#line 4652 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____alloc_site_info_0_0_10001(
#line 4655 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 4657 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 4659 "ll_backend.layout.c"
{
#line 4661 "ll_backend.layout.c"
  {
#line 4663 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 4666 "ll_backend.layout.c"
    {
#line 4668 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____alloc_site_info_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 4671 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 4673 "ll_backend.layout.c"
  }
#line 4675 "ll_backend.layout.c"
}

#line 4678 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____alloc_site_info_0_0_10001(
#line 4681 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 4683 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 4685 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 4687 "ll_backend.layout.c"
{
#line 4689 "ll_backend.layout.c"
  {
#line 4691 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 4694 "ll_backend.layout.c"
    {
#line 4696 "ll_backend.layout.c"
      ll_backend__layout____Compare____alloc_site_info_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 4699 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 4701 "ll_backend.layout.c"
  }
#line 4703 "ll_backend.layout.c"
}

#line 4706 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____basic_label_layout_0_0_10001(
#line 4709 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 4711 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 4713 "ll_backend.layout.c"
{
#line 4715 "ll_backend.layout.c"
  {
#line 4717 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 4720 "ll_backend.layout.c"
    {
#line 4722 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____basic_label_layout_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 4725 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 4727 "ll_backend.layout.c"
  }
#line 4729 "ll_backend.layout.c"
}

#line 4732 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____basic_label_layout_0_0_10001(
#line 4735 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 4737 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 4739 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 4741 "ll_backend.layout.c"
{
#line 4743 "ll_backend.layout.c"
  {
#line 4745 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 4748 "ll_backend.layout.c"
    {
#line 4750 "ll_backend.layout.c"
      ll_backend__layout____Compare____basic_label_layout_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 4753 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 4755 "ll_backend.layout.c"
  }
#line 4757 "ll_backend.layout.c"
}

#line 4760 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____closure_proc_id_data_0_0_10001(
#line 4763 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 4765 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 4767 "ll_backend.layout.c"
{
#line 4769 "ll_backend.layout.c"
  {
#line 4771 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 4774 "ll_backend.layout.c"
    {
#line 4776 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____closure_proc_id_data_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 4779 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 4781 "ll_backend.layout.c"
  }
#line 4783 "ll_backend.layout.c"
}

#line 4786 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____closure_proc_id_data_0_0_10001(
#line 4789 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 4791 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 4793 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 4795 "ll_backend.layout.c"
{
#line 4797 "ll_backend.layout.c"
  {
#line 4799 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 4802 "ll_backend.layout.c"
    {
#line 4804 "ll_backend.layout.c"
      ll_backend__layout____Compare____closure_proc_id_data_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 4807 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 4809 "ll_backend.layout.c"
  }
#line 4811 "ll_backend.layout.c"
}

#line 4814 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____data_or_slot_id_0_0_10001(
#line 4817 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 4819 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 4821 "ll_backend.layout.c"
{
#line 4823 "ll_backend.layout.c"
  {
#line 4825 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 4828 "ll_backend.layout.c"
    {
#line 4830 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____data_or_slot_id_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 4833 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 4835 "ll_backend.layout.c"
  }
#line 4837 "ll_backend.layout.c"
}

#line 4840 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____data_or_slot_id_0_0_10001(
#line 4843 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 4845 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 4847 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 4849 "ll_backend.layout.c"
{
#line 4851 "ll_backend.layout.c"
  {
#line 4853 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 4856 "ll_backend.layout.c"
    {
#line 4858 "ll_backend.layout.c"
      ll_backend__layout____Compare____data_or_slot_id_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 4861 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 4863 "ll_backend.layout.c"
  }
#line 4865 "ll_backend.layout.c"
}

#line 4868 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____deep_excp_slots_0_0_10001(
#line 4871 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 4873 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 4875 "ll_backend.layout.c"
{
#line 4877 "ll_backend.layout.c"
  {
#line 4879 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 4882 "ll_backend.layout.c"
    {
#line 4884 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____deep_excp_slots_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 4887 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 4889 "ll_backend.layout.c"
  }
#line 4891 "ll_backend.layout.c"
}

#line 4894 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____deep_excp_slots_0_0_10001(
#line 4897 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 4899 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 4901 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 4903 "ll_backend.layout.c"
{
#line 4905 "ll_backend.layout.c"
  {
#line 4907 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 4910 "ll_backend.layout.c"
    {
#line 4912 "ll_backend.layout.c"
      ll_backend__layout____Compare____deep_excp_slots_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 4915 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 4917 "ll_backend.layout.c"
  }
#line 4919 "ll_backend.layout.c"
}

#line 4922 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____event_set_layout_data_0_0_10001(
#line 4925 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 4927 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 4929 "ll_backend.layout.c"
{
#line 4931 "ll_backend.layout.c"
  {
#line 4933 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 4936 "ll_backend.layout.c"
    {
#line 4938 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____event_set_layout_data_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 4941 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 4943 "ll_backend.layout.c"
  }
#line 4945 "ll_backend.layout.c"
}

#line 4948 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____event_set_layout_data_0_0_10001(
#line 4951 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 4953 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 4955 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 4957 "ll_backend.layout.c"
{
#line 4959 "ll_backend.layout.c"
  {
#line 4961 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 4964 "ll_backend.layout.c"
    {
#line 4966 "ll_backend.layout.c"
      ll_backend__layout____Compare____event_set_layout_data_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 4969 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 4971 "ll_backend.layout.c"
  }
#line 4973 "ll_backend.layout.c"
}

#line 4976 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____file_layout_data_0_0_10001(
#line 4979 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 4981 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 4983 "ll_backend.layout.c"
{
#line 4985 "ll_backend.layout.c"
  {
#line 4987 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 4990 "ll_backend.layout.c"
    {
#line 4992 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____file_layout_data_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 4995 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 4997 "ll_backend.layout.c"
  }
#line 4999 "ll_backend.layout.c"
}

#line 5002 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____file_layout_data_0_0_10001(
#line 5005 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5007 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5009 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5011 "ll_backend.layout.c"
{
#line 5013 "ll_backend.layout.c"
  {
#line 5015 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5018 "ll_backend.layout.c"
    {
#line 5020 "ll_backend.layout.c"
      ll_backend__layout____Compare____file_layout_data_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5023 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5025 "ll_backend.layout.c"
  }
#line 5027 "ll_backend.layout.c"
}

#line 5030 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_layout_long_vars_0_0_10001(
#line 5033 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5035 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5037 "ll_backend.layout.c"
{
#line 5039 "ll_backend.layout.c"
  {
#line 5041 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5044 "ll_backend.layout.c"
    {
#line 5046 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____label_layout_long_vars_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5049 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5051 "ll_backend.layout.c"
  }
#line 5053 "ll_backend.layout.c"
}

#line 5056 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_layout_long_vars_0_0_10001(
#line 5059 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5061 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5063 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5065 "ll_backend.layout.c"
{
#line 5067 "ll_backend.layout.c"
  {
#line 5069 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5072 "ll_backend.layout.c"
    {
#line 5074 "ll_backend.layout.c"
      ll_backend__layout____Compare____label_layout_long_vars_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5077 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5079 "ll_backend.layout.c"
  }
#line 5081 "ll_backend.layout.c"
}

#line 5084 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_layout_no_vars_0_0_10001(
#line 5087 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5089 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5091 "ll_backend.layout.c"
{
#line 5093 "ll_backend.layout.c"
  {
#line 5095 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5098 "ll_backend.layout.c"
    {
#line 5100 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____label_layout_no_vars_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5103 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5105 "ll_backend.layout.c"
  }
#line 5107 "ll_backend.layout.c"
}

#line 5110 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_layout_no_vars_0_0_10001(
#line 5113 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5115 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5117 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5119 "ll_backend.layout.c"
{
#line 5121 "ll_backend.layout.c"
  {
#line 5123 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5126 "ll_backend.layout.c"
    {
#line 5128 "ll_backend.layout.c"
      ll_backend__layout____Compare____label_layout_no_vars_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5131 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5133 "ll_backend.layout.c"
  }
#line 5135 "ll_backend.layout.c"
}

#line 5138 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_layout_short_vars_0_0_10001(
#line 5141 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5143 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5145 "ll_backend.layout.c"
{
#line 5147 "ll_backend.layout.c"
  {
#line 5149 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5152 "ll_backend.layout.c"
    {
#line 5154 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____label_layout_short_vars_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5157 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5159 "ll_backend.layout.c"
  }
#line 5161 "ll_backend.layout.c"
}

#line 5164 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_layout_short_vars_0_0_10001(
#line 5167 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5169 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5171 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5173 "ll_backend.layout.c"
{
#line 5175 "ll_backend.layout.c"
  {
#line 5177 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5180 "ll_backend.layout.c"
    {
#line 5182 "ll_backend.layout.c"
      ll_backend__layout____Compare____label_layout_short_vars_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5185 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5187 "ll_backend.layout.c"
  }
#line 5189 "ll_backend.layout.c"
}

#line 5192 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_long_var_info_0_0_10001(
#line 5195 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5197 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5199 "ll_backend.layout.c"
{
#line 5201 "ll_backend.layout.c"
  {
#line 5203 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5206 "ll_backend.layout.c"
    {
#line 5208 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____label_long_var_info_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5211 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5213 "ll_backend.layout.c"
  }
#line 5215 "ll_backend.layout.c"
}

#line 5218 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_long_var_info_0_0_10001(
#line 5221 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5223 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5225 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5227 "ll_backend.layout.c"
{
#line 5229 "ll_backend.layout.c"
  {
#line 5231 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5234 "ll_backend.layout.c"
    {
#line 5236 "ll_backend.layout.c"
      ll_backend__layout____Compare____label_long_var_info_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5239 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5241 "ll_backend.layout.c"
  }
#line 5243 "ll_backend.layout.c"
}

#line 5246 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_short_var_info_0_0_10001(
#line 5249 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5251 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5253 "ll_backend.layout.c"
{
#line 5255 "ll_backend.layout.c"
  {
#line 5257 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5260 "ll_backend.layout.c"
    {
#line 5262 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____label_short_var_info_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5265 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5267 "ll_backend.layout.c"
  }
#line 5269 "ll_backend.layout.c"
}

#line 5272 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_short_var_info_0_0_10001(
#line 5275 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5277 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5279 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5281 "ll_backend.layout.c"
{
#line 5283 "ll_backend.layout.c"
  {
#line 5285 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5288 "ll_backend.layout.c"
    {
#line 5290 "ll_backend.layout.c"
      ll_backend__layout____Compare____label_short_var_info_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5293 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5295 "ll_backend.layout.c"
  }
#line 5297 "ll_backend.layout.c"
}

#line 5300 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_vars_0_0_10001(
#line 5303 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5305 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5307 "ll_backend.layout.c"
{
#line 5309 "ll_backend.layout.c"
  {
#line 5311 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5314 "ll_backend.layout.c"
    {
#line 5316 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____label_vars_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5319 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5321 "ll_backend.layout.c"
  }
#line 5323 "ll_backend.layout.c"
}

#line 5326 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_vars_0_0_10001(
#line 5329 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5331 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5333 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5335 "ll_backend.layout.c"
{
#line 5337 "ll_backend.layout.c"
  {
#line 5339 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5342 "ll_backend.layout.c"
    {
#line 5344 "ll_backend.layout.c"
      ll_backend__layout____Compare____label_vars_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5347 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5349 "ll_backend.layout.c"
  }
#line 5351 "ll_backend.layout.c"
}

#line 5354 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____layout_array_name_0_0_10001(
#line 5357 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5359 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5361 "ll_backend.layout.c"
{
#line 5363 "ll_backend.layout.c"
  {
#line 5365 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5368 "ll_backend.layout.c"
    {
#line 5370 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_array_name_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5373 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5375 "ll_backend.layout.c"
  }
#line 5377 "ll_backend.layout.c"
}

#line 5380 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____layout_array_name_0_0_10001(
#line 5383 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5385 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5387 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5389 "ll_backend.layout.c"
{
#line 5391 "ll_backend.layout.c"
  {
#line 5393 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5396 "ll_backend.layout.c"
    {
#line 5398 "ll_backend.layout.c"
      ll_backend__layout____Compare____layout_array_name_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5401 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5403 "ll_backend.layout.c"
  }
#line 5405 "ll_backend.layout.c"
}

#line 5408 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____layout_name_0_0_10001(
#line 5411 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5413 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5415 "ll_backend.layout.c"
{
#line 5417 "ll_backend.layout.c"
  {
#line 5419 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5422 "ll_backend.layout.c"
    {
#line 5424 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_name_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5427 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5429 "ll_backend.layout.c"
  }
#line 5431 "ll_backend.layout.c"
}

#line 5434 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____layout_name_0_0_10001(
#line 5437 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5439 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5441 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5443 "ll_backend.layout.c"
{
#line 5445 "ll_backend.layout.c"
  {
#line 5447 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5450 "ll_backend.layout.c"
    {
#line 5452 "ll_backend.layout.c"
      ll_backend__layout____Compare____layout_name_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5455 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5457 "ll_backend.layout.c"
  }
#line 5459 "ll_backend.layout.c"
}

#line 5462 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____layout_slot_name_0_0_10001(
#line 5465 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5467 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5469 "ll_backend.layout.c"
{
#line 5471 "ll_backend.layout.c"
  {
#line 5473 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5476 "ll_backend.layout.c"
    {
#line 5478 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_slot_name_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5481 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5483 "ll_backend.layout.c"
  }
#line 5485 "ll_backend.layout.c"
}

#line 5488 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____layout_slot_name_0_0_10001(
#line 5491 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5493 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5495 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5497 "ll_backend.layout.c"
{
#line 5499 "ll_backend.layout.c"
  {
#line 5501 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5504 "ll_backend.layout.c"
    {
#line 5506 "ll_backend.layout.c"
      ll_backend__layout____Compare____layout_slot_name_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5509 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5511 "ll_backend.layout.c"
  }
#line 5513 "ll_backend.layout.c"
}

#line 5516 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____maybe_proc_id_and_more_0_0_10001(
#line 5519 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5521 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5523 "ll_backend.layout.c"
{
#line 5525 "ll_backend.layout.c"
  {
#line 5527 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5530 "ll_backend.layout.c"
    {
#line 5532 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____maybe_proc_id_and_more_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5535 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5537 "ll_backend.layout.c"
  }
#line 5539 "ll_backend.layout.c"
}

#line 5542 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____maybe_proc_id_and_more_0_0_10001(
#line 5545 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5547 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5549 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5551 "ll_backend.layout.c"
{
#line 5553 "ll_backend.layout.c"
  {
#line 5555 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5558 "ll_backend.layout.c"
    {
#line 5560 "ll_backend.layout.c"
      ll_backend__layout____Compare____maybe_proc_id_and_more_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5563 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5565 "ll_backend.layout.c"
  }
#line 5567 "ll_backend.layout.c"
}

#line 5570 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____module_layout_data_0_0_10001(
#line 5573 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5575 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5577 "ll_backend.layout.c"
{
#line 5579 "ll_backend.layout.c"
  {
#line 5581 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5584 "ll_backend.layout.c"
    {
#line 5586 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____module_layout_data_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5589 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5591 "ll_backend.layout.c"
  }
#line 5593 "ll_backend.layout.c"
}

#line 5596 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____module_layout_data_0_0_10001(
#line 5599 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5601 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5603 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5605 "ll_backend.layout.c"
{
#line 5607 "ll_backend.layout.c"
  {
#line 5609 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5612 "ll_backend.layout.c"
    {
#line 5614 "ll_backend.layout.c"
      ll_backend__layout____Compare____module_layout_data_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5617 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5619 "ll_backend.layout.c"
  }
#line 5621 "ll_backend.layout.c"
}

#line 5624 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____module_layout_debug_0_0_10001(
#line 5627 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5629 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5631 "ll_backend.layout.c"
{
#line 5633 "ll_backend.layout.c"
  {
#line 5635 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5638 "ll_backend.layout.c"
    {
#line 5640 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____module_layout_debug_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5643 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5645 "ll_backend.layout.c"
  }
#line 5647 "ll_backend.layout.c"
}

#line 5650 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____module_layout_debug_0_0_10001(
#line 5653 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5655 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5657 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5659 "ll_backend.layout.c"
{
#line 5661 "ll_backend.layout.c"
  {
#line 5663 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5666 "ll_backend.layout.c"
    {
#line 5668 "ll_backend.layout.c"
      ll_backend__layout____Compare____module_layout_debug_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5671 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5673 "ll_backend.layout.c"
  }
#line 5675 "ll_backend.layout.c"
}

#line 5678 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____module_layout_deep_prof_0_0_10001(
#line 5681 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5683 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5685 "ll_backend.layout.c"
{
#line 5687 "ll_backend.layout.c"
  {
#line 5689 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5692 "ll_backend.layout.c"
    {
#line 5694 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____module_layout_deep_prof_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5697 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5699 "ll_backend.layout.c"
  }
#line 5701 "ll_backend.layout.c"
}

#line 5704 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____module_layout_deep_prof_0_0_10001(
#line 5707 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5709 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5711 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5713 "ll_backend.layout.c"
{
#line 5715 "ll_backend.layout.c"
  {
#line 5717 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5720 "ll_backend.layout.c"
    {
#line 5722 "ll_backend.layout.c"
      ll_backend__layout____Compare____module_layout_deep_prof_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5725 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5727 "ll_backend.layout.c"
  }
#line 5729 "ll_backend.layout.c"
}

#line 5732 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_data_0_0_10001(
#line 5735 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5737 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5739 "ll_backend.layout.c"
{
#line 5741 "ll_backend.layout.c"
  {
#line 5743 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5746 "ll_backend.layout.c"
    {
#line 5748 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____proc_layout_data_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5751 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5753 "ll_backend.layout.c"
  }
#line 5755 "ll_backend.layout.c"
}

#line 5758 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_data_0_0_10001(
#line 5761 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5763 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5765 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5767 "ll_backend.layout.c"
{
#line 5769 "ll_backend.layout.c"
  {
#line 5771 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5774 "ll_backend.layout.c"
    {
#line 5776 "ll_backend.layout.c"
      ll_backend__layout____Compare____proc_layout_data_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5779 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5781 "ll_backend.layout.c"
  }
#line 5783 "ll_backend.layout.c"
}

#line 5786 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_exec_trace_0_0_10001(
#line 5789 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5791 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5793 "ll_backend.layout.c"
{
#line 5795 "ll_backend.layout.c"
  {
#line 5797 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5800 "ll_backend.layout.c"
    {
#line 5802 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____proc_layout_exec_trace_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5805 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5807 "ll_backend.layout.c"
  }
#line 5809 "ll_backend.layout.c"
}

#line 5812 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_exec_trace_0_0_10001(
#line 5815 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5817 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5819 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5821 "ll_backend.layout.c"
{
#line 5823 "ll_backend.layout.c"
  {
#line 5825 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5828 "ll_backend.layout.c"
    {
#line 5830 "ll_backend.layout.c"
      ll_backend__layout____Compare____proc_layout_exec_trace_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5833 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5835 "ll_backend.layout.c"
  }
#line 5837 "ll_backend.layout.c"
}

#line 5840 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_kind_0_0_10001(
#line 5843 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5845 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5847 "ll_backend.layout.c"
{
#line 5849 "ll_backend.layout.c"
  {
#line 5851 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5854 "ll_backend.layout.c"
    {
#line 5856 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____proc_layout_kind_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5859 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5861 "ll_backend.layout.c"
  }
#line 5863 "ll_backend.layout.c"
}

#line 5866 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_kind_0_0_10001(
#line 5869 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5871 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5873 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5875 "ll_backend.layout.c"
{
#line 5877 "ll_backend.layout.c"
  {
#line 5879 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5882 "ll_backend.layout.c"
    {
#line 5884 "ll_backend.layout.c"
      ll_backend__layout____Compare____proc_layout_kind_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5887 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5889 "ll_backend.layout.c"
  }
#line 5891 "ll_backend.layout.c"
}

#line 5894 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_proc_static_0_0_10001(
#line 5897 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5899 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5901 "ll_backend.layout.c"
{
#line 5903 "ll_backend.layout.c"
  {
#line 5905 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5908 "ll_backend.layout.c"
    {
#line 5910 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____proc_layout_proc_static_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5913 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5915 "ll_backend.layout.c"
  }
#line 5917 "ll_backend.layout.c"
}

#line 5920 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_proc_static_0_0_10001(
#line 5923 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5925 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5927 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5929 "ll_backend.layout.c"
{
#line 5931 "ll_backend.layout.c"
  {
#line 5933 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5936 "ll_backend.layout.c"
    {
#line 5938 "ll_backend.layout.c"
      ll_backend__layout____Compare____proc_layout_proc_static_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5941 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5943 "ll_backend.layout.c"
  }
#line 5945 "ll_backend.layout.c"
}

#line 5948 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_stack_traversal_0_0_10001(
#line 5951 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5953 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5955 "ll_backend.layout.c"
{
#line 5957 "ll_backend.layout.c"
  {
#line 5959 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5962 "ll_backend.layout.c"
    {
#line 5964 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____proc_layout_stack_traversal_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5967 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5969 "ll_backend.layout.c"
  }
#line 5971 "ll_backend.layout.c"
}

#line 5974 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_stack_traversal_0_0_10001(
#line 5977 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5979 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5981 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5983 "ll_backend.layout.c"
{
#line 5985 "ll_backend.layout.c"
  {
#line 5987 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5990 "ll_backend.layout.c"
    {
#line 5992 "ll_backend.layout.c"
      ll_backend__layout____Compare____proc_layout_stack_traversal_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5995 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5997 "ll_backend.layout.c"
  }
#line 5999 "ll_backend.layout.c"
}

#line 6002 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_user_or_uci_0_0_10001(
#line 6005 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 6007 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 6009 "ll_backend.layout.c"
{
#line 6011 "ll_backend.layout.c"
  {
#line 6013 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 6016 "ll_backend.layout.c"
    {
#line 6018 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____proc_layout_user_or_uci_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 6021 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 6023 "ll_backend.layout.c"
  }
#line 6025 "ll_backend.layout.c"
}

#line 6028 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_user_or_uci_0_0_10001(
#line 6031 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 6033 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 6035 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 6037 "ll_backend.layout.c"
{
#line 6039 "ll_backend.layout.c"
  {
#line 6041 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 6044 "ll_backend.layout.c"
    {
#line 6046 "ll_backend.layout.c"
      ll_backend__layout____Compare____proc_layout_user_or_uci_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 6049 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 6051 "ll_backend.layout.c"
  }
#line 6053 "ll_backend.layout.c"
}

#line 6056 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____string_with_0s_0_0_10001(
#line 6059 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 6061 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 6063 "ll_backend.layout.c"
{
#line 6065 "ll_backend.layout.c"
  {
#line 6067 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 6070 "ll_backend.layout.c"
    {
#line 6072 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____string_with_0s_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 6075 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 6077 "ll_backend.layout.c"
  }
#line 6079 "ll_backend.layout.c"
}

#line 6082 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____string_with_0s_0_0_10001(
#line 6085 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 6087 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 6089 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 6091 "ll_backend.layout.c"
{
#line 6093 "ll_backend.layout.c"
  {
#line 6095 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 6098 "ll_backend.layout.c"
    {
#line 6100 "ll_backend.layout.c"
      ll_backend__layout____Compare____string_with_0s_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 6103 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 6105 "ll_backend.layout.c"
  }
#line 6107 "ll_backend.layout.c"
}

#line 6110 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____table_io_decl_data_0_0_10001(
#line 6113 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 6115 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 6117 "ll_backend.layout.c"
{
#line 6119 "ll_backend.layout.c"
  {
#line 6121 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 6124 "ll_backend.layout.c"
    {
#line 6126 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____table_io_decl_data_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 6129 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 6131 "ll_backend.layout.c"
  }
#line 6133 "ll_backend.layout.c"
}

#line 6136 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____table_io_decl_data_0_0_10001(
#line 6139 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 6141 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 6143 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 6145 "ll_backend.layout.c"
{
#line 6147 "ll_backend.layout.c"
  {
#line 6149 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 6152 "ll_backend.layout.c"
    {
#line 6154 "ll_backend.layout.c"
      ll_backend__layout____Compare____table_io_decl_data_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 6157 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 6159 "ll_backend.layout.c"
  }
#line 6161 "ll_backend.layout.c"
}

#line 6164 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____user_event_data_0_0_10001(
#line 6167 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 6169 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 6171 "ll_backend.layout.c"
{
#line 6173 "ll_backend.layout.c"
  {
#line 6175 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 6178 "ll_backend.layout.c"
    {
#line 6180 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____user_event_data_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 6183 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 6185 "ll_backend.layout.c"
  }
#line 6187 "ll_backend.layout.c"
}

#line 6190 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____user_event_data_0_0_10001(
#line 6193 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 6195 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 6197 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 6199 "ll_backend.layout.c"
{
#line 6201 "ll_backend.layout.c"
  {
#line 6203 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 6206 "ll_backend.layout.c"
    {
#line 6208 "ll_backend.layout.c"
      ll_backend__layout____Compare____user_event_data_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 6211 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 6213 "ll_backend.layout.c"
  }
#line 6215 "ll_backend.layout.c"
}

#line 73 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____user_event_data_0_0(
#line 73 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 73 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 73 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 73 "layout.m"
{
#line 73 "layout.m"
  {
#line 73 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 73 "layout.m"
    MR_Integer ll_backend__layout__CastX_12 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 73 "layout.m"
    MR_Integer ll_backend__layout__CastY_13 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 73 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_12 == ll_backend__layout__CastY_13);
#line 73 "layout.m"
    if (ll_backend__layout__succeeded)
#line 6242 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 73 "layout.m"
    else
#line 73 "layout.m"
      {
#line 73 "layout.m"
        MR_Integer ll_backend__layout__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 73 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 73 "layout.m"
        MR_Integer ll_backend__layout__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 73 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 73 "layout.m"
        MR_Word ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 73 "layout.m"
        MR_Word ll_backend__layout__V_10_10;

#line 73 "layout.m"
        {
#line 73 "layout.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_10_10, ll_backend__layout__V_4_4, ll_backend__layout__V_7_7);
        }
#line 6268 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_10_10 == (MR_Integer) 0);
#line 73 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 73 "layout.m"
        if (ll_backend__layout__succeeded)
#line 73 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_10_10;
#line 73 "layout.m"
        else
#line 73 "layout.m"
          {
#line 73 "layout.m"
            MR_Word ll_backend__layout__V_11_11;

#line 73 "layout.m"
            {
#line 73 "layout.m"
              ll_backend__llds____Compare____rval_0_0(&ll_backend__layout__V_11_11, ll_backend__layout__V_5_5, ll_backend__layout__V_8_8);
            }
#line 6288 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_11_11 == (MR_Integer) 0);
#line 73 "layout.m"
            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 73 "layout.m"
            if (ll_backend__layout__succeeded)
#line 73 "layout.m"
              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_11_11;
#line 73 "layout.m"
            else
#line 73 "layout.m"
              {
#line 73 "layout.m"
                ll_backend__layout____Compare____layout_slot_name_0_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_6_6, ll_backend__layout__V_9_9);
#line 73 "layout.m"
                return;
              }
#line 73 "layout.m"
          }
#line 73 "layout.m"
      }
#line 73 "layout.m"
  }
#line 73 "layout.m"
}

#line 73 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____user_event_data_0_0(
#line 73 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 73 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 73 "layout.m"
{
#line 73 "layout.m"
  {
#line 73 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 73 "layout.m"
    MR_Integer ll_backend__layout__CastX_9 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 73 "layout.m"
    MR_Integer ll_backend__layout__CastY_10 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 73 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_9 == ll_backend__layout__CastY_10);
#line 73 "layout.m"
    if (ll_backend__layout__succeeded)
#line 73 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 73 "layout.m"
    else
#line 73 "layout.m"
      {
#line 73 "layout.m"
        MR_Integer ll_backend__layout__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 73 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 73 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 73 "layout.m"
        MR_Integer ll_backend__layout__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 73 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));

#line 6355 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_3_3 == ll_backend__layout__V_6_6);
#line 73 "layout.m"
        if (ll_backend__layout__succeeded)
#line 73 "layout.m"
          {
#line 6361 "ll_backend.layout.c"
            {
#line 6363 "ll_backend.layout.c"
              ll_backend__layout__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__layout__V_4_4, ll_backend__layout__V_7_7);
            }
#line 73 "layout.m"
            if (ll_backend__layout__succeeded)
#line 6368 "ll_backend.layout.c"
              {
#line 6370 "ll_backend.layout.c"
                return ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_slot_name_0_0(ll_backend__layout__V_5_5, ll_backend__layout__V_8_8);
              }
#line 73 "layout.m"
          }
#line 73 "layout.m"
      }
#line 73 "layout.m"
    return ll_backend__layout__succeeded;
#line 73 "layout.m"
  }
#line 73 "layout.m"
}

#line 176 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____table_io_decl_data_0_0(
#line 176 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 176 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 176 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 176 "layout.m"
{
#line 176 "layout.m"
  {
#line 176 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 176 "layout.m"
    MR_Integer ll_backend__layout__CastX_15 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 176 "layout.m"
    MR_Integer ll_backend__layout__CastY_16 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 176 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_15 == ll_backend__layout__CastY_16);
#line 176 "layout.m"
    if (ll_backend__layout__succeeded)
#line 6408 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 176 "layout.m"
    else
#line 176 "layout.m"
      {
#line 176 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 176 "layout.m"
        MR_Integer ll_backend__layout__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 176 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 176 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 176 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 176 "layout.m"
        MR_Integer ll_backend__layout__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 176 "layout.m"
        MR_Word ll_backend__layout__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 176 "layout.m"
        MR_Word ll_backend__layout__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 3)));
#line 176 "layout.m"
        MR_Word ll_backend__layout__V_12_12;

#line 176 "layout.m"
        {
#line 176 "layout.m"
          ll_backend__layout____Compare____layout_name_0_0(&ll_backend__layout__V_12_12, ll_backend__layout__V_4_4, ll_backend__layout__V_8_8);
        }
#line 6438 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_12_12 == (MR_Integer) 0);
#line 176 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 176 "layout.m"
        if (ll_backend__layout__succeeded)
#line 176 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_12_12;
#line 176 "layout.m"
        else
#line 176 "layout.m"
          {
#line 176 "layout.m"
            MR_Word ll_backend__layout__V_13_13;

#line 176 "layout.m"
            {
#line 176 "layout.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_13_13, ll_backend__layout__V_5_5, ll_backend__layout__V_9_9);
            }
#line 6458 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_13_13 == (MR_Integer) 0);
#line 176 "layout.m"
            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 176 "layout.m"
            if (ll_backend__layout__succeeded)
#line 176 "layout.m"
              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_13_13;
#line 176 "layout.m"
            else
#line 176 "layout.m"
              {
#line 176 "layout.m"
                MR_Word ll_backend__layout__V_14_14;

#line 176 "layout.m"
                {
#line 176 "layout.m"
                  ll_backend__llds____Compare____rval_0_0(&ll_backend__layout__V_14_14, ll_backend__layout__V_6_6, ll_backend__layout__V_10_10);
                }
#line 6478 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_14_14 == (MR_Integer) 0);
#line 176 "layout.m"
                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 176 "layout.m"
                if (ll_backend__layout__succeeded)
#line 176 "layout.m"
                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_14_14;
#line 176 "layout.m"
                else
#line 176 "layout.m"
                  {
#line 176 "layout.m"
                    ll_backend__llds____Compare____rval_0_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_7_7, ll_backend__layout__V_11_11);
#line 176 "layout.m"
                    return;
                  }
#line 176 "layout.m"
              }
#line 176 "layout.m"
          }
#line 176 "layout.m"
      }
#line 176 "layout.m"
  }
#line 176 "layout.m"
}

#line 176 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____table_io_decl_data_0_0(
#line 176 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 176 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 176 "layout.m"
{
#line 176 "layout.m"
  {
#line 176 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 176 "layout.m"
    MR_Integer ll_backend__layout__CastX_11 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 176 "layout.m"
    MR_Integer ll_backend__layout__CastY_12 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 176 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_11 == ll_backend__layout__CastY_12);
#line 176 "layout.m"
    if (ll_backend__layout__succeeded)
#line 176 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 176 "layout.m"
    else
#line 176 "layout.m"
      {
#line 176 "layout.m"
        MR_Word ll_backend__layout__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 176 "layout.m"
        MR_Integer ll_backend__layout__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 176 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 176 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 3)));
#line 176 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 176 "layout.m"
        MR_Integer ll_backend__layout__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 176 "layout.m"
        MR_Word ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 176 "layout.m"
        MR_Word ll_backend__layout__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));

#line 6551 "ll_backend.layout.c"
        {
#line 6553 "ll_backend.layout.c"
          ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_name_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_7_7);
        }
#line 176 "layout.m"
        if (ll_backend__layout__succeeded)
#line 176 "layout.m"
          {
#line 6560 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 == ll_backend__layout__V_8_8);
#line 176 "layout.m"
            if (ll_backend__layout__succeeded)
#line 176 "layout.m"
              {
#line 6566 "ll_backend.layout.c"
                {
#line 6568 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__layout__V_5_5, ll_backend__layout__V_9_9);
                }
#line 176 "layout.m"
                if (ll_backend__layout__succeeded)
#line 6573 "ll_backend.layout.c"
                  {
#line 6575 "ll_backend.layout.c"
                    return ll_backend__layout__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__layout__V_6_6, ll_backend__layout__V_10_10);
                  }
#line 176 "layout.m"
              }
#line 176 "layout.m"
          }
#line 176 "layout.m"
      }
#line 176 "layout.m"
    return ll_backend__layout__succeeded;
#line 176 "layout.m"
  }
#line 176 "layout.m"
}

#line 259 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____string_with_0s_0_0(
#line 259 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 259 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 259 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 259 "layout.m"
{
#line 259 "layout.m"
  {
#line 259 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 259 "layout.m"
    MR_Integer ll_backend__layout__CastX_6 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 259 "layout.m"
    MR_Integer ll_backend__layout__CastY_7 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 259 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_6 == ll_backend__layout__CastY_7);
#line 259 "layout.m"
    if (ll_backend__layout__succeeded)
#line 6615 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 259 "layout.m"
    else
#line 259 "layout.m"
      {
#line 259 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = (MR_Word) ll_backend__layout__HeadVar__2_2;
#line 259 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = (MR_Word) ll_backend__layout__HeadVar__3_3;

#line 259 "layout.m"
        {
#line 259 "layout.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[14], ll_backend__layout__HeadVar__1_1, ((MR_Box) (ll_backend__layout__V_4_4)), ((MR_Box) (ll_backend__layout__V_5_5)));
#line 259 "layout.m"
          return;
        }
#line 259 "layout.m"
      }
#line 259 "layout.m"
  }
#line 259 "layout.m"
}

#line 259 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____string_with_0s_0_0(
#line 259 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 259 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 259 "layout.m"
{
#line 259 "layout.m"
  {
#line 259 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 259 "layout.m"
    MR_Integer ll_backend__layout__CastX_5 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 259 "layout.m"
    MR_Integer ll_backend__layout__CastY_6 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 259 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_5 == ll_backend__layout__CastY_6);
#line 259 "layout.m"
    if (ll_backend__layout__succeeded)
#line 259 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 259 "layout.m"
    else
#line 259 "layout.m"
      {
#line 259 "layout.m"
        MR_Word ll_backend__layout__V_3_3 = (MR_Word) ll_backend__layout__HeadVar__1_1;
#line 259 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = (MR_Word) ll_backend__layout__HeadVar__2_2;

#line 6673 "ll_backend.layout.c"
        {
#line 6675 "ll_backend.layout.c"
          return ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__layout_scalar_common_1[14], ((MR_Box) (ll_backend__layout__V_3_3)), ((MR_Box) (ll_backend__layout__V_4_4)));
        }
#line 259 "layout.m"
      }
#line 259 "layout.m"
    return ll_backend__layout__succeeded;
#line 259 "layout.m"
  }
#line 259 "layout.m"
}

#line 374 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____proc_layout_user_or_uci_0_0(
#line 374 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 374 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 374 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 374 "layout.m"
{
#line 374 "layout.m"
  {
#line 374 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 374 "layout.m"
    MR_Integer ll_backend__layout__Cast_HeadVar1_4 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 374 "layout.m"
    MR_Integer ll_backend__layout__Cast_HeadVar2_5 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 374 "layout.m"
    {
#line 374 "layout.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__Cast_HeadVar1_4, ll_backend__layout__Cast_HeadVar2_5);
#line 374 "layout.m"
      return;
    }
#line 374 "layout.m"
  }
#line 374 "layout.m"
}

#line 374 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_user_or_uci_0_0(
#line 374 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_1,
#line 374 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 374 "layout.m"
{
#line 6728 "ll_backend.layout.c"
  {
#line 6730 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded = (ll_backend__layout__HeadVar__2_1 == ll_backend__layout__HeadVar__2_2);

#line 6733 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 6735 "ll_backend.layout.c"
  }
#line 374 "layout.m"
}

#line 138 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____proc_layout_stack_traversal_0_0(
#line 138 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 138 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 138 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 138 "layout.m"
{
#line 138 "layout.m"
  {
#line 138 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 138 "layout.m"
    MR_Integer ll_backend__layout__CastX_15 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 138 "layout.m"
    MR_Integer ll_backend__layout__CastY_16 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 138 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_15 == ll_backend__layout__CastY_16);
#line 138 "layout.m"
    if (ll_backend__layout__succeeded)
#line 6764 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 138 "layout.m"
    else
#line 138 "layout.m"
      {
#line 138 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 138 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 138 "layout.m"
        MR_Integer ll_backend__layout__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 138 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 138 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 138 "layout.m"
        MR_Word ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 138 "layout.m"
        MR_Integer ll_backend__layout__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 138 "layout.m"
        MR_Word ll_backend__layout__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 3)));
#line 138 "layout.m"
        MR_Word ll_backend__layout__V_12_12;

#line 138 "layout.m"
        {
#line 138 "layout.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[13], &ll_backend__layout__V_12_12, ((MR_Box) (ll_backend__layout__V_4_4)), ((MR_Box) (ll_backend__layout__V_8_8)));
        }
#line 6794 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_12_12 == (MR_Integer) 0);
#line 138 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 138 "layout.m"
        if (ll_backend__layout__succeeded)
#line 138 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_12_12;
#line 138 "layout.m"
        else
#line 138 "layout.m"
          {
#line 138 "layout.m"
            MR_Word ll_backend__layout__V_13_13;

#line 138 "layout.m"
            {
#line 138 "layout.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[2], &ll_backend__layout__V_13_13, ((MR_Box) (ll_backend__layout__V_5_5)), ((MR_Box) (ll_backend__layout__V_9_9)));
            }
#line 6814 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_13_13 == (MR_Integer) 0);
#line 138 "layout.m"
            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 138 "layout.m"
            if (ll_backend__layout__succeeded)
#line 138 "layout.m"
              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_13_13;
#line 138 "layout.m"
            else
#line 138 "layout.m"
              {
#line 138 "layout.m"
                MR_Word ll_backend__layout__V_14_14;

#line 138 "layout.m"
                {
#line 138 "layout.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_14_14, ll_backend__layout__V_6_6, ll_backend__layout__V_10_10);
                }
#line 6834 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_14_14 == (MR_Integer) 0);
#line 138 "layout.m"
                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 138 "layout.m"
                if (ll_backend__layout__succeeded)
#line 138 "layout.m"
                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_14_14;
#line 138 "layout.m"
                else
#line 138 "layout.m"
                  {
#line 138 "layout.m"
                    MR_Integer ll_backend__layout__V_21_21 = (MR_Integer) ll_backend__layout__V_7_7;
#line 138 "layout.m"
                    MR_Integer ll_backend__layout__V_22_22 = (MR_Integer) ll_backend__layout__V_11_11;

#line 138 "layout.m"
                    {
#line 138 "layout.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_21_21, ll_backend__layout__V_22_22);
#line 138 "layout.m"
                      return;
                    }
#line 138 "layout.m"
                  }
#line 138 "layout.m"
              }
#line 138 "layout.m"
          }
#line 138 "layout.m"
      }
#line 138 "layout.m"
  }
#line 138 "layout.m"
}

#line 138 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_stack_traversal_0_0(
#line 138 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 138 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 138 "layout.m"
{
#line 138 "layout.m"
  {
#line 138 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 138 "layout.m"
    MR_Integer ll_backend__layout__CastX_11 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 138 "layout.m"
    MR_Integer ll_backend__layout__CastY_12 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 138 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_11 == ll_backend__layout__CastY_12);
#line 138 "layout.m"
    if (ll_backend__layout__succeeded)
#line 138 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 138 "layout.m"
    else
#line 138 "layout.m"
      {
#line 138 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_14_14;
#line 138 "layout.m"
        MR_Word ll_backend__layout__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 138 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 138 "layout.m"
        MR_Integer ll_backend__layout__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 138 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 3)));
#line 138 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 138 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 138 "layout.m"
        MR_Integer ll_backend__layout__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 138 "layout.m"
        MR_Word ll_backend__layout__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));

#line 6918 "ll_backend.layout.c"
        {
#line 6920 "ll_backend.layout.c"
          ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__layout_scalar_common_1[13], ((MR_Box) (ll_backend__layout__V_3_3)), ((MR_Box) (ll_backend__layout__V_7_7)));
        }
#line 138 "layout.m"
        if (ll_backend__layout__succeeded)
#line 138 "layout.m"
          {
#line 6927 "ll_backend.layout.c"
            ll_backend__layout__TypeInfo_14_14 = (MR_Word) &ll_backend__layout_scalar_common_1[2];
#line 6929 "ll_backend.layout.c"
            {
#line 6931 "ll_backend.layout.c"
              ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_14_14, ((MR_Box) (ll_backend__layout__V_4_4)), ((MR_Box) (ll_backend__layout__V_8_8)));
            }
#line 138 "layout.m"
            if (ll_backend__layout__succeeded)
#line 138 "layout.m"
              {
#line 6938 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_5_5 == ll_backend__layout__V_9_9);
#line 138 "layout.m"
                if (ll_backend__layout__succeeded)
#line 6942 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = (ll_backend__layout__V_6_6 == ll_backend__layout__V_10_10);
#line 138 "layout.m"
              }
#line 138 "layout.m"
          }
#line 138 "layout.m"
      }
#line 138 "layout.m"
    return ll_backend__layout__succeeded;
#line 138 "layout.m"
  }
#line 138 "layout.m"
}

#line 166 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____proc_layout_proc_static_0_0(
#line 166 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 166 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 166 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 166 "layout.m"
{
#line 166 "layout.m"
  {
#line 166 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 166 "layout.m"
    MR_Integer ll_backend__layout__CastX_21 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 166 "layout.m"
    MR_Integer ll_backend__layout__CastY_22 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 166 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_21 == ll_backend__layout__CastY_22);
#line 166 "layout.m"
    if (ll_backend__layout__succeeded)
#line 6981 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 166 "layout.m"
    else
#line 166 "layout.m"
      {
#line 166 "layout.m"
        MR_String ll_backend__layout__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 166 "layout.m"
        MR_Integer ll_backend__layout__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 166 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 166 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 166 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 4)));
#line 166 "layout.m"
        MR_Word ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 5)));
#line 166 "layout.m"
        MR_String ll_backend__layout__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 166 "layout.m"
        MR_Integer ll_backend__layout__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 166 "layout.m"
        MR_Word ll_backend__layout__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 166 "layout.m"
        MR_Word ll_backend__layout__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 3)));
#line 166 "layout.m"
        MR_Word ll_backend__layout__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 4)));
#line 166 "layout.m"
        MR_Word ll_backend__layout__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 5)));
#line 166 "layout.m"
        MR_Word ll_backend__layout__V_16_16;

#line 166 "layout.m"
        {
#line 166 "layout.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__layout__V_16_16, ll_backend__layout__V_4_4, ll_backend__layout__V_10_10);
        }
#line 7019 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_16_16 == (MR_Integer) 0);
#line 166 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 166 "layout.m"
        if (ll_backend__layout__succeeded)
#line 166 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_16_16;
#line 166 "layout.m"
        else
#line 166 "layout.m"
          {
#line 166 "layout.m"
            MR_Word ll_backend__layout__V_17_17;

#line 166 "layout.m"
            {
#line 166 "layout.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_17_17, ll_backend__layout__V_5_5, ll_backend__layout__V_11_11);
            }
#line 7039 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_17_17 == (MR_Integer) 0);
#line 166 "layout.m"
            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 166 "layout.m"
            if (ll_backend__layout__succeeded)
#line 166 "layout.m"
              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_17_17;
#line 166 "layout.m"
            else
#line 166 "layout.m"
              {
#line 166 "layout.m"
                MR_Word ll_backend__layout__V_18_18;
#line 166 "layout.m"
                MR_Integer ll_backend__layout__V_29_29 = (MR_Integer) ll_backend__layout__V_6_6;
#line 166 "layout.m"
                MR_Integer ll_backend__layout__V_30_30 = (MR_Integer) ll_backend__layout__V_12_12;

#line 166 "layout.m"
                {
#line 166 "layout.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_18_18, ll_backend__layout__V_29_29, ll_backend__layout__V_30_30);
                }
#line 7063 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_18_18 == (MR_Integer) 0);
#line 166 "layout.m"
                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 166 "layout.m"
                if (ll_backend__layout__succeeded)
#line 166 "layout.m"
                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_18_18;
#line 166 "layout.m"
                else
#line 166 "layout.m"
                  {
#line 166 "layout.m"
                    MR_Word ll_backend__layout__V_19_19;

#line 166 "layout.m"
                    {
#line 166 "layout.m"
                      ll_backend__layout____Compare____deep_excp_slots_0_0(&ll_backend__layout__V_19_19, ll_backend__layout__V_7_7, ll_backend__layout__V_13_13);
                    }
#line 7083 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = (ll_backend__layout__V_19_19 == (MR_Integer) 0);
#line 166 "layout.m"
                    ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 166 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 166 "layout.m"
                      *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_19_19;
#line 166 "layout.m"
                    else
#line 166 "layout.m"
                      {
#line 166 "layout.m"
                        MR_Word ll_backend__layout__V_20_20;

#line 166 "layout.m"
                        {
#line 166 "layout.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[12], &ll_backend__layout__V_20_20, ((MR_Box) (ll_backend__layout__V_8_8)), ((MR_Box) (ll_backend__layout__V_14_14)));
                        }
#line 7103 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = (ll_backend__layout__V_20_20 == (MR_Integer) 0);
#line 166 "layout.m"
                        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 166 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 166 "layout.m"
                          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_20_20;
#line 166 "layout.m"
                        else
#line 166 "layout.m"
                          {
#line 166 "layout.m"
                            {
#line 166 "layout.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[12], ll_backend__layout__HeadVar__1_1, ((MR_Box) (ll_backend__layout__V_9_9)), ((MR_Box) (ll_backend__layout__V_15_15)));
#line 166 "layout.m"
                              return;
                            }
#line 166 "layout.m"
                          }
#line 166 "layout.m"
                      }
#line 166 "layout.m"
                  }
#line 166 "layout.m"
              }
#line 166 "layout.m"
          }
#line 166 "layout.m"
      }
#line 166 "layout.m"
  }
#line 166 "layout.m"
}

#line 166 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_proc_static_0_0(
#line 166 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 166 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 166 "layout.m"
{
#line 166 "layout.m"
  {
#line 166 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 166 "layout.m"
    MR_Integer ll_backend__layout__CastX_15 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 166 "layout.m"
    MR_Integer ll_backend__layout__CastY_16 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 166 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_15 == ll_backend__layout__CastY_16);
#line 166 "layout.m"
    if (ll_backend__layout__succeeded)
#line 166 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 166 "layout.m"
    else
#line 166 "layout.m"
      {
#line 166 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_17_17;
#line 166 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_18_18;
#line 166 "layout.m"
        MR_String ll_backend__layout__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 166 "layout.m"
        MR_Integer ll_backend__layout__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 166 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 166 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 3)));
#line 166 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 4)));
#line 166 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 5)));
#line 166 "layout.m"
        MR_String ll_backend__layout__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 166 "layout.m"
        MR_Integer ll_backend__layout__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 166 "layout.m"
        MR_Word ll_backend__layout__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 166 "layout.m"
        MR_Word ll_backend__layout__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 166 "layout.m"
        MR_Word ll_backend__layout__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 4)));
#line 166 "layout.m"
        MR_Word ll_backend__layout__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 5)));

#line 7196 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (strcmp(ll_backend__layout__V_3_3, ll_backend__layout__V_9_9) == 0);
#line 166 "layout.m"
        if (ll_backend__layout__succeeded)
#line 166 "layout.m"
          {
#line 7202 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 == ll_backend__layout__V_10_10);
#line 166 "layout.m"
            if (ll_backend__layout__succeeded)
#line 166 "layout.m"
              {
#line 7208 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_5_5 == ll_backend__layout__V_11_11);
#line 166 "layout.m"
                if (ll_backend__layout__succeeded)
#line 166 "layout.m"
                  {
#line 7214 "ll_backend.layout.c"
                    {
#line 7216 "ll_backend.layout.c"
                      ll_backend__layout__succeeded = ll_backend__layout____Unify____deep_excp_slots_0_0(ll_backend__layout__V_6_6, ll_backend__layout__V_12_12);
                    }
#line 166 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 166 "layout.m"
                      {
#line 7223 "ll_backend.layout.c"
                        ll_backend__layout__TypeInfo_17_17 = (MR_Word) &ll_backend__layout_scalar_common_1[12];
#line 7225 "ll_backend.layout.c"
                        {
#line 7227 "ll_backend.layout.c"
                          ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_17_17, ((MR_Box) (ll_backend__layout__V_7_7)), ((MR_Box) (ll_backend__layout__V_13_13)));
                        }
#line 166 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 166 "layout.m"
                          {
#line 7234 "ll_backend.layout.c"
                            ll_backend__layout__TypeInfo_18_18 = (MR_Word) &ll_backend__layout_scalar_common_1[12];
#line 7236 "ll_backend.layout.c"
                            {
#line 7238 "ll_backend.layout.c"
                              return ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_18_18, ((MR_Box) (ll_backend__layout__V_8_8)), ((MR_Box) (ll_backend__layout__V_14_14)));
                            }
#line 166 "layout.m"
                          }
#line 166 "layout.m"
                      }
#line 166 "layout.m"
                  }
#line 166 "layout.m"
              }
#line 166 "layout.m"
          }
#line 166 "layout.m"
      }
#line 166 "layout.m"
    return ll_backend__layout__succeeded;
#line 166 "layout.m"
  }
#line 166 "layout.m"
}

#line 370 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____proc_layout_kind_0_0(
#line 370 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 370 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 370 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 370 "layout.m"
{
#line 370 "layout.m"
  {
#line 370 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 370 "layout.m"
    MR_Integer ll_backend__layout__CastX_8 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 370 "layout.m"
    MR_Integer ll_backend__layout__CastY_9 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 370 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_8 == ll_backend__layout__CastY_9);
#line 370 "layout.m"
    if (ll_backend__layout__succeeded)
#line 7284 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 370 "layout.m"
    else
#line 370 "layout.m"
      if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 370 "layout.m"
        if ((ll_backend__layout__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 370 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 370 "layout.m"
        else
#line 7296 "ll_backend.layout.c"
          *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 1;
#line 370 "layout.m"
      else
#line 370 "layout.m"
        {
#line 370 "layout.m"
          MR_Word ll_backend__layout__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));

#line 370 "layout.m"
          if ((ll_backend__layout__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7307 "ll_backend.layout.c"
            *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 2;
#line 370 "layout.m"
          else
#line 370 "layout.m"
            {
#line 370 "layout.m"
              MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 370 "layout.m"
              MR_Integer ll_backend__layout__V_12_12 = (MR_Integer) ll_backend__layout__V_11_11;
#line 370 "layout.m"
              MR_Integer ll_backend__layout__V_13_13 = (MR_Integer) ll_backend__layout__V_7_7;

#line 370 "layout.m"
              {
#line 370 "layout.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_12_12, ll_backend__layout__V_13_13);
#line 370 "layout.m"
                return;
              }
#line 370 "layout.m"
            }
#line 370 "layout.m"
        }
#line 370 "layout.m"
  }
#line 370 "layout.m"
}

#line 370 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_kind_0_0(
#line 370 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 370 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 370 "layout.m"
{
#line 370 "layout.m"
  {
#line 370 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 370 "layout.m"
    MR_Integer ll_backend__layout__CastX_7 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 370 "layout.m"
    MR_Integer ll_backend__layout__CastY_8 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 370 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_7 == ll_backend__layout__CastY_8);
#line 370 "layout.m"
    if (ll_backend__layout__succeeded)
#line 370 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 370 "layout.m"
    else
#line 370 "layout.m"
      if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 370 "layout.m"
        {
#line 370 "layout.m"
          MR_Integer ll_backend__layout__CastX_3 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 370 "layout.m"
          MR_Integer ll_backend__layout__CastY_4 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 370 "layout.m"
          ll_backend__layout__succeeded = (ll_backend__layout__CastY_4 == ll_backend__layout__CastX_3);
#line 370 "layout.m"
        }
#line 370 "layout.m"
      else
#line 370 "layout.m"
        {
#line 370 "layout.m"
          MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 370 "layout.m"
          MR_Word ll_backend__layout__V_6_6;

#line 370 "layout.m"
          ll_backend__layout__succeeded = ((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 370 "layout.m"
          if (ll_backend__layout__succeeded)
#line 370 "layout.m"
            {
#line 370 "layout.m"
              ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 7392 "ll_backend.layout.c"
              ll_backend__layout__succeeded = (ll_backend__layout__V_5_5 == ll_backend__layout__V_6_6);
#line 370 "layout.m"
            }
#line 370 "layout.m"
        }
#line 370 "layout.m"
    return ll_backend__layout__succeeded;
#line 370 "layout.m"
  }
#line 370 "layout.m"
}

#line 192 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____proc_layout_exec_trace_0_0(
#line 192 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 192 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 192 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 192 "layout.m"
{
#line 192 "layout.m"
  {
#line 192 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 192 "layout.m"
    MR_Integer ll_backend__layout__CastX_60 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 192 "layout.m"
    MR_Integer ll_backend__layout__CastY_61 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 192 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_60 == ll_backend__layout__CastY_61);
#line 192 "layout.m"
    if (ll_backend__layout__succeeded)
#line 7429 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 192 "layout.m"
    else
#line 192 "layout.m"
      {
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 192 "layout.m"
        MR_Integer ll_backend__layout__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 4)));
#line 192 "layout.m"
        MR_Integer ll_backend__layout__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 5)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 6)));
#line 192 "layout.m"
        MR_Integer ll_backend__layout__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 7)));
#line 192 "layout.m"
        MR_Integer ll_backend__layout__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 8)));
#line 192 "layout.m"
        MR_Integer ll_backend__layout__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 9)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 10)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 11)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 12)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 13)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 14)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 15)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 16)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 17)));
#line 192 "layout.m"
        MR_Integer ll_backend__layout__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 18)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 192 "layout.m"
        MR_Integer ll_backend__layout__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 3)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 4)));
#line 192 "layout.m"
        MR_Integer ll_backend__layout__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 5)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 6)));
#line 192 "layout.m"
        MR_Integer ll_backend__layout__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 7)));
#line 192 "layout.m"
        MR_Integer ll_backend__layout__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 8)));
#line 192 "layout.m"
        MR_Integer ll_backend__layout__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 9)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 10)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 11)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 12)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 13)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 14)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 15)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 16)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 17)));
#line 192 "layout.m"
        MR_Integer ll_backend__layout__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 18)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_42_42;

#line 192 "layout.m"
        {
#line 192 "layout.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[3], &ll_backend__layout__V_42_42, ((MR_Box) (ll_backend__layout__V_4_4)), ((MR_Box) (ll_backend__layout__V_23_23)));
        }
#line 7519 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_42_42 == (MR_Integer) 0);
#line 192 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 192 "layout.m"
        if (ll_backend__layout__succeeded)
#line 192 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_42_42;
#line 192 "layout.m"
        else
#line 192 "layout.m"
          {
#line 192 "layout.m"
            MR_Word ll_backend__layout__V_43_43;

#line 192 "layout.m"
            {
#line 192 "layout.m"
              ll_backend__layout____Compare____layout_slot_name_0_0(&ll_backend__layout__V_43_43, ll_backend__layout__V_5_5, ll_backend__layout__V_24_24);
            }
#line 7539 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_43_43 == (MR_Integer) 0);
#line 192 "layout.m"
            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 192 "layout.m"
            if (ll_backend__layout__succeeded)
#line 192 "layout.m"
              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_43_43;
#line 192 "layout.m"
            else
#line 192 "layout.m"
              {
#line 192 "layout.m"
                MR_Word ll_backend__layout__V_44_44;

#line 192 "layout.m"
                {
#line 192 "layout.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_44_44, ll_backend__layout__V_6_6, ll_backend__layout__V_25_25);
                }
#line 7559 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_44_44 == (MR_Integer) 0);
#line 192 "layout.m"
                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 192 "layout.m"
                if (ll_backend__layout__succeeded)
#line 192 "layout.m"
                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_44_44;
#line 192 "layout.m"
                else
#line 192 "layout.m"
                  {
#line 192 "layout.m"
                    MR_Word ll_backend__layout__V_45_45;

#line 192 "layout.m"
                    {
#line 192 "layout.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[11], &ll_backend__layout__V_45_45, ((MR_Box) (ll_backend__layout__V_7_7)), ((MR_Box) (ll_backend__layout__V_26_26)));
                    }
#line 7579 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = (ll_backend__layout__V_45_45 == (MR_Integer) 0);
#line 192 "layout.m"
                    ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 192 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 192 "layout.m"
                      *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_45_45;
#line 192 "layout.m"
                    else
#line 192 "layout.m"
                      {
#line 192 "layout.m"
                        MR_Word ll_backend__layout__V_46_46;

#line 192 "layout.m"
                        {
#line 192 "layout.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[3], &ll_backend__layout__V_46_46, ((MR_Box) (ll_backend__layout__V_8_8)), ((MR_Box) (ll_backend__layout__V_27_27)));
                        }
#line 7599 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = (ll_backend__layout__V_46_46 == (MR_Integer) 0);
#line 192 "layout.m"
                        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 192 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 192 "layout.m"
                          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_46_46;
#line 192 "layout.m"
                        else
#line 192 "layout.m"
                          {
#line 192 "layout.m"
                            MR_Word ll_backend__layout__V_47_47;

#line 192 "layout.m"
                            {
#line 192 "layout.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_47_47, ll_backend__layout__V_9_9, ll_backend__layout__V_28_28);
                            }
#line 7619 "ll_backend.layout.c"
                            ll_backend__layout__succeeded = (ll_backend__layout__V_47_47 == (MR_Integer) 0);
#line 192 "layout.m"
                            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 192 "layout.m"
                            if (ll_backend__layout__succeeded)
#line 192 "layout.m"
                              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_47_47;
#line 192 "layout.m"
                            else
#line 192 "layout.m"
                              {
#line 192 "layout.m"
                                MR_Word ll_backend__layout__V_48_48;

#line 192 "layout.m"
                                {
#line 192 "layout.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[3], &ll_backend__layout__V_48_48, ((MR_Box) (ll_backend__layout__V_10_10)), ((MR_Box) (ll_backend__layout__V_29_29)));
                                }
#line 7639 "ll_backend.layout.c"
                                ll_backend__layout__succeeded = (ll_backend__layout__V_48_48 == (MR_Integer) 0);
#line 192 "layout.m"
                                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 192 "layout.m"
                                if (ll_backend__layout__succeeded)
#line 192 "layout.m"
                                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_48_48;
#line 192 "layout.m"
                                else
#line 192 "layout.m"
                                  {
#line 192 "layout.m"
                                    MR_Word ll_backend__layout__V_49_49;

#line 192 "layout.m"
                                    {
#line 192 "layout.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_49_49, ll_backend__layout__V_11_11, ll_backend__layout__V_30_30);
                                    }
#line 7659 "ll_backend.layout.c"
                                    ll_backend__layout__succeeded = (ll_backend__layout__V_49_49 == (MR_Integer) 0);
#line 192 "layout.m"
                                    ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 192 "layout.m"
                                    if (ll_backend__layout__succeeded)
#line 192 "layout.m"
                                      *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_49_49;
#line 192 "layout.m"
                                    else
#line 192 "layout.m"
                                      {
#line 192 "layout.m"
                                        MR_Word ll_backend__layout__V_50_50;

#line 192 "layout.m"
                                        {
#line 192 "layout.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_50_50, ll_backend__layout__V_12_12, ll_backend__layout__V_31_31);
                                        }
#line 7679 "ll_backend.layout.c"
                                        ll_backend__layout__succeeded = (ll_backend__layout__V_50_50 == (MR_Integer) 0);
#line 192 "layout.m"
                                        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 192 "layout.m"
                                        if (ll_backend__layout__succeeded)
#line 192 "layout.m"
                                          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_50_50;
#line 192 "layout.m"
                                        else
#line 192 "layout.m"
                                          {
#line 192 "layout.m"
                                            MR_Word ll_backend__layout__V_51_51;

#line 192 "layout.m"
                                            {
#line 192 "layout.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_51_51, ll_backend__layout__V_13_13, ll_backend__layout__V_32_32);
                                            }
#line 7699 "ll_backend.layout.c"
                                            ll_backend__layout__succeeded = (ll_backend__layout__V_51_51 == (MR_Integer) 0);
#line 192 "layout.m"
                                            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 192 "layout.m"
                                            if (ll_backend__layout__succeeded)
#line 192 "layout.m"
                                              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_51_51;
#line 192 "layout.m"
                                            else
#line 192 "layout.m"
                                              {
#line 192 "layout.m"
                                                MR_Word ll_backend__layout__V_52_52;

#line 192 "layout.m"
                                                {
#line 192 "layout.m"
                                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[2], &ll_backend__layout__V_52_52, ((MR_Box) (ll_backend__layout__V_14_14)), ((MR_Box) (ll_backend__layout__V_33_33)));
                                                }
#line 7719 "ll_backend.layout.c"
                                                ll_backend__layout__succeeded = (ll_backend__layout__V_52_52 == (MR_Integer) 0);
#line 192 "layout.m"
                                                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 192 "layout.m"
                                                if (ll_backend__layout__succeeded)
#line 192 "layout.m"
                                                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_52_52;
#line 192 "layout.m"
                                                else
#line 192 "layout.m"
                                                  {
#line 192 "layout.m"
                                                    MR_Word ll_backend__layout__V_53_53;

#line 192 "layout.m"
                                                    {
#line 192 "layout.m"
                                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[2], &ll_backend__layout__V_53_53, ((MR_Box) (ll_backend__layout__V_15_15)), ((MR_Box) (ll_backend__layout__V_34_34)));
                                                    }
#line 7739 "ll_backend.layout.c"
                                                    ll_backend__layout__succeeded = (ll_backend__layout__V_53_53 == (MR_Integer) 0);
#line 192 "layout.m"
                                                    ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 192 "layout.m"
                                                    if (ll_backend__layout__succeeded)
#line 192 "layout.m"
                                                      *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_53_53;
#line 192 "layout.m"
                                                    else
#line 192 "layout.m"
                                                      {
#line 192 "layout.m"
                                                        MR_Word ll_backend__layout__V_54_54;

#line 192 "layout.m"
                                                        {
#line 192 "layout.m"
                                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[2], &ll_backend__layout__V_54_54, ((MR_Box) (ll_backend__layout__V_16_16)), ((MR_Box) (ll_backend__layout__V_35_35)));
                                                        }
#line 7759 "ll_backend.layout.c"
                                                        ll_backend__layout__succeeded = (ll_backend__layout__V_54_54 == (MR_Integer) 0);
#line 192 "layout.m"
                                                        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 192 "layout.m"
                                                        if (ll_backend__layout__succeeded)
#line 192 "layout.m"
                                                          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_54_54;
#line 192 "layout.m"
                                                        else
#line 192 "layout.m"
                                                          {
#line 192 "layout.m"
                                                            MR_Word ll_backend__layout__V_55_55;

#line 192 "layout.m"
                                                            {
#line 192 "layout.m"
                                                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[2], &ll_backend__layout__V_55_55, ((MR_Box) (ll_backend__layout__V_17_17)), ((MR_Box) (ll_backend__layout__V_36_36)));
                                                            }
#line 7779 "ll_backend.layout.c"
                                                            ll_backend__layout__succeeded = (ll_backend__layout__V_55_55 == (MR_Integer) 0);
#line 192 "layout.m"
                                                            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 192 "layout.m"
                                                            if (ll_backend__layout__succeeded)
#line 192 "layout.m"
                                                              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_55_55;
#line 192 "layout.m"
                                                            else
#line 192 "layout.m"
                                                              {
#line 192 "layout.m"
                                                                MR_Word ll_backend__layout__V_56_56;

#line 192 "layout.m"
                                                                {
#line 192 "layout.m"
                                                                  parse_tree__prog_data____Compare____eval_method_0_0(&ll_backend__layout__V_56_56, ll_backend__layout__V_18_18, ll_backend__layout__V_37_37);
                                                                }
#line 7799 "ll_backend.layout.c"
                                                                ll_backend__layout__succeeded = (ll_backend__layout__V_56_56 == (MR_Integer) 0);
#line 192 "layout.m"
                                                                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 192 "layout.m"
                                                                if (ll_backend__layout__succeeded)
#line 192 "layout.m"
                                                                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_56_56;
#line 192 "layout.m"
                                                                else
#line 192 "layout.m"
                                                                  {
#line 192 "layout.m"
                                                                    MR_Word ll_backend__layout__V_57_57;

#line 192 "layout.m"
                                                                    {
#line 192 "layout.m"
                                                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[2], &ll_backend__layout__V_57_57, ((MR_Box) (ll_backend__layout__V_19_19)), ((MR_Box) (ll_backend__layout__V_38_38)));
                                                                    }
#line 7819 "ll_backend.layout.c"
                                                                    ll_backend__layout__succeeded = (ll_backend__layout__V_57_57 == (MR_Integer) 0);
#line 192 "layout.m"
                                                                    ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 192 "layout.m"
                                                                    if (ll_backend__layout__succeeded)
#line 192 "layout.m"
                                                                      *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_57_57;
#line 192 "layout.m"
                                                                    else
#line 192 "layout.m"
                                                                      {
#line 192 "layout.m"
                                                                        MR_Word ll_backend__layout__V_58_58;

#line 192 "layout.m"
                                                                        {
#line 192 "layout.m"
                                                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[2], &ll_backend__layout__V_58_58, ((MR_Box) (ll_backend__layout__V_20_20)), ((MR_Box) (ll_backend__layout__V_39_39)));
                                                                        }
#line 7839 "ll_backend.layout.c"
                                                                        ll_backend__layout__succeeded = (ll_backend__layout__V_58_58 == (MR_Integer) 0);
#line 192 "layout.m"
                                                                        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 192 "layout.m"
                                                                        if (ll_backend__layout__succeeded)
#line 192 "layout.m"
                                                                          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_58_58;
#line 192 "layout.m"
                                                                        else
#line 192 "layout.m"
                                                                          {
#line 192 "layout.m"
                                                                            MR_Word ll_backend__layout__V_59_59;

#line 192 "layout.m"
                                                                            {
#line 192 "layout.m"
                                                                              libs__trace_params____Compare____trace_level_0_0(&ll_backend__layout__V_59_59, ll_backend__layout__V_21_21, ll_backend__layout__V_40_40);
                                                                            }
#line 7859 "ll_backend.layout.c"
                                                                            ll_backend__layout__succeeded = (ll_backend__layout__V_59_59 == (MR_Integer) 0);
#line 192 "layout.m"
                                                                            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 192 "layout.m"
                                                                            if (ll_backend__layout__succeeded)
#line 192 "layout.m"
                                                                              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_59_59;
#line 192 "layout.m"
                                                                            else
#line 192 "layout.m"
                                                                              {
#line 192 "layout.m"
                                                                                mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_22_22, ll_backend__layout__V_41_41);
#line 192 "layout.m"
                                                                                return;
                                                                              }
#line 192 "layout.m"
                                                                          }
#line 192 "layout.m"
                                                                      }
#line 192 "layout.m"
                                                                  }
#line 192 "layout.m"
                                                              }
#line 192 "layout.m"
                                                          }
#line 192 "layout.m"
                                                      }
#line 192 "layout.m"
                                                  }
#line 192 "layout.m"
                                              }
#line 192 "layout.m"
                                          }
#line 192 "layout.m"
                                      }
#line 192 "layout.m"
                                  }
#line 192 "layout.m"
                              }
#line 192 "layout.m"
                          }
#line 192 "layout.m"
                      }
#line 192 "layout.m"
                  }
#line 192 "layout.m"
              }
#line 192 "layout.m"
          }
#line 192 "layout.m"
      }
#line 192 "layout.m"
  }
#line 192 "layout.m"
}

#line 192 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_exec_trace_0_0(
#line 192 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 192 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 192 "layout.m"
{
#line 192 "layout.m"
  {
#line 192 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 192 "layout.m"
    MR_Integer ll_backend__layout__CastX_41 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 192 "layout.m"
    MR_Integer ll_backend__layout__CastY_42 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 192 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_41 == ll_backend__layout__CastY_42);
#line 192 "layout.m"
    if (ll_backend__layout__succeeded)
#line 192 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 192 "layout.m"
    else
#line 192 "layout.m"
      {
#line 192 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_44_44;
#line 192 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_45_45;
#line 192 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_46_46;
#line 192 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_47_47;
#line 192 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_48_48;
#line 192 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_49_49;
#line 192 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_50_50;
#line 192 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_52_52;
#line 192 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_53_53;
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 192 "layout.m"
        MR_Integer ll_backend__layout__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 3)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 4)));
#line 192 "layout.m"
        MR_Integer ll_backend__layout__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 5)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 6)));
#line 192 "layout.m"
        MR_Integer ll_backend__layout__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 7)));
#line 192 "layout.m"
        MR_Integer ll_backend__layout__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 8)));
#line 192 "layout.m"
        MR_Integer ll_backend__layout__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 9)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 10)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 11)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 12)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 13)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 14)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 15)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 16)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 17)));
#line 192 "layout.m"
        MR_Integer ll_backend__layout__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 18)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 192 "layout.m"
        MR_Integer ll_backend__layout__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 4)));
#line 192 "layout.m"
        MR_Integer ll_backend__layout__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 5)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 6)));
#line 192 "layout.m"
        MR_Integer ll_backend__layout__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 7)));
#line 192 "layout.m"
        MR_Integer ll_backend__layout__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 8)));
#line 192 "layout.m"
        MR_Integer ll_backend__layout__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 9)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 10)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 11)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 12)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 13)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 14)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 15)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 16)));
#line 192 "layout.m"
        MR_Word ll_backend__layout__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 17)));
#line 192 "layout.m"
        MR_Integer ll_backend__layout__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 18)));

#line 8040 "ll_backend.layout.c"
        {
#line 8042 "ll_backend.layout.c"
          ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__layout_scalar_common_1[3], ((MR_Box) (ll_backend__layout__V_3_3)), ((MR_Box) (ll_backend__layout__V_22_22)));
        }
#line 192 "layout.m"
        if (ll_backend__layout__succeeded)
#line 192 "layout.m"
          {
#line 8049 "ll_backend.layout.c"
            {
#line 8051 "ll_backend.layout.c"
              ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_slot_name_0_0(ll_backend__layout__V_4_4, ll_backend__layout__V_23_23);
            }
#line 192 "layout.m"
            if (ll_backend__layout__succeeded)
#line 192 "layout.m"
              {
#line 8058 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_5_5 == ll_backend__layout__V_24_24);
#line 192 "layout.m"
                if (ll_backend__layout__succeeded)
#line 192 "layout.m"
                  {
#line 8064 "ll_backend.layout.c"
                    ll_backend__layout__TypeInfo_44_44 = (MR_Word) &ll_backend__layout_scalar_common_1[11];
#line 8066 "ll_backend.layout.c"
                    {
#line 8068 "ll_backend.layout.c"
                      ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_44_44, ((MR_Box) (ll_backend__layout__V_6_6)), ((MR_Box) (ll_backend__layout__V_25_25)));
                    }
#line 192 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 192 "layout.m"
                      {
#line 8075 "ll_backend.layout.c"
                        ll_backend__layout__TypeInfo_45_45 = (MR_Word) &ll_backend__layout_scalar_common_1[3];
#line 8077 "ll_backend.layout.c"
                        {
#line 8079 "ll_backend.layout.c"
                          ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_45_45, ((MR_Box) (ll_backend__layout__V_7_7)), ((MR_Box) (ll_backend__layout__V_26_26)));
                        }
#line 192 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 192 "layout.m"
                          {
#line 8086 "ll_backend.layout.c"
                            ll_backend__layout__succeeded = (ll_backend__layout__V_8_8 == ll_backend__layout__V_27_27);
#line 192 "layout.m"
                            if (ll_backend__layout__succeeded)
#line 192 "layout.m"
                              {
#line 8092 "ll_backend.layout.c"
                                ll_backend__layout__TypeInfo_46_46 = (MR_Word) &ll_backend__layout_scalar_common_1[3];
#line 8094 "ll_backend.layout.c"
                                {
#line 8096 "ll_backend.layout.c"
                                  ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_46_46, ((MR_Box) (ll_backend__layout__V_9_9)), ((MR_Box) (ll_backend__layout__V_28_28)));
                                }
#line 192 "layout.m"
                                if (ll_backend__layout__succeeded)
#line 192 "layout.m"
                                  {
#line 8103 "ll_backend.layout.c"
                                    ll_backend__layout__succeeded = (ll_backend__layout__V_10_10 == ll_backend__layout__V_29_29);
#line 192 "layout.m"
                                    if (ll_backend__layout__succeeded)
#line 192 "layout.m"
                                      {
#line 8109 "ll_backend.layout.c"
                                        ll_backend__layout__succeeded = (ll_backend__layout__V_11_11 == ll_backend__layout__V_30_30);
#line 192 "layout.m"
                                        if (ll_backend__layout__succeeded)
#line 192 "layout.m"
                                          {
#line 8115 "ll_backend.layout.c"
                                            ll_backend__layout__succeeded = (ll_backend__layout__V_12_12 == ll_backend__layout__V_31_31);
#line 192 "layout.m"
                                            if (ll_backend__layout__succeeded)
#line 192 "layout.m"
                                              {
#line 8121 "ll_backend.layout.c"
                                                ll_backend__layout__TypeInfo_47_47 = (MR_Word) &ll_backend__layout_scalar_common_1[2];
#line 8123 "ll_backend.layout.c"
                                                {
#line 8125 "ll_backend.layout.c"
                                                  ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_47_47, ((MR_Box) (ll_backend__layout__V_13_13)), ((MR_Box) (ll_backend__layout__V_32_32)));
                                                }
#line 192 "layout.m"
                                                if (ll_backend__layout__succeeded)
#line 192 "layout.m"
                                                  {
#line 8132 "ll_backend.layout.c"
                                                    ll_backend__layout__TypeInfo_48_48 = (MR_Word) &ll_backend__layout_scalar_common_1[2];
#line 8134 "ll_backend.layout.c"
                                                    {
#line 8136 "ll_backend.layout.c"
                                                      ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_48_48, ((MR_Box) (ll_backend__layout__V_14_14)), ((MR_Box) (ll_backend__layout__V_33_33)));
                                                    }
#line 192 "layout.m"
                                                    if (ll_backend__layout__succeeded)
#line 192 "layout.m"
                                                      {
#line 8143 "ll_backend.layout.c"
                                                        ll_backend__layout__TypeInfo_49_49 = (MR_Word) &ll_backend__layout_scalar_common_1[2];
#line 8145 "ll_backend.layout.c"
                                                        {
#line 8147 "ll_backend.layout.c"
                                                          ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_49_49, ((MR_Box) (ll_backend__layout__V_15_15)), ((MR_Box) (ll_backend__layout__V_34_34)));
                                                        }
#line 192 "layout.m"
                                                        if (ll_backend__layout__succeeded)
#line 192 "layout.m"
                                                          {
#line 8154 "ll_backend.layout.c"
                                                            ll_backend__layout__TypeInfo_50_50 = (MR_Word) &ll_backend__layout_scalar_common_1[2];
#line 8156 "ll_backend.layout.c"
                                                            {
#line 8158 "ll_backend.layout.c"
                                                              ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_50_50, ((MR_Box) (ll_backend__layout__V_16_16)), ((MR_Box) (ll_backend__layout__V_35_35)));
                                                            }
#line 192 "layout.m"
                                                            if (ll_backend__layout__succeeded)
#line 192 "layout.m"
                                                              {
#line 8165 "ll_backend.layout.c"
                                                                {
#line 8167 "ll_backend.layout.c"
                                                                  ll_backend__layout__succeeded = parse_tree__prog_data____Unify____eval_method_0_0(ll_backend__layout__V_17_17, ll_backend__layout__V_36_36);
                                                                }
#line 192 "layout.m"
                                                                if (ll_backend__layout__succeeded)
#line 192 "layout.m"
                                                                  {
#line 8174 "ll_backend.layout.c"
                                                                    ll_backend__layout__TypeInfo_52_52 = (MR_Word) &ll_backend__layout_scalar_common_1[2];
#line 8176 "ll_backend.layout.c"
                                                                    {
#line 8178 "ll_backend.layout.c"
                                                                      ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_52_52, ((MR_Box) (ll_backend__layout__V_18_18)), ((MR_Box) (ll_backend__layout__V_37_37)));
                                                                    }
#line 192 "layout.m"
                                                                    if (ll_backend__layout__succeeded)
#line 192 "layout.m"
                                                                      {
#line 8185 "ll_backend.layout.c"
                                                                        ll_backend__layout__TypeInfo_53_53 = (MR_Word) &ll_backend__layout_scalar_common_1[2];
#line 8187 "ll_backend.layout.c"
                                                                        {
#line 8189 "ll_backend.layout.c"
                                                                          ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_53_53, ((MR_Box) (ll_backend__layout__V_19_19)), ((MR_Box) (ll_backend__layout__V_38_38)));
                                                                        }
#line 192 "layout.m"
                                                                        if (ll_backend__layout__succeeded)
#line 192 "layout.m"
                                                                          {
#line 8196 "ll_backend.layout.c"
                                                                            {
#line 8198 "ll_backend.layout.c"
                                                                              ll_backend__layout__succeeded = libs__trace_params____Unify____trace_level_0_0(ll_backend__layout__V_20_20, ll_backend__layout__V_39_39);
                                                                            }
#line 192 "layout.m"
                                                                            if (ll_backend__layout__succeeded)
#line 8203 "ll_backend.layout.c"
                                                                              ll_backend__layout__succeeded = (ll_backend__layout__V_21_21 == ll_backend__layout__V_40_40);
#line 192 "layout.m"
                                                                          }
#line 192 "layout.m"
                                                                      }
#line 192 "layout.m"
                                                                  }
#line 192 "layout.m"
                                                              }
#line 192 "layout.m"
                                                          }
#line 192 "layout.m"
                                                      }
#line 192 "layout.m"
                                                  }
#line 192 "layout.m"
                                              }
#line 192 "layout.m"
                                          }
#line 192 "layout.m"
                                      }
#line 192 "layout.m"
                                  }
#line 192 "layout.m"
                              }
#line 192 "layout.m"
                          }
#line 192 "layout.m"
                      }
#line 192 "layout.m"
                  }
#line 192 "layout.m"
              }
#line 192 "layout.m"
          }
#line 192 "layout.m"
      }
#line 192 "layout.m"
    return ll_backend__layout__succeeded;
#line 192 "layout.m"
  }
#line 192 "layout.m"
}

#line 242 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____proc_layout_data_0_0(
#line 242 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 242 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 242 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 242 "layout.m"
{
#line 242 "layout.m"
  {
#line 242 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 242 "layout.m"
    MR_Integer ll_backend__layout__CastX_12 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 242 "layout.m"
    MR_Integer ll_backend__layout__CastY_13 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 242 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_12 == ll_backend__layout__CastY_13);
#line 242 "layout.m"
    if (ll_backend__layout__succeeded)
#line 8272 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 242 "layout.m"
    else
#line 242 "layout.m"
      {
#line 242 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 242 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 242 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 242 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 242 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 242 "layout.m"
        MR_Word ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 242 "layout.m"
        MR_Word ll_backend__layout__V_10_10;

#line 242 "layout.m"
        {
#line 242 "layout.m"
          hlds__hlds_rtti____Compare____rtti_proc_label_0_0(&ll_backend__layout__V_10_10, ll_backend__layout__V_4_4, ll_backend__layout__V_7_7);
        }
#line 8298 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_10_10 == (MR_Integer) 0);
#line 242 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 242 "layout.m"
        if (ll_backend__layout__succeeded)
#line 242 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_10_10;
#line 242 "layout.m"
        else
#line 242 "layout.m"
          {
#line 242 "layout.m"
            MR_Word ll_backend__layout__V_11_11;

#line 242 "layout.m"
            {
#line 242 "layout.m"
              ll_backend__layout____Compare____proc_layout_stack_traversal_0_0(&ll_backend__layout__V_11_11, ll_backend__layout__V_5_5, ll_backend__layout__V_8_8);
            }
#line 8318 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_11_11 == (MR_Integer) 0);
#line 242 "layout.m"
            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 242 "layout.m"
            if (ll_backend__layout__succeeded)
#line 242 "layout.m"
              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_11_11;
#line 242 "layout.m"
            else
#line 242 "layout.m"
              {
#line 242 "layout.m"
                ll_backend__layout____Compare____maybe_proc_id_and_more_0_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_6_6, ll_backend__layout__V_9_9);
#line 242 "layout.m"
                return;
              }
#line 242 "layout.m"
          }
#line 242 "layout.m"
      }
#line 242 "layout.m"
  }
#line 242 "layout.m"
}

#line 242 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_data_0_0(
#line 242 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 242 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 242 "layout.m"
{
#line 242 "layout.m"
  {
#line 242 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 242 "layout.m"
    MR_Integer ll_backend__layout__CastX_9 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 242 "layout.m"
    MR_Integer ll_backend__layout__CastY_10 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 242 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_9 == ll_backend__layout__CastY_10);
#line 242 "layout.m"
    if (ll_backend__layout__succeeded)
#line 242 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 242 "layout.m"
    else
#line 242 "layout.m"
      {
#line 242 "layout.m"
        MR_Word ll_backend__layout__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 242 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 242 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 242 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 242 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 242 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));

#line 8385 "ll_backend.layout.c"
        {
#line 8387 "ll_backend.layout.c"
          ll_backend__layout__succeeded = hlds__hlds_rtti____Unify____rtti_proc_label_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_6_6);
        }
#line 242 "layout.m"
        if (ll_backend__layout__succeeded)
#line 242 "layout.m"
          {
#line 8394 "ll_backend.layout.c"
            {
#line 8396 "ll_backend.layout.c"
              ll_backend__layout__succeeded = ll_backend__layout____Unify____proc_layout_stack_traversal_0_0(ll_backend__layout__V_4_4, ll_backend__layout__V_7_7);
            }
#line 242 "layout.m"
            if (ll_backend__layout__succeeded)
#line 8401 "ll_backend.layout.c"
              {
#line 8403 "ll_backend.layout.c"
                return ll_backend__layout__succeeded = ll_backend__layout____Unify____maybe_proc_id_and_more_0_0(ll_backend__layout__V_5_5, ll_backend__layout__V_8_8);
              }
#line 242 "layout.m"
          }
#line 242 "layout.m"
      }
#line 242 "layout.m"
    return ll_backend__layout__succeeded;
#line 242 "layout.m"
  }
#line 242 "layout.m"
}

#line 291 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____module_layout_deep_prof_0_0(
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
    MR_Integer ll_backend__layout__CastX_15 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 291 "layout.m"
    MR_Integer ll_backend__layout__CastY_16 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 291 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_15 == ll_backend__layout__CastY_16);
#line 291 "layout.m"
    if (ll_backend__layout__succeeded)
#line 8441 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 291 "layout.m"
    else
#line 291 "layout.m"
      {
#line 291 "layout.m"
        MR_Integer ll_backend__layout__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 291 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 291 "layout.m"
        MR_Integer ll_backend__layout__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 291 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 291 "layout.m"
        MR_Integer ll_backend__layout__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 291 "layout.m"
        MR_Word ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 291 "layout.m"
        MR_Integer ll_backend__layout__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 291 "layout.m"
        MR_Word ll_backend__layout__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 3)));
#line 291 "layout.m"
        MR_Word ll_backend__layout__V_12_12;

#line 291 "layout.m"
        {
#line 291 "layout.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_12_12, ll_backend__layout__V_4_4, ll_backend__layout__V_8_8);
        }
#line 8471 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_12_12 == (MR_Integer) 0);
#line 291 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 291 "layout.m"
        if (ll_backend__layout__succeeded)
#line 291 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_12_12;
#line 291 "layout.m"
        else
#line 291 "layout.m"
          {
#line 291 "layout.m"
            MR_Word ll_backend__layout__V_13_13;

#line 291 "layout.m"
            {
#line 291 "layout.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[10], &ll_backend__layout__V_13_13, ((MR_Box) (ll_backend__layout__V_5_5)), ((MR_Box) (ll_backend__layout__V_9_9)));
            }
#line 8491 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_13_13 == (MR_Integer) 0);
#line 291 "layout.m"
            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 291 "layout.m"
            if (ll_backend__layout__succeeded)
#line 291 "layout.m"
              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_13_13;
#line 291 "layout.m"
            else
#line 291 "layout.m"
              {
#line 291 "layout.m"
                MR_Word ll_backend__layout__V_14_14;

#line 291 "layout.m"
                {
#line 291 "layout.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_14_14, ll_backend__layout__V_6_6, ll_backend__layout__V_10_10);
                }
#line 8511 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_14_14 == (MR_Integer) 0);
#line 291 "layout.m"
                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 291 "layout.m"
                if (ll_backend__layout__succeeded)
#line 291 "layout.m"
                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_14_14;
#line 291 "layout.m"
                else
#line 291 "layout.m"
                  {
#line 291 "layout.m"
                    {
#line 291 "layout.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[10], ll_backend__layout__HeadVar__1_1, ((MR_Box) (ll_backend__layout__V_7_7)), ((MR_Box) (ll_backend__layout__V_11_11)));
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
  }
#line 291 "layout.m"
}

#line 291 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____module_layout_deep_prof_0_0(
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
    MR_Integer ll_backend__layout__CastX_11 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 291 "layout.m"
    MR_Integer ll_backend__layout__CastY_12 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 291 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_11 == ll_backend__layout__CastY_12);
#line 291 "layout.m"
    if (ll_backend__layout__succeeded)
#line 291 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 291 "layout.m"
    else
#line 291 "layout.m"
      {
#line 291 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_13_13;
#line 291 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_14_14;
#line 291 "layout.m"
        MR_Integer ll_backend__layout__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 291 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 291 "layout.m"
        MR_Integer ll_backend__layout__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 291 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 3)));
#line 291 "layout.m"
        MR_Integer ll_backend__layout__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 291 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 291 "layout.m"
        MR_Integer ll_backend__layout__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 291 "layout.m"
        MR_Word ll_backend__layout__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));

#line 8592 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_3_3 == ll_backend__layout__V_7_7);
#line 291 "layout.m"
        if (ll_backend__layout__succeeded)
#line 291 "layout.m"
          {
#line 8598 "ll_backend.layout.c"
            ll_backend__layout__TypeInfo_13_13 = (MR_Word) &ll_backend__layout_scalar_common_1[10];
#line 8600 "ll_backend.layout.c"
            {
#line 8602 "ll_backend.layout.c"
              ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_13_13, ((MR_Box) (ll_backend__layout__V_4_4)), ((MR_Box) (ll_backend__layout__V_8_8)));
            }
#line 291 "layout.m"
            if (ll_backend__layout__succeeded)
#line 291 "layout.m"
              {
#line 8609 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_5_5 == ll_backend__layout__V_9_9);
#line 291 "layout.m"
                if (ll_backend__layout__succeeded)
#line 291 "layout.m"
                  {
#line 8615 "ll_backend.layout.c"
                    ll_backend__layout__TypeInfo_14_14 = (MR_Word) &ll_backend__layout_scalar_common_1[10];
#line 8617 "ll_backend.layout.c"
                    {
#line 8619 "ll_backend.layout.c"
                      return ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_14_14, ((MR_Box) (ll_backend__layout__V_6_6)), ((MR_Box) (ll_backend__layout__V_10_10)));
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
    return ll_backend__layout__succeeded;
#line 291 "layout.m"
  }
#line 291 "layout.m"
}

#line 300 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____module_layout_debug_0_0(
#line 300 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 300 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 300 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 300 "layout.m"
{
#line 300 "layout.m"
  {
#line 300 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 300 "layout.m"
    MR_Integer ll_backend__layout__CastX_21 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 300 "layout.m"
    MR_Integer ll_backend__layout__CastY_22 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 300 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_21 == ll_backend__layout__CastY_22);
#line 300 "layout.m"
    if (ll_backend__layout__succeeded)
#line 8661 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 300 "layout.m"
    else
#line 300 "layout.m"
      {
#line 300 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 300 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 300 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 300 "layout.m"
        MR_Integer ll_backend__layout__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 300 "layout.m"
        MR_Integer ll_backend__layout__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 4)));
#line 300 "layout.m"
        MR_Word ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 5)));
#line 300 "layout.m"
        MR_Word ll_backend__layout__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 300 "layout.m"
        MR_Word ll_backend__layout__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 300 "layout.m"
        MR_Word ll_backend__layout__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 300 "layout.m"
        MR_Integer ll_backend__layout__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 3)));
#line 300 "layout.m"
        MR_Integer ll_backend__layout__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 4)));
#line 300 "layout.m"
        MR_Word ll_backend__layout__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 5)));
#line 300 "layout.m"
        MR_Word ll_backend__layout__V_16_16;

#line 300 "layout.m"
        {
#line 300 "layout.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[7], &ll_backend__layout__V_16_16, ((MR_Box) (ll_backend__layout__V_4_4)), ((MR_Box) (ll_backend__layout__V_10_10)));
        }
#line 8699 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_16_16 == (MR_Integer) 0);
#line 300 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 300 "layout.m"
        if (ll_backend__layout__succeeded)
#line 300 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_16_16;
#line 300 "layout.m"
        else
#line 300 "layout.m"
          {
#line 300 "layout.m"
            MR_Word ll_backend__layout__V_17_17;

#line 300 "layout.m"
            {
#line 300 "layout.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[8], &ll_backend__layout__V_17_17, ((MR_Box) (ll_backend__layout__V_5_5)), ((MR_Box) (ll_backend__layout__V_11_11)));
            }
#line 8719 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_17_17 == (MR_Integer) 0);
#line 300 "layout.m"
            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 300 "layout.m"
            if (ll_backend__layout__succeeded)
#line 300 "layout.m"
              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_17_17;
#line 300 "layout.m"
            else
#line 300 "layout.m"
              {
#line 300 "layout.m"
                MR_Word ll_backend__layout__V_18_18;

#line 300 "layout.m"
                {
#line 300 "layout.m"
                  libs__trace_params____Compare____trace_level_0_0(&ll_backend__layout__V_18_18, ll_backend__layout__V_6_6, ll_backend__layout__V_12_12);
                }
#line 8739 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_18_18 == (MR_Integer) 0);
#line 300 "layout.m"
                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 300 "layout.m"
                if (ll_backend__layout__succeeded)
#line 300 "layout.m"
                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_18_18;
#line 300 "layout.m"
                else
#line 300 "layout.m"
                  {
#line 300 "layout.m"
                    MR_Word ll_backend__layout__V_19_19;

#line 300 "layout.m"
                    {
#line 300 "layout.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_19_19, ll_backend__layout__V_7_7, ll_backend__layout__V_13_13);
                    }
#line 8759 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = (ll_backend__layout__V_19_19 == (MR_Integer) 0);
#line 300 "layout.m"
                    ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 300 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 300 "layout.m"
                      *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_19_19;
#line 300 "layout.m"
                    else
#line 300 "layout.m"
                      {
#line 300 "layout.m"
                        MR_Word ll_backend__layout__V_20_20;

#line 300 "layout.m"
                        {
#line 300 "layout.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_20_20, ll_backend__layout__V_8_8, ll_backend__layout__V_14_14);
                        }
#line 8779 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = (ll_backend__layout__V_20_20 == (MR_Integer) 0);
#line 300 "layout.m"
                        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 300 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 300 "layout.m"
                          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_20_20;
#line 300 "layout.m"
                        else
#line 300 "layout.m"
                          {
#line 300 "layout.m"
                            {
#line 300 "layout.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[9], ll_backend__layout__HeadVar__1_1, ((MR_Box) (ll_backend__layout__V_9_9)), ((MR_Box) (ll_backend__layout__V_15_15)));
#line 300 "layout.m"
                              return;
                            }
#line 300 "layout.m"
                          }
#line 300 "layout.m"
                      }
#line 300 "layout.m"
                  }
#line 300 "layout.m"
              }
#line 300 "layout.m"
          }
#line 300 "layout.m"
      }
#line 300 "layout.m"
  }
#line 300 "layout.m"
}

#line 300 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____module_layout_debug_0_0(
#line 300 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 300 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 300 "layout.m"
{
#line 300 "layout.m"
  {
#line 300 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 300 "layout.m"
    MR_Integer ll_backend__layout__CastX_15 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 300 "layout.m"
    MR_Integer ll_backend__layout__CastY_16 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 300 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_15 == ll_backend__layout__CastY_16);
#line 300 "layout.m"
    if (ll_backend__layout__succeeded)
#line 300 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 300 "layout.m"
    else
#line 300 "layout.m"
      {
#line 300 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_18_18;
#line 300 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_20_20;
#line 300 "layout.m"
        MR_Word ll_backend__layout__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 300 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 300 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 300 "layout.m"
        MR_Integer ll_backend__layout__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 3)));
#line 300 "layout.m"
        MR_Integer ll_backend__layout__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 4)));
#line 300 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 5)));
#line 300 "layout.m"
        MR_Word ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 300 "layout.m"
        MR_Word ll_backend__layout__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 300 "layout.m"
        MR_Word ll_backend__layout__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 300 "layout.m"
        MR_Integer ll_backend__layout__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 300 "layout.m"
        MR_Integer ll_backend__layout__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 4)));
#line 300 "layout.m"
        MR_Word ll_backend__layout__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 5)));

#line 8872 "ll_backend.layout.c"
        {
#line 8874 "ll_backend.layout.c"
          ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__layout_scalar_common_1[7], ((MR_Box) (ll_backend__layout__V_3_3)), ((MR_Box) (ll_backend__layout__V_9_9)));
        }
#line 300 "layout.m"
        if (ll_backend__layout__succeeded)
#line 300 "layout.m"
          {
#line 8881 "ll_backend.layout.c"
            ll_backend__layout__TypeInfo_18_18 = (MR_Word) &ll_backend__layout_scalar_common_1[8];
#line 8883 "ll_backend.layout.c"
            {
#line 8885 "ll_backend.layout.c"
              ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_18_18, ((MR_Box) (ll_backend__layout__V_4_4)), ((MR_Box) (ll_backend__layout__V_10_10)));
            }
#line 300 "layout.m"
            if (ll_backend__layout__succeeded)
#line 300 "layout.m"
              {
#line 8892 "ll_backend.layout.c"
                {
#line 8894 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = libs__trace_params____Unify____trace_level_0_0(ll_backend__layout__V_5_5, ll_backend__layout__V_11_11);
                }
#line 300 "layout.m"
                if (ll_backend__layout__succeeded)
#line 300 "layout.m"
                  {
#line 8901 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = (ll_backend__layout__V_6_6 == ll_backend__layout__V_12_12);
#line 300 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 300 "layout.m"
                      {
#line 8907 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = (ll_backend__layout__V_7_7 == ll_backend__layout__V_13_13);
#line 300 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 300 "layout.m"
                          {
#line 8913 "ll_backend.layout.c"
                            ll_backend__layout__TypeInfo_20_20 = (MR_Word) &ll_backend__layout_scalar_common_1[9];
#line 8915 "ll_backend.layout.c"
                            {
#line 8917 "ll_backend.layout.c"
                              return ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_20_20, ((MR_Box) (ll_backend__layout__V_8_8)), ((MR_Box) (ll_backend__layout__V_14_14)));
                            }
#line 300 "layout.m"
                          }
#line 300 "layout.m"
                      }
#line 300 "layout.m"
                  }
#line 300 "layout.m"
              }
#line 300 "layout.m"
          }
#line 300 "layout.m"
      }
#line 300 "layout.m"
    return ll_backend__layout__succeeded;
#line 300 "layout.m"
  }
#line 300 "layout.m"
}

#line 277 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____module_layout_data_0_0(
#line 277 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 277 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 277 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 277 "layout.m"
{
#line 277 "layout.m"
  {
#line 277 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 277 "layout.m"
    MR_Integer ll_backend__layout__CastX_18 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 277 "layout.m"
    MR_Integer ll_backend__layout__CastY_19 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 277 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_18 == ll_backend__layout__CastY_19);
#line 277 "layout.m"
    if (ll_backend__layout__succeeded)
#line 8963 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 277 "layout.m"
    else
#line 277 "layout.m"
      {
#line 277 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 277 "layout.m"
        MR_Integer ll_backend__layout__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 277 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 277 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 277 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 4)));
#line 277 "layout.m"
        MR_Word ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 277 "layout.m"
        MR_Integer ll_backend__layout__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 277 "layout.m"
        MR_Word ll_backend__layout__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 277 "layout.m"
        MR_Word ll_backend__layout__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 3)));
#line 277 "layout.m"
        MR_Word ll_backend__layout__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 4)));
#line 277 "layout.m"
        MR_Word ll_backend__layout__V_14_14;

#line 277 "layout.m"
        {
#line 277 "layout.m"
          mdbcomp__prim_data____Compare____sym_name_0_0(&ll_backend__layout__V_14_14, ll_backend__layout__V_4_4, ll_backend__layout__V_9_9);
        }
#line 8997 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_14_14 == (MR_Integer) 0);
#line 277 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 277 "layout.m"
        if (ll_backend__layout__succeeded)
#line 277 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_14_14;
#line 277 "layout.m"
        else
#line 277 "layout.m"
          {
#line 277 "layout.m"
            MR_Word ll_backend__layout__V_15_15;

#line 277 "layout.m"
            {
#line 277 "layout.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_15_15, ll_backend__layout__V_5_5, ll_backend__layout__V_10_10);
            }
#line 9017 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_15_15 == (MR_Integer) 0);
#line 277 "layout.m"
            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 277 "layout.m"
            if (ll_backend__layout__succeeded)
#line 277 "layout.m"
              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_15_15;
#line 277 "layout.m"
            else
#line 277 "layout.m"
              {
#line 277 "layout.m"
                MR_Word ll_backend__layout__V_16_16;

#line 277 "layout.m"
                {
#line 277 "layout.m"
                  ll_backend__layout____Compare____string_with_0s_0_0(&ll_backend__layout__V_16_16, ll_backend__layout__V_6_6, ll_backend__layout__V_11_11);
                }
#line 9037 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_16_16 == (MR_Integer) 0);
#line 277 "layout.m"
                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 277 "layout.m"
                if (ll_backend__layout__succeeded)
#line 277 "layout.m"
                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_16_16;
#line 277 "layout.m"
                else
#line 277 "layout.m"
                  {
#line 277 "layout.m"
                    MR_Word ll_backend__layout__V_17_17;

#line 277 "layout.m"
                    {
#line 277 "layout.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[5], &ll_backend__layout__V_17_17, ((MR_Box) (ll_backend__layout__V_7_7)), ((MR_Box) (ll_backend__layout__V_12_12)));
                    }
#line 9057 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = (ll_backend__layout__V_17_17 == (MR_Integer) 0);
#line 277 "layout.m"
                    ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 277 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 277 "layout.m"
                      *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_17_17;
#line 277 "layout.m"
                    else
#line 277 "layout.m"
                      {
#line 277 "layout.m"
                        {
#line 277 "layout.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[6], ll_backend__layout__HeadVar__1_1, ((MR_Box) (ll_backend__layout__V_8_8)), ((MR_Box) (ll_backend__layout__V_13_13)));
#line 277 "layout.m"
                          return;
                        }
#line 277 "layout.m"
                      }
#line 277 "layout.m"
                  }
#line 277 "layout.m"
              }
#line 277 "layout.m"
          }
#line 277 "layout.m"
      }
#line 277 "layout.m"
  }
#line 277 "layout.m"
}

#line 277 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____module_layout_data_0_0(
#line 277 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 277 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 277 "layout.m"
{
#line 277 "layout.m"
  {
#line 277 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 277 "layout.m"
    MR_Integer ll_backend__layout__CastX_13 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 277 "layout.m"
    MR_Integer ll_backend__layout__CastY_14 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 277 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_13 == ll_backend__layout__CastY_14);
#line 277 "layout.m"
    if (ll_backend__layout__succeeded)
#line 277 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 277 "layout.m"
    else
#line 277 "layout.m"
      {
#line 277 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_16_16;
#line 277 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_17_17;
#line 277 "layout.m"
        MR_Word ll_backend__layout__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 277 "layout.m"
        MR_Integer ll_backend__layout__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 277 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 277 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 3)));
#line 277 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 4)));
#line 277 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 277 "layout.m"
        MR_Integer ll_backend__layout__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 277 "layout.m"
        MR_Word ll_backend__layout__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 277 "layout.m"
        MR_Word ll_backend__layout__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 277 "layout.m"
        MR_Word ll_backend__layout__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 4)));

#line 9144 "ll_backend.layout.c"
        {
#line 9146 "ll_backend.layout.c"
          ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_8_8);
        }
#line 277 "layout.m"
        if (ll_backend__layout__succeeded)
#line 277 "layout.m"
          {
#line 9153 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 == ll_backend__layout__V_9_9);
#line 277 "layout.m"
            if (ll_backend__layout__succeeded)
#line 277 "layout.m"
              {
#line 9159 "ll_backend.layout.c"
                {
#line 9161 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = ll_backend__layout____Unify____string_with_0s_0_0(ll_backend__layout__V_5_5, ll_backend__layout__V_10_10);
                }
#line 277 "layout.m"
                if (ll_backend__layout__succeeded)
#line 277 "layout.m"
                  {
#line 9168 "ll_backend.layout.c"
                    ll_backend__layout__TypeInfo_16_16 = (MR_Word) &ll_backend__layout_scalar_common_1[5];
#line 9170 "ll_backend.layout.c"
                    {
#line 9172 "ll_backend.layout.c"
                      ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_16_16, ((MR_Box) (ll_backend__layout__V_6_6)), ((MR_Box) (ll_backend__layout__V_11_11)));
                    }
#line 277 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 277 "layout.m"
                      {
#line 9179 "ll_backend.layout.c"
                        ll_backend__layout__TypeInfo_17_17 = (MR_Word) &ll_backend__layout_scalar_common_1[6];
#line 9181 "ll_backend.layout.c"
                        {
#line 9183 "ll_backend.layout.c"
                          return ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_17_17, ((MR_Box) (ll_backend__layout__V_7_7)), ((MR_Box) (ll_backend__layout__V_12_12)));
                        }
#line 277 "layout.m"
                      }
#line 277 "layout.m"
                  }
#line 277 "layout.m"
              }
#line 277 "layout.m"
          }
#line 277 "layout.m"
      }
#line 277 "layout.m"
    return ll_backend__layout__succeeded;
#line 277 "layout.m"
  }
#line 277 "layout.m"
}

#line 229 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____maybe_proc_id_and_more_0_0(
#line 229 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 229 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 229 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 229 "layout.m"
{
#line 229 "layout.m"
  {
#line 229 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 229 "layout.m"
    MR_Integer ll_backend__layout__CastX_23 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 229 "layout.m"
    MR_Integer ll_backend__layout__CastY_24 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 229 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_23 == ll_backend__layout__CastY_24);
#line 229 "layout.m"
    if (ll_backend__layout__succeeded)
#line 9227 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 229 "layout.m"
    else
#line 229 "layout.m"
      if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 229 "layout.m"
        if ((ll_backend__layout__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 229 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 229 "layout.m"
        else
#line 9239 "ll_backend.layout.c"
          *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 1;
#line 229 "layout.m"
      else
#line 229 "layout.m"
        {
#line 229 "layout.m"
          MR_Word ll_backend__layout__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 229 "layout.m"
          MR_Word ll_backend__layout__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 229 "layout.m"
          MR_Word ll_backend__layout__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 229 "layout.m"
          MR_Word ll_backend__layout__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));

#line 229 "layout.m"
          if ((ll_backend__layout__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 9256 "ll_backend.layout.c"
            *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 2;
#line 229 "layout.m"
          else
#line 229 "layout.m"
            {
#line 229 "layout.m"
              MR_Word ll_backend__layout__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 229 "layout.m"
              MR_Word ll_backend__layout__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 229 "layout.m"
              MR_Word ll_backend__layout__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 229 "layout.m"
              MR_Word ll_backend__layout__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__3_3, (MR_Integer) 3)));
#line 229 "layout.m"
              MR_Word ll_backend__layout__V_20_20;

#line 229 "layout.m"
              {
#line 229 "layout.m"
                mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[3], &ll_backend__layout__V_20_20, ((MR_Box) (ll_backend__layout__V_32_32)), ((MR_Box) (ll_backend__layout__V_16_16)));
              }
#line 9278 "ll_backend.layout.c"
              ll_backend__layout__succeeded = (ll_backend__layout__V_20_20 == (MR_Integer) 0);
#line 229 "layout.m"
              ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 229 "layout.m"
              if (ll_backend__layout__succeeded)
#line 229 "layout.m"
                *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_20_20;
#line 229 "layout.m"
              else
#line 229 "layout.m"
                {
#line 229 "layout.m"
                  MR_Word ll_backend__layout__V_21_21;

#line 229 "layout.m"
                  {
#line 229 "layout.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[3], &ll_backend__layout__V_21_21, ((MR_Box) (ll_backend__layout__V_31_31)), ((MR_Box) (ll_backend__layout__V_17_17)));
                  }
#line 9298 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = (ll_backend__layout__V_21_21 == (MR_Integer) 0);
#line 229 "layout.m"
                  ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 229 "layout.m"
                  if (ll_backend__layout__succeeded)
#line 229 "layout.m"
                    *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_21_21;
#line 229 "layout.m"
                  else
#line 229 "layout.m"
                    {
#line 229 "layout.m"
                      MR_Word ll_backend__layout__V_22_22;

#line 229 "layout.m"
                      {
#line 229 "layout.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[3], &ll_backend__layout__V_22_22, ((MR_Box) (ll_backend__layout__V_30_30)), ((MR_Box) (ll_backend__layout__V_18_18)));
                      }
#line 9318 "ll_backend.layout.c"
                      ll_backend__layout__succeeded = (ll_backend__layout__V_22_22 == (MR_Integer) 0);
#line 229 "layout.m"
                      ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 229 "layout.m"
                      if (ll_backend__layout__succeeded)
#line 229 "layout.m"
                        *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_22_22;
#line 229 "layout.m"
                      else
#line 229 "layout.m"
                        {
#line 229 "layout.m"
                          ll_backend__layout____Compare____layout_name_0_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_29_29, ll_backend__layout__V_19_19);
#line 229 "layout.m"
                          return;
                        }
#line 229 "layout.m"
                    }
#line 229 "layout.m"
                }
#line 229 "layout.m"
            }
#line 229 "layout.m"
        }
#line 229 "layout.m"
  }
#line 229 "layout.m"
}

#line 229 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____maybe_proc_id_and_more_0_0(
#line 229 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 229 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 229 "layout.m"
{
#line 229 "layout.m"
  {
#line 229 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 229 "layout.m"
    MR_Integer ll_backend__layout__CastX_13 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 229 "layout.m"
    MR_Integer ll_backend__layout__CastY_14 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 229 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_13 == ll_backend__layout__CastY_14);
#line 229 "layout.m"
    if (ll_backend__layout__succeeded)
#line 229 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 229 "layout.m"
    else
#line 229 "layout.m"
      if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 229 "layout.m"
        {
#line 229 "layout.m"
          MR_Integer ll_backend__layout__CastX_3 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 229 "layout.m"
          MR_Integer ll_backend__layout__CastY_4 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 229 "layout.m"
          ll_backend__layout__succeeded = (ll_backend__layout__CastY_4 == ll_backend__layout__CastX_3);
#line 229 "layout.m"
        }
#line 229 "layout.m"
      else
#line 229 "layout.m"
        {
#line 229 "layout.m"
          MR_Word ll_backend__layout__TypeInfo_15_15;
#line 229 "layout.m"
          MR_Word ll_backend__layout__TypeInfo_16_16;
#line 229 "layout.m"
          MR_Word ll_backend__layout__TypeInfo_17_17;
#line 229 "layout.m"
          MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 229 "layout.m"
          MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 229 "layout.m"
          MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 229 "layout.m"
          MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__1_1, (MR_Integer) 3)));
#line 229 "layout.m"
          MR_Word ll_backend__layout__V_9_9;
#line 229 "layout.m"
          MR_Word ll_backend__layout__V_10_10;
#line 229 "layout.m"
          MR_Word ll_backend__layout__V_11_11;
#line 229 "layout.m"
          MR_Word ll_backend__layout__V_12_12;

#line 229 "layout.m"
          ll_backend__layout__succeeded = ((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 229 "layout.m"
          if (ll_backend__layout__succeeded)
#line 229 "layout.m"
            {
#line 229 "layout.m"
              ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 229 "layout.m"
              ll_backend__layout__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 229 "layout.m"
              ll_backend__layout__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 229 "layout.m"
              ll_backend__layout__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 9428 "ll_backend.layout.c"
              ll_backend__layout__TypeInfo_15_15 = (MR_Word) &ll_backend__layout_scalar_common_1[3];
#line 9430 "ll_backend.layout.c"
              {
#line 9432 "ll_backend.layout.c"
                ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_15_15, ((MR_Box) (ll_backend__layout__V_5_5)), ((MR_Box) (ll_backend__layout__V_9_9)));
              }
#line 229 "layout.m"
              if (ll_backend__layout__succeeded)
#line 229 "layout.m"
                {
#line 9439 "ll_backend.layout.c"
                  ll_backend__layout__TypeInfo_16_16 = (MR_Word) &ll_backend__layout_scalar_common_1[3];
#line 9441 "ll_backend.layout.c"
                  {
#line 9443 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_16_16, ((MR_Box) (ll_backend__layout__V_6_6)), ((MR_Box) (ll_backend__layout__V_10_10)));
                  }
#line 229 "layout.m"
                  if (ll_backend__layout__succeeded)
#line 229 "layout.m"
                    {
#line 9450 "ll_backend.layout.c"
                      ll_backend__layout__TypeInfo_17_17 = (MR_Word) &ll_backend__layout_scalar_common_1[3];
#line 9452 "ll_backend.layout.c"
                      {
#line 9454 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_17_17, ((MR_Box) (ll_backend__layout__V_7_7)), ((MR_Box) (ll_backend__layout__V_11_11)));
                      }
#line 229 "layout.m"
                      if (ll_backend__layout__succeeded)
#line 9459 "ll_backend.layout.c"
                        {
#line 9461 "ll_backend.layout.c"
                          return ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_name_0_0(ll_backend__layout__V_8_8, ll_backend__layout__V_12_12);
                        }
#line 229 "layout.m"
                    }
#line 229 "layout.m"
                }
#line 229 "layout.m"
            }
#line 229 "layout.m"
        }
#line 229 "layout.m"
    return ll_backend__layout__succeeded;
#line 229 "layout.m"
  }
#line 229 "layout.m"
}

#line 335 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____layout_slot_name_0_0(
#line 335 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 335 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 335 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 335 "layout.m"
{
#line 335 "layout.m"
  {
#line 335 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 335 "layout.m"
    MR_Integer ll_backend__layout__CastX_9 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 335 "layout.m"
    MR_Integer ll_backend__layout__CastY_10 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 335 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_9 == ll_backend__layout__CastY_10);
#line 335 "layout.m"
    if (ll_backend__layout__succeeded)
#line 9503 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 335 "layout.m"
    else
#line 335 "layout.m"
      {
#line 335 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 335 "layout.m"
        MR_Integer ll_backend__layout__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 335 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 335 "layout.m"
        MR_Integer ll_backend__layout__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 335 "layout.m"
        MR_Word ll_backend__layout__V_8_8;

#line 335 "layout.m"
        {
#line 335 "layout.m"
          ll_backend__layout____Compare____layout_array_name_0_0(&ll_backend__layout__V_8_8, ll_backend__layout__V_4_4, ll_backend__layout__V_6_6);
        }
#line 9525 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_8_8 == (MR_Integer) 0);
#line 335 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 335 "layout.m"
        if (ll_backend__layout__succeeded)
#line 335 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_8_8;
#line 335 "layout.m"
        else
#line 335 "layout.m"
          {
#line 335 "layout.m"
            mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_5_5, ll_backend__layout__V_7_7);
#line 335 "layout.m"
            return;
          }
#line 335 "layout.m"
      }
#line 335 "layout.m"
  }
#line 335 "layout.m"
}

#line 335 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____layout_slot_name_0_0(
#line 335 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 335 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 335 "layout.m"
{
#line 335 "layout.m"
  {
#line 335 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 335 "layout.m"
    MR_Integer ll_backend__layout__CastX_7 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 335 "layout.m"
    MR_Integer ll_backend__layout__CastY_8 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 335 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_7 == ll_backend__layout__CastY_8);
#line 335 "layout.m"
    if (ll_backend__layout__succeeded)
#line 335 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 335 "layout.m"
    else
#line 335 "layout.m"
      {
#line 335 "layout.m"
        MR_Word ll_backend__layout__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 335 "layout.m"
        MR_Integer ll_backend__layout__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 335 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 335 "layout.m"
        MR_Integer ll_backend__layout__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));

#line 9586 "ll_backend.layout.c"
        {
#line 9588 "ll_backend.layout.c"
          ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_array_name_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_5_5);
        }
#line 335 "layout.m"
        if (ll_backend__layout__succeeded)
#line 9593 "ll_backend.layout.c"
          ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 == ll_backend__layout__V_6_6);
#line 335 "layout.m"
      }
#line 335 "layout.m"
    return ll_backend__layout__succeeded;
#line 335 "layout.m"
  }
#line 335 "layout.m"
}

#line 398 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____layout_name_0_0(
#line 398 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 398 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 398 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 398 "layout.m"
{
#line 398 "layout.m"
  {
#line 398 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 398 "layout.m"
    MR_Integer ll_backend__layout__CastX_87 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 398 "layout.m"
    MR_Integer ll_backend__layout__CastY_88 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 398 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_87 == ll_backend__layout__CastY_88);
#line 398 "layout.m"
    if (ll_backend__layout__succeeded)
#line 9628 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 398 "layout.m"
    else
#line 398 "layout.m"
      {
#line 398 "layout.m"
        MR_Integer ll_backend__layout__V_4_4;
#line 398 "layout.m"
        MR_Integer ll_backend__layout__V_5_5;

#line 398 "layout.m"
        {
#line 398 "layout.m"
          ll_backend__layout____Index____layout_name_0_0(ll_backend__layout__HeadVar__2_2, &ll_backend__layout__V_4_4);
        }
#line 398 "layout.m"
        {
#line 398 "layout.m"
          ll_backend__layout____Index____layout_name_0_0(ll_backend__layout__HeadVar__3_3, &ll_backend__layout__V_5_5);
        }
#line 398 "layout.m"
        ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 < ll_backend__layout__V_5_5);
#line 398 "layout.m"
        if (ll_backend__layout__succeeded)
#line 9653 "ll_backend.layout.c"
          *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 1;
#line 398 "layout.m"
        else
#line 398 "layout.m"
          {
#line 398 "layout.m"
            ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 > ll_backend__layout__V_5_5);
#line 398 "layout.m"
            if (ll_backend__layout__succeeded)
#line 9663 "ll_backend.layout.c"
              *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 2;
#line 398 "layout.m"
            else
#line 398 "layout.m"
              {
#line 398 "layout.m"
                MR_Word ll_backend__layout__V_6_6;

#line 398 "layout.m"
                if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 398 "layout.m"
                  {
#line 398 "layout.m"
                    MR_Word ll_backend__layout__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 398 "layout.m"
                    MR_Integer ll_backend__layout__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "layout.m"
                    MR_Word ll_backend__layout__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 398 "layout.m"
                    MR_Word ll_backend__layout__V_15_15;
#line 398 "layout.m"
                    MR_Integer ll_backend__layout__V_16_16;
#line 398 "layout.m"
                    MR_Word ll_backend__layout__V_17_17;
#line 398 "layout.m"
                    MR_Word ll_backend__layout__V_18_18;

#line 398 "layout.m"
                    ll_backend__layout__succeeded = ((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 398 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                      {
#line 398 "layout.m"
                        ll_backend__layout__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 398 "layout.m"
                        ll_backend__layout__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 398 "layout.m"
                        ll_backend__layout__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 398 "layout.m"
                        {
#line 398 "layout.m"
                          mdbcomp__prim_data____Compare____proc_label_0_0(&ll_backend__layout__V_18_18, ll_backend__layout__V_12_12, ll_backend__layout__V_15_15);
                        }
#line 9708 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = (ll_backend__layout__V_18_18 == (MR_Integer) 0);
#line 398 "layout.m"
                        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 398 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                          ll_backend__layout__V_6_6 = ll_backend__layout__V_18_18;
#line 398 "layout.m"
                        else
#line 398 "layout.m"
                          {
#line 398 "layout.m"
                            MR_Word ll_backend__layout__V_19_19;

#line 398 "layout.m"
                            {
#line 398 "layout.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_19_19, ll_backend__layout__V_13_13, ll_backend__layout__V_16_16);
                            }
#line 9728 "ll_backend.layout.c"
                            ll_backend__layout__succeeded = (ll_backend__layout__V_19_19 == (MR_Integer) 0);
#line 398 "layout.m"
                            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 398 "layout.m"
                            if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                              ll_backend__layout__V_6_6 = ll_backend__layout__V_19_19;
#line 398 "layout.m"
                            else
#line 398 "layout.m"
                              {
#line 398 "layout.m"
                                mdbcomp__prim_data____Compare____proc_label_0_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_14_14, ll_backend__layout__V_17_17);
                              }
#line 398 "layout.m"
                          }
#line 398 "layout.m"
                        ll_backend__layout__succeeded = MR_TRUE;
#line 398 "layout.m"
                      }
#line 398 "layout.m"
                  }
#line 398 "layout.m"
                else
#line 398 "layout.m"
                  if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 398 "layout.m"
                    {
#line 398 "layout.m"
                      MR_Word ll_backend__layout__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 398 "layout.m"
                      MR_Integer ll_backend__layout__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "layout.m"
                      MR_Word ll_backend__layout__V_22_22;
#line 398 "layout.m"
                      MR_Integer ll_backend__layout__V_23_23;
#line 398 "layout.m"
                      MR_Word ll_backend__layout__V_24_24;

#line 398 "layout.m"
                      ll_backend__layout__succeeded = ((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
#line 398 "layout.m"
                      if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                        {
#line 398 "layout.m"
                          ll_backend__layout__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 398 "layout.m"
                          ll_backend__layout__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 398 "layout.m"
                          {
#line 398 "layout.m"
                            mdbcomp__prim_data____Compare____sym_name_0_0(&ll_backend__layout__V_24_24, ll_backend__layout__V_20_20, ll_backend__layout__V_22_22);
                          }
#line 9783 "ll_backend.layout.c"
                          ll_backend__layout__succeeded = (ll_backend__layout__V_24_24 == (MR_Integer) 0);
#line 398 "layout.m"
                          ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 398 "layout.m"
                          if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                            ll_backend__layout__V_6_6 = ll_backend__layout__V_24_24;
#line 398 "layout.m"
                          else
#line 398 "layout.m"
                            {
#line 398 "layout.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_21_21, ll_backend__layout__V_23_23);
                            }
#line 398 "layout.m"
                          ll_backend__layout__succeeded = MR_TRUE;
#line 398 "layout.m"
                        }
#line 398 "layout.m"
                    }
#line 398 "layout.m"
                  else
#line 398 "layout.m"
                    if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 398 "layout.m"
                      {
#line 398 "layout.m"
                        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 398 "layout.m"
                        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "layout.m"
                        MR_Word ll_backend__layout__V_9_9;
#line 398 "layout.m"
                        MR_Word ll_backend__layout__V_10_10;
#line 398 "layout.m"
                        MR_Word ll_backend__layout__V_11_11;

#line 398 "layout.m"
                        ll_backend__layout__succeeded = ((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0)));
#line 398 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                          {
#line 398 "layout.m"
                            ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 398 "layout.m"
                            ll_backend__layout__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 398 "layout.m"
                            {
#line 398 "layout.m"
                              hlds__hlds_rtti____Compare____rtti_proc_label_0_0(&ll_backend__layout__V_11_11, ll_backend__layout__V_7_7, ll_backend__layout__V_9_9);
                            }
#line 9836 "ll_backend.layout.c"
                            ll_backend__layout__succeeded = (ll_backend__layout__V_11_11 == (MR_Integer) 0);
#line 398 "layout.m"
                            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 398 "layout.m"
                            if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                              ll_backend__layout__V_6_6 = ll_backend__layout__V_11_11;
#line 398 "layout.m"
                            else
#line 398 "layout.m"
                              {
#line 398 "layout.m"
                                ll_backend__layout____Compare____proc_layout_kind_0_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_8_8, ll_backend__layout__V_10_10);
                              }
#line 398 "layout.m"
                            ll_backend__layout__succeeded = MR_TRUE;
#line 398 "layout.m"
                          }
#line 398 "layout.m"
                      }
#line 398 "layout.m"
                    else
#line 398 "layout.m"
                      if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 398 "layout.m"
                        {
#line 398 "layout.m"
                          MR_Word ll_backend__layout__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "layout.m"
                          MR_Integer ll_backend__layout__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 398 "layout.m"
                          MR_Word ll_backend__layout__V_32_32;
#line 398 "layout.m"
                          MR_Integer ll_backend__layout__V_33_33;
#line 398 "layout.m"
                          MR_Word ll_backend__layout__V_34_34;

#line 398 "layout.m"
                          ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 398 "layout.m"
                          if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                            {
#line 398 "layout.m"
                              ll_backend__layout__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 398 "layout.m"
                              ll_backend__layout__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 398 "layout.m"
                              {
#line 398 "layout.m"
                                mdbcomp__prim_data____Compare____sym_name_0_0(&ll_backend__layout__V_34_34, ll_backend__layout__V_30_30, ll_backend__layout__V_32_32);
                              }
#line 9889 "ll_backend.layout.c"
                              ll_backend__layout__succeeded = (ll_backend__layout__V_34_34 == (MR_Integer) 0);
#line 398 "layout.m"
                              ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 398 "layout.m"
                              if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                                ll_backend__layout__V_6_6 = ll_backend__layout__V_34_34;
#line 398 "layout.m"
                              else
#line 398 "layout.m"
                                {
#line 398 "layout.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_31_31, ll_backend__layout__V_33_33);
                                }
#line 398 "layout.m"
                              ll_backend__layout__succeeded = MR_TRUE;
#line 398 "layout.m"
                            }
#line 398 "layout.m"
                        }
#line 398 "layout.m"
                      else
#line 398 "layout.m"
                        if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 398 "layout.m"
                          {
#line 398 "layout.m"
                            MR_Word ll_backend__layout__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "layout.m"
                            MR_Integer ll_backend__layout__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 398 "layout.m"
                            MR_Word ll_backend__layout__V_27_27;
#line 398 "layout.m"
                            MR_Integer ll_backend__layout__V_28_28;
#line 398 "layout.m"
                            MR_Word ll_backend__layout__V_29_29;

#line 398 "layout.m"
                            ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 398 "layout.m"
                            if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                              {
#line 398 "layout.m"
                                ll_backend__layout__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 398 "layout.m"
                                ll_backend__layout__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 398 "layout.m"
                                {
#line 398 "layout.m"
                                  mdbcomp__prim_data____Compare____sym_name_0_0(&ll_backend__layout__V_29_29, ll_backend__layout__V_25_25, ll_backend__layout__V_27_27);
                                }
#line 9942 "ll_backend.layout.c"
                                ll_backend__layout__succeeded = (ll_backend__layout__V_29_29 == (MR_Integer) 0);
#line 398 "layout.m"
                                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 398 "layout.m"
                                if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                                  ll_backend__layout__V_6_6 = ll_backend__layout__V_29_29;
#line 398 "layout.m"
                                else
#line 398 "layout.m"
                                  {
#line 398 "layout.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_26_26, ll_backend__layout__V_28_28);
                                  }
#line 398 "layout.m"
                                ll_backend__layout__succeeded = MR_TRUE;
#line 398 "layout.m"
                              }
#line 398 "layout.m"
                          }
#line 398 "layout.m"
                        else
#line 398 "layout.m"
                          if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 398 "layout.m"
                            {
#line 398 "layout.m"
                              MR_Word ll_backend__layout__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "layout.m"
                              MR_Word ll_backend__layout__V_86_86;

#line 398 "layout.m"
                              ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 15)));
#line 398 "layout.m"
                              if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                                {
#line 398 "layout.m"
                                  ll_backend__layout__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 398 "layout.m"
                                  {
#line 398 "layout.m"
                                    mdbcomp__prim_data____Compare____sym_name_0_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_85_85, ll_backend__layout__V_86_86);
                                  }
#line 398 "layout.m"
                                  ll_backend__layout__succeeded = MR_TRUE;
#line 398 "layout.m"
                                }
#line 398 "layout.m"
                            }
#line 398 "layout.m"
                          else
#line 398 "layout.m"
                            if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 398 "layout.m"
                              {
#line 398 "layout.m"
                                MR_Word ll_backend__layout__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "layout.m"
                                MR_Integer ll_backend__layout__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 398 "layout.m"
                                MR_Word ll_backend__layout__V_50_50;
#line 398 "layout.m"
                                MR_Integer ll_backend__layout__V_51_51;
#line 398 "layout.m"
                                MR_Word ll_backend__layout__V_52_52;

#line 398 "layout.m"
                                ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 398 "layout.m"
                                if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                                  {
#line 398 "layout.m"
                                    ll_backend__layout__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 398 "layout.m"
                                    ll_backend__layout__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 398 "layout.m"
                                    {
#line 398 "layout.m"
                                      mdbcomp__prim_data____Compare____sym_name_0_0(&ll_backend__layout__V_52_52, ll_backend__layout__V_48_48, ll_backend__layout__V_50_50);
                                    }
#line 10025 "ll_backend.layout.c"
                                    ll_backend__layout__succeeded = (ll_backend__layout__V_52_52 == (MR_Integer) 0);
#line 398 "layout.m"
                                    ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 398 "layout.m"
                                    if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                                      ll_backend__layout__V_6_6 = ll_backend__layout__V_52_52;
#line 398 "layout.m"
                                    else
#line 398 "layout.m"
                                      {
#line 398 "layout.m"
                                        mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_49_49, ll_backend__layout__V_51_51);
                                      }
#line 398 "layout.m"
                                    ll_backend__layout__succeeded = MR_TRUE;
#line 398 "layout.m"
                                  }
#line 398 "layout.m"
                              }
#line 398 "layout.m"
                            else
#line 398 "layout.m"
                              if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 398 "layout.m"
                                {
#line 398 "layout.m"
                                  MR_Word ll_backend__layout__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "layout.m"
                                  MR_Word ll_backend__layout__V_47_47;

#line 398 "layout.m"
                                  ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 398 "layout.m"
                                  if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                                    {
#line 398 "layout.m"
                                      ll_backend__layout__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 398 "layout.m"
                                      {
#line 398 "layout.m"
                                        mdbcomp__prim_data____Compare____sym_name_0_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_46_46, ll_backend__layout__V_47_47);
                                      }
#line 398 "layout.m"
                                      ll_backend__layout__succeeded = MR_TRUE;
#line 398 "layout.m"
                                    }
#line 398 "layout.m"
                                }
#line 398 "layout.m"
                              else
#line 398 "layout.m"
                                if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 398 "layout.m"
                                  {
#line 398 "layout.m"
                                    MR_Word ll_backend__layout__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "layout.m"
                                    MR_Word ll_backend__layout__V_80_80;

#line 398 "layout.m"
                                    ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 398 "layout.m"
                                    if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                                      {
#line 398 "layout.m"
                                        ll_backend__layout__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 398 "layout.m"
                                        {
#line 398 "layout.m"
                                          mdbcomp__prim_data____Compare____sym_name_0_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_79_79, ll_backend__layout__V_80_80);
                                        }
#line 398 "layout.m"
                                        ll_backend__layout__succeeded = MR_TRUE;
#line 398 "layout.m"
                                      }
#line 398 "layout.m"
                                  }
#line 398 "layout.m"
                                else
#line 398 "layout.m"
                                  if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 398 "layout.m"
                                    {
#line 398 "layout.m"
                                      MR_Word ll_backend__layout__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "layout.m"
                                      MR_Integer ll_backend__layout__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 398 "layout.m"
                                      MR_Integer ll_backend__layout__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 398 "layout.m"
                                      MR_Word ll_backend__layout__V_61_61;
#line 398 "layout.m"
                                      MR_Integer ll_backend__layout__V_62_62;
#line 398 "layout.m"
                                      MR_Integer ll_backend__layout__V_63_63;
#line 398 "layout.m"
                                      MR_Word ll_backend__layout__V_64_64;

#line 398 "layout.m"
                                      ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 398 "layout.m"
                                      if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                                        {
#line 398 "layout.m"
                                          ll_backend__layout__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 398 "layout.m"
                                          ll_backend__layout__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 398 "layout.m"
                                          ll_backend__layout__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 3)));
#line 398 "layout.m"
                                          {
#line 398 "layout.m"
                                            mdbcomp__prim_data____Compare____sym_name_0_0(&ll_backend__layout__V_64_64, ll_backend__layout__V_58_58, ll_backend__layout__V_61_61);
                                          }
#line 10144 "ll_backend.layout.c"
                                          ll_backend__layout__succeeded = (ll_backend__layout__V_64_64 == (MR_Integer) 0);
#line 398 "layout.m"
                                          ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 398 "layout.m"
                                          if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                                            ll_backend__layout__V_6_6 = ll_backend__layout__V_64_64;
#line 398 "layout.m"
                                          else
#line 398 "layout.m"
                                            {
#line 398 "layout.m"
                                              MR_Word ll_backend__layout__V_65_65;

#line 398 "layout.m"
                                              {
#line 398 "layout.m"
                                                mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_65_65, ll_backend__layout__V_59_59, ll_backend__layout__V_62_62);
                                              }
#line 10164 "ll_backend.layout.c"
                                              ll_backend__layout__succeeded = (ll_backend__layout__V_65_65 == (MR_Integer) 0);
#line 398 "layout.m"
                                              ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 398 "layout.m"
                                              if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                                                ll_backend__layout__V_6_6 = ll_backend__layout__V_65_65;
#line 398 "layout.m"
                                              else
#line 398 "layout.m"
                                                {
#line 398 "layout.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_60_60, ll_backend__layout__V_63_63);
                                                }
#line 398 "layout.m"
                                            }
#line 398 "layout.m"
                                          ll_backend__layout__succeeded = MR_TRUE;
#line 398 "layout.m"
                                        }
#line 398 "layout.m"
                                    }
#line 398 "layout.m"
                                  else
#line 398 "layout.m"
                                    if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 398 "layout.m"
                                      {
#line 398 "layout.m"
                                        MR_Word ll_backend__layout__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "layout.m"
                                        MR_Integer ll_backend__layout__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 398 "layout.m"
                                        MR_Integer ll_backend__layout__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 398 "layout.m"
                                        MR_Word ll_backend__layout__V_69_69;
#line 398 "layout.m"
                                        MR_Integer ll_backend__layout__V_70_70;
#line 398 "layout.m"
                                        MR_Integer ll_backend__layout__V_71_71;
#line 398 "layout.m"
                                        MR_Word ll_backend__layout__V_72_72;

#line 398 "layout.m"
                                        ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 398 "layout.m"
                                        if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                                          {
#line 398 "layout.m"
                                            ll_backend__layout__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 398 "layout.m"
                                            ll_backend__layout__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 398 "layout.m"
                                            ll_backend__layout__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 3)));
#line 398 "layout.m"
                                            {
#line 398 "layout.m"
                                              mdbcomp__prim_data____Compare____sym_name_0_0(&ll_backend__layout__V_72_72, ll_backend__layout__V_66_66, ll_backend__layout__V_69_69);
                                            }
#line 10225 "ll_backend.layout.c"
                                            ll_backend__layout__succeeded = (ll_backend__layout__V_72_72 == (MR_Integer) 0);
#line 398 "layout.m"
                                            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 398 "layout.m"
                                            if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                                              ll_backend__layout__V_6_6 = ll_backend__layout__V_72_72;
#line 398 "layout.m"
                                            else
#line 398 "layout.m"
                                              {
#line 398 "layout.m"
                                                MR_Word ll_backend__layout__V_73_73;

#line 398 "layout.m"
                                                {
#line 398 "layout.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_73_73, ll_backend__layout__V_67_67, ll_backend__layout__V_70_70);
                                                }
#line 10245 "ll_backend.layout.c"
                                                ll_backend__layout__succeeded = (ll_backend__layout__V_73_73 == (MR_Integer) 0);
#line 398 "layout.m"
                                                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 398 "layout.m"
                                                if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                                                  ll_backend__layout__V_6_6 = ll_backend__layout__V_73_73;
#line 398 "layout.m"
                                                else
#line 398 "layout.m"
                                                  {
#line 398 "layout.m"
                                                    mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_68_68, ll_backend__layout__V_71_71);
                                                  }
#line 398 "layout.m"
                                              }
#line 398 "layout.m"
                                            ll_backend__layout__succeeded = MR_TRUE;
#line 398 "layout.m"
                                          }
#line 398 "layout.m"
                                      }
#line 398 "layout.m"
                                    else
#line 398 "layout.m"
                                      if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 398 "layout.m"
                                        {
#line 398 "layout.m"
                                          MR_Word ll_backend__layout__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "layout.m"
                                          MR_Integer ll_backend__layout__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 398 "layout.m"
                                          MR_Word ll_backend__layout__V_55_55;
#line 398 "layout.m"
                                          MR_Integer ll_backend__layout__V_56_56;
#line 398 "layout.m"
                                          MR_Word ll_backend__layout__V_57_57;

#line 398 "layout.m"
                                          ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 398 "layout.m"
                                          if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                                            {
#line 398 "layout.m"
                                              ll_backend__layout__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 398 "layout.m"
                                              ll_backend__layout__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 398 "layout.m"
                                              {
#line 398 "layout.m"
                                                mdbcomp__prim_data____Compare____sym_name_0_0(&ll_backend__layout__V_57_57, ll_backend__layout__V_53_53, ll_backend__layout__V_55_55);
                                              }
#line 10300 "ll_backend.layout.c"
                                              ll_backend__layout__succeeded = (ll_backend__layout__V_57_57 == (MR_Integer) 0);
#line 398 "layout.m"
                                              ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 398 "layout.m"
                                              if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                                                ll_backend__layout__V_6_6 = ll_backend__layout__V_57_57;
#line 398 "layout.m"
                                              else
#line 398 "layout.m"
                                                {
#line 398 "layout.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_54_54, ll_backend__layout__V_56_56);
                                                }
#line 398 "layout.m"
                                              ll_backend__layout__succeeded = MR_TRUE;
#line 398 "layout.m"
                                            }
#line 398 "layout.m"
                                        }
#line 398 "layout.m"
                                      else
#line 398 "layout.m"
                                        if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 398 "layout.m"
                                          {
#line 398 "layout.m"
                                            MR_Word ll_backend__layout__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "layout.m"
                                            MR_Integer ll_backend__layout__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 398 "layout.m"
                                            MR_Word ll_backend__layout__V_76_76;
#line 398 "layout.m"
                                            MR_Integer ll_backend__layout__V_77_77;
#line 398 "layout.m"
                                            MR_Word ll_backend__layout__V_78_78;

#line 398 "layout.m"
                                            ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 11)));
#line 398 "layout.m"
                                            if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                                              {
#line 398 "layout.m"
                                                ll_backend__layout__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 398 "layout.m"
                                                ll_backend__layout__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 398 "layout.m"
                                                {
#line 398 "layout.m"
                                                  mdbcomp__prim_data____Compare____sym_name_0_0(&ll_backend__layout__V_78_78, ll_backend__layout__V_74_74, ll_backend__layout__V_76_76);
                                                }
#line 10353 "ll_backend.layout.c"
                                                ll_backend__layout__succeeded = (ll_backend__layout__V_78_78 == (MR_Integer) 0);
#line 398 "layout.m"
                                                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 398 "layout.m"
                                                if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                                                  ll_backend__layout__V_6_6 = ll_backend__layout__V_78_78;
#line 398 "layout.m"
                                                else
#line 398 "layout.m"
                                                  {
#line 398 "layout.m"
                                                    mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_75_75, ll_backend__layout__V_77_77);
                                                  }
#line 398 "layout.m"
                                                ll_backend__layout__succeeded = MR_TRUE;
#line 398 "layout.m"
                                              }
#line 398 "layout.m"
                                          }
#line 398 "layout.m"
                                        else
#line 398 "layout.m"
                                          if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 398 "layout.m"
                                            {
#line 398 "layout.m"
                                              MR_Word ll_backend__layout__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "layout.m"
                                              MR_Word ll_backend__layout__V_38_38;

#line 398 "layout.m"
                                              ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 398 "layout.m"
                                              if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                                                {
#line 398 "layout.m"
                                                  ll_backend__layout__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 398 "layout.m"
                                                  {
#line 398 "layout.m"
                                                    mdbcomp__prim_data____Compare____sym_name_0_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_37_37, ll_backend__layout__V_38_38);
                                                  }
#line 398 "layout.m"
                                                  ll_backend__layout__succeeded = MR_TRUE;
#line 398 "layout.m"
                                                }
#line 398 "layout.m"
                                            }
#line 398 "layout.m"
                                          else
#line 398 "layout.m"
                                            if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 398 "layout.m"
                                              {
#line 398 "layout.m"
                                                MR_Word ll_backend__layout__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "layout.m"
                                                MR_Integer ll_backend__layout__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 398 "layout.m"
                                                MR_Word ll_backend__layout__V_43_43;
#line 398 "layout.m"
                                                MR_Integer ll_backend__layout__V_44_44;
#line 398 "layout.m"
                                                MR_Word ll_backend__layout__V_45_45;

#line 398 "layout.m"
                                                ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 398 "layout.m"
                                                if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                                                  {
#line 398 "layout.m"
                                                    ll_backend__layout__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 398 "layout.m"
                                                    ll_backend__layout__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 398 "layout.m"
                                                    {
#line 398 "layout.m"
                                                      mdbcomp__prim_data____Compare____sym_name_0_0(&ll_backend__layout__V_45_45, ll_backend__layout__V_41_41, ll_backend__layout__V_43_43);
                                                    }
#line 10436 "ll_backend.layout.c"
                                                    ll_backend__layout__succeeded = (ll_backend__layout__V_45_45 == (MR_Integer) 0);
#line 398 "layout.m"
                                                    ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 398 "layout.m"
                                                    if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                                                      ll_backend__layout__V_6_6 = ll_backend__layout__V_45_45;
#line 398 "layout.m"
                                                    else
#line 398 "layout.m"
                                                      {
#line 398 "layout.m"
                                                        mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_42_42, ll_backend__layout__V_44_44);
                                                      }
#line 398 "layout.m"
                                                    ll_backend__layout__succeeded = MR_TRUE;
#line 398 "layout.m"
                                                  }
#line 398 "layout.m"
                                              }
#line 398 "layout.m"
                                            else
#line 398 "layout.m"
                                              if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 398 "layout.m"
                                                {
#line 398 "layout.m"
                                                  MR_Word ll_backend__layout__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "layout.m"
                                                  MR_Word ll_backend__layout__V_82_82;

#line 398 "layout.m"
                                                  ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 13)));
#line 398 "layout.m"
                                                  if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                                                    {
#line 398 "layout.m"
                                                      ll_backend__layout__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 398 "layout.m"
                                                      {
#line 398 "layout.m"
                                                        mdbcomp__prim_data____Compare____sym_name_0_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_81_81, ll_backend__layout__V_82_82);
                                                      }
#line 398 "layout.m"
                                                      ll_backend__layout__succeeded = MR_TRUE;
#line 398 "layout.m"
                                                    }
#line 398 "layout.m"
                                                }
#line 398 "layout.m"
                                              else
#line 398 "layout.m"
                                                if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 398 "layout.m"
                                                  {
#line 398 "layout.m"
                                                    MR_Word ll_backend__layout__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "layout.m"
                                                    MR_Word ll_backend__layout__V_40_40;

#line 398 "layout.m"
                                                    ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 398 "layout.m"
                                                    if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                                                      {
#line 398 "layout.m"
                                                        ll_backend__layout__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 398 "layout.m"
                                                        {
#line 398 "layout.m"
                                                          mdbcomp__prim_data____Compare____sym_name_0_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_39_39, ll_backend__layout__V_40_40);
                                                        }
#line 398 "layout.m"
                                                        ll_backend__layout__succeeded = MR_TRUE;
#line 398 "layout.m"
                                                      }
#line 398 "layout.m"
                                                  }
#line 398 "layout.m"
                                                else
#line 398 "layout.m"
                                                  if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 398 "layout.m"
                                                    {
#line 398 "layout.m"
                                                      MR_Word ll_backend__layout__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "layout.m"
                                                      MR_Word ll_backend__layout__V_36_36;

#line 398 "layout.m"
                                                      ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 398 "layout.m"
                                                      if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                                                        {
#line 398 "layout.m"
                                                          ll_backend__layout__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 398 "layout.m"
                                                          {
#line 398 "layout.m"
                                                            mdbcomp__prim_data____Compare____sym_name_0_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_35_35, ll_backend__layout__V_36_36);
                                                          }
#line 398 "layout.m"
                                                          ll_backend__layout__succeeded = MR_TRUE;
#line 398 "layout.m"
                                                        }
#line 398 "layout.m"
                                                    }
#line 398 "layout.m"
                                                  else
#line 398 "layout.m"
                                                    {
#line 398 "layout.m"
                                                      MR_Word ll_backend__layout__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "layout.m"
                                                      MR_Word ll_backend__layout__V_84_84;

#line 398 "layout.m"
                                                      ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 14)));
#line 398 "layout.m"
                                                      if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                                                        {
#line 398 "layout.m"
                                                          ll_backend__layout__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 398 "layout.m"
                                                          {
#line 398 "layout.m"
                                                            mdbcomp__prim_data____Compare____sym_name_0_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_83_83, ll_backend__layout__V_84_84);
                                                          }
#line 398 "layout.m"
                                                          ll_backend__layout__succeeded = MR_TRUE;
#line 398 "layout.m"
                                                        }
#line 398 "layout.m"
                                                    }
#line 398 "layout.m"
                if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_6_6;
#line 398 "layout.m"
                else
#line 398 "layout.m"
                  {
#line 398 "layout.m"
                    mercury__private_builtin__compare_error_0_p_0();
#line 398 "layout.m"
                    return;
                  }
#line 398 "layout.m"
              }
#line 398 "layout.m"
          }
#line 398 "layout.m"
      }
#line 398 "layout.m"
  }
#line 398 "layout.m"
}

#line 398 "layout.m"
void MR_CALL 
ll_backend__layout____Index____layout_name_0_0(
#line 398 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 398 "layout.m"
  MR_Integer * ll_backend__layout__HeadVar__2_2)
#line 398 "layout.m"
{
#line 398 "layout.m"
  {
#line 398 "layout.m"
    MR_bool ll_backend__layout__succeeded;

#line 398 "layout.m"
    if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 10615 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 1;
#line 398 "layout.m"
    else
#line 398 "layout.m"
      if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 10621 "ll_backend.layout.c"
        *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 2;
#line 398 "layout.m"
      else
#line 398 "layout.m"
        if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 10627 "ll_backend.layout.c"
          *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 0;
#line 398 "layout.m"
        else
#line 398 "layout.m"
          if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 10633 "ll_backend.layout.c"
            *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 4;
#line 398 "layout.m"
          else
#line 398 "layout.m"
            if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 10639 "ll_backend.layout.c"
              *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 3;
#line 398 "layout.m"
            else
#line 398 "layout.m"
              if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 10645 "ll_backend.layout.c"
                *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 18;
#line 398 "layout.m"
              else
#line 398 "layout.m"
                if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 10651 "ll_backend.layout.c"
                  *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 10;
#line 398 "layout.m"
                else
#line 398 "layout.m"
                  if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 10657 "ll_backend.layout.c"
                    *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 9;
#line 398 "layout.m"
                  else
#line 398 "layout.m"
                    if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 10663 "ll_backend.layout.c"
                      *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 15;
#line 398 "layout.m"
                    else
#line 398 "layout.m"
                      if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 10669 "ll_backend.layout.c"
                        *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 12;
#line 398 "layout.m"
                      else
#line 398 "layout.m"
                        if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 10675 "ll_backend.layout.c"
                          *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 13;
#line 398 "layout.m"
                        else
#line 398 "layout.m"
                          if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 10681 "ll_backend.layout.c"
                            *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 11;
#line 398 "layout.m"
                          else
#line 398 "layout.m"
                            if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 10687 "ll_backend.layout.c"
                              *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 14;
#line 398 "layout.m"
                            else
#line 398 "layout.m"
                              if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 10693 "ll_backend.layout.c"
                                *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 6;
#line 398 "layout.m"
                              else
#line 398 "layout.m"
                                if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 10699 "ll_backend.layout.c"
                                  *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 8;
#line 398 "layout.m"
                                else
#line 398 "layout.m"
                                  if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 10705 "ll_backend.layout.c"
                                    *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 16;
#line 398 "layout.m"
                                  else
#line 398 "layout.m"
                                    if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 10711 "ll_backend.layout.c"
                                      *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 7;
#line 398 "layout.m"
                                    else
#line 398 "layout.m"
                                      if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 10717 "ll_backend.layout.c"
                                        *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 5;
#line 398 "layout.m"
                                      else
#line 10721 "ll_backend.layout.c"
                                        *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 17;
#line 398 "layout.m"
  }
#line 398 "layout.m"
}

#line 398 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____layout_name_0_0(
#line 398 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 398 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 398 "layout.m"
{
#line 398 "layout.m"
  {
#line 398 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 398 "layout.m"
    MR_Integer ll_backend__layout__CastX_69 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 398 "layout.m"
    MR_Integer ll_backend__layout__CastY_70 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 398 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_69 == ll_backend__layout__CastY_70);
#line 398 "layout.m"
    if (ll_backend__layout__succeeded)
#line 398 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 398 "layout.m"
    else
#line 398 "layout.m"
      if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 398 "layout.m"
        {
#line 398 "layout.m"
          MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 398 "layout.m"
          MR_Integer ll_backend__layout__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 398 "layout.m"
          MR_Word ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 398 "layout.m"
          MR_Word ll_backend__layout__V_10_10;
#line 398 "layout.m"
          MR_Integer ll_backend__layout__V_11_11;
#line 398 "layout.m"
          MR_Word ll_backend__layout__V_12_12;

#line 398 "layout.m"
          ll_backend__layout__succeeded = ((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 398 "layout.m"
          if (ll_backend__layout__succeeded)
#line 398 "layout.m"
            {
#line 398 "layout.m"
              ll_backend__layout__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 398 "layout.m"
              ll_backend__layout__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "layout.m"
              ll_backend__layout__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 10783 "ll_backend.layout.c"
              {
#line 10785 "ll_backend.layout.c"
                ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__layout__V_7_7, ll_backend__layout__V_10_10);
              }
#line 398 "layout.m"
              if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                {
#line 10792 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = (ll_backend__layout__V_8_8 == ll_backend__layout__V_11_11);
#line 398 "layout.m"
                  if (ll_backend__layout__succeeded)
#line 10796 "ll_backend.layout.c"
                    {
#line 10798 "ll_backend.layout.c"
                      return ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__layout__V_9_9, ll_backend__layout__V_12_12);
                    }
#line 398 "layout.m"
                }
#line 398 "layout.m"
            }
#line 398 "layout.m"
        }
#line 398 "layout.m"
      else
#line 398 "layout.m"
        if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 398 "layout.m"
          {
#line 398 "layout.m"
            MR_Word ll_backend__layout__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 398 "layout.m"
            MR_Integer ll_backend__layout__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 398 "layout.m"
            MR_Word ll_backend__layout__V_15_15;
#line 398 "layout.m"
            MR_Integer ll_backend__layout__V_16_16;

#line 398 "layout.m"
            ll_backend__layout__succeeded = ((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 398 "layout.m"
            if (ll_backend__layout__succeeded)
#line 398 "layout.m"
              {
#line 398 "layout.m"
                ll_backend__layout__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 398 "layout.m"
                ll_backend__layout__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 10832 "ll_backend.layout.c"
                {
#line 10834 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__layout__V_13_13, ll_backend__layout__V_15_15);
                }
#line 398 "layout.m"
                if (ll_backend__layout__succeeded)
#line 10839 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = (ll_backend__layout__V_14_14 == ll_backend__layout__V_16_16);
#line 398 "layout.m"
              }
#line 398 "layout.m"
          }
#line 398 "layout.m"
        else
#line 398 "layout.m"
          if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 398 "layout.m"
            {
#line 398 "layout.m"
              MR_Word ll_backend__layout__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 398 "layout.m"
              MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 398 "layout.m"
              MR_Word ll_backend__layout__V_5_5;
#line 398 "layout.m"
              MR_Word ll_backend__layout__V_6_6;

#line 398 "layout.m"
              ll_backend__layout__succeeded = ((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 398 "layout.m"
              if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                {
#line 398 "layout.m"
                  ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 398 "layout.m"
                  ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 10870 "ll_backend.layout.c"
                  {
#line 10872 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = hlds__hlds_rtti____Unify____rtti_proc_label_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_5_5);
                  }
#line 398 "layout.m"
                  if (ll_backend__layout__succeeded)
#line 10877 "ll_backend.layout.c"
                    {
#line 10879 "ll_backend.layout.c"
                      return ll_backend__layout__succeeded = ll_backend__layout____Unify____proc_layout_kind_0_0(ll_backend__layout__V_4_4, ll_backend__layout__V_6_6);
                    }
#line 398 "layout.m"
                }
#line 398 "layout.m"
            }
#line 398 "layout.m"
          else
#line 398 "layout.m"
            if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 398 "layout.m"
              {
#line 398 "layout.m"
                MR_Word ll_backend__layout__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 398 "layout.m"
                MR_Integer ll_backend__layout__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 398 "layout.m"
                MR_Word ll_backend__layout__V_23_23;
#line 398 "layout.m"
                MR_Integer ll_backend__layout__V_24_24;

#line 398 "layout.m"
                ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 398 "layout.m"
                if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                  {
#line 398 "layout.m"
                    ll_backend__layout__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "layout.m"
                    ll_backend__layout__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 10911 "ll_backend.layout.c"
                    {
#line 10913 "ll_backend.layout.c"
                      ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__layout__V_21_21, ll_backend__layout__V_23_23);
                    }
#line 398 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 10918 "ll_backend.layout.c"
                      ll_backend__layout__succeeded = (ll_backend__layout__V_22_22 == ll_backend__layout__V_24_24);
#line 398 "layout.m"
                  }
#line 398 "layout.m"
              }
#line 398 "layout.m"
            else
#line 398 "layout.m"
              if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 398 "layout.m"
                {
#line 398 "layout.m"
                  MR_Word ll_backend__layout__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 398 "layout.m"
                  MR_Integer ll_backend__layout__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 398 "layout.m"
                  MR_Word ll_backend__layout__V_19_19;
#line 398 "layout.m"
                  MR_Integer ll_backend__layout__V_20_20;

#line 398 "layout.m"
                  ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 398 "layout.m"
                  if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                    {
#line 398 "layout.m"
                      ll_backend__layout__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "layout.m"
                      ll_backend__layout__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 10949 "ll_backend.layout.c"
                      {
#line 10951 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__layout__V_17_17, ll_backend__layout__V_19_19);
                      }
#line 398 "layout.m"
                      if (ll_backend__layout__succeeded)
#line 10956 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = (ll_backend__layout__V_18_18 == ll_backend__layout__V_20_20);
#line 398 "layout.m"
                    }
#line 398 "layout.m"
                }
#line 398 "layout.m"
              else
#line 398 "layout.m"
                if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 398 "layout.m"
                  {
#line 398 "layout.m"
                    MR_Word ll_backend__layout__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 398 "layout.m"
                    MR_Word ll_backend__layout__V_68_68;

#line 398 "layout.m"
                    ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 15)));
#line 398 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                      {
#line 398 "layout.m"
                        ll_backend__layout__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 10981 "ll_backend.layout.c"
                        {
#line 10983 "ll_backend.layout.c"
                          return ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__layout__V_67_67, ll_backend__layout__V_68_68);
                        }
#line 398 "layout.m"
                      }
#line 398 "layout.m"
                  }
#line 398 "layout.m"
                else
#line 398 "layout.m"
                  if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 398 "layout.m"
                    {
#line 398 "layout.m"
                      MR_Word ll_backend__layout__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 398 "layout.m"
                      MR_Integer ll_backend__layout__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 398 "layout.m"
                      MR_Word ll_backend__layout__V_39_39;
#line 398 "layout.m"
                      MR_Integer ll_backend__layout__V_40_40;

#line 398 "layout.m"
                      ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 398 "layout.m"
                      if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                        {
#line 398 "layout.m"
                          ll_backend__layout__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "layout.m"
                          ll_backend__layout__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 11015 "ll_backend.layout.c"
                          {
#line 11017 "ll_backend.layout.c"
                            ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__layout__V_37_37, ll_backend__layout__V_39_39);
                          }
#line 398 "layout.m"
                          if (ll_backend__layout__succeeded)
#line 11022 "ll_backend.layout.c"
                            ll_backend__layout__succeeded = (ll_backend__layout__V_38_38 == ll_backend__layout__V_40_40);
#line 398 "layout.m"
                        }
#line 398 "layout.m"
                    }
#line 398 "layout.m"
                  else
#line 398 "layout.m"
                    if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 398 "layout.m"
                      {
#line 398 "layout.m"
                        MR_Word ll_backend__layout__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 398 "layout.m"
                        MR_Word ll_backend__layout__V_36_36;

#line 398 "layout.m"
                        ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 398 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                          {
#line 398 "layout.m"
                            ll_backend__layout__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 11047 "ll_backend.layout.c"
                            {
#line 11049 "ll_backend.layout.c"
                              return ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__layout__V_35_35, ll_backend__layout__V_36_36);
                            }
#line 398 "layout.m"
                          }
#line 398 "layout.m"
                      }
#line 398 "layout.m"
                    else
#line 398 "layout.m"
                      if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 398 "layout.m"
                        {
#line 398 "layout.m"
                          MR_Word ll_backend__layout__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 398 "layout.m"
                          MR_Word ll_backend__layout__V_62_62;

#line 398 "layout.m"
                          ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 398 "layout.m"
                          if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                            {
#line 398 "layout.m"
                              ll_backend__layout__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 11075 "ll_backend.layout.c"
                              {
#line 11077 "ll_backend.layout.c"
                                return ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__layout__V_61_61, ll_backend__layout__V_62_62);
                              }
#line 398 "layout.m"
                            }
#line 398 "layout.m"
                        }
#line 398 "layout.m"
                      else
#line 398 "layout.m"
                        if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 398 "layout.m"
                          {
#line 398 "layout.m"
                            MR_Word ll_backend__layout__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 398 "layout.m"
                            MR_Integer ll_backend__layout__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 398 "layout.m"
                            MR_Integer ll_backend__layout__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 3)));
#line 398 "layout.m"
                            MR_Word ll_backend__layout__V_48_48;
#line 398 "layout.m"
                            MR_Integer ll_backend__layout__V_49_49;
#line 398 "layout.m"
                            MR_Integer ll_backend__layout__V_50_50;

#line 398 "layout.m"
                            ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 398 "layout.m"
                            if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                              {
#line 398 "layout.m"
                                ll_backend__layout__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "layout.m"
                                ll_backend__layout__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 398 "layout.m"
                                ll_backend__layout__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 11115 "ll_backend.layout.c"
                                {
#line 11117 "ll_backend.layout.c"
                                  ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__layout__V_45_45, ll_backend__layout__V_48_48);
                                }
#line 398 "layout.m"
                                if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                                  {
#line 11124 "ll_backend.layout.c"
                                    ll_backend__layout__succeeded = (ll_backend__layout__V_46_46 == ll_backend__layout__V_49_49);
#line 398 "layout.m"
                                    if (ll_backend__layout__succeeded)
#line 11128 "ll_backend.layout.c"
                                      ll_backend__layout__succeeded = (ll_backend__layout__V_47_47 == ll_backend__layout__V_50_50);
#line 398 "layout.m"
                                  }
#line 398 "layout.m"
                              }
#line 398 "layout.m"
                          }
#line 398 "layout.m"
                        else
#line 398 "layout.m"
                          if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 398 "layout.m"
                            {
#line 398 "layout.m"
                              MR_Word ll_backend__layout__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 398 "layout.m"
                              MR_Integer ll_backend__layout__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 398 "layout.m"
                              MR_Integer ll_backend__layout__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 3)));
#line 398 "layout.m"
                              MR_Word ll_backend__layout__V_54_54;
#line 398 "layout.m"
                              MR_Integer ll_backend__layout__V_55_55;
#line 398 "layout.m"
                              MR_Integer ll_backend__layout__V_56_56;

#line 398 "layout.m"
                              ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 398 "layout.m"
                              if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                                {
#line 398 "layout.m"
                                  ll_backend__layout__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "layout.m"
                                  ll_backend__layout__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 398 "layout.m"
                                  ll_backend__layout__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 11167 "ll_backend.layout.c"
                                  {
#line 11169 "ll_backend.layout.c"
                                    ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__layout__V_51_51, ll_backend__layout__V_54_54);
                                  }
#line 398 "layout.m"
                                  if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                                    {
#line 11176 "ll_backend.layout.c"
                                      ll_backend__layout__succeeded = (ll_backend__layout__V_52_52 == ll_backend__layout__V_55_55);
#line 398 "layout.m"
                                      if (ll_backend__layout__succeeded)
#line 11180 "ll_backend.layout.c"
                                        ll_backend__layout__succeeded = (ll_backend__layout__V_53_53 == ll_backend__layout__V_56_56);
#line 398 "layout.m"
                                    }
#line 398 "layout.m"
                                }
#line 398 "layout.m"
                            }
#line 398 "layout.m"
                          else
#line 398 "layout.m"
                            if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 398 "layout.m"
                              {
#line 398 "layout.m"
                                MR_Word ll_backend__layout__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 398 "layout.m"
                                MR_Integer ll_backend__layout__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 398 "layout.m"
                                MR_Word ll_backend__layout__V_43_43;
#line 398 "layout.m"
                                MR_Integer ll_backend__layout__V_44_44;

#line 398 "layout.m"
                                ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 398 "layout.m"
                                if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                                  {
#line 398 "layout.m"
                                    ll_backend__layout__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "layout.m"
                                    ll_backend__layout__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 11213 "ll_backend.layout.c"
                                    {
#line 11215 "ll_backend.layout.c"
                                      ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__layout__V_41_41, ll_backend__layout__V_43_43);
                                    }
#line 398 "layout.m"
                                    if (ll_backend__layout__succeeded)
#line 11220 "ll_backend.layout.c"
                                      ll_backend__layout__succeeded = (ll_backend__layout__V_42_42 == ll_backend__layout__V_44_44);
#line 398 "layout.m"
                                  }
#line 398 "layout.m"
                              }
#line 398 "layout.m"
                            else
#line 398 "layout.m"
                              if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 398 "layout.m"
                                {
#line 398 "layout.m"
                                  MR_Word ll_backend__layout__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 398 "layout.m"
                                  MR_Integer ll_backend__layout__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 398 "layout.m"
                                  MR_Word ll_backend__layout__V_59_59;
#line 398 "layout.m"
                                  MR_Integer ll_backend__layout__V_60_60;

#line 398 "layout.m"
                                  ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11)));
#line 398 "layout.m"
                                  if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                                    {
#line 398 "layout.m"
                                      ll_backend__layout__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "layout.m"
                                      ll_backend__layout__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 11251 "ll_backend.layout.c"
                                      {
#line 11253 "ll_backend.layout.c"
                                        ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__layout__V_57_57, ll_backend__layout__V_59_59);
                                      }
#line 398 "layout.m"
                                      if (ll_backend__layout__succeeded)
#line 11258 "ll_backend.layout.c"
                                        ll_backend__layout__succeeded = (ll_backend__layout__V_58_58 == ll_backend__layout__V_60_60);
#line 398 "layout.m"
                                    }
#line 398 "layout.m"
                                }
#line 398 "layout.m"
                              else
#line 398 "layout.m"
                                if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 398 "layout.m"
                                  {
#line 398 "layout.m"
                                    MR_Word ll_backend__layout__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 398 "layout.m"
                                    MR_Word ll_backend__layout__V_28_28;

#line 398 "layout.m"
                                    ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 398 "layout.m"
                                    if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                                      {
#line 398 "layout.m"
                                        ll_backend__layout__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 11283 "ll_backend.layout.c"
                                        {
#line 11285 "ll_backend.layout.c"
                                          return ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__layout__V_27_27, ll_backend__layout__V_28_28);
                                        }
#line 398 "layout.m"
                                      }
#line 398 "layout.m"
                                  }
#line 398 "layout.m"
                                else
#line 398 "layout.m"
                                  if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 398 "layout.m"
                                    {
#line 398 "layout.m"
                                      MR_Word ll_backend__layout__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 398 "layout.m"
                                      MR_Integer ll_backend__layout__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 398 "layout.m"
                                      MR_Word ll_backend__layout__V_33_33;
#line 398 "layout.m"
                                      MR_Integer ll_backend__layout__V_34_34;

#line 398 "layout.m"
                                      ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 398 "layout.m"
                                      if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                                        {
#line 398 "layout.m"
                                          ll_backend__layout__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 398 "layout.m"
                                          ll_backend__layout__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 11317 "ll_backend.layout.c"
                                          {
#line 11319 "ll_backend.layout.c"
                                            ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__layout__V_31_31, ll_backend__layout__V_33_33);
                                          }
#line 398 "layout.m"
                                          if (ll_backend__layout__succeeded)
#line 11324 "ll_backend.layout.c"
                                            ll_backend__layout__succeeded = (ll_backend__layout__V_32_32 == ll_backend__layout__V_34_34);
#line 398 "layout.m"
                                        }
#line 398 "layout.m"
                                    }
#line 398 "layout.m"
                                  else
#line 398 "layout.m"
                                    if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 398 "layout.m"
                                      {
#line 398 "layout.m"
                                        MR_Word ll_backend__layout__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 398 "layout.m"
                                        MR_Word ll_backend__layout__V_64_64;

#line 398 "layout.m"
                                        ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 13)));
#line 398 "layout.m"
                                        if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                                          {
#line 398 "layout.m"
                                            ll_backend__layout__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 11349 "ll_backend.layout.c"
                                            {
#line 11351 "ll_backend.layout.c"
                                              return ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__layout__V_63_63, ll_backend__layout__V_64_64);
                                            }
#line 398 "layout.m"
                                          }
#line 398 "layout.m"
                                      }
#line 398 "layout.m"
                                    else
#line 398 "layout.m"
                                      if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 398 "layout.m"
                                        {
#line 398 "layout.m"
                                          MR_Word ll_backend__layout__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 398 "layout.m"
                                          MR_Word ll_backend__layout__V_30_30;

#line 398 "layout.m"
                                          ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 398 "layout.m"
                                          if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                                            {
#line 398 "layout.m"
                                              ll_backend__layout__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 11377 "ll_backend.layout.c"
                                              {
#line 11379 "ll_backend.layout.c"
                                                return ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__layout__V_29_29, ll_backend__layout__V_30_30);
                                              }
#line 398 "layout.m"
                                            }
#line 398 "layout.m"
                                        }
#line 398 "layout.m"
                                      else
#line 398 "layout.m"
                                        if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 398 "layout.m"
                                          {
#line 398 "layout.m"
                                            MR_Word ll_backend__layout__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 398 "layout.m"
                                            MR_Word ll_backend__layout__V_26_26;

#line 398 "layout.m"
                                            ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 398 "layout.m"
                                            if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                                              {
#line 398 "layout.m"
                                                ll_backend__layout__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 11405 "ll_backend.layout.c"
                                                {
#line 11407 "ll_backend.layout.c"
                                                  return ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__layout__V_25_25, ll_backend__layout__V_26_26);
                                                }
#line 398 "layout.m"
                                              }
#line 398 "layout.m"
                                          }
#line 398 "layout.m"
                                        else
#line 398 "layout.m"
                                          {
#line 398 "layout.m"
                                            MR_Word ll_backend__layout__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 398 "layout.m"
                                            MR_Word ll_backend__layout__V_66_66;

#line 398 "layout.m"
                                            ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 14)));
#line 398 "layout.m"
                                            if (ll_backend__layout__succeeded)
#line 398 "layout.m"
                                              {
#line 398 "layout.m"
                                                ll_backend__layout__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 11431 "ll_backend.layout.c"
                                                {
#line 11433 "ll_backend.layout.c"
                                                  return ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__layout__V_65_65, ll_backend__layout__V_66_66);
                                                }
#line 398 "layout.m"
                                              }
#line 398 "layout.m"
                                          }
#line 398 "layout.m"
    return ll_backend__layout__succeeded;
#line 398 "layout.m"
  }
#line 398 "layout.m"
}

#line 338 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____layout_array_name_0_0(
#line 338 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 338 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 338 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 338 "layout.m"
{
#line 338 "layout.m"
  {
#line 338 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 338 "layout.m"
    MR_Integer ll_backend__layout__CastX_9 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 338 "layout.m"
    MR_Integer ll_backend__layout__CastY_10 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 338 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_9 == ll_backend__layout__CastY_10);
#line 338 "layout.m"
    if (ll_backend__layout__succeeded)
#line 11471 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 338 "layout.m"
    else
#line 338 "layout.m"
      {
#line 338 "layout.m"
        MR_Integer ll_backend__layout__V_4_4;
#line 338 "layout.m"
        MR_Integer ll_backend__layout__V_5_5;

#line 338 "layout.m"
        {
#line 338 "layout.m"
          ll_backend__layout____Index____layout_array_name_0_0(ll_backend__layout__HeadVar__2_2, &ll_backend__layout__V_4_4);
        }
#line 338 "layout.m"
        {
#line 338 "layout.m"
          ll_backend__layout____Index____layout_array_name_0_0(ll_backend__layout__HeadVar__3_3, &ll_backend__layout__V_5_5);
        }
#line 338 "layout.m"
        ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 < ll_backend__layout__V_5_5);
#line 338 "layout.m"
        if (ll_backend__layout__succeeded)
#line 11496 "ll_backend.layout.c"
          *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 1;
#line 338 "layout.m"
        else
#line 338 "layout.m"
          {
#line 338 "layout.m"
            ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 > ll_backend__layout__V_5_5);
#line 338 "layout.m"
            if (ll_backend__layout__succeeded)
#line 11506 "ll_backend.layout.c"
              *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 2;
#line 338 "layout.m"
            else
#line 338 "layout.m"
              {
#line 338 "layout.m"
                MR_Word ll_backend__layout__V_6_6;

#line 338 "layout.m"
                if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 338 "layout.m"
                  {
#line 338 "layout.m"
                    ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 338 "layout.m"
                    ll_backend__layout__succeeded = MR_TRUE;
#line 338 "layout.m"
                  }
#line 338 "layout.m"
                else
#line 338 "layout.m"
                  if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 338 "layout.m"
                    {
#line 338 "layout.m"
                      ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 338 "layout.m"
                      ll_backend__layout__succeeded = MR_TRUE;
#line 338 "layout.m"
                    }
#line 338 "layout.m"
                  else
#line 338 "layout.m"
                    if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 338 "layout.m"
                      {
#line 338 "layout.m"
                        ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 338 "layout.m"
                        ll_backend__layout__succeeded = MR_TRUE;
#line 338 "layout.m"
                      }
#line 338 "layout.m"
                    else
#line 338 "layout.m"
                      if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 338 "layout.m"
                        {
#line 338 "layout.m"
                          ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 338 "layout.m"
                          ll_backend__layout__succeeded = MR_TRUE;
#line 338 "layout.m"
                        }
#line 338 "layout.m"
                      else
#line 338 "layout.m"
                        if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 338 "layout.m"
                          {
#line 338 "layout.m"
                            ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 338 "layout.m"
                            ll_backend__layout__succeeded = MR_TRUE;
#line 338 "layout.m"
                          }
#line 338 "layout.m"
                        else
#line 338 "layout.m"
                          if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 338 "layout.m"
                            {
#line 338 "layout.m"
                              ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 338 "layout.m"
                              ll_backend__layout__succeeded = MR_TRUE;
#line 338 "layout.m"
                            }
#line 338 "layout.m"
                          else
#line 338 "layout.m"
                            if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 338 "layout.m"
                              {
#line 338 "layout.m"
                                ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 338 "layout.m"
                                ll_backend__layout__succeeded = MR_TRUE;
#line 338 "layout.m"
                              }
#line 338 "layout.m"
                            else
#line 338 "layout.m"
                              if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 338 "layout.m"
                                {
#line 338 "layout.m"
                                  ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 338 "layout.m"
                                  ll_backend__layout__succeeded = MR_TRUE;
#line 338 "layout.m"
                                }
#line 338 "layout.m"
                              else
#line 338 "layout.m"
                                if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 338 "layout.m"
                                  {
#line 338 "layout.m"
                                    ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 338 "layout.m"
                                    ll_backend__layout__succeeded = MR_TRUE;
#line 338 "layout.m"
                                  }
#line 338 "layout.m"
                                else
#line 338 "layout.m"
                                  if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 338 "layout.m"
                                    {
#line 338 "layout.m"
                                      ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 338 "layout.m"
                                      ll_backend__layout__succeeded = MR_TRUE;
#line 338 "layout.m"
                                    }
#line 338 "layout.m"
                                  else
#line 338 "layout.m"
                                    if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 338 "layout.m"
                                      {
#line 338 "layout.m"
                                        ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 338 "layout.m"
                                        ll_backend__layout__succeeded = MR_TRUE;
#line 338 "layout.m"
                                      }
#line 338 "layout.m"
                                    else
#line 338 "layout.m"
                                      if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 338 "layout.m"
                                        {
#line 338 "layout.m"
                                          ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 338 "layout.m"
                                          ll_backend__layout__succeeded = MR_TRUE;
#line 338 "layout.m"
                                        }
#line 338 "layout.m"
                                      else
#line 338 "layout.m"
                                        if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 338 "layout.m"
                                          {
#line 338 "layout.m"
                                            ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 338 "layout.m"
                                            ll_backend__layout__succeeded = MR_TRUE;
#line 338 "layout.m"
                                          }
#line 338 "layout.m"
                                        else
#line 338 "layout.m"
                                          if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 338 "layout.m"
                                            {
#line 338 "layout.m"
                                              ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 338 "layout.m"
                                              ll_backend__layout__succeeded = MR_TRUE;
#line 338 "layout.m"
                                            }
#line 338 "layout.m"
                                          else
#line 338 "layout.m"
                                            if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 338 "layout.m"
                                              {
#line 338 "layout.m"
                                                ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 338 "layout.m"
                                                ll_backend__layout__succeeded = MR_TRUE;
#line 338 "layout.m"
                                              }
#line 338 "layout.m"
                                            else
#line 338 "layout.m"
                                              if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 338 "layout.m"
                                                {
#line 338 "layout.m"
                                                  ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 338 "layout.m"
                                                  ll_backend__layout__succeeded = MR_TRUE;
#line 338 "layout.m"
                                                }
#line 338 "layout.m"
                                              else
#line 338 "layout.m"
                                                if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 338 "layout.m"
                                                  {
#line 338 "layout.m"
                                                    ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 338 "layout.m"
                                                    ll_backend__layout__succeeded = MR_TRUE;
#line 338 "layout.m"
                                                  }
#line 338 "layout.m"
                                                else
#line 338 "layout.m"
                                                  if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 338 "layout.m"
                                                    {
#line 338 "layout.m"
                                                      ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 338 "layout.m"
                                                      ll_backend__layout__succeeded = MR_TRUE;
#line 338 "layout.m"
                                                    }
#line 338 "layout.m"
                                                  else
#line 338 "layout.m"
                                                    {
#line 338 "layout.m"
                                                      MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 338 "layout.m"
                                                      MR_Word ll_backend__layout__V_8_8;
#line 338 "layout.m"
                                                      MR_Integer ll_backend__layout__V_12_12;
#line 338 "layout.m"
                                                      MR_Integer ll_backend__layout__V_13_13;

#line 338 "layout.m"
                                                      ll_backend__layout__succeeded = ((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 338 "layout.m"
                                                      if (ll_backend__layout__succeeded)
#line 338 "layout.m"
                                                        {
#line 338 "layout.m"
                                                          ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 338 "layout.m"
                                                          ll_backend__layout__V_12_12 = (MR_Integer) ll_backend__layout__V_7_7;
#line 338 "layout.m"
                                                          ll_backend__layout__V_13_13 = (MR_Integer) ll_backend__layout__V_8_8;
#line 338 "layout.m"
                                                          {
#line 338 "layout.m"
                                                            mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_12_12, ll_backend__layout__V_13_13);
                                                          }
#line 338 "layout.m"
                                                          ll_backend__layout__succeeded = MR_TRUE;
#line 338 "layout.m"
                                                        }
#line 338 "layout.m"
                                                    }
#line 338 "layout.m"
                if (ll_backend__layout__succeeded)
#line 338 "layout.m"
                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_6_6;
#line 338 "layout.m"
                else
#line 338 "layout.m"
                  {
#line 338 "layout.m"
                    mercury__private_builtin__compare_error_0_p_0();
#line 338 "layout.m"
                    return;
                  }
#line 338 "layout.m"
              }
#line 338 "layout.m"
          }
#line 338 "layout.m"
      }
#line 338 "layout.m"
  }
#line 338 "layout.m"
}

#line 338 "layout.m"
void MR_CALL 
ll_backend__layout____Index____layout_array_name_0_0(
#line 338 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 338 "layout.m"
  MR_Integer * ll_backend__layout__HeadVar__2_2)
#line 338 "layout.m"
{
#line 338 "layout.m"
  {
#line 338 "layout.m"
    MR_bool ll_backend__layout__succeeded;

#line 338 "layout.m"
    if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 11805 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 18;
#line 338 "layout.m"
    else
#line 338 "layout.m"
      if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 11811 "ll_backend.layout.c"
        *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 1;
#line 338 "layout.m"
      else
#line 338 "layout.m"
        if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 11817 "ll_backend.layout.c"
          *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 3;
#line 338 "layout.m"
        else
#line 338 "layout.m"
          if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 11823 "ll_backend.layout.c"
            *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 13;
#line 338 "layout.m"
          else
#line 338 "layout.m"
            if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 11829 "ll_backend.layout.c"
              *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 15;
#line 338 "layout.m"
            else
#line 338 "layout.m"
              if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 11835 "ll_backend.layout.c"
                *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 16;
#line 338 "layout.m"
              else
#line 338 "layout.m"
                if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 11841 "ll_backend.layout.c"
                  *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 11;
#line 338 "layout.m"
                else
#line 338 "layout.m"
                  if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 11847 "ll_backend.layout.c"
                    *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 10;
#line 338 "layout.m"
                  else
#line 338 "layout.m"
                    if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 11853 "ll_backend.layout.c"
                      *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 7;
#line 338 "layout.m"
                    else
#line 338 "layout.m"
                      if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 11859 "ll_backend.layout.c"
                        *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 9;
#line 338 "layout.m"
                      else
#line 338 "layout.m"
                        if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 11865 "ll_backend.layout.c"
                          *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 8;
#line 338 "layout.m"
                        else
#line 338 "layout.m"
                          if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 11871 "ll_backend.layout.c"
                            *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 14;
#line 338 "layout.m"
                          else
#line 338 "layout.m"
                            if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 11877 "ll_backend.layout.c"
                              *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 12;
#line 338 "layout.m"
                            else
#line 338 "layout.m"
                              if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 11883 "ll_backend.layout.c"
                                *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 0;
#line 338 "layout.m"
                              else
#line 338 "layout.m"
                                if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 11889 "ll_backend.layout.c"
                                  *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 2;
#line 338 "layout.m"
                                else
#line 338 "layout.m"
                                  if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 11895 "ll_backend.layout.c"
                                    *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 17;
#line 338 "layout.m"
                                  else
#line 338 "layout.m"
                                    if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 11901 "ll_backend.layout.c"
                                      *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 4;
#line 338 "layout.m"
                                    else
#line 338 "layout.m"
                                      if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 11907 "ll_backend.layout.c"
                                        *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 5;
#line 338 "layout.m"
                                      else
#line 11911 "ll_backend.layout.c"
                                        *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 6;
#line 338 "layout.m"
  }
#line 338 "layout.m"
}

#line 338 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____layout_array_name_0_0(
#line 338 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 338 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 338 "layout.m"
{
#line 338 "layout.m"
  {
#line 338 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 338 "layout.m"
    MR_Integer ll_backend__layout__CastX_41 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 338 "layout.m"
    MR_Integer ll_backend__layout__CastY_42 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 338 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_41 == ll_backend__layout__CastY_42);
#line 338 "layout.m"
    if (ll_backend__layout__succeeded)
#line 338 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 338 "layout.m"
    else
#line 338 "layout.m"
      if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 338 "layout.m"
        {
#line 338 "layout.m"
          MR_Integer ll_backend__layout__CastX_39 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 338 "layout.m"
          MR_Integer ll_backend__layout__CastY_40 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 338 "layout.m"
          ll_backend__layout__succeeded = (ll_backend__layout__CastY_40 == ll_backend__layout__CastX_39);
#line 338 "layout.m"
        }
#line 338 "layout.m"
      else
#line 338 "layout.m"
        if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 338 "layout.m"
          {
#line 338 "layout.m"
            MR_Integer ll_backend__layout__CastX_5 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 338 "layout.m"
            MR_Integer ll_backend__layout__CastY_6 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 338 "layout.m"
            ll_backend__layout__succeeded = (ll_backend__layout__CastY_6 == ll_backend__layout__CastX_5);
#line 338 "layout.m"
          }
#line 338 "layout.m"
        else
#line 338 "layout.m"
          if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 338 "layout.m"
            {
#line 338 "layout.m"
              MR_Integer ll_backend__layout__CastX_9 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 338 "layout.m"
              MR_Integer ll_backend__layout__CastY_10 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 338 "layout.m"
              ll_backend__layout__succeeded = (ll_backend__layout__CastY_10 == ll_backend__layout__CastX_9);
#line 338 "layout.m"
            }
#line 338 "layout.m"
          else
#line 338 "layout.m"
            if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 338 "layout.m"
              {
#line 338 "layout.m"
                MR_Integer ll_backend__layout__CastX_29 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 338 "layout.m"
                MR_Integer ll_backend__layout__CastY_30 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 338 "layout.m"
                ll_backend__layout__succeeded = (ll_backend__layout__CastY_30 == ll_backend__layout__CastX_29);
#line 338 "layout.m"
              }
#line 338 "layout.m"
            else
#line 338 "layout.m"
              if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 338 "layout.m"
                {
#line 338 "layout.m"
                  MR_Integer ll_backend__layout__CastX_33 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 338 "layout.m"
                  MR_Integer ll_backend__layout__CastY_34 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 338 "layout.m"
                  ll_backend__layout__succeeded = (ll_backend__layout__CastY_34 == ll_backend__layout__CastX_33);
#line 338 "layout.m"
                }
#line 338 "layout.m"
              else
#line 338 "layout.m"
                if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 338 "layout.m"
                  {
#line 338 "layout.m"
                    MR_Integer ll_backend__layout__CastX_35 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 338 "layout.m"
                    MR_Integer ll_backend__layout__CastY_36 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 338 "layout.m"
                    ll_backend__layout__succeeded = (ll_backend__layout__CastY_36 == ll_backend__layout__CastX_35);
#line 338 "layout.m"
                  }
#line 338 "layout.m"
                else
#line 338 "layout.m"
                  if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 338 "layout.m"
                    {
#line 338 "layout.m"
                      MR_Integer ll_backend__layout__CastX_25 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 338 "layout.m"
                      MR_Integer ll_backend__layout__CastY_26 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 338 "layout.m"
                      ll_backend__layout__succeeded = (ll_backend__layout__CastY_26 == ll_backend__layout__CastX_25);
#line 338 "layout.m"
                    }
#line 338 "layout.m"
                  else
#line 338 "layout.m"
                    if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 338 "layout.m"
                      {
#line 338 "layout.m"
                        MR_Integer ll_backend__layout__CastX_23 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 338 "layout.m"
                        MR_Integer ll_backend__layout__CastY_24 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 338 "layout.m"
                        ll_backend__layout__succeeded = (ll_backend__layout__CastY_24 == ll_backend__layout__CastX_23);
#line 338 "layout.m"
                      }
#line 338 "layout.m"
                    else
#line 338 "layout.m"
                      if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 338 "layout.m"
                        {
#line 338 "layout.m"
                          MR_Integer ll_backend__layout__CastX_17 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 338 "layout.m"
                          MR_Integer ll_backend__layout__CastY_18 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 338 "layout.m"
                          ll_backend__layout__succeeded = (ll_backend__layout__CastY_18 == ll_backend__layout__CastX_17);
#line 338 "layout.m"
                        }
#line 338 "layout.m"
                      else
#line 338 "layout.m"
                        if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 338 "layout.m"
                          {
#line 338 "layout.m"
                            MR_Integer ll_backend__layout__CastX_21 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 338 "layout.m"
                            MR_Integer ll_backend__layout__CastY_22 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 338 "layout.m"
                            ll_backend__layout__succeeded = (ll_backend__layout__CastY_22 == ll_backend__layout__CastX_21);
#line 338 "layout.m"
                          }
#line 338 "layout.m"
                        else
#line 338 "layout.m"
                          if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 338 "layout.m"
                            {
#line 338 "layout.m"
                              MR_Integer ll_backend__layout__CastX_19 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 338 "layout.m"
                              MR_Integer ll_backend__layout__CastY_20 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 338 "layout.m"
                              ll_backend__layout__succeeded = (ll_backend__layout__CastY_20 == ll_backend__layout__CastX_19);
#line 338 "layout.m"
                            }
#line 338 "layout.m"
                          else
#line 338 "layout.m"
                            if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 338 "layout.m"
                              {
#line 338 "layout.m"
                                MR_Integer ll_backend__layout__CastX_31 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 338 "layout.m"
                                MR_Integer ll_backend__layout__CastY_32 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 338 "layout.m"
                                ll_backend__layout__succeeded = (ll_backend__layout__CastY_32 == ll_backend__layout__CastX_31);
#line 338 "layout.m"
                              }
#line 338 "layout.m"
                            else
#line 338 "layout.m"
                              if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 338 "layout.m"
                                {
#line 338 "layout.m"
                                  MR_Integer ll_backend__layout__CastX_27 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 338 "layout.m"
                                  MR_Integer ll_backend__layout__CastY_28 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 338 "layout.m"
                                  ll_backend__layout__succeeded = (ll_backend__layout__CastY_28 == ll_backend__layout__CastX_27);
#line 338 "layout.m"
                                }
#line 338 "layout.m"
                              else
#line 338 "layout.m"
                                if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 338 "layout.m"
                                  {
#line 338 "layout.m"
                                    MR_Integer ll_backend__layout__CastX_3 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 338 "layout.m"
                                    MR_Integer ll_backend__layout__CastY_4 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 338 "layout.m"
                                    ll_backend__layout__succeeded = (ll_backend__layout__CastY_4 == ll_backend__layout__CastX_3);
#line 338 "layout.m"
                                  }
#line 338 "layout.m"
                                else
#line 338 "layout.m"
                                  if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 338 "layout.m"
                                    {
#line 338 "layout.m"
                                      MR_Integer ll_backend__layout__CastX_7 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 338 "layout.m"
                                      MR_Integer ll_backend__layout__CastY_8 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 338 "layout.m"
                                      ll_backend__layout__succeeded = (ll_backend__layout__CastY_8 == ll_backend__layout__CastX_7);
#line 338 "layout.m"
                                    }
#line 338 "layout.m"
                                  else
#line 338 "layout.m"
                                    if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 338 "layout.m"
                                      {
#line 338 "layout.m"
                                        MR_Integer ll_backend__layout__CastX_37 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 338 "layout.m"
                                        MR_Integer ll_backend__layout__CastY_38 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 338 "layout.m"
                                        ll_backend__layout__succeeded = (ll_backend__layout__CastY_38 == ll_backend__layout__CastX_37);
#line 338 "layout.m"
                                      }
#line 338 "layout.m"
                                    else
#line 338 "layout.m"
                                      if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 338 "layout.m"
                                        {
#line 338 "layout.m"
                                          MR_Integer ll_backend__layout__CastX_11 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 338 "layout.m"
                                          MR_Integer ll_backend__layout__CastY_12 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 338 "layout.m"
                                          ll_backend__layout__succeeded = (ll_backend__layout__CastY_12 == ll_backend__layout__CastX_11);
#line 338 "layout.m"
                                        }
#line 338 "layout.m"
                                      else
#line 338 "layout.m"
                                        if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 338 "layout.m"
                                          {
#line 338 "layout.m"
                                            MR_Integer ll_backend__layout__CastX_13 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 338 "layout.m"
                                            MR_Integer ll_backend__layout__CastY_14 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 338 "layout.m"
                                            ll_backend__layout__succeeded = (ll_backend__layout__CastY_14 == ll_backend__layout__CastX_13);
#line 338 "layout.m"
                                          }
#line 338 "layout.m"
                                        else
#line 338 "layout.m"
                                          {
#line 338 "layout.m"
                                            MR_Word ll_backend__layout__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 338 "layout.m"
                                            MR_Word ll_backend__layout__V_16_16;

#line 338 "layout.m"
                                            ll_backend__layout__succeeded = ((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 338 "layout.m"
                                            if (ll_backend__layout__succeeded)
#line 338 "layout.m"
                                              {
#line 338 "layout.m"
                                                ll_backend__layout__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 12229 "ll_backend.layout.c"
                                                ll_backend__layout__succeeded = (ll_backend__layout__V_15_15 == ll_backend__layout__V_16_16);
#line 338 "layout.m"
                                              }
#line 338 "layout.m"
                                          }
#line 338 "layout.m"
    return ll_backend__layout__succeeded;
#line 338 "layout.m"
  }
#line 338 "layout.m"
}

#line 330 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____label_vars_0_0(
#line 330 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 330 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 330 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 330 "layout.m"
{
#line 330 "layout.m"
  {
#line 330 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 330 "layout.m"
    MR_Integer ll_backend__layout__Cast_HeadVar1_4 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 330 "layout.m"
    MR_Integer ll_backend__layout__Cast_HeadVar2_5 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 330 "layout.m"
    {
#line 330 "layout.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__Cast_HeadVar1_4, ll_backend__layout__Cast_HeadVar2_5);
#line 330 "layout.m"
      return;
    }
#line 330 "layout.m"
  }
#line 330 "layout.m"
}

#line 330 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____label_vars_0_0(
#line 330 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_1,
#line 330 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 330 "layout.m"
{
#line 12283 "ll_backend.layout.c"
  {
#line 12285 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded = (ll_backend__layout__HeadVar__2_1 == ll_backend__layout__HeadVar__2_2);

#line 12288 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 12290 "ll_backend.layout.c"
  }
#line 330 "layout.m"
}

#line 92 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____label_short_var_info_0_0(
#line 92 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 92 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 92 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 92 "layout.m"
{
#line 92 "layout.m"
  {
#line 92 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 92 "layout.m"
    MR_Integer ll_backend__layout__CastX_18 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 92 "layout.m"
    MR_Integer ll_backend__layout__CastY_19 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 92 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_18 == ll_backend__layout__CastY_19);
#line 92 "layout.m"
    if (ll_backend__layout__succeeded)
#line 12319 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 92 "layout.m"
    else
#line 92 "layout.m"
      {
#line 92 "layout.m"
        MR_Integer ll_backend__layout__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 92 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 92 "layout.m"
        MR_Integer ll_backend__layout__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 92 "layout.m"
        MR_Integer ll_backend__layout__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 92 "layout.m"
        MR_Integer ll_backend__layout__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 4)));
#line 92 "layout.m"
        MR_Integer ll_backend__layout__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 92 "layout.m"
        MR_Word ll_backend__layout__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 92 "layout.m"
        MR_Integer ll_backend__layout__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 92 "layout.m"
        MR_Integer ll_backend__layout__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 3)));
#line 92 "layout.m"
        MR_Integer ll_backend__layout__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 4)));
#line 92 "layout.m"
        MR_Word ll_backend__layout__V_14_14;

#line 92 "layout.m"
        {
#line 92 "layout.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_14_14, ll_backend__layout__V_4_4, ll_backend__layout__V_9_9);
        }
#line 12353 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_14_14 == (MR_Integer) 0);
#line 92 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 92 "layout.m"
        if (ll_backend__layout__succeeded)
#line 92 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_14_14;
#line 92 "layout.m"
        else
#line 92 "layout.m"
          {
#line 92 "layout.m"
            MR_Word ll_backend__layout__V_15_15;

#line 92 "layout.m"
            {
#line 92 "layout.m"
              ll_backend__llds____Compare____rval_0_0(&ll_backend__layout__V_15_15, ll_backend__layout__V_5_5, ll_backend__layout__V_10_10);
            }
#line 12373 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_15_15 == (MR_Integer) 0);
#line 92 "layout.m"
            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 92 "layout.m"
            if (ll_backend__layout__succeeded)
#line 92 "layout.m"
              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_15_15;
#line 92 "layout.m"
            else
#line 92 "layout.m"
              {
#line 92 "layout.m"
                MR_Word ll_backend__layout__V_16_16;

#line 92 "layout.m"
                {
#line 92 "layout.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_16_16, ll_backend__layout__V_6_6, ll_backend__layout__V_11_11);
                }
#line 12393 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_16_16 == (MR_Integer) 0);
#line 92 "layout.m"
                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 92 "layout.m"
                if (ll_backend__layout__succeeded)
#line 92 "layout.m"
                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_16_16;
#line 92 "layout.m"
                else
#line 92 "layout.m"
                  {
#line 92 "layout.m"
                    MR_Word ll_backend__layout__V_17_17;

#line 92 "layout.m"
                    {
#line 92 "layout.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_17_17, ll_backend__layout__V_7_7, ll_backend__layout__V_12_12);
                    }
#line 12413 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = (ll_backend__layout__V_17_17 == (MR_Integer) 0);
#line 92 "layout.m"
                    ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 92 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 92 "layout.m"
                      *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_17_17;
#line 92 "layout.m"
                    else
#line 92 "layout.m"
                      {
#line 92 "layout.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_8_8, ll_backend__layout__V_13_13);
#line 92 "layout.m"
                        return;
                      }
#line 92 "layout.m"
                  }
#line 92 "layout.m"
              }
#line 92 "layout.m"
          }
#line 92 "layout.m"
      }
#line 92 "layout.m"
  }
#line 92 "layout.m"
}

#line 92 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____label_short_var_info_0_0(
#line 92 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 92 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 92 "layout.m"
{
#line 92 "layout.m"
  {
#line 92 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 92 "layout.m"
    MR_Integer ll_backend__layout__CastX_13 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 92 "layout.m"
    MR_Integer ll_backend__layout__CastY_14 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 92 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_13 == ll_backend__layout__CastY_14);
#line 92 "layout.m"
    if (ll_backend__layout__succeeded)
#line 92 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 92 "layout.m"
    else
#line 92 "layout.m"
      {
#line 92 "layout.m"
        MR_Integer ll_backend__layout__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 92 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 92 "layout.m"
        MR_Integer ll_backend__layout__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 92 "layout.m"
        MR_Integer ll_backend__layout__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 3)));
#line 92 "layout.m"
        MR_Integer ll_backend__layout__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 4)));
#line 92 "layout.m"
        MR_Integer ll_backend__layout__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 92 "layout.m"
        MR_Word ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 92 "layout.m"
        MR_Integer ll_backend__layout__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 92 "layout.m"
        MR_Integer ll_backend__layout__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 92 "layout.m"
        MR_Integer ll_backend__layout__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 4)));

#line 12492 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_3_3 == ll_backend__layout__V_8_8);
#line 92 "layout.m"
        if (ll_backend__layout__succeeded)
#line 92 "layout.m"
          {
#line 12498 "ll_backend.layout.c"
            {
#line 12500 "ll_backend.layout.c"
              ll_backend__layout__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__layout__V_4_4, ll_backend__layout__V_9_9);
            }
#line 92 "layout.m"
            if (ll_backend__layout__succeeded)
#line 92 "layout.m"
              {
#line 12507 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_5_5 == ll_backend__layout__V_10_10);
#line 92 "layout.m"
                if (ll_backend__layout__succeeded)
#line 92 "layout.m"
                  {
#line 12513 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = (ll_backend__layout__V_6_6 == ll_backend__layout__V_11_11);
#line 92 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 12517 "ll_backend.layout.c"
                      ll_backend__layout__succeeded = (ll_backend__layout__V_7_7 == ll_backend__layout__V_12_12);
#line 92 "layout.m"
                  }
#line 92 "layout.m"
              }
#line 92 "layout.m"
          }
#line 92 "layout.m"
      }
#line 92 "layout.m"
    return ll_backend__layout__succeeded;
#line 92 "layout.m"
  }
#line 92 "layout.m"
}

#line 102 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____label_long_var_info_0_0(
#line 102 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 102 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 102 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 102 "layout.m"
{
#line 102 "layout.m"
  {
#line 102 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 102 "layout.m"
    MR_Integer ll_backend__layout__CastX_21 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 102 "layout.m"
    MR_Integer ll_backend__layout__CastY_22 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 102 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_21 == ll_backend__layout__CastY_22);
#line 102 "layout.m"
    if (ll_backend__layout__succeeded)
#line 12558 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 102 "layout.m"
    else
#line 102 "layout.m"
      {
#line 102 "layout.m"
        MR_Integer ll_backend__layout__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 102 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 102 "layout.m"
        MR_Integer ll_backend__layout__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 102 "layout.m"
        MR_Integer ll_backend__layout__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 102 "layout.m"
        MR_Integer ll_backend__layout__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 4)));
#line 102 "layout.m"
        MR_Integer ll_backend__layout__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 5)));
#line 102 "layout.m"
        MR_Integer ll_backend__layout__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 102 "layout.m"
        MR_Word ll_backend__layout__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 102 "layout.m"
        MR_Integer ll_backend__layout__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 102 "layout.m"
        MR_Integer ll_backend__layout__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 3)));
#line 102 "layout.m"
        MR_Integer ll_backend__layout__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 4)));
#line 102 "layout.m"
        MR_Integer ll_backend__layout__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 5)));
#line 102 "layout.m"
        MR_Word ll_backend__layout__V_16_16;

#line 102 "layout.m"
        {
#line 102 "layout.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_16_16, ll_backend__layout__V_4_4, ll_backend__layout__V_10_10);
        }
#line 12596 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_16_16 == (MR_Integer) 0);
#line 102 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 102 "layout.m"
        if (ll_backend__layout__succeeded)
#line 102 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_16_16;
#line 102 "layout.m"
        else
#line 102 "layout.m"
          {
#line 102 "layout.m"
            MR_Word ll_backend__layout__V_17_17;

#line 102 "layout.m"
            {
#line 102 "layout.m"
              ll_backend__llds____Compare____rval_0_0(&ll_backend__layout__V_17_17, ll_backend__layout__V_5_5, ll_backend__layout__V_11_11);
            }
#line 12616 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_17_17 == (MR_Integer) 0);
#line 102 "layout.m"
            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 102 "layout.m"
            if (ll_backend__layout__succeeded)
#line 102 "layout.m"
              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_17_17;
#line 102 "layout.m"
            else
#line 102 "layout.m"
              {
#line 102 "layout.m"
                MR_Word ll_backend__layout__V_18_18;

#line 102 "layout.m"
                {
#line 102 "layout.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_18_18, ll_backend__layout__V_6_6, ll_backend__layout__V_12_12);
                }
#line 12636 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_18_18 == (MR_Integer) 0);
#line 102 "layout.m"
                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 102 "layout.m"
                if (ll_backend__layout__succeeded)
#line 102 "layout.m"
                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_18_18;
#line 102 "layout.m"
                else
#line 102 "layout.m"
                  {
#line 102 "layout.m"
                    MR_Word ll_backend__layout__V_19_19;

#line 102 "layout.m"
                    {
#line 102 "layout.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_19_19, ll_backend__layout__V_7_7, ll_backend__layout__V_13_13);
                    }
#line 12656 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = (ll_backend__layout__V_19_19 == (MR_Integer) 0);
#line 102 "layout.m"
                    ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 102 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 102 "layout.m"
                      *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_19_19;
#line 102 "layout.m"
                    else
#line 102 "layout.m"
                      {
#line 102 "layout.m"
                        MR_Word ll_backend__layout__V_20_20;

#line 102 "layout.m"
                        {
#line 102 "layout.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_20_20, ll_backend__layout__V_8_8, ll_backend__layout__V_14_14);
                        }
#line 12676 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = (ll_backend__layout__V_20_20 == (MR_Integer) 0);
#line 102 "layout.m"
                        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 102 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 102 "layout.m"
                          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_20_20;
#line 102 "layout.m"
                        else
#line 102 "layout.m"
                          {
#line 102 "layout.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_9_9, ll_backend__layout__V_15_15);
#line 102 "layout.m"
                            return;
                          }
#line 102 "layout.m"
                      }
#line 102 "layout.m"
                  }
#line 102 "layout.m"
              }
#line 102 "layout.m"
          }
#line 102 "layout.m"
      }
#line 102 "layout.m"
  }
#line 102 "layout.m"
}

#line 102 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____label_long_var_info_0_0(
#line 102 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 102 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 102 "layout.m"
{
#line 102 "layout.m"
  {
#line 102 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 102 "layout.m"
    MR_Integer ll_backend__layout__CastX_15 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 102 "layout.m"
    MR_Integer ll_backend__layout__CastY_16 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 102 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_15 == ll_backend__layout__CastY_16);
#line 102 "layout.m"
    if (ll_backend__layout__succeeded)
#line 102 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 102 "layout.m"
    else
#line 102 "layout.m"
      {
#line 102 "layout.m"
        MR_Integer ll_backend__layout__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 102 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 102 "layout.m"
        MR_Integer ll_backend__layout__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 102 "layout.m"
        MR_Integer ll_backend__layout__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 3)));
#line 102 "layout.m"
        MR_Integer ll_backend__layout__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 4)));
#line 102 "layout.m"
        MR_Integer ll_backend__layout__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 5)));
#line 102 "layout.m"
        MR_Integer ll_backend__layout__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 102 "layout.m"
        MR_Word ll_backend__layout__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 102 "layout.m"
        MR_Integer ll_backend__layout__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 102 "layout.m"
        MR_Integer ll_backend__layout__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 102 "layout.m"
        MR_Integer ll_backend__layout__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 4)));
#line 102 "layout.m"
        MR_Integer ll_backend__layout__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 5)));

#line 12761 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_3_3 == ll_backend__layout__V_9_9);
#line 102 "layout.m"
        if (ll_backend__layout__succeeded)
#line 102 "layout.m"
          {
#line 12767 "ll_backend.layout.c"
            {
#line 12769 "ll_backend.layout.c"
              ll_backend__layout__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__layout__V_4_4, ll_backend__layout__V_10_10);
            }
#line 102 "layout.m"
            if (ll_backend__layout__succeeded)
#line 102 "layout.m"
              {
#line 12776 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_5_5 == ll_backend__layout__V_11_11);
#line 102 "layout.m"
                if (ll_backend__layout__succeeded)
#line 102 "layout.m"
                  {
#line 12782 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = (ll_backend__layout__V_6_6 == ll_backend__layout__V_12_12);
#line 102 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 102 "layout.m"
                      {
#line 12788 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = (ll_backend__layout__V_7_7 == ll_backend__layout__V_13_13);
#line 102 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 12792 "ll_backend.layout.c"
                          ll_backend__layout__succeeded = (ll_backend__layout__V_8_8 == ll_backend__layout__V_14_14);
#line 102 "layout.m"
                      }
#line 102 "layout.m"
                  }
#line 102 "layout.m"
              }
#line 102 "layout.m"
          }
#line 102 "layout.m"
      }
#line 102 "layout.m"
    return ll_backend__layout__succeeded;
#line 102 "layout.m"
  }
#line 102 "layout.m"
}

#line 119 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____label_layout_short_vars_0_0(
#line 119 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 119 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 119 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 119 "layout.m"
{
#line 119 "layout.m"
  {
#line 119 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 119 "layout.m"
    MR_Integer ll_backend__layout__CastX_9 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 119 "layout.m"
    MR_Integer ll_backend__layout__CastY_10 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 119 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_9 == ll_backend__layout__CastY_10);
#line 119 "layout.m"
    if (ll_backend__layout__succeeded)
#line 12835 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 119 "layout.m"
    else
#line 119 "layout.m"
      {
#line 119 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 119 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 119 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 119 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 119 "layout.m"
        MR_Word ll_backend__layout__V_8_8;

#line 119 "layout.m"
        {
#line 119 "layout.m"
          ll_backend__layout____Compare____basic_label_layout_0_0(&ll_backend__layout__V_8_8, ll_backend__layout__V_4_4, ll_backend__layout__V_6_6);
        }
#line 12857 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_8_8 == (MR_Integer) 0);
#line 119 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 119 "layout.m"
        if (ll_backend__layout__succeeded)
#line 119 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_8_8;
#line 119 "layout.m"
        else
#line 119 "layout.m"
          {
#line 119 "layout.m"
            ll_backend__layout____Compare____label_short_var_info_0_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_5_5, ll_backend__layout__V_7_7);
#line 119 "layout.m"
            return;
          }
#line 119 "layout.m"
      }
#line 119 "layout.m"
  }
#line 119 "layout.m"
}

#line 119 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____label_layout_short_vars_0_0(
#line 119 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 119 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 119 "layout.m"
{
#line 119 "layout.m"
  {
#line 119 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 119 "layout.m"
    MR_Integer ll_backend__layout__CastX_7 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 119 "layout.m"
    MR_Integer ll_backend__layout__CastY_8 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 119 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_7 == ll_backend__layout__CastY_8);
#line 119 "layout.m"
    if (ll_backend__layout__succeeded)
#line 119 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 119 "layout.m"
    else
#line 119 "layout.m"
      {
#line 119 "layout.m"
        MR_Word ll_backend__layout__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 119 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 119 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 119 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));

#line 12918 "ll_backend.layout.c"
        {
#line 12920 "ll_backend.layout.c"
          ll_backend__layout__succeeded = ll_backend__layout____Unify____basic_label_layout_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_5_5);
        }
#line 119 "layout.m"
        if (ll_backend__layout__succeeded)
#line 12925 "ll_backend.layout.c"
          {
#line 12927 "ll_backend.layout.c"
            return ll_backend__layout__succeeded = ll_backend__layout____Unify____label_short_var_info_0_0(ll_backend__layout__V_4_4, ll_backend__layout__V_6_6);
          }
#line 119 "layout.m"
      }
#line 119 "layout.m"
    return ll_backend__layout__succeeded;
#line 119 "layout.m"
  }
#line 119 "layout.m"
}

#line 113 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____label_layout_no_vars_0_0(
#line 113 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 113 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 113 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 113 "layout.m"
{
#line 113 "layout.m"
  {
#line 113 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 113 "layout.m"
    MR_Integer ll_backend__layout__CastX_6 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 113 "layout.m"
    MR_Integer ll_backend__layout__CastY_7 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 113 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_6 == ll_backend__layout__CastY_7);
#line 113 "layout.m"
    if (ll_backend__layout__succeeded)
#line 12963 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 113 "layout.m"
    else
#line 113 "layout.m"
      {
#line 113 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = (MR_Word) ll_backend__layout__HeadVar__2_2;
#line 113 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = (MR_Word) ll_backend__layout__HeadVar__3_3;

#line 113 "layout.m"
        {
#line 113 "layout.m"
          ll_backend__layout____Compare____basic_label_layout_0_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_4_4, ll_backend__layout__V_5_5);
#line 113 "layout.m"
          return;
        }
#line 113 "layout.m"
      }
#line 113 "layout.m"
  }
#line 113 "layout.m"
}

#line 113 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____label_layout_no_vars_0_0(
#line 113 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 113 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 113 "layout.m"
{
#line 113 "layout.m"
  {
#line 113 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 113 "layout.m"
    MR_Integer ll_backend__layout__CastX_5 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 113 "layout.m"
    MR_Integer ll_backend__layout__CastY_6 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 113 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_5 == ll_backend__layout__CastY_6);
#line 113 "layout.m"
    if (ll_backend__layout__succeeded)
#line 113 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 113 "layout.m"
    else
#line 113 "layout.m"
      {
#line 113 "layout.m"
        MR_Word ll_backend__layout__V_3_3 = (MR_Word) ll_backend__layout__HeadVar__1_1;
#line 113 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = (MR_Word) ll_backend__layout__HeadVar__2_2;

#line 13021 "ll_backend.layout.c"
        {
#line 13023 "ll_backend.layout.c"
          return ll_backend__layout__succeeded = ll_backend__layout____Unify____basic_label_layout_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_4_4);
        }
#line 113 "layout.m"
      }
#line 113 "layout.m"
    return ll_backend__layout__succeeded;
#line 113 "layout.m"
  }
#line 113 "layout.m"
}

#line 126 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____label_layout_long_vars_0_0(
#line 126 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 126 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 126 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 126 "layout.m"
{
#line 126 "layout.m"
  {
#line 126 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 126 "layout.m"
    MR_Integer ll_backend__layout__CastX_9 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 126 "layout.m"
    MR_Integer ll_backend__layout__CastY_10 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 126 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_9 == ll_backend__layout__CastY_10);
#line 126 "layout.m"
    if (ll_backend__layout__succeeded)
#line 13059 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 126 "layout.m"
    else
#line 126 "layout.m"
      {
#line 126 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 126 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 126 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 126 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 126 "layout.m"
        MR_Word ll_backend__layout__V_8_8;

#line 126 "layout.m"
        {
#line 126 "layout.m"
          ll_backend__layout____Compare____basic_label_layout_0_0(&ll_backend__layout__V_8_8, ll_backend__layout__V_4_4, ll_backend__layout__V_6_6);
        }
#line 13081 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_8_8 == (MR_Integer) 0);
#line 126 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 126 "layout.m"
        if (ll_backend__layout__succeeded)
#line 126 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_8_8;
#line 126 "layout.m"
        else
#line 126 "layout.m"
          {
#line 126 "layout.m"
            ll_backend__layout____Compare____label_long_var_info_0_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_5_5, ll_backend__layout__V_7_7);
#line 126 "layout.m"
            return;
          }
#line 126 "layout.m"
      }
#line 126 "layout.m"
  }
#line 126 "layout.m"
}

#line 126 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____label_layout_long_vars_0_0(
#line 126 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 126 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 126 "layout.m"
{
#line 126 "layout.m"
  {
#line 126 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 126 "layout.m"
    MR_Integer ll_backend__layout__CastX_7 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 126 "layout.m"
    MR_Integer ll_backend__layout__CastY_8 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 126 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_7 == ll_backend__layout__CastY_8);
#line 126 "layout.m"
    if (ll_backend__layout__succeeded)
#line 126 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 126 "layout.m"
    else
#line 126 "layout.m"
      {
#line 126 "layout.m"
        MR_Word ll_backend__layout__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 126 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 126 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 126 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));

#line 13142 "ll_backend.layout.c"
        {
#line 13144 "ll_backend.layout.c"
          ll_backend__layout__succeeded = ll_backend__layout____Unify____basic_label_layout_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_5_5);
        }
#line 126 "layout.m"
        if (ll_backend__layout__succeeded)
#line 13149 "ll_backend.layout.c"
          {
#line 13151 "ll_backend.layout.c"
            return ll_backend__layout__succeeded = ll_backend__layout____Unify____label_long_var_info_0_0(ll_backend__layout__V_4_4, ll_backend__layout__V_6_6);
          }
#line 126 "layout.m"
      }
#line 126 "layout.m"
    return ll_backend__layout__succeeded;
#line 126 "layout.m"
  }
#line 126 "layout.m"
}

#line 271 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____file_layout_data_0_0(
#line 271 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 271 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 271 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 271 "layout.m"
{
#line 271 "layout.m"
  {
#line 271 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 271 "layout.m"
    MR_Integer ll_backend__layout__CastX_9 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 271 "layout.m"
    MR_Integer ll_backend__layout__CastY_10 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 271 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_9 == ll_backend__layout__CastY_10);
#line 271 "layout.m"
    if (ll_backend__layout__succeeded)
#line 13187 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 271 "layout.m"
    else
#line 271 "layout.m"
      {
#line 271 "layout.m"
        MR_String ll_backend__layout__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 271 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 271 "layout.m"
        MR_String ll_backend__layout__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 271 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 271 "layout.m"
        MR_Word ll_backend__layout__V_8_8;

#line 271 "layout.m"
        {
#line 271 "layout.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__layout__V_8_8, ll_backend__layout__V_4_4, ll_backend__layout__V_6_6);
        }
#line 13209 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_8_8 == (MR_Integer) 0);
#line 271 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 271 "layout.m"
        if (ll_backend__layout__succeeded)
#line 271 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_8_8;
#line 271 "layout.m"
        else
#line 271 "layout.m"
          {
#line 271 "layout.m"
            {
#line 271 "layout.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[4], ll_backend__layout__HeadVar__1_1, ((MR_Box) (ll_backend__layout__V_5_5)), ((MR_Box) (ll_backend__layout__V_7_7)));
#line 271 "layout.m"
              return;
            }
#line 271 "layout.m"
          }
#line 271 "layout.m"
      }
#line 271 "layout.m"
  }
#line 271 "layout.m"
}

#line 271 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____file_layout_data_0_0(
#line 271 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 271 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 271 "layout.m"
{
#line 271 "layout.m"
  {
#line 271 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 271 "layout.m"
    MR_Integer ll_backend__layout__CastX_7 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 271 "layout.m"
    MR_Integer ll_backend__layout__CastY_8 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 271 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_7 == ll_backend__layout__CastY_8);
#line 271 "layout.m"
    if (ll_backend__layout__succeeded)
#line 271 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 271 "layout.m"
    else
#line 271 "layout.m"
      {
#line 271 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_9_9;
#line 271 "layout.m"
        MR_String ll_backend__layout__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 271 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 271 "layout.m"
        MR_String ll_backend__layout__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 271 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));

#line 13276 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (strcmp(ll_backend__layout__V_3_3, ll_backend__layout__V_5_5) == 0);
#line 271 "layout.m"
        if (ll_backend__layout__succeeded)
#line 271 "layout.m"
          {
#line 13282 "ll_backend.layout.c"
            ll_backend__layout__TypeInfo_9_9 = (MR_Word) &ll_backend__layout_scalar_common_1[4];
#line 13284 "ll_backend.layout.c"
            {
#line 13286 "ll_backend.layout.c"
              return ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_9_9, ((MR_Box) (ll_backend__layout__V_4_4)), ((MR_Box) (ll_backend__layout__V_6_6)));
            }
#line 271 "layout.m"
          }
#line 271 "layout.m"
      }
#line 271 "layout.m"
    return ll_backend__layout__succeeded;
#line 271 "layout.m"
  }
#line 271 "layout.m"
}

#line 262 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____event_set_layout_data_0_0(
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
    MR_Integer ll_backend__layout__CastX_9 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 262 "layout.m"
    MR_Integer ll_backend__layout__CastY_10 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 262 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_9 == ll_backend__layout__CastY_10);
#line 262 "layout.m"
    if (ll_backend__layout__succeeded)
#line 13324 "ll_backend.layout.c"
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
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 262 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 262 "layout.m"
        MR_Word ll_backend__layout__V_8_8;

#line 262 "layout.m"
        {
#line 262 "layout.m"
          parse_tree__prog_data____Compare____event_set_data_0_0(&ll_backend__layout__V_8_8, ll_backend__layout__V_4_4, ll_backend__layout__V_6_6);
        }
#line 13346 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_8_8 == (MR_Integer) 0);
#line 262 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 262 "layout.m"
        if (ll_backend__layout__succeeded)
#line 262 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_8_8;
#line 262 "layout.m"
        else
#line 262 "layout.m"
          {
#line 262 "layout.m"
            {
#line 262 "layout.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_2[0], ll_backend__layout__HeadVar__1_1, ((MR_Box) (ll_backend__layout__V_5_5)), ((MR_Box) (ll_backend__layout__V_7_7)));
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
ll_backend__layout____Unify____event_set_layout_data_0_0(
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
    MR_Integer ll_backend__layout__CastX_7 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 262 "layout.m"
    MR_Integer ll_backend__layout__CastY_8 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 262 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_7 == ll_backend__layout__CastY_8);
#line 262 "layout.m"
    if (ll_backend__layout__succeeded)
#line 262 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 262 "layout.m"
    else
#line 262 "layout.m"
      {
#line 262 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_10_10;
#line 262 "layout.m"
        MR_Word ll_backend__layout__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 262 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 262 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 262 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));

#line 13413 "ll_backend.layout.c"
        {
#line 13415 "ll_backend.layout.c"
          ll_backend__layout__succeeded = parse_tree__prog_data____Unify____event_set_data_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_5_5);
        }
#line 262 "layout.m"
        if (ll_backend__layout__succeeded)
#line 262 "layout.m"
          {
#line 13422 "ll_backend.layout.c"
            ll_backend__layout__TypeInfo_10_10 = (MR_Word) &ll_backend__layout_scalar_common_2[0];
#line 13424 "ll_backend.layout.c"
            {
#line 13426 "ll_backend.layout.c"
              return ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_10_10, ((MR_Box) (ll_backend__layout__V_4_4)), ((MR_Box) (ll_backend__layout__V_6_6)));
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

#line 159 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____deep_excp_slots_0_0(
#line 159 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 159 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 159 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 159 "layout.m"
{
#line 159 "layout.m"
  {
#line 159 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 159 "layout.m"
    MR_Integer ll_backend__layout__CastX_12 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 159 "layout.m"
    MR_Integer ll_backend__layout__CastY_13 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 159 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_12 == ll_backend__layout__CastY_13);
#line 159 "layout.m"
    if (ll_backend__layout__succeeded)
#line 13464 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 159 "layout.m"
    else
#line 159 "layout.m"
      {
#line 159 "layout.m"
        MR_Integer ll_backend__layout__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 159 "layout.m"
        MR_Integer ll_backend__layout__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 159 "layout.m"
        MR_Integer ll_backend__layout__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 159 "layout.m"
        MR_Integer ll_backend__layout__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 159 "layout.m"
        MR_Integer ll_backend__layout__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 159 "layout.m"
        MR_Integer ll_backend__layout__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 159 "layout.m"
        MR_Word ll_backend__layout__V_10_10;

#line 159 "layout.m"
        {
#line 159 "layout.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_10_10, ll_backend__layout__V_4_4, ll_backend__layout__V_7_7);
        }
#line 13490 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_10_10 == (MR_Integer) 0);
#line 159 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 159 "layout.m"
        if (ll_backend__layout__succeeded)
#line 159 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_10_10;
#line 159 "layout.m"
        else
#line 159 "layout.m"
          {
#line 159 "layout.m"
            MR_Word ll_backend__layout__V_11_11;

#line 159 "layout.m"
            {
#line 159 "layout.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_11_11, ll_backend__layout__V_5_5, ll_backend__layout__V_8_8);
            }
#line 13510 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_11_11 == (MR_Integer) 0);
#line 159 "layout.m"
            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 159 "layout.m"
            if (ll_backend__layout__succeeded)
#line 159 "layout.m"
              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_11_11;
#line 159 "layout.m"
            else
#line 159 "layout.m"
              {
#line 159 "layout.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_6_6, ll_backend__layout__V_9_9);
#line 159 "layout.m"
                return;
              }
#line 159 "layout.m"
          }
#line 159 "layout.m"
      }
#line 159 "layout.m"
  }
#line 159 "layout.m"
}

#line 159 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____deep_excp_slots_0_0(
#line 159 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 159 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 159 "layout.m"
{
#line 159 "layout.m"
  {
#line 159 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 159 "layout.m"
    MR_Integer ll_backend__layout__CastX_9 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 159 "layout.m"
    MR_Integer ll_backend__layout__CastY_10 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 159 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_9 == ll_backend__layout__CastY_10);
#line 159 "layout.m"
    if (ll_backend__layout__succeeded)
#line 159 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 159 "layout.m"
    else
#line 159 "layout.m"
      {
#line 159 "layout.m"
        MR_Integer ll_backend__layout__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 159 "layout.m"
        MR_Integer ll_backend__layout__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 159 "layout.m"
        MR_Integer ll_backend__layout__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 159 "layout.m"
        MR_Integer ll_backend__layout__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 159 "layout.m"
        MR_Integer ll_backend__layout__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 159 "layout.m"
        MR_Integer ll_backend__layout__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));

#line 13577 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_3_3 == ll_backend__layout__V_6_6);
#line 159 "layout.m"
        if (ll_backend__layout__succeeded)
#line 159 "layout.m"
          {
#line 13583 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 == ll_backend__layout__V_7_7);
#line 159 "layout.m"
            if (ll_backend__layout__succeeded)
#line 13587 "ll_backend.layout.c"
              ll_backend__layout__succeeded = (ll_backend__layout__V_5_5 == ll_backend__layout__V_8_8);
#line 159 "layout.m"
          }
#line 159 "layout.m"
      }
#line 159 "layout.m"
    return ll_backend__layout__succeeded;
#line 159 "layout.m"
  }
#line 159 "layout.m"
}

#line 188 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____data_or_slot_id_0_0(
#line 188 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 188 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 188 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 188 "layout.m"
{
#line 188 "layout.m"
  {
#line 188 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 188 "layout.m"
    MR_Integer ll_backend__layout__CastX_12 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 188 "layout.m"
    MR_Integer ll_backend__layout__CastY_13 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 188 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_12 == ll_backend__layout__CastY_13);
#line 188 "layout.m"
    if (ll_backend__layout__succeeded)
#line 13624 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 188 "layout.m"
    else
#line 188 "layout.m"
      if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 188 "layout.m"
        {
#line 188 "layout.m"
          MR_Word ll_backend__layout__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));

#line 188 "layout.m"
          if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 188 "layout.m"
            {
#line 188 "layout.m"
              MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));

#line 188 "layout.m"
              {
#line 188 "layout.m"
                ll_backend__llds____Compare____data_id_0_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_16_16, ll_backend__layout__V_5_5);
#line 188 "layout.m"
                return;
              }
#line 188 "layout.m"
            }
#line 188 "layout.m"
          else
#line 13653 "ll_backend.layout.c"
            *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 1;
#line 188 "layout.m"
        }
#line 188 "layout.m"
      else
#line 188 "layout.m"
        {
#line 188 "layout.m"
          MR_Word ll_backend__layout__V_17_17 = (MR_Word) MR_body(((MR_Word) ll_backend__layout__HeadVar__2_2), (MR_Integer) 0);

#line 188 "layout.m"
          if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 13666 "ll_backend.layout.c"
            *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 2;
#line 188 "layout.m"
          else
#line 188 "layout.m"
            {
#line 188 "layout.m"
              MR_Word ll_backend__layout__V_11_11 = (MR_Word) MR_body(((MR_Word) ll_backend__layout__HeadVar__3_3), (MR_Integer) 0);

#line 188 "layout.m"
              {
#line 188 "layout.m"
                ll_backend__layout____Compare____layout_slot_name_0_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_17_17, ll_backend__layout__V_11_11);
#line 188 "layout.m"
                return;
              }
#line 188 "layout.m"
            }
#line 188 "layout.m"
        }
#line 188 "layout.m"
  }
#line 188 "layout.m"
}

#line 188 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____data_or_slot_id_0_0(
#line 188 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 188 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 188 "layout.m"
{
#line 188 "layout.m"
  {
#line 188 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 188 "layout.m"
    MR_Integer ll_backend__layout__CastX_7 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 188 "layout.m"
    MR_Integer ll_backend__layout__CastY_8 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 188 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_7 == ll_backend__layout__CastY_8);
#line 188 "layout.m"
    if (ll_backend__layout__succeeded)
#line 188 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 188 "layout.m"
    else
#line 188 "layout.m"
      if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 188 "layout.m"
        {
#line 188 "layout.m"
          MR_Word ll_backend__layout__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 188 "layout.m"
          MR_Word ll_backend__layout__V_4_4;

#line 188 "layout.m"
          ll_backend__layout__succeeded = ((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 188 "layout.m"
          if (ll_backend__layout__succeeded)
#line 188 "layout.m"
            {
#line 188 "layout.m"
              ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 13734 "ll_backend.layout.c"
              {
#line 13736 "ll_backend.layout.c"
                return ll_backend__layout__succeeded = ll_backend__llds____Unify____data_id_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_4_4);
              }
#line 188 "layout.m"
            }
#line 188 "layout.m"
        }
#line 188 "layout.m"
      else
#line 188 "layout.m"
        {
#line 188 "layout.m"
          MR_Word ll_backend__layout__V_5_5 = (MR_Word) MR_body(((MR_Word) ll_backend__layout__HeadVar__1_1), (MR_Integer) 0);
#line 188 "layout.m"
          MR_Word ll_backend__layout__V_6_6;

#line 188 "layout.m"
          ll_backend__layout__succeeded = ((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 188 "layout.m"
          if (ll_backend__layout__succeeded)
#line 188 "layout.m"
            {
#line 188 "layout.m"
              ll_backend__layout__V_6_6 = (MR_Word) MR_body(((MR_Word) ll_backend__layout__HeadVar__2_2), (MR_Integer) 0);
#line 13760 "ll_backend.layout.c"
              {
#line 13762 "ll_backend.layout.c"
                return ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_slot_name_0_0(ll_backend__layout__V_5_5, ll_backend__layout__V_6_6);
              }
#line 188 "layout.m"
            }
#line 188 "layout.m"
        }
#line 188 "layout.m"
    return ll_backend__layout__succeeded;
#line 188 "layout.m"
  }
#line 188 "layout.m"
}

#line 55 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____closure_proc_id_data_0_0(
#line 55 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 55 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 55 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 55 "layout.m"
{
#line 55 "layout.m"
  {
#line 55 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 55 "layout.m"
    MR_Integer ll_backend__layout__CastX_27 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 55 "layout.m"
    MR_Integer ll_backend__layout__CastY_28 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 55 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_27 == ll_backend__layout__CastY_28);
#line 55 "layout.m"
    if (ll_backend__layout__succeeded)
#line 13800 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 55 "layout.m"
    else
#line 55 "layout.m"
      {
#line 55 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 55 "layout.m"
        MR_Integer ll_backend__layout__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 55 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 55 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 55 "layout.m"
        MR_String ll_backend__layout__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 4)));
#line 55 "layout.m"
        MR_Integer ll_backend__layout__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 5)));
#line 55 "layout.m"
        MR_Word ll_backend__layout__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 6)));
#line 55 "layout.m"
        MR_String ll_backend__layout__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 7)));
#line 55 "layout.m"
        MR_Word ll_backend__layout__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 55 "layout.m"
        MR_Integer ll_backend__layout__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 55 "layout.m"
        MR_Word ll_backend__layout__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 55 "layout.m"
        MR_Word ll_backend__layout__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 3)));
#line 55 "layout.m"
        MR_String ll_backend__layout__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 4)));
#line 55 "layout.m"
        MR_Integer ll_backend__layout__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 5)));
#line 55 "layout.m"
        MR_Word ll_backend__layout__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 6)));
#line 55 "layout.m"
        MR_String ll_backend__layout__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 7)));
#line 55 "layout.m"
        MR_Word ll_backend__layout__V_20_20;

#line 55 "layout.m"
        {
#line 55 "layout.m"
          mdbcomp__prim_data____Compare____proc_label_0_0(&ll_backend__layout__V_20_20, ll_backend__layout__V_4_4, ll_backend__layout__V_12_12);
        }
#line 13846 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_20_20 == (MR_Integer) 0);
#line 55 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 55 "layout.m"
        if (ll_backend__layout__succeeded)
#line 55 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_20_20;
#line 55 "layout.m"
        else
#line 55 "layout.m"
          {
#line 55 "layout.m"
            MR_Word ll_backend__layout__V_21_21;

#line 55 "layout.m"
            {
#line 55 "layout.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_21_21, ll_backend__layout__V_5_5, ll_backend__layout__V_13_13);
            }
#line 13866 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_21_21 == (MR_Integer) 0);
#line 55 "layout.m"
            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 55 "layout.m"
            if (ll_backend__layout__succeeded)
#line 55 "layout.m"
              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_21_21;
#line 55 "layout.m"
            else
#line 55 "layout.m"
              {
#line 55 "layout.m"
                MR_Word ll_backend__layout__V_22_22;

#line 55 "layout.m"
                {
#line 55 "layout.m"
                  mdbcomp__prim_data____Compare____proc_label_0_0(&ll_backend__layout__V_22_22, ll_backend__layout__V_6_6, ll_backend__layout__V_14_14);
                }
#line 13886 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_22_22 == (MR_Integer) 0);
#line 55 "layout.m"
                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 55 "layout.m"
                if (ll_backend__layout__succeeded)
#line 55 "layout.m"
                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_22_22;
#line 55 "layout.m"
                else
#line 55 "layout.m"
                  {
#line 55 "layout.m"
                    MR_Word ll_backend__layout__V_23_23;

#line 55 "layout.m"
                    {
#line 55 "layout.m"
                      mdbcomp__prim_data____Compare____sym_name_0_0(&ll_backend__layout__V_23_23, ll_backend__layout__V_7_7, ll_backend__layout__V_15_15);
                    }
#line 13906 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = (ll_backend__layout__V_23_23 == (MR_Integer) 0);
#line 55 "layout.m"
                    ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 55 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 55 "layout.m"
                      *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_23_23;
#line 55 "layout.m"
                    else
#line 55 "layout.m"
                      {
#line 55 "layout.m"
                        MR_Word ll_backend__layout__V_24_24;

#line 55 "layout.m"
                        {
#line 55 "layout.m"
                          mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__layout__V_24_24, ll_backend__layout__V_8_8, ll_backend__layout__V_16_16);
                        }
#line 13926 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = (ll_backend__layout__V_24_24 == (MR_Integer) 0);
#line 55 "layout.m"
                        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 55 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 55 "layout.m"
                          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_24_24;
#line 55 "layout.m"
                        else
#line 55 "layout.m"
                          {
#line 55 "layout.m"
                            MR_Word ll_backend__layout__V_25_25;

#line 55 "layout.m"
                            {
#line 55 "layout.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_25_25, ll_backend__layout__V_9_9, ll_backend__layout__V_17_17);
                            }
#line 13946 "ll_backend.layout.c"
                            ll_backend__layout__succeeded = (ll_backend__layout__V_25_25 == (MR_Integer) 0);
#line 55 "layout.m"
                            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 55 "layout.m"
                            if (ll_backend__layout__succeeded)
#line 55 "layout.m"
                              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_25_25;
#line 55 "layout.m"
                            else
#line 55 "layout.m"
                              {
#line 55 "layout.m"
                                MR_Word ll_backend__layout__V_26_26;

#line 55 "layout.m"
                                {
#line 55 "layout.m"
                                  hlds__hlds_pred____Compare____pred_origin_0_0(&ll_backend__layout__V_26_26, ll_backend__layout__V_10_10, ll_backend__layout__V_18_18);
                                }
#line 13966 "ll_backend.layout.c"
                                ll_backend__layout__succeeded = (ll_backend__layout__V_26_26 == (MR_Integer) 0);
#line 55 "layout.m"
                                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 55 "layout.m"
                                if (ll_backend__layout__succeeded)
#line 55 "layout.m"
                                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_26_26;
#line 55 "layout.m"
                                else
#line 55 "layout.m"
                                  {
#line 55 "layout.m"
                                    mercury__private_builtin__builtin_compare_string_3_p_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_11_11, ll_backend__layout__V_19_19);
#line 55 "layout.m"
                                    return;
                                  }
#line 55 "layout.m"
                              }
#line 55 "layout.m"
                          }
#line 55 "layout.m"
                      }
#line 55 "layout.m"
                  }
#line 55 "layout.m"
              }
#line 55 "layout.m"
          }
#line 55 "layout.m"
      }
#line 55 "layout.m"
  }
#line 55 "layout.m"
}

#line 55 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____closure_proc_id_data_0_0(
#line 55 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 55 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 55 "layout.m"
{
#line 55 "layout.m"
  {
#line 55 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 55 "layout.m"
    MR_Integer ll_backend__layout__CastX_19 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 55 "layout.m"
    MR_Integer ll_backend__layout__CastY_20 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 55 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_19 == ll_backend__layout__CastY_20);
#line 55 "layout.m"
    if (ll_backend__layout__succeeded)
#line 55 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 55 "layout.m"
    else
#line 55 "layout.m"
      {
#line 55 "layout.m"
        MR_Word ll_backend__layout__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 55 "layout.m"
        MR_Integer ll_backend__layout__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 55 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 55 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 3)));
#line 55 "layout.m"
        MR_String ll_backend__layout__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 4)));
#line 55 "layout.m"
        MR_Integer ll_backend__layout__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 5)));
#line 55 "layout.m"
        MR_Word ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 6)));
#line 55 "layout.m"
        MR_String ll_backend__layout__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 7)));
#line 55 "layout.m"
        MR_Word ll_backend__layout__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 55 "layout.m"
        MR_Integer ll_backend__layout__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 55 "layout.m"
        MR_Word ll_backend__layout__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 55 "layout.m"
        MR_Word ll_backend__layout__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 55 "layout.m"
        MR_String ll_backend__layout__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 4)));
#line 55 "layout.m"
        MR_Integer ll_backend__layout__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 5)));
#line 55 "layout.m"
        MR_Word ll_backend__layout__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 6)));
#line 55 "layout.m"
        MR_String ll_backend__layout__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 7)));

#line 14063 "ll_backend.layout.c"
        {
#line 14065 "ll_backend.layout.c"
          ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_11_11);
        }
#line 55 "layout.m"
        if (ll_backend__layout__succeeded)
#line 55 "layout.m"
          {
#line 14072 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 == ll_backend__layout__V_12_12);
#line 55 "layout.m"
            if (ll_backend__layout__succeeded)
#line 55 "layout.m"
              {
#line 14078 "ll_backend.layout.c"
                {
#line 14080 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__layout__V_5_5, ll_backend__layout__V_13_13);
                }
#line 55 "layout.m"
                if (ll_backend__layout__succeeded)
#line 55 "layout.m"
                  {
#line 14087 "ll_backend.layout.c"
                    {
#line 14089 "ll_backend.layout.c"
                      ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__layout__V_6_6, ll_backend__layout__V_14_14);
                    }
#line 55 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 55 "layout.m"
                      {
#line 14096 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = (strcmp(ll_backend__layout__V_7_7, ll_backend__layout__V_15_15) == 0);
#line 55 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 55 "layout.m"
                          {
#line 14102 "ll_backend.layout.c"
                            ll_backend__layout__succeeded = (ll_backend__layout__V_8_8 == ll_backend__layout__V_16_16);
#line 55 "layout.m"
                            if (ll_backend__layout__succeeded)
#line 55 "layout.m"
                              {
#line 14108 "ll_backend.layout.c"
                                {
#line 14110 "ll_backend.layout.c"
                                  ll_backend__layout__succeeded = hlds__hlds_pred____Unify____pred_origin_0_0(ll_backend__layout__V_9_9, ll_backend__layout__V_17_17);
                                }
#line 55 "layout.m"
                                if (ll_backend__layout__succeeded)
#line 14115 "ll_backend.layout.c"
                                  ll_backend__layout__succeeded = (strcmp(ll_backend__layout__V_10_10, ll_backend__layout__V_18_18) == 0);
#line 55 "layout.m"
                              }
#line 55 "layout.m"
                          }
#line 55 "layout.m"
                      }
#line 55 "layout.m"
                  }
#line 55 "layout.m"
              }
#line 55 "layout.m"
          }
#line 55 "layout.m"
      }
#line 55 "layout.m"
    return ll_backend__layout__succeeded;
#line 55 "layout.m"
  }
#line 55 "layout.m"
}

#line 80 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____basic_label_layout_0_0(
#line 80 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 80 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 80 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 80 "layout.m"
{
#line 80 "layout.m"
  {
#line 80 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 80 "layout.m"
    MR_Integer ll_backend__layout__CastX_27 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 80 "layout.m"
    MR_Integer ll_backend__layout__CastY_28 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 80 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_27 == ll_backend__layout__CastY_28);
#line 80 "layout.m"
    if (ll_backend__layout__succeeded)
#line 14162 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 80 "layout.m"
    else
#line 80 "layout.m"
      {
#line 80 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 80 "layout.m"
        MR_Integer ll_backend__layout__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 80 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 80 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 80 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 4)));
#line 80 "layout.m"
        MR_Integer ll_backend__layout__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 5)));
#line 80 "layout.m"
        MR_Word ll_backend__layout__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 6)));
#line 80 "layout.m"
        MR_Word ll_backend__layout__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 7)));
#line 80 "layout.m"
        MR_Word ll_backend__layout__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 80 "layout.m"
        MR_Integer ll_backend__layout__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 80 "layout.m"
        MR_Word ll_backend__layout__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 80 "layout.m"
        MR_Word ll_backend__layout__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 3)));
#line 80 "layout.m"
        MR_Word ll_backend__layout__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 4)));
#line 80 "layout.m"
        MR_Integer ll_backend__layout__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 5)));
#line 80 "layout.m"
        MR_Word ll_backend__layout__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 6)));
#line 80 "layout.m"
        MR_Word ll_backend__layout__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 7)));
#line 80 "layout.m"
        MR_Word ll_backend__layout__V_20_20;

#line 80 "layout.m"
        {
#line 80 "layout.m"
          mdbcomp__prim_data____Compare____proc_label_0_0(&ll_backend__layout__V_20_20, ll_backend__layout__V_4_4, ll_backend__layout__V_12_12);
        }
#line 14208 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_20_20 == (MR_Integer) 0);
#line 80 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 80 "layout.m"
        if (ll_backend__layout__succeeded)
#line 80 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_20_20;
#line 80 "layout.m"
        else
#line 80 "layout.m"
          {
#line 80 "layout.m"
            MR_Word ll_backend__layout__V_21_21;

#line 80 "layout.m"
            {
#line 80 "layout.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_21_21, ll_backend__layout__V_5_5, ll_backend__layout__V_13_13);
            }
#line 14228 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_21_21 == (MR_Integer) 0);
#line 80 "layout.m"
            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 80 "layout.m"
            if (ll_backend__layout__succeeded)
#line 80 "layout.m"
              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_21_21;
#line 80 "layout.m"
            else
#line 80 "layout.m"
              {
#line 80 "layout.m"
                MR_Word ll_backend__layout__V_22_22;

#line 80 "layout.m"
                {
#line 80 "layout.m"
                  ll_backend__layout____Compare____layout_name_0_0(&ll_backend__layout__V_22_22, ll_backend__layout__V_6_6, ll_backend__layout__V_14_14);
                }
#line 14248 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_22_22 == (MR_Integer) 0);
#line 80 "layout.m"
                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 80 "layout.m"
                if (ll_backend__layout__succeeded)
#line 80 "layout.m"
                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_22_22;
#line 80 "layout.m"
                else
#line 80 "layout.m"
                  {
#line 80 "layout.m"
                    MR_Word ll_backend__layout__V_23_23;

#line 80 "layout.m"
                    {
#line 80 "layout.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[0], &ll_backend__layout__V_23_23, ((MR_Box) (ll_backend__layout__V_7_7)), ((MR_Box) (ll_backend__layout__V_15_15)));
                    }
#line 14268 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = (ll_backend__layout__V_23_23 == (MR_Integer) 0);
#line 80 "layout.m"
                    ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 80 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 80 "layout.m"
                      *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_23_23;
#line 80 "layout.m"
                    else
#line 80 "layout.m"
                      {
#line 80 "layout.m"
                        MR_Word ll_backend__layout__V_24_24;

#line 80 "layout.m"
                        {
#line 80 "layout.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[1], &ll_backend__layout__V_24_24, ((MR_Box) (ll_backend__layout__V_8_8)), ((MR_Box) (ll_backend__layout__V_16_16)));
                        }
#line 14288 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = (ll_backend__layout__V_24_24 == (MR_Integer) 0);
#line 80 "layout.m"
                        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 80 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 80 "layout.m"
                          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_24_24;
#line 80 "layout.m"
                        else
#line 80 "layout.m"
                          {
#line 80 "layout.m"
                            MR_Word ll_backend__layout__V_25_25;

#line 80 "layout.m"
                            {
#line 80 "layout.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_25_25, ll_backend__layout__V_9_9, ll_backend__layout__V_17_17);
                            }
#line 14308 "ll_backend.layout.c"
                            ll_backend__layout__succeeded = (ll_backend__layout__V_25_25 == (MR_Integer) 0);
#line 80 "layout.m"
                            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 80 "layout.m"
                            if (ll_backend__layout__succeeded)
#line 80 "layout.m"
                              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_25_25;
#line 80 "layout.m"
                            else
#line 80 "layout.m"
                              {
#line 80 "layout.m"
                                MR_Word ll_backend__layout__V_26_26;

#line 80 "layout.m"
                                {
#line 80 "layout.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[2], &ll_backend__layout__V_26_26, ((MR_Box) (ll_backend__layout__V_10_10)), ((MR_Box) (ll_backend__layout__V_18_18)));
                                }
#line 14328 "ll_backend.layout.c"
                                ll_backend__layout__succeeded = (ll_backend__layout__V_26_26 == (MR_Integer) 0);
#line 80 "layout.m"
                                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 80 "layout.m"
                                if (ll_backend__layout__succeeded)
#line 80 "layout.m"
                                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_26_26;
#line 80 "layout.m"
                                else
#line 80 "layout.m"
                                  {
#line 80 "layout.m"
                                    {
#line 80 "layout.m"
                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[3], ll_backend__layout__HeadVar__1_1, ((MR_Box) (ll_backend__layout__V_11_11)), ((MR_Box) (ll_backend__layout__V_19_19)));
#line 80 "layout.m"
                                      return;
                                    }
#line 80 "layout.m"
                                  }
#line 80 "layout.m"
                              }
#line 80 "layout.m"
                          }
#line 80 "layout.m"
                      }
#line 80 "layout.m"
                  }
#line 80 "layout.m"
              }
#line 80 "layout.m"
          }
#line 80 "layout.m"
      }
#line 80 "layout.m"
  }
#line 80 "layout.m"
}

#line 80 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____basic_label_layout_0_0(
#line 80 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 80 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 80 "layout.m"
{
#line 80 "layout.m"
  {
#line 80 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 80 "layout.m"
    MR_Integer ll_backend__layout__CastX_19 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 80 "layout.m"
    MR_Integer ll_backend__layout__CastY_20 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 80 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_19 == ll_backend__layout__CastY_20);
#line 80 "layout.m"
    if (ll_backend__layout__succeeded)
#line 80 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 80 "layout.m"
    else
#line 80 "layout.m"
      {
#line 80 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_22_22;
#line 80 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_23_23;
#line 80 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_24_24;
#line 80 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_25_25;
#line 80 "layout.m"
        MR_Word ll_backend__layout__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 80 "layout.m"
        MR_Integer ll_backend__layout__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 80 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 80 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 3)));
#line 80 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 4)));
#line 80 "layout.m"
        MR_Integer ll_backend__layout__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 5)));
#line 80 "layout.m"
        MR_Word ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 6)));
#line 80 "layout.m"
        MR_Word ll_backend__layout__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 7)));
#line 80 "layout.m"
        MR_Word ll_backend__layout__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 80 "layout.m"
        MR_Integer ll_backend__layout__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 80 "layout.m"
        MR_Word ll_backend__layout__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 80 "layout.m"
        MR_Word ll_backend__layout__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 80 "layout.m"
        MR_Word ll_backend__layout__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 4)));
#line 80 "layout.m"
        MR_Integer ll_backend__layout__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 5)));
#line 80 "layout.m"
        MR_Word ll_backend__layout__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 6)));
#line 80 "layout.m"
        MR_Word ll_backend__layout__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 7)));

#line 14437 "ll_backend.layout.c"
        {
#line 14439 "ll_backend.layout.c"
          ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_11_11);
        }
#line 80 "layout.m"
        if (ll_backend__layout__succeeded)
#line 80 "layout.m"
          {
#line 14446 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 == ll_backend__layout__V_12_12);
#line 80 "layout.m"
            if (ll_backend__layout__succeeded)
#line 80 "layout.m"
              {
#line 14452 "ll_backend.layout.c"
                {
#line 14454 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_name_0_0(ll_backend__layout__V_5_5, ll_backend__layout__V_13_13);
                }
#line 80 "layout.m"
                if (ll_backend__layout__succeeded)
#line 80 "layout.m"
                  {
#line 14461 "ll_backend.layout.c"
                    ll_backend__layout__TypeInfo_22_22 = (MR_Word) &ll_backend__layout_scalar_common_1[0];
#line 14463 "ll_backend.layout.c"
                    {
#line 14465 "ll_backend.layout.c"
                      ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_22_22, ((MR_Box) (ll_backend__layout__V_6_6)), ((MR_Box) (ll_backend__layout__V_14_14)));
                    }
#line 80 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 80 "layout.m"
                      {
#line 14472 "ll_backend.layout.c"
                        ll_backend__layout__TypeInfo_23_23 = (MR_Word) &ll_backend__layout_scalar_common_1[1];
#line 14474 "ll_backend.layout.c"
                        {
#line 14476 "ll_backend.layout.c"
                          ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_23_23, ((MR_Box) (ll_backend__layout__V_7_7)), ((MR_Box) (ll_backend__layout__V_15_15)));
                        }
#line 80 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 80 "layout.m"
                          {
#line 14483 "ll_backend.layout.c"
                            ll_backend__layout__succeeded = (ll_backend__layout__V_8_8 == ll_backend__layout__V_16_16);
#line 80 "layout.m"
                            if (ll_backend__layout__succeeded)
#line 80 "layout.m"
                              {
#line 14489 "ll_backend.layout.c"
                                ll_backend__layout__TypeInfo_24_24 = (MR_Word) &ll_backend__layout_scalar_common_1[2];
#line 14491 "ll_backend.layout.c"
                                {
#line 14493 "ll_backend.layout.c"
                                  ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_24_24, ((MR_Box) (ll_backend__layout__V_9_9)), ((MR_Box) (ll_backend__layout__V_17_17)));
                                }
#line 80 "layout.m"
                                if (ll_backend__layout__succeeded)
#line 80 "layout.m"
                                  {
#line 14500 "ll_backend.layout.c"
                                    ll_backend__layout__TypeInfo_25_25 = (MR_Word) &ll_backend__layout_scalar_common_1[3];
#line 14502 "ll_backend.layout.c"
                                    {
#line 14504 "ll_backend.layout.c"
                                      return ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_25_25, ((MR_Box) (ll_backend__layout__V_10_10)), ((MR_Box) (ll_backend__layout__V_18_18)));
                                    }
#line 80 "layout.m"
                                  }
#line 80 "layout.m"
                              }
#line 80 "layout.m"
                          }
#line 80 "layout.m"
                      }
#line 80 "layout.m"
                  }
#line 80 "layout.m"
              }
#line 80 "layout.m"
          }
#line 80 "layout.m"
      }
#line 80 "layout.m"
    return ll_backend__layout__succeeded;
#line 80 "layout.m"
  }
#line 80 "layout.m"
}

#line 316 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____alloc_site_info_0_0(
#line 316 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 316 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 316 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 316 "layout.m"
{
#line 316 "layout.m"
  {
#line 316 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 316 "layout.m"
    MR_Integer ll_backend__layout__CastX_15 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 316 "layout.m"
    MR_Integer ll_backend__layout__CastY_16 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 316 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_15 == ll_backend__layout__CastY_16);
#line 316 "layout.m"
    if (ll_backend__layout__succeeded)
#line 14554 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 316 "layout.m"
    else
#line 316 "layout.m"
      {
#line 316 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 316 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 316 "layout.m"
        MR_String ll_backend__layout__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 316 "layout.m"
        MR_Integer ll_backend__layout__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 316 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 316 "layout.m"
        MR_Word ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 316 "layout.m"
        MR_String ll_backend__layout__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 316 "layout.m"
        MR_Integer ll_backend__layout__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 3)));
#line 316 "layout.m"
        MR_Word ll_backend__layout__V_12_12;

#line 316 "layout.m"
        {
#line 316 "layout.m"
          mdbcomp__prim_data____Compare____proc_label_0_0(&ll_backend__layout__V_12_12, ll_backend__layout__V_4_4, ll_backend__layout__V_8_8);
        }
#line 14584 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_12_12 == (MR_Integer) 0);
#line 316 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 316 "layout.m"
        if (ll_backend__layout__succeeded)
#line 316 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_12_12;
#line 316 "layout.m"
        else
#line 316 "layout.m"
          {
#line 316 "layout.m"
            MR_Word ll_backend__layout__V_13_13;

#line 316 "layout.m"
            {
#line 316 "layout.m"
              mercury__term____Compare____context_0_0(&ll_backend__layout__V_13_13, ll_backend__layout__V_5_5, ll_backend__layout__V_9_9);
            }
#line 14604 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_13_13 == (MR_Integer) 0);
#line 316 "layout.m"
            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 316 "layout.m"
            if (ll_backend__layout__succeeded)
#line 316 "layout.m"
              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_13_13;
#line 316 "layout.m"
            else
#line 316 "layout.m"
              {
#line 316 "layout.m"
                MR_Word ll_backend__layout__V_14_14;

#line 316 "layout.m"
                {
#line 316 "layout.m"
                  mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__layout__V_14_14, ll_backend__layout__V_6_6, ll_backend__layout__V_10_10);
                }
#line 14624 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_14_14 == (MR_Integer) 0);
#line 316 "layout.m"
                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 316 "layout.m"
                if (ll_backend__layout__succeeded)
#line 316 "layout.m"
                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_14_14;
#line 316 "layout.m"
                else
#line 316 "layout.m"
                  {
#line 316 "layout.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_7_7, ll_backend__layout__V_11_11);
#line 316 "layout.m"
                    return;
                  }
#line 316 "layout.m"
              }
#line 316 "layout.m"
          }
#line 316 "layout.m"
      }
#line 316 "layout.m"
  }
#line 316 "layout.m"
}

#line 316 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____alloc_site_info_0_0(
#line 316 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 316 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 316 "layout.m"
{
#line 316 "layout.m"
  {
#line 316 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 316 "layout.m"
    MR_Integer ll_backend__layout__CastX_11 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 316 "layout.m"
    MR_Integer ll_backend__layout__CastY_12 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 316 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_11 == ll_backend__layout__CastY_12);
#line 316 "layout.m"
    if (ll_backend__layout__succeeded)
#line 316 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 316 "layout.m"
    else
#line 316 "layout.m"
      {
#line 316 "layout.m"
        MR_Word ll_backend__layout__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 316 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 316 "layout.m"
        MR_String ll_backend__layout__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 316 "layout.m"
        MR_Integer ll_backend__layout__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 3)));
#line 316 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 316 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 316 "layout.m"
        MR_String ll_backend__layout__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 316 "layout.m"
        MR_Integer ll_backend__layout__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));

#line 14697 "ll_backend.layout.c"
        {
#line 14699 "ll_backend.layout.c"
          ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_7_7);
        }
#line 316 "layout.m"
        if (ll_backend__layout__succeeded)
#line 316 "layout.m"
          {
#line 14706 "ll_backend.layout.c"
            {
#line 14708 "ll_backend.layout.c"
              ll_backend__layout__succeeded = mercury__term____Unify____context_0_0(ll_backend__layout__V_4_4, ll_backend__layout__V_8_8);
            }
#line 316 "layout.m"
            if (ll_backend__layout__succeeded)
#line 316 "layout.m"
              {
#line 14715 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (strcmp(ll_backend__layout__V_5_5, ll_backend__layout__V_9_9) == 0);
#line 316 "layout.m"
                if (ll_backend__layout__succeeded)
#line 14719 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = (ll_backend__layout__V_6_6 == ll_backend__layout__V_10_10);
#line 316 "layout.m"
              }
#line 316 "layout.m"
          }
#line 316 "layout.m"
      }
#line 316 "layout.m"
    return ll_backend__layout__succeeded;
#line 316 "layout.m"
  }
#line 316 "layout.m"
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
	MR_register_type_ctor_info(&ll_backend__layout__ll_backend__layout__type_ctor_info_table_io_decl_data_0);
	MR_register_type_ctor_info(&ll_backend__layout__ll_backend__layout__type_ctor_info_user_event_data_0);
}

void mercury__ll_backend__layout__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.layout. */
