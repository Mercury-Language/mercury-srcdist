/*
** Automatically generated from `layout.m'
** by the Mercury compiler,
** version rotd-2015-02-20
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
#include "integer.mih"
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




#line 142 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_alloc_site_info_0_0[4];

#line 145 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_alloc_site_info_0_0[4];

#line 148 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_alloc_site_info_0_0;

#line 151 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_alloc_site_info_0_0[1];

#line 154 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_alloc_site_info_0[1];

#line 157 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_alloc_site_info_0[1];

#line 160 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_alloc_site_info_0[1];

#line 163 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_trace_port_0;

#line 166 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1bool__type_ctor_info_bool_0;

#line 169 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

#line 172 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_layout_slot_name_0;

#line 175 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_basic_label_layout_0_0[8];

#line 178 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_basic_label_layout_0_0[8];

#line 181 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_basic_label_layout_0_0;

#line 184 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_basic_label_layout_0_0[1];

#line 187 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_basic_label_layout_0[1];

#line 190 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_basic_label_layout_0[1];

#line 193 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_basic_label_layout_0[1];

#line 196 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_closure_proc_id_data_0_0[8];

#line 199 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_closure_proc_id_data_0_0[8];

#line 202 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_closure_proc_id_data_0_0;

#line 205 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_closure_proc_id_data_0_0[1];

#line 208 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_closure_proc_id_data_0[1];

#line 211 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_closure_proc_id_data_0[1];

#line 214 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_closure_proc_id_data_0[1];

#line 217 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_data_or_slot_id_0_0[1];

#line 220 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_data_or_slot_id_0_0;

#line 223 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_data_or_slot_id_0_1[1];

#line 226 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_data_or_slot_id_0_1;

#line 229 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_data_or_slot_id_0_0[1];

#line 232 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_data_or_slot_id_0_1[1];

#line 235 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_data_or_slot_id_0[2];

#line 238 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_data_or_slot_id_0[2];

#line 241 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_data_or_slot_id_0[2];

#line 244 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_deep_excp_slots_0_0[3];

#line 247 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_deep_excp_slots_0_0[3];

#line 250 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_deep_excp_slots_0_0;

#line 253 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_deep_excp_slots_0_0[1];

#line 256 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_deep_excp_slots_0[1];

#line 259 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_deep_excp_slots_0[1];

#line 262 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_deep_excp_slots_0[1];

#line 265 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__layout__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_rval_0;

#line 268 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_event_set_layout_data_0_0[2];

#line 271 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_event_set_layout_data_0_0;

#line 274 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_event_set_layout_data_0_0[1];

#line 277 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_event_set_layout_data_0[1];

#line 280 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_event_set_layout_data_0[1];

#line 283 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_event_set_layout_data_0[1];

#line 286 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__layout__pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__layout__type_ctor_info_layout_slot_name_0;

#line 289 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__layout__type_ctor_info_layout_slot_name_0;

#line 292 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_file_layout_data_0_0[2];

#line 295 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_file_layout_data_0_0[2];

#line 298 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_file_layout_data_0_0;

#line 301 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_file_layout_data_0_0[1];

#line 304 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_file_layout_data_0[1];

#line 307 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_file_layout_data_0[1];

#line 310 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_file_layout_data_0[1];

#line 313 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_label_layout_long_vars_0_0[2];

#line 316 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_label_layout_long_vars_0_0;

#line 319 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_label_layout_long_vars_0_0[1];

#line 322 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_layout_long_vars_0[1];

#line 325 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_label_layout_long_vars_0[1];

#line 328 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_layout_long_vars_0[1];

#line 331 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_layout_no_vars_0[1];

#line 334 "ll_backend.layout.c"
static const MR_NotagFunctorDesc ll_backend__layout__ll_backend__layout__notag_functor_desc_label_layout_no_vars_0;

#line 337 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_label_layout_short_vars_0_0[2];

#line 340 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_label_layout_short_vars_0_0;

#line 343 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_label_layout_short_vars_0_0[1];

#line 346 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_layout_short_vars_0[1];

#line 349 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_label_layout_short_vars_0[1];

#line 352 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_layout_short_vars_0[1];

#line 355 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_label_long_var_info_0_0[6];

#line 358 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_label_long_var_info_0_0[6];

#line 361 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_label_long_var_info_0_0;

#line 364 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_label_long_var_info_0_0[1];

#line 367 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_long_var_info_0[1];

#line 370 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_label_long_var_info_0[1];

#line 373 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_long_var_info_0[1];

#line 376 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_label_short_var_info_0_0[5];

#line 379 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_label_short_var_info_0_0[5];

#line 382 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_label_short_var_info_0_0;

#line 385 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_label_short_var_info_0_0[1];

#line 388 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_short_var_info_0[1];

#line 391 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_label_short_var_info_0[1];

#line 394 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_short_var_info_0[1];

#line 397 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_0;

#line 400 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_1;

#line 403 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_2;

#line 406 "ll_backend.layout.c"
static const MR_EnumFunctorDescPtr ll_backend__layout__ll_backend__layout__enum_value_ordered_label_vars_0[3];

#line 409 "ll_backend.layout.c"
static const MR_EnumFunctorDescPtr ll_backend__layout__ll_backend__layout__enum_name_ordered_label_vars_0[3];

#line 412 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_vars_0[3];

#line 415 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_0;

#line 418 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_1;

#line 421 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_2;

#line 424 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_3;

#line 427 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_4;

#line 430 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_5;

#line 433 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_array_name_0_6[1];

#line 436 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_6;

#line 439 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_7;

#line 442 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_8;

#line 445 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_9;

#line 448 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_10;

#line 451 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_11;

#line 454 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_12;

#line 457 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_13;

#line 460 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_14;

#line 463 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_15;

#line 466 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_16;

#line 469 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_17;

#line 472 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_18;

#line 475 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_array_name_0_0[18];

#line 478 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_array_name_0_1[1];

#line 481 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_layout_array_name_0[2];

#line 484 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_layout_array_name_0[19];

#line 487 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_layout_array_name_0[19];

#line 490 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_0[2];

#line 493 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_0;

#line 496 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_1[3];

#line 499 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_1;

#line 502 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_2[2];

#line 505 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_2;

#line 508 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_3[2];

#line 511 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_3;

#line 514 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_4[2];

#line 517 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_4;

#line 520 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_5[1];

#line 523 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_5;

#line 526 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_6[1];

#line 529 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_6;

#line 532 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_7[1];

#line 535 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_7;

#line 538 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_8[2];

#line 541 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_8;

#line 544 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_9[1];

#line 547 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_9;

#line 550 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_10[2];

#line 553 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_10;

#line 556 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_11[2];

#line 559 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_11;

#line 562 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_12[3];

#line 565 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_12;

#line 568 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_13[3];

#line 571 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_13;

#line 574 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_14[2];

#line 577 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_14;

#line 580 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_15[1];

#line 583 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_15;

#line 586 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_16[1];

#line 589 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_16;

#line 592 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_17[1];

#line 595 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_17;

#line 598 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_18[1];

#line 601 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_18;

#line 604 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_name_0_0[1];

#line 607 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_name_0_1[1];

#line 610 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_name_0_2[1];

#line 613 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_name_0_3[16];

#line 616 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_layout_name_0[4];

#line 619 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_layout_name_0[19];

#line 622 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_layout_name_0[19];

#line 625 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_slot_name_0_0[2];

#line 628 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_slot_name_0_0;

#line 631 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_slot_name_0_0[1];

#line 634 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_layout_slot_name_0[1];

#line 637 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_layout_slot_name_0[1];

#line 640 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_layout_slot_name_0[1];

#line 643 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_maybe_proc_id_and_more_0_0;

#line 646 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_maybe_proc_id_and_more_0_1[4];

#line 649 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_maybe_proc_id_and_more_0_1[4];

#line 652 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_maybe_proc_id_and_more_0_1;

#line 655 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_maybe_proc_id_and_more_0_0[1];

#line 658 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_maybe_proc_id_and_more_0_1[1];

#line 661 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_maybe_proc_id_and_more_0[2];

#line 664 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_maybe_proc_id_and_more_0[2];

#line 667 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_maybe_proc_id_and_more_0[2];

#line 670 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_module_layout_deep_prof_0;

#line 673 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_module_layout_debug_0;

#line 676 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_module_layout_data_0_0[5];

#line 679 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_module_layout_data_0_0[5];

#line 682 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_data_0_0;

#line 685 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_data_0_0[1];

#line 688 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_module_layout_data_0[1];

#line 691 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_module_layout_data_0[1];

#line 694 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_module_layout_data_0[1];

#line 697 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1ll_backend__layout__type_ctor_info_layout_name_0;

#line 700 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1ll_backend__layout__type_ctor_info_file_layout_data_0;

#line 703 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_event_set_layout_data_0;

#line 706 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_module_layout_debug_0_0[6];

#line 709 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_module_layout_debug_0_0[6];

#line 712 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_debug_0_0;

#line 715 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_debug_0_0[1];

#line 718 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_module_layout_debug_0[1];

#line 721 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_module_layout_debug_0[1];

#line 724 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_module_layout_debug_0[1];

#line 727 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1builtin__type_ctor_info_int_0;

#line 730 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_module_layout_deep_prof_0_0[4];

#line 733 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_module_layout_deep_prof_0_0[4];

#line 736 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_deep_prof_0_0;

#line 739 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_deep_prof_0_0[1];

#line 742 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_module_layout_deep_prof_0[1];

#line 745 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_module_layout_deep_prof_0[1];

#line 748 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_module_layout_deep_prof_0[1];

#line 751 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_data_0_0[3];

#line 754 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_proc_layout_data_0_0[3];

#line 757 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_data_0_0;

#line 760 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_data_0_0[1];

#line 763 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_data_0[1];

#line 766 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_data_0[1];

#line 769 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_data_0[1];

#line 772 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_data_or_slot_id_0;

#line 775 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_exec_trace_0_0[19];

#line 778 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_proc_layout_exec_trace_0_0[19];

#line 781 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_exec_trace_0_0;

#line 784 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_exec_trace_0_0[1];

#line 787 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_exec_trace_0[1];

#line 790 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_exec_trace_0[1];

#line 793 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_exec_trace_0[1];

#line 796 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_kind_0_0;

#line 799 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_kind_0_1[1];

#line 802 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_kind_0_1;

#line 805 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_kind_0_0[1];

#line 808 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_kind_0_1[1];

#line 811 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_kind_0[2];

#line 814 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_kind_0[2];

#line 817 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_kind_0[2];

#line 820 "ll_backend.layout.c"
static const MR_VA_TypeInfo_Struct2 ll_backend__layout____vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 823 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 826 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_proc_static_0_0[6];

#line 829 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_proc_layout_proc_static_0_0[6];

#line 832 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_proc_static_0_0;

#line 835 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_proc_static_0_0[1];

#line 838 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_proc_static_0[1];

#line 841 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_proc_static_0[1];

#line 844 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_proc_static_0[1];

#line 847 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0;

#line 850 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_stack_traversal_0_0[4];

#line 853 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_proc_layout_stack_traversal_0_0[4];

#line 856 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_stack_traversal_0_0;

#line 859 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_stack_traversal_0_0[1];

#line 862 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_stack_traversal_0[1];

#line 865 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_stack_traversal_0[1];

#line 868 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_stack_traversal_0[1];

#line 871 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_0;

#line 874 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_1;

#line 877 "ll_backend.layout.c"
static const MR_EnumFunctorDescPtr ll_backend__layout__ll_backend__layout__enum_value_ordered_proc_layout_user_or_uci_0[2];

#line 880 "ll_backend.layout.c"
static const MR_EnumFunctorDescPtr ll_backend__layout__ll_backend__layout__enum_name_ordered_proc_layout_user_or_uci_0[2];

#line 883 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_user_or_uci_0[2];

#line 886 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_string_with_0s_0[1];

#line 889 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1builtin__type_ctor_info_string_0;

#line 892 "ll_backend.layout.c"
static const MR_NotagFunctorDesc ll_backend__layout__ll_backend__layout__notag_functor_desc_string_with_0s_0;

#line 895 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_table_io_args_data_0_0[3];

#line 898 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_table_io_args_data_0_0[3];

#line 901 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_table_io_args_data_0_0;

#line 904 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_table_io_args_data_0_0[1];

#line 907 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_table_io_args_data_0[1];

#line 910 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_table_io_args_data_0[1];

#line 913 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_table_io_args_data_0[1];

#line 916 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_table_io_args_data_0;

#line 919 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_table_io_entry_data_0_0[2];

#line 922 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_table_io_entry_data_0_0[2];

#line 925 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_table_io_entry_data_0_0;

#line 928 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_table_io_entry_data_0_0[1];

#line 931 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_table_io_entry_data_0[1];

#line 934 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_table_io_entry_data_0[1];

#line 937 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_table_io_entry_data_0[1];

#line 940 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_user_event_data_0_0[3];

#line 943 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_user_event_data_0_0[3];

#line 946 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_user_event_data_0_0;

#line 949 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_user_event_data_0_0[1];

#line 952 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_user_event_data_0[1];

#line 955 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_user_event_data_0[1];

#line 958 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_user_event_data_0[1];

#line 961 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____alloc_site_info_0_0_10001(
#line 964 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 966 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 969 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____alloc_site_info_0_0_10001(
#line 972 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 974 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 976 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 979 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____basic_label_layout_0_0_10001(
#line 982 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 984 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 987 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____basic_label_layout_0_0_10001(
#line 990 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 992 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 994 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 997 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____closure_proc_id_data_0_0_10001(
#line 1000 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1002 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1005 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____closure_proc_id_data_0_0_10001(
#line 1008 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1010 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1012 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1015 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____data_or_slot_id_0_0_10001(
#line 1018 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1020 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1023 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____data_or_slot_id_0_0_10001(
#line 1026 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1028 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1030 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1033 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____deep_excp_slots_0_0_10001(
#line 1036 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1038 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1041 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____deep_excp_slots_0_0_10001(
#line 1044 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1046 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1048 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1051 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____event_set_layout_data_0_0_10001(
#line 1054 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1056 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1059 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____event_set_layout_data_0_0_10001(
#line 1062 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1064 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1066 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1069 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____file_layout_data_0_0_10001(
#line 1072 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1074 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1077 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____file_layout_data_0_0_10001(
#line 1080 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1082 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1084 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1087 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_layout_long_vars_0_0_10001(
#line 1090 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1092 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1095 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_layout_long_vars_0_0_10001(
#line 1098 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1100 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1102 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1105 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_layout_no_vars_0_0_10001(
#line 1108 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1110 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1113 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_layout_no_vars_0_0_10001(
#line 1116 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1118 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1120 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1123 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_layout_short_vars_0_0_10001(
#line 1126 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1128 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1131 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_layout_short_vars_0_0_10001(
#line 1134 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1136 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1138 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1141 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_long_var_info_0_0_10001(
#line 1144 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1146 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1149 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_long_var_info_0_0_10001(
#line 1152 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1154 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1156 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1159 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_short_var_info_0_0_10001(
#line 1162 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1164 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1167 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_short_var_info_0_0_10001(
#line 1170 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1172 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1174 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1177 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_vars_0_0_10001(
#line 1180 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1182 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1185 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_vars_0_0_10001(
#line 1188 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1190 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1192 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1195 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____layout_array_name_0_0_10001(
#line 1198 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1200 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1203 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____layout_array_name_0_0_10001(
#line 1206 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1208 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1210 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1213 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____layout_name_0_0_10001(
#line 1216 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1218 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1221 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____layout_name_0_0_10001(
#line 1224 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1226 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1228 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1231 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____layout_slot_name_0_0_10001(
#line 1234 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1236 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1239 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____layout_slot_name_0_0_10001(
#line 1242 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1244 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1246 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1249 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____maybe_proc_id_and_more_0_0_10001(
#line 1252 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1254 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1257 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____maybe_proc_id_and_more_0_0_10001(
#line 1260 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1262 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1264 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1267 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____module_layout_data_0_0_10001(
#line 1270 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1272 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1275 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____module_layout_data_0_0_10001(
#line 1278 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1280 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1282 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1285 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____module_layout_debug_0_0_10001(
#line 1288 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1290 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1293 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____module_layout_debug_0_0_10001(
#line 1296 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1298 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1300 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1303 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____module_layout_deep_prof_0_0_10001(
#line 1306 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1308 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1311 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____module_layout_deep_prof_0_0_10001(
#line 1314 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1316 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1318 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1321 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_data_0_0_10001(
#line 1324 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1326 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1329 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_data_0_0_10001(
#line 1332 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1334 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1336 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1339 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_exec_trace_0_0_10001(
#line 1342 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1344 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1347 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_exec_trace_0_0_10001(
#line 1350 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1352 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1354 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1357 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_kind_0_0_10001(
#line 1360 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1362 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1365 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_kind_0_0_10001(
#line 1368 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1370 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1372 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1375 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_proc_static_0_0_10001(
#line 1378 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1380 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1383 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_proc_static_0_0_10001(
#line 1386 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1388 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1390 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1393 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_stack_traversal_0_0_10001(
#line 1396 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1398 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1401 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_stack_traversal_0_0_10001(
#line 1404 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1406 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1408 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1411 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_user_or_uci_0_0_10001(
#line 1414 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1416 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1419 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_user_or_uci_0_0_10001(
#line 1422 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1424 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1426 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1429 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____string_with_0s_0_0_10001(
#line 1432 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1434 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1437 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____string_with_0s_0_0_10001(
#line 1440 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1442 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1444 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1447 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____table_io_args_data_0_0_10001(
#line 1450 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1452 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1455 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____table_io_args_data_0_0_10001(
#line 1458 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1460 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1462 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1465 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____table_io_entry_data_0_0_10001(
#line 1468 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1470 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1473 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____table_io_entry_data_0_0_10001(
#line 1476 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1478 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1480 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1483 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____user_event_data_0_0_10001(
#line 1486 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1488 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1491 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____user_event_data_0_0_10001(
#line 1494 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1496 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1498 "ll_backend.layout.c"
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



#line 1636 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_alloc_site_info_0_0[4] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1644 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_alloc_site_info_0_0[4] = {
  (MR_String) "as_proc_label",
  (MR_String) "as_context",
  (MR_String) "as_type",
  (MR_String) "as_size"
};

#line 1652 "ll_backend.layout.c"
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

#line 1667 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_alloc_site_info_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_alloc_site_info_0_0
};

#line 1672 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_alloc_site_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_alloc_site_info_0_0
  }
};

#line 1681 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_alloc_site_info_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_alloc_site_info_0_0
};

#line 1686 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_alloc_site_info_0[1] = {
  (MR_Integer) 0
};

#line 1691 "ll_backend.layout.c"
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

#line 1712 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_trace_port_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0
  }
};

#line 1720 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1bool__type_ctor_info_bool_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 1728 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1736 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
  }
};

#line 1744 "ll_backend.layout.c"
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

#line 1756 "ll_backend.layout.c"
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

#line 1768 "ll_backend.layout.c"
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

#line 1783 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_basic_label_layout_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_basic_label_layout_0_0
};

#line 1788 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_basic_label_layout_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_basic_label_layout_0_0
  }
};

#line 1797 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_basic_label_layout_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_basic_label_layout_0_0
};

#line 1802 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_basic_label_layout_0[1] = {
  (MR_Integer) 0
};

#line 1807 "ll_backend.layout.c"
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

#line 1828 "ll_backend.layout.c"
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

#line 1840 "ll_backend.layout.c"
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

#line 1852 "ll_backend.layout.c"
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

#line 1867 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_closure_proc_id_data_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_closure_proc_id_data_0_0
};

#line 1872 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_closure_proc_id_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_closure_proc_id_data_0_0
  }
};

#line 1881 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_closure_proc_id_data_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_closure_proc_id_data_0_0
};

#line 1886 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_closure_proc_id_data_0[1] = {
  (MR_Integer) 0
};

#line 1891 "ll_backend.layout.c"
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

#line 1912 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_data_or_slot_id_0_0[1] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0
};

#line 1917 "ll_backend.layout.c"
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

#line 1932 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_data_or_slot_id_0_1[1] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
};

#line 1937 "ll_backend.layout.c"
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

#line 1952 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_data_or_slot_id_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_data_or_slot_id_0_1
};

#line 1957 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_data_or_slot_id_0_1[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_data_or_slot_id_0_0
};

#line 1962 "ll_backend.layout.c"
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

#line 1976 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_data_or_slot_id_0[2] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_data_or_slot_id_0_0,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_data_or_slot_id_0_1
};

#line 1982 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_data_or_slot_id_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1988 "ll_backend.layout.c"
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

#line 2009 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_deep_excp_slots_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2016 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_deep_excp_slots_0_0[3] = {
  (MR_String) "top_csd",
  (MR_String) "middle_csd",
  (MR_String) "old_outermost"
};

#line 2023 "ll_backend.layout.c"
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

#line 2038 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_deep_excp_slots_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_deep_excp_slots_0_0
};

#line 2043 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_deep_excp_slots_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_deep_excp_slots_0_0
  }
};

#line 2052 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_deep_excp_slots_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_deep_excp_slots_0_0
};

#line 2057 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_deep_excp_slots_0[1] = {
  (MR_Integer) 0
};

#line 2062 "ll_backend.layout.c"
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

#line 2083 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__layout__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0
  }
};

#line 2092 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_event_set_layout_data_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_set_data_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_rval_0
};

#line 2098 "ll_backend.layout.c"
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

#line 2113 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_event_set_layout_data_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_event_set_layout_data_0_0
};

#line 2118 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_event_set_layout_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_event_set_layout_data_0_0
  }
};

#line 2127 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_event_set_layout_data_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_event_set_layout_data_0_0
};

#line 2132 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_event_set_layout_data_0[1] = {
  (MR_Integer) 0
};

#line 2137 "ll_backend.layout.c"
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

#line 2158 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__layout__pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
  }
};

#line 2167 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__layout__pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__layout__type_ctor_info_layout_slot_name_0
  }
};

#line 2175 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_file_layout_data_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__layout__type_ctor_info_layout_slot_name_0
};

#line 2181 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_file_layout_data_0_0[2] = {
  (MR_String) "file_name",
  (MR_String) "line_no_label_list"
};

#line 2187 "ll_backend.layout.c"
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

#line 2202 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_file_layout_data_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_file_layout_data_0_0
};

#line 2207 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_file_layout_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_file_layout_data_0_0
  }
};

#line 2216 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_file_layout_data_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_file_layout_data_0_0
};

#line 2221 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_file_layout_data_0[1] = {
  (MR_Integer) 0
};

#line 2226 "ll_backend.layout.c"
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

#line 2247 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_label_layout_long_vars_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_basic_label_layout_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_label_long_var_info_0
};

#line 2253 "ll_backend.layout.c"
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

#line 2268 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_label_layout_long_vars_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_label_layout_long_vars_0_0
};

#line 2273 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_layout_long_vars_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_label_layout_long_vars_0_0
  }
};

#line 2282 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_label_layout_long_vars_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_label_layout_long_vars_0_0
};

#line 2287 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_layout_long_vars_0[1] = {
  (MR_Integer) 0
};

#line 2292 "ll_backend.layout.c"
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

#line 2313 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_layout_no_vars_0[1] = {
  (MR_Integer) 0
};

#line 2318 "ll_backend.layout.c"
static const MR_NotagFunctorDesc ll_backend__layout__ll_backend__layout__notag_functor_desc_label_layout_no_vars_0 = {
  (MR_String) "label_layout_no_vars",
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_basic_label_layout_0,
  NULL
};

#line 2325 "ll_backend.layout.c"
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

#line 2346 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_label_layout_short_vars_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_basic_label_layout_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_label_short_var_info_0
};

#line 2352 "ll_backend.layout.c"
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

#line 2367 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_label_layout_short_vars_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_label_layout_short_vars_0_0
};

#line 2372 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_layout_short_vars_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_label_layout_short_vars_0_0
  }
};

#line 2381 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_label_layout_short_vars_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_label_layout_short_vars_0_0
};

#line 2386 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_layout_short_vars_0[1] = {
  (MR_Integer) 0
};

#line 2391 "ll_backend.layout.c"
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

#line 2412 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_label_long_var_info_0_0[6] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2422 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_label_long_var_info_0_0[6] = {
  (MR_String) "llvi_encoded_var_count",
  (MR_String) "llvi_type_params",
  (MR_String) "llvi_ptis",
  (MR_String) "llvi_hlds_var_nums",
  (MR_String) "llvi_short_locns",
  (MR_String) "llvi_long_locns"
};

#line 2432 "ll_backend.layout.c"
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

#line 2447 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_label_long_var_info_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_label_long_var_info_0_0
};

#line 2452 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_long_var_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_label_long_var_info_0_0
  }
};

#line 2461 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_label_long_var_info_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_label_long_var_info_0_0
};

#line 2466 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_long_var_info_0[1] = {
  (MR_Integer) 0
};

#line 2471 "ll_backend.layout.c"
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

#line 2492 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_label_short_var_info_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2501 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_label_short_var_info_0_0[5] = {
  (MR_String) "lsvi_encoded_var_count",
  (MR_String) "lsvi_type_params",
  (MR_String) "lsvi_ptis",
  (MR_String) "lsvi_hlds_var_nums",
  (MR_String) "lsvi_short_locns"
};

#line 2510 "ll_backend.layout.c"
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

#line 2525 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_label_short_var_info_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_label_short_var_info_0_0
};

#line 2530 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_short_var_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_label_short_var_info_0_0
  }
};

#line 2539 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_label_short_var_info_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_label_short_var_info_0_0
};

#line 2544 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_short_var_info_0[1] = {
  (MR_Integer) 0
};

#line 2549 "ll_backend.layout.c"
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

#line 2570 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_0 = {
  (MR_String) "label_has_no_var_info",
  (MR_Integer) 0
};

#line 2576 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_1 = {
  (MR_String) "label_has_short_var_info",
  (MR_Integer) 1
};

#line 2582 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_2 = {
  (MR_String) "label_has_long_var_info",
  (MR_Integer) 2
};

#line 2588 "ll_backend.layout.c"
static const MR_EnumFunctorDescPtr ll_backend__layout__ll_backend__layout__enum_value_ordered_label_vars_0[3] = {
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_0,
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_1,
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_2
};

#line 2595 "ll_backend.layout.c"
static const MR_EnumFunctorDescPtr ll_backend__layout__ll_backend__layout__enum_name_ordered_label_vars_0[3] = {
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_2,
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_0,
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_1
};

#line 2602 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_vars_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 2609 "ll_backend.layout.c"
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

#line 2630 "ll_backend.layout.c"
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

#line 2645 "ll_backend.layout.c"
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

#line 2660 "ll_backend.layout.c"
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

#line 2675 "ll_backend.layout.c"
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

#line 2690 "ll_backend.layout.c"
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

#line 2705 "ll_backend.layout.c"
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

#line 2720 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_array_name_0_6[1] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_label_vars_0
};

#line 2725 "ll_backend.layout.c"
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

#line 2740 "ll_backend.layout.c"
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

#line 2755 "ll_backend.layout.c"
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

#line 2770 "ll_backend.layout.c"
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

#line 2785 "ll_backend.layout.c"
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

#line 2800 "ll_backend.layout.c"
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

#line 2815 "ll_backend.layout.c"
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

#line 2830 "ll_backend.layout.c"
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

#line 2845 "ll_backend.layout.c"
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

#line 2860 "ll_backend.layout.c"
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

#line 2875 "ll_backend.layout.c"
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

#line 2890 "ll_backend.layout.c"
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

#line 2905 "ll_backend.layout.c"
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

#line 2920 "ll_backend.layout.c"
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

#line 2942 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_array_name_0_1[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_6
};

#line 2947 "ll_backend.layout.c"
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

#line 2961 "ll_backend.layout.c"
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

#line 2984 "ll_backend.layout.c"
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

#line 3007 "ll_backend.layout.c"
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

#line 3028 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_kind_0
};

#line 3034 "ll_backend.layout.c"
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

#line 3049 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_1[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0
};

#line 3056 "ll_backend.layout.c"
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

#line 3071 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_2[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3077 "ll_backend.layout.c"
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

#line 3092 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_3[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3098 "ll_backend.layout.c"
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

#line 3113 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_4[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3119 "ll_backend.layout.c"
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

#line 3134 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_5[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 3139 "ll_backend.layout.c"
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

#line 3154 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_6[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 3159 "ll_backend.layout.c"
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

#line 3174 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_7[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 3179 "ll_backend.layout.c"
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

#line 3194 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_8[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3200 "ll_backend.layout.c"
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

#line 3215 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_9[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 3220 "ll_backend.layout.c"
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

#line 3235 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_10[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3241 "ll_backend.layout.c"
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

#line 3256 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_11[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3262 "ll_backend.layout.c"
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

#line 3277 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_12[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3284 "ll_backend.layout.c"
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

#line 3299 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_13[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3306 "ll_backend.layout.c"
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

#line 3321 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_14[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3327 "ll_backend.layout.c"
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

#line 3342 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_15[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 3347 "ll_backend.layout.c"
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

#line 3362 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_16[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 3367 "ll_backend.layout.c"
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

#line 3382 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_17[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 3387 "ll_backend.layout.c"
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

#line 3402 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_18[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 3407 "ll_backend.layout.c"
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

#line 3422 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_name_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_0
};

#line 3427 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_name_0_1[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_1
};

#line 3432 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_name_0_2[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_2
};

#line 3437 "ll_backend.layout.c"
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

#line 3457 "ll_backend.layout.c"
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

#line 3481 "ll_backend.layout.c"
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

#line 3504 "ll_backend.layout.c"
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

#line 3527 "ll_backend.layout.c"
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

#line 3548 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_slot_name_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_array_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3554 "ll_backend.layout.c"
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

#line 3569 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_slot_name_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_slot_name_0_0
};

#line 3574 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_layout_slot_name_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_slot_name_0_0
  }
};

#line 3583 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_layout_slot_name_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_slot_name_0_0
};

#line 3588 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_layout_slot_name_0[1] = {
  (MR_Integer) 0
};

#line 3593 "ll_backend.layout.c"
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

#line 3614 "ll_backend.layout.c"
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

#line 3629 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_maybe_proc_id_and_more_0_1[4] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_layout_slot_name_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_layout_slot_name_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_layout_slot_name_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0
};

#line 3637 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_maybe_proc_id_and_more_0_1[4] = {
  (MR_String) "maybe_proc_static",
  (MR_String) "maybe_exec_trace",
  (MR_String) "proc_body_bytes",
  (MR_String) "proc_module_layout"
};

#line 3645 "ll_backend.layout.c"
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

#line 3660 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_maybe_proc_id_and_more_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_maybe_proc_id_and_more_0_0
};

#line 3665 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_maybe_proc_id_and_more_0_1[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_maybe_proc_id_and_more_0_1
};

#line 3670 "ll_backend.layout.c"
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

#line 3684 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_maybe_proc_id_and_more_0[2] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_maybe_proc_id_and_more_0_0,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_maybe_proc_id_and_more_0_1
};

#line 3690 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_maybe_proc_id_and_more_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3696 "ll_backend.layout.c"
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

#line 3717 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_module_layout_deep_prof_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_module_layout_deep_prof_0
  }
};

#line 3725 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_module_layout_debug_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_module_layout_debug_0
  }
};

#line 3733 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_module_layout_data_0_0[5] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_string_with_0s_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_module_layout_deep_prof_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_module_layout_debug_0
};

#line 3742 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_module_layout_data_0_0[5] = {
  (MR_String) "mld_module_name",
  (MR_String) "mld_string_table_size",
  (MR_String) "mld_string_table",
  (MR_String) "mld_maybe_deep_prof",
  (MR_String) "mld_maybe_debug"
};

#line 3751 "ll_backend.layout.c"
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

#line 3766 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_data_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_data_0_0
};

#line 3771 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_module_layout_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_data_0_0
  }
};

#line 3780 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_module_layout_data_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_data_0_0
};

#line 3785 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_module_layout_data_0[1] = {
  (MR_Integer) 0
};

#line 3790 "ll_backend.layout.c"
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

#line 3811 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1ll_backend__layout__type_ctor_info_layout_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0
  }
};

#line 3819 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1ll_backend__layout__type_ctor_info_file_layout_data_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_file_layout_data_0
  }
};

#line 3827 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_event_set_layout_data_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_event_set_layout_data_0
  }
};

#line 3835 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_module_layout_debug_0_0[6] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__list__ti_list_1ll_backend__layout__type_ctor_info_layout_name_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__list__ti_list_1ll_backend__layout__type_ctor_info_file_layout_data_0,
  (MR_PseudoTypeInfo) &libs__trace_params__libs__trace_params__type_ctor_info_trace_level_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_event_set_layout_data_0
};

#line 3845 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_module_layout_debug_0_0[6] = {
  (MR_String) "mld_proc_layout_names",
  (MR_String) "mld_file_layouts",
  (MR_String) "mld_trace_level",
  (MR_String) "mld_suppressed_events",
  (MR_String) "mld_num_label_exec_count",
  (MR_String) "mld_maybe_event_specs"
};

#line 3855 "ll_backend.layout.c"
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

#line 3870 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_debug_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_debug_0_0
};

#line 3875 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_module_layout_debug_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_debug_0_0
  }
};

#line 3884 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_module_layout_debug_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_debug_0_0
};

#line 3889 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_module_layout_debug_0[1] = {
  (MR_Integer) 0
};

#line 3894 "ll_backend.layout.c"
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

#line 3915 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 3923 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_module_layout_deep_prof_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 3931 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_module_layout_deep_prof_0_0[4] = {
  (MR_String) "mldp_num_oisu_types",
  (MR_String) "mldp_oisu_bytes",
  (MR_String) "mldp_num_table_types",
  (MR_String) "mldp_type_table_bytes"
};

#line 3939 "ll_backend.layout.c"
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

#line 3954 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_deep_prof_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_deep_prof_0_0
};

#line 3959 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_module_layout_deep_prof_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_deep_prof_0_0
  }
};

#line 3968 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_module_layout_deep_prof_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_deep_prof_0_0
};

#line 3973 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_module_layout_deep_prof_0[1] = {
  (MR_Integer) 0
};

#line 3978 "ll_backend.layout.c"
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

#line 3999 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_data_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_stack_traversal_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_maybe_proc_id_and_more_0
};

#line 4006 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_proc_layout_data_0_0[3] = {
  (MR_String) "proc_layout_label",
  (MR_String) "proc_layout_trav",
  (MR_String) "proc_layout_more"
};

#line 4013 "ll_backend.layout.c"
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

#line 4028 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_data_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_data_0_0
};

#line 4033 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_data_0_0
  }
};

#line 4042 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_data_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_data_0_0
};

#line 4047 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_data_0[1] = {
  (MR_Integer) 0
};

#line 4052 "ll_backend.layout.c"
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

#line 4073 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_data_or_slot_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_data_or_slot_id_0
  }
};

#line 4081 "ll_backend.layout.c"
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

#line 4104 "ll_backend.layout.c"
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

#line 4127 "ll_backend.layout.c"
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

#line 4142 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_exec_trace_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_exec_trace_0_0
};

#line 4147 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_exec_trace_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_exec_trace_0_0
  }
};

#line 4156 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_exec_trace_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_exec_trace_0_0
};

#line 4161 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_exec_trace_0[1] = {
  (MR_Integer) 0
};

#line 4166 "ll_backend.layout.c"
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

#line 4187 "ll_backend.layout.c"
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

#line 4202 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_kind_0_1[1] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_user_or_uci_0
};

#line 4207 "ll_backend.layout.c"
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

#line 4222 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_kind_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_kind_0_0
};

#line 4227 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_kind_0_1[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_kind_0_1
};

#line 4232 "ll_backend.layout.c"
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

#line 4246 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_kind_0[2] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_kind_0_1,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_kind_0_0
};

#line 4252 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_kind_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 4258 "ll_backend.layout.c"
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

#line 4279 "ll_backend.layout.c"
static const MR_VA_TypeInfo_Struct2 ll_backend__layout____vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 4289 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__layout____vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
  }
};

#line 4297 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_proc_static_0_0[6] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_deep_excp_slots_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
};

#line 4307 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_proc_layout_proc_static_0_0[6] = {
  (MR_String) "plps_file_name",
  (MR_String) "plps_line_number",
  (MR_String) "plps_is_in_interface",
  (MR_String) "plps_excp_slots",
  (MR_String) "plps_call_site_statics",
  (MR_String) "plps_coverage_points"
};

#line 4317 "ll_backend.layout.c"
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

#line 4332 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_proc_static_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_proc_static_0_0
};

#line 4337 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_proc_static_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_proc_static_0_0
  }
};

#line 4346 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_proc_static_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_proc_static_0_0
};

#line 4351 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_proc_static_0[1] = {
  (MR_Integer) 0
};

#line 4356 "ll_backend.layout.c"
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

#line 4377 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 4385 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_stack_traversal_0_0[4] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0
};

#line 4393 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_proc_layout_stack_traversal_0_0[4] = {
  (MR_String) "plst_entry_label",
  (MR_String) "plst_succip_slot",
  (MR_String) "plst_stack_slot_count",
  (MR_String) "plst_detism"
};

#line 4401 "ll_backend.layout.c"
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

#line 4416 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_stack_traversal_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_stack_traversal_0_0
};

#line 4421 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_stack_traversal_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_stack_traversal_0_0
  }
};

#line 4430 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_stack_traversal_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_stack_traversal_0_0
};

#line 4435 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_stack_traversal_0[1] = {
  (MR_Integer) 0
};

#line 4440 "ll_backend.layout.c"
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

#line 4461 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_0 = {
  (MR_String) "user",
  (MR_Integer) 0
};

#line 4467 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_1 = {
  (MR_String) "uci",
  (MR_Integer) 1
};

#line 4473 "ll_backend.layout.c"
static const MR_EnumFunctorDescPtr ll_backend__layout__ll_backend__layout__enum_value_ordered_proc_layout_user_or_uci_0[2] = {
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_0,
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_1
};

#line 4479 "ll_backend.layout.c"
static const MR_EnumFunctorDescPtr ll_backend__layout__ll_backend__layout__enum_name_ordered_proc_layout_user_or_uci_0[2] = {
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_1,
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_0
};

#line 4485 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_user_or_uci_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 4491 "ll_backend.layout.c"
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

#line 4512 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_string_with_0s_0[1] = {
  (MR_Integer) 0
};

#line 4517 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4525 "ll_backend.layout.c"
static const MR_NotagFunctorDesc ll_backend__layout__ll_backend__layout__notag_functor_desc_string_with_0s_0 = {
  (MR_String) "string_with_0s",
  (MR_PseudoTypeInfo) &ll_backend__layout__list__ti_list_1builtin__type_ctor_info_string_0,
  NULL
};

#line 4532 "ll_backend.layout.c"
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

#line 4553 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_table_io_args_data_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0
};

#line 4560 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_table_io_args_data_0_0[3] = {
  (MR_String) "tia_answerblock_arity",
  (MR_String) "tia_ptis",
  (MR_String) "tia_type_params"
};

#line 4567 "ll_backend.layout.c"
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

#line 4582 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_table_io_args_data_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_table_io_args_data_0_0
};

#line 4587 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_table_io_args_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_table_io_args_data_0_0
  }
};

#line 4596 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_table_io_args_data_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_table_io_args_data_0_0
};

#line 4601 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_table_io_args_data_0[1] = {
  (MR_Integer) 0
};

#line 4606 "ll_backend.layout.c"
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

#line 4627 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_table_io_args_data_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_table_io_args_data_0
  }
};

#line 4635 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_table_io_entry_data_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_table_io_args_data_0
};

#line 4641 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_table_io_entry_data_0_0[2] = {
  (MR_String) "tie_proc_ptr",
  (MR_String) "tie_maybe_args"
};

#line 4647 "ll_backend.layout.c"
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

#line 4662 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_table_io_entry_data_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_table_io_entry_data_0_0
};

#line 4667 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_table_io_entry_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_table_io_entry_data_0_0
  }
};

#line 4676 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_table_io_entry_data_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_table_io_entry_data_0_0
};

#line 4681 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_table_io_entry_data_0[1] = {
  (MR_Integer) 0
};

#line 4686 "ll_backend.layout.c"
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

#line 4707 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_user_event_data_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
};

#line 4714 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_user_event_data_0_0[3] = {
  (MR_String) "user_event_number",
  (MR_String) "user_event_locns",
  (MR_String) "user_event_var_nums"
};

#line 4721 "ll_backend.layout.c"
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

#line 4736 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_user_event_data_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_user_event_data_0_0
};

#line 4741 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_user_event_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_user_event_data_0_0
  }
};

#line 4750 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_user_event_data_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_user_event_data_0_0
};

#line 4755 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_user_event_data_0[1] = {
  (MR_Integer) 0
};

#line 4760 "ll_backend.layout.c"
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

#line 4781 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____alloc_site_info_0_0_10001(
#line 4784 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 4786 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 4788 "ll_backend.layout.c"
{
#line 4790 "ll_backend.layout.c"
  {
#line 4792 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 4795 "ll_backend.layout.c"
    {
#line 4797 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____alloc_site_info_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 4800 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 4802 "ll_backend.layout.c"
  }
#line 4804 "ll_backend.layout.c"
}

#line 4807 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____alloc_site_info_0_0_10001(
#line 4810 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 4812 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 4814 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 4816 "ll_backend.layout.c"
{
#line 4818 "ll_backend.layout.c"
  {
#line 4820 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 4823 "ll_backend.layout.c"
    {
#line 4825 "ll_backend.layout.c"
      ll_backend__layout____Compare____alloc_site_info_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 4828 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 4830 "ll_backend.layout.c"
  }
#line 4832 "ll_backend.layout.c"
}

#line 4835 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____basic_label_layout_0_0_10001(
#line 4838 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 4840 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 4842 "ll_backend.layout.c"
{
#line 4844 "ll_backend.layout.c"
  {
#line 4846 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 4849 "ll_backend.layout.c"
    {
#line 4851 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____basic_label_layout_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 4854 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 4856 "ll_backend.layout.c"
  }
#line 4858 "ll_backend.layout.c"
}

#line 4861 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____basic_label_layout_0_0_10001(
#line 4864 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 4866 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 4868 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 4870 "ll_backend.layout.c"
{
#line 4872 "ll_backend.layout.c"
  {
#line 4874 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 4877 "ll_backend.layout.c"
    {
#line 4879 "ll_backend.layout.c"
      ll_backend__layout____Compare____basic_label_layout_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 4882 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 4884 "ll_backend.layout.c"
  }
#line 4886 "ll_backend.layout.c"
}

#line 4889 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____closure_proc_id_data_0_0_10001(
#line 4892 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 4894 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 4896 "ll_backend.layout.c"
{
#line 4898 "ll_backend.layout.c"
  {
#line 4900 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 4903 "ll_backend.layout.c"
    {
#line 4905 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____closure_proc_id_data_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 4908 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 4910 "ll_backend.layout.c"
  }
#line 4912 "ll_backend.layout.c"
}

#line 4915 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____closure_proc_id_data_0_0_10001(
#line 4918 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 4920 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 4922 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 4924 "ll_backend.layout.c"
{
#line 4926 "ll_backend.layout.c"
  {
#line 4928 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 4931 "ll_backend.layout.c"
    {
#line 4933 "ll_backend.layout.c"
      ll_backend__layout____Compare____closure_proc_id_data_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 4936 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 4938 "ll_backend.layout.c"
  }
#line 4940 "ll_backend.layout.c"
}

#line 4943 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____data_or_slot_id_0_0_10001(
#line 4946 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 4948 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 4950 "ll_backend.layout.c"
{
#line 4952 "ll_backend.layout.c"
  {
#line 4954 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 4957 "ll_backend.layout.c"
    {
#line 4959 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____data_or_slot_id_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 4962 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 4964 "ll_backend.layout.c"
  }
#line 4966 "ll_backend.layout.c"
}

#line 4969 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____data_or_slot_id_0_0_10001(
#line 4972 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 4974 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 4976 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 4978 "ll_backend.layout.c"
{
#line 4980 "ll_backend.layout.c"
  {
#line 4982 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 4985 "ll_backend.layout.c"
    {
#line 4987 "ll_backend.layout.c"
      ll_backend__layout____Compare____data_or_slot_id_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 4990 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 4992 "ll_backend.layout.c"
  }
#line 4994 "ll_backend.layout.c"
}

#line 4997 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____deep_excp_slots_0_0_10001(
#line 5000 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5002 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5004 "ll_backend.layout.c"
{
#line 5006 "ll_backend.layout.c"
  {
#line 5008 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5011 "ll_backend.layout.c"
    {
#line 5013 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____deep_excp_slots_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5016 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5018 "ll_backend.layout.c"
  }
#line 5020 "ll_backend.layout.c"
}

#line 5023 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____deep_excp_slots_0_0_10001(
#line 5026 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5028 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5030 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5032 "ll_backend.layout.c"
{
#line 5034 "ll_backend.layout.c"
  {
#line 5036 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5039 "ll_backend.layout.c"
    {
#line 5041 "ll_backend.layout.c"
      ll_backend__layout____Compare____deep_excp_slots_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5044 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5046 "ll_backend.layout.c"
  }
#line 5048 "ll_backend.layout.c"
}

#line 5051 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____event_set_layout_data_0_0_10001(
#line 5054 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5056 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5058 "ll_backend.layout.c"
{
#line 5060 "ll_backend.layout.c"
  {
#line 5062 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5065 "ll_backend.layout.c"
    {
#line 5067 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____event_set_layout_data_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5070 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5072 "ll_backend.layout.c"
  }
#line 5074 "ll_backend.layout.c"
}

#line 5077 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____event_set_layout_data_0_0_10001(
#line 5080 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5082 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5084 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5086 "ll_backend.layout.c"
{
#line 5088 "ll_backend.layout.c"
  {
#line 5090 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5093 "ll_backend.layout.c"
    {
#line 5095 "ll_backend.layout.c"
      ll_backend__layout____Compare____event_set_layout_data_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5098 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5100 "ll_backend.layout.c"
  }
#line 5102 "ll_backend.layout.c"
}

#line 5105 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____file_layout_data_0_0_10001(
#line 5108 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5110 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5112 "ll_backend.layout.c"
{
#line 5114 "ll_backend.layout.c"
  {
#line 5116 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5119 "ll_backend.layout.c"
    {
#line 5121 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____file_layout_data_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5124 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5126 "ll_backend.layout.c"
  }
#line 5128 "ll_backend.layout.c"
}

#line 5131 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____file_layout_data_0_0_10001(
#line 5134 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5136 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5138 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5140 "ll_backend.layout.c"
{
#line 5142 "ll_backend.layout.c"
  {
#line 5144 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5147 "ll_backend.layout.c"
    {
#line 5149 "ll_backend.layout.c"
      ll_backend__layout____Compare____file_layout_data_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5152 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5154 "ll_backend.layout.c"
  }
#line 5156 "ll_backend.layout.c"
}

#line 5159 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_layout_long_vars_0_0_10001(
#line 5162 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5164 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5166 "ll_backend.layout.c"
{
#line 5168 "ll_backend.layout.c"
  {
#line 5170 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5173 "ll_backend.layout.c"
    {
#line 5175 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____label_layout_long_vars_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5178 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5180 "ll_backend.layout.c"
  }
#line 5182 "ll_backend.layout.c"
}

#line 5185 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_layout_long_vars_0_0_10001(
#line 5188 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5190 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5192 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5194 "ll_backend.layout.c"
{
#line 5196 "ll_backend.layout.c"
  {
#line 5198 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5201 "ll_backend.layout.c"
    {
#line 5203 "ll_backend.layout.c"
      ll_backend__layout____Compare____label_layout_long_vars_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5206 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5208 "ll_backend.layout.c"
  }
#line 5210 "ll_backend.layout.c"
}

#line 5213 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_layout_no_vars_0_0_10001(
#line 5216 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5218 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5220 "ll_backend.layout.c"
{
#line 5222 "ll_backend.layout.c"
  {
#line 5224 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5227 "ll_backend.layout.c"
    {
#line 5229 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____label_layout_no_vars_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5232 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5234 "ll_backend.layout.c"
  }
#line 5236 "ll_backend.layout.c"
}

#line 5239 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_layout_no_vars_0_0_10001(
#line 5242 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5244 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5246 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5248 "ll_backend.layout.c"
{
#line 5250 "ll_backend.layout.c"
  {
#line 5252 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5255 "ll_backend.layout.c"
    {
#line 5257 "ll_backend.layout.c"
      ll_backend__layout____Compare____label_layout_no_vars_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5260 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5262 "ll_backend.layout.c"
  }
#line 5264 "ll_backend.layout.c"
}

#line 5267 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_layout_short_vars_0_0_10001(
#line 5270 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5272 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5274 "ll_backend.layout.c"
{
#line 5276 "ll_backend.layout.c"
  {
#line 5278 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5281 "ll_backend.layout.c"
    {
#line 5283 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____label_layout_short_vars_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5286 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5288 "ll_backend.layout.c"
  }
#line 5290 "ll_backend.layout.c"
}

#line 5293 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_layout_short_vars_0_0_10001(
#line 5296 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5298 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5300 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5302 "ll_backend.layout.c"
{
#line 5304 "ll_backend.layout.c"
  {
#line 5306 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5309 "ll_backend.layout.c"
    {
#line 5311 "ll_backend.layout.c"
      ll_backend__layout____Compare____label_layout_short_vars_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5314 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5316 "ll_backend.layout.c"
  }
#line 5318 "ll_backend.layout.c"
}

#line 5321 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_long_var_info_0_0_10001(
#line 5324 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5326 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5328 "ll_backend.layout.c"
{
#line 5330 "ll_backend.layout.c"
  {
#line 5332 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5335 "ll_backend.layout.c"
    {
#line 5337 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____label_long_var_info_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5340 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5342 "ll_backend.layout.c"
  }
#line 5344 "ll_backend.layout.c"
}

#line 5347 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_long_var_info_0_0_10001(
#line 5350 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5352 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5354 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5356 "ll_backend.layout.c"
{
#line 5358 "ll_backend.layout.c"
  {
#line 5360 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5363 "ll_backend.layout.c"
    {
#line 5365 "ll_backend.layout.c"
      ll_backend__layout____Compare____label_long_var_info_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5368 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5370 "ll_backend.layout.c"
  }
#line 5372 "ll_backend.layout.c"
}

#line 5375 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_short_var_info_0_0_10001(
#line 5378 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5380 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5382 "ll_backend.layout.c"
{
#line 5384 "ll_backend.layout.c"
  {
#line 5386 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5389 "ll_backend.layout.c"
    {
#line 5391 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____label_short_var_info_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5394 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5396 "ll_backend.layout.c"
  }
#line 5398 "ll_backend.layout.c"
}

#line 5401 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_short_var_info_0_0_10001(
#line 5404 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5406 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5408 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5410 "ll_backend.layout.c"
{
#line 5412 "ll_backend.layout.c"
  {
#line 5414 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5417 "ll_backend.layout.c"
    {
#line 5419 "ll_backend.layout.c"
      ll_backend__layout____Compare____label_short_var_info_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5422 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5424 "ll_backend.layout.c"
  }
#line 5426 "ll_backend.layout.c"
}

#line 5429 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_vars_0_0_10001(
#line 5432 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5434 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5436 "ll_backend.layout.c"
{
#line 5438 "ll_backend.layout.c"
  {
#line 5440 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5443 "ll_backend.layout.c"
    {
#line 5445 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____label_vars_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5448 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5450 "ll_backend.layout.c"
  }
#line 5452 "ll_backend.layout.c"
}

#line 5455 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_vars_0_0_10001(
#line 5458 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5460 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5462 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5464 "ll_backend.layout.c"
{
#line 5466 "ll_backend.layout.c"
  {
#line 5468 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5471 "ll_backend.layout.c"
    {
#line 5473 "ll_backend.layout.c"
      ll_backend__layout____Compare____label_vars_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5476 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5478 "ll_backend.layout.c"
  }
#line 5480 "ll_backend.layout.c"
}

#line 5483 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____layout_array_name_0_0_10001(
#line 5486 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5488 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5490 "ll_backend.layout.c"
{
#line 5492 "ll_backend.layout.c"
  {
#line 5494 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5497 "ll_backend.layout.c"
    {
#line 5499 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_array_name_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5502 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5504 "ll_backend.layout.c"
  }
#line 5506 "ll_backend.layout.c"
}

#line 5509 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____layout_array_name_0_0_10001(
#line 5512 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5514 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5516 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5518 "ll_backend.layout.c"
{
#line 5520 "ll_backend.layout.c"
  {
#line 5522 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5525 "ll_backend.layout.c"
    {
#line 5527 "ll_backend.layout.c"
      ll_backend__layout____Compare____layout_array_name_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5530 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5532 "ll_backend.layout.c"
  }
#line 5534 "ll_backend.layout.c"
}

#line 5537 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____layout_name_0_0_10001(
#line 5540 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5542 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5544 "ll_backend.layout.c"
{
#line 5546 "ll_backend.layout.c"
  {
#line 5548 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5551 "ll_backend.layout.c"
    {
#line 5553 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_name_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5556 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5558 "ll_backend.layout.c"
  }
#line 5560 "ll_backend.layout.c"
}

#line 5563 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____layout_name_0_0_10001(
#line 5566 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5568 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5570 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5572 "ll_backend.layout.c"
{
#line 5574 "ll_backend.layout.c"
  {
#line 5576 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5579 "ll_backend.layout.c"
    {
#line 5581 "ll_backend.layout.c"
      ll_backend__layout____Compare____layout_name_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5584 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5586 "ll_backend.layout.c"
  }
#line 5588 "ll_backend.layout.c"
}

#line 5591 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____layout_slot_name_0_0_10001(
#line 5594 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5596 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5598 "ll_backend.layout.c"
{
#line 5600 "ll_backend.layout.c"
  {
#line 5602 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5605 "ll_backend.layout.c"
    {
#line 5607 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_slot_name_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5610 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5612 "ll_backend.layout.c"
  }
#line 5614 "ll_backend.layout.c"
}

#line 5617 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____layout_slot_name_0_0_10001(
#line 5620 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5622 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5624 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5626 "ll_backend.layout.c"
{
#line 5628 "ll_backend.layout.c"
  {
#line 5630 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5633 "ll_backend.layout.c"
    {
#line 5635 "ll_backend.layout.c"
      ll_backend__layout____Compare____layout_slot_name_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5638 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5640 "ll_backend.layout.c"
  }
#line 5642 "ll_backend.layout.c"
}

#line 5645 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____maybe_proc_id_and_more_0_0_10001(
#line 5648 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5650 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5652 "ll_backend.layout.c"
{
#line 5654 "ll_backend.layout.c"
  {
#line 5656 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5659 "ll_backend.layout.c"
    {
#line 5661 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____maybe_proc_id_and_more_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5664 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5666 "ll_backend.layout.c"
  }
#line 5668 "ll_backend.layout.c"
}

#line 5671 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____maybe_proc_id_and_more_0_0_10001(
#line 5674 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5676 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5678 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5680 "ll_backend.layout.c"
{
#line 5682 "ll_backend.layout.c"
  {
#line 5684 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5687 "ll_backend.layout.c"
    {
#line 5689 "ll_backend.layout.c"
      ll_backend__layout____Compare____maybe_proc_id_and_more_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5692 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5694 "ll_backend.layout.c"
  }
#line 5696 "ll_backend.layout.c"
}

#line 5699 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____module_layout_data_0_0_10001(
#line 5702 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5704 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5706 "ll_backend.layout.c"
{
#line 5708 "ll_backend.layout.c"
  {
#line 5710 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5713 "ll_backend.layout.c"
    {
#line 5715 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____module_layout_data_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5718 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5720 "ll_backend.layout.c"
  }
#line 5722 "ll_backend.layout.c"
}

#line 5725 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____module_layout_data_0_0_10001(
#line 5728 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5730 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5732 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5734 "ll_backend.layout.c"
{
#line 5736 "ll_backend.layout.c"
  {
#line 5738 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5741 "ll_backend.layout.c"
    {
#line 5743 "ll_backend.layout.c"
      ll_backend__layout____Compare____module_layout_data_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5746 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5748 "ll_backend.layout.c"
  }
#line 5750 "ll_backend.layout.c"
}

#line 5753 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____module_layout_debug_0_0_10001(
#line 5756 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5758 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5760 "ll_backend.layout.c"
{
#line 5762 "ll_backend.layout.c"
  {
#line 5764 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5767 "ll_backend.layout.c"
    {
#line 5769 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____module_layout_debug_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5772 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5774 "ll_backend.layout.c"
  }
#line 5776 "ll_backend.layout.c"
}

#line 5779 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____module_layout_debug_0_0_10001(
#line 5782 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5784 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5786 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5788 "ll_backend.layout.c"
{
#line 5790 "ll_backend.layout.c"
  {
#line 5792 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5795 "ll_backend.layout.c"
    {
#line 5797 "ll_backend.layout.c"
      ll_backend__layout____Compare____module_layout_debug_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5800 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5802 "ll_backend.layout.c"
  }
#line 5804 "ll_backend.layout.c"
}

#line 5807 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____module_layout_deep_prof_0_0_10001(
#line 5810 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5812 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5814 "ll_backend.layout.c"
{
#line 5816 "ll_backend.layout.c"
  {
#line 5818 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5821 "ll_backend.layout.c"
    {
#line 5823 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____module_layout_deep_prof_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5826 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5828 "ll_backend.layout.c"
  }
#line 5830 "ll_backend.layout.c"
}

#line 5833 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____module_layout_deep_prof_0_0_10001(
#line 5836 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5838 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5840 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5842 "ll_backend.layout.c"
{
#line 5844 "ll_backend.layout.c"
  {
#line 5846 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5849 "ll_backend.layout.c"
    {
#line 5851 "ll_backend.layout.c"
      ll_backend__layout____Compare____module_layout_deep_prof_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5854 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5856 "ll_backend.layout.c"
  }
#line 5858 "ll_backend.layout.c"
}

#line 5861 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_data_0_0_10001(
#line 5864 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5866 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5868 "ll_backend.layout.c"
{
#line 5870 "ll_backend.layout.c"
  {
#line 5872 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5875 "ll_backend.layout.c"
    {
#line 5877 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____proc_layout_data_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5880 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5882 "ll_backend.layout.c"
  }
#line 5884 "ll_backend.layout.c"
}

#line 5887 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_data_0_0_10001(
#line 5890 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5892 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5894 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5896 "ll_backend.layout.c"
{
#line 5898 "ll_backend.layout.c"
  {
#line 5900 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5903 "ll_backend.layout.c"
    {
#line 5905 "ll_backend.layout.c"
      ll_backend__layout____Compare____proc_layout_data_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5908 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5910 "ll_backend.layout.c"
  }
#line 5912 "ll_backend.layout.c"
}

#line 5915 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_exec_trace_0_0_10001(
#line 5918 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5920 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5922 "ll_backend.layout.c"
{
#line 5924 "ll_backend.layout.c"
  {
#line 5926 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5929 "ll_backend.layout.c"
    {
#line 5931 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____proc_layout_exec_trace_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5934 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5936 "ll_backend.layout.c"
  }
#line 5938 "ll_backend.layout.c"
}

#line 5941 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_exec_trace_0_0_10001(
#line 5944 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5946 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5948 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5950 "ll_backend.layout.c"
{
#line 5952 "ll_backend.layout.c"
  {
#line 5954 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5957 "ll_backend.layout.c"
    {
#line 5959 "ll_backend.layout.c"
      ll_backend__layout____Compare____proc_layout_exec_trace_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5962 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5964 "ll_backend.layout.c"
  }
#line 5966 "ll_backend.layout.c"
}

#line 5969 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_kind_0_0_10001(
#line 5972 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5974 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5976 "ll_backend.layout.c"
{
#line 5978 "ll_backend.layout.c"
  {
#line 5980 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5983 "ll_backend.layout.c"
    {
#line 5985 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____proc_layout_kind_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5988 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5990 "ll_backend.layout.c"
  }
#line 5992 "ll_backend.layout.c"
}

#line 5995 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_kind_0_0_10001(
#line 5998 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 6000 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 6002 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 6004 "ll_backend.layout.c"
{
#line 6006 "ll_backend.layout.c"
  {
#line 6008 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 6011 "ll_backend.layout.c"
    {
#line 6013 "ll_backend.layout.c"
      ll_backend__layout____Compare____proc_layout_kind_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 6016 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 6018 "ll_backend.layout.c"
  }
#line 6020 "ll_backend.layout.c"
}

#line 6023 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_proc_static_0_0_10001(
#line 6026 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 6028 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 6030 "ll_backend.layout.c"
{
#line 6032 "ll_backend.layout.c"
  {
#line 6034 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 6037 "ll_backend.layout.c"
    {
#line 6039 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____proc_layout_proc_static_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 6042 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 6044 "ll_backend.layout.c"
  }
#line 6046 "ll_backend.layout.c"
}

#line 6049 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_proc_static_0_0_10001(
#line 6052 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 6054 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 6056 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 6058 "ll_backend.layout.c"
{
#line 6060 "ll_backend.layout.c"
  {
#line 6062 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 6065 "ll_backend.layout.c"
    {
#line 6067 "ll_backend.layout.c"
      ll_backend__layout____Compare____proc_layout_proc_static_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 6070 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 6072 "ll_backend.layout.c"
  }
#line 6074 "ll_backend.layout.c"
}

#line 6077 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_stack_traversal_0_0_10001(
#line 6080 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 6082 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 6084 "ll_backend.layout.c"
{
#line 6086 "ll_backend.layout.c"
  {
#line 6088 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 6091 "ll_backend.layout.c"
    {
#line 6093 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____proc_layout_stack_traversal_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 6096 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 6098 "ll_backend.layout.c"
  }
#line 6100 "ll_backend.layout.c"
}

#line 6103 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_stack_traversal_0_0_10001(
#line 6106 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 6108 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 6110 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 6112 "ll_backend.layout.c"
{
#line 6114 "ll_backend.layout.c"
  {
#line 6116 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 6119 "ll_backend.layout.c"
    {
#line 6121 "ll_backend.layout.c"
      ll_backend__layout____Compare____proc_layout_stack_traversal_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 6124 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 6126 "ll_backend.layout.c"
  }
#line 6128 "ll_backend.layout.c"
}

#line 6131 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_user_or_uci_0_0_10001(
#line 6134 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 6136 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 6138 "ll_backend.layout.c"
{
#line 6140 "ll_backend.layout.c"
  {
#line 6142 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 6145 "ll_backend.layout.c"
    {
#line 6147 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____proc_layout_user_or_uci_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 6150 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 6152 "ll_backend.layout.c"
  }
#line 6154 "ll_backend.layout.c"
}

#line 6157 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_user_or_uci_0_0_10001(
#line 6160 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 6162 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 6164 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 6166 "ll_backend.layout.c"
{
#line 6168 "ll_backend.layout.c"
  {
#line 6170 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 6173 "ll_backend.layout.c"
    {
#line 6175 "ll_backend.layout.c"
      ll_backend__layout____Compare____proc_layout_user_or_uci_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 6178 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 6180 "ll_backend.layout.c"
  }
#line 6182 "ll_backend.layout.c"
}

#line 6185 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____string_with_0s_0_0_10001(
#line 6188 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 6190 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 6192 "ll_backend.layout.c"
{
#line 6194 "ll_backend.layout.c"
  {
#line 6196 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 6199 "ll_backend.layout.c"
    {
#line 6201 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____string_with_0s_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 6204 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 6206 "ll_backend.layout.c"
  }
#line 6208 "ll_backend.layout.c"
}

#line 6211 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____string_with_0s_0_0_10001(
#line 6214 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 6216 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 6218 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 6220 "ll_backend.layout.c"
{
#line 6222 "ll_backend.layout.c"
  {
#line 6224 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 6227 "ll_backend.layout.c"
    {
#line 6229 "ll_backend.layout.c"
      ll_backend__layout____Compare____string_with_0s_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 6232 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 6234 "ll_backend.layout.c"
  }
#line 6236 "ll_backend.layout.c"
}

#line 6239 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____table_io_args_data_0_0_10001(
#line 6242 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 6244 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 6246 "ll_backend.layout.c"
{
#line 6248 "ll_backend.layout.c"
  {
#line 6250 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 6253 "ll_backend.layout.c"
    {
#line 6255 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____table_io_args_data_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 6258 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 6260 "ll_backend.layout.c"
  }
#line 6262 "ll_backend.layout.c"
}

#line 6265 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____table_io_args_data_0_0_10001(
#line 6268 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 6270 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 6272 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 6274 "ll_backend.layout.c"
{
#line 6276 "ll_backend.layout.c"
  {
#line 6278 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 6281 "ll_backend.layout.c"
    {
#line 6283 "ll_backend.layout.c"
      ll_backend__layout____Compare____table_io_args_data_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 6286 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 6288 "ll_backend.layout.c"
  }
#line 6290 "ll_backend.layout.c"
}

#line 6293 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____table_io_entry_data_0_0_10001(
#line 6296 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 6298 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 6300 "ll_backend.layout.c"
{
#line 6302 "ll_backend.layout.c"
  {
#line 6304 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 6307 "ll_backend.layout.c"
    {
#line 6309 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____table_io_entry_data_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 6312 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 6314 "ll_backend.layout.c"
  }
#line 6316 "ll_backend.layout.c"
}

#line 6319 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____table_io_entry_data_0_0_10001(
#line 6322 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 6324 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 6326 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 6328 "ll_backend.layout.c"
{
#line 6330 "ll_backend.layout.c"
  {
#line 6332 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 6335 "ll_backend.layout.c"
    {
#line 6337 "ll_backend.layout.c"
      ll_backend__layout____Compare____table_io_entry_data_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 6340 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 6342 "ll_backend.layout.c"
  }
#line 6344 "ll_backend.layout.c"
}

#line 6347 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____user_event_data_0_0_10001(
#line 6350 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 6352 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 6354 "ll_backend.layout.c"
{
#line 6356 "ll_backend.layout.c"
  {
#line 6358 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 6361 "ll_backend.layout.c"
    {
#line 6363 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____user_event_data_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 6366 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 6368 "ll_backend.layout.c"
  }
#line 6370 "ll_backend.layout.c"
}

#line 6373 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____user_event_data_0_0_10001(
#line 6376 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 6378 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 6380 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 6382 "ll_backend.layout.c"
{
#line 6384 "ll_backend.layout.c"
  {
#line 6386 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 6389 "ll_backend.layout.c"
    {
#line 6391 "ll_backend.layout.c"
      ll_backend__layout____Compare____user_event_data_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 6394 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 6396 "ll_backend.layout.c"
  }
#line 6398 "ll_backend.layout.c"
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
#line 6425 "ll_backend.layout.c"
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
#line 6451 "ll_backend.layout.c"
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
#line 6471 "ll_backend.layout.c"
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

#line 6538 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_3_3 == ll_backend__layout__V_6_6);
#line 74 "layout.m"
        if (ll_backend__layout__succeeded)
#line 74 "layout.m"
          {
#line 6544 "ll_backend.layout.c"
            {
#line 6546 "ll_backend.layout.c"
              ll_backend__layout__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__layout__V_4_4, ll_backend__layout__V_7_7);
            }
#line 74 "layout.m"
            if (ll_backend__layout__succeeded)
#line 6551 "ll_backend.layout.c"
              {
#line 6553 "ll_backend.layout.c"
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
#line 6591 "ll_backend.layout.c"
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
#line 6613 "ll_backend.layout.c"
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

#line 6680 "ll_backend.layout.c"
        {
#line 6682 "ll_backend.layout.c"
          ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_name_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_5_5);
        }
#line 201 "layout.m"
        if (ll_backend__layout__succeeded)
#line 201 "layout.m"
          {
#line 6689 "ll_backend.layout.c"
            ll_backend__layout__TypeInfo_9_9 = (MR_Word) &ll_backend__layout_scalar_common_1[15];
#line 6691 "ll_backend.layout.c"
            {
#line 6693 "ll_backend.layout.c"
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
#line 6731 "ll_backend.layout.c"
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
#line 6757 "ll_backend.layout.c"
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
#line 6777 "ll_backend.layout.c"
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

#line 6844 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_3_3 == ll_backend__layout__V_6_6);
#line 177 "layout.m"
        if (ll_backend__layout__succeeded)
#line 177 "layout.m"
          {
#line 6850 "ll_backend.layout.c"
            {
#line 6852 "ll_backend.layout.c"
              ll_backend__layout__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__layout__V_4_4, ll_backend__layout__V_7_7);
            }
#line 177 "layout.m"
            if (ll_backend__layout__succeeded)
#line 6857 "ll_backend.layout.c"
              {
#line 6859 "ll_backend.layout.c"
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
#line 6897 "ll_backend.layout.c"
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

#line 6955 "ll_backend.layout.c"
        {
#line 6957 "ll_backend.layout.c"
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
#line 7010 "ll_backend.layout.c"
  {
#line 7012 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded = (ll_backend__layout__HeadVar__2_1 == ll_backend__layout__HeadVar__2_2);

#line 7015 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 7017 "ll_backend.layout.c"
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
#line 7046 "ll_backend.layout.c"
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
#line 7076 "ll_backend.layout.c"
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
#line 7096 "ll_backend.layout.c"
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
#line 7116 "ll_backend.layout.c"
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

#line 7200 "ll_backend.layout.c"
        {
#line 7202 "ll_backend.layout.c"
          ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__layout_scalar_common_1[13], ((MR_Box) (ll_backend__layout__V_3_3)), ((MR_Box) (ll_backend__layout__V_7_7)));
        }
#line 139 "layout.m"
        if (ll_backend__layout__succeeded)
#line 139 "layout.m"
          {
#line 7209 "ll_backend.layout.c"
            ll_backend__layout__TypeInfo_14_14 = (MR_Word) &ll_backend__layout_scalar_common_1[2];
#line 7211 "ll_backend.layout.c"
            {
#line 7213 "ll_backend.layout.c"
              ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_14_14, ((MR_Box) (ll_backend__layout__V_4_4)), ((MR_Box) (ll_backend__layout__V_8_8)));
            }
#line 139 "layout.m"
            if (ll_backend__layout__succeeded)
#line 139 "layout.m"
              {
#line 7220 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_5_5 == ll_backend__layout__V_9_9);
#line 139 "layout.m"
                if (ll_backend__layout__succeeded)
#line 7224 "ll_backend.layout.c"
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
#line 7263 "ll_backend.layout.c"
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
#line 7301 "ll_backend.layout.c"
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
#line 7321 "ll_backend.layout.c"
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
#line 7345 "ll_backend.layout.c"
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
#line 7365 "ll_backend.layout.c"
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
#line 7385 "ll_backend.layout.c"
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

#line 7478 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (strcmp(ll_backend__layout__V_3_3, ll_backend__layout__V_9_9) == 0);
#line 167 "layout.m"
        if (ll_backend__layout__succeeded)
#line 167 "layout.m"
          {
#line 7484 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 == ll_backend__layout__V_10_10);
#line 167 "layout.m"
            if (ll_backend__layout__succeeded)
#line 167 "layout.m"
              {
#line 7490 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_5_5 == ll_backend__layout__V_11_11);
#line 167 "layout.m"
                if (ll_backend__layout__succeeded)
#line 167 "layout.m"
                  {
#line 7496 "ll_backend.layout.c"
                    {
#line 7498 "ll_backend.layout.c"
                      ll_backend__layout__succeeded = ll_backend__layout____Unify____deep_excp_slots_0_0(ll_backend__layout__V_6_6, ll_backend__layout__V_12_12);
                    }
#line 167 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 167 "layout.m"
                      {
#line 7505 "ll_backend.layout.c"
                        ll_backend__layout__TypeInfo_17_17 = (MR_Word) &ll_backend__layout_scalar_common_1[12];
#line 7507 "ll_backend.layout.c"
                        {
#line 7509 "ll_backend.layout.c"
                          ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_17_17, ((MR_Box) (ll_backend__layout__V_7_7)), ((MR_Box) (ll_backend__layout__V_13_13)));
                        }
#line 167 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 167 "layout.m"
                          {
#line 7516 "ll_backend.layout.c"
                            ll_backend__layout__TypeInfo_18_18 = (MR_Word) &ll_backend__layout_scalar_common_1[12];
#line 7518 "ll_backend.layout.c"
                            {
#line 7520 "ll_backend.layout.c"
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
#line 7566 "ll_backend.layout.c"
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
#line 7578 "ll_backend.layout.c"
          *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 1;
#line 390 "layout.m"
      else
#line 390 "layout.m"
        {
#line 390 "layout.m"
          MR_Word ll_backend__layout__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));

#line 390 "layout.m"
          if ((ll_backend__layout__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7589 "ll_backend.layout.c"
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
#line 7674 "ll_backend.layout.c"
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
#line 7711 "ll_backend.layout.c"
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
#line 7801 "ll_backend.layout.c"
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
#line 7821 "ll_backend.layout.c"
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
#line 7841 "ll_backend.layout.c"
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
#line 7861 "ll_backend.layout.c"
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
#line 7881 "ll_backend.layout.c"
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
#line 7901 "ll_backend.layout.c"
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
#line 7921 "ll_backend.layout.c"
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
#line 7941 "ll_backend.layout.c"
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
#line 7961 "ll_backend.layout.c"
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
#line 7981 "ll_backend.layout.c"
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
#line 8001 "ll_backend.layout.c"
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
#line 8021 "ll_backend.layout.c"
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
#line 8041 "ll_backend.layout.c"
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
#line 8061 "ll_backend.layout.c"
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
#line 8081 "ll_backend.layout.c"
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
#line 8101 "ll_backend.layout.c"
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
#line 8121 "ll_backend.layout.c"
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
#line 8141 "ll_backend.layout.c"
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

#line 8322 "ll_backend.layout.c"
        {
#line 8324 "ll_backend.layout.c"
          ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__layout_scalar_common_1[3], ((MR_Box) (ll_backend__layout__V_3_3)), ((MR_Box) (ll_backend__layout__V_22_22)));
        }
#line 212 "layout.m"
        if (ll_backend__layout__succeeded)
#line 212 "layout.m"
          {
#line 8331 "ll_backend.layout.c"
            {
#line 8333 "ll_backend.layout.c"
              ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_slot_name_0_0(ll_backend__layout__V_4_4, ll_backend__layout__V_23_23);
            }
#line 212 "layout.m"
            if (ll_backend__layout__succeeded)
#line 212 "layout.m"
              {
#line 8340 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_5_5 == ll_backend__layout__V_24_24);
#line 212 "layout.m"
                if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                  {
#line 8346 "ll_backend.layout.c"
                    ll_backend__layout__TypeInfo_44_44 = (MR_Word) &ll_backend__layout_scalar_common_1[11];
#line 8348 "ll_backend.layout.c"
                    {
#line 8350 "ll_backend.layout.c"
                      ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_44_44, ((MR_Box) (ll_backend__layout__V_6_6)), ((MR_Box) (ll_backend__layout__V_25_25)));
                    }
#line 212 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                      {
#line 8357 "ll_backend.layout.c"
                        ll_backend__layout__TypeInfo_45_45 = (MR_Word) &ll_backend__layout_scalar_common_1[3];
#line 8359 "ll_backend.layout.c"
                        {
#line 8361 "ll_backend.layout.c"
                          ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_45_45, ((MR_Box) (ll_backend__layout__V_7_7)), ((MR_Box) (ll_backend__layout__V_26_26)));
                        }
#line 212 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                          {
#line 8368 "ll_backend.layout.c"
                            ll_backend__layout__succeeded = (ll_backend__layout__V_8_8 == ll_backend__layout__V_27_27);
#line 212 "layout.m"
                            if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                              {
#line 8374 "ll_backend.layout.c"
                                ll_backend__layout__TypeInfo_46_46 = (MR_Word) &ll_backend__layout_scalar_common_1[3];
#line 8376 "ll_backend.layout.c"
                                {
#line 8378 "ll_backend.layout.c"
                                  ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_46_46, ((MR_Box) (ll_backend__layout__V_9_9)), ((MR_Box) (ll_backend__layout__V_28_28)));
                                }
#line 212 "layout.m"
                                if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                  {
#line 8385 "ll_backend.layout.c"
                                    ll_backend__layout__succeeded = (ll_backend__layout__V_10_10 == ll_backend__layout__V_29_29);
#line 212 "layout.m"
                                    if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                      {
#line 8391 "ll_backend.layout.c"
                                        ll_backend__layout__succeeded = (ll_backend__layout__V_11_11 == ll_backend__layout__V_30_30);
#line 212 "layout.m"
                                        if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                          {
#line 8397 "ll_backend.layout.c"
                                            ll_backend__layout__succeeded = (ll_backend__layout__V_12_12 == ll_backend__layout__V_31_31);
#line 212 "layout.m"
                                            if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                              {
#line 8403 "ll_backend.layout.c"
                                                ll_backend__layout__TypeInfo_47_47 = (MR_Word) &ll_backend__layout_scalar_common_1[2];
#line 8405 "ll_backend.layout.c"
                                                {
#line 8407 "ll_backend.layout.c"
                                                  ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_47_47, ((MR_Box) (ll_backend__layout__V_13_13)), ((MR_Box) (ll_backend__layout__V_32_32)));
                                                }
#line 212 "layout.m"
                                                if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                                  {
#line 8414 "ll_backend.layout.c"
                                                    ll_backend__layout__TypeInfo_48_48 = (MR_Word) &ll_backend__layout_scalar_common_1[2];
#line 8416 "ll_backend.layout.c"
                                                    {
#line 8418 "ll_backend.layout.c"
                                                      ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_48_48, ((MR_Box) (ll_backend__layout__V_14_14)), ((MR_Box) (ll_backend__layout__V_33_33)));
                                                    }
#line 212 "layout.m"
                                                    if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                                      {
#line 8425 "ll_backend.layout.c"
                                                        ll_backend__layout__TypeInfo_49_49 = (MR_Word) &ll_backend__layout_scalar_common_1[2];
#line 8427 "ll_backend.layout.c"
                                                        {
#line 8429 "ll_backend.layout.c"
                                                          ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_49_49, ((MR_Box) (ll_backend__layout__V_15_15)), ((MR_Box) (ll_backend__layout__V_34_34)));
                                                        }
#line 212 "layout.m"
                                                        if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                                          {
#line 8436 "ll_backend.layout.c"
                                                            ll_backend__layout__TypeInfo_50_50 = (MR_Word) &ll_backend__layout_scalar_common_1[2];
#line 8438 "ll_backend.layout.c"
                                                            {
#line 8440 "ll_backend.layout.c"
                                                              ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_50_50, ((MR_Box) (ll_backend__layout__V_16_16)), ((MR_Box) (ll_backend__layout__V_35_35)));
                                                            }
#line 212 "layout.m"
                                                            if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                                              {
#line 8447 "ll_backend.layout.c"
                                                                {
#line 8449 "ll_backend.layout.c"
                                                                  ll_backend__layout__succeeded = parse_tree__prog_data____Unify____eval_method_0_0(ll_backend__layout__V_17_17, ll_backend__layout__V_36_36);
                                                                }
#line 212 "layout.m"
                                                                if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                                                  {
#line 8456 "ll_backend.layout.c"
                                                                    ll_backend__layout__TypeInfo_52_52 = (MR_Word) &ll_backend__layout_scalar_common_1[2];
#line 8458 "ll_backend.layout.c"
                                                                    {
#line 8460 "ll_backend.layout.c"
                                                                      ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_52_52, ((MR_Box) (ll_backend__layout__V_18_18)), ((MR_Box) (ll_backend__layout__V_37_37)));
                                                                    }
#line 212 "layout.m"
                                                                    if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                                                      {
#line 8467 "ll_backend.layout.c"
                                                                        ll_backend__layout__TypeInfo_53_53 = (MR_Word) &ll_backend__layout_scalar_common_1[2];
#line 8469 "ll_backend.layout.c"
                                                                        {
#line 8471 "ll_backend.layout.c"
                                                                          ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_53_53, ((MR_Box) (ll_backend__layout__V_19_19)), ((MR_Box) (ll_backend__layout__V_38_38)));
                                                                        }
#line 212 "layout.m"
                                                                        if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                                                          {
#line 8478 "ll_backend.layout.c"
                                                                            {
#line 8480 "ll_backend.layout.c"
                                                                              ll_backend__layout__succeeded = libs__trace_params____Unify____trace_level_0_0(ll_backend__layout__V_20_20, ll_backend__layout__V_39_39);
                                                                            }
#line 212 "layout.m"
                                                                            if (ll_backend__layout__succeeded)
#line 8485 "ll_backend.layout.c"
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
#line 8554 "ll_backend.layout.c"
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
#line 8580 "ll_backend.layout.c"
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
#line 8600 "ll_backend.layout.c"
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

#line 8667 "ll_backend.layout.c"
        {
#line 8669 "ll_backend.layout.c"
          ll_backend__layout__succeeded = hlds__hlds_rtti____Unify____rtti_proc_label_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_6_6);
        }
#line 262 "layout.m"
        if (ll_backend__layout__succeeded)
#line 262 "layout.m"
          {
#line 8676 "ll_backend.layout.c"
            {
#line 8678 "ll_backend.layout.c"
              ll_backend__layout__succeeded = ll_backend__layout____Unify____proc_layout_stack_traversal_0_0(ll_backend__layout__V_4_4, ll_backend__layout__V_7_7);
            }
#line 262 "layout.m"
            if (ll_backend__layout__succeeded)
#line 8683 "ll_backend.layout.c"
              {
#line 8685 "ll_backend.layout.c"
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
#line 8723 "ll_backend.layout.c"
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
#line 8753 "ll_backend.layout.c"
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
#line 8773 "ll_backend.layout.c"
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
#line 8793 "ll_backend.layout.c"
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

#line 8874 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_3_3 == ll_backend__layout__V_7_7);
#line 311 "layout.m"
        if (ll_backend__layout__succeeded)
#line 311 "layout.m"
          {
#line 8880 "ll_backend.layout.c"
            ll_backend__layout__TypeInfo_13_13 = (MR_Word) &ll_backend__layout_scalar_common_1[10];
#line 8882 "ll_backend.layout.c"
            {
#line 8884 "ll_backend.layout.c"
              ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_13_13, ((MR_Box) (ll_backend__layout__V_4_4)), ((MR_Box) (ll_backend__layout__V_8_8)));
            }
#line 311 "layout.m"
            if (ll_backend__layout__succeeded)
#line 311 "layout.m"
              {
#line 8891 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_5_5 == ll_backend__layout__V_9_9);
#line 311 "layout.m"
                if (ll_backend__layout__succeeded)
#line 311 "layout.m"
                  {
#line 8897 "ll_backend.layout.c"
                    ll_backend__layout__TypeInfo_14_14 = (MR_Word) &ll_backend__layout_scalar_common_1[10];
#line 8899 "ll_backend.layout.c"
                    {
#line 8901 "ll_backend.layout.c"
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
#line 8943 "ll_backend.layout.c"
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
#line 8981 "ll_backend.layout.c"
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
#line 9001 "ll_backend.layout.c"
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
#line 9021 "ll_backend.layout.c"
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
#line 9041 "ll_backend.layout.c"
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
#line 9061 "ll_backend.layout.c"
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

#line 9154 "ll_backend.layout.c"
        {
#line 9156 "ll_backend.layout.c"
          ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__layout_scalar_common_1[7], ((MR_Box) (ll_backend__layout__V_3_3)), ((MR_Box) (ll_backend__layout__V_9_9)));
        }
#line 320 "layout.m"
        if (ll_backend__layout__succeeded)
#line 320 "layout.m"
          {
#line 9163 "ll_backend.layout.c"
            ll_backend__layout__TypeInfo_18_18 = (MR_Word) &ll_backend__layout_scalar_common_1[8];
#line 9165 "ll_backend.layout.c"
            {
#line 9167 "ll_backend.layout.c"
              ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_18_18, ((MR_Box) (ll_backend__layout__V_4_4)), ((MR_Box) (ll_backend__layout__V_10_10)));
            }
#line 320 "layout.m"
            if (ll_backend__layout__succeeded)
#line 320 "layout.m"
              {
#line 9174 "ll_backend.layout.c"
                {
#line 9176 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = libs__trace_params____Unify____trace_level_0_0(ll_backend__layout__V_5_5, ll_backend__layout__V_11_11);
                }
#line 320 "layout.m"
                if (ll_backend__layout__succeeded)
#line 320 "layout.m"
                  {
#line 9183 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = (ll_backend__layout__V_6_6 == ll_backend__layout__V_12_12);
#line 320 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 320 "layout.m"
                      {
#line 9189 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = (ll_backend__layout__V_7_7 == ll_backend__layout__V_13_13);
#line 320 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 320 "layout.m"
                          {
#line 9195 "ll_backend.layout.c"
                            ll_backend__layout__TypeInfo_20_20 = (MR_Word) &ll_backend__layout_scalar_common_1[9];
#line 9197 "ll_backend.layout.c"
                            {
#line 9199 "ll_backend.layout.c"
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
#line 9245 "ll_backend.layout.c"
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
#line 9279 "ll_backend.layout.c"
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
#line 9299 "ll_backend.layout.c"
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
#line 9319 "ll_backend.layout.c"
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
#line 9339 "ll_backend.layout.c"
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

#line 9426 "ll_backend.layout.c"
        {
#line 9428 "ll_backend.layout.c"
          ll_backend__layout__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_8_8);
        }
#line 297 "layout.m"
        if (ll_backend__layout__succeeded)
#line 297 "layout.m"
          {
#line 9435 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 == ll_backend__layout__V_9_9);
#line 297 "layout.m"
            if (ll_backend__layout__succeeded)
#line 297 "layout.m"
              {
#line 9441 "ll_backend.layout.c"
                {
#line 9443 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = ll_backend__layout____Unify____string_with_0s_0_0(ll_backend__layout__V_5_5, ll_backend__layout__V_10_10);
                }
#line 297 "layout.m"
                if (ll_backend__layout__succeeded)
#line 297 "layout.m"
                  {
#line 9450 "ll_backend.layout.c"
                    ll_backend__layout__TypeInfo_16_16 = (MR_Word) &ll_backend__layout_scalar_common_1[5];
#line 9452 "ll_backend.layout.c"
                    {
#line 9454 "ll_backend.layout.c"
                      ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_16_16, ((MR_Box) (ll_backend__layout__V_6_6)), ((MR_Box) (ll_backend__layout__V_11_11)));
                    }
#line 297 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 297 "layout.m"
                      {
#line 9461 "ll_backend.layout.c"
                        ll_backend__layout__TypeInfo_17_17 = (MR_Word) &ll_backend__layout_scalar_common_1[6];
#line 9463 "ll_backend.layout.c"
                        {
#line 9465 "ll_backend.layout.c"
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
#line 9509 "ll_backend.layout.c"
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
#line 9521 "ll_backend.layout.c"
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
#line 9538 "ll_backend.layout.c"
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
#line 9560 "ll_backend.layout.c"
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
#line 9580 "ll_backend.layout.c"
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
#line 9600 "ll_backend.layout.c"
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
#line 9710 "ll_backend.layout.c"
              ll_backend__layout__TypeInfo_15_15 = (MR_Word) &ll_backend__layout_scalar_common_1[3];
#line 9712 "ll_backend.layout.c"
              {
#line 9714 "ll_backend.layout.c"
                ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_15_15, ((MR_Box) (ll_backend__layout__V_5_5)), ((MR_Box) (ll_backend__layout__V_9_9)));
              }
#line 249 "layout.m"
              if (ll_backend__layout__succeeded)
#line 249 "layout.m"
                {
#line 9721 "ll_backend.layout.c"
                  ll_backend__layout__TypeInfo_16_16 = (MR_Word) &ll_backend__layout_scalar_common_1[3];
#line 9723 "ll_backend.layout.c"
                  {
#line 9725 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_16_16, ((MR_Box) (ll_backend__layout__V_6_6)), ((MR_Box) (ll_backend__layout__V_10_10)));
                  }
#line 249 "layout.m"
                  if (ll_backend__layout__succeeded)
#line 249 "layout.m"
                    {
#line 9732 "ll_backend.layout.c"
                      ll_backend__layout__TypeInfo_17_17 = (MR_Word) &ll_backend__layout_scalar_common_1[3];
#line 9734 "ll_backend.layout.c"
                      {
#line 9736 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_17_17, ((MR_Box) (ll_backend__layout__V_7_7)), ((MR_Box) (ll_backend__layout__V_11_11)));
                      }
#line 249 "layout.m"
                      if (ll_backend__layout__succeeded)
#line 9741 "ll_backend.layout.c"
                        {
#line 9743 "ll_backend.layout.c"
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
#line 9785 "ll_backend.layout.c"
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
#line 9807 "ll_backend.layout.c"
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

#line 9868 "ll_backend.layout.c"
        {
#line 9870 "ll_backend.layout.c"
          ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_array_name_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_5_5);
        }
#line 355 "layout.m"
        if (ll_backend__layout__succeeded)
#line 9875 "ll_backend.layout.c"
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
#line 9910 "ll_backend.layout.c"
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
#line 9935 "ll_backend.layout.c"
          *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 1;
#line 418 "layout.m"
        else
#line 418 "layout.m"
          {
#line 418 "layout.m"
            ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 > ll_backend__layout__V_5_5);
#line 418 "layout.m"
            if (ll_backend__layout__succeeded)
#line 9945 "ll_backend.layout.c"
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
#line 9990 "ll_backend.layout.c"
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
#line 10010 "ll_backend.layout.c"
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
#line 10065 "ll_backend.layout.c"
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
#line 10118 "ll_backend.layout.c"
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
#line 10171 "ll_backend.layout.c"
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
#line 10224 "ll_backend.layout.c"
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
#line 10307 "ll_backend.layout.c"
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
#line 10426 "ll_backend.layout.c"
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
#line 10446 "ll_backend.layout.c"
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
#line 10507 "ll_backend.layout.c"
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
#line 10527 "ll_backend.layout.c"
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
#line 10582 "ll_backend.layout.c"
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
#line 10635 "ll_backend.layout.c"
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
#line 10718 "ll_backend.layout.c"
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
#line 10897 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 1;
#line 418 "layout.m"
    else
#line 418 "layout.m"
      if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 10903 "ll_backend.layout.c"
        *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 2;
#line 418 "layout.m"
      else
#line 418 "layout.m"
        if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 10909 "ll_backend.layout.c"
          *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 0;
#line 418 "layout.m"
        else
#line 418 "layout.m"
          if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 10915 "ll_backend.layout.c"
            *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 4;
#line 418 "layout.m"
          else
#line 418 "layout.m"
            if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 10921 "ll_backend.layout.c"
              *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 3;
#line 418 "layout.m"
            else
#line 418 "layout.m"
              if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 10927 "ll_backend.layout.c"
                *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 18;
#line 418 "layout.m"
              else
#line 418 "layout.m"
                if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 10933 "ll_backend.layout.c"
                  *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 10;
#line 418 "layout.m"
                else
#line 418 "layout.m"
                  if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 10939 "ll_backend.layout.c"
                    *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 9;
#line 418 "layout.m"
                  else
#line 418 "layout.m"
                    if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 10945 "ll_backend.layout.c"
                      *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 15;
#line 418 "layout.m"
                    else
#line 418 "layout.m"
                      if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 10951 "ll_backend.layout.c"
                        *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 12;
#line 418 "layout.m"
                      else
#line 418 "layout.m"
                        if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 10957 "ll_backend.layout.c"
                          *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 13;
#line 418 "layout.m"
                        else
#line 418 "layout.m"
                          if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 10963 "ll_backend.layout.c"
                            *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 11;
#line 418 "layout.m"
                          else
#line 418 "layout.m"
                            if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 10969 "ll_backend.layout.c"
                              *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 14;
#line 418 "layout.m"
                            else
#line 418 "layout.m"
                              if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 10975 "ll_backend.layout.c"
                                *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 6;
#line 418 "layout.m"
                              else
#line 418 "layout.m"
                                if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 10981 "ll_backend.layout.c"
                                  *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 8;
#line 418 "layout.m"
                                else
#line 418 "layout.m"
                                  if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 10987 "ll_backend.layout.c"
                                    *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 16;
#line 418 "layout.m"
                                  else
#line 418 "layout.m"
                                    if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 10993 "ll_backend.layout.c"
                                      *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 7;
#line 418 "layout.m"
                                    else
#line 418 "layout.m"
                                      if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 10999 "ll_backend.layout.c"
                                        *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 5;
#line 418 "layout.m"
                                      else
#line 11003 "ll_backend.layout.c"
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
#line 11065 "ll_backend.layout.c"
              {
#line 11067 "ll_backend.layout.c"
                ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__layout__V_7_7, ll_backend__layout__V_10_10);
              }
#line 418 "layout.m"
              if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                {
#line 11074 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = (ll_backend__layout__V_8_8 == ll_backend__layout__V_11_11);
#line 418 "layout.m"
                  if (ll_backend__layout__succeeded)
#line 11078 "ll_backend.layout.c"
                    {
#line 11080 "ll_backend.layout.c"
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
#line 11114 "ll_backend.layout.c"
                {
#line 11116 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__layout__V_13_13, ll_backend__layout__V_15_15);
                }
#line 418 "layout.m"
                if (ll_backend__layout__succeeded)
#line 11121 "ll_backend.layout.c"
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
#line 11152 "ll_backend.layout.c"
                  {
#line 11154 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = hlds__hlds_rtti____Unify____rtti_proc_label_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_5_5);
                  }
#line 418 "layout.m"
                  if (ll_backend__layout__succeeded)
#line 11159 "ll_backend.layout.c"
                    {
#line 11161 "ll_backend.layout.c"
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
#line 11193 "ll_backend.layout.c"
                    {
#line 11195 "ll_backend.layout.c"
                      ll_backend__layout__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__layout__V_21_21, ll_backend__layout__V_23_23);
                    }
#line 418 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 11200 "ll_backend.layout.c"
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
#line 11231 "ll_backend.layout.c"
                      {
#line 11233 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__layout__V_17_17, ll_backend__layout__V_19_19);
                      }
#line 418 "layout.m"
                      if (ll_backend__layout__succeeded)
#line 11238 "ll_backend.layout.c"
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
#line 11263 "ll_backend.layout.c"
                        {
#line 11265 "ll_backend.layout.c"
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
#line 11297 "ll_backend.layout.c"
                          {
#line 11299 "ll_backend.layout.c"
                            ll_backend__layout__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__layout__V_37_37, ll_backend__layout__V_39_39);
                          }
#line 418 "layout.m"
                          if (ll_backend__layout__succeeded)
#line 11304 "ll_backend.layout.c"
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
#line 11329 "ll_backend.layout.c"
                            {
#line 11331 "ll_backend.layout.c"
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
#line 11357 "ll_backend.layout.c"
                              {
#line 11359 "ll_backend.layout.c"
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
#line 11397 "ll_backend.layout.c"
                                {
#line 11399 "ll_backend.layout.c"
                                  ll_backend__layout__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__layout__V_45_45, ll_backend__layout__V_48_48);
                                }
#line 418 "layout.m"
                                if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                                  {
#line 11406 "ll_backend.layout.c"
                                    ll_backend__layout__succeeded = (ll_backend__layout__V_46_46 == ll_backend__layout__V_49_49);
#line 418 "layout.m"
                                    if (ll_backend__layout__succeeded)
#line 11410 "ll_backend.layout.c"
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
#line 11449 "ll_backend.layout.c"
                                  {
#line 11451 "ll_backend.layout.c"
                                    ll_backend__layout__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__layout__V_51_51, ll_backend__layout__V_54_54);
                                  }
#line 418 "layout.m"
                                  if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                                    {
#line 11458 "ll_backend.layout.c"
                                      ll_backend__layout__succeeded = (ll_backend__layout__V_52_52 == ll_backend__layout__V_55_55);
#line 418 "layout.m"
                                      if (ll_backend__layout__succeeded)
#line 11462 "ll_backend.layout.c"
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
#line 11495 "ll_backend.layout.c"
                                    {
#line 11497 "ll_backend.layout.c"
                                      ll_backend__layout__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__layout__V_41_41, ll_backend__layout__V_43_43);
                                    }
#line 418 "layout.m"
                                    if (ll_backend__layout__succeeded)
#line 11502 "ll_backend.layout.c"
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
#line 11533 "ll_backend.layout.c"
                                      {
#line 11535 "ll_backend.layout.c"
                                        ll_backend__layout__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__layout__V_57_57, ll_backend__layout__V_59_59);
                                      }
#line 418 "layout.m"
                                      if (ll_backend__layout__succeeded)
#line 11540 "ll_backend.layout.c"
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
#line 11565 "ll_backend.layout.c"
                                        {
#line 11567 "ll_backend.layout.c"
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
#line 11599 "ll_backend.layout.c"
                                          {
#line 11601 "ll_backend.layout.c"
                                            ll_backend__layout__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__layout__V_31_31, ll_backend__layout__V_33_33);
                                          }
#line 418 "layout.m"
                                          if (ll_backend__layout__succeeded)
#line 11606 "ll_backend.layout.c"
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
#line 11631 "ll_backend.layout.c"
                                            {
#line 11633 "ll_backend.layout.c"
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
#line 11659 "ll_backend.layout.c"
                                              {
#line 11661 "ll_backend.layout.c"
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
#line 11687 "ll_backend.layout.c"
                                                {
#line 11689 "ll_backend.layout.c"
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
#line 11713 "ll_backend.layout.c"
                                                {
#line 11715 "ll_backend.layout.c"
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
#line 11753 "ll_backend.layout.c"
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
#line 11778 "ll_backend.layout.c"
          *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 1;
#line 358 "layout.m"
        else
#line 358 "layout.m"
          {
#line 358 "layout.m"
            ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 > ll_backend__layout__V_5_5);
#line 358 "layout.m"
            if (ll_backend__layout__succeeded)
#line 11788 "ll_backend.layout.c"
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
#line 12087 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 18;
#line 358 "layout.m"
    else
#line 358 "layout.m"
      if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 12093 "ll_backend.layout.c"
        *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 1;
#line 358 "layout.m"
      else
#line 358 "layout.m"
        if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 12099 "ll_backend.layout.c"
          *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 3;
#line 358 "layout.m"
        else
#line 358 "layout.m"
          if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 12105 "ll_backend.layout.c"
            *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 13;
#line 358 "layout.m"
          else
#line 358 "layout.m"
            if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 12111 "ll_backend.layout.c"
              *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 15;
#line 358 "layout.m"
            else
#line 358 "layout.m"
              if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 12117 "ll_backend.layout.c"
                *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 16;
#line 358 "layout.m"
              else
#line 358 "layout.m"
                if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 12123 "ll_backend.layout.c"
                  *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 11;
#line 358 "layout.m"
                else
#line 358 "layout.m"
                  if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 12129 "ll_backend.layout.c"
                    *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 10;
#line 358 "layout.m"
                  else
#line 358 "layout.m"
                    if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 12135 "ll_backend.layout.c"
                      *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 7;
#line 358 "layout.m"
                    else
#line 358 "layout.m"
                      if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 12141 "ll_backend.layout.c"
                        *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 9;
#line 358 "layout.m"
                      else
#line 358 "layout.m"
                        if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 12147 "ll_backend.layout.c"
                          *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 8;
#line 358 "layout.m"
                        else
#line 358 "layout.m"
                          if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 12153 "ll_backend.layout.c"
                            *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 14;
#line 358 "layout.m"
                          else
#line 358 "layout.m"
                            if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 12159 "ll_backend.layout.c"
                              *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 12;
#line 358 "layout.m"
                            else
#line 358 "layout.m"
                              if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 12165 "ll_backend.layout.c"
                                *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 0;
#line 358 "layout.m"
                              else
#line 358 "layout.m"
                                if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 12171 "ll_backend.layout.c"
                                  *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 2;
#line 358 "layout.m"
                                else
#line 358 "layout.m"
                                  if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 12177 "ll_backend.layout.c"
                                    *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 17;
#line 358 "layout.m"
                                  else
#line 358 "layout.m"
                                    if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 12183 "ll_backend.layout.c"
                                      *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 4;
#line 358 "layout.m"
                                    else
#line 358 "layout.m"
                                      if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 12189 "ll_backend.layout.c"
                                        *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 5;
#line 358 "layout.m"
                                      else
#line 12193 "ll_backend.layout.c"
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
#line 12511 "ll_backend.layout.c"
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
#line 12565 "ll_backend.layout.c"
  {
#line 12567 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded = (ll_backend__layout__HeadVar__2_1 == ll_backend__layout__HeadVar__2_2);

#line 12570 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 12572 "ll_backend.layout.c"
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
#line 12601 "ll_backend.layout.c"
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
#line 12635 "ll_backend.layout.c"
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
#line 12655 "ll_backend.layout.c"
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
#line 12675 "ll_backend.layout.c"
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
#line 12695 "ll_backend.layout.c"
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

#line 12774 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_3_3 == ll_backend__layout__V_8_8);
#line 93 "layout.m"
        if (ll_backend__layout__succeeded)
#line 93 "layout.m"
          {
#line 12780 "ll_backend.layout.c"
            {
#line 12782 "ll_backend.layout.c"
              ll_backend__layout__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__layout__V_4_4, ll_backend__layout__V_9_9);
            }
#line 93 "layout.m"
            if (ll_backend__layout__succeeded)
#line 93 "layout.m"
              {
#line 12789 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_5_5 == ll_backend__layout__V_10_10);
#line 93 "layout.m"
                if (ll_backend__layout__succeeded)
#line 93 "layout.m"
                  {
#line 12795 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = (ll_backend__layout__V_6_6 == ll_backend__layout__V_11_11);
#line 93 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 12799 "ll_backend.layout.c"
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
#line 12840 "ll_backend.layout.c"
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
#line 12878 "ll_backend.layout.c"
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
#line 12898 "ll_backend.layout.c"
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
#line 12918 "ll_backend.layout.c"
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
#line 12938 "ll_backend.layout.c"
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
#line 12958 "ll_backend.layout.c"
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

#line 13043 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_3_3 == ll_backend__layout__V_9_9);
#line 103 "layout.m"
        if (ll_backend__layout__succeeded)
#line 103 "layout.m"
          {
#line 13049 "ll_backend.layout.c"
            {
#line 13051 "ll_backend.layout.c"
              ll_backend__layout__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__layout__V_4_4, ll_backend__layout__V_10_10);
            }
#line 103 "layout.m"
            if (ll_backend__layout__succeeded)
#line 103 "layout.m"
              {
#line 13058 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_5_5 == ll_backend__layout__V_11_11);
#line 103 "layout.m"
                if (ll_backend__layout__succeeded)
#line 103 "layout.m"
                  {
#line 13064 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = (ll_backend__layout__V_6_6 == ll_backend__layout__V_12_12);
#line 103 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 103 "layout.m"
                      {
#line 13070 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = (ll_backend__layout__V_7_7 == ll_backend__layout__V_13_13);
#line 103 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 13074 "ll_backend.layout.c"
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
#line 13117 "ll_backend.layout.c"
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
#line 13139 "ll_backend.layout.c"
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

#line 13200 "ll_backend.layout.c"
        {
#line 13202 "ll_backend.layout.c"
          ll_backend__layout__succeeded = ll_backend__layout____Unify____basic_label_layout_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_5_5);
        }
#line 120 "layout.m"
        if (ll_backend__layout__succeeded)
#line 13207 "ll_backend.layout.c"
          {
#line 13209 "ll_backend.layout.c"
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
#line 13245 "ll_backend.layout.c"
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

#line 13303 "ll_backend.layout.c"
        {
#line 13305 "ll_backend.layout.c"
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
#line 13341 "ll_backend.layout.c"
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
#line 13363 "ll_backend.layout.c"
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

#line 13424 "ll_backend.layout.c"
        {
#line 13426 "ll_backend.layout.c"
          ll_backend__layout__succeeded = ll_backend__layout____Unify____basic_label_layout_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_5_5);
        }
#line 127 "layout.m"
        if (ll_backend__layout__succeeded)
#line 13431 "ll_backend.layout.c"
          {
#line 13433 "ll_backend.layout.c"
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
#line 13469 "ll_backend.layout.c"
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
#line 13491 "ll_backend.layout.c"
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

#line 13558 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (strcmp(ll_backend__layout__V_3_3, ll_backend__layout__V_5_5) == 0);
#line 291 "layout.m"
        if (ll_backend__layout__succeeded)
#line 291 "layout.m"
          {
#line 13564 "ll_backend.layout.c"
            ll_backend__layout__TypeInfo_9_9 = (MR_Word) &ll_backend__layout_scalar_common_1[4];
#line 13566 "ll_backend.layout.c"
            {
#line 13568 "ll_backend.layout.c"
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
#line 13606 "ll_backend.layout.c"
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
#line 13628 "ll_backend.layout.c"
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

#line 13695 "ll_backend.layout.c"
        {
#line 13697 "ll_backend.layout.c"
          ll_backend__layout__succeeded = parse_tree__prog_data____Unify____event_set_data_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_5_5);
        }
#line 282 "layout.m"
        if (ll_backend__layout__succeeded)
#line 282 "layout.m"
          {
#line 13704 "ll_backend.layout.c"
            ll_backend__layout__TypeInfo_10_10 = (MR_Word) &ll_backend__layout_scalar_common_2[0];
#line 13706 "ll_backend.layout.c"
            {
#line 13708 "ll_backend.layout.c"
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
#line 13746 "ll_backend.layout.c"
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
#line 13772 "ll_backend.layout.c"
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
#line 13792 "ll_backend.layout.c"
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

#line 13859 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_3_3 == ll_backend__layout__V_6_6);
#line 160 "layout.m"
        if (ll_backend__layout__succeeded)
#line 160 "layout.m"
          {
#line 13865 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 == ll_backend__layout__V_7_7);
#line 160 "layout.m"
            if (ll_backend__layout__succeeded)
#line 13869 "ll_backend.layout.c"
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
#line 13906 "ll_backend.layout.c"
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
#line 13935 "ll_backend.layout.c"
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
#line 13948 "ll_backend.layout.c"
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
#line 14016 "ll_backend.layout.c"
              {
#line 14018 "ll_backend.layout.c"
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
#line 14042 "ll_backend.layout.c"
              {
#line 14044 "ll_backend.layout.c"
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
#line 14082 "ll_backend.layout.c"
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
#line 14128 "ll_backend.layout.c"
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
#line 14148 "ll_backend.layout.c"
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
#line 14168 "ll_backend.layout.c"
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
#line 14188 "ll_backend.layout.c"
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
#line 14208 "ll_backend.layout.c"
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
#line 14228 "ll_backend.layout.c"
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
#line 14248 "ll_backend.layout.c"
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

#line 14345 "ll_backend.layout.c"
        {
#line 14347 "ll_backend.layout.c"
          ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_11_11);
        }
#line 56 "layout.m"
        if (ll_backend__layout__succeeded)
#line 56 "layout.m"
          {
#line 14354 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 == ll_backend__layout__V_12_12);
#line 56 "layout.m"
            if (ll_backend__layout__succeeded)
#line 56 "layout.m"
              {
#line 14360 "ll_backend.layout.c"
                {
#line 14362 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__layout__V_5_5, ll_backend__layout__V_13_13);
                }
#line 56 "layout.m"
                if (ll_backend__layout__succeeded)
#line 56 "layout.m"
                  {
#line 14369 "ll_backend.layout.c"
                    {
#line 14371 "ll_backend.layout.c"
                      ll_backend__layout__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__layout__V_6_6, ll_backend__layout__V_14_14);
                    }
#line 56 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 56 "layout.m"
                      {
#line 14378 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = (strcmp(ll_backend__layout__V_7_7, ll_backend__layout__V_15_15) == 0);
#line 56 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 56 "layout.m"
                          {
#line 14384 "ll_backend.layout.c"
                            ll_backend__layout__succeeded = (ll_backend__layout__V_8_8 == ll_backend__layout__V_16_16);
#line 56 "layout.m"
                            if (ll_backend__layout__succeeded)
#line 56 "layout.m"
                              {
#line 14390 "ll_backend.layout.c"
                                {
#line 14392 "ll_backend.layout.c"
                                  ll_backend__layout__succeeded = hlds__hlds_pred____Unify____pred_origin_0_0(ll_backend__layout__V_9_9, ll_backend__layout__V_17_17);
                                }
#line 56 "layout.m"
                                if (ll_backend__layout__succeeded)
#line 14397 "ll_backend.layout.c"
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
#line 14444 "ll_backend.layout.c"
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
#line 14490 "ll_backend.layout.c"
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
#line 14510 "ll_backend.layout.c"
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
#line 14530 "ll_backend.layout.c"
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
#line 14550 "ll_backend.layout.c"
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
#line 14570 "ll_backend.layout.c"
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
#line 14590 "ll_backend.layout.c"
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
#line 14610 "ll_backend.layout.c"
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

#line 14719 "ll_backend.layout.c"
        {
#line 14721 "ll_backend.layout.c"
          ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_11_11);
        }
#line 81 "layout.m"
        if (ll_backend__layout__succeeded)
#line 81 "layout.m"
          {
#line 14728 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 == ll_backend__layout__V_12_12);
#line 81 "layout.m"
            if (ll_backend__layout__succeeded)
#line 81 "layout.m"
              {
#line 14734 "ll_backend.layout.c"
                {
#line 14736 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_name_0_0(ll_backend__layout__V_5_5, ll_backend__layout__V_13_13);
                }
#line 81 "layout.m"
                if (ll_backend__layout__succeeded)
#line 81 "layout.m"
                  {
#line 14743 "ll_backend.layout.c"
                    ll_backend__layout__TypeInfo_22_22 = (MR_Word) &ll_backend__layout_scalar_common_1[0];
#line 14745 "ll_backend.layout.c"
                    {
#line 14747 "ll_backend.layout.c"
                      ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_22_22, ((MR_Box) (ll_backend__layout__V_6_6)), ((MR_Box) (ll_backend__layout__V_14_14)));
                    }
#line 81 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 81 "layout.m"
                      {
#line 14754 "ll_backend.layout.c"
                        ll_backend__layout__TypeInfo_23_23 = (MR_Word) &ll_backend__layout_scalar_common_1[1];
#line 14756 "ll_backend.layout.c"
                        {
#line 14758 "ll_backend.layout.c"
                          ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_23_23, ((MR_Box) (ll_backend__layout__V_7_7)), ((MR_Box) (ll_backend__layout__V_15_15)));
                        }
#line 81 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 81 "layout.m"
                          {
#line 14765 "ll_backend.layout.c"
                            ll_backend__layout__succeeded = (ll_backend__layout__V_8_8 == ll_backend__layout__V_16_16);
#line 81 "layout.m"
                            if (ll_backend__layout__succeeded)
#line 81 "layout.m"
                              {
#line 14771 "ll_backend.layout.c"
                                ll_backend__layout__TypeInfo_24_24 = (MR_Word) &ll_backend__layout_scalar_common_1[2];
#line 14773 "ll_backend.layout.c"
                                {
#line 14775 "ll_backend.layout.c"
                                  ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_24_24, ((MR_Box) (ll_backend__layout__V_9_9)), ((MR_Box) (ll_backend__layout__V_17_17)));
                                }
#line 81 "layout.m"
                                if (ll_backend__layout__succeeded)
#line 81 "layout.m"
                                  {
#line 14782 "ll_backend.layout.c"
                                    ll_backend__layout__TypeInfo_25_25 = (MR_Word) &ll_backend__layout_scalar_common_1[3];
#line 14784 "ll_backend.layout.c"
                                    {
#line 14786 "ll_backend.layout.c"
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
#line 14836 "ll_backend.layout.c"
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
#line 14866 "ll_backend.layout.c"
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
#line 14886 "ll_backend.layout.c"
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
#line 14906 "ll_backend.layout.c"
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

#line 14979 "ll_backend.layout.c"
        {
#line 14981 "ll_backend.layout.c"
          ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_7_7);
        }
#line 336 "layout.m"
        if (ll_backend__layout__succeeded)
#line 336 "layout.m"
          {
#line 14988 "ll_backend.layout.c"
            {
#line 14990 "ll_backend.layout.c"
              ll_backend__layout__succeeded = mercury__term____Unify____context_0_0(ll_backend__layout__V_4_4, ll_backend__layout__V_8_8);
            }
#line 336 "layout.m"
            if (ll_backend__layout__succeeded)
#line 336 "layout.m"
              {
#line 14997 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (strcmp(ll_backend__layout__V_5_5, ll_backend__layout__V_9_9) == 0);
#line 336 "layout.m"
                if (ll_backend__layout__succeeded)
#line 15001 "ll_backend.layout.c"
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
