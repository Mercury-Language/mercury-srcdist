/*
** Automatically generated from `layout.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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




#line 139 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_alloc_site_info_0_0[4];

#line 142 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_alloc_site_info_0_0[4];

#line 145 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_alloc_site_info_0_0;

#line 148 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_alloc_site_info_0_0[1];

#line 151 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_alloc_site_info_0[1];

#line 154 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_alloc_site_info_0[1];

#line 157 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_alloc_site_info_0[1];

#line 160 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_trace_port_0;

#line 163 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1bool__type_ctor_info_bool_0;

#line 166 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

#line 169 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_layout_slot_name_0;

#line 172 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_basic_label_layout_0_0[8];

#line 175 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_basic_label_layout_0_0[8];

#line 178 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_basic_label_layout_0_0;

#line 181 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_basic_label_layout_0_0[1];

#line 184 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_basic_label_layout_0[1];

#line 187 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_basic_label_layout_0[1];

#line 190 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_basic_label_layout_0[1];

#line 193 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_closure_proc_id_data_0_0[8];

#line 196 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_closure_proc_id_data_0_0[8];

#line 199 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_closure_proc_id_data_0_0;

#line 202 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_closure_proc_id_data_0_0[1];

#line 205 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_closure_proc_id_data_0[1];

#line 208 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_closure_proc_id_data_0[1];

#line 211 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_closure_proc_id_data_0[1];

#line 214 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_data_or_slot_id_0_0[1];

#line 217 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_data_or_slot_id_0_0;

#line 220 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_data_or_slot_id_0_1[1];

#line 223 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_data_or_slot_id_0_1;

#line 226 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_data_or_slot_id_0_0[1];

#line 229 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_data_or_slot_id_0_1[1];

#line 232 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_data_or_slot_id_0[2];

#line 235 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_data_or_slot_id_0[2];

#line 238 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_data_or_slot_id_0[2];

#line 241 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_deep_excp_slots_0_0[3];

#line 244 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_deep_excp_slots_0_0[3];

#line 247 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_deep_excp_slots_0_0;

#line 250 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_deep_excp_slots_0_0[1];

#line 253 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_deep_excp_slots_0[1];

#line 256 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_deep_excp_slots_0[1];

#line 259 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_deep_excp_slots_0[1];

#line 262 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__layout__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_rval_0;

#line 265 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_event_set_layout_data_0_0[2];

#line 268 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_event_set_layout_data_0_0;

#line 271 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_event_set_layout_data_0_0[1];

#line 274 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_event_set_layout_data_0[1];

#line 277 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_event_set_layout_data_0[1];

#line 280 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_event_set_layout_data_0[1];

#line 283 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__layout__pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__layout__type_ctor_info_layout_slot_name_0;

#line 286 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__layout__type_ctor_info_layout_slot_name_0;

#line 289 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_file_layout_data_0_0[2];

#line 292 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_file_layout_data_0_0[2];

#line 295 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_file_layout_data_0_0;

#line 298 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_file_layout_data_0_0[1];

#line 301 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_file_layout_data_0[1];

#line 304 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_file_layout_data_0[1];

#line 307 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_file_layout_data_0[1];

#line 310 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_label_layout_long_vars_0_0[2];

#line 313 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_label_layout_long_vars_0_0;

#line 316 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_label_layout_long_vars_0_0[1];

#line 319 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_layout_long_vars_0[1];

#line 322 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_label_layout_long_vars_0[1];

#line 325 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_layout_long_vars_0[1];

#line 328 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_layout_no_vars_0[1];

#line 331 "ll_backend.layout.c"
static const MR_NotagFunctorDesc ll_backend__layout__ll_backend__layout__notag_functor_desc_label_layout_no_vars_0;

#line 334 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_label_layout_short_vars_0_0[2];

#line 337 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_label_layout_short_vars_0_0;

#line 340 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_label_layout_short_vars_0_0[1];

#line 343 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_layout_short_vars_0[1];

#line 346 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_label_layout_short_vars_0[1];

#line 349 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_layout_short_vars_0[1];

#line 352 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_label_long_var_info_0_0[6];

#line 355 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_label_long_var_info_0_0[6];

#line 358 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_label_long_var_info_0_0;

#line 361 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_label_long_var_info_0_0[1];

#line 364 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_long_var_info_0[1];

#line 367 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_label_long_var_info_0[1];

#line 370 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_long_var_info_0[1];

#line 373 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_label_short_var_info_0_0[5];

#line 376 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_label_short_var_info_0_0[5];

#line 379 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_label_short_var_info_0_0;

#line 382 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_label_short_var_info_0_0[1];

#line 385 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_short_var_info_0[1];

#line 388 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_label_short_var_info_0[1];

#line 391 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_short_var_info_0[1];

#line 394 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_0;

#line 397 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_1;

#line 400 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_2;

#line 403 "ll_backend.layout.c"
static const MR_EnumFunctorDescPtr ll_backend__layout__ll_backend__layout__enum_value_ordered_label_vars_0[3];

#line 406 "ll_backend.layout.c"
static const MR_EnumFunctorDescPtr ll_backend__layout__ll_backend__layout__enum_name_ordered_label_vars_0[3];

#line 409 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_vars_0[3];

#line 412 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_0;

#line 415 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_1;

#line 418 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_2;

#line 421 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_3;

#line 424 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_4;

#line 427 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_5;

#line 430 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_array_name_0_6[1];

#line 433 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_6;

#line 436 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_7;

#line 439 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_8;

#line 442 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_9;

#line 445 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_10;

#line 448 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_11;

#line 451 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_12;

#line 454 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_13;

#line 457 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_14;

#line 460 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_15;

#line 463 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_16;

#line 466 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_17;

#line 469 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_18;

#line 472 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_array_name_0_0[18];

#line 475 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_array_name_0_1[1];

#line 478 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_layout_array_name_0[2];

#line 481 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_layout_array_name_0[19];

#line 484 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_layout_array_name_0[19];

#line 487 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_0[2];

#line 490 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_0;

#line 493 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_1[3];

#line 496 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_1;

#line 499 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_2[2];

#line 502 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_2;

#line 505 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_3[2];

#line 508 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_3;

#line 511 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_4[2];

#line 514 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_4;

#line 517 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_5[1];

#line 520 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_5;

#line 523 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_6[1];

#line 526 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_6;

#line 529 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_7[1];

#line 532 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_7;

#line 535 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_8[2];

#line 538 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_8;

#line 541 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_9[1];

#line 544 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_9;

#line 547 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_10[2];

#line 550 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_10;

#line 553 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_11[2];

#line 556 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_11;

#line 559 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_12[3];

#line 562 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_12;

#line 565 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_13[3];

#line 568 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_13;

#line 571 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_14[2];

#line 574 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_14;

#line 577 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_15[1];

#line 580 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_15;

#line 583 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_16[1];

#line 586 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_16;

#line 589 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_17[1];

#line 592 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_17;

#line 595 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_18[1];

#line 598 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_18;

#line 601 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_name_0_0[1];

#line 604 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_name_0_1[1];

#line 607 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_name_0_2[1];

#line 610 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_name_0_3[16];

#line 613 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_layout_name_0[4];

#line 616 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_layout_name_0[19];

#line 619 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_layout_name_0[19];

#line 622 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_slot_name_0_0[2];

#line 625 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_slot_name_0_0;

#line 628 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_slot_name_0_0[1];

#line 631 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_layout_slot_name_0[1];

#line 634 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_layout_slot_name_0[1];

#line 637 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_layout_slot_name_0[1];

#line 640 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_maybe_proc_id_and_more_0_0;

#line 643 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_maybe_proc_id_and_more_0_1[4];

#line 646 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_maybe_proc_id_and_more_0_1[4];

#line 649 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_maybe_proc_id_and_more_0_1;

#line 652 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_maybe_proc_id_and_more_0_0[1];

#line 655 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_maybe_proc_id_and_more_0_1[1];

#line 658 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_maybe_proc_id_and_more_0[2];

#line 661 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_maybe_proc_id_and_more_0[2];

#line 664 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_maybe_proc_id_and_more_0[2];

#line 667 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_module_layout_deep_prof_0;

#line 670 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_module_layout_debug_0;

#line 673 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_module_layout_data_0_0[5];

#line 676 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_module_layout_data_0_0[5];

#line 679 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_data_0_0;

#line 682 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_data_0_0[1];

#line 685 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_module_layout_data_0[1];

#line 688 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_module_layout_data_0[1];

#line 691 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_module_layout_data_0[1];

#line 694 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1ll_backend__layout__type_ctor_info_layout_name_0;

#line 697 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1ll_backend__layout__type_ctor_info_file_layout_data_0;

#line 700 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_event_set_layout_data_0;

#line 703 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_module_layout_debug_0_0[6];

#line 706 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_module_layout_debug_0_0[6];

#line 709 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_debug_0_0;

#line 712 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_debug_0_0[1];

#line 715 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_module_layout_debug_0[1];

#line 718 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_module_layout_debug_0[1];

#line 721 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_module_layout_debug_0[1];

#line 724 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1builtin__type_ctor_info_int_0;

#line 727 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_module_layout_deep_prof_0_0[4];

#line 730 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_module_layout_deep_prof_0_0[4];

#line 733 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_deep_prof_0_0;

#line 736 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_deep_prof_0_0[1];

#line 739 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_module_layout_deep_prof_0[1];

#line 742 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_module_layout_deep_prof_0[1];

#line 745 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_module_layout_deep_prof_0[1];

#line 748 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_data_0_0[3];

#line 751 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_proc_layout_data_0_0[3];

#line 754 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_data_0_0;

#line 757 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_data_0_0[1];

#line 760 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_data_0[1];

#line 763 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_data_0[1];

#line 766 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_data_0[1];

#line 769 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_data_or_slot_id_0;

#line 772 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_exec_trace_0_0[19];

#line 775 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_proc_layout_exec_trace_0_0[19];

#line 778 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_exec_trace_0_0;

#line 781 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_exec_trace_0_0[1];

#line 784 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_exec_trace_0[1];

#line 787 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_exec_trace_0[1];

#line 790 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_exec_trace_0[1];

#line 793 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_kind_0_0;

#line 796 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_kind_0_1[1];

#line 799 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_kind_0_1;

#line 802 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_kind_0_0[1];

#line 805 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_kind_0_1[1];

#line 808 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_kind_0[2];

#line 811 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_kind_0[2];

#line 814 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_kind_0[2];

#line 817 "ll_backend.layout.c"
static const MR_VA_TypeInfo_Struct2 ll_backend__layout____vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 820 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 823 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_proc_static_0_0[6];

#line 826 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_proc_layout_proc_static_0_0[6];

#line 829 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_proc_static_0_0;

#line 832 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_proc_static_0_0[1];

#line 835 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_proc_static_0[1];

#line 838 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_proc_static_0[1];

#line 841 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_proc_static_0[1];

#line 844 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0;

#line 847 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_stack_traversal_0_0[4];

#line 850 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_proc_layout_stack_traversal_0_0[4];

#line 853 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_stack_traversal_0_0;

#line 856 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_stack_traversal_0_0[1];

#line 859 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_stack_traversal_0[1];

#line 862 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_stack_traversal_0[1];

#line 865 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_stack_traversal_0[1];

#line 868 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_0;

#line 871 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_1;

#line 874 "ll_backend.layout.c"
static const MR_EnumFunctorDescPtr ll_backend__layout__ll_backend__layout__enum_value_ordered_proc_layout_user_or_uci_0[2];

#line 877 "ll_backend.layout.c"
static const MR_EnumFunctorDescPtr ll_backend__layout__ll_backend__layout__enum_name_ordered_proc_layout_user_or_uci_0[2];

#line 880 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_user_or_uci_0[2];

#line 883 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_string_with_0s_0[1];

#line 886 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1builtin__type_ctor_info_string_0;

#line 889 "ll_backend.layout.c"
static const MR_NotagFunctorDesc ll_backend__layout__ll_backend__layout__notag_functor_desc_string_with_0s_0;

#line 892 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_table_io_args_data_0_0[3];

#line 895 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_table_io_args_data_0_0[3];

#line 898 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_table_io_args_data_0_0;

#line 901 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_table_io_args_data_0_0[1];

#line 904 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_table_io_args_data_0[1];

#line 907 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_table_io_args_data_0[1];

#line 910 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_table_io_args_data_0[1];

#line 913 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_table_io_args_data_0;

#line 916 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_table_io_entry_data_0_0[2];

#line 919 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_table_io_entry_data_0_0[2];

#line 922 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_table_io_entry_data_0_0;

#line 925 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_table_io_entry_data_0_0[1];

#line 928 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_table_io_entry_data_0[1];

#line 931 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_table_io_entry_data_0[1];

#line 934 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_table_io_entry_data_0[1];

#line 937 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_user_event_data_0_0[3];

#line 940 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_user_event_data_0_0[3];

#line 943 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_user_event_data_0_0;

#line 946 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_user_event_data_0_0[1];

#line 949 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_user_event_data_0[1];

#line 952 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_user_event_data_0[1];

#line 955 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_user_event_data_0[1];

#line 958 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____alloc_site_info_0_0_10001(
#line 961 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 963 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 966 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____alloc_site_info_0_0_10001(
#line 969 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 971 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 973 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 976 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____basic_label_layout_0_0_10001(
#line 979 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 981 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 984 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____basic_label_layout_0_0_10001(
#line 987 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 989 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 991 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 994 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____closure_proc_id_data_0_0_10001(
#line 997 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 999 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1002 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____closure_proc_id_data_0_0_10001(
#line 1005 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1007 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1009 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1012 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____data_or_slot_id_0_0_10001(
#line 1015 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1017 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1020 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____data_or_slot_id_0_0_10001(
#line 1023 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1025 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1027 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1030 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____deep_excp_slots_0_0_10001(
#line 1033 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1035 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1038 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____deep_excp_slots_0_0_10001(
#line 1041 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1043 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1045 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1048 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____event_set_layout_data_0_0_10001(
#line 1051 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1053 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1056 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____event_set_layout_data_0_0_10001(
#line 1059 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1061 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1063 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1066 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____file_layout_data_0_0_10001(
#line 1069 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1071 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1074 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____file_layout_data_0_0_10001(
#line 1077 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1079 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1081 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1084 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_layout_long_vars_0_0_10001(
#line 1087 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1089 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1092 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_layout_long_vars_0_0_10001(
#line 1095 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1097 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1099 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1102 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_layout_no_vars_0_0_10001(
#line 1105 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1107 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1110 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_layout_no_vars_0_0_10001(
#line 1113 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1115 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1117 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1120 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_layout_short_vars_0_0_10001(
#line 1123 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1125 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1128 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_layout_short_vars_0_0_10001(
#line 1131 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1133 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1135 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1138 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_long_var_info_0_0_10001(
#line 1141 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1143 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1146 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_long_var_info_0_0_10001(
#line 1149 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1151 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1153 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1156 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_short_var_info_0_0_10001(
#line 1159 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1161 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1164 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_short_var_info_0_0_10001(
#line 1167 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1169 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1171 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1174 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_vars_0_0_10001(
#line 1177 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1179 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1182 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_vars_0_0_10001(
#line 1185 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1187 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1189 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1192 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____layout_array_name_0_0_10001(
#line 1195 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1197 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1200 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____layout_array_name_0_0_10001(
#line 1203 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1205 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1207 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1210 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____layout_name_0_0_10001(
#line 1213 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1215 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1218 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____layout_name_0_0_10001(
#line 1221 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1223 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1225 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1228 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____layout_slot_name_0_0_10001(
#line 1231 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1233 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1236 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____layout_slot_name_0_0_10001(
#line 1239 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1241 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1243 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1246 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____maybe_proc_id_and_more_0_0_10001(
#line 1249 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1251 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1254 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____maybe_proc_id_and_more_0_0_10001(
#line 1257 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1259 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1261 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1264 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____module_layout_data_0_0_10001(
#line 1267 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1269 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1272 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____module_layout_data_0_0_10001(
#line 1275 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1277 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1279 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1282 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____module_layout_debug_0_0_10001(
#line 1285 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1287 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1290 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____module_layout_debug_0_0_10001(
#line 1293 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1295 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1297 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1300 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____module_layout_deep_prof_0_0_10001(
#line 1303 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1305 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1308 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____module_layout_deep_prof_0_0_10001(
#line 1311 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1313 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1315 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1318 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_data_0_0_10001(
#line 1321 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1323 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1326 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_data_0_0_10001(
#line 1329 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1331 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1333 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1336 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_exec_trace_0_0_10001(
#line 1339 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1341 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1344 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_exec_trace_0_0_10001(
#line 1347 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1349 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1351 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1354 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_kind_0_0_10001(
#line 1357 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1359 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1362 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_kind_0_0_10001(
#line 1365 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1367 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1369 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1372 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_proc_static_0_0_10001(
#line 1375 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1377 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1380 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_proc_static_0_0_10001(
#line 1383 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1385 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1387 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1390 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_stack_traversal_0_0_10001(
#line 1393 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1395 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1398 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_stack_traversal_0_0_10001(
#line 1401 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1403 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1405 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1408 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_user_or_uci_0_0_10001(
#line 1411 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1413 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1416 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_user_or_uci_0_0_10001(
#line 1419 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1421 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1423 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1426 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____string_with_0s_0_0_10001(
#line 1429 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1431 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1434 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____string_with_0s_0_0_10001(
#line 1437 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1439 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1441 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1444 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____table_io_args_data_0_0_10001(
#line 1447 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1449 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1452 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____table_io_args_data_0_0_10001(
#line 1455 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1457 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1459 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1462 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____table_io_entry_data_0_0_10001(
#line 1465 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1467 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1470 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____table_io_entry_data_0_0_10001(
#line 1473 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1475 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1477 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1480 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____user_event_data_0_0_10001(
#line 1483 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1485 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1488 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____user_event_data_0_0_10001(
#line 1491 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1493 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1495 "ll_backend.layout.c"
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



#line 1633 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_alloc_site_info_0_0[4] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1641 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_alloc_site_info_0_0[4] = {
  (MR_String) "as_proc_label",
  (MR_String) "as_context",
  (MR_String) "as_type",
  (MR_String) "as_size"
};

#line 1649 "ll_backend.layout.c"
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

#line 1664 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_alloc_site_info_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_alloc_site_info_0_0
};

#line 1669 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_alloc_site_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_alloc_site_info_0_0
  }
};

#line 1678 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_alloc_site_info_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_alloc_site_info_0_0
};

#line 1683 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_alloc_site_info_0[1] = {
  (MR_Integer) 0
};

#line 1688 "ll_backend.layout.c"
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

#line 1709 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_trace_port_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0
  }
};

#line 1717 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1bool__type_ctor_info_bool_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 1725 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1733 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
  }
};

#line 1741 "ll_backend.layout.c"
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

#line 1753 "ll_backend.layout.c"
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

#line 1765 "ll_backend.layout.c"
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

#line 1780 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_basic_label_layout_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_basic_label_layout_0_0
};

#line 1785 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_basic_label_layout_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_basic_label_layout_0_0
  }
};

#line 1794 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_basic_label_layout_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_basic_label_layout_0_0
};

#line 1799 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_basic_label_layout_0[1] = {
  (MR_Integer) 0
};

#line 1804 "ll_backend.layout.c"
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

#line 1825 "ll_backend.layout.c"
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

#line 1837 "ll_backend.layout.c"
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

#line 1849 "ll_backend.layout.c"
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

#line 1864 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_closure_proc_id_data_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_closure_proc_id_data_0_0
};

#line 1869 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_closure_proc_id_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_closure_proc_id_data_0_0
  }
};

#line 1878 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_closure_proc_id_data_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_closure_proc_id_data_0_0
};

#line 1883 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_closure_proc_id_data_0[1] = {
  (MR_Integer) 0
};

#line 1888 "ll_backend.layout.c"
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

#line 1909 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_data_or_slot_id_0_0[1] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0
};

#line 1914 "ll_backend.layout.c"
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

#line 1929 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_data_or_slot_id_0_1[1] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
};

#line 1934 "ll_backend.layout.c"
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

#line 1949 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_data_or_slot_id_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_data_or_slot_id_0_1
};

#line 1954 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_data_or_slot_id_0_1[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_data_or_slot_id_0_0
};

#line 1959 "ll_backend.layout.c"
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

#line 1973 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_data_or_slot_id_0[2] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_data_or_slot_id_0_0,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_data_or_slot_id_0_1
};

#line 1979 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_data_or_slot_id_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1985 "ll_backend.layout.c"
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

#line 2006 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_deep_excp_slots_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2013 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_deep_excp_slots_0_0[3] = {
  (MR_String) "top_csd",
  (MR_String) "middle_csd",
  (MR_String) "old_outermost"
};

#line 2020 "ll_backend.layout.c"
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

#line 2035 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_deep_excp_slots_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_deep_excp_slots_0_0
};

#line 2040 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_deep_excp_slots_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_deep_excp_slots_0_0
  }
};

#line 2049 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_deep_excp_slots_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_deep_excp_slots_0_0
};

#line 2054 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_deep_excp_slots_0[1] = {
  (MR_Integer) 0
};

#line 2059 "ll_backend.layout.c"
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

#line 2080 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__layout__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0
  }
};

#line 2089 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_event_set_layout_data_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_set_data_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_rval_0
};

#line 2095 "ll_backend.layout.c"
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

#line 2110 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_event_set_layout_data_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_event_set_layout_data_0_0
};

#line 2115 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_event_set_layout_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_event_set_layout_data_0_0
  }
};

#line 2124 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_event_set_layout_data_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_event_set_layout_data_0_0
};

#line 2129 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_event_set_layout_data_0[1] = {
  (MR_Integer) 0
};

#line 2134 "ll_backend.layout.c"
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

#line 2155 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__layout__pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
  }
};

#line 2164 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__layout__pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__layout__type_ctor_info_layout_slot_name_0
  }
};

#line 2172 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_file_layout_data_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__layout__type_ctor_info_layout_slot_name_0
};

#line 2178 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_file_layout_data_0_0[2] = {
  (MR_String) "file_name",
  (MR_String) "line_no_label_list"
};

#line 2184 "ll_backend.layout.c"
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

#line 2199 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_file_layout_data_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_file_layout_data_0_0
};

#line 2204 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_file_layout_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_file_layout_data_0_0
  }
};

#line 2213 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_file_layout_data_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_file_layout_data_0_0
};

#line 2218 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_file_layout_data_0[1] = {
  (MR_Integer) 0
};

#line 2223 "ll_backend.layout.c"
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

#line 2244 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_label_layout_long_vars_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_basic_label_layout_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_label_long_var_info_0
};

#line 2250 "ll_backend.layout.c"
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

#line 2265 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_label_layout_long_vars_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_label_layout_long_vars_0_0
};

#line 2270 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_layout_long_vars_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_label_layout_long_vars_0_0
  }
};

#line 2279 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_label_layout_long_vars_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_label_layout_long_vars_0_0
};

#line 2284 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_layout_long_vars_0[1] = {
  (MR_Integer) 0
};

#line 2289 "ll_backend.layout.c"
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

#line 2310 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_layout_no_vars_0[1] = {
  (MR_Integer) 0
};

#line 2315 "ll_backend.layout.c"
static const MR_NotagFunctorDesc ll_backend__layout__ll_backend__layout__notag_functor_desc_label_layout_no_vars_0 = {
  (MR_String) "label_layout_no_vars",
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_basic_label_layout_0,
  NULL
};

#line 2322 "ll_backend.layout.c"
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

#line 2343 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_label_layout_short_vars_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_basic_label_layout_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_label_short_var_info_0
};

#line 2349 "ll_backend.layout.c"
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

#line 2364 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_label_layout_short_vars_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_label_layout_short_vars_0_0
};

#line 2369 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_layout_short_vars_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_label_layout_short_vars_0_0
  }
};

#line 2378 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_label_layout_short_vars_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_label_layout_short_vars_0_0
};

#line 2383 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_layout_short_vars_0[1] = {
  (MR_Integer) 0
};

#line 2388 "ll_backend.layout.c"
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

#line 2409 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_label_long_var_info_0_0[6] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2419 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_label_long_var_info_0_0[6] = {
  (MR_String) "llvi_encoded_var_count",
  (MR_String) "llvi_type_params",
  (MR_String) "llvi_ptis",
  (MR_String) "llvi_hlds_var_nums",
  (MR_String) "llvi_short_locns",
  (MR_String) "llvi_long_locns"
};

#line 2429 "ll_backend.layout.c"
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

#line 2444 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_label_long_var_info_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_label_long_var_info_0_0
};

#line 2449 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_long_var_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_label_long_var_info_0_0
  }
};

#line 2458 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_label_long_var_info_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_label_long_var_info_0_0
};

#line 2463 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_long_var_info_0[1] = {
  (MR_Integer) 0
};

#line 2468 "ll_backend.layout.c"
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

#line 2489 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_label_short_var_info_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2498 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_label_short_var_info_0_0[5] = {
  (MR_String) "lsvi_encoded_var_count",
  (MR_String) "lsvi_type_params",
  (MR_String) "lsvi_ptis",
  (MR_String) "lsvi_hlds_var_nums",
  (MR_String) "lsvi_short_locns"
};

#line 2507 "ll_backend.layout.c"
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

#line 2522 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_label_short_var_info_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_label_short_var_info_0_0
};

#line 2527 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_short_var_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_label_short_var_info_0_0
  }
};

#line 2536 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_label_short_var_info_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_label_short_var_info_0_0
};

#line 2541 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_short_var_info_0[1] = {
  (MR_Integer) 0
};

#line 2546 "ll_backend.layout.c"
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

#line 2567 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_0 = {
  (MR_String) "label_has_no_var_info",
  (MR_Integer) 0
};

#line 2573 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_1 = {
  (MR_String) "label_has_short_var_info",
  (MR_Integer) 1
};

#line 2579 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_2 = {
  (MR_String) "label_has_long_var_info",
  (MR_Integer) 2
};

#line 2585 "ll_backend.layout.c"
static const MR_EnumFunctorDescPtr ll_backend__layout__ll_backend__layout__enum_value_ordered_label_vars_0[3] = {
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_0,
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_1,
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_2
};

#line 2592 "ll_backend.layout.c"
static const MR_EnumFunctorDescPtr ll_backend__layout__ll_backend__layout__enum_name_ordered_label_vars_0[3] = {
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_2,
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_0,
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_1
};

#line 2599 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_vars_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 2606 "ll_backend.layout.c"
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

#line 2627 "ll_backend.layout.c"
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

#line 2642 "ll_backend.layout.c"
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

#line 2657 "ll_backend.layout.c"
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

#line 2672 "ll_backend.layout.c"
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

#line 2687 "ll_backend.layout.c"
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

#line 2702 "ll_backend.layout.c"
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

#line 2717 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_array_name_0_6[1] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_label_vars_0
};

#line 2722 "ll_backend.layout.c"
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

#line 2737 "ll_backend.layout.c"
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

#line 2752 "ll_backend.layout.c"
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

#line 2767 "ll_backend.layout.c"
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

#line 2782 "ll_backend.layout.c"
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

#line 2797 "ll_backend.layout.c"
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

#line 2812 "ll_backend.layout.c"
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

#line 2827 "ll_backend.layout.c"
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

#line 2842 "ll_backend.layout.c"
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

#line 2857 "ll_backend.layout.c"
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

#line 2872 "ll_backend.layout.c"
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

#line 2887 "ll_backend.layout.c"
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

#line 2902 "ll_backend.layout.c"
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

#line 2917 "ll_backend.layout.c"
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

#line 2939 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_array_name_0_1[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_6
};

#line 2944 "ll_backend.layout.c"
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

#line 2958 "ll_backend.layout.c"
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

#line 2981 "ll_backend.layout.c"
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

#line 3004 "ll_backend.layout.c"
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

#line 3025 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_kind_0
};

#line 3031 "ll_backend.layout.c"
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

#line 3046 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_1[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0
};

#line 3053 "ll_backend.layout.c"
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

#line 3068 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_2[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3074 "ll_backend.layout.c"
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

#line 3089 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_3[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3095 "ll_backend.layout.c"
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

#line 3110 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_4[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3116 "ll_backend.layout.c"
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

#line 3131 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_5[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
};

#line 3136 "ll_backend.layout.c"
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

#line 3151 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_6[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
};

#line 3156 "ll_backend.layout.c"
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

#line 3171 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_7[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
};

#line 3176 "ll_backend.layout.c"
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

#line 3191 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_8[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3197 "ll_backend.layout.c"
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

#line 3212 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_9[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
};

#line 3217 "ll_backend.layout.c"
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

#line 3232 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_10[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3238 "ll_backend.layout.c"
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

#line 3253 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_11[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3259 "ll_backend.layout.c"
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

#line 3274 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_12[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3281 "ll_backend.layout.c"
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

#line 3296 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_13[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3303 "ll_backend.layout.c"
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

#line 3318 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_14[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3324 "ll_backend.layout.c"
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

#line 3339 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_15[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
};

#line 3344 "ll_backend.layout.c"
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

#line 3359 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_16[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
};

#line 3364 "ll_backend.layout.c"
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

#line 3379 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_17[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
};

#line 3384 "ll_backend.layout.c"
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

#line 3399 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_18[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0
};

#line 3404 "ll_backend.layout.c"
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

#line 3419 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_name_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_0
};

#line 3424 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_name_0_1[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_1
};

#line 3429 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_name_0_2[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_2
};

#line 3434 "ll_backend.layout.c"
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

#line 3454 "ll_backend.layout.c"
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

#line 3478 "ll_backend.layout.c"
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

#line 3501 "ll_backend.layout.c"
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

#line 3524 "ll_backend.layout.c"
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

#line 3545 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_slot_name_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_array_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3551 "ll_backend.layout.c"
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

#line 3566 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_slot_name_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_slot_name_0_0
};

#line 3571 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_layout_slot_name_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_slot_name_0_0
  }
};

#line 3580 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_layout_slot_name_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_slot_name_0_0
};

#line 3585 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_layout_slot_name_0[1] = {
  (MR_Integer) 0
};

#line 3590 "ll_backend.layout.c"
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

#line 3611 "ll_backend.layout.c"
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

#line 3626 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_maybe_proc_id_and_more_0_1[4] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_layout_slot_name_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_layout_slot_name_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_layout_slot_name_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0
};

#line 3634 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_maybe_proc_id_and_more_0_1[4] = {
  (MR_String) "maybe_proc_static",
  (MR_String) "maybe_exec_trace",
  (MR_String) "proc_body_bytes",
  (MR_String) "proc_module_layout"
};

#line 3642 "ll_backend.layout.c"
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

#line 3657 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_maybe_proc_id_and_more_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_maybe_proc_id_and_more_0_0
};

#line 3662 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_maybe_proc_id_and_more_0_1[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_maybe_proc_id_and_more_0_1
};

#line 3667 "ll_backend.layout.c"
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

#line 3681 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_maybe_proc_id_and_more_0[2] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_maybe_proc_id_and_more_0_0,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_maybe_proc_id_and_more_0_1
};

#line 3687 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_maybe_proc_id_and_more_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3693 "ll_backend.layout.c"
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

#line 3714 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_module_layout_deep_prof_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_module_layout_deep_prof_0
  }
};

#line 3722 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_module_layout_debug_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_module_layout_debug_0
  }
};

#line 3730 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_module_layout_data_0_0[5] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_string_with_0s_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_module_layout_deep_prof_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_module_layout_debug_0
};

#line 3739 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_module_layout_data_0_0[5] = {
  (MR_String) "mld_module_name",
  (MR_String) "mld_string_table_size",
  (MR_String) "mld_string_table",
  (MR_String) "mld_maybe_deep_prof",
  (MR_String) "mld_maybe_debug"
};

#line 3748 "ll_backend.layout.c"
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

#line 3763 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_data_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_data_0_0
};

#line 3768 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_module_layout_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_data_0_0
  }
};

#line 3777 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_module_layout_data_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_data_0_0
};

#line 3782 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_module_layout_data_0[1] = {
  (MR_Integer) 0
};

#line 3787 "ll_backend.layout.c"
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

#line 3808 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1ll_backend__layout__type_ctor_info_layout_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0
  }
};

#line 3816 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1ll_backend__layout__type_ctor_info_file_layout_data_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_file_layout_data_0
  }
};

#line 3824 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_event_set_layout_data_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_event_set_layout_data_0
  }
};

#line 3832 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_module_layout_debug_0_0[6] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__list__ti_list_1ll_backend__layout__type_ctor_info_layout_name_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__list__ti_list_1ll_backend__layout__type_ctor_info_file_layout_data_0,
  (MR_PseudoTypeInfo) &libs__trace_params__libs__trace_params__type_ctor_info_trace_level_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_event_set_layout_data_0
};

#line 3842 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_module_layout_debug_0_0[6] = {
  (MR_String) "mld_proc_layout_names",
  (MR_String) "mld_file_layouts",
  (MR_String) "mld_trace_level",
  (MR_String) "mld_suppressed_events",
  (MR_String) "mld_num_label_exec_count",
  (MR_String) "mld_maybe_event_specs"
};

#line 3852 "ll_backend.layout.c"
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

#line 3867 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_debug_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_debug_0_0
};

#line 3872 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_module_layout_debug_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_debug_0_0
  }
};

#line 3881 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_module_layout_debug_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_debug_0_0
};

#line 3886 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_module_layout_debug_0[1] = {
  (MR_Integer) 0
};

#line 3891 "ll_backend.layout.c"
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

#line 3912 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 3920 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_module_layout_deep_prof_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 3928 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_module_layout_deep_prof_0_0[4] = {
  (MR_String) "mldp_num_oisu_types",
  (MR_String) "mldp_oisu_bytes",
  (MR_String) "mldp_num_table_types",
  (MR_String) "mldp_type_table_bytes"
};

#line 3936 "ll_backend.layout.c"
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

#line 3951 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_deep_prof_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_deep_prof_0_0
};

#line 3956 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_module_layout_deep_prof_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_deep_prof_0_0
  }
};

#line 3965 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_module_layout_deep_prof_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_deep_prof_0_0
};

#line 3970 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_module_layout_deep_prof_0[1] = {
  (MR_Integer) 0
};

#line 3975 "ll_backend.layout.c"
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

#line 3996 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_data_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_stack_traversal_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_maybe_proc_id_and_more_0
};

#line 4003 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_proc_layout_data_0_0[3] = {
  (MR_String) "proc_layout_label",
  (MR_String) "proc_layout_trav",
  (MR_String) "proc_layout_more"
};

#line 4010 "ll_backend.layout.c"
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

#line 4025 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_data_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_data_0_0
};

#line 4030 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_data_0_0
  }
};

#line 4039 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_data_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_data_0_0
};

#line 4044 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_data_0[1] = {
  (MR_Integer) 0
};

#line 4049 "ll_backend.layout.c"
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

#line 4070 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_data_or_slot_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_data_or_slot_id_0
  }
};

#line 4078 "ll_backend.layout.c"
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

#line 4101 "ll_backend.layout.c"
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

#line 4124 "ll_backend.layout.c"
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

#line 4139 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_exec_trace_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_exec_trace_0_0
};

#line 4144 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_exec_trace_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_exec_trace_0_0
  }
};

#line 4153 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_exec_trace_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_exec_trace_0_0
};

#line 4158 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_exec_trace_0[1] = {
  (MR_Integer) 0
};

#line 4163 "ll_backend.layout.c"
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

#line 4184 "ll_backend.layout.c"
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

#line 4199 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_kind_0_1[1] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_user_or_uci_0
};

#line 4204 "ll_backend.layout.c"
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

#line 4219 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_kind_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_kind_0_0
};

#line 4224 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_kind_0_1[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_kind_0_1
};

#line 4229 "ll_backend.layout.c"
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

#line 4243 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_kind_0[2] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_kind_0_1,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_kind_0_0
};

#line 4249 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_kind_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 4255 "ll_backend.layout.c"
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

#line 4276 "ll_backend.layout.c"
static const MR_VA_TypeInfo_Struct2 ll_backend__layout____vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 4286 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__layout____vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
  }
};

#line 4294 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_proc_static_0_0[6] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_deep_excp_slots_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
};

#line 4304 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_proc_layout_proc_static_0_0[6] = {
  (MR_String) "plps_file_name",
  (MR_String) "plps_line_number",
  (MR_String) "plps_is_in_interface",
  (MR_String) "plps_excp_slots",
  (MR_String) "plps_call_site_statics",
  (MR_String) "plps_coverage_points"
};

#line 4314 "ll_backend.layout.c"
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

#line 4329 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_proc_static_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_proc_static_0_0
};

#line 4334 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_proc_static_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_proc_static_0_0
  }
};

#line 4343 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_proc_static_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_proc_static_0_0
};

#line 4348 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_proc_static_0[1] = {
  (MR_Integer) 0
};

#line 4353 "ll_backend.layout.c"
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

#line 4374 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 4382 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_stack_traversal_0_0[4] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0
};

#line 4390 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_proc_layout_stack_traversal_0_0[4] = {
  (MR_String) "plst_entry_label",
  (MR_String) "plst_succip_slot",
  (MR_String) "plst_stack_slot_count",
  (MR_String) "plst_detism"
};

#line 4398 "ll_backend.layout.c"
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

#line 4413 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_stack_traversal_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_stack_traversal_0_0
};

#line 4418 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_stack_traversal_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_stack_traversal_0_0
  }
};

#line 4427 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_stack_traversal_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_stack_traversal_0_0
};

#line 4432 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_stack_traversal_0[1] = {
  (MR_Integer) 0
};

#line 4437 "ll_backend.layout.c"
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

#line 4458 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_0 = {
  (MR_String) "user",
  (MR_Integer) 0
};

#line 4464 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_1 = {
  (MR_String) "uci",
  (MR_Integer) 1
};

#line 4470 "ll_backend.layout.c"
static const MR_EnumFunctorDescPtr ll_backend__layout__ll_backend__layout__enum_value_ordered_proc_layout_user_or_uci_0[2] = {
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_0,
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_1
};

#line 4476 "ll_backend.layout.c"
static const MR_EnumFunctorDescPtr ll_backend__layout__ll_backend__layout__enum_name_ordered_proc_layout_user_or_uci_0[2] = {
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_1,
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_0
};

#line 4482 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_user_or_uci_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 4488 "ll_backend.layout.c"
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

#line 4509 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_string_with_0s_0[1] = {
  (MR_Integer) 0
};

#line 4514 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4522 "ll_backend.layout.c"
static const MR_NotagFunctorDesc ll_backend__layout__ll_backend__layout__notag_functor_desc_string_with_0s_0 = {
  (MR_String) "string_with_0s",
  (MR_PseudoTypeInfo) &ll_backend__layout__list__ti_list_1builtin__type_ctor_info_string_0,
  NULL
};

#line 4529 "ll_backend.layout.c"
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

#line 4550 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_table_io_args_data_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0
};

#line 4557 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_table_io_args_data_0_0[3] = {
  (MR_String) "tia_answerblock_arity",
  (MR_String) "tia_ptis",
  (MR_String) "tia_type_params"
};

#line 4564 "ll_backend.layout.c"
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

#line 4579 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_table_io_args_data_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_table_io_args_data_0_0
};

#line 4584 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_table_io_args_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_table_io_args_data_0_0
  }
};

#line 4593 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_table_io_args_data_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_table_io_args_data_0_0
};

#line 4598 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_table_io_args_data_0[1] = {
  (MR_Integer) 0
};

#line 4603 "ll_backend.layout.c"
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

#line 4624 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_table_io_args_data_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_table_io_args_data_0
  }
};

#line 4632 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_table_io_entry_data_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_table_io_args_data_0
};

#line 4638 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_table_io_entry_data_0_0[2] = {
  (MR_String) "tie_proc_ptr",
  (MR_String) "tie_maybe_args"
};

#line 4644 "ll_backend.layout.c"
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

#line 4659 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_table_io_entry_data_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_table_io_entry_data_0_0
};

#line 4664 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_table_io_entry_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_table_io_entry_data_0_0
  }
};

#line 4673 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_table_io_entry_data_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_table_io_entry_data_0_0
};

#line 4678 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_table_io_entry_data_0[1] = {
  (MR_Integer) 0
};

#line 4683 "ll_backend.layout.c"
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

#line 4704 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_user_event_data_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
};

#line 4711 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_user_event_data_0_0[3] = {
  (MR_String) "user_event_number",
  (MR_String) "user_event_locns",
  (MR_String) "user_event_var_nums"
};

#line 4718 "ll_backend.layout.c"
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

#line 4733 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_user_event_data_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_user_event_data_0_0
};

#line 4738 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_user_event_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_user_event_data_0_0
  }
};

#line 4747 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_user_event_data_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_user_event_data_0_0
};

#line 4752 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_user_event_data_0[1] = {
  (MR_Integer) 0
};

#line 4757 "ll_backend.layout.c"
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

#line 4778 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____alloc_site_info_0_0_10001(
#line 4781 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 4783 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 4785 "ll_backend.layout.c"
{
#line 4787 "ll_backend.layout.c"
  {
#line 4789 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 4792 "ll_backend.layout.c"
    {
#line 4794 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____alloc_site_info_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 4797 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 4799 "ll_backend.layout.c"
  }
#line 4801 "ll_backend.layout.c"
}

#line 4804 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____alloc_site_info_0_0_10001(
#line 4807 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 4809 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 4811 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 4813 "ll_backend.layout.c"
{
#line 4815 "ll_backend.layout.c"
  {
#line 4817 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 4820 "ll_backend.layout.c"
    {
#line 4822 "ll_backend.layout.c"
      ll_backend__layout____Compare____alloc_site_info_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 4825 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 4827 "ll_backend.layout.c"
  }
#line 4829 "ll_backend.layout.c"
}

#line 4832 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____basic_label_layout_0_0_10001(
#line 4835 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 4837 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 4839 "ll_backend.layout.c"
{
#line 4841 "ll_backend.layout.c"
  {
#line 4843 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 4846 "ll_backend.layout.c"
    {
#line 4848 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____basic_label_layout_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 4851 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 4853 "ll_backend.layout.c"
  }
#line 4855 "ll_backend.layout.c"
}

#line 4858 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____basic_label_layout_0_0_10001(
#line 4861 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 4863 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 4865 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 4867 "ll_backend.layout.c"
{
#line 4869 "ll_backend.layout.c"
  {
#line 4871 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 4874 "ll_backend.layout.c"
    {
#line 4876 "ll_backend.layout.c"
      ll_backend__layout____Compare____basic_label_layout_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 4879 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 4881 "ll_backend.layout.c"
  }
#line 4883 "ll_backend.layout.c"
}

#line 4886 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____closure_proc_id_data_0_0_10001(
#line 4889 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 4891 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 4893 "ll_backend.layout.c"
{
#line 4895 "ll_backend.layout.c"
  {
#line 4897 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 4900 "ll_backend.layout.c"
    {
#line 4902 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____closure_proc_id_data_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 4905 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 4907 "ll_backend.layout.c"
  }
#line 4909 "ll_backend.layout.c"
}

#line 4912 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____closure_proc_id_data_0_0_10001(
#line 4915 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 4917 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 4919 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 4921 "ll_backend.layout.c"
{
#line 4923 "ll_backend.layout.c"
  {
#line 4925 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 4928 "ll_backend.layout.c"
    {
#line 4930 "ll_backend.layout.c"
      ll_backend__layout____Compare____closure_proc_id_data_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 4933 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 4935 "ll_backend.layout.c"
  }
#line 4937 "ll_backend.layout.c"
}

#line 4940 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____data_or_slot_id_0_0_10001(
#line 4943 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 4945 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 4947 "ll_backend.layout.c"
{
#line 4949 "ll_backend.layout.c"
  {
#line 4951 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 4954 "ll_backend.layout.c"
    {
#line 4956 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____data_or_slot_id_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 4959 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 4961 "ll_backend.layout.c"
  }
#line 4963 "ll_backend.layout.c"
}

#line 4966 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____data_or_slot_id_0_0_10001(
#line 4969 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 4971 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 4973 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 4975 "ll_backend.layout.c"
{
#line 4977 "ll_backend.layout.c"
  {
#line 4979 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 4982 "ll_backend.layout.c"
    {
#line 4984 "ll_backend.layout.c"
      ll_backend__layout____Compare____data_or_slot_id_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 4987 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 4989 "ll_backend.layout.c"
  }
#line 4991 "ll_backend.layout.c"
}

#line 4994 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____deep_excp_slots_0_0_10001(
#line 4997 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 4999 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5001 "ll_backend.layout.c"
{
#line 5003 "ll_backend.layout.c"
  {
#line 5005 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5008 "ll_backend.layout.c"
    {
#line 5010 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____deep_excp_slots_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5013 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5015 "ll_backend.layout.c"
  }
#line 5017 "ll_backend.layout.c"
}

#line 5020 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____deep_excp_slots_0_0_10001(
#line 5023 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5025 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5027 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5029 "ll_backend.layout.c"
{
#line 5031 "ll_backend.layout.c"
  {
#line 5033 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5036 "ll_backend.layout.c"
    {
#line 5038 "ll_backend.layout.c"
      ll_backend__layout____Compare____deep_excp_slots_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5041 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5043 "ll_backend.layout.c"
  }
#line 5045 "ll_backend.layout.c"
}

#line 5048 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____event_set_layout_data_0_0_10001(
#line 5051 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5053 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5055 "ll_backend.layout.c"
{
#line 5057 "ll_backend.layout.c"
  {
#line 5059 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5062 "ll_backend.layout.c"
    {
#line 5064 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____event_set_layout_data_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5067 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5069 "ll_backend.layout.c"
  }
#line 5071 "ll_backend.layout.c"
}

#line 5074 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____event_set_layout_data_0_0_10001(
#line 5077 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5079 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5081 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5083 "ll_backend.layout.c"
{
#line 5085 "ll_backend.layout.c"
  {
#line 5087 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5090 "ll_backend.layout.c"
    {
#line 5092 "ll_backend.layout.c"
      ll_backend__layout____Compare____event_set_layout_data_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5095 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5097 "ll_backend.layout.c"
  }
#line 5099 "ll_backend.layout.c"
}

#line 5102 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____file_layout_data_0_0_10001(
#line 5105 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5107 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5109 "ll_backend.layout.c"
{
#line 5111 "ll_backend.layout.c"
  {
#line 5113 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5116 "ll_backend.layout.c"
    {
#line 5118 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____file_layout_data_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5121 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5123 "ll_backend.layout.c"
  }
#line 5125 "ll_backend.layout.c"
}

#line 5128 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____file_layout_data_0_0_10001(
#line 5131 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5133 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5135 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5137 "ll_backend.layout.c"
{
#line 5139 "ll_backend.layout.c"
  {
#line 5141 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5144 "ll_backend.layout.c"
    {
#line 5146 "ll_backend.layout.c"
      ll_backend__layout____Compare____file_layout_data_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5149 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5151 "ll_backend.layout.c"
  }
#line 5153 "ll_backend.layout.c"
}

#line 5156 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_layout_long_vars_0_0_10001(
#line 5159 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5161 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5163 "ll_backend.layout.c"
{
#line 5165 "ll_backend.layout.c"
  {
#line 5167 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5170 "ll_backend.layout.c"
    {
#line 5172 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____label_layout_long_vars_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5175 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5177 "ll_backend.layout.c"
  }
#line 5179 "ll_backend.layout.c"
}

#line 5182 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_layout_long_vars_0_0_10001(
#line 5185 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5187 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5189 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5191 "ll_backend.layout.c"
{
#line 5193 "ll_backend.layout.c"
  {
#line 5195 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5198 "ll_backend.layout.c"
    {
#line 5200 "ll_backend.layout.c"
      ll_backend__layout____Compare____label_layout_long_vars_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5203 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5205 "ll_backend.layout.c"
  }
#line 5207 "ll_backend.layout.c"
}

#line 5210 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_layout_no_vars_0_0_10001(
#line 5213 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5215 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5217 "ll_backend.layout.c"
{
#line 5219 "ll_backend.layout.c"
  {
#line 5221 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5224 "ll_backend.layout.c"
    {
#line 5226 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____label_layout_no_vars_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5229 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5231 "ll_backend.layout.c"
  }
#line 5233 "ll_backend.layout.c"
}

#line 5236 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_layout_no_vars_0_0_10001(
#line 5239 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5241 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5243 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5245 "ll_backend.layout.c"
{
#line 5247 "ll_backend.layout.c"
  {
#line 5249 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5252 "ll_backend.layout.c"
    {
#line 5254 "ll_backend.layout.c"
      ll_backend__layout____Compare____label_layout_no_vars_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5257 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5259 "ll_backend.layout.c"
  }
#line 5261 "ll_backend.layout.c"
}

#line 5264 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_layout_short_vars_0_0_10001(
#line 5267 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5269 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5271 "ll_backend.layout.c"
{
#line 5273 "ll_backend.layout.c"
  {
#line 5275 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5278 "ll_backend.layout.c"
    {
#line 5280 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____label_layout_short_vars_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5283 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5285 "ll_backend.layout.c"
  }
#line 5287 "ll_backend.layout.c"
}

#line 5290 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_layout_short_vars_0_0_10001(
#line 5293 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5295 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5297 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5299 "ll_backend.layout.c"
{
#line 5301 "ll_backend.layout.c"
  {
#line 5303 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5306 "ll_backend.layout.c"
    {
#line 5308 "ll_backend.layout.c"
      ll_backend__layout____Compare____label_layout_short_vars_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5311 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5313 "ll_backend.layout.c"
  }
#line 5315 "ll_backend.layout.c"
}

#line 5318 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_long_var_info_0_0_10001(
#line 5321 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5323 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5325 "ll_backend.layout.c"
{
#line 5327 "ll_backend.layout.c"
  {
#line 5329 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5332 "ll_backend.layout.c"
    {
#line 5334 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____label_long_var_info_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5337 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5339 "ll_backend.layout.c"
  }
#line 5341 "ll_backend.layout.c"
}

#line 5344 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_long_var_info_0_0_10001(
#line 5347 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5349 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5351 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5353 "ll_backend.layout.c"
{
#line 5355 "ll_backend.layout.c"
  {
#line 5357 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5360 "ll_backend.layout.c"
    {
#line 5362 "ll_backend.layout.c"
      ll_backend__layout____Compare____label_long_var_info_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5365 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5367 "ll_backend.layout.c"
  }
#line 5369 "ll_backend.layout.c"
}

#line 5372 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_short_var_info_0_0_10001(
#line 5375 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5377 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5379 "ll_backend.layout.c"
{
#line 5381 "ll_backend.layout.c"
  {
#line 5383 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5386 "ll_backend.layout.c"
    {
#line 5388 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____label_short_var_info_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5391 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5393 "ll_backend.layout.c"
  }
#line 5395 "ll_backend.layout.c"
}

#line 5398 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_short_var_info_0_0_10001(
#line 5401 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5403 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5405 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5407 "ll_backend.layout.c"
{
#line 5409 "ll_backend.layout.c"
  {
#line 5411 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5414 "ll_backend.layout.c"
    {
#line 5416 "ll_backend.layout.c"
      ll_backend__layout____Compare____label_short_var_info_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5419 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5421 "ll_backend.layout.c"
  }
#line 5423 "ll_backend.layout.c"
}

#line 5426 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_vars_0_0_10001(
#line 5429 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5431 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5433 "ll_backend.layout.c"
{
#line 5435 "ll_backend.layout.c"
  {
#line 5437 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5440 "ll_backend.layout.c"
    {
#line 5442 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____label_vars_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5445 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5447 "ll_backend.layout.c"
  }
#line 5449 "ll_backend.layout.c"
}

#line 5452 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_vars_0_0_10001(
#line 5455 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5457 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5459 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5461 "ll_backend.layout.c"
{
#line 5463 "ll_backend.layout.c"
  {
#line 5465 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5468 "ll_backend.layout.c"
    {
#line 5470 "ll_backend.layout.c"
      ll_backend__layout____Compare____label_vars_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5473 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5475 "ll_backend.layout.c"
  }
#line 5477 "ll_backend.layout.c"
}

#line 5480 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____layout_array_name_0_0_10001(
#line 5483 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5485 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5487 "ll_backend.layout.c"
{
#line 5489 "ll_backend.layout.c"
  {
#line 5491 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5494 "ll_backend.layout.c"
    {
#line 5496 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_array_name_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5499 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5501 "ll_backend.layout.c"
  }
#line 5503 "ll_backend.layout.c"
}

#line 5506 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____layout_array_name_0_0_10001(
#line 5509 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5511 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5513 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5515 "ll_backend.layout.c"
{
#line 5517 "ll_backend.layout.c"
  {
#line 5519 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5522 "ll_backend.layout.c"
    {
#line 5524 "ll_backend.layout.c"
      ll_backend__layout____Compare____layout_array_name_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5527 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5529 "ll_backend.layout.c"
  }
#line 5531 "ll_backend.layout.c"
}

#line 5534 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____layout_name_0_0_10001(
#line 5537 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5539 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5541 "ll_backend.layout.c"
{
#line 5543 "ll_backend.layout.c"
  {
#line 5545 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5548 "ll_backend.layout.c"
    {
#line 5550 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_name_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5553 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5555 "ll_backend.layout.c"
  }
#line 5557 "ll_backend.layout.c"
}

#line 5560 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____layout_name_0_0_10001(
#line 5563 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5565 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5567 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5569 "ll_backend.layout.c"
{
#line 5571 "ll_backend.layout.c"
  {
#line 5573 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5576 "ll_backend.layout.c"
    {
#line 5578 "ll_backend.layout.c"
      ll_backend__layout____Compare____layout_name_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5581 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5583 "ll_backend.layout.c"
  }
#line 5585 "ll_backend.layout.c"
}

#line 5588 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____layout_slot_name_0_0_10001(
#line 5591 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5593 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5595 "ll_backend.layout.c"
{
#line 5597 "ll_backend.layout.c"
  {
#line 5599 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5602 "ll_backend.layout.c"
    {
#line 5604 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_slot_name_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5607 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5609 "ll_backend.layout.c"
  }
#line 5611 "ll_backend.layout.c"
}

#line 5614 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____layout_slot_name_0_0_10001(
#line 5617 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5619 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5621 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5623 "ll_backend.layout.c"
{
#line 5625 "ll_backend.layout.c"
  {
#line 5627 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5630 "ll_backend.layout.c"
    {
#line 5632 "ll_backend.layout.c"
      ll_backend__layout____Compare____layout_slot_name_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5635 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5637 "ll_backend.layout.c"
  }
#line 5639 "ll_backend.layout.c"
}

#line 5642 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____maybe_proc_id_and_more_0_0_10001(
#line 5645 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5647 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5649 "ll_backend.layout.c"
{
#line 5651 "ll_backend.layout.c"
  {
#line 5653 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5656 "ll_backend.layout.c"
    {
#line 5658 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____maybe_proc_id_and_more_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5661 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5663 "ll_backend.layout.c"
  }
#line 5665 "ll_backend.layout.c"
}

#line 5668 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____maybe_proc_id_and_more_0_0_10001(
#line 5671 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5673 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5675 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5677 "ll_backend.layout.c"
{
#line 5679 "ll_backend.layout.c"
  {
#line 5681 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5684 "ll_backend.layout.c"
    {
#line 5686 "ll_backend.layout.c"
      ll_backend__layout____Compare____maybe_proc_id_and_more_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5689 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5691 "ll_backend.layout.c"
  }
#line 5693 "ll_backend.layout.c"
}

#line 5696 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____module_layout_data_0_0_10001(
#line 5699 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5701 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5703 "ll_backend.layout.c"
{
#line 5705 "ll_backend.layout.c"
  {
#line 5707 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5710 "ll_backend.layout.c"
    {
#line 5712 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____module_layout_data_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5715 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5717 "ll_backend.layout.c"
  }
#line 5719 "ll_backend.layout.c"
}

#line 5722 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____module_layout_data_0_0_10001(
#line 5725 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5727 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5729 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5731 "ll_backend.layout.c"
{
#line 5733 "ll_backend.layout.c"
  {
#line 5735 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5738 "ll_backend.layout.c"
    {
#line 5740 "ll_backend.layout.c"
      ll_backend__layout____Compare____module_layout_data_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5743 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5745 "ll_backend.layout.c"
  }
#line 5747 "ll_backend.layout.c"
}

#line 5750 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____module_layout_debug_0_0_10001(
#line 5753 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5755 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5757 "ll_backend.layout.c"
{
#line 5759 "ll_backend.layout.c"
  {
#line 5761 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5764 "ll_backend.layout.c"
    {
#line 5766 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____module_layout_debug_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5769 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5771 "ll_backend.layout.c"
  }
#line 5773 "ll_backend.layout.c"
}

#line 5776 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____module_layout_debug_0_0_10001(
#line 5779 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5781 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5783 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5785 "ll_backend.layout.c"
{
#line 5787 "ll_backend.layout.c"
  {
#line 5789 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5792 "ll_backend.layout.c"
    {
#line 5794 "ll_backend.layout.c"
      ll_backend__layout____Compare____module_layout_debug_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5797 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5799 "ll_backend.layout.c"
  }
#line 5801 "ll_backend.layout.c"
}

#line 5804 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____module_layout_deep_prof_0_0_10001(
#line 5807 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5809 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5811 "ll_backend.layout.c"
{
#line 5813 "ll_backend.layout.c"
  {
#line 5815 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5818 "ll_backend.layout.c"
    {
#line 5820 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____module_layout_deep_prof_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5823 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5825 "ll_backend.layout.c"
  }
#line 5827 "ll_backend.layout.c"
}

#line 5830 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____module_layout_deep_prof_0_0_10001(
#line 5833 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5835 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5837 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5839 "ll_backend.layout.c"
{
#line 5841 "ll_backend.layout.c"
  {
#line 5843 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5846 "ll_backend.layout.c"
    {
#line 5848 "ll_backend.layout.c"
      ll_backend__layout____Compare____module_layout_deep_prof_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5851 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5853 "ll_backend.layout.c"
  }
#line 5855 "ll_backend.layout.c"
}

#line 5858 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_data_0_0_10001(
#line 5861 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5863 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5865 "ll_backend.layout.c"
{
#line 5867 "ll_backend.layout.c"
  {
#line 5869 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5872 "ll_backend.layout.c"
    {
#line 5874 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____proc_layout_data_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5877 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5879 "ll_backend.layout.c"
  }
#line 5881 "ll_backend.layout.c"
}

#line 5884 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_data_0_0_10001(
#line 5887 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5889 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5891 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5893 "ll_backend.layout.c"
{
#line 5895 "ll_backend.layout.c"
  {
#line 5897 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5900 "ll_backend.layout.c"
    {
#line 5902 "ll_backend.layout.c"
      ll_backend__layout____Compare____proc_layout_data_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5905 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5907 "ll_backend.layout.c"
  }
#line 5909 "ll_backend.layout.c"
}

#line 5912 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_exec_trace_0_0_10001(
#line 5915 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5917 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5919 "ll_backend.layout.c"
{
#line 5921 "ll_backend.layout.c"
  {
#line 5923 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5926 "ll_backend.layout.c"
    {
#line 5928 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____proc_layout_exec_trace_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5931 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5933 "ll_backend.layout.c"
  }
#line 5935 "ll_backend.layout.c"
}

#line 5938 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_exec_trace_0_0_10001(
#line 5941 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5943 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5945 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5947 "ll_backend.layout.c"
{
#line 5949 "ll_backend.layout.c"
  {
#line 5951 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5954 "ll_backend.layout.c"
    {
#line 5956 "ll_backend.layout.c"
      ll_backend__layout____Compare____proc_layout_exec_trace_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5959 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5961 "ll_backend.layout.c"
  }
#line 5963 "ll_backend.layout.c"
}

#line 5966 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_kind_0_0_10001(
#line 5969 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5971 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5973 "ll_backend.layout.c"
{
#line 5975 "ll_backend.layout.c"
  {
#line 5977 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5980 "ll_backend.layout.c"
    {
#line 5982 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____proc_layout_kind_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5985 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5987 "ll_backend.layout.c"
  }
#line 5989 "ll_backend.layout.c"
}

#line 5992 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_kind_0_0_10001(
#line 5995 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5997 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5999 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 6001 "ll_backend.layout.c"
{
#line 6003 "ll_backend.layout.c"
  {
#line 6005 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 6008 "ll_backend.layout.c"
    {
#line 6010 "ll_backend.layout.c"
      ll_backend__layout____Compare____proc_layout_kind_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 6013 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 6015 "ll_backend.layout.c"
  }
#line 6017 "ll_backend.layout.c"
}

#line 6020 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_proc_static_0_0_10001(
#line 6023 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 6025 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 6027 "ll_backend.layout.c"
{
#line 6029 "ll_backend.layout.c"
  {
#line 6031 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 6034 "ll_backend.layout.c"
    {
#line 6036 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____proc_layout_proc_static_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 6039 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 6041 "ll_backend.layout.c"
  }
#line 6043 "ll_backend.layout.c"
}

#line 6046 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_proc_static_0_0_10001(
#line 6049 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 6051 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 6053 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 6055 "ll_backend.layout.c"
{
#line 6057 "ll_backend.layout.c"
  {
#line 6059 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 6062 "ll_backend.layout.c"
    {
#line 6064 "ll_backend.layout.c"
      ll_backend__layout____Compare____proc_layout_proc_static_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 6067 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 6069 "ll_backend.layout.c"
  }
#line 6071 "ll_backend.layout.c"
}

#line 6074 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_stack_traversal_0_0_10001(
#line 6077 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 6079 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 6081 "ll_backend.layout.c"
{
#line 6083 "ll_backend.layout.c"
  {
#line 6085 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 6088 "ll_backend.layout.c"
    {
#line 6090 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____proc_layout_stack_traversal_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 6093 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 6095 "ll_backend.layout.c"
  }
#line 6097 "ll_backend.layout.c"
}

#line 6100 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_stack_traversal_0_0_10001(
#line 6103 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 6105 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 6107 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 6109 "ll_backend.layout.c"
{
#line 6111 "ll_backend.layout.c"
  {
#line 6113 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 6116 "ll_backend.layout.c"
    {
#line 6118 "ll_backend.layout.c"
      ll_backend__layout____Compare____proc_layout_stack_traversal_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 6121 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 6123 "ll_backend.layout.c"
  }
#line 6125 "ll_backend.layout.c"
}

#line 6128 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_user_or_uci_0_0_10001(
#line 6131 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 6133 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 6135 "ll_backend.layout.c"
{
#line 6137 "ll_backend.layout.c"
  {
#line 6139 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 6142 "ll_backend.layout.c"
    {
#line 6144 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____proc_layout_user_or_uci_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 6147 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 6149 "ll_backend.layout.c"
  }
#line 6151 "ll_backend.layout.c"
}

#line 6154 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_user_or_uci_0_0_10001(
#line 6157 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 6159 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 6161 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 6163 "ll_backend.layout.c"
{
#line 6165 "ll_backend.layout.c"
  {
#line 6167 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 6170 "ll_backend.layout.c"
    {
#line 6172 "ll_backend.layout.c"
      ll_backend__layout____Compare____proc_layout_user_or_uci_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 6175 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 6177 "ll_backend.layout.c"
  }
#line 6179 "ll_backend.layout.c"
}

#line 6182 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____string_with_0s_0_0_10001(
#line 6185 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 6187 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 6189 "ll_backend.layout.c"
{
#line 6191 "ll_backend.layout.c"
  {
#line 6193 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 6196 "ll_backend.layout.c"
    {
#line 6198 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____string_with_0s_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 6201 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 6203 "ll_backend.layout.c"
  }
#line 6205 "ll_backend.layout.c"
}

#line 6208 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____string_with_0s_0_0_10001(
#line 6211 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 6213 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 6215 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 6217 "ll_backend.layout.c"
{
#line 6219 "ll_backend.layout.c"
  {
#line 6221 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 6224 "ll_backend.layout.c"
    {
#line 6226 "ll_backend.layout.c"
      ll_backend__layout____Compare____string_with_0s_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 6229 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 6231 "ll_backend.layout.c"
  }
#line 6233 "ll_backend.layout.c"
}

#line 6236 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____table_io_args_data_0_0_10001(
#line 6239 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 6241 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 6243 "ll_backend.layout.c"
{
#line 6245 "ll_backend.layout.c"
  {
#line 6247 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 6250 "ll_backend.layout.c"
    {
#line 6252 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____table_io_args_data_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 6255 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 6257 "ll_backend.layout.c"
  }
#line 6259 "ll_backend.layout.c"
}

#line 6262 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____table_io_args_data_0_0_10001(
#line 6265 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 6267 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 6269 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 6271 "ll_backend.layout.c"
{
#line 6273 "ll_backend.layout.c"
  {
#line 6275 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 6278 "ll_backend.layout.c"
    {
#line 6280 "ll_backend.layout.c"
      ll_backend__layout____Compare____table_io_args_data_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 6283 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 6285 "ll_backend.layout.c"
  }
#line 6287 "ll_backend.layout.c"
}

#line 6290 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____table_io_entry_data_0_0_10001(
#line 6293 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 6295 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 6297 "ll_backend.layout.c"
{
#line 6299 "ll_backend.layout.c"
  {
#line 6301 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 6304 "ll_backend.layout.c"
    {
#line 6306 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____table_io_entry_data_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 6309 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 6311 "ll_backend.layout.c"
  }
#line 6313 "ll_backend.layout.c"
}

#line 6316 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____table_io_entry_data_0_0_10001(
#line 6319 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 6321 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 6323 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 6325 "ll_backend.layout.c"
{
#line 6327 "ll_backend.layout.c"
  {
#line 6329 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 6332 "ll_backend.layout.c"
    {
#line 6334 "ll_backend.layout.c"
      ll_backend__layout____Compare____table_io_entry_data_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 6337 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 6339 "ll_backend.layout.c"
  }
#line 6341 "ll_backend.layout.c"
}

#line 6344 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____user_event_data_0_0_10001(
#line 6347 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 6349 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 6351 "ll_backend.layout.c"
{
#line 6353 "ll_backend.layout.c"
  {
#line 6355 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 6358 "ll_backend.layout.c"
    {
#line 6360 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____user_event_data_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 6363 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 6365 "ll_backend.layout.c"
  }
#line 6367 "ll_backend.layout.c"
}

#line 6370 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____user_event_data_0_0_10001(
#line 6373 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 6375 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 6377 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 6379 "ll_backend.layout.c"
{
#line 6381 "ll_backend.layout.c"
  {
#line 6383 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 6386 "ll_backend.layout.c"
    {
#line 6388 "ll_backend.layout.c"
      ll_backend__layout____Compare____user_event_data_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 6391 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 6393 "ll_backend.layout.c"
  }
#line 6395 "ll_backend.layout.c"
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
#line 6422 "ll_backend.layout.c"
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
#line 6448 "ll_backend.layout.c"
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
#line 6468 "ll_backend.layout.c"
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

#line 6535 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_3_3 == ll_backend__layout__V_6_6);
#line 73 "layout.m"
        if (ll_backend__layout__succeeded)
#line 73 "layout.m"
          {
#line 6541 "ll_backend.layout.c"
            {
#line 6543 "ll_backend.layout.c"
              ll_backend__layout__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__layout__V_4_4, ll_backend__layout__V_7_7);
            }
#line 73 "layout.m"
            if (ll_backend__layout__succeeded)
#line 6548 "ll_backend.layout.c"
              {
#line 6550 "ll_backend.layout.c"
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

#line 200 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____table_io_entry_data_0_0(
#line 200 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 200 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 200 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 200 "layout.m"
{
#line 200 "layout.m"
  {
#line 200 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 200 "layout.m"
    MR_Integer ll_backend__layout__CastX_9 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 200 "layout.m"
    MR_Integer ll_backend__layout__CastY_10 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 200 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_9 == ll_backend__layout__CastY_10);
#line 200 "layout.m"
    if (ll_backend__layout__succeeded)
#line 6588 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 200 "layout.m"
    else
#line 200 "layout.m"
      {
#line 200 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 200 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 200 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 200 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 200 "layout.m"
        MR_Word ll_backend__layout__V_8_8;

#line 200 "layout.m"
        {
#line 200 "layout.m"
          ll_backend__layout____Compare____layout_name_0_0(&ll_backend__layout__V_8_8, ll_backend__layout__V_4_4, ll_backend__layout__V_6_6);
        }
#line 6610 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_8_8 == (MR_Integer) 0);
#line 200 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 200 "layout.m"
        if (ll_backend__layout__succeeded)
#line 200 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_8_8;
#line 200 "layout.m"
        else
#line 200 "layout.m"
          {
#line 200 "layout.m"
            {
#line 200 "layout.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[15], ll_backend__layout__HeadVar__1_1, ((MR_Box) (ll_backend__layout__V_5_5)), ((MR_Box) (ll_backend__layout__V_7_7)));
#line 200 "layout.m"
              return;
            }
#line 200 "layout.m"
          }
#line 200 "layout.m"
      }
#line 200 "layout.m"
  }
#line 200 "layout.m"
}

#line 200 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____table_io_entry_data_0_0(
#line 200 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 200 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 200 "layout.m"
{
#line 200 "layout.m"
  {
#line 200 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 200 "layout.m"
    MR_Integer ll_backend__layout__CastX_7 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 200 "layout.m"
    MR_Integer ll_backend__layout__CastY_8 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 200 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_7 == ll_backend__layout__CastY_8);
#line 200 "layout.m"
    if (ll_backend__layout__succeeded)
#line 200 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 200 "layout.m"
    else
#line 200 "layout.m"
      {
#line 200 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_9_9;
#line 200 "layout.m"
        MR_Word ll_backend__layout__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 200 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 200 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 200 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));

#line 6677 "ll_backend.layout.c"
        {
#line 6679 "ll_backend.layout.c"
          ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_name_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_5_5);
        }
#line 200 "layout.m"
        if (ll_backend__layout__succeeded)
#line 200 "layout.m"
          {
#line 6686 "ll_backend.layout.c"
            ll_backend__layout__TypeInfo_9_9 = (MR_Word) &ll_backend__layout_scalar_common_1[15];
#line 6688 "ll_backend.layout.c"
            {
#line 6690 "ll_backend.layout.c"
              return ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_9_9, ((MR_Box) (ll_backend__layout__V_4_4)), ((MR_Box) (ll_backend__layout__V_6_6)));
            }
#line 200 "layout.m"
          }
#line 200 "layout.m"
      }
#line 200 "layout.m"
    return ll_backend__layout__succeeded;
#line 200 "layout.m"
  }
#line 200 "layout.m"
}

#line 176 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____table_io_args_data_0_0(
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
    MR_Integer ll_backend__layout__CastX_12 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 176 "layout.m"
    MR_Integer ll_backend__layout__CastY_13 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 176 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_12 == ll_backend__layout__CastY_13);
#line 176 "layout.m"
    if (ll_backend__layout__succeeded)
#line 6728 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 176 "layout.m"
    else
#line 176 "layout.m"
      {
#line 176 "layout.m"
        MR_Integer ll_backend__layout__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 176 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 176 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 176 "layout.m"
        MR_Integer ll_backend__layout__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 176 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 176 "layout.m"
        MR_Word ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 176 "layout.m"
        MR_Word ll_backend__layout__V_10_10;

#line 176 "layout.m"
        {
#line 176 "layout.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_10_10, ll_backend__layout__V_4_4, ll_backend__layout__V_7_7);
        }
#line 6754 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_10_10 == (MR_Integer) 0);
#line 176 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 176 "layout.m"
        if (ll_backend__layout__succeeded)
#line 176 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_10_10;
#line 176 "layout.m"
        else
#line 176 "layout.m"
          {
#line 176 "layout.m"
            MR_Word ll_backend__layout__V_11_11;

#line 176 "layout.m"
            {
#line 176 "layout.m"
              ll_backend__llds____Compare____rval_0_0(&ll_backend__layout__V_11_11, ll_backend__layout__V_5_5, ll_backend__layout__V_8_8);
            }
#line 6774 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_11_11 == (MR_Integer) 0);
#line 176 "layout.m"
            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 176 "layout.m"
            if (ll_backend__layout__succeeded)
#line 176 "layout.m"
              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_11_11;
#line 176 "layout.m"
            else
#line 176 "layout.m"
              {
#line 176 "layout.m"
                ll_backend__llds____Compare____rval_0_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_6_6, ll_backend__layout__V_9_9);
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
MR_bool MR_CALL 
ll_backend__layout____Unify____table_io_args_data_0_0(
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
    MR_Integer ll_backend__layout__CastX_9 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 176 "layout.m"
    MR_Integer ll_backend__layout__CastY_10 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 176 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_9 == ll_backend__layout__CastY_10);
#line 176 "layout.m"
    if (ll_backend__layout__succeeded)
#line 176 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 176 "layout.m"
    else
#line 176 "layout.m"
      {
#line 176 "layout.m"
        MR_Integer ll_backend__layout__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 176 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 176 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 176 "layout.m"
        MR_Integer ll_backend__layout__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 176 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 176 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));

#line 6841 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_3_3 == ll_backend__layout__V_6_6);
#line 176 "layout.m"
        if (ll_backend__layout__succeeded)
#line 176 "layout.m"
          {
#line 6847 "ll_backend.layout.c"
            {
#line 6849 "ll_backend.layout.c"
              ll_backend__layout__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__layout__V_4_4, ll_backend__layout__V_7_7);
            }
#line 176 "layout.m"
            if (ll_backend__layout__succeeded)
#line 6854 "ll_backend.layout.c"
              {
#line 6856 "ll_backend.layout.c"
                return ll_backend__layout__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__layout__V_5_5, ll_backend__layout__V_8_8);
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

#line 278 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____string_with_0s_0_0(
#line 278 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 278 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 278 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 278 "layout.m"
{
#line 278 "layout.m"
  {
#line 278 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 278 "layout.m"
    MR_Integer ll_backend__layout__CastX_6 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 278 "layout.m"
    MR_Integer ll_backend__layout__CastY_7 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 278 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_6 == ll_backend__layout__CastY_7);
#line 278 "layout.m"
    if (ll_backend__layout__succeeded)
#line 6894 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 278 "layout.m"
    else
#line 278 "layout.m"
      {
#line 278 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = (MR_Word) ll_backend__layout__HeadVar__2_2;
#line 278 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = (MR_Word) ll_backend__layout__HeadVar__3_3;

#line 278 "layout.m"
        {
#line 278 "layout.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[14], ll_backend__layout__HeadVar__1_1, ((MR_Box) (ll_backend__layout__V_4_4)), ((MR_Box) (ll_backend__layout__V_5_5)));
#line 278 "layout.m"
          return;
        }
#line 278 "layout.m"
      }
#line 278 "layout.m"
  }
#line 278 "layout.m"
}

#line 278 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____string_with_0s_0_0(
#line 278 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 278 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 278 "layout.m"
{
#line 278 "layout.m"
  {
#line 278 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 278 "layout.m"
    MR_Integer ll_backend__layout__CastX_5 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 278 "layout.m"
    MR_Integer ll_backend__layout__CastY_6 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 278 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_5 == ll_backend__layout__CastY_6);
#line 278 "layout.m"
    if (ll_backend__layout__succeeded)
#line 278 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 278 "layout.m"
    else
#line 278 "layout.m"
      {
#line 278 "layout.m"
        MR_Word ll_backend__layout__V_3_3 = (MR_Word) ll_backend__layout__HeadVar__1_1;
#line 278 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = (MR_Word) ll_backend__layout__HeadVar__2_2;

#line 6952 "ll_backend.layout.c"
        {
#line 6954 "ll_backend.layout.c"
          return ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__layout_scalar_common_1[14], ((MR_Box) (ll_backend__layout__V_3_3)), ((MR_Box) (ll_backend__layout__V_4_4)));
        }
#line 278 "layout.m"
      }
#line 278 "layout.m"
    return ll_backend__layout__succeeded;
#line 278 "layout.m"
  }
#line 278 "layout.m"
}

#line 393 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____proc_layout_user_or_uci_0_0(
#line 393 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 393 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 393 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 393 "layout.m"
{
#line 393 "layout.m"
  {
#line 393 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 393 "layout.m"
    MR_Integer ll_backend__layout__Cast_HeadVar1_4 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 393 "layout.m"
    MR_Integer ll_backend__layout__Cast_HeadVar2_5 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 393 "layout.m"
    {
#line 393 "layout.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__Cast_HeadVar1_4, ll_backend__layout__Cast_HeadVar2_5);
#line 393 "layout.m"
      return;
    }
#line 393 "layout.m"
  }
#line 393 "layout.m"
}

#line 393 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_user_or_uci_0_0(
#line 393 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_1,
#line 393 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 393 "layout.m"
{
#line 7007 "ll_backend.layout.c"
  {
#line 7009 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded = (ll_backend__layout__HeadVar__2_1 == ll_backend__layout__HeadVar__2_2);

#line 7012 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 7014 "ll_backend.layout.c"
  }
#line 393 "layout.m"
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
#line 7043 "ll_backend.layout.c"
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
#line 7073 "ll_backend.layout.c"
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
#line 7093 "ll_backend.layout.c"
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
#line 7113 "ll_backend.layout.c"
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

#line 7197 "ll_backend.layout.c"
        {
#line 7199 "ll_backend.layout.c"
          ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__layout_scalar_common_1[13], ((MR_Box) (ll_backend__layout__V_3_3)), ((MR_Box) (ll_backend__layout__V_7_7)));
        }
#line 138 "layout.m"
        if (ll_backend__layout__succeeded)
#line 138 "layout.m"
          {
#line 7206 "ll_backend.layout.c"
            ll_backend__layout__TypeInfo_14_14 = (MR_Word) &ll_backend__layout_scalar_common_1[2];
#line 7208 "ll_backend.layout.c"
            {
#line 7210 "ll_backend.layout.c"
              ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_14_14, ((MR_Box) (ll_backend__layout__V_4_4)), ((MR_Box) (ll_backend__layout__V_8_8)));
            }
#line 138 "layout.m"
            if (ll_backend__layout__succeeded)
#line 138 "layout.m"
              {
#line 7217 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_5_5 == ll_backend__layout__V_9_9);
#line 138 "layout.m"
                if (ll_backend__layout__succeeded)
#line 7221 "ll_backend.layout.c"
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
#line 7260 "ll_backend.layout.c"
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
#line 7298 "ll_backend.layout.c"
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
#line 7318 "ll_backend.layout.c"
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
#line 7342 "ll_backend.layout.c"
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
#line 7362 "ll_backend.layout.c"
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
#line 7382 "ll_backend.layout.c"
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

#line 7475 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (strcmp(ll_backend__layout__V_3_3, ll_backend__layout__V_9_9) == 0);
#line 166 "layout.m"
        if (ll_backend__layout__succeeded)
#line 166 "layout.m"
          {
#line 7481 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 == ll_backend__layout__V_10_10);
#line 166 "layout.m"
            if (ll_backend__layout__succeeded)
#line 166 "layout.m"
              {
#line 7487 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_5_5 == ll_backend__layout__V_11_11);
#line 166 "layout.m"
                if (ll_backend__layout__succeeded)
#line 166 "layout.m"
                  {
#line 7493 "ll_backend.layout.c"
                    {
#line 7495 "ll_backend.layout.c"
                      ll_backend__layout__succeeded = ll_backend__layout____Unify____deep_excp_slots_0_0(ll_backend__layout__V_6_6, ll_backend__layout__V_12_12);
                    }
#line 166 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 166 "layout.m"
                      {
#line 7502 "ll_backend.layout.c"
                        ll_backend__layout__TypeInfo_17_17 = (MR_Word) &ll_backend__layout_scalar_common_1[12];
#line 7504 "ll_backend.layout.c"
                        {
#line 7506 "ll_backend.layout.c"
                          ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_17_17, ((MR_Box) (ll_backend__layout__V_7_7)), ((MR_Box) (ll_backend__layout__V_13_13)));
                        }
#line 166 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 166 "layout.m"
                          {
#line 7513 "ll_backend.layout.c"
                            ll_backend__layout__TypeInfo_18_18 = (MR_Word) &ll_backend__layout_scalar_common_1[12];
#line 7515 "ll_backend.layout.c"
                            {
#line 7517 "ll_backend.layout.c"
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

#line 389 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____proc_layout_kind_0_0(
#line 389 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 389 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 389 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 389 "layout.m"
{
#line 389 "layout.m"
  {
#line 389 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 389 "layout.m"
    MR_Integer ll_backend__layout__CastX_8 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 389 "layout.m"
    MR_Integer ll_backend__layout__CastY_9 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 389 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_8 == ll_backend__layout__CastY_9);
#line 389 "layout.m"
    if (ll_backend__layout__succeeded)
#line 7563 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 389 "layout.m"
    else
#line 389 "layout.m"
      if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 389 "layout.m"
        if ((ll_backend__layout__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 389 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 389 "layout.m"
        else
#line 7575 "ll_backend.layout.c"
          *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 1;
#line 389 "layout.m"
      else
#line 389 "layout.m"
        {
#line 389 "layout.m"
          MR_Word ll_backend__layout__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));

#line 389 "layout.m"
          if ((ll_backend__layout__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7586 "ll_backend.layout.c"
            *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 2;
#line 389 "layout.m"
          else
#line 389 "layout.m"
            {
#line 389 "layout.m"
              MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 389 "layout.m"
              MR_Integer ll_backend__layout__V_12_12 = (MR_Integer) ll_backend__layout__V_11_11;
#line 389 "layout.m"
              MR_Integer ll_backend__layout__V_13_13 = (MR_Integer) ll_backend__layout__V_7_7;

#line 389 "layout.m"
              {
#line 389 "layout.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_12_12, ll_backend__layout__V_13_13);
#line 389 "layout.m"
                return;
              }
#line 389 "layout.m"
            }
#line 389 "layout.m"
        }
#line 389 "layout.m"
  }
#line 389 "layout.m"
}

#line 389 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_kind_0_0(
#line 389 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 389 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 389 "layout.m"
{
#line 389 "layout.m"
  {
#line 389 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 389 "layout.m"
    MR_Integer ll_backend__layout__CastX_7 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 389 "layout.m"
    MR_Integer ll_backend__layout__CastY_8 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 389 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_7 == ll_backend__layout__CastY_8);
#line 389 "layout.m"
    if (ll_backend__layout__succeeded)
#line 389 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 389 "layout.m"
    else
#line 389 "layout.m"
      if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 389 "layout.m"
        {
#line 389 "layout.m"
          MR_Integer ll_backend__layout__CastX_3 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 389 "layout.m"
          MR_Integer ll_backend__layout__CastY_4 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 389 "layout.m"
          ll_backend__layout__succeeded = (ll_backend__layout__CastY_4 == ll_backend__layout__CastX_3);
#line 389 "layout.m"
        }
#line 389 "layout.m"
      else
#line 389 "layout.m"
        {
#line 389 "layout.m"
          MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 389 "layout.m"
          MR_Word ll_backend__layout__V_6_6;

#line 389 "layout.m"
          ll_backend__layout__succeeded = ((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 389 "layout.m"
          if (ll_backend__layout__succeeded)
#line 389 "layout.m"
            {
#line 389 "layout.m"
              ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 7671 "ll_backend.layout.c"
              ll_backend__layout__succeeded = (ll_backend__layout__V_5_5 == ll_backend__layout__V_6_6);
#line 389 "layout.m"
            }
#line 389 "layout.m"
        }
#line 389 "layout.m"
    return ll_backend__layout__succeeded;
#line 389 "layout.m"
  }
#line 389 "layout.m"
}

#line 211 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____proc_layout_exec_trace_0_0(
#line 211 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 211 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 211 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 211 "layout.m"
{
#line 211 "layout.m"
  {
#line 211 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 211 "layout.m"
    MR_Integer ll_backend__layout__CastX_60 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 211 "layout.m"
    MR_Integer ll_backend__layout__CastY_61 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 211 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_60 == ll_backend__layout__CastY_61);
#line 211 "layout.m"
    if (ll_backend__layout__succeeded)
#line 7708 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 211 "layout.m"
    else
#line 211 "layout.m"
      {
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 211 "layout.m"
        MR_Integer ll_backend__layout__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 4)));
#line 211 "layout.m"
        MR_Integer ll_backend__layout__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 5)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 6)));
#line 211 "layout.m"
        MR_Integer ll_backend__layout__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 7)));
#line 211 "layout.m"
        MR_Integer ll_backend__layout__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 8)));
#line 211 "layout.m"
        MR_Integer ll_backend__layout__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 9)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 10)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 11)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 12)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 13)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 14)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 15)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 16)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 17)));
#line 211 "layout.m"
        MR_Integer ll_backend__layout__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 18)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 211 "layout.m"
        MR_Integer ll_backend__layout__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 3)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 4)));
#line 211 "layout.m"
        MR_Integer ll_backend__layout__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 5)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 6)));
#line 211 "layout.m"
        MR_Integer ll_backend__layout__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 7)));
#line 211 "layout.m"
        MR_Integer ll_backend__layout__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 8)));
#line 211 "layout.m"
        MR_Integer ll_backend__layout__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 9)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 10)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 11)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 12)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 13)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 14)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 15)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 16)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 17)));
#line 211 "layout.m"
        MR_Integer ll_backend__layout__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 18)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_42_42;

#line 211 "layout.m"
        {
#line 211 "layout.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[3], &ll_backend__layout__V_42_42, ((MR_Box) (ll_backend__layout__V_4_4)), ((MR_Box) (ll_backend__layout__V_23_23)));
        }
#line 7798 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_42_42 == (MR_Integer) 0);
#line 211 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 211 "layout.m"
        if (ll_backend__layout__succeeded)
#line 211 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_42_42;
#line 211 "layout.m"
        else
#line 211 "layout.m"
          {
#line 211 "layout.m"
            MR_Word ll_backend__layout__V_43_43;

#line 211 "layout.m"
            {
#line 211 "layout.m"
              ll_backend__layout____Compare____layout_slot_name_0_0(&ll_backend__layout__V_43_43, ll_backend__layout__V_5_5, ll_backend__layout__V_24_24);
            }
#line 7818 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_43_43 == (MR_Integer) 0);
#line 211 "layout.m"
            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 211 "layout.m"
            if (ll_backend__layout__succeeded)
#line 211 "layout.m"
              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_43_43;
#line 211 "layout.m"
            else
#line 211 "layout.m"
              {
#line 211 "layout.m"
                MR_Word ll_backend__layout__V_44_44;

#line 211 "layout.m"
                {
#line 211 "layout.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_44_44, ll_backend__layout__V_6_6, ll_backend__layout__V_25_25);
                }
#line 7838 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_44_44 == (MR_Integer) 0);
#line 211 "layout.m"
                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 211 "layout.m"
                if (ll_backend__layout__succeeded)
#line 211 "layout.m"
                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_44_44;
#line 211 "layout.m"
                else
#line 211 "layout.m"
                  {
#line 211 "layout.m"
                    MR_Word ll_backend__layout__V_45_45;

#line 211 "layout.m"
                    {
#line 211 "layout.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[11], &ll_backend__layout__V_45_45, ((MR_Box) (ll_backend__layout__V_7_7)), ((MR_Box) (ll_backend__layout__V_26_26)));
                    }
#line 7858 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = (ll_backend__layout__V_45_45 == (MR_Integer) 0);
#line 211 "layout.m"
                    ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 211 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 211 "layout.m"
                      *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_45_45;
#line 211 "layout.m"
                    else
#line 211 "layout.m"
                      {
#line 211 "layout.m"
                        MR_Word ll_backend__layout__V_46_46;

#line 211 "layout.m"
                        {
#line 211 "layout.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[3], &ll_backend__layout__V_46_46, ((MR_Box) (ll_backend__layout__V_8_8)), ((MR_Box) (ll_backend__layout__V_27_27)));
                        }
#line 7878 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = (ll_backend__layout__V_46_46 == (MR_Integer) 0);
#line 211 "layout.m"
                        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 211 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 211 "layout.m"
                          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_46_46;
#line 211 "layout.m"
                        else
#line 211 "layout.m"
                          {
#line 211 "layout.m"
                            MR_Word ll_backend__layout__V_47_47;

#line 211 "layout.m"
                            {
#line 211 "layout.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_47_47, ll_backend__layout__V_9_9, ll_backend__layout__V_28_28);
                            }
#line 7898 "ll_backend.layout.c"
                            ll_backend__layout__succeeded = (ll_backend__layout__V_47_47 == (MR_Integer) 0);
#line 211 "layout.m"
                            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 211 "layout.m"
                            if (ll_backend__layout__succeeded)
#line 211 "layout.m"
                              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_47_47;
#line 211 "layout.m"
                            else
#line 211 "layout.m"
                              {
#line 211 "layout.m"
                                MR_Word ll_backend__layout__V_48_48;

#line 211 "layout.m"
                                {
#line 211 "layout.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[3], &ll_backend__layout__V_48_48, ((MR_Box) (ll_backend__layout__V_10_10)), ((MR_Box) (ll_backend__layout__V_29_29)));
                                }
#line 7918 "ll_backend.layout.c"
                                ll_backend__layout__succeeded = (ll_backend__layout__V_48_48 == (MR_Integer) 0);
#line 211 "layout.m"
                                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 211 "layout.m"
                                if (ll_backend__layout__succeeded)
#line 211 "layout.m"
                                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_48_48;
#line 211 "layout.m"
                                else
#line 211 "layout.m"
                                  {
#line 211 "layout.m"
                                    MR_Word ll_backend__layout__V_49_49;

#line 211 "layout.m"
                                    {
#line 211 "layout.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_49_49, ll_backend__layout__V_11_11, ll_backend__layout__V_30_30);
                                    }
#line 7938 "ll_backend.layout.c"
                                    ll_backend__layout__succeeded = (ll_backend__layout__V_49_49 == (MR_Integer) 0);
#line 211 "layout.m"
                                    ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 211 "layout.m"
                                    if (ll_backend__layout__succeeded)
#line 211 "layout.m"
                                      *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_49_49;
#line 211 "layout.m"
                                    else
#line 211 "layout.m"
                                      {
#line 211 "layout.m"
                                        MR_Word ll_backend__layout__V_50_50;

#line 211 "layout.m"
                                        {
#line 211 "layout.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_50_50, ll_backend__layout__V_12_12, ll_backend__layout__V_31_31);
                                        }
#line 7958 "ll_backend.layout.c"
                                        ll_backend__layout__succeeded = (ll_backend__layout__V_50_50 == (MR_Integer) 0);
#line 211 "layout.m"
                                        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 211 "layout.m"
                                        if (ll_backend__layout__succeeded)
#line 211 "layout.m"
                                          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_50_50;
#line 211 "layout.m"
                                        else
#line 211 "layout.m"
                                          {
#line 211 "layout.m"
                                            MR_Word ll_backend__layout__V_51_51;

#line 211 "layout.m"
                                            {
#line 211 "layout.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_51_51, ll_backend__layout__V_13_13, ll_backend__layout__V_32_32);
                                            }
#line 7978 "ll_backend.layout.c"
                                            ll_backend__layout__succeeded = (ll_backend__layout__V_51_51 == (MR_Integer) 0);
#line 211 "layout.m"
                                            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 211 "layout.m"
                                            if (ll_backend__layout__succeeded)
#line 211 "layout.m"
                                              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_51_51;
#line 211 "layout.m"
                                            else
#line 211 "layout.m"
                                              {
#line 211 "layout.m"
                                                MR_Word ll_backend__layout__V_52_52;

#line 211 "layout.m"
                                                {
#line 211 "layout.m"
                                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[2], &ll_backend__layout__V_52_52, ((MR_Box) (ll_backend__layout__V_14_14)), ((MR_Box) (ll_backend__layout__V_33_33)));
                                                }
#line 7998 "ll_backend.layout.c"
                                                ll_backend__layout__succeeded = (ll_backend__layout__V_52_52 == (MR_Integer) 0);
#line 211 "layout.m"
                                                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 211 "layout.m"
                                                if (ll_backend__layout__succeeded)
#line 211 "layout.m"
                                                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_52_52;
#line 211 "layout.m"
                                                else
#line 211 "layout.m"
                                                  {
#line 211 "layout.m"
                                                    MR_Word ll_backend__layout__V_53_53;

#line 211 "layout.m"
                                                    {
#line 211 "layout.m"
                                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[2], &ll_backend__layout__V_53_53, ((MR_Box) (ll_backend__layout__V_15_15)), ((MR_Box) (ll_backend__layout__V_34_34)));
                                                    }
#line 8018 "ll_backend.layout.c"
                                                    ll_backend__layout__succeeded = (ll_backend__layout__V_53_53 == (MR_Integer) 0);
#line 211 "layout.m"
                                                    ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 211 "layout.m"
                                                    if (ll_backend__layout__succeeded)
#line 211 "layout.m"
                                                      *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_53_53;
#line 211 "layout.m"
                                                    else
#line 211 "layout.m"
                                                      {
#line 211 "layout.m"
                                                        MR_Word ll_backend__layout__V_54_54;

#line 211 "layout.m"
                                                        {
#line 211 "layout.m"
                                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[2], &ll_backend__layout__V_54_54, ((MR_Box) (ll_backend__layout__V_16_16)), ((MR_Box) (ll_backend__layout__V_35_35)));
                                                        }
#line 8038 "ll_backend.layout.c"
                                                        ll_backend__layout__succeeded = (ll_backend__layout__V_54_54 == (MR_Integer) 0);
#line 211 "layout.m"
                                                        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 211 "layout.m"
                                                        if (ll_backend__layout__succeeded)
#line 211 "layout.m"
                                                          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_54_54;
#line 211 "layout.m"
                                                        else
#line 211 "layout.m"
                                                          {
#line 211 "layout.m"
                                                            MR_Word ll_backend__layout__V_55_55;

#line 211 "layout.m"
                                                            {
#line 211 "layout.m"
                                                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[2], &ll_backend__layout__V_55_55, ((MR_Box) (ll_backend__layout__V_17_17)), ((MR_Box) (ll_backend__layout__V_36_36)));
                                                            }
#line 8058 "ll_backend.layout.c"
                                                            ll_backend__layout__succeeded = (ll_backend__layout__V_55_55 == (MR_Integer) 0);
#line 211 "layout.m"
                                                            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 211 "layout.m"
                                                            if (ll_backend__layout__succeeded)
#line 211 "layout.m"
                                                              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_55_55;
#line 211 "layout.m"
                                                            else
#line 211 "layout.m"
                                                              {
#line 211 "layout.m"
                                                                MR_Word ll_backend__layout__V_56_56;

#line 211 "layout.m"
                                                                {
#line 211 "layout.m"
                                                                  parse_tree__prog_data____Compare____eval_method_0_0(&ll_backend__layout__V_56_56, ll_backend__layout__V_18_18, ll_backend__layout__V_37_37);
                                                                }
#line 8078 "ll_backend.layout.c"
                                                                ll_backend__layout__succeeded = (ll_backend__layout__V_56_56 == (MR_Integer) 0);
#line 211 "layout.m"
                                                                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 211 "layout.m"
                                                                if (ll_backend__layout__succeeded)
#line 211 "layout.m"
                                                                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_56_56;
#line 211 "layout.m"
                                                                else
#line 211 "layout.m"
                                                                  {
#line 211 "layout.m"
                                                                    MR_Word ll_backend__layout__V_57_57;

#line 211 "layout.m"
                                                                    {
#line 211 "layout.m"
                                                                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[2], &ll_backend__layout__V_57_57, ((MR_Box) (ll_backend__layout__V_19_19)), ((MR_Box) (ll_backend__layout__V_38_38)));
                                                                    }
#line 8098 "ll_backend.layout.c"
                                                                    ll_backend__layout__succeeded = (ll_backend__layout__V_57_57 == (MR_Integer) 0);
#line 211 "layout.m"
                                                                    ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 211 "layout.m"
                                                                    if (ll_backend__layout__succeeded)
#line 211 "layout.m"
                                                                      *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_57_57;
#line 211 "layout.m"
                                                                    else
#line 211 "layout.m"
                                                                      {
#line 211 "layout.m"
                                                                        MR_Word ll_backend__layout__V_58_58;

#line 211 "layout.m"
                                                                        {
#line 211 "layout.m"
                                                                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[2], &ll_backend__layout__V_58_58, ((MR_Box) (ll_backend__layout__V_20_20)), ((MR_Box) (ll_backend__layout__V_39_39)));
                                                                        }
#line 8118 "ll_backend.layout.c"
                                                                        ll_backend__layout__succeeded = (ll_backend__layout__V_58_58 == (MR_Integer) 0);
#line 211 "layout.m"
                                                                        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 211 "layout.m"
                                                                        if (ll_backend__layout__succeeded)
#line 211 "layout.m"
                                                                          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_58_58;
#line 211 "layout.m"
                                                                        else
#line 211 "layout.m"
                                                                          {
#line 211 "layout.m"
                                                                            MR_Word ll_backend__layout__V_59_59;

#line 211 "layout.m"
                                                                            {
#line 211 "layout.m"
                                                                              libs__trace_params____Compare____trace_level_0_0(&ll_backend__layout__V_59_59, ll_backend__layout__V_21_21, ll_backend__layout__V_40_40);
                                                                            }
#line 8138 "ll_backend.layout.c"
                                                                            ll_backend__layout__succeeded = (ll_backend__layout__V_59_59 == (MR_Integer) 0);
#line 211 "layout.m"
                                                                            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 211 "layout.m"
                                                                            if (ll_backend__layout__succeeded)
#line 211 "layout.m"
                                                                              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_59_59;
#line 211 "layout.m"
                                                                            else
#line 211 "layout.m"
                                                                              {
#line 211 "layout.m"
                                                                                mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_22_22, ll_backend__layout__V_41_41);
#line 211 "layout.m"
                                                                                return;
                                                                              }
#line 211 "layout.m"
                                                                          }
#line 211 "layout.m"
                                                                      }
#line 211 "layout.m"
                                                                  }
#line 211 "layout.m"
                                                              }
#line 211 "layout.m"
                                                          }
#line 211 "layout.m"
                                                      }
#line 211 "layout.m"
                                                  }
#line 211 "layout.m"
                                              }
#line 211 "layout.m"
                                          }
#line 211 "layout.m"
                                      }
#line 211 "layout.m"
                                  }
#line 211 "layout.m"
                              }
#line 211 "layout.m"
                          }
#line 211 "layout.m"
                      }
#line 211 "layout.m"
                  }
#line 211 "layout.m"
              }
#line 211 "layout.m"
          }
#line 211 "layout.m"
      }
#line 211 "layout.m"
  }
#line 211 "layout.m"
}

#line 211 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_exec_trace_0_0(
#line 211 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 211 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 211 "layout.m"
{
#line 211 "layout.m"
  {
#line 211 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 211 "layout.m"
    MR_Integer ll_backend__layout__CastX_41 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 211 "layout.m"
    MR_Integer ll_backend__layout__CastY_42 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 211 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_41 == ll_backend__layout__CastY_42);
#line 211 "layout.m"
    if (ll_backend__layout__succeeded)
#line 211 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 211 "layout.m"
    else
#line 211 "layout.m"
      {
#line 211 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_44_44;
#line 211 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_45_45;
#line 211 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_46_46;
#line 211 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_47_47;
#line 211 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_48_48;
#line 211 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_49_49;
#line 211 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_50_50;
#line 211 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_52_52;
#line 211 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_53_53;
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 211 "layout.m"
        MR_Integer ll_backend__layout__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 3)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 4)));
#line 211 "layout.m"
        MR_Integer ll_backend__layout__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 5)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 6)));
#line 211 "layout.m"
        MR_Integer ll_backend__layout__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 7)));
#line 211 "layout.m"
        MR_Integer ll_backend__layout__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 8)));
#line 211 "layout.m"
        MR_Integer ll_backend__layout__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 9)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 10)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 11)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 12)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 13)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 14)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 15)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 16)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 17)));
#line 211 "layout.m"
        MR_Integer ll_backend__layout__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 18)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 211 "layout.m"
        MR_Integer ll_backend__layout__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 4)));
#line 211 "layout.m"
        MR_Integer ll_backend__layout__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 5)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 6)));
#line 211 "layout.m"
        MR_Integer ll_backend__layout__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 7)));
#line 211 "layout.m"
        MR_Integer ll_backend__layout__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 8)));
#line 211 "layout.m"
        MR_Integer ll_backend__layout__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 9)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 10)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 11)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 12)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 13)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 14)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 15)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 16)));
#line 211 "layout.m"
        MR_Word ll_backend__layout__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 17)));
#line 211 "layout.m"
        MR_Integer ll_backend__layout__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 18)));

#line 8319 "ll_backend.layout.c"
        {
#line 8321 "ll_backend.layout.c"
          ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__layout_scalar_common_1[3], ((MR_Box) (ll_backend__layout__V_3_3)), ((MR_Box) (ll_backend__layout__V_22_22)));
        }
#line 211 "layout.m"
        if (ll_backend__layout__succeeded)
#line 211 "layout.m"
          {
#line 8328 "ll_backend.layout.c"
            {
#line 8330 "ll_backend.layout.c"
              ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_slot_name_0_0(ll_backend__layout__V_4_4, ll_backend__layout__V_23_23);
            }
#line 211 "layout.m"
            if (ll_backend__layout__succeeded)
#line 211 "layout.m"
              {
#line 8337 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_5_5 == ll_backend__layout__V_24_24);
#line 211 "layout.m"
                if (ll_backend__layout__succeeded)
#line 211 "layout.m"
                  {
#line 8343 "ll_backend.layout.c"
                    ll_backend__layout__TypeInfo_44_44 = (MR_Word) &ll_backend__layout_scalar_common_1[11];
#line 8345 "ll_backend.layout.c"
                    {
#line 8347 "ll_backend.layout.c"
                      ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_44_44, ((MR_Box) (ll_backend__layout__V_6_6)), ((MR_Box) (ll_backend__layout__V_25_25)));
                    }
#line 211 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 211 "layout.m"
                      {
#line 8354 "ll_backend.layout.c"
                        ll_backend__layout__TypeInfo_45_45 = (MR_Word) &ll_backend__layout_scalar_common_1[3];
#line 8356 "ll_backend.layout.c"
                        {
#line 8358 "ll_backend.layout.c"
                          ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_45_45, ((MR_Box) (ll_backend__layout__V_7_7)), ((MR_Box) (ll_backend__layout__V_26_26)));
                        }
#line 211 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 211 "layout.m"
                          {
#line 8365 "ll_backend.layout.c"
                            ll_backend__layout__succeeded = (ll_backend__layout__V_8_8 == ll_backend__layout__V_27_27);
#line 211 "layout.m"
                            if (ll_backend__layout__succeeded)
#line 211 "layout.m"
                              {
#line 8371 "ll_backend.layout.c"
                                ll_backend__layout__TypeInfo_46_46 = (MR_Word) &ll_backend__layout_scalar_common_1[3];
#line 8373 "ll_backend.layout.c"
                                {
#line 8375 "ll_backend.layout.c"
                                  ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_46_46, ((MR_Box) (ll_backend__layout__V_9_9)), ((MR_Box) (ll_backend__layout__V_28_28)));
                                }
#line 211 "layout.m"
                                if (ll_backend__layout__succeeded)
#line 211 "layout.m"
                                  {
#line 8382 "ll_backend.layout.c"
                                    ll_backend__layout__succeeded = (ll_backend__layout__V_10_10 == ll_backend__layout__V_29_29);
#line 211 "layout.m"
                                    if (ll_backend__layout__succeeded)
#line 211 "layout.m"
                                      {
#line 8388 "ll_backend.layout.c"
                                        ll_backend__layout__succeeded = (ll_backend__layout__V_11_11 == ll_backend__layout__V_30_30);
#line 211 "layout.m"
                                        if (ll_backend__layout__succeeded)
#line 211 "layout.m"
                                          {
#line 8394 "ll_backend.layout.c"
                                            ll_backend__layout__succeeded = (ll_backend__layout__V_12_12 == ll_backend__layout__V_31_31);
#line 211 "layout.m"
                                            if (ll_backend__layout__succeeded)
#line 211 "layout.m"
                                              {
#line 8400 "ll_backend.layout.c"
                                                ll_backend__layout__TypeInfo_47_47 = (MR_Word) &ll_backend__layout_scalar_common_1[2];
#line 8402 "ll_backend.layout.c"
                                                {
#line 8404 "ll_backend.layout.c"
                                                  ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_47_47, ((MR_Box) (ll_backend__layout__V_13_13)), ((MR_Box) (ll_backend__layout__V_32_32)));
                                                }
#line 211 "layout.m"
                                                if (ll_backend__layout__succeeded)
#line 211 "layout.m"
                                                  {
#line 8411 "ll_backend.layout.c"
                                                    ll_backend__layout__TypeInfo_48_48 = (MR_Word) &ll_backend__layout_scalar_common_1[2];
#line 8413 "ll_backend.layout.c"
                                                    {
#line 8415 "ll_backend.layout.c"
                                                      ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_48_48, ((MR_Box) (ll_backend__layout__V_14_14)), ((MR_Box) (ll_backend__layout__V_33_33)));
                                                    }
#line 211 "layout.m"
                                                    if (ll_backend__layout__succeeded)
#line 211 "layout.m"
                                                      {
#line 8422 "ll_backend.layout.c"
                                                        ll_backend__layout__TypeInfo_49_49 = (MR_Word) &ll_backend__layout_scalar_common_1[2];
#line 8424 "ll_backend.layout.c"
                                                        {
#line 8426 "ll_backend.layout.c"
                                                          ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_49_49, ((MR_Box) (ll_backend__layout__V_15_15)), ((MR_Box) (ll_backend__layout__V_34_34)));
                                                        }
#line 211 "layout.m"
                                                        if (ll_backend__layout__succeeded)
#line 211 "layout.m"
                                                          {
#line 8433 "ll_backend.layout.c"
                                                            ll_backend__layout__TypeInfo_50_50 = (MR_Word) &ll_backend__layout_scalar_common_1[2];
#line 8435 "ll_backend.layout.c"
                                                            {
#line 8437 "ll_backend.layout.c"
                                                              ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_50_50, ((MR_Box) (ll_backend__layout__V_16_16)), ((MR_Box) (ll_backend__layout__V_35_35)));
                                                            }
#line 211 "layout.m"
                                                            if (ll_backend__layout__succeeded)
#line 211 "layout.m"
                                                              {
#line 8444 "ll_backend.layout.c"
                                                                {
#line 8446 "ll_backend.layout.c"
                                                                  ll_backend__layout__succeeded = parse_tree__prog_data____Unify____eval_method_0_0(ll_backend__layout__V_17_17, ll_backend__layout__V_36_36);
                                                                }
#line 211 "layout.m"
                                                                if (ll_backend__layout__succeeded)
#line 211 "layout.m"
                                                                  {
#line 8453 "ll_backend.layout.c"
                                                                    ll_backend__layout__TypeInfo_52_52 = (MR_Word) &ll_backend__layout_scalar_common_1[2];
#line 8455 "ll_backend.layout.c"
                                                                    {
#line 8457 "ll_backend.layout.c"
                                                                      ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_52_52, ((MR_Box) (ll_backend__layout__V_18_18)), ((MR_Box) (ll_backend__layout__V_37_37)));
                                                                    }
#line 211 "layout.m"
                                                                    if (ll_backend__layout__succeeded)
#line 211 "layout.m"
                                                                      {
#line 8464 "ll_backend.layout.c"
                                                                        ll_backend__layout__TypeInfo_53_53 = (MR_Word) &ll_backend__layout_scalar_common_1[2];
#line 8466 "ll_backend.layout.c"
                                                                        {
#line 8468 "ll_backend.layout.c"
                                                                          ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_53_53, ((MR_Box) (ll_backend__layout__V_19_19)), ((MR_Box) (ll_backend__layout__V_38_38)));
                                                                        }
#line 211 "layout.m"
                                                                        if (ll_backend__layout__succeeded)
#line 211 "layout.m"
                                                                          {
#line 8475 "ll_backend.layout.c"
                                                                            {
#line 8477 "ll_backend.layout.c"
                                                                              ll_backend__layout__succeeded = libs__trace_params____Unify____trace_level_0_0(ll_backend__layout__V_20_20, ll_backend__layout__V_39_39);
                                                                            }
#line 211 "layout.m"
                                                                            if (ll_backend__layout__succeeded)
#line 8482 "ll_backend.layout.c"
                                                                              ll_backend__layout__succeeded = (ll_backend__layout__V_21_21 == ll_backend__layout__V_40_40);
#line 211 "layout.m"
                                                                          }
#line 211 "layout.m"
                                                                      }
#line 211 "layout.m"
                                                                  }
#line 211 "layout.m"
                                                              }
#line 211 "layout.m"
                                                          }
#line 211 "layout.m"
                                                      }
#line 211 "layout.m"
                                                  }
#line 211 "layout.m"
                                              }
#line 211 "layout.m"
                                          }
#line 211 "layout.m"
                                      }
#line 211 "layout.m"
                                  }
#line 211 "layout.m"
                              }
#line 211 "layout.m"
                          }
#line 211 "layout.m"
                      }
#line 211 "layout.m"
                  }
#line 211 "layout.m"
              }
#line 211 "layout.m"
          }
#line 211 "layout.m"
      }
#line 211 "layout.m"
    return ll_backend__layout__succeeded;
#line 211 "layout.m"
  }
#line 211 "layout.m"
}

#line 261 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____proc_layout_data_0_0(
#line 261 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 261 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 261 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 261 "layout.m"
{
#line 261 "layout.m"
  {
#line 261 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 261 "layout.m"
    MR_Integer ll_backend__layout__CastX_12 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 261 "layout.m"
    MR_Integer ll_backend__layout__CastY_13 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 261 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_12 == ll_backend__layout__CastY_13);
#line 261 "layout.m"
    if (ll_backend__layout__succeeded)
#line 8551 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 261 "layout.m"
    else
#line 261 "layout.m"
      {
#line 261 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 261 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 261 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 261 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 261 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 261 "layout.m"
        MR_Word ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 261 "layout.m"
        MR_Word ll_backend__layout__V_10_10;

#line 261 "layout.m"
        {
#line 261 "layout.m"
          hlds__hlds_rtti____Compare____rtti_proc_label_0_0(&ll_backend__layout__V_10_10, ll_backend__layout__V_4_4, ll_backend__layout__V_7_7);
        }
#line 8577 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_10_10 == (MR_Integer) 0);
#line 261 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 261 "layout.m"
        if (ll_backend__layout__succeeded)
#line 261 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_10_10;
#line 261 "layout.m"
        else
#line 261 "layout.m"
          {
#line 261 "layout.m"
            MR_Word ll_backend__layout__V_11_11;

#line 261 "layout.m"
            {
#line 261 "layout.m"
              ll_backend__layout____Compare____proc_layout_stack_traversal_0_0(&ll_backend__layout__V_11_11, ll_backend__layout__V_5_5, ll_backend__layout__V_8_8);
            }
#line 8597 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_11_11 == (MR_Integer) 0);
#line 261 "layout.m"
            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 261 "layout.m"
            if (ll_backend__layout__succeeded)
#line 261 "layout.m"
              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_11_11;
#line 261 "layout.m"
            else
#line 261 "layout.m"
              {
#line 261 "layout.m"
                ll_backend__layout____Compare____maybe_proc_id_and_more_0_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_6_6, ll_backend__layout__V_9_9);
#line 261 "layout.m"
                return;
              }
#line 261 "layout.m"
          }
#line 261 "layout.m"
      }
#line 261 "layout.m"
  }
#line 261 "layout.m"
}

#line 261 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_data_0_0(
#line 261 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 261 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 261 "layout.m"
{
#line 261 "layout.m"
  {
#line 261 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 261 "layout.m"
    MR_Integer ll_backend__layout__CastX_9 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 261 "layout.m"
    MR_Integer ll_backend__layout__CastY_10 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 261 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_9 == ll_backend__layout__CastY_10);
#line 261 "layout.m"
    if (ll_backend__layout__succeeded)
#line 261 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 261 "layout.m"
    else
#line 261 "layout.m"
      {
#line 261 "layout.m"
        MR_Word ll_backend__layout__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 261 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 261 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 261 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 261 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 261 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));

#line 8664 "ll_backend.layout.c"
        {
#line 8666 "ll_backend.layout.c"
          ll_backend__layout__succeeded = hlds__hlds_rtti____Unify____rtti_proc_label_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_6_6);
        }
#line 261 "layout.m"
        if (ll_backend__layout__succeeded)
#line 261 "layout.m"
          {
#line 8673 "ll_backend.layout.c"
            {
#line 8675 "ll_backend.layout.c"
              ll_backend__layout__succeeded = ll_backend__layout____Unify____proc_layout_stack_traversal_0_0(ll_backend__layout__V_4_4, ll_backend__layout__V_7_7);
            }
#line 261 "layout.m"
            if (ll_backend__layout__succeeded)
#line 8680 "ll_backend.layout.c"
              {
#line 8682 "ll_backend.layout.c"
                return ll_backend__layout__succeeded = ll_backend__layout____Unify____maybe_proc_id_and_more_0_0(ll_backend__layout__V_5_5, ll_backend__layout__V_8_8);
              }
#line 261 "layout.m"
          }
#line 261 "layout.m"
      }
#line 261 "layout.m"
    return ll_backend__layout__succeeded;
#line 261 "layout.m"
  }
#line 261 "layout.m"
}

#line 310 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____module_layout_deep_prof_0_0(
#line 310 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 310 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 310 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 310 "layout.m"
{
#line 310 "layout.m"
  {
#line 310 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 310 "layout.m"
    MR_Integer ll_backend__layout__CastX_15 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 310 "layout.m"
    MR_Integer ll_backend__layout__CastY_16 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 310 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_15 == ll_backend__layout__CastY_16);
#line 310 "layout.m"
    if (ll_backend__layout__succeeded)
#line 8720 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 310 "layout.m"
    else
#line 310 "layout.m"
      {
#line 310 "layout.m"
        MR_Integer ll_backend__layout__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 310 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 310 "layout.m"
        MR_Integer ll_backend__layout__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 310 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 310 "layout.m"
        MR_Integer ll_backend__layout__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 310 "layout.m"
        MR_Word ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 310 "layout.m"
        MR_Integer ll_backend__layout__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 310 "layout.m"
        MR_Word ll_backend__layout__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 3)));
#line 310 "layout.m"
        MR_Word ll_backend__layout__V_12_12;

#line 310 "layout.m"
        {
#line 310 "layout.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_12_12, ll_backend__layout__V_4_4, ll_backend__layout__V_8_8);
        }
#line 8750 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_12_12 == (MR_Integer) 0);
#line 310 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 310 "layout.m"
        if (ll_backend__layout__succeeded)
#line 310 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_12_12;
#line 310 "layout.m"
        else
#line 310 "layout.m"
          {
#line 310 "layout.m"
            MR_Word ll_backend__layout__V_13_13;

#line 310 "layout.m"
            {
#line 310 "layout.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[10], &ll_backend__layout__V_13_13, ((MR_Box) (ll_backend__layout__V_5_5)), ((MR_Box) (ll_backend__layout__V_9_9)));
            }
#line 8770 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_13_13 == (MR_Integer) 0);
#line 310 "layout.m"
            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 310 "layout.m"
            if (ll_backend__layout__succeeded)
#line 310 "layout.m"
              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_13_13;
#line 310 "layout.m"
            else
#line 310 "layout.m"
              {
#line 310 "layout.m"
                MR_Word ll_backend__layout__V_14_14;

#line 310 "layout.m"
                {
#line 310 "layout.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_14_14, ll_backend__layout__V_6_6, ll_backend__layout__V_10_10);
                }
#line 8790 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_14_14 == (MR_Integer) 0);
#line 310 "layout.m"
                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 310 "layout.m"
                if (ll_backend__layout__succeeded)
#line 310 "layout.m"
                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_14_14;
#line 310 "layout.m"
                else
#line 310 "layout.m"
                  {
#line 310 "layout.m"
                    {
#line 310 "layout.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[10], ll_backend__layout__HeadVar__1_1, ((MR_Box) (ll_backend__layout__V_7_7)), ((MR_Box) (ll_backend__layout__V_11_11)));
#line 310 "layout.m"
                      return;
                    }
#line 310 "layout.m"
                  }
#line 310 "layout.m"
              }
#line 310 "layout.m"
          }
#line 310 "layout.m"
      }
#line 310 "layout.m"
  }
#line 310 "layout.m"
}

#line 310 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____module_layout_deep_prof_0_0(
#line 310 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 310 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 310 "layout.m"
{
#line 310 "layout.m"
  {
#line 310 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 310 "layout.m"
    MR_Integer ll_backend__layout__CastX_11 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 310 "layout.m"
    MR_Integer ll_backend__layout__CastY_12 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 310 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_11 == ll_backend__layout__CastY_12);
#line 310 "layout.m"
    if (ll_backend__layout__succeeded)
#line 310 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 310 "layout.m"
    else
#line 310 "layout.m"
      {
#line 310 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_13_13;
#line 310 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_14_14;
#line 310 "layout.m"
        MR_Integer ll_backend__layout__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 310 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 310 "layout.m"
        MR_Integer ll_backend__layout__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 310 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 3)));
#line 310 "layout.m"
        MR_Integer ll_backend__layout__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 310 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 310 "layout.m"
        MR_Integer ll_backend__layout__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 310 "layout.m"
        MR_Word ll_backend__layout__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));

#line 8871 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_3_3 == ll_backend__layout__V_7_7);
#line 310 "layout.m"
        if (ll_backend__layout__succeeded)
#line 310 "layout.m"
          {
#line 8877 "ll_backend.layout.c"
            ll_backend__layout__TypeInfo_13_13 = (MR_Word) &ll_backend__layout_scalar_common_1[10];
#line 8879 "ll_backend.layout.c"
            {
#line 8881 "ll_backend.layout.c"
              ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_13_13, ((MR_Box) (ll_backend__layout__V_4_4)), ((MR_Box) (ll_backend__layout__V_8_8)));
            }
#line 310 "layout.m"
            if (ll_backend__layout__succeeded)
#line 310 "layout.m"
              {
#line 8888 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_5_5 == ll_backend__layout__V_9_9);
#line 310 "layout.m"
                if (ll_backend__layout__succeeded)
#line 310 "layout.m"
                  {
#line 8894 "ll_backend.layout.c"
                    ll_backend__layout__TypeInfo_14_14 = (MR_Word) &ll_backend__layout_scalar_common_1[10];
#line 8896 "ll_backend.layout.c"
                    {
#line 8898 "ll_backend.layout.c"
                      return ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_14_14, ((MR_Box) (ll_backend__layout__V_6_6)), ((MR_Box) (ll_backend__layout__V_10_10)));
                    }
#line 310 "layout.m"
                  }
#line 310 "layout.m"
              }
#line 310 "layout.m"
          }
#line 310 "layout.m"
      }
#line 310 "layout.m"
    return ll_backend__layout__succeeded;
#line 310 "layout.m"
  }
#line 310 "layout.m"
}

#line 319 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____module_layout_debug_0_0(
#line 319 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 319 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 319 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 319 "layout.m"
{
#line 319 "layout.m"
  {
#line 319 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 319 "layout.m"
    MR_Integer ll_backend__layout__CastX_21 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 319 "layout.m"
    MR_Integer ll_backend__layout__CastY_22 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 319 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_21 == ll_backend__layout__CastY_22);
#line 319 "layout.m"
    if (ll_backend__layout__succeeded)
#line 8940 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 319 "layout.m"
    else
#line 319 "layout.m"
      {
#line 319 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 319 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 319 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 319 "layout.m"
        MR_Integer ll_backend__layout__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 319 "layout.m"
        MR_Integer ll_backend__layout__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 4)));
#line 319 "layout.m"
        MR_Word ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 5)));
#line 319 "layout.m"
        MR_Word ll_backend__layout__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 319 "layout.m"
        MR_Word ll_backend__layout__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 319 "layout.m"
        MR_Word ll_backend__layout__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 319 "layout.m"
        MR_Integer ll_backend__layout__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 3)));
#line 319 "layout.m"
        MR_Integer ll_backend__layout__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 4)));
#line 319 "layout.m"
        MR_Word ll_backend__layout__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 5)));
#line 319 "layout.m"
        MR_Word ll_backend__layout__V_16_16;

#line 319 "layout.m"
        {
#line 319 "layout.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[7], &ll_backend__layout__V_16_16, ((MR_Box) (ll_backend__layout__V_4_4)), ((MR_Box) (ll_backend__layout__V_10_10)));
        }
#line 8978 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_16_16 == (MR_Integer) 0);
#line 319 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 319 "layout.m"
        if (ll_backend__layout__succeeded)
#line 319 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_16_16;
#line 319 "layout.m"
        else
#line 319 "layout.m"
          {
#line 319 "layout.m"
            MR_Word ll_backend__layout__V_17_17;

#line 319 "layout.m"
            {
#line 319 "layout.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[8], &ll_backend__layout__V_17_17, ((MR_Box) (ll_backend__layout__V_5_5)), ((MR_Box) (ll_backend__layout__V_11_11)));
            }
#line 8998 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_17_17 == (MR_Integer) 0);
#line 319 "layout.m"
            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 319 "layout.m"
            if (ll_backend__layout__succeeded)
#line 319 "layout.m"
              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_17_17;
#line 319 "layout.m"
            else
#line 319 "layout.m"
              {
#line 319 "layout.m"
                MR_Word ll_backend__layout__V_18_18;

#line 319 "layout.m"
                {
#line 319 "layout.m"
                  libs__trace_params____Compare____trace_level_0_0(&ll_backend__layout__V_18_18, ll_backend__layout__V_6_6, ll_backend__layout__V_12_12);
                }
#line 9018 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_18_18 == (MR_Integer) 0);
#line 319 "layout.m"
                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 319 "layout.m"
                if (ll_backend__layout__succeeded)
#line 319 "layout.m"
                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_18_18;
#line 319 "layout.m"
                else
#line 319 "layout.m"
                  {
#line 319 "layout.m"
                    MR_Word ll_backend__layout__V_19_19;

#line 319 "layout.m"
                    {
#line 319 "layout.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_19_19, ll_backend__layout__V_7_7, ll_backend__layout__V_13_13);
                    }
#line 9038 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = (ll_backend__layout__V_19_19 == (MR_Integer) 0);
#line 319 "layout.m"
                    ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 319 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 319 "layout.m"
                      *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_19_19;
#line 319 "layout.m"
                    else
#line 319 "layout.m"
                      {
#line 319 "layout.m"
                        MR_Word ll_backend__layout__V_20_20;

#line 319 "layout.m"
                        {
#line 319 "layout.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_20_20, ll_backend__layout__V_8_8, ll_backend__layout__V_14_14);
                        }
#line 9058 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = (ll_backend__layout__V_20_20 == (MR_Integer) 0);
#line 319 "layout.m"
                        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 319 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 319 "layout.m"
                          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_20_20;
#line 319 "layout.m"
                        else
#line 319 "layout.m"
                          {
#line 319 "layout.m"
                            {
#line 319 "layout.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[9], ll_backend__layout__HeadVar__1_1, ((MR_Box) (ll_backend__layout__V_9_9)), ((MR_Box) (ll_backend__layout__V_15_15)));
#line 319 "layout.m"
                              return;
                            }
#line 319 "layout.m"
                          }
#line 319 "layout.m"
                      }
#line 319 "layout.m"
                  }
#line 319 "layout.m"
              }
#line 319 "layout.m"
          }
#line 319 "layout.m"
      }
#line 319 "layout.m"
  }
#line 319 "layout.m"
}

#line 319 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____module_layout_debug_0_0(
#line 319 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 319 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 319 "layout.m"
{
#line 319 "layout.m"
  {
#line 319 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 319 "layout.m"
    MR_Integer ll_backend__layout__CastX_15 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 319 "layout.m"
    MR_Integer ll_backend__layout__CastY_16 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 319 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_15 == ll_backend__layout__CastY_16);
#line 319 "layout.m"
    if (ll_backend__layout__succeeded)
#line 319 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 319 "layout.m"
    else
#line 319 "layout.m"
      {
#line 319 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_18_18;
#line 319 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_20_20;
#line 319 "layout.m"
        MR_Word ll_backend__layout__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 319 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 319 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 319 "layout.m"
        MR_Integer ll_backend__layout__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 3)));
#line 319 "layout.m"
        MR_Integer ll_backend__layout__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 4)));
#line 319 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 5)));
#line 319 "layout.m"
        MR_Word ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 319 "layout.m"
        MR_Word ll_backend__layout__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 319 "layout.m"
        MR_Word ll_backend__layout__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 319 "layout.m"
        MR_Integer ll_backend__layout__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 319 "layout.m"
        MR_Integer ll_backend__layout__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 4)));
#line 319 "layout.m"
        MR_Word ll_backend__layout__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 5)));

#line 9151 "ll_backend.layout.c"
        {
#line 9153 "ll_backend.layout.c"
          ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__layout_scalar_common_1[7], ((MR_Box) (ll_backend__layout__V_3_3)), ((MR_Box) (ll_backend__layout__V_9_9)));
        }
#line 319 "layout.m"
        if (ll_backend__layout__succeeded)
#line 319 "layout.m"
          {
#line 9160 "ll_backend.layout.c"
            ll_backend__layout__TypeInfo_18_18 = (MR_Word) &ll_backend__layout_scalar_common_1[8];
#line 9162 "ll_backend.layout.c"
            {
#line 9164 "ll_backend.layout.c"
              ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_18_18, ((MR_Box) (ll_backend__layout__V_4_4)), ((MR_Box) (ll_backend__layout__V_10_10)));
            }
#line 319 "layout.m"
            if (ll_backend__layout__succeeded)
#line 319 "layout.m"
              {
#line 9171 "ll_backend.layout.c"
                {
#line 9173 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = libs__trace_params____Unify____trace_level_0_0(ll_backend__layout__V_5_5, ll_backend__layout__V_11_11);
                }
#line 319 "layout.m"
                if (ll_backend__layout__succeeded)
#line 319 "layout.m"
                  {
#line 9180 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = (ll_backend__layout__V_6_6 == ll_backend__layout__V_12_12);
#line 319 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 319 "layout.m"
                      {
#line 9186 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = (ll_backend__layout__V_7_7 == ll_backend__layout__V_13_13);
#line 319 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 319 "layout.m"
                          {
#line 9192 "ll_backend.layout.c"
                            ll_backend__layout__TypeInfo_20_20 = (MR_Word) &ll_backend__layout_scalar_common_1[9];
#line 9194 "ll_backend.layout.c"
                            {
#line 9196 "ll_backend.layout.c"
                              return ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_20_20, ((MR_Box) (ll_backend__layout__V_8_8)), ((MR_Box) (ll_backend__layout__V_14_14)));
                            }
#line 319 "layout.m"
                          }
#line 319 "layout.m"
                      }
#line 319 "layout.m"
                  }
#line 319 "layout.m"
              }
#line 319 "layout.m"
          }
#line 319 "layout.m"
      }
#line 319 "layout.m"
    return ll_backend__layout__succeeded;
#line 319 "layout.m"
  }
#line 319 "layout.m"
}

#line 296 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____module_layout_data_0_0(
#line 296 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 296 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 296 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 296 "layout.m"
{
#line 296 "layout.m"
  {
#line 296 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 296 "layout.m"
    MR_Integer ll_backend__layout__CastX_18 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 296 "layout.m"
    MR_Integer ll_backend__layout__CastY_19 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 296 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_18 == ll_backend__layout__CastY_19);
#line 296 "layout.m"
    if (ll_backend__layout__succeeded)
#line 9242 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 296 "layout.m"
    else
#line 296 "layout.m"
      {
#line 296 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 296 "layout.m"
        MR_Integer ll_backend__layout__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 296 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 296 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 296 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 4)));
#line 296 "layout.m"
        MR_Word ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 296 "layout.m"
        MR_Integer ll_backend__layout__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 296 "layout.m"
        MR_Word ll_backend__layout__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 296 "layout.m"
        MR_Word ll_backend__layout__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 3)));
#line 296 "layout.m"
        MR_Word ll_backend__layout__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 4)));
#line 296 "layout.m"
        MR_Word ll_backend__layout__V_14_14;

#line 296 "layout.m"
        {
#line 296 "layout.m"
          mdbcomp__prim_data____Compare____sym_name_0_0(&ll_backend__layout__V_14_14, ll_backend__layout__V_4_4, ll_backend__layout__V_9_9);
        }
#line 9276 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_14_14 == (MR_Integer) 0);
#line 296 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 296 "layout.m"
        if (ll_backend__layout__succeeded)
#line 296 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_14_14;
#line 296 "layout.m"
        else
#line 296 "layout.m"
          {
#line 296 "layout.m"
            MR_Word ll_backend__layout__V_15_15;

#line 296 "layout.m"
            {
#line 296 "layout.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_15_15, ll_backend__layout__V_5_5, ll_backend__layout__V_10_10);
            }
#line 9296 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_15_15 == (MR_Integer) 0);
#line 296 "layout.m"
            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 296 "layout.m"
            if (ll_backend__layout__succeeded)
#line 296 "layout.m"
              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_15_15;
#line 296 "layout.m"
            else
#line 296 "layout.m"
              {
#line 296 "layout.m"
                MR_Word ll_backend__layout__V_16_16;

#line 296 "layout.m"
                {
#line 296 "layout.m"
                  ll_backend__layout____Compare____string_with_0s_0_0(&ll_backend__layout__V_16_16, ll_backend__layout__V_6_6, ll_backend__layout__V_11_11);
                }
#line 9316 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_16_16 == (MR_Integer) 0);
#line 296 "layout.m"
                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 296 "layout.m"
                if (ll_backend__layout__succeeded)
#line 296 "layout.m"
                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_16_16;
#line 296 "layout.m"
                else
#line 296 "layout.m"
                  {
#line 296 "layout.m"
                    MR_Word ll_backend__layout__V_17_17;

#line 296 "layout.m"
                    {
#line 296 "layout.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[5], &ll_backend__layout__V_17_17, ((MR_Box) (ll_backend__layout__V_7_7)), ((MR_Box) (ll_backend__layout__V_12_12)));
                    }
#line 9336 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = (ll_backend__layout__V_17_17 == (MR_Integer) 0);
#line 296 "layout.m"
                    ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 296 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 296 "layout.m"
                      *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_17_17;
#line 296 "layout.m"
                    else
#line 296 "layout.m"
                      {
#line 296 "layout.m"
                        {
#line 296 "layout.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[6], ll_backend__layout__HeadVar__1_1, ((MR_Box) (ll_backend__layout__V_8_8)), ((MR_Box) (ll_backend__layout__V_13_13)));
#line 296 "layout.m"
                          return;
                        }
#line 296 "layout.m"
                      }
#line 296 "layout.m"
                  }
#line 296 "layout.m"
              }
#line 296 "layout.m"
          }
#line 296 "layout.m"
      }
#line 296 "layout.m"
  }
#line 296 "layout.m"
}

#line 296 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____module_layout_data_0_0(
#line 296 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 296 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 296 "layout.m"
{
#line 296 "layout.m"
  {
#line 296 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 296 "layout.m"
    MR_Integer ll_backend__layout__CastX_13 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 296 "layout.m"
    MR_Integer ll_backend__layout__CastY_14 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 296 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_13 == ll_backend__layout__CastY_14);
#line 296 "layout.m"
    if (ll_backend__layout__succeeded)
#line 296 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 296 "layout.m"
    else
#line 296 "layout.m"
      {
#line 296 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_16_16;
#line 296 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_17_17;
#line 296 "layout.m"
        MR_Word ll_backend__layout__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 296 "layout.m"
        MR_Integer ll_backend__layout__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 296 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 296 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 3)));
#line 296 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 4)));
#line 296 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 296 "layout.m"
        MR_Integer ll_backend__layout__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 296 "layout.m"
        MR_Word ll_backend__layout__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 296 "layout.m"
        MR_Word ll_backend__layout__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 296 "layout.m"
        MR_Word ll_backend__layout__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 4)));

#line 9423 "ll_backend.layout.c"
        {
#line 9425 "ll_backend.layout.c"
          ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_8_8);
        }
#line 296 "layout.m"
        if (ll_backend__layout__succeeded)
#line 296 "layout.m"
          {
#line 9432 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 == ll_backend__layout__V_9_9);
#line 296 "layout.m"
            if (ll_backend__layout__succeeded)
#line 296 "layout.m"
              {
#line 9438 "ll_backend.layout.c"
                {
#line 9440 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = ll_backend__layout____Unify____string_with_0s_0_0(ll_backend__layout__V_5_5, ll_backend__layout__V_10_10);
                }
#line 296 "layout.m"
                if (ll_backend__layout__succeeded)
#line 296 "layout.m"
                  {
#line 9447 "ll_backend.layout.c"
                    ll_backend__layout__TypeInfo_16_16 = (MR_Word) &ll_backend__layout_scalar_common_1[5];
#line 9449 "ll_backend.layout.c"
                    {
#line 9451 "ll_backend.layout.c"
                      ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_16_16, ((MR_Box) (ll_backend__layout__V_6_6)), ((MR_Box) (ll_backend__layout__V_11_11)));
                    }
#line 296 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 296 "layout.m"
                      {
#line 9458 "ll_backend.layout.c"
                        ll_backend__layout__TypeInfo_17_17 = (MR_Word) &ll_backend__layout_scalar_common_1[6];
#line 9460 "ll_backend.layout.c"
                        {
#line 9462 "ll_backend.layout.c"
                          return ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_17_17, ((MR_Box) (ll_backend__layout__V_7_7)), ((MR_Box) (ll_backend__layout__V_12_12)));
                        }
#line 296 "layout.m"
                      }
#line 296 "layout.m"
                  }
#line 296 "layout.m"
              }
#line 296 "layout.m"
          }
#line 296 "layout.m"
      }
#line 296 "layout.m"
    return ll_backend__layout__succeeded;
#line 296 "layout.m"
  }
#line 296 "layout.m"
}

#line 248 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____maybe_proc_id_and_more_0_0(
#line 248 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 248 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 248 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 248 "layout.m"
{
#line 248 "layout.m"
  {
#line 248 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 248 "layout.m"
    MR_Integer ll_backend__layout__CastX_23 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 248 "layout.m"
    MR_Integer ll_backend__layout__CastY_24 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 248 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_23 == ll_backend__layout__CastY_24);
#line 248 "layout.m"
    if (ll_backend__layout__succeeded)
#line 9506 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 248 "layout.m"
    else
#line 248 "layout.m"
      if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 248 "layout.m"
        if ((ll_backend__layout__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 248 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 248 "layout.m"
        else
#line 9518 "ll_backend.layout.c"
          *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "layout.m"
      else
#line 248 "layout.m"
        {
#line 248 "layout.m"
          MR_Word ll_backend__layout__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 248 "layout.m"
          MR_Word ll_backend__layout__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 248 "layout.m"
          MR_Word ll_backend__layout__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 248 "layout.m"
          MR_Word ll_backend__layout__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));

#line 248 "layout.m"
          if ((ll_backend__layout__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 9535 "ll_backend.layout.c"
            *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "layout.m"
          else
#line 248 "layout.m"
            {
#line 248 "layout.m"
              MR_Word ll_backend__layout__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 248 "layout.m"
              MR_Word ll_backend__layout__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 248 "layout.m"
              MR_Word ll_backend__layout__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 248 "layout.m"
              MR_Word ll_backend__layout__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__3_3, (MR_Integer) 3)));
#line 248 "layout.m"
              MR_Word ll_backend__layout__V_20_20;

#line 248 "layout.m"
              {
#line 248 "layout.m"
                mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[3], &ll_backend__layout__V_20_20, ((MR_Box) (ll_backend__layout__V_32_32)), ((MR_Box) (ll_backend__layout__V_16_16)));
              }
#line 9557 "ll_backend.layout.c"
              ll_backend__layout__succeeded = (ll_backend__layout__V_20_20 == (MR_Integer) 0);
#line 248 "layout.m"
              ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 248 "layout.m"
              if (ll_backend__layout__succeeded)
#line 248 "layout.m"
                *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_20_20;
#line 248 "layout.m"
              else
#line 248 "layout.m"
                {
#line 248 "layout.m"
                  MR_Word ll_backend__layout__V_21_21;

#line 248 "layout.m"
                  {
#line 248 "layout.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[3], &ll_backend__layout__V_21_21, ((MR_Box) (ll_backend__layout__V_31_31)), ((MR_Box) (ll_backend__layout__V_17_17)));
                  }
#line 9577 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = (ll_backend__layout__V_21_21 == (MR_Integer) 0);
#line 248 "layout.m"
                  ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 248 "layout.m"
                  if (ll_backend__layout__succeeded)
#line 248 "layout.m"
                    *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_21_21;
#line 248 "layout.m"
                  else
#line 248 "layout.m"
                    {
#line 248 "layout.m"
                      MR_Word ll_backend__layout__V_22_22;

#line 248 "layout.m"
                      {
#line 248 "layout.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[3], &ll_backend__layout__V_22_22, ((MR_Box) (ll_backend__layout__V_30_30)), ((MR_Box) (ll_backend__layout__V_18_18)));
                      }
#line 9597 "ll_backend.layout.c"
                      ll_backend__layout__succeeded = (ll_backend__layout__V_22_22 == (MR_Integer) 0);
#line 248 "layout.m"
                      ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 248 "layout.m"
                      if (ll_backend__layout__succeeded)
#line 248 "layout.m"
                        *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_22_22;
#line 248 "layout.m"
                      else
#line 248 "layout.m"
                        {
#line 248 "layout.m"
                          ll_backend__layout____Compare____layout_name_0_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_29_29, ll_backend__layout__V_19_19);
#line 248 "layout.m"
                          return;
                        }
#line 248 "layout.m"
                    }
#line 248 "layout.m"
                }
#line 248 "layout.m"
            }
#line 248 "layout.m"
        }
#line 248 "layout.m"
  }
#line 248 "layout.m"
}

#line 248 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____maybe_proc_id_and_more_0_0(
#line 248 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 248 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 248 "layout.m"
{
#line 248 "layout.m"
  {
#line 248 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 248 "layout.m"
    MR_Integer ll_backend__layout__CastX_13 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 248 "layout.m"
    MR_Integer ll_backend__layout__CastY_14 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 248 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_13 == ll_backend__layout__CastY_14);
#line 248 "layout.m"
    if (ll_backend__layout__succeeded)
#line 248 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 248 "layout.m"
    else
#line 248 "layout.m"
      if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 248 "layout.m"
        {
#line 248 "layout.m"
          MR_Integer ll_backend__layout__CastX_3 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 248 "layout.m"
          MR_Integer ll_backend__layout__CastY_4 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 248 "layout.m"
          ll_backend__layout__succeeded = (ll_backend__layout__CastY_4 == ll_backend__layout__CastX_3);
#line 248 "layout.m"
        }
#line 248 "layout.m"
      else
#line 248 "layout.m"
        {
#line 248 "layout.m"
          MR_Word ll_backend__layout__TypeInfo_15_15;
#line 248 "layout.m"
          MR_Word ll_backend__layout__TypeInfo_16_16;
#line 248 "layout.m"
          MR_Word ll_backend__layout__TypeInfo_17_17;
#line 248 "layout.m"
          MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 248 "layout.m"
          MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 248 "layout.m"
          MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 248 "layout.m"
          MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__1_1, (MR_Integer) 3)));
#line 248 "layout.m"
          MR_Word ll_backend__layout__V_9_9;
#line 248 "layout.m"
          MR_Word ll_backend__layout__V_10_10;
#line 248 "layout.m"
          MR_Word ll_backend__layout__V_11_11;
#line 248 "layout.m"
          MR_Word ll_backend__layout__V_12_12;

#line 248 "layout.m"
          ll_backend__layout__succeeded = ((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 248 "layout.m"
          if (ll_backend__layout__succeeded)
#line 248 "layout.m"
            {
#line 248 "layout.m"
              ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 248 "layout.m"
              ll_backend__layout__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 248 "layout.m"
              ll_backend__layout__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 248 "layout.m"
              ll_backend__layout__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 9707 "ll_backend.layout.c"
              ll_backend__layout__TypeInfo_15_15 = (MR_Word) &ll_backend__layout_scalar_common_1[3];
#line 9709 "ll_backend.layout.c"
              {
#line 9711 "ll_backend.layout.c"
                ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_15_15, ((MR_Box) (ll_backend__layout__V_5_5)), ((MR_Box) (ll_backend__layout__V_9_9)));
              }
#line 248 "layout.m"
              if (ll_backend__layout__succeeded)
#line 248 "layout.m"
                {
#line 9718 "ll_backend.layout.c"
                  ll_backend__layout__TypeInfo_16_16 = (MR_Word) &ll_backend__layout_scalar_common_1[3];
#line 9720 "ll_backend.layout.c"
                  {
#line 9722 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_16_16, ((MR_Box) (ll_backend__layout__V_6_6)), ((MR_Box) (ll_backend__layout__V_10_10)));
                  }
#line 248 "layout.m"
                  if (ll_backend__layout__succeeded)
#line 248 "layout.m"
                    {
#line 9729 "ll_backend.layout.c"
                      ll_backend__layout__TypeInfo_17_17 = (MR_Word) &ll_backend__layout_scalar_common_1[3];
#line 9731 "ll_backend.layout.c"
                      {
#line 9733 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_17_17, ((MR_Box) (ll_backend__layout__V_7_7)), ((MR_Box) (ll_backend__layout__V_11_11)));
                      }
#line 248 "layout.m"
                      if (ll_backend__layout__succeeded)
#line 9738 "ll_backend.layout.c"
                        {
#line 9740 "ll_backend.layout.c"
                          return ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_name_0_0(ll_backend__layout__V_8_8, ll_backend__layout__V_12_12);
                        }
#line 248 "layout.m"
                    }
#line 248 "layout.m"
                }
#line 248 "layout.m"
            }
#line 248 "layout.m"
        }
#line 248 "layout.m"
    return ll_backend__layout__succeeded;
#line 248 "layout.m"
  }
#line 248 "layout.m"
}

#line 354 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____layout_slot_name_0_0(
#line 354 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 354 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 354 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 354 "layout.m"
{
#line 354 "layout.m"
  {
#line 354 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 354 "layout.m"
    MR_Integer ll_backend__layout__CastX_9 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 354 "layout.m"
    MR_Integer ll_backend__layout__CastY_10 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 354 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_9 == ll_backend__layout__CastY_10);
#line 354 "layout.m"
    if (ll_backend__layout__succeeded)
#line 9782 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 354 "layout.m"
    else
#line 354 "layout.m"
      {
#line 354 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 354 "layout.m"
        MR_Integer ll_backend__layout__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 354 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 354 "layout.m"
        MR_Integer ll_backend__layout__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 354 "layout.m"
        MR_Word ll_backend__layout__V_8_8;

#line 354 "layout.m"
        {
#line 354 "layout.m"
          ll_backend__layout____Compare____layout_array_name_0_0(&ll_backend__layout__V_8_8, ll_backend__layout__V_4_4, ll_backend__layout__V_6_6);
        }
#line 9804 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_8_8 == (MR_Integer) 0);
#line 354 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 354 "layout.m"
        if (ll_backend__layout__succeeded)
#line 354 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_8_8;
#line 354 "layout.m"
        else
#line 354 "layout.m"
          {
#line 354 "layout.m"
            mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_5_5, ll_backend__layout__V_7_7);
#line 354 "layout.m"
            return;
          }
#line 354 "layout.m"
      }
#line 354 "layout.m"
  }
#line 354 "layout.m"
}

#line 354 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____layout_slot_name_0_0(
#line 354 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 354 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 354 "layout.m"
{
#line 354 "layout.m"
  {
#line 354 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 354 "layout.m"
    MR_Integer ll_backend__layout__CastX_7 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 354 "layout.m"
    MR_Integer ll_backend__layout__CastY_8 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 354 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_7 == ll_backend__layout__CastY_8);
#line 354 "layout.m"
    if (ll_backend__layout__succeeded)
#line 354 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 354 "layout.m"
    else
#line 354 "layout.m"
      {
#line 354 "layout.m"
        MR_Word ll_backend__layout__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 354 "layout.m"
        MR_Integer ll_backend__layout__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 354 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 354 "layout.m"
        MR_Integer ll_backend__layout__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));

#line 9865 "ll_backend.layout.c"
        {
#line 9867 "ll_backend.layout.c"
          ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_array_name_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_5_5);
        }
#line 354 "layout.m"
        if (ll_backend__layout__succeeded)
#line 9872 "ll_backend.layout.c"
          ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 == ll_backend__layout__V_6_6);
#line 354 "layout.m"
      }
#line 354 "layout.m"
    return ll_backend__layout__succeeded;
#line 354 "layout.m"
  }
#line 354 "layout.m"
}

#line 417 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____layout_name_0_0(
#line 417 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 417 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 417 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 417 "layout.m"
{
#line 417 "layout.m"
  {
#line 417 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 417 "layout.m"
    MR_Integer ll_backend__layout__CastX_87 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 417 "layout.m"
    MR_Integer ll_backend__layout__CastY_88 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 417 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_87 == ll_backend__layout__CastY_88);
#line 417 "layout.m"
    if (ll_backend__layout__succeeded)
#line 9907 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 417 "layout.m"
    else
#line 417 "layout.m"
      {
#line 417 "layout.m"
        MR_Integer ll_backend__layout__V_4_4;
#line 417 "layout.m"
        MR_Integer ll_backend__layout__V_5_5;

#line 417 "layout.m"
        {
#line 417 "layout.m"
          ll_backend__layout____Index____layout_name_0_0(ll_backend__layout__HeadVar__2_2, &ll_backend__layout__V_4_4);
        }
#line 417 "layout.m"
        {
#line 417 "layout.m"
          ll_backend__layout____Index____layout_name_0_0(ll_backend__layout__HeadVar__3_3, &ll_backend__layout__V_5_5);
        }
#line 417 "layout.m"
        ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 < ll_backend__layout__V_5_5);
#line 417 "layout.m"
        if (ll_backend__layout__succeeded)
#line 9932 "ll_backend.layout.c"
          *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 1;
#line 417 "layout.m"
        else
#line 417 "layout.m"
          {
#line 417 "layout.m"
            ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 > ll_backend__layout__V_5_5);
#line 417 "layout.m"
            if (ll_backend__layout__succeeded)
#line 9942 "ll_backend.layout.c"
              *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 2;
#line 417 "layout.m"
            else
#line 417 "layout.m"
              {
#line 417 "layout.m"
                MR_Word ll_backend__layout__V_6_6;

#line 417 "layout.m"
                if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 417 "layout.m"
                  {
#line 417 "layout.m"
                    MR_Word ll_backend__layout__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 417 "layout.m"
                    MR_Integer ll_backend__layout__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 417 "layout.m"
                    MR_Word ll_backend__layout__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 417 "layout.m"
                    MR_Word ll_backend__layout__V_15_15;
#line 417 "layout.m"
                    MR_Integer ll_backend__layout__V_16_16;
#line 417 "layout.m"
                    MR_Word ll_backend__layout__V_17_17;
#line 417 "layout.m"
                    MR_Word ll_backend__layout__V_18_18;

#line 417 "layout.m"
                    ll_backend__layout__succeeded = ((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 417 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                      {
#line 417 "layout.m"
                        ll_backend__layout__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 417 "layout.m"
                        ll_backend__layout__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 417 "layout.m"
                        ll_backend__layout__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 417 "layout.m"
                        {
#line 417 "layout.m"
                          mdbcomp__prim_data____Compare____proc_label_0_0(&ll_backend__layout__V_18_18, ll_backend__layout__V_12_12, ll_backend__layout__V_15_15);
                        }
#line 9987 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = (ll_backend__layout__V_18_18 == (MR_Integer) 0);
#line 417 "layout.m"
                        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 417 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                          ll_backend__layout__V_6_6 = ll_backend__layout__V_18_18;
#line 417 "layout.m"
                        else
#line 417 "layout.m"
                          {
#line 417 "layout.m"
                            MR_Word ll_backend__layout__V_19_19;

#line 417 "layout.m"
                            {
#line 417 "layout.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_19_19, ll_backend__layout__V_13_13, ll_backend__layout__V_16_16);
                            }
#line 10007 "ll_backend.layout.c"
                            ll_backend__layout__succeeded = (ll_backend__layout__V_19_19 == (MR_Integer) 0);
#line 417 "layout.m"
                            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 417 "layout.m"
                            if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                              ll_backend__layout__V_6_6 = ll_backend__layout__V_19_19;
#line 417 "layout.m"
                            else
#line 417 "layout.m"
                              {
#line 417 "layout.m"
                                mdbcomp__prim_data____Compare____proc_label_0_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_14_14, ll_backend__layout__V_17_17);
                              }
#line 417 "layout.m"
                          }
#line 417 "layout.m"
                        ll_backend__layout__succeeded = MR_TRUE;
#line 417 "layout.m"
                      }
#line 417 "layout.m"
                  }
#line 417 "layout.m"
                else
#line 417 "layout.m"
                  if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 417 "layout.m"
                    {
#line 417 "layout.m"
                      MR_Word ll_backend__layout__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 417 "layout.m"
                      MR_Integer ll_backend__layout__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 417 "layout.m"
                      MR_Word ll_backend__layout__V_22_22;
#line 417 "layout.m"
                      MR_Integer ll_backend__layout__V_23_23;
#line 417 "layout.m"
                      MR_Word ll_backend__layout__V_24_24;

#line 417 "layout.m"
                      ll_backend__layout__succeeded = ((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
#line 417 "layout.m"
                      if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                        {
#line 417 "layout.m"
                          ll_backend__layout__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 417 "layout.m"
                          ll_backend__layout__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 417 "layout.m"
                          {
#line 417 "layout.m"
                            mdbcomp__prim_data____Compare____sym_name_0_0(&ll_backend__layout__V_24_24, ll_backend__layout__V_20_20, ll_backend__layout__V_22_22);
                          }
#line 10062 "ll_backend.layout.c"
                          ll_backend__layout__succeeded = (ll_backend__layout__V_24_24 == (MR_Integer) 0);
#line 417 "layout.m"
                          ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 417 "layout.m"
                          if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                            ll_backend__layout__V_6_6 = ll_backend__layout__V_24_24;
#line 417 "layout.m"
                          else
#line 417 "layout.m"
                            {
#line 417 "layout.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_21_21, ll_backend__layout__V_23_23);
                            }
#line 417 "layout.m"
                          ll_backend__layout__succeeded = MR_TRUE;
#line 417 "layout.m"
                        }
#line 417 "layout.m"
                    }
#line 417 "layout.m"
                  else
#line 417 "layout.m"
                    if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 417 "layout.m"
                      {
#line 417 "layout.m"
                        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 417 "layout.m"
                        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 417 "layout.m"
                        MR_Word ll_backend__layout__V_9_9;
#line 417 "layout.m"
                        MR_Word ll_backend__layout__V_10_10;
#line 417 "layout.m"
                        MR_Word ll_backend__layout__V_11_11;

#line 417 "layout.m"
                        ll_backend__layout__succeeded = ((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0)));
#line 417 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                          {
#line 417 "layout.m"
                            ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 417 "layout.m"
                            ll_backend__layout__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 417 "layout.m"
                            {
#line 417 "layout.m"
                              hlds__hlds_rtti____Compare____rtti_proc_label_0_0(&ll_backend__layout__V_11_11, ll_backend__layout__V_7_7, ll_backend__layout__V_9_9);
                            }
#line 10115 "ll_backend.layout.c"
                            ll_backend__layout__succeeded = (ll_backend__layout__V_11_11 == (MR_Integer) 0);
#line 417 "layout.m"
                            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 417 "layout.m"
                            if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                              ll_backend__layout__V_6_6 = ll_backend__layout__V_11_11;
#line 417 "layout.m"
                            else
#line 417 "layout.m"
                              {
#line 417 "layout.m"
                                ll_backend__layout____Compare____proc_layout_kind_0_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_8_8, ll_backend__layout__V_10_10);
                              }
#line 417 "layout.m"
                            ll_backend__layout__succeeded = MR_TRUE;
#line 417 "layout.m"
                          }
#line 417 "layout.m"
                      }
#line 417 "layout.m"
                    else
#line 417 "layout.m"
                      if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 417 "layout.m"
                        {
#line 417 "layout.m"
                          MR_Word ll_backend__layout__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 417 "layout.m"
                          MR_Integer ll_backend__layout__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 417 "layout.m"
                          MR_Word ll_backend__layout__V_32_32;
#line 417 "layout.m"
                          MR_Integer ll_backend__layout__V_33_33;
#line 417 "layout.m"
                          MR_Word ll_backend__layout__V_34_34;

#line 417 "layout.m"
                          ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 417 "layout.m"
                          if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                            {
#line 417 "layout.m"
                              ll_backend__layout__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 417 "layout.m"
                              ll_backend__layout__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 417 "layout.m"
                              {
#line 417 "layout.m"
                                mdbcomp__prim_data____Compare____sym_name_0_0(&ll_backend__layout__V_34_34, ll_backend__layout__V_30_30, ll_backend__layout__V_32_32);
                              }
#line 10168 "ll_backend.layout.c"
                              ll_backend__layout__succeeded = (ll_backend__layout__V_34_34 == (MR_Integer) 0);
#line 417 "layout.m"
                              ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 417 "layout.m"
                              if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                                ll_backend__layout__V_6_6 = ll_backend__layout__V_34_34;
#line 417 "layout.m"
                              else
#line 417 "layout.m"
                                {
#line 417 "layout.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_31_31, ll_backend__layout__V_33_33);
                                }
#line 417 "layout.m"
                              ll_backend__layout__succeeded = MR_TRUE;
#line 417 "layout.m"
                            }
#line 417 "layout.m"
                        }
#line 417 "layout.m"
                      else
#line 417 "layout.m"
                        if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 417 "layout.m"
                          {
#line 417 "layout.m"
                            MR_Word ll_backend__layout__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 417 "layout.m"
                            MR_Integer ll_backend__layout__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 417 "layout.m"
                            MR_Word ll_backend__layout__V_27_27;
#line 417 "layout.m"
                            MR_Integer ll_backend__layout__V_28_28;
#line 417 "layout.m"
                            MR_Word ll_backend__layout__V_29_29;

#line 417 "layout.m"
                            ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 417 "layout.m"
                            if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                              {
#line 417 "layout.m"
                                ll_backend__layout__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 417 "layout.m"
                                ll_backend__layout__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 417 "layout.m"
                                {
#line 417 "layout.m"
                                  mdbcomp__prim_data____Compare____sym_name_0_0(&ll_backend__layout__V_29_29, ll_backend__layout__V_25_25, ll_backend__layout__V_27_27);
                                }
#line 10221 "ll_backend.layout.c"
                                ll_backend__layout__succeeded = (ll_backend__layout__V_29_29 == (MR_Integer) 0);
#line 417 "layout.m"
                                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 417 "layout.m"
                                if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                                  ll_backend__layout__V_6_6 = ll_backend__layout__V_29_29;
#line 417 "layout.m"
                                else
#line 417 "layout.m"
                                  {
#line 417 "layout.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_26_26, ll_backend__layout__V_28_28);
                                  }
#line 417 "layout.m"
                                ll_backend__layout__succeeded = MR_TRUE;
#line 417 "layout.m"
                              }
#line 417 "layout.m"
                          }
#line 417 "layout.m"
                        else
#line 417 "layout.m"
                          if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 417 "layout.m"
                            {
#line 417 "layout.m"
                              MR_Word ll_backend__layout__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 417 "layout.m"
                              MR_Word ll_backend__layout__V_86_86;

#line 417 "layout.m"
                              ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 15)));
#line 417 "layout.m"
                              if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                                {
#line 417 "layout.m"
                                  ll_backend__layout__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 417 "layout.m"
                                  {
#line 417 "layout.m"
                                    mdbcomp__prim_data____Compare____sym_name_0_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_85_85, ll_backend__layout__V_86_86);
                                  }
#line 417 "layout.m"
                                  ll_backend__layout__succeeded = MR_TRUE;
#line 417 "layout.m"
                                }
#line 417 "layout.m"
                            }
#line 417 "layout.m"
                          else
#line 417 "layout.m"
                            if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 417 "layout.m"
                              {
#line 417 "layout.m"
                                MR_Word ll_backend__layout__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 417 "layout.m"
                                MR_Integer ll_backend__layout__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 417 "layout.m"
                                MR_Word ll_backend__layout__V_50_50;
#line 417 "layout.m"
                                MR_Integer ll_backend__layout__V_51_51;
#line 417 "layout.m"
                                MR_Word ll_backend__layout__V_52_52;

#line 417 "layout.m"
                                ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 417 "layout.m"
                                if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                                  {
#line 417 "layout.m"
                                    ll_backend__layout__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 417 "layout.m"
                                    ll_backend__layout__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 417 "layout.m"
                                    {
#line 417 "layout.m"
                                      mdbcomp__prim_data____Compare____sym_name_0_0(&ll_backend__layout__V_52_52, ll_backend__layout__V_48_48, ll_backend__layout__V_50_50);
                                    }
#line 10304 "ll_backend.layout.c"
                                    ll_backend__layout__succeeded = (ll_backend__layout__V_52_52 == (MR_Integer) 0);
#line 417 "layout.m"
                                    ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 417 "layout.m"
                                    if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                                      ll_backend__layout__V_6_6 = ll_backend__layout__V_52_52;
#line 417 "layout.m"
                                    else
#line 417 "layout.m"
                                      {
#line 417 "layout.m"
                                        mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_49_49, ll_backend__layout__V_51_51);
                                      }
#line 417 "layout.m"
                                    ll_backend__layout__succeeded = MR_TRUE;
#line 417 "layout.m"
                                  }
#line 417 "layout.m"
                              }
#line 417 "layout.m"
                            else
#line 417 "layout.m"
                              if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 417 "layout.m"
                                {
#line 417 "layout.m"
                                  MR_Word ll_backend__layout__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 417 "layout.m"
                                  MR_Word ll_backend__layout__V_47_47;

#line 417 "layout.m"
                                  ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 417 "layout.m"
                                  if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                                    {
#line 417 "layout.m"
                                      ll_backend__layout__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 417 "layout.m"
                                      {
#line 417 "layout.m"
                                        mdbcomp__prim_data____Compare____sym_name_0_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_46_46, ll_backend__layout__V_47_47);
                                      }
#line 417 "layout.m"
                                      ll_backend__layout__succeeded = MR_TRUE;
#line 417 "layout.m"
                                    }
#line 417 "layout.m"
                                }
#line 417 "layout.m"
                              else
#line 417 "layout.m"
                                if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 417 "layout.m"
                                  {
#line 417 "layout.m"
                                    MR_Word ll_backend__layout__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 417 "layout.m"
                                    MR_Word ll_backend__layout__V_80_80;

#line 417 "layout.m"
                                    ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 417 "layout.m"
                                    if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                                      {
#line 417 "layout.m"
                                        ll_backend__layout__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 417 "layout.m"
                                        {
#line 417 "layout.m"
                                          mdbcomp__prim_data____Compare____sym_name_0_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_79_79, ll_backend__layout__V_80_80);
                                        }
#line 417 "layout.m"
                                        ll_backend__layout__succeeded = MR_TRUE;
#line 417 "layout.m"
                                      }
#line 417 "layout.m"
                                  }
#line 417 "layout.m"
                                else
#line 417 "layout.m"
                                  if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 417 "layout.m"
                                    {
#line 417 "layout.m"
                                      MR_Word ll_backend__layout__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 417 "layout.m"
                                      MR_Integer ll_backend__layout__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 417 "layout.m"
                                      MR_Integer ll_backend__layout__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 417 "layout.m"
                                      MR_Word ll_backend__layout__V_61_61;
#line 417 "layout.m"
                                      MR_Integer ll_backend__layout__V_62_62;
#line 417 "layout.m"
                                      MR_Integer ll_backend__layout__V_63_63;
#line 417 "layout.m"
                                      MR_Word ll_backend__layout__V_64_64;

#line 417 "layout.m"
                                      ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 417 "layout.m"
                                      if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                                        {
#line 417 "layout.m"
                                          ll_backend__layout__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 417 "layout.m"
                                          ll_backend__layout__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 417 "layout.m"
                                          ll_backend__layout__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 3)));
#line 417 "layout.m"
                                          {
#line 417 "layout.m"
                                            mdbcomp__prim_data____Compare____sym_name_0_0(&ll_backend__layout__V_64_64, ll_backend__layout__V_58_58, ll_backend__layout__V_61_61);
                                          }
#line 10423 "ll_backend.layout.c"
                                          ll_backend__layout__succeeded = (ll_backend__layout__V_64_64 == (MR_Integer) 0);
#line 417 "layout.m"
                                          ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 417 "layout.m"
                                          if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                                            ll_backend__layout__V_6_6 = ll_backend__layout__V_64_64;
#line 417 "layout.m"
                                          else
#line 417 "layout.m"
                                            {
#line 417 "layout.m"
                                              MR_Word ll_backend__layout__V_65_65;

#line 417 "layout.m"
                                              {
#line 417 "layout.m"
                                                mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_65_65, ll_backend__layout__V_59_59, ll_backend__layout__V_62_62);
                                              }
#line 10443 "ll_backend.layout.c"
                                              ll_backend__layout__succeeded = (ll_backend__layout__V_65_65 == (MR_Integer) 0);
#line 417 "layout.m"
                                              ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 417 "layout.m"
                                              if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                                                ll_backend__layout__V_6_6 = ll_backend__layout__V_65_65;
#line 417 "layout.m"
                                              else
#line 417 "layout.m"
                                                {
#line 417 "layout.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_60_60, ll_backend__layout__V_63_63);
                                                }
#line 417 "layout.m"
                                            }
#line 417 "layout.m"
                                          ll_backend__layout__succeeded = MR_TRUE;
#line 417 "layout.m"
                                        }
#line 417 "layout.m"
                                    }
#line 417 "layout.m"
                                  else
#line 417 "layout.m"
                                    if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 417 "layout.m"
                                      {
#line 417 "layout.m"
                                        MR_Word ll_backend__layout__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 417 "layout.m"
                                        MR_Integer ll_backend__layout__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 417 "layout.m"
                                        MR_Integer ll_backend__layout__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 417 "layout.m"
                                        MR_Word ll_backend__layout__V_69_69;
#line 417 "layout.m"
                                        MR_Integer ll_backend__layout__V_70_70;
#line 417 "layout.m"
                                        MR_Integer ll_backend__layout__V_71_71;
#line 417 "layout.m"
                                        MR_Word ll_backend__layout__V_72_72;

#line 417 "layout.m"
                                        ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 417 "layout.m"
                                        if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                                          {
#line 417 "layout.m"
                                            ll_backend__layout__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 417 "layout.m"
                                            ll_backend__layout__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 417 "layout.m"
                                            ll_backend__layout__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 3)));
#line 417 "layout.m"
                                            {
#line 417 "layout.m"
                                              mdbcomp__prim_data____Compare____sym_name_0_0(&ll_backend__layout__V_72_72, ll_backend__layout__V_66_66, ll_backend__layout__V_69_69);
                                            }
#line 10504 "ll_backend.layout.c"
                                            ll_backend__layout__succeeded = (ll_backend__layout__V_72_72 == (MR_Integer) 0);
#line 417 "layout.m"
                                            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 417 "layout.m"
                                            if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                                              ll_backend__layout__V_6_6 = ll_backend__layout__V_72_72;
#line 417 "layout.m"
                                            else
#line 417 "layout.m"
                                              {
#line 417 "layout.m"
                                                MR_Word ll_backend__layout__V_73_73;

#line 417 "layout.m"
                                                {
#line 417 "layout.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_73_73, ll_backend__layout__V_67_67, ll_backend__layout__V_70_70);
                                                }
#line 10524 "ll_backend.layout.c"
                                                ll_backend__layout__succeeded = (ll_backend__layout__V_73_73 == (MR_Integer) 0);
#line 417 "layout.m"
                                                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 417 "layout.m"
                                                if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                                                  ll_backend__layout__V_6_6 = ll_backend__layout__V_73_73;
#line 417 "layout.m"
                                                else
#line 417 "layout.m"
                                                  {
#line 417 "layout.m"
                                                    mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_68_68, ll_backend__layout__V_71_71);
                                                  }
#line 417 "layout.m"
                                              }
#line 417 "layout.m"
                                            ll_backend__layout__succeeded = MR_TRUE;
#line 417 "layout.m"
                                          }
#line 417 "layout.m"
                                      }
#line 417 "layout.m"
                                    else
#line 417 "layout.m"
                                      if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 417 "layout.m"
                                        {
#line 417 "layout.m"
                                          MR_Word ll_backend__layout__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 417 "layout.m"
                                          MR_Integer ll_backend__layout__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 417 "layout.m"
                                          MR_Word ll_backend__layout__V_55_55;
#line 417 "layout.m"
                                          MR_Integer ll_backend__layout__V_56_56;
#line 417 "layout.m"
                                          MR_Word ll_backend__layout__V_57_57;

#line 417 "layout.m"
                                          ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 417 "layout.m"
                                          if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                                            {
#line 417 "layout.m"
                                              ll_backend__layout__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 417 "layout.m"
                                              ll_backend__layout__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 417 "layout.m"
                                              {
#line 417 "layout.m"
                                                mdbcomp__prim_data____Compare____sym_name_0_0(&ll_backend__layout__V_57_57, ll_backend__layout__V_53_53, ll_backend__layout__V_55_55);
                                              }
#line 10579 "ll_backend.layout.c"
                                              ll_backend__layout__succeeded = (ll_backend__layout__V_57_57 == (MR_Integer) 0);
#line 417 "layout.m"
                                              ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 417 "layout.m"
                                              if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                                                ll_backend__layout__V_6_6 = ll_backend__layout__V_57_57;
#line 417 "layout.m"
                                              else
#line 417 "layout.m"
                                                {
#line 417 "layout.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_54_54, ll_backend__layout__V_56_56);
                                                }
#line 417 "layout.m"
                                              ll_backend__layout__succeeded = MR_TRUE;
#line 417 "layout.m"
                                            }
#line 417 "layout.m"
                                        }
#line 417 "layout.m"
                                      else
#line 417 "layout.m"
                                        if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 417 "layout.m"
                                          {
#line 417 "layout.m"
                                            MR_Word ll_backend__layout__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 417 "layout.m"
                                            MR_Integer ll_backend__layout__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 417 "layout.m"
                                            MR_Word ll_backend__layout__V_76_76;
#line 417 "layout.m"
                                            MR_Integer ll_backend__layout__V_77_77;
#line 417 "layout.m"
                                            MR_Word ll_backend__layout__V_78_78;

#line 417 "layout.m"
                                            ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 11)));
#line 417 "layout.m"
                                            if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                                              {
#line 417 "layout.m"
                                                ll_backend__layout__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 417 "layout.m"
                                                ll_backend__layout__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 417 "layout.m"
                                                {
#line 417 "layout.m"
                                                  mdbcomp__prim_data____Compare____sym_name_0_0(&ll_backend__layout__V_78_78, ll_backend__layout__V_74_74, ll_backend__layout__V_76_76);
                                                }
#line 10632 "ll_backend.layout.c"
                                                ll_backend__layout__succeeded = (ll_backend__layout__V_78_78 == (MR_Integer) 0);
#line 417 "layout.m"
                                                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 417 "layout.m"
                                                if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                                                  ll_backend__layout__V_6_6 = ll_backend__layout__V_78_78;
#line 417 "layout.m"
                                                else
#line 417 "layout.m"
                                                  {
#line 417 "layout.m"
                                                    mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_75_75, ll_backend__layout__V_77_77);
                                                  }
#line 417 "layout.m"
                                                ll_backend__layout__succeeded = MR_TRUE;
#line 417 "layout.m"
                                              }
#line 417 "layout.m"
                                          }
#line 417 "layout.m"
                                        else
#line 417 "layout.m"
                                          if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 417 "layout.m"
                                            {
#line 417 "layout.m"
                                              MR_Word ll_backend__layout__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 417 "layout.m"
                                              MR_Word ll_backend__layout__V_38_38;

#line 417 "layout.m"
                                              ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 417 "layout.m"
                                              if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                                                {
#line 417 "layout.m"
                                                  ll_backend__layout__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 417 "layout.m"
                                                  {
#line 417 "layout.m"
                                                    mdbcomp__prim_data____Compare____sym_name_0_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_37_37, ll_backend__layout__V_38_38);
                                                  }
#line 417 "layout.m"
                                                  ll_backend__layout__succeeded = MR_TRUE;
#line 417 "layout.m"
                                                }
#line 417 "layout.m"
                                            }
#line 417 "layout.m"
                                          else
#line 417 "layout.m"
                                            if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 417 "layout.m"
                                              {
#line 417 "layout.m"
                                                MR_Word ll_backend__layout__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 417 "layout.m"
                                                MR_Integer ll_backend__layout__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 417 "layout.m"
                                                MR_Word ll_backend__layout__V_43_43;
#line 417 "layout.m"
                                                MR_Integer ll_backend__layout__V_44_44;
#line 417 "layout.m"
                                                MR_Word ll_backend__layout__V_45_45;

#line 417 "layout.m"
                                                ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 417 "layout.m"
                                                if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                                                  {
#line 417 "layout.m"
                                                    ll_backend__layout__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 417 "layout.m"
                                                    ll_backend__layout__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 417 "layout.m"
                                                    {
#line 417 "layout.m"
                                                      mdbcomp__prim_data____Compare____sym_name_0_0(&ll_backend__layout__V_45_45, ll_backend__layout__V_41_41, ll_backend__layout__V_43_43);
                                                    }
#line 10715 "ll_backend.layout.c"
                                                    ll_backend__layout__succeeded = (ll_backend__layout__V_45_45 == (MR_Integer) 0);
#line 417 "layout.m"
                                                    ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 417 "layout.m"
                                                    if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                                                      ll_backend__layout__V_6_6 = ll_backend__layout__V_45_45;
#line 417 "layout.m"
                                                    else
#line 417 "layout.m"
                                                      {
#line 417 "layout.m"
                                                        mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_42_42, ll_backend__layout__V_44_44);
                                                      }
#line 417 "layout.m"
                                                    ll_backend__layout__succeeded = MR_TRUE;
#line 417 "layout.m"
                                                  }
#line 417 "layout.m"
                                              }
#line 417 "layout.m"
                                            else
#line 417 "layout.m"
                                              if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 417 "layout.m"
                                                {
#line 417 "layout.m"
                                                  MR_Word ll_backend__layout__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 417 "layout.m"
                                                  MR_Word ll_backend__layout__V_82_82;

#line 417 "layout.m"
                                                  ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 13)));
#line 417 "layout.m"
                                                  if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                                                    {
#line 417 "layout.m"
                                                      ll_backend__layout__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 417 "layout.m"
                                                      {
#line 417 "layout.m"
                                                        mdbcomp__prim_data____Compare____sym_name_0_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_81_81, ll_backend__layout__V_82_82);
                                                      }
#line 417 "layout.m"
                                                      ll_backend__layout__succeeded = MR_TRUE;
#line 417 "layout.m"
                                                    }
#line 417 "layout.m"
                                                }
#line 417 "layout.m"
                                              else
#line 417 "layout.m"
                                                if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 417 "layout.m"
                                                  {
#line 417 "layout.m"
                                                    MR_Word ll_backend__layout__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 417 "layout.m"
                                                    MR_Word ll_backend__layout__V_40_40;

#line 417 "layout.m"
                                                    ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 417 "layout.m"
                                                    if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                                                      {
#line 417 "layout.m"
                                                        ll_backend__layout__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 417 "layout.m"
                                                        {
#line 417 "layout.m"
                                                          mdbcomp__prim_data____Compare____sym_name_0_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_39_39, ll_backend__layout__V_40_40);
                                                        }
#line 417 "layout.m"
                                                        ll_backend__layout__succeeded = MR_TRUE;
#line 417 "layout.m"
                                                      }
#line 417 "layout.m"
                                                  }
#line 417 "layout.m"
                                                else
#line 417 "layout.m"
                                                  if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 417 "layout.m"
                                                    {
#line 417 "layout.m"
                                                      MR_Word ll_backend__layout__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 417 "layout.m"
                                                      MR_Word ll_backend__layout__V_36_36;

#line 417 "layout.m"
                                                      ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 417 "layout.m"
                                                      if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                                                        {
#line 417 "layout.m"
                                                          ll_backend__layout__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 417 "layout.m"
                                                          {
#line 417 "layout.m"
                                                            mdbcomp__prim_data____Compare____sym_name_0_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_35_35, ll_backend__layout__V_36_36);
                                                          }
#line 417 "layout.m"
                                                          ll_backend__layout__succeeded = MR_TRUE;
#line 417 "layout.m"
                                                        }
#line 417 "layout.m"
                                                    }
#line 417 "layout.m"
                                                  else
#line 417 "layout.m"
                                                    {
#line 417 "layout.m"
                                                      MR_Word ll_backend__layout__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 417 "layout.m"
                                                      MR_Word ll_backend__layout__V_84_84;

#line 417 "layout.m"
                                                      ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 14)));
#line 417 "layout.m"
                                                      if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                                                        {
#line 417 "layout.m"
                                                          ll_backend__layout__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 417 "layout.m"
                                                          {
#line 417 "layout.m"
                                                            mdbcomp__prim_data____Compare____sym_name_0_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_83_83, ll_backend__layout__V_84_84);
                                                          }
#line 417 "layout.m"
                                                          ll_backend__layout__succeeded = MR_TRUE;
#line 417 "layout.m"
                                                        }
#line 417 "layout.m"
                                                    }
#line 417 "layout.m"
                if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_6_6;
#line 417 "layout.m"
                else
#line 417 "layout.m"
                  {
#line 417 "layout.m"
                    mercury__private_builtin__compare_error_0_p_0();
#line 417 "layout.m"
                    return;
                  }
#line 417 "layout.m"
              }
#line 417 "layout.m"
          }
#line 417 "layout.m"
      }
#line 417 "layout.m"
  }
#line 417 "layout.m"
}

#line 417 "layout.m"
void MR_CALL 
ll_backend__layout____Index____layout_name_0_0(
#line 417 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 417 "layout.m"
  MR_Integer * ll_backend__layout__HeadVar__2_2)
#line 417 "layout.m"
{
#line 417 "layout.m"
  {
#line 417 "layout.m"
    MR_bool ll_backend__layout__succeeded;

#line 417 "layout.m"
    if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 10894 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 1;
#line 417 "layout.m"
    else
#line 417 "layout.m"
      if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 10900 "ll_backend.layout.c"
        *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 2;
#line 417 "layout.m"
      else
#line 417 "layout.m"
        if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 10906 "ll_backend.layout.c"
          *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 0;
#line 417 "layout.m"
        else
#line 417 "layout.m"
          if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 10912 "ll_backend.layout.c"
            *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 4;
#line 417 "layout.m"
          else
#line 417 "layout.m"
            if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 10918 "ll_backend.layout.c"
              *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 3;
#line 417 "layout.m"
            else
#line 417 "layout.m"
              if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 10924 "ll_backend.layout.c"
                *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 18;
#line 417 "layout.m"
              else
#line 417 "layout.m"
                if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 10930 "ll_backend.layout.c"
                  *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 10;
#line 417 "layout.m"
                else
#line 417 "layout.m"
                  if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 10936 "ll_backend.layout.c"
                    *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 9;
#line 417 "layout.m"
                  else
#line 417 "layout.m"
                    if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 10942 "ll_backend.layout.c"
                      *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 15;
#line 417 "layout.m"
                    else
#line 417 "layout.m"
                      if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 10948 "ll_backend.layout.c"
                        *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 12;
#line 417 "layout.m"
                      else
#line 417 "layout.m"
                        if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 10954 "ll_backend.layout.c"
                          *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 13;
#line 417 "layout.m"
                        else
#line 417 "layout.m"
                          if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 10960 "ll_backend.layout.c"
                            *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 11;
#line 417 "layout.m"
                          else
#line 417 "layout.m"
                            if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 10966 "ll_backend.layout.c"
                              *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 14;
#line 417 "layout.m"
                            else
#line 417 "layout.m"
                              if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 10972 "ll_backend.layout.c"
                                *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 6;
#line 417 "layout.m"
                              else
#line 417 "layout.m"
                                if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 10978 "ll_backend.layout.c"
                                  *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 8;
#line 417 "layout.m"
                                else
#line 417 "layout.m"
                                  if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 10984 "ll_backend.layout.c"
                                    *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 16;
#line 417 "layout.m"
                                  else
#line 417 "layout.m"
                                    if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 10990 "ll_backend.layout.c"
                                      *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 7;
#line 417 "layout.m"
                                    else
#line 417 "layout.m"
                                      if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 10996 "ll_backend.layout.c"
                                        *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 5;
#line 417 "layout.m"
                                      else
#line 11000 "ll_backend.layout.c"
                                        *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 17;
#line 417 "layout.m"
  }
#line 417 "layout.m"
}

#line 417 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____layout_name_0_0(
#line 417 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 417 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 417 "layout.m"
{
#line 417 "layout.m"
  {
#line 417 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 417 "layout.m"
    MR_Integer ll_backend__layout__CastX_69 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 417 "layout.m"
    MR_Integer ll_backend__layout__CastY_70 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 417 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_69 == ll_backend__layout__CastY_70);
#line 417 "layout.m"
    if (ll_backend__layout__succeeded)
#line 417 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 417 "layout.m"
    else
#line 417 "layout.m"
      if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 417 "layout.m"
        {
#line 417 "layout.m"
          MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 417 "layout.m"
          MR_Integer ll_backend__layout__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 417 "layout.m"
          MR_Word ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 417 "layout.m"
          MR_Word ll_backend__layout__V_10_10;
#line 417 "layout.m"
          MR_Integer ll_backend__layout__V_11_11;
#line 417 "layout.m"
          MR_Word ll_backend__layout__V_12_12;

#line 417 "layout.m"
          ll_backend__layout__succeeded = ((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 417 "layout.m"
          if (ll_backend__layout__succeeded)
#line 417 "layout.m"
            {
#line 417 "layout.m"
              ll_backend__layout__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 417 "layout.m"
              ll_backend__layout__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 417 "layout.m"
              ll_backend__layout__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 11062 "ll_backend.layout.c"
              {
#line 11064 "ll_backend.layout.c"
                ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__layout__V_7_7, ll_backend__layout__V_10_10);
              }
#line 417 "layout.m"
              if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                {
#line 11071 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = (ll_backend__layout__V_8_8 == ll_backend__layout__V_11_11);
#line 417 "layout.m"
                  if (ll_backend__layout__succeeded)
#line 11075 "ll_backend.layout.c"
                    {
#line 11077 "ll_backend.layout.c"
                      return ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__layout__V_9_9, ll_backend__layout__V_12_12);
                    }
#line 417 "layout.m"
                }
#line 417 "layout.m"
            }
#line 417 "layout.m"
        }
#line 417 "layout.m"
      else
#line 417 "layout.m"
        if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 417 "layout.m"
          {
#line 417 "layout.m"
            MR_Word ll_backend__layout__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 417 "layout.m"
            MR_Integer ll_backend__layout__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 417 "layout.m"
            MR_Word ll_backend__layout__V_15_15;
#line 417 "layout.m"
            MR_Integer ll_backend__layout__V_16_16;

#line 417 "layout.m"
            ll_backend__layout__succeeded = ((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 417 "layout.m"
            if (ll_backend__layout__succeeded)
#line 417 "layout.m"
              {
#line 417 "layout.m"
                ll_backend__layout__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 417 "layout.m"
                ll_backend__layout__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 11111 "ll_backend.layout.c"
                {
#line 11113 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__layout__V_13_13, ll_backend__layout__V_15_15);
                }
#line 417 "layout.m"
                if (ll_backend__layout__succeeded)
#line 11118 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = (ll_backend__layout__V_14_14 == ll_backend__layout__V_16_16);
#line 417 "layout.m"
              }
#line 417 "layout.m"
          }
#line 417 "layout.m"
        else
#line 417 "layout.m"
          if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 417 "layout.m"
            {
#line 417 "layout.m"
              MR_Word ll_backend__layout__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 417 "layout.m"
              MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 417 "layout.m"
              MR_Word ll_backend__layout__V_5_5;
#line 417 "layout.m"
              MR_Word ll_backend__layout__V_6_6;

#line 417 "layout.m"
              ll_backend__layout__succeeded = ((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 417 "layout.m"
              if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                {
#line 417 "layout.m"
                  ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 417 "layout.m"
                  ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 11149 "ll_backend.layout.c"
                  {
#line 11151 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = hlds__hlds_rtti____Unify____rtti_proc_label_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_5_5);
                  }
#line 417 "layout.m"
                  if (ll_backend__layout__succeeded)
#line 11156 "ll_backend.layout.c"
                    {
#line 11158 "ll_backend.layout.c"
                      return ll_backend__layout__succeeded = ll_backend__layout____Unify____proc_layout_kind_0_0(ll_backend__layout__V_4_4, ll_backend__layout__V_6_6);
                    }
#line 417 "layout.m"
                }
#line 417 "layout.m"
            }
#line 417 "layout.m"
          else
#line 417 "layout.m"
            if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 417 "layout.m"
              {
#line 417 "layout.m"
                MR_Word ll_backend__layout__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 417 "layout.m"
                MR_Integer ll_backend__layout__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 417 "layout.m"
                MR_Word ll_backend__layout__V_23_23;
#line 417 "layout.m"
                MR_Integer ll_backend__layout__V_24_24;

#line 417 "layout.m"
                ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 417 "layout.m"
                if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                  {
#line 417 "layout.m"
                    ll_backend__layout__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 417 "layout.m"
                    ll_backend__layout__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 11190 "ll_backend.layout.c"
                    {
#line 11192 "ll_backend.layout.c"
                      ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__layout__V_21_21, ll_backend__layout__V_23_23);
                    }
#line 417 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 11197 "ll_backend.layout.c"
                      ll_backend__layout__succeeded = (ll_backend__layout__V_22_22 == ll_backend__layout__V_24_24);
#line 417 "layout.m"
                  }
#line 417 "layout.m"
              }
#line 417 "layout.m"
            else
#line 417 "layout.m"
              if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 417 "layout.m"
                {
#line 417 "layout.m"
                  MR_Word ll_backend__layout__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 417 "layout.m"
                  MR_Integer ll_backend__layout__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 417 "layout.m"
                  MR_Word ll_backend__layout__V_19_19;
#line 417 "layout.m"
                  MR_Integer ll_backend__layout__V_20_20;

#line 417 "layout.m"
                  ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 417 "layout.m"
                  if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                    {
#line 417 "layout.m"
                      ll_backend__layout__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 417 "layout.m"
                      ll_backend__layout__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 11228 "ll_backend.layout.c"
                      {
#line 11230 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__layout__V_17_17, ll_backend__layout__V_19_19);
                      }
#line 417 "layout.m"
                      if (ll_backend__layout__succeeded)
#line 11235 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = (ll_backend__layout__V_18_18 == ll_backend__layout__V_20_20);
#line 417 "layout.m"
                    }
#line 417 "layout.m"
                }
#line 417 "layout.m"
              else
#line 417 "layout.m"
                if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 417 "layout.m"
                  {
#line 417 "layout.m"
                    MR_Word ll_backend__layout__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 417 "layout.m"
                    MR_Word ll_backend__layout__V_68_68;

#line 417 "layout.m"
                    ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 15)));
#line 417 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                      {
#line 417 "layout.m"
                        ll_backend__layout__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 11260 "ll_backend.layout.c"
                        {
#line 11262 "ll_backend.layout.c"
                          return ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__layout__V_67_67, ll_backend__layout__V_68_68);
                        }
#line 417 "layout.m"
                      }
#line 417 "layout.m"
                  }
#line 417 "layout.m"
                else
#line 417 "layout.m"
                  if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 417 "layout.m"
                    {
#line 417 "layout.m"
                      MR_Word ll_backend__layout__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 417 "layout.m"
                      MR_Integer ll_backend__layout__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 417 "layout.m"
                      MR_Word ll_backend__layout__V_39_39;
#line 417 "layout.m"
                      MR_Integer ll_backend__layout__V_40_40;

#line 417 "layout.m"
                      ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 417 "layout.m"
                      if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                        {
#line 417 "layout.m"
                          ll_backend__layout__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 417 "layout.m"
                          ll_backend__layout__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 11294 "ll_backend.layout.c"
                          {
#line 11296 "ll_backend.layout.c"
                            ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__layout__V_37_37, ll_backend__layout__V_39_39);
                          }
#line 417 "layout.m"
                          if (ll_backend__layout__succeeded)
#line 11301 "ll_backend.layout.c"
                            ll_backend__layout__succeeded = (ll_backend__layout__V_38_38 == ll_backend__layout__V_40_40);
#line 417 "layout.m"
                        }
#line 417 "layout.m"
                    }
#line 417 "layout.m"
                  else
#line 417 "layout.m"
                    if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 417 "layout.m"
                      {
#line 417 "layout.m"
                        MR_Word ll_backend__layout__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 417 "layout.m"
                        MR_Word ll_backend__layout__V_36_36;

#line 417 "layout.m"
                        ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 417 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                          {
#line 417 "layout.m"
                            ll_backend__layout__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 11326 "ll_backend.layout.c"
                            {
#line 11328 "ll_backend.layout.c"
                              return ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__layout__V_35_35, ll_backend__layout__V_36_36);
                            }
#line 417 "layout.m"
                          }
#line 417 "layout.m"
                      }
#line 417 "layout.m"
                    else
#line 417 "layout.m"
                      if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 417 "layout.m"
                        {
#line 417 "layout.m"
                          MR_Word ll_backend__layout__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 417 "layout.m"
                          MR_Word ll_backend__layout__V_62_62;

#line 417 "layout.m"
                          ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12)));
#line 417 "layout.m"
                          if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                            {
#line 417 "layout.m"
                              ll_backend__layout__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 11354 "ll_backend.layout.c"
                              {
#line 11356 "ll_backend.layout.c"
                                return ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__layout__V_61_61, ll_backend__layout__V_62_62);
                              }
#line 417 "layout.m"
                            }
#line 417 "layout.m"
                        }
#line 417 "layout.m"
                      else
#line 417 "layout.m"
                        if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 417 "layout.m"
                          {
#line 417 "layout.m"
                            MR_Word ll_backend__layout__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 417 "layout.m"
                            MR_Integer ll_backend__layout__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 417 "layout.m"
                            MR_Integer ll_backend__layout__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 3)));
#line 417 "layout.m"
                            MR_Word ll_backend__layout__V_48_48;
#line 417 "layout.m"
                            MR_Integer ll_backend__layout__V_49_49;
#line 417 "layout.m"
                            MR_Integer ll_backend__layout__V_50_50;

#line 417 "layout.m"
                            ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 417 "layout.m"
                            if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                              {
#line 417 "layout.m"
                                ll_backend__layout__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 417 "layout.m"
                                ll_backend__layout__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 417 "layout.m"
                                ll_backend__layout__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 11394 "ll_backend.layout.c"
                                {
#line 11396 "ll_backend.layout.c"
                                  ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__layout__V_45_45, ll_backend__layout__V_48_48);
                                }
#line 417 "layout.m"
                                if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                                  {
#line 11403 "ll_backend.layout.c"
                                    ll_backend__layout__succeeded = (ll_backend__layout__V_46_46 == ll_backend__layout__V_49_49);
#line 417 "layout.m"
                                    if (ll_backend__layout__succeeded)
#line 11407 "ll_backend.layout.c"
                                      ll_backend__layout__succeeded = (ll_backend__layout__V_47_47 == ll_backend__layout__V_50_50);
#line 417 "layout.m"
                                  }
#line 417 "layout.m"
                              }
#line 417 "layout.m"
                          }
#line 417 "layout.m"
                        else
#line 417 "layout.m"
                          if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 417 "layout.m"
                            {
#line 417 "layout.m"
                              MR_Word ll_backend__layout__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 417 "layout.m"
                              MR_Integer ll_backend__layout__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 417 "layout.m"
                              MR_Integer ll_backend__layout__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 3)));
#line 417 "layout.m"
                              MR_Word ll_backend__layout__V_54_54;
#line 417 "layout.m"
                              MR_Integer ll_backend__layout__V_55_55;
#line 417 "layout.m"
                              MR_Integer ll_backend__layout__V_56_56;

#line 417 "layout.m"
                              ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 417 "layout.m"
                              if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                                {
#line 417 "layout.m"
                                  ll_backend__layout__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 417 "layout.m"
                                  ll_backend__layout__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 417 "layout.m"
                                  ll_backend__layout__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 11446 "ll_backend.layout.c"
                                  {
#line 11448 "ll_backend.layout.c"
                                    ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__layout__V_51_51, ll_backend__layout__V_54_54);
                                  }
#line 417 "layout.m"
                                  if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                                    {
#line 11455 "ll_backend.layout.c"
                                      ll_backend__layout__succeeded = (ll_backend__layout__V_52_52 == ll_backend__layout__V_55_55);
#line 417 "layout.m"
                                      if (ll_backend__layout__succeeded)
#line 11459 "ll_backend.layout.c"
                                        ll_backend__layout__succeeded = (ll_backend__layout__V_53_53 == ll_backend__layout__V_56_56);
#line 417 "layout.m"
                                    }
#line 417 "layout.m"
                                }
#line 417 "layout.m"
                            }
#line 417 "layout.m"
                          else
#line 417 "layout.m"
                            if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 417 "layout.m"
                              {
#line 417 "layout.m"
                                MR_Word ll_backend__layout__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 417 "layout.m"
                                MR_Integer ll_backend__layout__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 417 "layout.m"
                                MR_Word ll_backend__layout__V_43_43;
#line 417 "layout.m"
                                MR_Integer ll_backend__layout__V_44_44;

#line 417 "layout.m"
                                ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 417 "layout.m"
                                if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                                  {
#line 417 "layout.m"
                                    ll_backend__layout__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 417 "layout.m"
                                    ll_backend__layout__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 11492 "ll_backend.layout.c"
                                    {
#line 11494 "ll_backend.layout.c"
                                      ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__layout__V_41_41, ll_backend__layout__V_43_43);
                                    }
#line 417 "layout.m"
                                    if (ll_backend__layout__succeeded)
#line 11499 "ll_backend.layout.c"
                                      ll_backend__layout__succeeded = (ll_backend__layout__V_42_42 == ll_backend__layout__V_44_44);
#line 417 "layout.m"
                                  }
#line 417 "layout.m"
                              }
#line 417 "layout.m"
                            else
#line 417 "layout.m"
                              if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 417 "layout.m"
                                {
#line 417 "layout.m"
                                  MR_Word ll_backend__layout__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 417 "layout.m"
                                  MR_Integer ll_backend__layout__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 417 "layout.m"
                                  MR_Word ll_backend__layout__V_59_59;
#line 417 "layout.m"
                                  MR_Integer ll_backend__layout__V_60_60;

#line 417 "layout.m"
                                  ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11)));
#line 417 "layout.m"
                                  if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                                    {
#line 417 "layout.m"
                                      ll_backend__layout__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 417 "layout.m"
                                      ll_backend__layout__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 11530 "ll_backend.layout.c"
                                      {
#line 11532 "ll_backend.layout.c"
                                        ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__layout__V_57_57, ll_backend__layout__V_59_59);
                                      }
#line 417 "layout.m"
                                      if (ll_backend__layout__succeeded)
#line 11537 "ll_backend.layout.c"
                                        ll_backend__layout__succeeded = (ll_backend__layout__V_58_58 == ll_backend__layout__V_60_60);
#line 417 "layout.m"
                                    }
#line 417 "layout.m"
                                }
#line 417 "layout.m"
                              else
#line 417 "layout.m"
                                if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 417 "layout.m"
                                  {
#line 417 "layout.m"
                                    MR_Word ll_backend__layout__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 417 "layout.m"
                                    MR_Word ll_backend__layout__V_28_28;

#line 417 "layout.m"
                                    ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 417 "layout.m"
                                    if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                                      {
#line 417 "layout.m"
                                        ll_backend__layout__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 11562 "ll_backend.layout.c"
                                        {
#line 11564 "ll_backend.layout.c"
                                          return ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__layout__V_27_27, ll_backend__layout__V_28_28);
                                        }
#line 417 "layout.m"
                                      }
#line 417 "layout.m"
                                  }
#line 417 "layout.m"
                                else
#line 417 "layout.m"
                                  if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 417 "layout.m"
                                    {
#line 417 "layout.m"
                                      MR_Word ll_backend__layout__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 417 "layout.m"
                                      MR_Integer ll_backend__layout__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 417 "layout.m"
                                      MR_Word ll_backend__layout__V_33_33;
#line 417 "layout.m"
                                      MR_Integer ll_backend__layout__V_34_34;

#line 417 "layout.m"
                                      ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 417 "layout.m"
                                      if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                                        {
#line 417 "layout.m"
                                          ll_backend__layout__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 417 "layout.m"
                                          ll_backend__layout__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 11596 "ll_backend.layout.c"
                                          {
#line 11598 "ll_backend.layout.c"
                                            ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__layout__V_31_31, ll_backend__layout__V_33_33);
                                          }
#line 417 "layout.m"
                                          if (ll_backend__layout__succeeded)
#line 11603 "ll_backend.layout.c"
                                            ll_backend__layout__succeeded = (ll_backend__layout__V_32_32 == ll_backend__layout__V_34_34);
#line 417 "layout.m"
                                        }
#line 417 "layout.m"
                                    }
#line 417 "layout.m"
                                  else
#line 417 "layout.m"
                                    if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 417 "layout.m"
                                      {
#line 417 "layout.m"
                                        MR_Word ll_backend__layout__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 417 "layout.m"
                                        MR_Word ll_backend__layout__V_64_64;

#line 417 "layout.m"
                                        ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 13)));
#line 417 "layout.m"
                                        if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                                          {
#line 417 "layout.m"
                                            ll_backend__layout__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 11628 "ll_backend.layout.c"
                                            {
#line 11630 "ll_backend.layout.c"
                                              return ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__layout__V_63_63, ll_backend__layout__V_64_64);
                                            }
#line 417 "layout.m"
                                          }
#line 417 "layout.m"
                                      }
#line 417 "layout.m"
                                    else
#line 417 "layout.m"
                                      if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 417 "layout.m"
                                        {
#line 417 "layout.m"
                                          MR_Word ll_backend__layout__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 417 "layout.m"
                                          MR_Word ll_backend__layout__V_30_30;

#line 417 "layout.m"
                                          ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 417 "layout.m"
                                          if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                                            {
#line 417 "layout.m"
                                              ll_backend__layout__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 11656 "ll_backend.layout.c"
                                              {
#line 11658 "ll_backend.layout.c"
                                                return ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__layout__V_29_29, ll_backend__layout__V_30_30);
                                              }
#line 417 "layout.m"
                                            }
#line 417 "layout.m"
                                        }
#line 417 "layout.m"
                                      else
#line 417 "layout.m"
                                        if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 417 "layout.m"
                                          {
#line 417 "layout.m"
                                            MR_Word ll_backend__layout__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 417 "layout.m"
                                            MR_Word ll_backend__layout__V_26_26;

#line 417 "layout.m"
                                            ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 417 "layout.m"
                                            if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                                              {
#line 417 "layout.m"
                                                ll_backend__layout__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 11684 "ll_backend.layout.c"
                                                {
#line 11686 "ll_backend.layout.c"
                                                  return ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__layout__V_25_25, ll_backend__layout__V_26_26);
                                                }
#line 417 "layout.m"
                                              }
#line 417 "layout.m"
                                          }
#line 417 "layout.m"
                                        else
#line 417 "layout.m"
                                          {
#line 417 "layout.m"
                                            MR_Word ll_backend__layout__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 417 "layout.m"
                                            MR_Word ll_backend__layout__V_66_66;

#line 417 "layout.m"
                                            ll_backend__layout__succeeded = ((((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 14)));
#line 417 "layout.m"
                                            if (ll_backend__layout__succeeded)
#line 417 "layout.m"
                                              {
#line 417 "layout.m"
                                                ll_backend__layout__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 11710 "ll_backend.layout.c"
                                                {
#line 11712 "ll_backend.layout.c"
                                                  return ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__layout__V_65_65, ll_backend__layout__V_66_66);
                                                }
#line 417 "layout.m"
                                              }
#line 417 "layout.m"
                                          }
#line 417 "layout.m"
    return ll_backend__layout__succeeded;
#line 417 "layout.m"
  }
#line 417 "layout.m"
}

#line 357 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____layout_array_name_0_0(
#line 357 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 357 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 357 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 357 "layout.m"
{
#line 357 "layout.m"
  {
#line 357 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 357 "layout.m"
    MR_Integer ll_backend__layout__CastX_9 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 357 "layout.m"
    MR_Integer ll_backend__layout__CastY_10 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 357 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_9 == ll_backend__layout__CastY_10);
#line 357 "layout.m"
    if (ll_backend__layout__succeeded)
#line 11750 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 357 "layout.m"
    else
#line 357 "layout.m"
      {
#line 357 "layout.m"
        MR_Integer ll_backend__layout__V_4_4;
#line 357 "layout.m"
        MR_Integer ll_backend__layout__V_5_5;

#line 357 "layout.m"
        {
#line 357 "layout.m"
          ll_backend__layout____Index____layout_array_name_0_0(ll_backend__layout__HeadVar__2_2, &ll_backend__layout__V_4_4);
        }
#line 357 "layout.m"
        {
#line 357 "layout.m"
          ll_backend__layout____Index____layout_array_name_0_0(ll_backend__layout__HeadVar__3_3, &ll_backend__layout__V_5_5);
        }
#line 357 "layout.m"
        ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 < ll_backend__layout__V_5_5);
#line 357 "layout.m"
        if (ll_backend__layout__succeeded)
#line 11775 "ll_backend.layout.c"
          *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 1;
#line 357 "layout.m"
        else
#line 357 "layout.m"
          {
#line 357 "layout.m"
            ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 > ll_backend__layout__V_5_5);
#line 357 "layout.m"
            if (ll_backend__layout__succeeded)
#line 11785 "ll_backend.layout.c"
              *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 2;
#line 357 "layout.m"
            else
#line 357 "layout.m"
              {
#line 357 "layout.m"
                MR_Word ll_backend__layout__V_6_6;

#line 357 "layout.m"
                if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 357 "layout.m"
                  {
#line 357 "layout.m"
                    ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 357 "layout.m"
                    ll_backend__layout__succeeded = MR_TRUE;
#line 357 "layout.m"
                  }
#line 357 "layout.m"
                else
#line 357 "layout.m"
                  if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 357 "layout.m"
                    {
#line 357 "layout.m"
                      ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 357 "layout.m"
                      ll_backend__layout__succeeded = MR_TRUE;
#line 357 "layout.m"
                    }
#line 357 "layout.m"
                  else
#line 357 "layout.m"
                    if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 357 "layout.m"
                      {
#line 357 "layout.m"
                        ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 357 "layout.m"
                        ll_backend__layout__succeeded = MR_TRUE;
#line 357 "layout.m"
                      }
#line 357 "layout.m"
                    else
#line 357 "layout.m"
                      if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 357 "layout.m"
                        {
#line 357 "layout.m"
                          ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 357 "layout.m"
                          ll_backend__layout__succeeded = MR_TRUE;
#line 357 "layout.m"
                        }
#line 357 "layout.m"
                      else
#line 357 "layout.m"
                        if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 357 "layout.m"
                          {
#line 357 "layout.m"
                            ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 357 "layout.m"
                            ll_backend__layout__succeeded = MR_TRUE;
#line 357 "layout.m"
                          }
#line 357 "layout.m"
                        else
#line 357 "layout.m"
                          if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 357 "layout.m"
                            {
#line 357 "layout.m"
                              ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 357 "layout.m"
                              ll_backend__layout__succeeded = MR_TRUE;
#line 357 "layout.m"
                            }
#line 357 "layout.m"
                          else
#line 357 "layout.m"
                            if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 357 "layout.m"
                              {
#line 357 "layout.m"
                                ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 357 "layout.m"
                                ll_backend__layout__succeeded = MR_TRUE;
#line 357 "layout.m"
                              }
#line 357 "layout.m"
                            else
#line 357 "layout.m"
                              if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 357 "layout.m"
                                {
#line 357 "layout.m"
                                  ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 357 "layout.m"
                                  ll_backend__layout__succeeded = MR_TRUE;
#line 357 "layout.m"
                                }
#line 357 "layout.m"
                              else
#line 357 "layout.m"
                                if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 357 "layout.m"
                                  {
#line 357 "layout.m"
                                    ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 357 "layout.m"
                                    ll_backend__layout__succeeded = MR_TRUE;
#line 357 "layout.m"
                                  }
#line 357 "layout.m"
                                else
#line 357 "layout.m"
                                  if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 357 "layout.m"
                                    {
#line 357 "layout.m"
                                      ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 357 "layout.m"
                                      ll_backend__layout__succeeded = MR_TRUE;
#line 357 "layout.m"
                                    }
#line 357 "layout.m"
                                  else
#line 357 "layout.m"
                                    if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 357 "layout.m"
                                      {
#line 357 "layout.m"
                                        ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 357 "layout.m"
                                        ll_backend__layout__succeeded = MR_TRUE;
#line 357 "layout.m"
                                      }
#line 357 "layout.m"
                                    else
#line 357 "layout.m"
                                      if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 357 "layout.m"
                                        {
#line 357 "layout.m"
                                          ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 357 "layout.m"
                                          ll_backend__layout__succeeded = MR_TRUE;
#line 357 "layout.m"
                                        }
#line 357 "layout.m"
                                      else
#line 357 "layout.m"
                                        if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 357 "layout.m"
                                          {
#line 357 "layout.m"
                                            ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 357 "layout.m"
                                            ll_backend__layout__succeeded = MR_TRUE;
#line 357 "layout.m"
                                          }
#line 357 "layout.m"
                                        else
#line 357 "layout.m"
                                          if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 357 "layout.m"
                                            {
#line 357 "layout.m"
                                              ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 357 "layout.m"
                                              ll_backend__layout__succeeded = MR_TRUE;
#line 357 "layout.m"
                                            }
#line 357 "layout.m"
                                          else
#line 357 "layout.m"
                                            if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 357 "layout.m"
                                              {
#line 357 "layout.m"
                                                ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 357 "layout.m"
                                                ll_backend__layout__succeeded = MR_TRUE;
#line 357 "layout.m"
                                              }
#line 357 "layout.m"
                                            else
#line 357 "layout.m"
                                              if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 357 "layout.m"
                                                {
#line 357 "layout.m"
                                                  ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 357 "layout.m"
                                                  ll_backend__layout__succeeded = MR_TRUE;
#line 357 "layout.m"
                                                }
#line 357 "layout.m"
                                              else
#line 357 "layout.m"
                                                if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 357 "layout.m"
                                                  {
#line 357 "layout.m"
                                                    ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 357 "layout.m"
                                                    ll_backend__layout__succeeded = MR_TRUE;
#line 357 "layout.m"
                                                  }
#line 357 "layout.m"
                                                else
#line 357 "layout.m"
                                                  if ((ll_backend__layout__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 357 "layout.m"
                                                    {
#line 357 "layout.m"
                                                      ll_backend__layout__V_6_6 = (MR_Integer) 0;
#line 357 "layout.m"
                                                      ll_backend__layout__succeeded = MR_TRUE;
#line 357 "layout.m"
                                                    }
#line 357 "layout.m"
                                                  else
#line 357 "layout.m"
                                                    {
#line 357 "layout.m"
                                                      MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 357 "layout.m"
                                                      MR_Word ll_backend__layout__V_8_8;
#line 357 "layout.m"
                                                      MR_Integer ll_backend__layout__V_12_12;
#line 357 "layout.m"
                                                      MR_Integer ll_backend__layout__V_13_13;

#line 357 "layout.m"
                                                      ll_backend__layout__succeeded = ((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 357 "layout.m"
                                                      if (ll_backend__layout__succeeded)
#line 357 "layout.m"
                                                        {
#line 357 "layout.m"
                                                          ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 357 "layout.m"
                                                          ll_backend__layout__V_12_12 = (MR_Integer) ll_backend__layout__V_7_7;
#line 357 "layout.m"
                                                          ll_backend__layout__V_13_13 = (MR_Integer) ll_backend__layout__V_8_8;
#line 357 "layout.m"
                                                          {
#line 357 "layout.m"
                                                            mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__layout__V_6_6, ll_backend__layout__V_12_12, ll_backend__layout__V_13_13);
                                                          }
#line 357 "layout.m"
                                                          ll_backend__layout__succeeded = MR_TRUE;
#line 357 "layout.m"
                                                        }
#line 357 "layout.m"
                                                    }
#line 357 "layout.m"
                if (ll_backend__layout__succeeded)
#line 357 "layout.m"
                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_6_6;
#line 357 "layout.m"
                else
#line 357 "layout.m"
                  {
#line 357 "layout.m"
                    mercury__private_builtin__compare_error_0_p_0();
#line 357 "layout.m"
                    return;
                  }
#line 357 "layout.m"
              }
#line 357 "layout.m"
          }
#line 357 "layout.m"
      }
#line 357 "layout.m"
  }
#line 357 "layout.m"
}

#line 357 "layout.m"
void MR_CALL 
ll_backend__layout____Index____layout_array_name_0_0(
#line 357 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 357 "layout.m"
  MR_Integer * ll_backend__layout__HeadVar__2_2)
#line 357 "layout.m"
{
#line 357 "layout.m"
  {
#line 357 "layout.m"
    MR_bool ll_backend__layout__succeeded;

#line 357 "layout.m"
    if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 12084 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 18;
#line 357 "layout.m"
    else
#line 357 "layout.m"
      if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 12090 "ll_backend.layout.c"
        *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 1;
#line 357 "layout.m"
      else
#line 357 "layout.m"
        if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 12096 "ll_backend.layout.c"
          *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 3;
#line 357 "layout.m"
        else
#line 357 "layout.m"
          if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 12102 "ll_backend.layout.c"
            *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 13;
#line 357 "layout.m"
          else
#line 357 "layout.m"
            if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 12108 "ll_backend.layout.c"
              *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 15;
#line 357 "layout.m"
            else
#line 357 "layout.m"
              if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 12114 "ll_backend.layout.c"
                *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 16;
#line 357 "layout.m"
              else
#line 357 "layout.m"
                if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 12120 "ll_backend.layout.c"
                  *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 11;
#line 357 "layout.m"
                else
#line 357 "layout.m"
                  if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 12126 "ll_backend.layout.c"
                    *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 10;
#line 357 "layout.m"
                  else
#line 357 "layout.m"
                    if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 12132 "ll_backend.layout.c"
                      *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 7;
#line 357 "layout.m"
                    else
#line 357 "layout.m"
                      if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 12138 "ll_backend.layout.c"
                        *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 9;
#line 357 "layout.m"
                      else
#line 357 "layout.m"
                        if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 12144 "ll_backend.layout.c"
                          *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 8;
#line 357 "layout.m"
                        else
#line 357 "layout.m"
                          if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 12150 "ll_backend.layout.c"
                            *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 14;
#line 357 "layout.m"
                          else
#line 357 "layout.m"
                            if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 12156 "ll_backend.layout.c"
                              *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 12;
#line 357 "layout.m"
                            else
#line 357 "layout.m"
                              if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 12162 "ll_backend.layout.c"
                                *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 0;
#line 357 "layout.m"
                              else
#line 357 "layout.m"
                                if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 12168 "ll_backend.layout.c"
                                  *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 2;
#line 357 "layout.m"
                                else
#line 357 "layout.m"
                                  if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 12174 "ll_backend.layout.c"
                                    *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 17;
#line 357 "layout.m"
                                  else
#line 357 "layout.m"
                                    if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 12180 "ll_backend.layout.c"
                                      *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 4;
#line 357 "layout.m"
                                    else
#line 357 "layout.m"
                                      if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 12186 "ll_backend.layout.c"
                                        *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 5;
#line 357 "layout.m"
                                      else
#line 12190 "ll_backend.layout.c"
                                        *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 6;
#line 357 "layout.m"
  }
#line 357 "layout.m"
}

#line 357 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____layout_array_name_0_0(
#line 357 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 357 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 357 "layout.m"
{
#line 357 "layout.m"
  {
#line 357 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 357 "layout.m"
    MR_Integer ll_backend__layout__CastX_41 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 357 "layout.m"
    MR_Integer ll_backend__layout__CastY_42 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 357 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_41 == ll_backend__layout__CastY_42);
#line 357 "layout.m"
    if (ll_backend__layout__succeeded)
#line 357 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 357 "layout.m"
    else
#line 357 "layout.m"
      if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 357 "layout.m"
        {
#line 357 "layout.m"
          MR_Integer ll_backend__layout__CastX_39 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 357 "layout.m"
          MR_Integer ll_backend__layout__CastY_40 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 357 "layout.m"
          ll_backend__layout__succeeded = (ll_backend__layout__CastY_40 == ll_backend__layout__CastX_39);
#line 357 "layout.m"
        }
#line 357 "layout.m"
      else
#line 357 "layout.m"
        if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 357 "layout.m"
          {
#line 357 "layout.m"
            MR_Integer ll_backend__layout__CastX_5 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 357 "layout.m"
            MR_Integer ll_backend__layout__CastY_6 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 357 "layout.m"
            ll_backend__layout__succeeded = (ll_backend__layout__CastY_6 == ll_backend__layout__CastX_5);
#line 357 "layout.m"
          }
#line 357 "layout.m"
        else
#line 357 "layout.m"
          if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 357 "layout.m"
            {
#line 357 "layout.m"
              MR_Integer ll_backend__layout__CastX_9 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 357 "layout.m"
              MR_Integer ll_backend__layout__CastY_10 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 357 "layout.m"
              ll_backend__layout__succeeded = (ll_backend__layout__CastY_10 == ll_backend__layout__CastX_9);
#line 357 "layout.m"
            }
#line 357 "layout.m"
          else
#line 357 "layout.m"
            if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 357 "layout.m"
              {
#line 357 "layout.m"
                MR_Integer ll_backend__layout__CastX_29 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 357 "layout.m"
                MR_Integer ll_backend__layout__CastY_30 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 357 "layout.m"
                ll_backend__layout__succeeded = (ll_backend__layout__CastY_30 == ll_backend__layout__CastX_29);
#line 357 "layout.m"
              }
#line 357 "layout.m"
            else
#line 357 "layout.m"
              if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 357 "layout.m"
                {
#line 357 "layout.m"
                  MR_Integer ll_backend__layout__CastX_33 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 357 "layout.m"
                  MR_Integer ll_backend__layout__CastY_34 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 357 "layout.m"
                  ll_backend__layout__succeeded = (ll_backend__layout__CastY_34 == ll_backend__layout__CastX_33);
#line 357 "layout.m"
                }
#line 357 "layout.m"
              else
#line 357 "layout.m"
                if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 357 "layout.m"
                  {
#line 357 "layout.m"
                    MR_Integer ll_backend__layout__CastX_35 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 357 "layout.m"
                    MR_Integer ll_backend__layout__CastY_36 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 357 "layout.m"
                    ll_backend__layout__succeeded = (ll_backend__layout__CastY_36 == ll_backend__layout__CastX_35);
#line 357 "layout.m"
                  }
#line 357 "layout.m"
                else
#line 357 "layout.m"
                  if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 357 "layout.m"
                    {
#line 357 "layout.m"
                      MR_Integer ll_backend__layout__CastX_25 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 357 "layout.m"
                      MR_Integer ll_backend__layout__CastY_26 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 357 "layout.m"
                      ll_backend__layout__succeeded = (ll_backend__layout__CastY_26 == ll_backend__layout__CastX_25);
#line 357 "layout.m"
                    }
#line 357 "layout.m"
                  else
#line 357 "layout.m"
                    if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 357 "layout.m"
                      {
#line 357 "layout.m"
                        MR_Integer ll_backend__layout__CastX_23 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 357 "layout.m"
                        MR_Integer ll_backend__layout__CastY_24 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 357 "layout.m"
                        ll_backend__layout__succeeded = (ll_backend__layout__CastY_24 == ll_backend__layout__CastX_23);
#line 357 "layout.m"
                      }
#line 357 "layout.m"
                    else
#line 357 "layout.m"
                      if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 357 "layout.m"
                        {
#line 357 "layout.m"
                          MR_Integer ll_backend__layout__CastX_17 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 357 "layout.m"
                          MR_Integer ll_backend__layout__CastY_18 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 357 "layout.m"
                          ll_backend__layout__succeeded = (ll_backend__layout__CastY_18 == ll_backend__layout__CastX_17);
#line 357 "layout.m"
                        }
#line 357 "layout.m"
                      else
#line 357 "layout.m"
                        if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 357 "layout.m"
                          {
#line 357 "layout.m"
                            MR_Integer ll_backend__layout__CastX_21 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 357 "layout.m"
                            MR_Integer ll_backend__layout__CastY_22 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 357 "layout.m"
                            ll_backend__layout__succeeded = (ll_backend__layout__CastY_22 == ll_backend__layout__CastX_21);
#line 357 "layout.m"
                          }
#line 357 "layout.m"
                        else
#line 357 "layout.m"
                          if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 357 "layout.m"
                            {
#line 357 "layout.m"
                              MR_Integer ll_backend__layout__CastX_19 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 357 "layout.m"
                              MR_Integer ll_backend__layout__CastY_20 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 357 "layout.m"
                              ll_backend__layout__succeeded = (ll_backend__layout__CastY_20 == ll_backend__layout__CastX_19);
#line 357 "layout.m"
                            }
#line 357 "layout.m"
                          else
#line 357 "layout.m"
                            if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 357 "layout.m"
                              {
#line 357 "layout.m"
                                MR_Integer ll_backend__layout__CastX_31 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 357 "layout.m"
                                MR_Integer ll_backend__layout__CastY_32 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 357 "layout.m"
                                ll_backend__layout__succeeded = (ll_backend__layout__CastY_32 == ll_backend__layout__CastX_31);
#line 357 "layout.m"
                              }
#line 357 "layout.m"
                            else
#line 357 "layout.m"
                              if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 357 "layout.m"
                                {
#line 357 "layout.m"
                                  MR_Integer ll_backend__layout__CastX_27 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 357 "layout.m"
                                  MR_Integer ll_backend__layout__CastY_28 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 357 "layout.m"
                                  ll_backend__layout__succeeded = (ll_backend__layout__CastY_28 == ll_backend__layout__CastX_27);
#line 357 "layout.m"
                                }
#line 357 "layout.m"
                              else
#line 357 "layout.m"
                                if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 357 "layout.m"
                                  {
#line 357 "layout.m"
                                    MR_Integer ll_backend__layout__CastX_3 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 357 "layout.m"
                                    MR_Integer ll_backend__layout__CastY_4 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 357 "layout.m"
                                    ll_backend__layout__succeeded = (ll_backend__layout__CastY_4 == ll_backend__layout__CastX_3);
#line 357 "layout.m"
                                  }
#line 357 "layout.m"
                                else
#line 357 "layout.m"
                                  if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 357 "layout.m"
                                    {
#line 357 "layout.m"
                                      MR_Integer ll_backend__layout__CastX_7 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 357 "layout.m"
                                      MR_Integer ll_backend__layout__CastY_8 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 357 "layout.m"
                                      ll_backend__layout__succeeded = (ll_backend__layout__CastY_8 == ll_backend__layout__CastX_7);
#line 357 "layout.m"
                                    }
#line 357 "layout.m"
                                  else
#line 357 "layout.m"
                                    if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 357 "layout.m"
                                      {
#line 357 "layout.m"
                                        MR_Integer ll_backend__layout__CastX_37 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 357 "layout.m"
                                        MR_Integer ll_backend__layout__CastY_38 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 357 "layout.m"
                                        ll_backend__layout__succeeded = (ll_backend__layout__CastY_38 == ll_backend__layout__CastX_37);
#line 357 "layout.m"
                                      }
#line 357 "layout.m"
                                    else
#line 357 "layout.m"
                                      if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 357 "layout.m"
                                        {
#line 357 "layout.m"
                                          MR_Integer ll_backend__layout__CastX_11 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 357 "layout.m"
                                          MR_Integer ll_backend__layout__CastY_12 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 357 "layout.m"
                                          ll_backend__layout__succeeded = (ll_backend__layout__CastY_12 == ll_backend__layout__CastX_11);
#line 357 "layout.m"
                                        }
#line 357 "layout.m"
                                      else
#line 357 "layout.m"
                                        if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 357 "layout.m"
                                          {
#line 357 "layout.m"
                                            MR_Integer ll_backend__layout__CastX_13 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 357 "layout.m"
                                            MR_Integer ll_backend__layout__CastY_14 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 357 "layout.m"
                                            ll_backend__layout__succeeded = (ll_backend__layout__CastY_14 == ll_backend__layout__CastX_13);
#line 357 "layout.m"
                                          }
#line 357 "layout.m"
                                        else
#line 357 "layout.m"
                                          {
#line 357 "layout.m"
                                            MR_Word ll_backend__layout__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 357 "layout.m"
                                            MR_Word ll_backend__layout__V_16_16;

#line 357 "layout.m"
                                            ll_backend__layout__succeeded = ((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 357 "layout.m"
                                            if (ll_backend__layout__succeeded)
#line 357 "layout.m"
                                              {
#line 357 "layout.m"
                                                ll_backend__layout__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 12508 "ll_backend.layout.c"
                                                ll_backend__layout__succeeded = (ll_backend__layout__V_15_15 == ll_backend__layout__V_16_16);
#line 357 "layout.m"
                                              }
#line 357 "layout.m"
                                          }
#line 357 "layout.m"
    return ll_backend__layout__succeeded;
#line 357 "layout.m"
  }
#line 357 "layout.m"
}

#line 349 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____label_vars_0_0(
#line 349 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 349 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 349 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 349 "layout.m"
{
#line 349 "layout.m"
  {
#line 349 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 349 "layout.m"
    MR_Integer ll_backend__layout__Cast_HeadVar1_4 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 349 "layout.m"
    MR_Integer ll_backend__layout__Cast_HeadVar2_5 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 349 "layout.m"
    {
#line 349 "layout.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__Cast_HeadVar1_4, ll_backend__layout__Cast_HeadVar2_5);
#line 349 "layout.m"
      return;
    }
#line 349 "layout.m"
  }
#line 349 "layout.m"
}

#line 349 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____label_vars_0_0(
#line 349 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_1,
#line 349 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 349 "layout.m"
{
#line 12562 "ll_backend.layout.c"
  {
#line 12564 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded = (ll_backend__layout__HeadVar__2_1 == ll_backend__layout__HeadVar__2_2);

#line 12567 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 12569 "ll_backend.layout.c"
  }
#line 349 "layout.m"
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
#line 12598 "ll_backend.layout.c"
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
#line 12632 "ll_backend.layout.c"
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
#line 12652 "ll_backend.layout.c"
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
#line 12672 "ll_backend.layout.c"
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
#line 12692 "ll_backend.layout.c"
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

#line 12771 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_3_3 == ll_backend__layout__V_8_8);
#line 92 "layout.m"
        if (ll_backend__layout__succeeded)
#line 92 "layout.m"
          {
#line 12777 "ll_backend.layout.c"
            {
#line 12779 "ll_backend.layout.c"
              ll_backend__layout__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__layout__V_4_4, ll_backend__layout__V_9_9);
            }
#line 92 "layout.m"
            if (ll_backend__layout__succeeded)
#line 92 "layout.m"
              {
#line 12786 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_5_5 == ll_backend__layout__V_10_10);
#line 92 "layout.m"
                if (ll_backend__layout__succeeded)
#line 92 "layout.m"
                  {
#line 12792 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = (ll_backend__layout__V_6_6 == ll_backend__layout__V_11_11);
#line 92 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 12796 "ll_backend.layout.c"
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
#line 12837 "ll_backend.layout.c"
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
#line 12875 "ll_backend.layout.c"
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
#line 12895 "ll_backend.layout.c"
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
#line 12915 "ll_backend.layout.c"
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
#line 12935 "ll_backend.layout.c"
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
#line 12955 "ll_backend.layout.c"
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

#line 13040 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_3_3 == ll_backend__layout__V_9_9);
#line 102 "layout.m"
        if (ll_backend__layout__succeeded)
#line 102 "layout.m"
          {
#line 13046 "ll_backend.layout.c"
            {
#line 13048 "ll_backend.layout.c"
              ll_backend__layout__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__layout__V_4_4, ll_backend__layout__V_10_10);
            }
#line 102 "layout.m"
            if (ll_backend__layout__succeeded)
#line 102 "layout.m"
              {
#line 13055 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_5_5 == ll_backend__layout__V_11_11);
#line 102 "layout.m"
                if (ll_backend__layout__succeeded)
#line 102 "layout.m"
                  {
#line 13061 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = (ll_backend__layout__V_6_6 == ll_backend__layout__V_12_12);
#line 102 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 102 "layout.m"
                      {
#line 13067 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = (ll_backend__layout__V_7_7 == ll_backend__layout__V_13_13);
#line 102 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 13071 "ll_backend.layout.c"
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
#line 13114 "ll_backend.layout.c"
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
#line 13136 "ll_backend.layout.c"
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

#line 13197 "ll_backend.layout.c"
        {
#line 13199 "ll_backend.layout.c"
          ll_backend__layout__succeeded = ll_backend__layout____Unify____basic_label_layout_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_5_5);
        }
#line 119 "layout.m"
        if (ll_backend__layout__succeeded)
#line 13204 "ll_backend.layout.c"
          {
#line 13206 "ll_backend.layout.c"
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
#line 13242 "ll_backend.layout.c"
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

#line 13300 "ll_backend.layout.c"
        {
#line 13302 "ll_backend.layout.c"
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
#line 13338 "ll_backend.layout.c"
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
#line 13360 "ll_backend.layout.c"
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

#line 13421 "ll_backend.layout.c"
        {
#line 13423 "ll_backend.layout.c"
          ll_backend__layout__succeeded = ll_backend__layout____Unify____basic_label_layout_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_5_5);
        }
#line 126 "layout.m"
        if (ll_backend__layout__succeeded)
#line 13428 "ll_backend.layout.c"
          {
#line 13430 "ll_backend.layout.c"
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

#line 290 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____file_layout_data_0_0(
#line 290 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 290 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 290 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 290 "layout.m"
{
#line 290 "layout.m"
  {
#line 290 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 290 "layout.m"
    MR_Integer ll_backend__layout__CastX_9 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 290 "layout.m"
    MR_Integer ll_backend__layout__CastY_10 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 290 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_9 == ll_backend__layout__CastY_10);
#line 290 "layout.m"
    if (ll_backend__layout__succeeded)
#line 13466 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 290 "layout.m"
    else
#line 290 "layout.m"
      {
#line 290 "layout.m"
        MR_String ll_backend__layout__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 290 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 290 "layout.m"
        MR_String ll_backend__layout__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 290 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 290 "layout.m"
        MR_Word ll_backend__layout__V_8_8;

#line 290 "layout.m"
        {
#line 290 "layout.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__layout__V_8_8, ll_backend__layout__V_4_4, ll_backend__layout__V_6_6);
        }
#line 13488 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_8_8 == (MR_Integer) 0);
#line 290 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 290 "layout.m"
        if (ll_backend__layout__succeeded)
#line 290 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_8_8;
#line 290 "layout.m"
        else
#line 290 "layout.m"
          {
#line 290 "layout.m"
            {
#line 290 "layout.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_1[4], ll_backend__layout__HeadVar__1_1, ((MR_Box) (ll_backend__layout__V_5_5)), ((MR_Box) (ll_backend__layout__V_7_7)));
#line 290 "layout.m"
              return;
            }
#line 290 "layout.m"
          }
#line 290 "layout.m"
      }
#line 290 "layout.m"
  }
#line 290 "layout.m"
}

#line 290 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____file_layout_data_0_0(
#line 290 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 290 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 290 "layout.m"
{
#line 290 "layout.m"
  {
#line 290 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 290 "layout.m"
    MR_Integer ll_backend__layout__CastX_7 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 290 "layout.m"
    MR_Integer ll_backend__layout__CastY_8 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 290 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_7 == ll_backend__layout__CastY_8);
#line 290 "layout.m"
    if (ll_backend__layout__succeeded)
#line 290 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 290 "layout.m"
    else
#line 290 "layout.m"
      {
#line 290 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_9_9;
#line 290 "layout.m"
        MR_String ll_backend__layout__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 290 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 290 "layout.m"
        MR_String ll_backend__layout__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 290 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));

#line 13555 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (strcmp(ll_backend__layout__V_3_3, ll_backend__layout__V_5_5) == 0);
#line 290 "layout.m"
        if (ll_backend__layout__succeeded)
#line 290 "layout.m"
          {
#line 13561 "ll_backend.layout.c"
            ll_backend__layout__TypeInfo_9_9 = (MR_Word) &ll_backend__layout_scalar_common_1[4];
#line 13563 "ll_backend.layout.c"
            {
#line 13565 "ll_backend.layout.c"
              return ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_9_9, ((MR_Box) (ll_backend__layout__V_4_4)), ((MR_Box) (ll_backend__layout__V_6_6)));
            }
#line 290 "layout.m"
          }
#line 290 "layout.m"
      }
#line 290 "layout.m"
    return ll_backend__layout__succeeded;
#line 290 "layout.m"
  }
#line 290 "layout.m"
}

#line 281 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____event_set_layout_data_0_0(
#line 281 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 281 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 281 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 281 "layout.m"
{
#line 281 "layout.m"
  {
#line 281 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 281 "layout.m"
    MR_Integer ll_backend__layout__CastX_9 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 281 "layout.m"
    MR_Integer ll_backend__layout__CastY_10 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 281 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_9 == ll_backend__layout__CastY_10);
#line 281 "layout.m"
    if (ll_backend__layout__succeeded)
#line 13603 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 281 "layout.m"
    else
#line 281 "layout.m"
      {
#line 281 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 281 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 281 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 281 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 281 "layout.m"
        MR_Word ll_backend__layout__V_8_8;

#line 281 "layout.m"
        {
#line 281 "layout.m"
          parse_tree__prog_data____Compare____event_set_data_0_0(&ll_backend__layout__V_8_8, ll_backend__layout__V_4_4, ll_backend__layout__V_6_6);
        }
#line 13625 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_8_8 == (MR_Integer) 0);
#line 281 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 281 "layout.m"
        if (ll_backend__layout__succeeded)
#line 281 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_8_8;
#line 281 "layout.m"
        else
#line 281 "layout.m"
          {
#line 281 "layout.m"
            {
#line 281 "layout.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__layout_scalar_common_2[0], ll_backend__layout__HeadVar__1_1, ((MR_Box) (ll_backend__layout__V_5_5)), ((MR_Box) (ll_backend__layout__V_7_7)));
#line 281 "layout.m"
              return;
            }
#line 281 "layout.m"
          }
#line 281 "layout.m"
      }
#line 281 "layout.m"
  }
#line 281 "layout.m"
}

#line 281 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____event_set_layout_data_0_0(
#line 281 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 281 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 281 "layout.m"
{
#line 281 "layout.m"
  {
#line 281 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 281 "layout.m"
    MR_Integer ll_backend__layout__CastX_7 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 281 "layout.m"
    MR_Integer ll_backend__layout__CastY_8 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 281 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_7 == ll_backend__layout__CastY_8);
#line 281 "layout.m"
    if (ll_backend__layout__succeeded)
#line 281 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 281 "layout.m"
    else
#line 281 "layout.m"
      {
#line 281 "layout.m"
        MR_Word ll_backend__layout__TypeInfo_10_10;
#line 281 "layout.m"
        MR_Word ll_backend__layout__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 281 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 281 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 281 "layout.m"
        MR_Word ll_backend__layout__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));

#line 13692 "ll_backend.layout.c"
        {
#line 13694 "ll_backend.layout.c"
          ll_backend__layout__succeeded = parse_tree__prog_data____Unify____event_set_data_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_5_5);
        }
#line 281 "layout.m"
        if (ll_backend__layout__succeeded)
#line 281 "layout.m"
          {
#line 13701 "ll_backend.layout.c"
            ll_backend__layout__TypeInfo_10_10 = (MR_Word) &ll_backend__layout_scalar_common_2[0];
#line 13703 "ll_backend.layout.c"
            {
#line 13705 "ll_backend.layout.c"
              return ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_10_10, ((MR_Box) (ll_backend__layout__V_4_4)), ((MR_Box) (ll_backend__layout__V_6_6)));
            }
#line 281 "layout.m"
          }
#line 281 "layout.m"
      }
#line 281 "layout.m"
    return ll_backend__layout__succeeded;
#line 281 "layout.m"
  }
#line 281 "layout.m"
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
#line 13743 "ll_backend.layout.c"
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
#line 13769 "ll_backend.layout.c"
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
#line 13789 "ll_backend.layout.c"
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

#line 13856 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_3_3 == ll_backend__layout__V_6_6);
#line 159 "layout.m"
        if (ll_backend__layout__succeeded)
#line 159 "layout.m"
          {
#line 13862 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 == ll_backend__layout__V_7_7);
#line 159 "layout.m"
            if (ll_backend__layout__succeeded)
#line 13866 "ll_backend.layout.c"
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

#line 207 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____data_or_slot_id_0_0(
#line 207 "layout.m"
  MR_Word * ll_backend__layout__HeadVar__1_1,
#line 207 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2,
#line 207 "layout.m"
  MR_Word ll_backend__layout__HeadVar__3_3)
#line 207 "layout.m"
{
#line 207 "layout.m"
  {
#line 207 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 207 "layout.m"
    MR_Integer ll_backend__layout__CastX_12 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 207 "layout.m"
    MR_Integer ll_backend__layout__CastY_13 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 207 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_12 == ll_backend__layout__CastY_13);
#line 207 "layout.m"
    if (ll_backend__layout__succeeded)
#line 13903 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 207 "layout.m"
    else
#line 207 "layout.m"
      if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 207 "layout.m"
        {
#line 207 "layout.m"
          MR_Word ll_backend__layout__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));

#line 207 "layout.m"
          if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 207 "layout.m"
            {
#line 207 "layout.m"
              MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));

#line 207 "layout.m"
              {
#line 207 "layout.m"
                ll_backend__llds____Compare____data_id_0_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_16_16, ll_backend__layout__V_5_5);
#line 207 "layout.m"
                return;
              }
#line 207 "layout.m"
            }
#line 207 "layout.m"
          else
#line 13932 "ll_backend.layout.c"
            *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 1;
#line 207 "layout.m"
        }
#line 207 "layout.m"
      else
#line 207 "layout.m"
        {
#line 207 "layout.m"
          MR_Word ll_backend__layout__V_17_17 = (MR_Word) MR_body(((MR_Word) ll_backend__layout__HeadVar__2_2), (MR_Integer) 0);

#line 207 "layout.m"
          if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 13945 "ll_backend.layout.c"
            *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 2;
#line 207 "layout.m"
          else
#line 207 "layout.m"
            {
#line 207 "layout.m"
              MR_Word ll_backend__layout__V_11_11 = (MR_Word) MR_body(((MR_Word) ll_backend__layout__HeadVar__3_3), (MR_Integer) 0);

#line 207 "layout.m"
              {
#line 207 "layout.m"
                ll_backend__layout____Compare____layout_slot_name_0_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_17_17, ll_backend__layout__V_11_11);
#line 207 "layout.m"
                return;
              }
#line 207 "layout.m"
            }
#line 207 "layout.m"
        }
#line 207 "layout.m"
  }
#line 207 "layout.m"
}

#line 207 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____data_or_slot_id_0_0(
#line 207 "layout.m"
  MR_Word ll_backend__layout__HeadVar__1_1,
#line 207 "layout.m"
  MR_Word ll_backend__layout__HeadVar__2_2)
#line 207 "layout.m"
{
#line 207 "layout.m"
  {
#line 207 "layout.m"
    MR_bool ll_backend__layout__succeeded;
#line 207 "layout.m"
    MR_Integer ll_backend__layout__CastX_7 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 207 "layout.m"
    MR_Integer ll_backend__layout__CastY_8 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 207 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_7 == ll_backend__layout__CastY_8);
#line 207 "layout.m"
    if (ll_backend__layout__succeeded)
#line 207 "layout.m"
      ll_backend__layout__succeeded = MR_TRUE;
#line 207 "layout.m"
    else
#line 207 "layout.m"
      if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 207 "layout.m"
        {
#line 207 "layout.m"
          MR_Word ll_backend__layout__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)));
#line 207 "layout.m"
          MR_Word ll_backend__layout__V_4_4;

#line 207 "layout.m"
          ll_backend__layout__succeeded = ((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 207 "layout.m"
          if (ll_backend__layout__succeeded)
#line 207 "layout.m"
            {
#line 207 "layout.m"
              ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 14013 "ll_backend.layout.c"
              {
#line 14015 "ll_backend.layout.c"
                return ll_backend__layout__succeeded = ll_backend__llds____Unify____data_id_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_4_4);
              }
#line 207 "layout.m"
            }
#line 207 "layout.m"
        }
#line 207 "layout.m"
      else
#line 207 "layout.m"
        {
#line 207 "layout.m"
          MR_Word ll_backend__layout__V_5_5 = (MR_Word) MR_body(((MR_Word) ll_backend__layout__HeadVar__1_1), (MR_Integer) 0);
#line 207 "layout.m"
          MR_Word ll_backend__layout__V_6_6;

#line 207 "layout.m"
          ll_backend__layout__succeeded = ((MR_tag((MR_Word) ll_backend__layout__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 207 "layout.m"
          if (ll_backend__layout__succeeded)
#line 207 "layout.m"
            {
#line 207 "layout.m"
              ll_backend__layout__V_6_6 = (MR_Word) MR_body(((MR_Word) ll_backend__layout__HeadVar__2_2), (MR_Integer) 0);
#line 14039 "ll_backend.layout.c"
              {
#line 14041 "ll_backend.layout.c"
                return ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_slot_name_0_0(ll_backend__layout__V_5_5, ll_backend__layout__V_6_6);
              }
#line 207 "layout.m"
            }
#line 207 "layout.m"
        }
#line 207 "layout.m"
    return ll_backend__layout__succeeded;
#line 207 "layout.m"
  }
#line 207 "layout.m"
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
#line 14079 "ll_backend.layout.c"
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
#line 14125 "ll_backend.layout.c"
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
#line 14145 "ll_backend.layout.c"
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
#line 14165 "ll_backend.layout.c"
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
#line 14185 "ll_backend.layout.c"
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
#line 14205 "ll_backend.layout.c"
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
#line 14225 "ll_backend.layout.c"
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
#line 14245 "ll_backend.layout.c"
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

#line 14342 "ll_backend.layout.c"
        {
#line 14344 "ll_backend.layout.c"
          ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_11_11);
        }
#line 55 "layout.m"
        if (ll_backend__layout__succeeded)
#line 55 "layout.m"
          {
#line 14351 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 == ll_backend__layout__V_12_12);
#line 55 "layout.m"
            if (ll_backend__layout__succeeded)
#line 55 "layout.m"
              {
#line 14357 "ll_backend.layout.c"
                {
#line 14359 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__layout__V_5_5, ll_backend__layout__V_13_13);
                }
#line 55 "layout.m"
                if (ll_backend__layout__succeeded)
#line 55 "layout.m"
                  {
#line 14366 "ll_backend.layout.c"
                    {
#line 14368 "ll_backend.layout.c"
                      ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__layout__V_6_6, ll_backend__layout__V_14_14);
                    }
#line 55 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 55 "layout.m"
                      {
#line 14375 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = (strcmp(ll_backend__layout__V_7_7, ll_backend__layout__V_15_15) == 0);
#line 55 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 55 "layout.m"
                          {
#line 14381 "ll_backend.layout.c"
                            ll_backend__layout__succeeded = (ll_backend__layout__V_8_8 == ll_backend__layout__V_16_16);
#line 55 "layout.m"
                            if (ll_backend__layout__succeeded)
#line 55 "layout.m"
                              {
#line 14387 "ll_backend.layout.c"
                                {
#line 14389 "ll_backend.layout.c"
                                  ll_backend__layout__succeeded = hlds__hlds_pred____Unify____pred_origin_0_0(ll_backend__layout__V_9_9, ll_backend__layout__V_17_17);
                                }
#line 55 "layout.m"
                                if (ll_backend__layout__succeeded)
#line 14394 "ll_backend.layout.c"
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
#line 14441 "ll_backend.layout.c"
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
#line 14487 "ll_backend.layout.c"
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
#line 14507 "ll_backend.layout.c"
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
#line 14527 "ll_backend.layout.c"
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
#line 14547 "ll_backend.layout.c"
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
#line 14567 "ll_backend.layout.c"
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
#line 14587 "ll_backend.layout.c"
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
#line 14607 "ll_backend.layout.c"
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

#line 14716 "ll_backend.layout.c"
        {
#line 14718 "ll_backend.layout.c"
          ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_11_11);
        }
#line 80 "layout.m"
        if (ll_backend__layout__succeeded)
#line 80 "layout.m"
          {
#line 14725 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 == ll_backend__layout__V_12_12);
#line 80 "layout.m"
            if (ll_backend__layout__succeeded)
#line 80 "layout.m"
              {
#line 14731 "ll_backend.layout.c"
                {
#line 14733 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_name_0_0(ll_backend__layout__V_5_5, ll_backend__layout__V_13_13);
                }
#line 80 "layout.m"
                if (ll_backend__layout__succeeded)
#line 80 "layout.m"
                  {
#line 14740 "ll_backend.layout.c"
                    ll_backend__layout__TypeInfo_22_22 = (MR_Word) &ll_backend__layout_scalar_common_1[0];
#line 14742 "ll_backend.layout.c"
                    {
#line 14744 "ll_backend.layout.c"
                      ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_22_22, ((MR_Box) (ll_backend__layout__V_6_6)), ((MR_Box) (ll_backend__layout__V_14_14)));
                    }
#line 80 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 80 "layout.m"
                      {
#line 14751 "ll_backend.layout.c"
                        ll_backend__layout__TypeInfo_23_23 = (MR_Word) &ll_backend__layout_scalar_common_1[1];
#line 14753 "ll_backend.layout.c"
                        {
#line 14755 "ll_backend.layout.c"
                          ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_23_23, ((MR_Box) (ll_backend__layout__V_7_7)), ((MR_Box) (ll_backend__layout__V_15_15)));
                        }
#line 80 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 80 "layout.m"
                          {
#line 14762 "ll_backend.layout.c"
                            ll_backend__layout__succeeded = (ll_backend__layout__V_8_8 == ll_backend__layout__V_16_16);
#line 80 "layout.m"
                            if (ll_backend__layout__succeeded)
#line 80 "layout.m"
                              {
#line 14768 "ll_backend.layout.c"
                                ll_backend__layout__TypeInfo_24_24 = (MR_Word) &ll_backend__layout_scalar_common_1[2];
#line 14770 "ll_backend.layout.c"
                                {
#line 14772 "ll_backend.layout.c"
                                  ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_24_24, ((MR_Box) (ll_backend__layout__V_9_9)), ((MR_Box) (ll_backend__layout__V_17_17)));
                                }
#line 80 "layout.m"
                                if (ll_backend__layout__succeeded)
#line 80 "layout.m"
                                  {
#line 14779 "ll_backend.layout.c"
                                    ll_backend__layout__TypeInfo_25_25 = (MR_Word) &ll_backend__layout_scalar_common_1[3];
#line 14781 "ll_backend.layout.c"
                                    {
#line 14783 "ll_backend.layout.c"
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

#line 335 "layout.m"
void MR_CALL 
ll_backend__layout____Compare____alloc_site_info_0_0(
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
    MR_Integer ll_backend__layout__CastX_15 = (MR_Integer) ll_backend__layout__HeadVar__2_2;
#line 335 "layout.m"
    MR_Integer ll_backend__layout__CastY_16 = (MR_Integer) ll_backend__layout__HeadVar__3_3;

#line 335 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_15 == ll_backend__layout__CastY_16);
#line 335 "layout.m"
    if (ll_backend__layout__succeeded)
#line 14833 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 0;
#line 335 "layout.m"
    else
#line 335 "layout.m"
      {
#line 335 "layout.m"
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 335 "layout.m"
        MR_Word ll_backend__layout__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 335 "layout.m"
        MR_String ll_backend__layout__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 335 "layout.m"
        MR_Integer ll_backend__layout__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));
#line 335 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 0)));
#line 335 "layout.m"
        MR_Word ll_backend__layout__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 1)));
#line 335 "layout.m"
        MR_String ll_backend__layout__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 2)));
#line 335 "layout.m"
        MR_Integer ll_backend__layout__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__3_3, (MR_Integer) 3)));
#line 335 "layout.m"
        MR_Word ll_backend__layout__V_12_12;

#line 335 "layout.m"
        {
#line 335 "layout.m"
          mdbcomp__prim_data____Compare____proc_label_0_0(&ll_backend__layout__V_12_12, ll_backend__layout__V_4_4, ll_backend__layout__V_8_8);
        }
#line 14863 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_12_12 == (MR_Integer) 0);
#line 335 "layout.m"
        ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 335 "layout.m"
        if (ll_backend__layout__succeeded)
#line 335 "layout.m"
          *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_12_12;
#line 335 "layout.m"
        else
#line 335 "layout.m"
          {
#line 335 "layout.m"
            MR_Word ll_backend__layout__V_13_13;

#line 335 "layout.m"
            {
#line 335 "layout.m"
              mercury__term____Compare____context_0_0(&ll_backend__layout__V_13_13, ll_backend__layout__V_5_5, ll_backend__layout__V_9_9);
            }
#line 14883 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_13_13 == (MR_Integer) 0);
#line 335 "layout.m"
            ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 335 "layout.m"
            if (ll_backend__layout__succeeded)
#line 335 "layout.m"
              *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_13_13;
#line 335 "layout.m"
            else
#line 335 "layout.m"
              {
#line 335 "layout.m"
                MR_Word ll_backend__layout__V_14_14;

#line 335 "layout.m"
                {
#line 335 "layout.m"
                  mercury__private_builtin__builtin_compare_string_3_p_0(&ll_backend__layout__V_14_14, ll_backend__layout__V_6_6, ll_backend__layout__V_10_10);
                }
#line 14903 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_14_14 == (MR_Integer) 0);
#line 335 "layout.m"
                ll_backend__layout__succeeded = !(ll_backend__layout__succeeded);
#line 335 "layout.m"
                if (ll_backend__layout__succeeded)
#line 335 "layout.m"
                  *ll_backend__layout__HeadVar__1_1 = ll_backend__layout__V_14_14;
#line 335 "layout.m"
                else
#line 335 "layout.m"
                  {
#line 335 "layout.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__layout__HeadVar__1_1, ll_backend__layout__V_7_7, ll_backend__layout__V_11_11);
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
  }
#line 335 "layout.m"
}

#line 335 "layout.m"
MR_bool MR_CALL 
ll_backend__layout____Unify____alloc_site_info_0_0(
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
    MR_Integer ll_backend__layout__CastX_11 = (MR_Integer) ll_backend__layout__HeadVar__1_1;
#line 335 "layout.m"
    MR_Integer ll_backend__layout__CastY_12 = (MR_Integer) ll_backend__layout__HeadVar__2_2;

#line 335 "layout.m"
    ll_backend__layout__succeeded = (ll_backend__layout__CastX_11 == ll_backend__layout__CastY_12);
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
        MR_Word ll_backend__layout__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 1)));
#line 335 "layout.m"
        MR_String ll_backend__layout__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 2)));
#line 335 "layout.m"
        MR_Integer ll_backend__layout__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__1_1, (MR_Integer) 3)));
#line 335 "layout.m"
        MR_Word ll_backend__layout__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));
#line 335 "layout.m"
        MR_Word ll_backend__layout__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 1)));
#line 335 "layout.m"
        MR_String ll_backend__layout__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 2)));
#line 335 "layout.m"
        MR_Integer ll_backend__layout__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__layout__HeadVar__2_2, (MR_Integer) 3)));

#line 14976 "ll_backend.layout.c"
        {
#line 14978 "ll_backend.layout.c"
          ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_7_7);
        }
#line 335 "layout.m"
        if (ll_backend__layout__succeeded)
#line 335 "layout.m"
          {
#line 14985 "ll_backend.layout.c"
            {
#line 14987 "ll_backend.layout.c"
              ll_backend__layout__succeeded = mercury__term____Unify____context_0_0(ll_backend__layout__V_4_4, ll_backend__layout__V_8_8);
            }
#line 335 "layout.m"
            if (ll_backend__layout__succeeded)
#line 335 "layout.m"
              {
#line 14994 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (strcmp(ll_backend__layout__V_5_5, ll_backend__layout__V_9_9) == 0);
#line 335 "layout.m"
                if (ll_backend__layout__succeeded)
#line 14998 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = (ll_backend__layout__V_6_6 == ll_backend__layout__V_10_10);
#line 335 "layout.m"
              }
#line 335 "layout.m"
          }
#line 335 "layout.m"
      }
#line 335 "layout.m"
    return ll_backend__layout__succeeded;
#line 335 "layout.m"
  }
#line 335 "layout.m"
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
