/*
** Automatically generated from `layout.m'
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




#line 140 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_alloc_site_info_0_0[4];

#line 143 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_alloc_site_info_0_0[4];

#line 146 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_alloc_site_info_0_0;

#line 149 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_alloc_site_info_0_0[1];

#line 152 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_alloc_site_info_0[1];

#line 155 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_alloc_site_info_0[1];

#line 158 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_alloc_site_info_0[1];

#line 161 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_trace_port_0;

#line 164 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1bool__type_ctor_info_bool_0;

#line 167 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

#line 170 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_layout_slot_name_0;

#line 173 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_basic_label_layout_0_0[8];

#line 176 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_basic_label_layout_0_0[8];

#line 179 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_basic_label_layout_0_0;

#line 182 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_basic_label_layout_0_0[1];

#line 185 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_basic_label_layout_0[1];

#line 188 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_basic_label_layout_0[1];

#line 191 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_basic_label_layout_0[1];

#line 194 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_closure_proc_id_data_0_0[8];

#line 197 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_closure_proc_id_data_0_0[8];

#line 200 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_closure_proc_id_data_0_0;

#line 203 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_closure_proc_id_data_0_0[1];

#line 206 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_closure_proc_id_data_0[1];

#line 209 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_closure_proc_id_data_0[1];

#line 212 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_closure_proc_id_data_0[1];

#line 215 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_data_or_slot_id_0_0[1];

#line 218 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_data_or_slot_id_0_0;

#line 221 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_data_or_slot_id_0_1[1];

#line 224 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_data_or_slot_id_0_1;

#line 227 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_data_or_slot_id_0_0[1];

#line 230 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_data_or_slot_id_0_1[1];

#line 233 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_data_or_slot_id_0[2];

#line 236 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_data_or_slot_id_0[2];

#line 239 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_data_or_slot_id_0[2];

#line 242 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_deep_excp_slots_0_0[3];

#line 245 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_deep_excp_slots_0_0[3];

#line 248 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_deep_excp_slots_0_0;

#line 251 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_deep_excp_slots_0_0[1];

#line 254 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_deep_excp_slots_0[1];

#line 257 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_deep_excp_slots_0[1];

#line 260 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_deep_excp_slots_0[1];

#line 263 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__layout__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_rval_0;

#line 266 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_event_set_layout_data_0_0[2];

#line 269 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_event_set_layout_data_0_0;

#line 272 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_event_set_layout_data_0_0[1];

#line 275 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_event_set_layout_data_0[1];

#line 278 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_event_set_layout_data_0[1];

#line 281 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_event_set_layout_data_0[1];

#line 284 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__layout__pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__layout__type_ctor_info_layout_slot_name_0;

#line 287 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__layout__type_ctor_info_layout_slot_name_0;

#line 290 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_file_layout_data_0_0[2];

#line 293 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_file_layout_data_0_0[2];

#line 296 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_file_layout_data_0_0;

#line 299 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_file_layout_data_0_0[1];

#line 302 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_file_layout_data_0[1];

#line 305 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_file_layout_data_0[1];

#line 308 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_file_layout_data_0[1];

#line 311 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_label_layout_long_vars_0_0[2];

#line 314 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_label_layout_long_vars_0_0;

#line 317 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_label_layout_long_vars_0_0[1];

#line 320 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_layout_long_vars_0[1];

#line 323 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_label_layout_long_vars_0[1];

#line 326 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_layout_long_vars_0[1];

#line 329 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_layout_no_vars_0[1];

#line 332 "ll_backend.layout.c"
static const MR_NotagFunctorDesc ll_backend__layout__ll_backend__layout__notag_functor_desc_label_layout_no_vars_0;

#line 335 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_label_layout_short_vars_0_0[2];

#line 338 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_label_layout_short_vars_0_0;

#line 341 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_label_layout_short_vars_0_0[1];

#line 344 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_layout_short_vars_0[1];

#line 347 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_label_layout_short_vars_0[1];

#line 350 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_layout_short_vars_0[1];

#line 353 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_label_long_var_info_0_0[6];

#line 356 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_label_long_var_info_0_0[6];

#line 359 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_label_long_var_info_0_0;

#line 362 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_label_long_var_info_0_0[1];

#line 365 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_long_var_info_0[1];

#line 368 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_label_long_var_info_0[1];

#line 371 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_long_var_info_0[1];

#line 374 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_label_short_var_info_0_0[5];

#line 377 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_label_short_var_info_0_0[5];

#line 380 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_label_short_var_info_0_0;

#line 383 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_label_short_var_info_0_0[1];

#line 386 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_short_var_info_0[1];

#line 389 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_label_short_var_info_0[1];

#line 392 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_short_var_info_0[1];

#line 395 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_0;

#line 398 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_1;

#line 401 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_2;

#line 404 "ll_backend.layout.c"
static const MR_EnumFunctorDescPtr ll_backend__layout__ll_backend__layout__enum_value_ordered_label_vars_0[3];

#line 407 "ll_backend.layout.c"
static const MR_EnumFunctorDescPtr ll_backend__layout__ll_backend__layout__enum_name_ordered_label_vars_0[3];

#line 410 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_vars_0[3];

#line 413 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_0;

#line 416 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_1;

#line 419 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_2;

#line 422 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_3;

#line 425 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_4;

#line 428 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_5;

#line 431 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_array_name_0_6[1];

#line 434 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_6;

#line 437 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_7;

#line 440 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_8;

#line 443 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_9;

#line 446 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_10;

#line 449 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_11;

#line 452 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_12;

#line 455 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_13;

#line 458 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_14;

#line 461 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_15;

#line 464 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_16;

#line 467 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_17;

#line 470 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_18;

#line 473 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_array_name_0_0[18];

#line 476 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_array_name_0_1[1];

#line 479 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_layout_array_name_0[2];

#line 482 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_layout_array_name_0[19];

#line 485 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_layout_array_name_0[19];

#line 488 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_0[2];

#line 491 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_0;

#line 494 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_1[3];

#line 497 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_1;

#line 500 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_2[2];

#line 503 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_2;

#line 506 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_3[2];

#line 509 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_3;

#line 512 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_4[2];

#line 515 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_4;

#line 518 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_5[1];

#line 521 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_5;

#line 524 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_6[1];

#line 527 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_6;

#line 530 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_7[1];

#line 533 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_7;

#line 536 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_8[2];

#line 539 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_8;

#line 542 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_9[1];

#line 545 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_9;

#line 548 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_10[2];

#line 551 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_10;

#line 554 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_11[2];

#line 557 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_11;

#line 560 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_12[3];

#line 563 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_12;

#line 566 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_13[3];

#line 569 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_13;

#line 572 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_14[2];

#line 575 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_14;

#line 578 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_15[1];

#line 581 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_15;

#line 584 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_16[1];

#line 587 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_16;

#line 590 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_17[1];

#line 593 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_17;

#line 596 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_18[1];

#line 599 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_18;

#line 602 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_name_0_0[1];

#line 605 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_name_0_1[1];

#line 608 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_name_0_2[1];

#line 611 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_name_0_3[16];

#line 614 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_layout_name_0[4];

#line 617 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_layout_name_0[19];

#line 620 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_layout_name_0[19];

#line 623 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_slot_name_0_0[2];

#line 626 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_layout_slot_name_0_0;

#line 629 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_slot_name_0_0[1];

#line 632 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_layout_slot_name_0[1];

#line 635 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_layout_slot_name_0[1];

#line 638 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_layout_slot_name_0[1];

#line 641 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_maybe_proc_id_and_more_0_0;

#line 644 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_maybe_proc_id_and_more_0_1[4];

#line 647 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_maybe_proc_id_and_more_0_1[4];

#line 650 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_maybe_proc_id_and_more_0_1;

#line 653 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_maybe_proc_id_and_more_0_0[1];

#line 656 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_maybe_proc_id_and_more_0_1[1];

#line 659 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_maybe_proc_id_and_more_0[2];

#line 662 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_maybe_proc_id_and_more_0[2];

#line 665 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_maybe_proc_id_and_more_0[2];

#line 668 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_module_layout_deep_prof_0;

#line 671 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_module_layout_debug_0;

#line 674 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_module_layout_data_0_0[5];

#line 677 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_module_layout_data_0_0[5];

#line 680 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_data_0_0;

#line 683 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_data_0_0[1];

#line 686 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_module_layout_data_0[1];

#line 689 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_module_layout_data_0[1];

#line 692 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_module_layout_data_0[1];

#line 695 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1ll_backend__layout__type_ctor_info_layout_name_0;

#line 698 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1ll_backend__layout__type_ctor_info_file_layout_data_0;

#line 701 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_event_set_layout_data_0;

#line 704 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_module_layout_debug_0_0[6];

#line 707 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_module_layout_debug_0_0[6];

#line 710 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_debug_0_0;

#line 713 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_debug_0_0[1];

#line 716 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_module_layout_debug_0[1];

#line 719 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_module_layout_debug_0[1];

#line 722 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_module_layout_debug_0[1];

#line 725 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1builtin__type_ctor_info_int_0;

#line 728 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_module_layout_deep_prof_0_0[4];

#line 731 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_module_layout_deep_prof_0_0[4];

#line 734 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_deep_prof_0_0;

#line 737 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_deep_prof_0_0[1];

#line 740 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_module_layout_deep_prof_0[1];

#line 743 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_module_layout_deep_prof_0[1];

#line 746 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_module_layout_deep_prof_0[1];

#line 749 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_data_0_0[3];

#line 752 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_proc_layout_data_0_0[3];

#line 755 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_data_0_0;

#line 758 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_data_0_0[1];

#line 761 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_data_0[1];

#line 764 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_data_0[1];

#line 767 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_data_0[1];

#line 770 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_data_or_slot_id_0;

#line 773 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_exec_trace_0_0[19];

#line 776 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_proc_layout_exec_trace_0_0[19];

#line 779 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_exec_trace_0_0;

#line 782 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_exec_trace_0_0[1];

#line 785 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_exec_trace_0[1];

#line 788 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_exec_trace_0[1];

#line 791 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_exec_trace_0[1];

#line 794 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_kind_0_0;

#line 797 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_kind_0_1[1];

#line 800 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_kind_0_1;

#line 803 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_kind_0_0[1];

#line 806 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_kind_0_1[1];

#line 809 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_kind_0[2];

#line 812 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_kind_0[2];

#line 815 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_kind_0[2];

#line 818 "ll_backend.layout.c"
static const MR_VA_TypeInfo_Struct2 ll_backend__layout____vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 821 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 824 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_proc_static_0_0[6];

#line 827 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_proc_layout_proc_static_0_0[6];

#line 830 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_proc_static_0_0;

#line 833 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_proc_static_0_0[1];

#line 836 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_proc_static_0[1];

#line 839 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_proc_static_0[1];

#line 842 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_proc_static_0[1];

#line 845 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0;

#line 848 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_stack_traversal_0_0[4];

#line 851 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_proc_layout_stack_traversal_0_0[4];

#line 854 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_stack_traversal_0_0;

#line 857 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_stack_traversal_0_0[1];

#line 860 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_stack_traversal_0[1];

#line 863 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_stack_traversal_0[1];

#line 866 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_stack_traversal_0[1];

#line 869 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_0;

#line 872 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_1;

#line 875 "ll_backend.layout.c"
static const MR_EnumFunctorDescPtr ll_backend__layout__ll_backend__layout__enum_value_ordered_proc_layout_user_or_uci_0[2];

#line 878 "ll_backend.layout.c"
static const MR_EnumFunctorDescPtr ll_backend__layout__ll_backend__layout__enum_name_ordered_proc_layout_user_or_uci_0[2];

#line 881 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_user_or_uci_0[2];

#line 884 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_string_with_0s_0[1];

#line 887 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1builtin__type_ctor_info_string_0;

#line 890 "ll_backend.layout.c"
static const MR_NotagFunctorDesc ll_backend__layout__ll_backend__layout__notag_functor_desc_string_with_0s_0;

#line 893 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_table_io_args_data_0_0[3];

#line 896 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_table_io_args_data_0_0[3];

#line 899 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_table_io_args_data_0_0;

#line 902 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_table_io_args_data_0_0[1];

#line 905 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_table_io_args_data_0[1];

#line 908 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_table_io_args_data_0[1];

#line 911 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_table_io_args_data_0[1];

#line 914 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_table_io_args_data_0;

#line 917 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_table_io_entry_data_0_0[2];

#line 920 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_table_io_entry_data_0_0[2];

#line 923 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_table_io_entry_data_0_0;

#line 926 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_table_io_entry_data_0_0[1];

#line 929 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_table_io_entry_data_0[1];

#line 932 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_table_io_entry_data_0[1];

#line 935 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_table_io_entry_data_0[1];

#line 938 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_user_event_data_0_0[3];

#line 941 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_user_event_data_0_0[3];

#line 944 "ll_backend.layout.c"
static const MR_DuFunctorDesc ll_backend__layout__ll_backend__layout__du_functor_desc_user_event_data_0_0;

#line 947 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_user_event_data_0_0[1];

#line 950 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_user_event_data_0[1];

#line 953 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_user_event_data_0[1];

#line 956 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_user_event_data_0[1];

#line 959 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____alloc_site_info_0_0_10001(
#line 962 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 964 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 967 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____alloc_site_info_0_0_10001(
#line 970 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 972 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 974 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 977 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____basic_label_layout_0_0_10001(
#line 980 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 982 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 985 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____basic_label_layout_0_0_10001(
#line 988 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 990 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 992 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 995 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____closure_proc_id_data_0_0_10001(
#line 998 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1000 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1003 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____closure_proc_id_data_0_0_10001(
#line 1006 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1008 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1010 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1013 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____data_or_slot_id_0_0_10001(
#line 1016 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1018 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1021 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____data_or_slot_id_0_0_10001(
#line 1024 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1026 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1028 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1031 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____deep_excp_slots_0_0_10001(
#line 1034 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1036 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1039 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____deep_excp_slots_0_0_10001(
#line 1042 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1044 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1046 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1049 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____event_set_layout_data_0_0_10001(
#line 1052 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1054 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1057 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____event_set_layout_data_0_0_10001(
#line 1060 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1062 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1064 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1067 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____file_layout_data_0_0_10001(
#line 1070 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1072 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1075 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____file_layout_data_0_0_10001(
#line 1078 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1080 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1082 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1085 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_layout_long_vars_0_0_10001(
#line 1088 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1090 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1093 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_layout_long_vars_0_0_10001(
#line 1096 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1098 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1100 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1103 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_layout_no_vars_0_0_10001(
#line 1106 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1108 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1111 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_layout_no_vars_0_0_10001(
#line 1114 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1116 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1118 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1121 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_layout_short_vars_0_0_10001(
#line 1124 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1126 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1129 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_layout_short_vars_0_0_10001(
#line 1132 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1134 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1136 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1139 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_long_var_info_0_0_10001(
#line 1142 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1144 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1147 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_long_var_info_0_0_10001(
#line 1150 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1152 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1154 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1157 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_short_var_info_0_0_10001(
#line 1160 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1162 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1165 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_short_var_info_0_0_10001(
#line 1168 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1170 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1172 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1175 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_vars_0_0_10001(
#line 1178 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1180 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1183 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_vars_0_0_10001(
#line 1186 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1188 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1190 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1193 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____layout_array_name_0_0_10001(
#line 1196 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1198 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1201 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____layout_array_name_0_0_10001(
#line 1204 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1206 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1208 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1211 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____layout_name_0_0_10001(
#line 1214 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1216 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1219 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____layout_name_0_0_10001(
#line 1222 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1224 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1226 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1229 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____layout_slot_name_0_0_10001(
#line 1232 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1234 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1237 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____layout_slot_name_0_0_10001(
#line 1240 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1242 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1244 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1247 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____maybe_proc_id_and_more_0_0_10001(
#line 1250 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1252 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1255 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____maybe_proc_id_and_more_0_0_10001(
#line 1258 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1260 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1262 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1265 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____module_layout_data_0_0_10001(
#line 1268 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1270 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1273 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____module_layout_data_0_0_10001(
#line 1276 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1278 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1280 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1283 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____module_layout_debug_0_0_10001(
#line 1286 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1288 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1291 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____module_layout_debug_0_0_10001(
#line 1294 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1296 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1298 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1301 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____module_layout_deep_prof_0_0_10001(
#line 1304 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1306 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1309 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____module_layout_deep_prof_0_0_10001(
#line 1312 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1314 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1316 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1319 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_data_0_0_10001(
#line 1322 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1324 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1327 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_data_0_0_10001(
#line 1330 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1332 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1334 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1337 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_exec_trace_0_0_10001(
#line 1340 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1342 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1345 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_exec_trace_0_0_10001(
#line 1348 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1350 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1352 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1355 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_kind_0_0_10001(
#line 1358 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1360 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1363 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_kind_0_0_10001(
#line 1366 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1368 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1370 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1373 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_proc_static_0_0_10001(
#line 1376 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1378 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1381 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_proc_static_0_0_10001(
#line 1384 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1386 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1388 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1391 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_stack_traversal_0_0_10001(
#line 1394 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1396 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1399 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_stack_traversal_0_0_10001(
#line 1402 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1404 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1406 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1409 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_user_or_uci_0_0_10001(
#line 1412 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1414 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1417 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_user_or_uci_0_0_10001(
#line 1420 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1422 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1424 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1427 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____string_with_0s_0_0_10001(
#line 1430 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1432 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1435 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____string_with_0s_0_0_10001(
#line 1438 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1440 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1442 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1445 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____table_io_args_data_0_0_10001(
#line 1448 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1450 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1453 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____table_io_args_data_0_0_10001(
#line 1456 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1458 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1460 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1463 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____table_io_entry_data_0_0_10001(
#line 1466 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1468 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1471 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____table_io_entry_data_0_0_10001(
#line 1474 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1476 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1478 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3);

#line 1481 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____user_event_data_0_0_10001(
#line 1484 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 1486 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2);

#line 1489 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____user_event_data_0_0_10001(
#line 1492 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 1494 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 1496 "ll_backend.layout.c"
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



#line 1634 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_alloc_site_info_0_0[4] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1642 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_alloc_site_info_0_0[4] = {
  (MR_String) "as_proc_label",
  (MR_String) "as_context",
  (MR_String) "as_type",
  (MR_String) "as_size"
};

#line 1650 "ll_backend.layout.c"
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

#line 1665 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_alloc_site_info_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_alloc_site_info_0_0
};

#line 1670 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_alloc_site_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_alloc_site_info_0_0
  }
};

#line 1679 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_alloc_site_info_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_alloc_site_info_0_0
};

#line 1684 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_alloc_site_info_0[1] = {
  (MR_Integer) 0
};

#line 1689 "ll_backend.layout.c"
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

#line 1710 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1mdbcomp__prim_data__type_ctor_info_trace_port_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0
  }
};

#line 1718 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1bool__type_ctor_info_bool_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
  }
};

#line 1726 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1734 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
  }
};

#line 1742 "ll_backend.layout.c"
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

#line 1754 "ll_backend.layout.c"
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

#line 1766 "ll_backend.layout.c"
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

#line 1781 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_basic_label_layout_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_basic_label_layout_0_0
};

#line 1786 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_basic_label_layout_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_basic_label_layout_0_0
  }
};

#line 1795 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_basic_label_layout_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_basic_label_layout_0_0
};

#line 1800 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_basic_label_layout_0[1] = {
  (MR_Integer) 0
};

#line 1805 "ll_backend.layout.c"
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

#line 1826 "ll_backend.layout.c"
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

#line 1838 "ll_backend.layout.c"
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

#line 1850 "ll_backend.layout.c"
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

#line 1865 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_closure_proc_id_data_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_closure_proc_id_data_0_0
};

#line 1870 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_closure_proc_id_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_closure_proc_id_data_0_0
  }
};

#line 1879 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_closure_proc_id_data_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_closure_proc_id_data_0_0
};

#line 1884 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_closure_proc_id_data_0[1] = {
  (MR_Integer) 0
};

#line 1889 "ll_backend.layout.c"
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

#line 1910 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_data_or_slot_id_0_0[1] = {
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0
};

#line 1915 "ll_backend.layout.c"
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

#line 1930 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_data_or_slot_id_0_1[1] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
};

#line 1935 "ll_backend.layout.c"
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

#line 1950 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_data_or_slot_id_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_data_or_slot_id_0_1
};

#line 1955 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_data_or_slot_id_0_1[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_data_or_slot_id_0_0
};

#line 1960 "ll_backend.layout.c"
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

#line 1974 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_data_or_slot_id_0[2] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_data_or_slot_id_0_0,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_data_or_slot_id_0_1
};

#line 1980 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_data_or_slot_id_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1986 "ll_backend.layout.c"
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

#line 2007 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_deep_excp_slots_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2014 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_deep_excp_slots_0_0[3] = {
  (MR_String) "top_csd",
  (MR_String) "middle_csd",
  (MR_String) "old_outermost"
};

#line 2021 "ll_backend.layout.c"
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

#line 2036 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_deep_excp_slots_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_deep_excp_slots_0_0
};

#line 2041 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_deep_excp_slots_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_deep_excp_slots_0_0
  }
};

#line 2050 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_deep_excp_slots_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_deep_excp_slots_0_0
};

#line 2055 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_deep_excp_slots_0[1] = {
  (MR_Integer) 0
};

#line 2060 "ll_backend.layout.c"
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

#line 2081 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__layout__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0
  }
};

#line 2090 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_event_set_layout_data_0_0[2] = {
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_event_set_data_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__llds__type_ctor_info_rval_0
};

#line 2096 "ll_backend.layout.c"
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

#line 2111 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_event_set_layout_data_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_event_set_layout_data_0_0
};

#line 2116 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_event_set_layout_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_event_set_layout_data_0_0
  }
};

#line 2125 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_event_set_layout_data_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_event_set_layout_data_0_0
};

#line 2130 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_event_set_layout_data_0[1] = {
  (MR_Integer) 0
};

#line 2135 "ll_backend.layout.c"
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

#line 2156 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__layout__pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
  }
};

#line 2165 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__layout__pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__layout__type_ctor_info_layout_slot_name_0
  }
};

#line 2173 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_file_layout_data_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__list__ti_list_1pair__ti_pair_2builtin__type_ctor_info_int_0ll_backend__layout__type_ctor_info_layout_slot_name_0
};

#line 2179 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_file_layout_data_0_0[2] = {
  (MR_String) "file_name",
  (MR_String) "line_no_label_list"
};

#line 2185 "ll_backend.layout.c"
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

#line 2200 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_file_layout_data_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_file_layout_data_0_0
};

#line 2205 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_file_layout_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_file_layout_data_0_0
  }
};

#line 2214 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_file_layout_data_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_file_layout_data_0_0
};

#line 2219 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_file_layout_data_0[1] = {
  (MR_Integer) 0
};

#line 2224 "ll_backend.layout.c"
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

#line 2245 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_label_layout_long_vars_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_basic_label_layout_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_label_long_var_info_0
};

#line 2251 "ll_backend.layout.c"
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

#line 2266 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_label_layout_long_vars_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_label_layout_long_vars_0_0
};

#line 2271 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_layout_long_vars_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_label_layout_long_vars_0_0
  }
};

#line 2280 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_label_layout_long_vars_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_label_layout_long_vars_0_0
};

#line 2285 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_layout_long_vars_0[1] = {
  (MR_Integer) 0
};

#line 2290 "ll_backend.layout.c"
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

#line 2311 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_layout_no_vars_0[1] = {
  (MR_Integer) 0
};

#line 2316 "ll_backend.layout.c"
static const MR_NotagFunctorDesc ll_backend__layout__ll_backend__layout__notag_functor_desc_label_layout_no_vars_0 = {
  (MR_String) "label_layout_no_vars",
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_basic_label_layout_0,
  NULL
};

#line 2323 "ll_backend.layout.c"
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

#line 2344 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_label_layout_short_vars_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_basic_label_layout_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_label_short_var_info_0
};

#line 2350 "ll_backend.layout.c"
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

#line 2365 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_label_layout_short_vars_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_label_layout_short_vars_0_0
};

#line 2370 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_layout_short_vars_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_label_layout_short_vars_0_0
  }
};

#line 2379 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_label_layout_short_vars_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_label_layout_short_vars_0_0
};

#line 2384 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_layout_short_vars_0[1] = {
  (MR_Integer) 0
};

#line 2389 "ll_backend.layout.c"
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

#line 2410 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_label_long_var_info_0_0[6] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2420 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_label_long_var_info_0_0[6] = {
  (MR_String) "llvi_encoded_var_count",
  (MR_String) "llvi_type_params",
  (MR_String) "llvi_ptis",
  (MR_String) "llvi_hlds_var_nums",
  (MR_String) "llvi_short_locns",
  (MR_String) "llvi_long_locns"
};

#line 2430 "ll_backend.layout.c"
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

#line 2445 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_label_long_var_info_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_label_long_var_info_0_0
};

#line 2450 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_long_var_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_label_long_var_info_0_0
  }
};

#line 2459 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_label_long_var_info_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_label_long_var_info_0_0
};

#line 2464 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_long_var_info_0[1] = {
  (MR_Integer) 0
};

#line 2469 "ll_backend.layout.c"
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

#line 2490 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_label_short_var_info_0_0[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2499 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_label_short_var_info_0_0[5] = {
  (MR_String) "lsvi_encoded_var_count",
  (MR_String) "lsvi_type_params",
  (MR_String) "lsvi_ptis",
  (MR_String) "lsvi_hlds_var_nums",
  (MR_String) "lsvi_short_locns"
};

#line 2508 "ll_backend.layout.c"
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

#line 2523 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_label_short_var_info_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_label_short_var_info_0_0
};

#line 2528 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_label_short_var_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_label_short_var_info_0_0
  }
};

#line 2537 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_label_short_var_info_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_label_short_var_info_0_0
};

#line 2542 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_short_var_info_0[1] = {
  (MR_Integer) 0
};

#line 2547 "ll_backend.layout.c"
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

#line 2568 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_0 = {
  (MR_String) "label_has_no_var_info",
  (MR_Integer) 0
};

#line 2574 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_1 = {
  (MR_String) "label_has_short_var_info",
  (MR_Integer) 1
};

#line 2580 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_2 = {
  (MR_String) "label_has_long_var_info",
  (MR_Integer) 2
};

#line 2586 "ll_backend.layout.c"
static const MR_EnumFunctorDescPtr ll_backend__layout__ll_backend__layout__enum_value_ordered_label_vars_0[3] = {
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_0,
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_1,
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_2
};

#line 2593 "ll_backend.layout.c"
static const MR_EnumFunctorDescPtr ll_backend__layout__ll_backend__layout__enum_name_ordered_label_vars_0[3] = {
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_2,
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_0,
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_label_vars_0_1
};

#line 2600 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_label_vars_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 2607 "ll_backend.layout.c"
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

#line 2628 "ll_backend.layout.c"
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

#line 2643 "ll_backend.layout.c"
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

#line 2658 "ll_backend.layout.c"
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

#line 2673 "ll_backend.layout.c"
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

#line 2688 "ll_backend.layout.c"
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

#line 2703 "ll_backend.layout.c"
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

#line 2718 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_array_name_0_6[1] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_label_vars_0
};

#line 2723 "ll_backend.layout.c"
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

#line 2738 "ll_backend.layout.c"
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

#line 2753 "ll_backend.layout.c"
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

#line 2768 "ll_backend.layout.c"
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

#line 2783 "ll_backend.layout.c"
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

#line 2798 "ll_backend.layout.c"
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

#line 2813 "ll_backend.layout.c"
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

#line 2828 "ll_backend.layout.c"
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

#line 2843 "ll_backend.layout.c"
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

#line 2858 "ll_backend.layout.c"
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

#line 2873 "ll_backend.layout.c"
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

#line 2888 "ll_backend.layout.c"
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

#line 2903 "ll_backend.layout.c"
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

#line 2918 "ll_backend.layout.c"
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

#line 2940 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_array_name_0_1[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_array_name_0_6
};

#line 2945 "ll_backend.layout.c"
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

#line 2959 "ll_backend.layout.c"
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

#line 2982 "ll_backend.layout.c"
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

#line 3005 "ll_backend.layout.c"
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

#line 3026 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_kind_0
};

#line 3032 "ll_backend.layout.c"
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

#line 3047 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_1[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0
};

#line 3054 "ll_backend.layout.c"
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

#line 3069 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_2[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3075 "ll_backend.layout.c"
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

#line 3090 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_3[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3096 "ll_backend.layout.c"
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

#line 3111 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_4[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3117 "ll_backend.layout.c"
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

#line 3132 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_5[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 3137 "ll_backend.layout.c"
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

#line 3152 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_6[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 3157 "ll_backend.layout.c"
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

#line 3172 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_7[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 3177 "ll_backend.layout.c"
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

#line 3192 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_8[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3198 "ll_backend.layout.c"
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

#line 3213 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_9[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 3218 "ll_backend.layout.c"
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

#line 3233 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_10[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3239 "ll_backend.layout.c"
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

#line 3254 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_11[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3260 "ll_backend.layout.c"
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

#line 3275 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_12[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3282 "ll_backend.layout.c"
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

#line 3297 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_13[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3304 "ll_backend.layout.c"
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

#line 3319 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_14[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3325 "ll_backend.layout.c"
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

#line 3340 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_15[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 3345 "ll_backend.layout.c"
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

#line 3360 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_16[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 3365 "ll_backend.layout.c"
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

#line 3380 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_17[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 3385 "ll_backend.layout.c"
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

#line 3400 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_name_0_18[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 3405 "ll_backend.layout.c"
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

#line 3420 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_name_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_0
};

#line 3425 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_name_0_1[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_1
};

#line 3430 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_name_0_2[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_name_0_2
};

#line 3435 "ll_backend.layout.c"
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

#line 3455 "ll_backend.layout.c"
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

#line 3479 "ll_backend.layout.c"
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

#line 3502 "ll_backend.layout.c"
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

#line 3525 "ll_backend.layout.c"
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

#line 3546 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_layout_slot_name_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_array_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 3552 "ll_backend.layout.c"
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

#line 3567 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_slot_name_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_slot_name_0_0
};

#line 3572 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_layout_slot_name_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_layout_slot_name_0_0
  }
};

#line 3581 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_layout_slot_name_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_layout_slot_name_0_0
};

#line 3586 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_layout_slot_name_0[1] = {
  (MR_Integer) 0
};

#line 3591 "ll_backend.layout.c"
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

#line 3612 "ll_backend.layout.c"
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

#line 3627 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_maybe_proc_id_and_more_0_1[4] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_layout_slot_name_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_layout_slot_name_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_layout_slot_name_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0
};

#line 3635 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_maybe_proc_id_and_more_0_1[4] = {
  (MR_String) "maybe_proc_static",
  (MR_String) "maybe_exec_trace",
  (MR_String) "proc_body_bytes",
  (MR_String) "proc_module_layout"
};

#line 3643 "ll_backend.layout.c"
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

#line 3658 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_maybe_proc_id_and_more_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_maybe_proc_id_and_more_0_0
};

#line 3663 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_maybe_proc_id_and_more_0_1[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_maybe_proc_id_and_more_0_1
};

#line 3668 "ll_backend.layout.c"
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

#line 3682 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_maybe_proc_id_and_more_0[2] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_maybe_proc_id_and_more_0_0,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_maybe_proc_id_and_more_0_1
};

#line 3688 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_maybe_proc_id_and_more_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3694 "ll_backend.layout.c"
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

#line 3715 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_module_layout_deep_prof_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_module_layout_deep_prof_0
  }
};

#line 3723 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_module_layout_debug_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_module_layout_debug_0
  }
};

#line 3731 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_module_layout_data_0_0[5] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_string_with_0s_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_module_layout_deep_prof_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_module_layout_debug_0
};

#line 3740 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_module_layout_data_0_0[5] = {
  (MR_String) "mld_module_name",
  (MR_String) "mld_string_table_size",
  (MR_String) "mld_string_table",
  (MR_String) "mld_maybe_deep_prof",
  (MR_String) "mld_maybe_debug"
};

#line 3749 "ll_backend.layout.c"
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

#line 3764 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_data_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_data_0_0
};

#line 3769 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_module_layout_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_data_0_0
  }
};

#line 3778 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_module_layout_data_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_data_0_0
};

#line 3783 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_module_layout_data_0[1] = {
  (MR_Integer) 0
};

#line 3788 "ll_backend.layout.c"
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

#line 3809 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1ll_backend__layout__type_ctor_info_layout_name_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0
  }
};

#line 3817 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1ll_backend__layout__type_ctor_info_file_layout_data_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_file_layout_data_0
  }
};

#line 3825 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_event_set_layout_data_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_event_set_layout_data_0
  }
};

#line 3833 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_module_layout_debug_0_0[6] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__list__ti_list_1ll_backend__layout__type_ctor_info_layout_name_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__list__ti_list_1ll_backend__layout__type_ctor_info_file_layout_data_0,
  (MR_PseudoTypeInfo) &libs__trace_params__libs__trace_params__type_ctor_info_trace_level_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_event_set_layout_data_0
};

#line 3843 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_module_layout_debug_0_0[6] = {
  (MR_String) "mld_proc_layout_names",
  (MR_String) "mld_file_layouts",
  (MR_String) "mld_trace_level",
  (MR_String) "mld_suppressed_events",
  (MR_String) "mld_num_label_exec_count",
  (MR_String) "mld_maybe_event_specs"
};

#line 3853 "ll_backend.layout.c"
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

#line 3868 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_debug_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_debug_0_0
};

#line 3873 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_module_layout_debug_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_debug_0_0
  }
};

#line 3882 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_module_layout_debug_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_debug_0_0
};

#line 3887 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_module_layout_debug_0[1] = {
  (MR_Integer) 0
};

#line 3892 "ll_backend.layout.c"
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

#line 3913 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 3921 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_module_layout_deep_prof_0_0[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 3929 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_module_layout_deep_prof_0_0[4] = {
  (MR_String) "mldp_num_oisu_types",
  (MR_String) "mldp_oisu_bytes",
  (MR_String) "mldp_num_table_types",
  (MR_String) "mldp_type_table_bytes"
};

#line 3937 "ll_backend.layout.c"
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

#line 3952 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_deep_prof_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_deep_prof_0_0
};

#line 3957 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_module_layout_deep_prof_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_module_layout_deep_prof_0_0
  }
};

#line 3966 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_module_layout_deep_prof_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_module_layout_deep_prof_0_0
};

#line 3971 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_module_layout_deep_prof_0[1] = {
  (MR_Integer) 0
};

#line 3976 "ll_backend.layout.c"
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

#line 3997 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_data_0_0[3] = {
  (MR_PseudoTypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_stack_traversal_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_maybe_proc_id_and_more_0
};

#line 4004 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_proc_layout_data_0_0[3] = {
  (MR_String) "proc_layout_label",
  (MR_String) "proc_layout_trav",
  (MR_String) "proc_layout_more"
};

#line 4011 "ll_backend.layout.c"
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

#line 4026 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_data_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_data_0_0
};

#line 4031 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_data_0_0
  }
};

#line 4040 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_data_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_data_0_0
};

#line 4045 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_data_0[1] = {
  (MR_Integer) 0
};

#line 4050 "ll_backend.layout.c"
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

#line 4071 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_data_or_slot_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_data_or_slot_id_0
  }
};

#line 4079 "ll_backend.layout.c"
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

#line 4102 "ll_backend.layout.c"
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

#line 4125 "ll_backend.layout.c"
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

#line 4140 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_exec_trace_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_exec_trace_0_0
};

#line 4145 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_exec_trace_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_exec_trace_0_0
  }
};

#line 4154 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_exec_trace_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_exec_trace_0_0
};

#line 4159 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_exec_trace_0[1] = {
  (MR_Integer) 0
};

#line 4164 "ll_backend.layout.c"
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

#line 4185 "ll_backend.layout.c"
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

#line 4200 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_kind_0_1[1] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_proc_layout_user_or_uci_0
};

#line 4205 "ll_backend.layout.c"
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

#line 4220 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_kind_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_kind_0_0
};

#line 4225 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_kind_0_1[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_kind_0_1
};

#line 4230 "ll_backend.layout.c"
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

#line 4244 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_kind_0[2] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_kind_0_1,
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_kind_0_0
};

#line 4250 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_kind_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 4256 "ll_backend.layout.c"
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

#line 4277 "ll_backend.layout.c"
static const MR_VA_TypeInfo_Struct2 ll_backend__layout____vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 4287 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__layout____vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
  }
};

#line 4295 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_proc_static_0_0[6] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_deep_excp_slots_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1__vti_tuple_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0
};

#line 4305 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_proc_layout_proc_static_0_0[6] = {
  (MR_String) "plps_file_name",
  (MR_String) "plps_line_number",
  (MR_String) "plps_is_in_interface",
  (MR_String) "plps_excp_slots",
  (MR_String) "plps_call_site_statics",
  (MR_String) "plps_coverage_points"
};

#line 4315 "ll_backend.layout.c"
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

#line 4330 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_proc_static_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_proc_static_0_0
};

#line 4335 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_proc_static_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_proc_static_0_0
  }
};

#line 4344 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_proc_static_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_proc_static_0_0
};

#line 4349 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_proc_static_0[1] = {
  (MR_Integer) 0
};

#line 4354 "ll_backend.layout.c"
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

#line 4375 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0
  }
};

#line 4383 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_proc_layout_stack_traversal_0_0[4] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__llds__type_ctor_info_label_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_determinism_0
};

#line 4391 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_proc_layout_stack_traversal_0_0[4] = {
  (MR_String) "plst_entry_label",
  (MR_String) "plst_succip_slot",
  (MR_String) "plst_stack_slot_count",
  (MR_String) "plst_detism"
};

#line 4399 "ll_backend.layout.c"
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

#line 4414 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_stack_traversal_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_stack_traversal_0_0
};

#line 4419 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_proc_layout_stack_traversal_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_proc_layout_stack_traversal_0_0
  }
};

#line 4428 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_proc_layout_stack_traversal_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_proc_layout_stack_traversal_0_0
};

#line 4433 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_stack_traversal_0[1] = {
  (MR_Integer) 0
};

#line 4438 "ll_backend.layout.c"
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

#line 4459 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_0 = {
  (MR_String) "user",
  (MR_Integer) 0
};

#line 4465 "ll_backend.layout.c"
static const MR_EnumFunctorDesc ll_backend__layout__ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_1 = {
  (MR_String) "uci",
  (MR_Integer) 1
};

#line 4471 "ll_backend.layout.c"
static const MR_EnumFunctorDescPtr ll_backend__layout__ll_backend__layout__enum_value_ordered_proc_layout_user_or_uci_0[2] = {
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_0,
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_1
};

#line 4477 "ll_backend.layout.c"
static const MR_EnumFunctorDescPtr ll_backend__layout__ll_backend__layout__enum_name_ordered_proc_layout_user_or_uci_0[2] = {
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_1,
  &ll_backend__layout__ll_backend__layout__enum_functor_desc_proc_layout_user_or_uci_0_0
};

#line 4483 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_proc_layout_user_or_uci_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 4489 "ll_backend.layout.c"
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

#line 4510 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_string_with_0s_0[1] = {
  (MR_Integer) 0
};

#line 4515 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 4523 "ll_backend.layout.c"
static const MR_NotagFunctorDesc ll_backend__layout__ll_backend__layout__notag_functor_desc_string_with_0s_0 = {
  (MR_String) "string_with_0s",
  (MR_PseudoTypeInfo) &ll_backend__layout__list__ti_list_1builtin__type_ctor_info_string_0,
  NULL
};

#line 4530 "ll_backend.layout.c"
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

#line 4551 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_table_io_args_data_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0
};

#line 4558 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_table_io_args_data_0_0[3] = {
  (MR_String) "tia_answerblock_arity",
  (MR_String) "tia_ptis",
  (MR_String) "tia_type_params"
};

#line 4565 "ll_backend.layout.c"
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

#line 4580 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_table_io_args_data_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_table_io_args_data_0_0
};

#line 4585 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_table_io_args_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_table_io_args_data_0_0
  }
};

#line 4594 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_table_io_args_data_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_table_io_args_data_0_0
};

#line 4599 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_table_io_args_data_0[1] = {
  (MR_Integer) 0
};

#line 4604 "ll_backend.layout.c"
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

#line 4625 "ll_backend.layout.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_table_io_args_data_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_table_io_args_data_0
  }
};

#line 4633 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_table_io_entry_data_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_name_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__maybe__ti_maybe_1ll_backend__layout__type_ctor_info_table_io_args_data_0
};

#line 4639 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_table_io_entry_data_0_0[2] = {
  (MR_String) "tie_proc_ptr",
  (MR_String) "tie_maybe_args"
};

#line 4645 "ll_backend.layout.c"
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

#line 4660 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_table_io_entry_data_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_table_io_entry_data_0_0
};

#line 4665 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_table_io_entry_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_table_io_entry_data_0_0
  }
};

#line 4674 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_table_io_entry_data_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_table_io_entry_data_0_0
};

#line 4679 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_table_io_entry_data_0[1] = {
  (MR_Integer) 0
};

#line 4684 "ll_backend.layout.c"
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

#line 4705 "ll_backend.layout.c"
static const MR_PseudoTypeInfo ll_backend__layout__ll_backend__layout__field_types_user_event_data_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0,
  (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
};

#line 4712 "ll_backend.layout.c"
static const MR_ConstString ll_backend__layout__ll_backend__layout__field_names_user_event_data_0_0[3] = {
  (MR_String) "user_event_number",
  (MR_String) "user_event_locns",
  (MR_String) "user_event_var_nums"
};

#line 4719 "ll_backend.layout.c"
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

#line 4734 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_stag_ordered_user_event_data_0_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_user_event_data_0_0
};

#line 4739 "ll_backend.layout.c"
static const MR_DuPtagLayout ll_backend__layout__ll_backend__layout__du_ptag_ordered_user_event_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__layout__ll_backend__layout__du_stag_ordered_user_event_data_0_0
  }
};

#line 4748 "ll_backend.layout.c"
static const MR_DuFunctorDescPtr ll_backend__layout__ll_backend__layout__du_name_ordered_user_event_data_0[1] = {
  &ll_backend__layout__ll_backend__layout__du_functor_desc_user_event_data_0_0
};

#line 4753 "ll_backend.layout.c"
static const MR_Integer ll_backend__layout__ll_backend__layout__functor_number_map_user_event_data_0[1] = {
  (MR_Integer) 0
};

#line 4758 "ll_backend.layout.c"
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

#line 4779 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____alloc_site_info_0_0_10001(
#line 4782 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 4784 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 4786 "ll_backend.layout.c"
{
#line 4788 "ll_backend.layout.c"
  {
#line 4790 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 4793 "ll_backend.layout.c"
    {
#line 4795 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____alloc_site_info_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 4798 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 4800 "ll_backend.layout.c"
  }
#line 4802 "ll_backend.layout.c"
}

#line 4805 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____alloc_site_info_0_0_10001(
#line 4808 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 4810 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 4812 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 4814 "ll_backend.layout.c"
{
#line 4816 "ll_backend.layout.c"
  {
#line 4818 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 4821 "ll_backend.layout.c"
    {
#line 4823 "ll_backend.layout.c"
      ll_backend__layout____Compare____alloc_site_info_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 4826 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 4828 "ll_backend.layout.c"
  }
#line 4830 "ll_backend.layout.c"
}

#line 4833 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____basic_label_layout_0_0_10001(
#line 4836 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 4838 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 4840 "ll_backend.layout.c"
{
#line 4842 "ll_backend.layout.c"
  {
#line 4844 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 4847 "ll_backend.layout.c"
    {
#line 4849 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____basic_label_layout_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 4852 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 4854 "ll_backend.layout.c"
  }
#line 4856 "ll_backend.layout.c"
}

#line 4859 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____basic_label_layout_0_0_10001(
#line 4862 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 4864 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 4866 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 4868 "ll_backend.layout.c"
{
#line 4870 "ll_backend.layout.c"
  {
#line 4872 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 4875 "ll_backend.layout.c"
    {
#line 4877 "ll_backend.layout.c"
      ll_backend__layout____Compare____basic_label_layout_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 4880 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 4882 "ll_backend.layout.c"
  }
#line 4884 "ll_backend.layout.c"
}

#line 4887 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____closure_proc_id_data_0_0_10001(
#line 4890 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 4892 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 4894 "ll_backend.layout.c"
{
#line 4896 "ll_backend.layout.c"
  {
#line 4898 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 4901 "ll_backend.layout.c"
    {
#line 4903 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____closure_proc_id_data_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 4906 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 4908 "ll_backend.layout.c"
  }
#line 4910 "ll_backend.layout.c"
}

#line 4913 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____closure_proc_id_data_0_0_10001(
#line 4916 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 4918 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 4920 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 4922 "ll_backend.layout.c"
{
#line 4924 "ll_backend.layout.c"
  {
#line 4926 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 4929 "ll_backend.layout.c"
    {
#line 4931 "ll_backend.layout.c"
      ll_backend__layout____Compare____closure_proc_id_data_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 4934 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 4936 "ll_backend.layout.c"
  }
#line 4938 "ll_backend.layout.c"
}

#line 4941 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____data_or_slot_id_0_0_10001(
#line 4944 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 4946 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 4948 "ll_backend.layout.c"
{
#line 4950 "ll_backend.layout.c"
  {
#line 4952 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 4955 "ll_backend.layout.c"
    {
#line 4957 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____data_or_slot_id_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 4960 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 4962 "ll_backend.layout.c"
  }
#line 4964 "ll_backend.layout.c"
}

#line 4967 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____data_or_slot_id_0_0_10001(
#line 4970 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 4972 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 4974 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 4976 "ll_backend.layout.c"
{
#line 4978 "ll_backend.layout.c"
  {
#line 4980 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 4983 "ll_backend.layout.c"
    {
#line 4985 "ll_backend.layout.c"
      ll_backend__layout____Compare____data_or_slot_id_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 4988 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 4990 "ll_backend.layout.c"
  }
#line 4992 "ll_backend.layout.c"
}

#line 4995 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____deep_excp_slots_0_0_10001(
#line 4998 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5000 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5002 "ll_backend.layout.c"
{
#line 5004 "ll_backend.layout.c"
  {
#line 5006 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5009 "ll_backend.layout.c"
    {
#line 5011 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____deep_excp_slots_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5014 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5016 "ll_backend.layout.c"
  }
#line 5018 "ll_backend.layout.c"
}

#line 5021 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____deep_excp_slots_0_0_10001(
#line 5024 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5026 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5028 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5030 "ll_backend.layout.c"
{
#line 5032 "ll_backend.layout.c"
  {
#line 5034 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5037 "ll_backend.layout.c"
    {
#line 5039 "ll_backend.layout.c"
      ll_backend__layout____Compare____deep_excp_slots_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5042 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5044 "ll_backend.layout.c"
  }
#line 5046 "ll_backend.layout.c"
}

#line 5049 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____event_set_layout_data_0_0_10001(
#line 5052 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5054 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5056 "ll_backend.layout.c"
{
#line 5058 "ll_backend.layout.c"
  {
#line 5060 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5063 "ll_backend.layout.c"
    {
#line 5065 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____event_set_layout_data_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5068 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5070 "ll_backend.layout.c"
  }
#line 5072 "ll_backend.layout.c"
}

#line 5075 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____event_set_layout_data_0_0_10001(
#line 5078 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5080 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5082 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5084 "ll_backend.layout.c"
{
#line 5086 "ll_backend.layout.c"
  {
#line 5088 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5091 "ll_backend.layout.c"
    {
#line 5093 "ll_backend.layout.c"
      ll_backend__layout____Compare____event_set_layout_data_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5096 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5098 "ll_backend.layout.c"
  }
#line 5100 "ll_backend.layout.c"
}

#line 5103 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____file_layout_data_0_0_10001(
#line 5106 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5108 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5110 "ll_backend.layout.c"
{
#line 5112 "ll_backend.layout.c"
  {
#line 5114 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5117 "ll_backend.layout.c"
    {
#line 5119 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____file_layout_data_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5122 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5124 "ll_backend.layout.c"
  }
#line 5126 "ll_backend.layout.c"
}

#line 5129 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____file_layout_data_0_0_10001(
#line 5132 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5134 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5136 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5138 "ll_backend.layout.c"
{
#line 5140 "ll_backend.layout.c"
  {
#line 5142 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5145 "ll_backend.layout.c"
    {
#line 5147 "ll_backend.layout.c"
      ll_backend__layout____Compare____file_layout_data_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5150 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5152 "ll_backend.layout.c"
  }
#line 5154 "ll_backend.layout.c"
}

#line 5157 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_layout_long_vars_0_0_10001(
#line 5160 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5162 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5164 "ll_backend.layout.c"
{
#line 5166 "ll_backend.layout.c"
  {
#line 5168 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5171 "ll_backend.layout.c"
    {
#line 5173 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____label_layout_long_vars_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5176 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5178 "ll_backend.layout.c"
  }
#line 5180 "ll_backend.layout.c"
}

#line 5183 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_layout_long_vars_0_0_10001(
#line 5186 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5188 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5190 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5192 "ll_backend.layout.c"
{
#line 5194 "ll_backend.layout.c"
  {
#line 5196 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5199 "ll_backend.layout.c"
    {
#line 5201 "ll_backend.layout.c"
      ll_backend__layout____Compare____label_layout_long_vars_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5204 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5206 "ll_backend.layout.c"
  }
#line 5208 "ll_backend.layout.c"
}

#line 5211 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_layout_no_vars_0_0_10001(
#line 5214 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5216 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5218 "ll_backend.layout.c"
{
#line 5220 "ll_backend.layout.c"
  {
#line 5222 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5225 "ll_backend.layout.c"
    {
#line 5227 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____label_layout_no_vars_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5230 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5232 "ll_backend.layout.c"
  }
#line 5234 "ll_backend.layout.c"
}

#line 5237 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_layout_no_vars_0_0_10001(
#line 5240 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5242 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5244 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5246 "ll_backend.layout.c"
{
#line 5248 "ll_backend.layout.c"
  {
#line 5250 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5253 "ll_backend.layout.c"
    {
#line 5255 "ll_backend.layout.c"
      ll_backend__layout____Compare____label_layout_no_vars_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5258 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5260 "ll_backend.layout.c"
  }
#line 5262 "ll_backend.layout.c"
}

#line 5265 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_layout_short_vars_0_0_10001(
#line 5268 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5270 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5272 "ll_backend.layout.c"
{
#line 5274 "ll_backend.layout.c"
  {
#line 5276 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5279 "ll_backend.layout.c"
    {
#line 5281 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____label_layout_short_vars_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5284 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5286 "ll_backend.layout.c"
  }
#line 5288 "ll_backend.layout.c"
}

#line 5291 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_layout_short_vars_0_0_10001(
#line 5294 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5296 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5298 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5300 "ll_backend.layout.c"
{
#line 5302 "ll_backend.layout.c"
  {
#line 5304 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5307 "ll_backend.layout.c"
    {
#line 5309 "ll_backend.layout.c"
      ll_backend__layout____Compare____label_layout_short_vars_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5312 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5314 "ll_backend.layout.c"
  }
#line 5316 "ll_backend.layout.c"
}

#line 5319 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_long_var_info_0_0_10001(
#line 5322 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5324 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5326 "ll_backend.layout.c"
{
#line 5328 "ll_backend.layout.c"
  {
#line 5330 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5333 "ll_backend.layout.c"
    {
#line 5335 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____label_long_var_info_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5338 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5340 "ll_backend.layout.c"
  }
#line 5342 "ll_backend.layout.c"
}

#line 5345 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_long_var_info_0_0_10001(
#line 5348 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5350 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5352 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5354 "ll_backend.layout.c"
{
#line 5356 "ll_backend.layout.c"
  {
#line 5358 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5361 "ll_backend.layout.c"
    {
#line 5363 "ll_backend.layout.c"
      ll_backend__layout____Compare____label_long_var_info_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5366 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5368 "ll_backend.layout.c"
  }
#line 5370 "ll_backend.layout.c"
}

#line 5373 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_short_var_info_0_0_10001(
#line 5376 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5378 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5380 "ll_backend.layout.c"
{
#line 5382 "ll_backend.layout.c"
  {
#line 5384 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5387 "ll_backend.layout.c"
    {
#line 5389 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____label_short_var_info_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5392 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5394 "ll_backend.layout.c"
  }
#line 5396 "ll_backend.layout.c"
}

#line 5399 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_short_var_info_0_0_10001(
#line 5402 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5404 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5406 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5408 "ll_backend.layout.c"
{
#line 5410 "ll_backend.layout.c"
  {
#line 5412 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5415 "ll_backend.layout.c"
    {
#line 5417 "ll_backend.layout.c"
      ll_backend__layout____Compare____label_short_var_info_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5420 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5422 "ll_backend.layout.c"
  }
#line 5424 "ll_backend.layout.c"
}

#line 5427 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____label_vars_0_0_10001(
#line 5430 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5432 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5434 "ll_backend.layout.c"
{
#line 5436 "ll_backend.layout.c"
  {
#line 5438 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5441 "ll_backend.layout.c"
    {
#line 5443 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____label_vars_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5446 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5448 "ll_backend.layout.c"
  }
#line 5450 "ll_backend.layout.c"
}

#line 5453 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____label_vars_0_0_10001(
#line 5456 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5458 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5460 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5462 "ll_backend.layout.c"
{
#line 5464 "ll_backend.layout.c"
  {
#line 5466 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5469 "ll_backend.layout.c"
    {
#line 5471 "ll_backend.layout.c"
      ll_backend__layout____Compare____label_vars_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5474 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5476 "ll_backend.layout.c"
  }
#line 5478 "ll_backend.layout.c"
}

#line 5481 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____layout_array_name_0_0_10001(
#line 5484 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5486 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5488 "ll_backend.layout.c"
{
#line 5490 "ll_backend.layout.c"
  {
#line 5492 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5495 "ll_backend.layout.c"
    {
#line 5497 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_array_name_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5500 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5502 "ll_backend.layout.c"
  }
#line 5504 "ll_backend.layout.c"
}

#line 5507 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____layout_array_name_0_0_10001(
#line 5510 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5512 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5514 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5516 "ll_backend.layout.c"
{
#line 5518 "ll_backend.layout.c"
  {
#line 5520 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5523 "ll_backend.layout.c"
    {
#line 5525 "ll_backend.layout.c"
      ll_backend__layout____Compare____layout_array_name_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5528 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5530 "ll_backend.layout.c"
  }
#line 5532 "ll_backend.layout.c"
}

#line 5535 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____layout_name_0_0_10001(
#line 5538 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5540 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5542 "ll_backend.layout.c"
{
#line 5544 "ll_backend.layout.c"
  {
#line 5546 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5549 "ll_backend.layout.c"
    {
#line 5551 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_name_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5554 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5556 "ll_backend.layout.c"
  }
#line 5558 "ll_backend.layout.c"
}

#line 5561 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____layout_name_0_0_10001(
#line 5564 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5566 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5568 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5570 "ll_backend.layout.c"
{
#line 5572 "ll_backend.layout.c"
  {
#line 5574 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5577 "ll_backend.layout.c"
    {
#line 5579 "ll_backend.layout.c"
      ll_backend__layout____Compare____layout_name_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5582 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5584 "ll_backend.layout.c"
  }
#line 5586 "ll_backend.layout.c"
}

#line 5589 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____layout_slot_name_0_0_10001(
#line 5592 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5594 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5596 "ll_backend.layout.c"
{
#line 5598 "ll_backend.layout.c"
  {
#line 5600 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5603 "ll_backend.layout.c"
    {
#line 5605 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_slot_name_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5608 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5610 "ll_backend.layout.c"
  }
#line 5612 "ll_backend.layout.c"
}

#line 5615 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____layout_slot_name_0_0_10001(
#line 5618 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5620 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5622 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5624 "ll_backend.layout.c"
{
#line 5626 "ll_backend.layout.c"
  {
#line 5628 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5631 "ll_backend.layout.c"
    {
#line 5633 "ll_backend.layout.c"
      ll_backend__layout____Compare____layout_slot_name_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5636 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5638 "ll_backend.layout.c"
  }
#line 5640 "ll_backend.layout.c"
}

#line 5643 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____maybe_proc_id_and_more_0_0_10001(
#line 5646 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5648 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5650 "ll_backend.layout.c"
{
#line 5652 "ll_backend.layout.c"
  {
#line 5654 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5657 "ll_backend.layout.c"
    {
#line 5659 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____maybe_proc_id_and_more_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5662 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5664 "ll_backend.layout.c"
  }
#line 5666 "ll_backend.layout.c"
}

#line 5669 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____maybe_proc_id_and_more_0_0_10001(
#line 5672 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5674 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5676 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5678 "ll_backend.layout.c"
{
#line 5680 "ll_backend.layout.c"
  {
#line 5682 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5685 "ll_backend.layout.c"
    {
#line 5687 "ll_backend.layout.c"
      ll_backend__layout____Compare____maybe_proc_id_and_more_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5690 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5692 "ll_backend.layout.c"
  }
#line 5694 "ll_backend.layout.c"
}

#line 5697 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____module_layout_data_0_0_10001(
#line 5700 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5702 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5704 "ll_backend.layout.c"
{
#line 5706 "ll_backend.layout.c"
  {
#line 5708 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5711 "ll_backend.layout.c"
    {
#line 5713 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____module_layout_data_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5716 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5718 "ll_backend.layout.c"
  }
#line 5720 "ll_backend.layout.c"
}

#line 5723 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____module_layout_data_0_0_10001(
#line 5726 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5728 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5730 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5732 "ll_backend.layout.c"
{
#line 5734 "ll_backend.layout.c"
  {
#line 5736 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5739 "ll_backend.layout.c"
    {
#line 5741 "ll_backend.layout.c"
      ll_backend__layout____Compare____module_layout_data_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5744 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5746 "ll_backend.layout.c"
  }
#line 5748 "ll_backend.layout.c"
}

#line 5751 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____module_layout_debug_0_0_10001(
#line 5754 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5756 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5758 "ll_backend.layout.c"
{
#line 5760 "ll_backend.layout.c"
  {
#line 5762 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5765 "ll_backend.layout.c"
    {
#line 5767 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____module_layout_debug_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5770 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5772 "ll_backend.layout.c"
  }
#line 5774 "ll_backend.layout.c"
}

#line 5777 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____module_layout_debug_0_0_10001(
#line 5780 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5782 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5784 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5786 "ll_backend.layout.c"
{
#line 5788 "ll_backend.layout.c"
  {
#line 5790 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5793 "ll_backend.layout.c"
    {
#line 5795 "ll_backend.layout.c"
      ll_backend__layout____Compare____module_layout_debug_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5798 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5800 "ll_backend.layout.c"
  }
#line 5802 "ll_backend.layout.c"
}

#line 5805 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____module_layout_deep_prof_0_0_10001(
#line 5808 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5810 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5812 "ll_backend.layout.c"
{
#line 5814 "ll_backend.layout.c"
  {
#line 5816 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5819 "ll_backend.layout.c"
    {
#line 5821 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____module_layout_deep_prof_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5824 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5826 "ll_backend.layout.c"
  }
#line 5828 "ll_backend.layout.c"
}

#line 5831 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____module_layout_deep_prof_0_0_10001(
#line 5834 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5836 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5838 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5840 "ll_backend.layout.c"
{
#line 5842 "ll_backend.layout.c"
  {
#line 5844 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5847 "ll_backend.layout.c"
    {
#line 5849 "ll_backend.layout.c"
      ll_backend__layout____Compare____module_layout_deep_prof_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5852 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5854 "ll_backend.layout.c"
  }
#line 5856 "ll_backend.layout.c"
}

#line 5859 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_data_0_0_10001(
#line 5862 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5864 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5866 "ll_backend.layout.c"
{
#line 5868 "ll_backend.layout.c"
  {
#line 5870 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5873 "ll_backend.layout.c"
    {
#line 5875 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____proc_layout_data_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5878 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5880 "ll_backend.layout.c"
  }
#line 5882 "ll_backend.layout.c"
}

#line 5885 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_data_0_0_10001(
#line 5888 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5890 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5892 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5894 "ll_backend.layout.c"
{
#line 5896 "ll_backend.layout.c"
  {
#line 5898 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5901 "ll_backend.layout.c"
    {
#line 5903 "ll_backend.layout.c"
      ll_backend__layout____Compare____proc_layout_data_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5906 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5908 "ll_backend.layout.c"
  }
#line 5910 "ll_backend.layout.c"
}

#line 5913 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_exec_trace_0_0_10001(
#line 5916 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5918 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5920 "ll_backend.layout.c"
{
#line 5922 "ll_backend.layout.c"
  {
#line 5924 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5927 "ll_backend.layout.c"
    {
#line 5929 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____proc_layout_exec_trace_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5932 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5934 "ll_backend.layout.c"
  }
#line 5936 "ll_backend.layout.c"
}

#line 5939 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_exec_trace_0_0_10001(
#line 5942 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5944 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 5946 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 5948 "ll_backend.layout.c"
{
#line 5950 "ll_backend.layout.c"
  {
#line 5952 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 5955 "ll_backend.layout.c"
    {
#line 5957 "ll_backend.layout.c"
      ll_backend__layout____Compare____proc_layout_exec_trace_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 5960 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 5962 "ll_backend.layout.c"
  }
#line 5964 "ll_backend.layout.c"
}

#line 5967 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_kind_0_0_10001(
#line 5970 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 5972 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 5974 "ll_backend.layout.c"
{
#line 5976 "ll_backend.layout.c"
  {
#line 5978 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 5981 "ll_backend.layout.c"
    {
#line 5983 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____proc_layout_kind_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 5986 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 5988 "ll_backend.layout.c"
  }
#line 5990 "ll_backend.layout.c"
}

#line 5993 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_kind_0_0_10001(
#line 5996 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 5998 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 6000 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 6002 "ll_backend.layout.c"
{
#line 6004 "ll_backend.layout.c"
  {
#line 6006 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 6009 "ll_backend.layout.c"
    {
#line 6011 "ll_backend.layout.c"
      ll_backend__layout____Compare____proc_layout_kind_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 6014 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 6016 "ll_backend.layout.c"
  }
#line 6018 "ll_backend.layout.c"
}

#line 6021 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_proc_static_0_0_10001(
#line 6024 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 6026 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 6028 "ll_backend.layout.c"
{
#line 6030 "ll_backend.layout.c"
  {
#line 6032 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 6035 "ll_backend.layout.c"
    {
#line 6037 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____proc_layout_proc_static_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 6040 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 6042 "ll_backend.layout.c"
  }
#line 6044 "ll_backend.layout.c"
}

#line 6047 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_proc_static_0_0_10001(
#line 6050 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 6052 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 6054 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 6056 "ll_backend.layout.c"
{
#line 6058 "ll_backend.layout.c"
  {
#line 6060 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 6063 "ll_backend.layout.c"
    {
#line 6065 "ll_backend.layout.c"
      ll_backend__layout____Compare____proc_layout_proc_static_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 6068 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 6070 "ll_backend.layout.c"
  }
#line 6072 "ll_backend.layout.c"
}

#line 6075 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_stack_traversal_0_0_10001(
#line 6078 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 6080 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 6082 "ll_backend.layout.c"
{
#line 6084 "ll_backend.layout.c"
  {
#line 6086 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 6089 "ll_backend.layout.c"
    {
#line 6091 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____proc_layout_stack_traversal_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 6094 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 6096 "ll_backend.layout.c"
  }
#line 6098 "ll_backend.layout.c"
}

#line 6101 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_stack_traversal_0_0_10001(
#line 6104 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 6106 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 6108 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 6110 "ll_backend.layout.c"
{
#line 6112 "ll_backend.layout.c"
  {
#line 6114 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 6117 "ll_backend.layout.c"
    {
#line 6119 "ll_backend.layout.c"
      ll_backend__layout____Compare____proc_layout_stack_traversal_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 6122 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 6124 "ll_backend.layout.c"
  }
#line 6126 "ll_backend.layout.c"
}

#line 6129 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____proc_layout_user_or_uci_0_0_10001(
#line 6132 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 6134 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 6136 "ll_backend.layout.c"
{
#line 6138 "ll_backend.layout.c"
  {
#line 6140 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 6143 "ll_backend.layout.c"
    {
#line 6145 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____proc_layout_user_or_uci_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 6148 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 6150 "ll_backend.layout.c"
  }
#line 6152 "ll_backend.layout.c"
}

#line 6155 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____proc_layout_user_or_uci_0_0_10001(
#line 6158 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 6160 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 6162 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 6164 "ll_backend.layout.c"
{
#line 6166 "ll_backend.layout.c"
  {
#line 6168 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 6171 "ll_backend.layout.c"
    {
#line 6173 "ll_backend.layout.c"
      ll_backend__layout____Compare____proc_layout_user_or_uci_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 6176 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 6178 "ll_backend.layout.c"
  }
#line 6180 "ll_backend.layout.c"
}

#line 6183 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____string_with_0s_0_0_10001(
#line 6186 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 6188 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 6190 "ll_backend.layout.c"
{
#line 6192 "ll_backend.layout.c"
  {
#line 6194 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 6197 "ll_backend.layout.c"
    {
#line 6199 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____string_with_0s_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 6202 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 6204 "ll_backend.layout.c"
  }
#line 6206 "ll_backend.layout.c"
}

#line 6209 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____string_with_0s_0_0_10001(
#line 6212 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 6214 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 6216 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 6218 "ll_backend.layout.c"
{
#line 6220 "ll_backend.layout.c"
  {
#line 6222 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 6225 "ll_backend.layout.c"
    {
#line 6227 "ll_backend.layout.c"
      ll_backend__layout____Compare____string_with_0s_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 6230 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 6232 "ll_backend.layout.c"
  }
#line 6234 "ll_backend.layout.c"
}

#line 6237 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____table_io_args_data_0_0_10001(
#line 6240 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 6242 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 6244 "ll_backend.layout.c"
{
#line 6246 "ll_backend.layout.c"
  {
#line 6248 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 6251 "ll_backend.layout.c"
    {
#line 6253 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____table_io_args_data_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 6256 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 6258 "ll_backend.layout.c"
  }
#line 6260 "ll_backend.layout.c"
}

#line 6263 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____table_io_args_data_0_0_10001(
#line 6266 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 6268 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 6270 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 6272 "ll_backend.layout.c"
{
#line 6274 "ll_backend.layout.c"
  {
#line 6276 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 6279 "ll_backend.layout.c"
    {
#line 6281 "ll_backend.layout.c"
      ll_backend__layout____Compare____table_io_args_data_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 6284 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 6286 "ll_backend.layout.c"
  }
#line 6288 "ll_backend.layout.c"
}

#line 6291 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____table_io_entry_data_0_0_10001(
#line 6294 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 6296 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 6298 "ll_backend.layout.c"
{
#line 6300 "ll_backend.layout.c"
  {
#line 6302 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 6305 "ll_backend.layout.c"
    {
#line 6307 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____table_io_entry_data_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 6310 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 6312 "ll_backend.layout.c"
  }
#line 6314 "ll_backend.layout.c"
}

#line 6317 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____table_io_entry_data_0_0_10001(
#line 6320 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 6322 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 6324 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 6326 "ll_backend.layout.c"
{
#line 6328 "ll_backend.layout.c"
  {
#line 6330 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 6333 "ll_backend.layout.c"
    {
#line 6335 "ll_backend.layout.c"
      ll_backend__layout____Compare____table_io_entry_data_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 6338 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 6340 "ll_backend.layout.c"
  }
#line 6342 "ll_backend.layout.c"
}

#line 6345 "ll_backend.layout.c"
static MR_bool MR_CALL 
ll_backend__layout____Unify____user_event_data_0_0_10001(
#line 6348 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_1,
#line 6350 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2)
#line 6352 "ll_backend.layout.c"
{
#line 6354 "ll_backend.layout.c"
  {
#line 6356 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded;

#line 6359 "ll_backend.layout.c"
    {
#line 6361 "ll_backend.layout.c"
      ll_backend__layout__succeeded = ll_backend__layout____Unify____user_event_data_0_0(((MR_Word) ll_backend__layout__wrapper_arg_1), ((MR_Word) ll_backend__layout__wrapper_arg_2));
    }
#line 6364 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 6366 "ll_backend.layout.c"
  }
#line 6368 "ll_backend.layout.c"
}

#line 6371 "ll_backend.layout.c"
static void MR_CALL 
ll_backend__layout____Compare____user_event_data_0_0_10001(
#line 6374 "ll_backend.layout.c"
  MR_Box * ll_backend__layout__wrapper_arg_1,
#line 6376 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_2,
#line 6378 "ll_backend.layout.c"
  MR_Box ll_backend__layout__wrapper_arg_3)
#line 6380 "ll_backend.layout.c"
{
#line 6382 "ll_backend.layout.c"
  {
#line 6384 "ll_backend.layout.c"
    MR_Word ll_backend__layout__conv0_HeadVar__1_1;

#line 6387 "ll_backend.layout.c"
    {
#line 6389 "ll_backend.layout.c"
      ll_backend__layout____Compare____user_event_data_0_0(&ll_backend__layout__conv0_HeadVar__1_1, ((MR_Word) ll_backend__layout__wrapper_arg_2), ((MR_Word) ll_backend__layout__wrapper_arg_3));
    }
#line 6392 "ll_backend.layout.c"
    *ll_backend__layout__wrapper_arg_1 = ((MR_Box) (ll_backend__layout__conv0_HeadVar__1_1));
#line 6394 "ll_backend.layout.c"
  }
#line 6396 "ll_backend.layout.c"
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
#line 6423 "ll_backend.layout.c"
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
#line 6449 "ll_backend.layout.c"
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
#line 6469 "ll_backend.layout.c"
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

#line 6536 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_3_3 == ll_backend__layout__V_6_6);
#line 74 "layout.m"
        if (ll_backend__layout__succeeded)
#line 74 "layout.m"
          {
#line 6542 "ll_backend.layout.c"
            {
#line 6544 "ll_backend.layout.c"
              ll_backend__layout__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__layout__V_4_4, ll_backend__layout__V_7_7);
            }
#line 74 "layout.m"
            if (ll_backend__layout__succeeded)
#line 6549 "ll_backend.layout.c"
              {
#line 6551 "ll_backend.layout.c"
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
#line 6589 "ll_backend.layout.c"
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
#line 6611 "ll_backend.layout.c"
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

#line 6678 "ll_backend.layout.c"
        {
#line 6680 "ll_backend.layout.c"
          ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_name_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_5_5);
        }
#line 201 "layout.m"
        if (ll_backend__layout__succeeded)
#line 201 "layout.m"
          {
#line 6687 "ll_backend.layout.c"
            ll_backend__layout__TypeInfo_9_9 = (MR_Word) &ll_backend__layout_scalar_common_1[15];
#line 6689 "ll_backend.layout.c"
            {
#line 6691 "ll_backend.layout.c"
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
#line 6729 "ll_backend.layout.c"
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
#line 6755 "ll_backend.layout.c"
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
#line 6775 "ll_backend.layout.c"
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

#line 6842 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_3_3 == ll_backend__layout__V_6_6);
#line 177 "layout.m"
        if (ll_backend__layout__succeeded)
#line 177 "layout.m"
          {
#line 6848 "ll_backend.layout.c"
            {
#line 6850 "ll_backend.layout.c"
              ll_backend__layout__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__layout__V_4_4, ll_backend__layout__V_7_7);
            }
#line 177 "layout.m"
            if (ll_backend__layout__succeeded)
#line 6855 "ll_backend.layout.c"
              {
#line 6857 "ll_backend.layout.c"
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
#line 6895 "ll_backend.layout.c"
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

#line 6953 "ll_backend.layout.c"
        {
#line 6955 "ll_backend.layout.c"
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
#line 7008 "ll_backend.layout.c"
  {
#line 7010 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded = (ll_backend__layout__HeadVar__2_1 == ll_backend__layout__HeadVar__2_2);

#line 7013 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 7015 "ll_backend.layout.c"
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
#line 7044 "ll_backend.layout.c"
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
#line 7074 "ll_backend.layout.c"
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
#line 7094 "ll_backend.layout.c"
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
#line 7114 "ll_backend.layout.c"
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

#line 7198 "ll_backend.layout.c"
        {
#line 7200 "ll_backend.layout.c"
          ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__layout_scalar_common_1[13], ((MR_Box) (ll_backend__layout__V_3_3)), ((MR_Box) (ll_backend__layout__V_7_7)));
        }
#line 139 "layout.m"
        if (ll_backend__layout__succeeded)
#line 139 "layout.m"
          {
#line 7207 "ll_backend.layout.c"
            ll_backend__layout__TypeInfo_14_14 = (MR_Word) &ll_backend__layout_scalar_common_1[2];
#line 7209 "ll_backend.layout.c"
            {
#line 7211 "ll_backend.layout.c"
              ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_14_14, ((MR_Box) (ll_backend__layout__V_4_4)), ((MR_Box) (ll_backend__layout__V_8_8)));
            }
#line 139 "layout.m"
            if (ll_backend__layout__succeeded)
#line 139 "layout.m"
              {
#line 7218 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_5_5 == ll_backend__layout__V_9_9);
#line 139 "layout.m"
                if (ll_backend__layout__succeeded)
#line 7222 "ll_backend.layout.c"
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
#line 7261 "ll_backend.layout.c"
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
#line 7299 "ll_backend.layout.c"
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
#line 7319 "ll_backend.layout.c"
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
#line 7343 "ll_backend.layout.c"
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
#line 7363 "ll_backend.layout.c"
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
#line 7383 "ll_backend.layout.c"
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

#line 7476 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (strcmp(ll_backend__layout__V_3_3, ll_backend__layout__V_9_9) == 0);
#line 167 "layout.m"
        if (ll_backend__layout__succeeded)
#line 167 "layout.m"
          {
#line 7482 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 == ll_backend__layout__V_10_10);
#line 167 "layout.m"
            if (ll_backend__layout__succeeded)
#line 167 "layout.m"
              {
#line 7488 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_5_5 == ll_backend__layout__V_11_11);
#line 167 "layout.m"
                if (ll_backend__layout__succeeded)
#line 167 "layout.m"
                  {
#line 7494 "ll_backend.layout.c"
                    {
#line 7496 "ll_backend.layout.c"
                      ll_backend__layout__succeeded = ll_backend__layout____Unify____deep_excp_slots_0_0(ll_backend__layout__V_6_6, ll_backend__layout__V_12_12);
                    }
#line 167 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 167 "layout.m"
                      {
#line 7503 "ll_backend.layout.c"
                        ll_backend__layout__TypeInfo_17_17 = (MR_Word) &ll_backend__layout_scalar_common_1[12];
#line 7505 "ll_backend.layout.c"
                        {
#line 7507 "ll_backend.layout.c"
                          ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_17_17, ((MR_Box) (ll_backend__layout__V_7_7)), ((MR_Box) (ll_backend__layout__V_13_13)));
                        }
#line 167 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 167 "layout.m"
                          {
#line 7514 "ll_backend.layout.c"
                            ll_backend__layout__TypeInfo_18_18 = (MR_Word) &ll_backend__layout_scalar_common_1[12];
#line 7516 "ll_backend.layout.c"
                            {
#line 7518 "ll_backend.layout.c"
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
#line 7564 "ll_backend.layout.c"
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
#line 7576 "ll_backend.layout.c"
          *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 1;
#line 390 "layout.m"
      else
#line 390 "layout.m"
        {
#line 390 "layout.m"
          MR_Word ll_backend__layout__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__layout__HeadVar__2_2, (MR_Integer) 0)));

#line 390 "layout.m"
          if ((ll_backend__layout__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 7587 "ll_backend.layout.c"
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
#line 7672 "ll_backend.layout.c"
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
#line 7709 "ll_backend.layout.c"
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
#line 7799 "ll_backend.layout.c"
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
#line 7819 "ll_backend.layout.c"
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
#line 7839 "ll_backend.layout.c"
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
#line 7859 "ll_backend.layout.c"
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
#line 7879 "ll_backend.layout.c"
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
#line 7899 "ll_backend.layout.c"
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
#line 7919 "ll_backend.layout.c"
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
#line 7939 "ll_backend.layout.c"
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
#line 7959 "ll_backend.layout.c"
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
#line 7979 "ll_backend.layout.c"
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
#line 7999 "ll_backend.layout.c"
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
#line 8019 "ll_backend.layout.c"
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
#line 8039 "ll_backend.layout.c"
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
#line 8059 "ll_backend.layout.c"
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
#line 8079 "ll_backend.layout.c"
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
#line 8099 "ll_backend.layout.c"
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
#line 8119 "ll_backend.layout.c"
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
#line 8139 "ll_backend.layout.c"
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

#line 8320 "ll_backend.layout.c"
        {
#line 8322 "ll_backend.layout.c"
          ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__layout_scalar_common_1[3], ((MR_Box) (ll_backend__layout__V_3_3)), ((MR_Box) (ll_backend__layout__V_22_22)));
        }
#line 212 "layout.m"
        if (ll_backend__layout__succeeded)
#line 212 "layout.m"
          {
#line 8329 "ll_backend.layout.c"
            {
#line 8331 "ll_backend.layout.c"
              ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_slot_name_0_0(ll_backend__layout__V_4_4, ll_backend__layout__V_23_23);
            }
#line 212 "layout.m"
            if (ll_backend__layout__succeeded)
#line 212 "layout.m"
              {
#line 8338 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_5_5 == ll_backend__layout__V_24_24);
#line 212 "layout.m"
                if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                  {
#line 8344 "ll_backend.layout.c"
                    ll_backend__layout__TypeInfo_44_44 = (MR_Word) &ll_backend__layout_scalar_common_1[11];
#line 8346 "ll_backend.layout.c"
                    {
#line 8348 "ll_backend.layout.c"
                      ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_44_44, ((MR_Box) (ll_backend__layout__V_6_6)), ((MR_Box) (ll_backend__layout__V_25_25)));
                    }
#line 212 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                      {
#line 8355 "ll_backend.layout.c"
                        ll_backend__layout__TypeInfo_45_45 = (MR_Word) &ll_backend__layout_scalar_common_1[3];
#line 8357 "ll_backend.layout.c"
                        {
#line 8359 "ll_backend.layout.c"
                          ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_45_45, ((MR_Box) (ll_backend__layout__V_7_7)), ((MR_Box) (ll_backend__layout__V_26_26)));
                        }
#line 212 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                          {
#line 8366 "ll_backend.layout.c"
                            ll_backend__layout__succeeded = (ll_backend__layout__V_8_8 == ll_backend__layout__V_27_27);
#line 212 "layout.m"
                            if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                              {
#line 8372 "ll_backend.layout.c"
                                ll_backend__layout__TypeInfo_46_46 = (MR_Word) &ll_backend__layout_scalar_common_1[3];
#line 8374 "ll_backend.layout.c"
                                {
#line 8376 "ll_backend.layout.c"
                                  ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_46_46, ((MR_Box) (ll_backend__layout__V_9_9)), ((MR_Box) (ll_backend__layout__V_28_28)));
                                }
#line 212 "layout.m"
                                if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                  {
#line 8383 "ll_backend.layout.c"
                                    ll_backend__layout__succeeded = (ll_backend__layout__V_10_10 == ll_backend__layout__V_29_29);
#line 212 "layout.m"
                                    if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                      {
#line 8389 "ll_backend.layout.c"
                                        ll_backend__layout__succeeded = (ll_backend__layout__V_11_11 == ll_backend__layout__V_30_30);
#line 212 "layout.m"
                                        if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                          {
#line 8395 "ll_backend.layout.c"
                                            ll_backend__layout__succeeded = (ll_backend__layout__V_12_12 == ll_backend__layout__V_31_31);
#line 212 "layout.m"
                                            if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                              {
#line 8401 "ll_backend.layout.c"
                                                ll_backend__layout__TypeInfo_47_47 = (MR_Word) &ll_backend__layout_scalar_common_1[2];
#line 8403 "ll_backend.layout.c"
                                                {
#line 8405 "ll_backend.layout.c"
                                                  ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_47_47, ((MR_Box) (ll_backend__layout__V_13_13)), ((MR_Box) (ll_backend__layout__V_32_32)));
                                                }
#line 212 "layout.m"
                                                if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                                  {
#line 8412 "ll_backend.layout.c"
                                                    ll_backend__layout__TypeInfo_48_48 = (MR_Word) &ll_backend__layout_scalar_common_1[2];
#line 8414 "ll_backend.layout.c"
                                                    {
#line 8416 "ll_backend.layout.c"
                                                      ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_48_48, ((MR_Box) (ll_backend__layout__V_14_14)), ((MR_Box) (ll_backend__layout__V_33_33)));
                                                    }
#line 212 "layout.m"
                                                    if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                                      {
#line 8423 "ll_backend.layout.c"
                                                        ll_backend__layout__TypeInfo_49_49 = (MR_Word) &ll_backend__layout_scalar_common_1[2];
#line 8425 "ll_backend.layout.c"
                                                        {
#line 8427 "ll_backend.layout.c"
                                                          ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_49_49, ((MR_Box) (ll_backend__layout__V_15_15)), ((MR_Box) (ll_backend__layout__V_34_34)));
                                                        }
#line 212 "layout.m"
                                                        if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                                          {
#line 8434 "ll_backend.layout.c"
                                                            ll_backend__layout__TypeInfo_50_50 = (MR_Word) &ll_backend__layout_scalar_common_1[2];
#line 8436 "ll_backend.layout.c"
                                                            {
#line 8438 "ll_backend.layout.c"
                                                              ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_50_50, ((MR_Box) (ll_backend__layout__V_16_16)), ((MR_Box) (ll_backend__layout__V_35_35)));
                                                            }
#line 212 "layout.m"
                                                            if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                                              {
#line 8445 "ll_backend.layout.c"
                                                                {
#line 8447 "ll_backend.layout.c"
                                                                  ll_backend__layout__succeeded = parse_tree__prog_data____Unify____eval_method_0_0(ll_backend__layout__V_17_17, ll_backend__layout__V_36_36);
                                                                }
#line 212 "layout.m"
                                                                if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                                                  {
#line 8454 "ll_backend.layout.c"
                                                                    ll_backend__layout__TypeInfo_52_52 = (MR_Word) &ll_backend__layout_scalar_common_1[2];
#line 8456 "ll_backend.layout.c"
                                                                    {
#line 8458 "ll_backend.layout.c"
                                                                      ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_52_52, ((MR_Box) (ll_backend__layout__V_18_18)), ((MR_Box) (ll_backend__layout__V_37_37)));
                                                                    }
#line 212 "layout.m"
                                                                    if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                                                      {
#line 8465 "ll_backend.layout.c"
                                                                        ll_backend__layout__TypeInfo_53_53 = (MR_Word) &ll_backend__layout_scalar_common_1[2];
#line 8467 "ll_backend.layout.c"
                                                                        {
#line 8469 "ll_backend.layout.c"
                                                                          ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_53_53, ((MR_Box) (ll_backend__layout__V_19_19)), ((MR_Box) (ll_backend__layout__V_38_38)));
                                                                        }
#line 212 "layout.m"
                                                                        if (ll_backend__layout__succeeded)
#line 212 "layout.m"
                                                                          {
#line 8476 "ll_backend.layout.c"
                                                                            {
#line 8478 "ll_backend.layout.c"
                                                                              ll_backend__layout__succeeded = libs__trace_params____Unify____trace_level_0_0(ll_backend__layout__V_20_20, ll_backend__layout__V_39_39);
                                                                            }
#line 212 "layout.m"
                                                                            if (ll_backend__layout__succeeded)
#line 8483 "ll_backend.layout.c"
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
#line 8552 "ll_backend.layout.c"
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
#line 8578 "ll_backend.layout.c"
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
#line 8598 "ll_backend.layout.c"
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

#line 8665 "ll_backend.layout.c"
        {
#line 8667 "ll_backend.layout.c"
          ll_backend__layout__succeeded = hlds__hlds_rtti____Unify____rtti_proc_label_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_6_6);
        }
#line 262 "layout.m"
        if (ll_backend__layout__succeeded)
#line 262 "layout.m"
          {
#line 8674 "ll_backend.layout.c"
            {
#line 8676 "ll_backend.layout.c"
              ll_backend__layout__succeeded = ll_backend__layout____Unify____proc_layout_stack_traversal_0_0(ll_backend__layout__V_4_4, ll_backend__layout__V_7_7);
            }
#line 262 "layout.m"
            if (ll_backend__layout__succeeded)
#line 8681 "ll_backend.layout.c"
              {
#line 8683 "ll_backend.layout.c"
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
#line 8721 "ll_backend.layout.c"
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
#line 8751 "ll_backend.layout.c"
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
#line 8771 "ll_backend.layout.c"
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
#line 8791 "ll_backend.layout.c"
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

#line 8872 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_3_3 == ll_backend__layout__V_7_7);
#line 311 "layout.m"
        if (ll_backend__layout__succeeded)
#line 311 "layout.m"
          {
#line 8878 "ll_backend.layout.c"
            ll_backend__layout__TypeInfo_13_13 = (MR_Word) &ll_backend__layout_scalar_common_1[10];
#line 8880 "ll_backend.layout.c"
            {
#line 8882 "ll_backend.layout.c"
              ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_13_13, ((MR_Box) (ll_backend__layout__V_4_4)), ((MR_Box) (ll_backend__layout__V_8_8)));
            }
#line 311 "layout.m"
            if (ll_backend__layout__succeeded)
#line 311 "layout.m"
              {
#line 8889 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_5_5 == ll_backend__layout__V_9_9);
#line 311 "layout.m"
                if (ll_backend__layout__succeeded)
#line 311 "layout.m"
                  {
#line 8895 "ll_backend.layout.c"
                    ll_backend__layout__TypeInfo_14_14 = (MR_Word) &ll_backend__layout_scalar_common_1[10];
#line 8897 "ll_backend.layout.c"
                    {
#line 8899 "ll_backend.layout.c"
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
#line 8941 "ll_backend.layout.c"
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
#line 8979 "ll_backend.layout.c"
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
#line 8999 "ll_backend.layout.c"
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
#line 9019 "ll_backend.layout.c"
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
#line 9039 "ll_backend.layout.c"
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
#line 9059 "ll_backend.layout.c"
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

#line 9152 "ll_backend.layout.c"
        {
#line 9154 "ll_backend.layout.c"
          ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__layout_scalar_common_1[7], ((MR_Box) (ll_backend__layout__V_3_3)), ((MR_Box) (ll_backend__layout__V_9_9)));
        }
#line 320 "layout.m"
        if (ll_backend__layout__succeeded)
#line 320 "layout.m"
          {
#line 9161 "ll_backend.layout.c"
            ll_backend__layout__TypeInfo_18_18 = (MR_Word) &ll_backend__layout_scalar_common_1[8];
#line 9163 "ll_backend.layout.c"
            {
#line 9165 "ll_backend.layout.c"
              ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_18_18, ((MR_Box) (ll_backend__layout__V_4_4)), ((MR_Box) (ll_backend__layout__V_10_10)));
            }
#line 320 "layout.m"
            if (ll_backend__layout__succeeded)
#line 320 "layout.m"
              {
#line 9172 "ll_backend.layout.c"
                {
#line 9174 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = libs__trace_params____Unify____trace_level_0_0(ll_backend__layout__V_5_5, ll_backend__layout__V_11_11);
                }
#line 320 "layout.m"
                if (ll_backend__layout__succeeded)
#line 320 "layout.m"
                  {
#line 9181 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = (ll_backend__layout__V_6_6 == ll_backend__layout__V_12_12);
#line 320 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 320 "layout.m"
                      {
#line 9187 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = (ll_backend__layout__V_7_7 == ll_backend__layout__V_13_13);
#line 320 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 320 "layout.m"
                          {
#line 9193 "ll_backend.layout.c"
                            ll_backend__layout__TypeInfo_20_20 = (MR_Word) &ll_backend__layout_scalar_common_1[9];
#line 9195 "ll_backend.layout.c"
                            {
#line 9197 "ll_backend.layout.c"
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
#line 9243 "ll_backend.layout.c"
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
#line 9277 "ll_backend.layout.c"
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
#line 9297 "ll_backend.layout.c"
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
#line 9317 "ll_backend.layout.c"
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
#line 9337 "ll_backend.layout.c"
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

#line 9424 "ll_backend.layout.c"
        {
#line 9426 "ll_backend.layout.c"
          ll_backend__layout__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_8_8);
        }
#line 297 "layout.m"
        if (ll_backend__layout__succeeded)
#line 297 "layout.m"
          {
#line 9433 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 == ll_backend__layout__V_9_9);
#line 297 "layout.m"
            if (ll_backend__layout__succeeded)
#line 297 "layout.m"
              {
#line 9439 "ll_backend.layout.c"
                {
#line 9441 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = ll_backend__layout____Unify____string_with_0s_0_0(ll_backend__layout__V_5_5, ll_backend__layout__V_10_10);
                }
#line 297 "layout.m"
                if (ll_backend__layout__succeeded)
#line 297 "layout.m"
                  {
#line 9448 "ll_backend.layout.c"
                    ll_backend__layout__TypeInfo_16_16 = (MR_Word) &ll_backend__layout_scalar_common_1[5];
#line 9450 "ll_backend.layout.c"
                    {
#line 9452 "ll_backend.layout.c"
                      ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_16_16, ((MR_Box) (ll_backend__layout__V_6_6)), ((MR_Box) (ll_backend__layout__V_11_11)));
                    }
#line 297 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 297 "layout.m"
                      {
#line 9459 "ll_backend.layout.c"
                        ll_backend__layout__TypeInfo_17_17 = (MR_Word) &ll_backend__layout_scalar_common_1[6];
#line 9461 "ll_backend.layout.c"
                        {
#line 9463 "ll_backend.layout.c"
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
#line 9507 "ll_backend.layout.c"
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
#line 9519 "ll_backend.layout.c"
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
#line 9536 "ll_backend.layout.c"
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
#line 9558 "ll_backend.layout.c"
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
#line 9578 "ll_backend.layout.c"
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
#line 9598 "ll_backend.layout.c"
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
#line 9708 "ll_backend.layout.c"
              ll_backend__layout__TypeInfo_15_15 = (MR_Word) &ll_backend__layout_scalar_common_1[3];
#line 9710 "ll_backend.layout.c"
              {
#line 9712 "ll_backend.layout.c"
                ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_15_15, ((MR_Box) (ll_backend__layout__V_5_5)), ((MR_Box) (ll_backend__layout__V_9_9)));
              }
#line 249 "layout.m"
              if (ll_backend__layout__succeeded)
#line 249 "layout.m"
                {
#line 9719 "ll_backend.layout.c"
                  ll_backend__layout__TypeInfo_16_16 = (MR_Word) &ll_backend__layout_scalar_common_1[3];
#line 9721 "ll_backend.layout.c"
                  {
#line 9723 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_16_16, ((MR_Box) (ll_backend__layout__V_6_6)), ((MR_Box) (ll_backend__layout__V_10_10)));
                  }
#line 249 "layout.m"
                  if (ll_backend__layout__succeeded)
#line 249 "layout.m"
                    {
#line 9730 "ll_backend.layout.c"
                      ll_backend__layout__TypeInfo_17_17 = (MR_Word) &ll_backend__layout_scalar_common_1[3];
#line 9732 "ll_backend.layout.c"
                      {
#line 9734 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_17_17, ((MR_Box) (ll_backend__layout__V_7_7)), ((MR_Box) (ll_backend__layout__V_11_11)));
                      }
#line 249 "layout.m"
                      if (ll_backend__layout__succeeded)
#line 9739 "ll_backend.layout.c"
                        {
#line 9741 "ll_backend.layout.c"
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
#line 9783 "ll_backend.layout.c"
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
#line 9805 "ll_backend.layout.c"
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

#line 9866 "ll_backend.layout.c"
        {
#line 9868 "ll_backend.layout.c"
          ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_array_name_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_5_5);
        }
#line 355 "layout.m"
        if (ll_backend__layout__succeeded)
#line 9873 "ll_backend.layout.c"
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
#line 9908 "ll_backend.layout.c"
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
#line 9933 "ll_backend.layout.c"
          *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 1;
#line 418 "layout.m"
        else
#line 418 "layout.m"
          {
#line 418 "layout.m"
            ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 > ll_backend__layout__V_5_5);
#line 418 "layout.m"
            if (ll_backend__layout__succeeded)
#line 9943 "ll_backend.layout.c"
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
#line 9988 "ll_backend.layout.c"
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
#line 10008 "ll_backend.layout.c"
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
#line 10063 "ll_backend.layout.c"
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
#line 10116 "ll_backend.layout.c"
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
#line 10169 "ll_backend.layout.c"
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
#line 10222 "ll_backend.layout.c"
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
#line 10305 "ll_backend.layout.c"
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
#line 10424 "ll_backend.layout.c"
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
#line 10444 "ll_backend.layout.c"
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
#line 10505 "ll_backend.layout.c"
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
#line 10525 "ll_backend.layout.c"
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
#line 10580 "ll_backend.layout.c"
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
#line 10633 "ll_backend.layout.c"
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
#line 10716 "ll_backend.layout.c"
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
#line 10895 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 1;
#line 418 "layout.m"
    else
#line 418 "layout.m"
      if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 10901 "ll_backend.layout.c"
        *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 2;
#line 418 "layout.m"
      else
#line 418 "layout.m"
        if (((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 10907 "ll_backend.layout.c"
          *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 0;
#line 418 "layout.m"
        else
#line 418 "layout.m"
          if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 10913 "ll_backend.layout.c"
            *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 4;
#line 418 "layout.m"
          else
#line 418 "layout.m"
            if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 10919 "ll_backend.layout.c"
              *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 3;
#line 418 "layout.m"
            else
#line 418 "layout.m"
              if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 10925 "ll_backend.layout.c"
                *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 18;
#line 418 "layout.m"
              else
#line 418 "layout.m"
                if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 10931 "ll_backend.layout.c"
                  *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 10;
#line 418 "layout.m"
                else
#line 418 "layout.m"
                  if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 10937 "ll_backend.layout.c"
                    *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 9;
#line 418 "layout.m"
                  else
#line 418 "layout.m"
                    if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 10943 "ll_backend.layout.c"
                      *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 15;
#line 418 "layout.m"
                    else
#line 418 "layout.m"
                      if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 10949 "ll_backend.layout.c"
                        *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 12;
#line 418 "layout.m"
                      else
#line 418 "layout.m"
                        if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 10955 "ll_backend.layout.c"
                          *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 13;
#line 418 "layout.m"
                        else
#line 418 "layout.m"
                          if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 10961 "ll_backend.layout.c"
                            *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 11;
#line 418 "layout.m"
                          else
#line 418 "layout.m"
                            if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 10967 "ll_backend.layout.c"
                              *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 14;
#line 418 "layout.m"
                            else
#line 418 "layout.m"
                              if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 10973 "ll_backend.layout.c"
                                *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 6;
#line 418 "layout.m"
                              else
#line 418 "layout.m"
                                if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 10979 "ll_backend.layout.c"
                                  *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 8;
#line 418 "layout.m"
                                else
#line 418 "layout.m"
                                  if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 10985 "ll_backend.layout.c"
                                    *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 16;
#line 418 "layout.m"
                                  else
#line 418 "layout.m"
                                    if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 10991 "ll_backend.layout.c"
                                      *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 7;
#line 418 "layout.m"
                                    else
#line 418 "layout.m"
                                      if (((((MR_tag((MR_Word) ll_backend__layout__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__layout__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 10997 "ll_backend.layout.c"
                                        *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 5;
#line 418 "layout.m"
                                      else
#line 11001 "ll_backend.layout.c"
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
#line 11063 "ll_backend.layout.c"
              {
#line 11065 "ll_backend.layout.c"
                ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__layout__V_7_7, ll_backend__layout__V_10_10);
              }
#line 418 "layout.m"
              if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                {
#line 11072 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = (ll_backend__layout__V_8_8 == ll_backend__layout__V_11_11);
#line 418 "layout.m"
                  if (ll_backend__layout__succeeded)
#line 11076 "ll_backend.layout.c"
                    {
#line 11078 "ll_backend.layout.c"
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
#line 11112 "ll_backend.layout.c"
                {
#line 11114 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__layout__V_13_13, ll_backend__layout__V_15_15);
                }
#line 418 "layout.m"
                if (ll_backend__layout__succeeded)
#line 11119 "ll_backend.layout.c"
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
#line 11150 "ll_backend.layout.c"
                  {
#line 11152 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = hlds__hlds_rtti____Unify____rtti_proc_label_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_5_5);
                  }
#line 418 "layout.m"
                  if (ll_backend__layout__succeeded)
#line 11157 "ll_backend.layout.c"
                    {
#line 11159 "ll_backend.layout.c"
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
#line 11191 "ll_backend.layout.c"
                    {
#line 11193 "ll_backend.layout.c"
                      ll_backend__layout__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__layout__V_21_21, ll_backend__layout__V_23_23);
                    }
#line 418 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 11198 "ll_backend.layout.c"
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
#line 11229 "ll_backend.layout.c"
                      {
#line 11231 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__layout__V_17_17, ll_backend__layout__V_19_19);
                      }
#line 418 "layout.m"
                      if (ll_backend__layout__succeeded)
#line 11236 "ll_backend.layout.c"
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
#line 11261 "ll_backend.layout.c"
                        {
#line 11263 "ll_backend.layout.c"
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
#line 11295 "ll_backend.layout.c"
                          {
#line 11297 "ll_backend.layout.c"
                            ll_backend__layout__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__layout__V_37_37, ll_backend__layout__V_39_39);
                          }
#line 418 "layout.m"
                          if (ll_backend__layout__succeeded)
#line 11302 "ll_backend.layout.c"
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
#line 11327 "ll_backend.layout.c"
                            {
#line 11329 "ll_backend.layout.c"
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
#line 11355 "ll_backend.layout.c"
                              {
#line 11357 "ll_backend.layout.c"
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
#line 11395 "ll_backend.layout.c"
                                {
#line 11397 "ll_backend.layout.c"
                                  ll_backend__layout__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__layout__V_45_45, ll_backend__layout__V_48_48);
                                }
#line 418 "layout.m"
                                if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                                  {
#line 11404 "ll_backend.layout.c"
                                    ll_backend__layout__succeeded = (ll_backend__layout__V_46_46 == ll_backend__layout__V_49_49);
#line 418 "layout.m"
                                    if (ll_backend__layout__succeeded)
#line 11408 "ll_backend.layout.c"
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
#line 11447 "ll_backend.layout.c"
                                  {
#line 11449 "ll_backend.layout.c"
                                    ll_backend__layout__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__layout__V_51_51, ll_backend__layout__V_54_54);
                                  }
#line 418 "layout.m"
                                  if (ll_backend__layout__succeeded)
#line 418 "layout.m"
                                    {
#line 11456 "ll_backend.layout.c"
                                      ll_backend__layout__succeeded = (ll_backend__layout__V_52_52 == ll_backend__layout__V_55_55);
#line 418 "layout.m"
                                      if (ll_backend__layout__succeeded)
#line 11460 "ll_backend.layout.c"
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
#line 11493 "ll_backend.layout.c"
                                    {
#line 11495 "ll_backend.layout.c"
                                      ll_backend__layout__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__layout__V_41_41, ll_backend__layout__V_43_43);
                                    }
#line 418 "layout.m"
                                    if (ll_backend__layout__succeeded)
#line 11500 "ll_backend.layout.c"
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
#line 11531 "ll_backend.layout.c"
                                      {
#line 11533 "ll_backend.layout.c"
                                        ll_backend__layout__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__layout__V_57_57, ll_backend__layout__V_59_59);
                                      }
#line 418 "layout.m"
                                      if (ll_backend__layout__succeeded)
#line 11538 "ll_backend.layout.c"
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
#line 11563 "ll_backend.layout.c"
                                        {
#line 11565 "ll_backend.layout.c"
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
#line 11597 "ll_backend.layout.c"
                                          {
#line 11599 "ll_backend.layout.c"
                                            ll_backend__layout__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__layout__V_31_31, ll_backend__layout__V_33_33);
                                          }
#line 418 "layout.m"
                                          if (ll_backend__layout__succeeded)
#line 11604 "ll_backend.layout.c"
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
#line 11629 "ll_backend.layout.c"
                                            {
#line 11631 "ll_backend.layout.c"
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
#line 11657 "ll_backend.layout.c"
                                              {
#line 11659 "ll_backend.layout.c"
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
#line 11685 "ll_backend.layout.c"
                                                {
#line 11687 "ll_backend.layout.c"
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
#line 11711 "ll_backend.layout.c"
                                                {
#line 11713 "ll_backend.layout.c"
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
#line 11751 "ll_backend.layout.c"
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
#line 11776 "ll_backend.layout.c"
          *ll_backend__layout__HeadVar__1_1 = (MR_Integer) 1;
#line 358 "layout.m"
        else
#line 358 "layout.m"
          {
#line 358 "layout.m"
            ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 > ll_backend__layout__V_5_5);
#line 358 "layout.m"
            if (ll_backend__layout__succeeded)
#line 11786 "ll_backend.layout.c"
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
#line 12085 "ll_backend.layout.c"
      *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 18;
#line 358 "layout.m"
    else
#line 358 "layout.m"
      if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 12091 "ll_backend.layout.c"
        *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 1;
#line 358 "layout.m"
      else
#line 358 "layout.m"
        if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 12097 "ll_backend.layout.c"
          *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 3;
#line 358 "layout.m"
        else
#line 358 "layout.m"
          if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 12103 "ll_backend.layout.c"
            *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 13;
#line 358 "layout.m"
          else
#line 358 "layout.m"
            if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 12109 "ll_backend.layout.c"
              *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 15;
#line 358 "layout.m"
            else
#line 358 "layout.m"
              if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 12115 "ll_backend.layout.c"
                *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 16;
#line 358 "layout.m"
              else
#line 358 "layout.m"
                if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 12121 "ll_backend.layout.c"
                  *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 11;
#line 358 "layout.m"
                else
#line 358 "layout.m"
                  if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 12127 "ll_backend.layout.c"
                    *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 10;
#line 358 "layout.m"
                  else
#line 358 "layout.m"
                    if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 12133 "ll_backend.layout.c"
                      *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 7;
#line 358 "layout.m"
                    else
#line 358 "layout.m"
                      if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 12139 "ll_backend.layout.c"
                        *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 9;
#line 358 "layout.m"
                      else
#line 358 "layout.m"
                        if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 12145 "ll_backend.layout.c"
                          *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 8;
#line 358 "layout.m"
                        else
#line 358 "layout.m"
                          if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 12151 "ll_backend.layout.c"
                            *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 14;
#line 358 "layout.m"
                          else
#line 358 "layout.m"
                            if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 12157 "ll_backend.layout.c"
                              *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 12;
#line 358 "layout.m"
                            else
#line 358 "layout.m"
                              if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 12163 "ll_backend.layout.c"
                                *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 0;
#line 358 "layout.m"
                              else
#line 358 "layout.m"
                                if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 12169 "ll_backend.layout.c"
                                  *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 2;
#line 358 "layout.m"
                                else
#line 358 "layout.m"
                                  if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 12175 "ll_backend.layout.c"
                                    *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 17;
#line 358 "layout.m"
                                  else
#line 358 "layout.m"
                                    if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 12181 "ll_backend.layout.c"
                                      *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 4;
#line 358 "layout.m"
                                    else
#line 358 "layout.m"
                                      if ((ll_backend__layout__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 12187 "ll_backend.layout.c"
                                        *ll_backend__layout__HeadVar__2_2 = (MR_Integer) 5;
#line 358 "layout.m"
                                      else
#line 12191 "ll_backend.layout.c"
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
#line 12509 "ll_backend.layout.c"
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
#line 12563 "ll_backend.layout.c"
  {
#line 12565 "ll_backend.layout.c"
    MR_bool ll_backend__layout__succeeded = (ll_backend__layout__HeadVar__2_1 == ll_backend__layout__HeadVar__2_2);

#line 12568 "ll_backend.layout.c"
    return ll_backend__layout__succeeded;
#line 12570 "ll_backend.layout.c"
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
#line 12599 "ll_backend.layout.c"
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
#line 12633 "ll_backend.layout.c"
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
#line 12653 "ll_backend.layout.c"
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
#line 12673 "ll_backend.layout.c"
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
#line 12693 "ll_backend.layout.c"
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

#line 12772 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_3_3 == ll_backend__layout__V_8_8);
#line 93 "layout.m"
        if (ll_backend__layout__succeeded)
#line 93 "layout.m"
          {
#line 12778 "ll_backend.layout.c"
            {
#line 12780 "ll_backend.layout.c"
              ll_backend__layout__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__layout__V_4_4, ll_backend__layout__V_9_9);
            }
#line 93 "layout.m"
            if (ll_backend__layout__succeeded)
#line 93 "layout.m"
              {
#line 12787 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_5_5 == ll_backend__layout__V_10_10);
#line 93 "layout.m"
                if (ll_backend__layout__succeeded)
#line 93 "layout.m"
                  {
#line 12793 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = (ll_backend__layout__V_6_6 == ll_backend__layout__V_11_11);
#line 93 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 12797 "ll_backend.layout.c"
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
#line 12838 "ll_backend.layout.c"
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
#line 12876 "ll_backend.layout.c"
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
#line 12896 "ll_backend.layout.c"
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
#line 12916 "ll_backend.layout.c"
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
#line 12936 "ll_backend.layout.c"
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
#line 12956 "ll_backend.layout.c"
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

#line 13041 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_3_3 == ll_backend__layout__V_9_9);
#line 103 "layout.m"
        if (ll_backend__layout__succeeded)
#line 103 "layout.m"
          {
#line 13047 "ll_backend.layout.c"
            {
#line 13049 "ll_backend.layout.c"
              ll_backend__layout__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__layout__V_4_4, ll_backend__layout__V_10_10);
            }
#line 103 "layout.m"
            if (ll_backend__layout__succeeded)
#line 103 "layout.m"
              {
#line 13056 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (ll_backend__layout__V_5_5 == ll_backend__layout__V_11_11);
#line 103 "layout.m"
                if (ll_backend__layout__succeeded)
#line 103 "layout.m"
                  {
#line 13062 "ll_backend.layout.c"
                    ll_backend__layout__succeeded = (ll_backend__layout__V_6_6 == ll_backend__layout__V_12_12);
#line 103 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 103 "layout.m"
                      {
#line 13068 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = (ll_backend__layout__V_7_7 == ll_backend__layout__V_13_13);
#line 103 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 13072 "ll_backend.layout.c"
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
#line 13115 "ll_backend.layout.c"
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
#line 13137 "ll_backend.layout.c"
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

#line 13198 "ll_backend.layout.c"
        {
#line 13200 "ll_backend.layout.c"
          ll_backend__layout__succeeded = ll_backend__layout____Unify____basic_label_layout_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_5_5);
        }
#line 120 "layout.m"
        if (ll_backend__layout__succeeded)
#line 13205 "ll_backend.layout.c"
          {
#line 13207 "ll_backend.layout.c"
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
#line 13243 "ll_backend.layout.c"
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

#line 13301 "ll_backend.layout.c"
        {
#line 13303 "ll_backend.layout.c"
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
#line 13339 "ll_backend.layout.c"
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
#line 13361 "ll_backend.layout.c"
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

#line 13422 "ll_backend.layout.c"
        {
#line 13424 "ll_backend.layout.c"
          ll_backend__layout__succeeded = ll_backend__layout____Unify____basic_label_layout_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_5_5);
        }
#line 127 "layout.m"
        if (ll_backend__layout__succeeded)
#line 13429 "ll_backend.layout.c"
          {
#line 13431 "ll_backend.layout.c"
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
#line 13467 "ll_backend.layout.c"
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
#line 13489 "ll_backend.layout.c"
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

#line 13556 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (strcmp(ll_backend__layout__V_3_3, ll_backend__layout__V_5_5) == 0);
#line 291 "layout.m"
        if (ll_backend__layout__succeeded)
#line 291 "layout.m"
          {
#line 13562 "ll_backend.layout.c"
            ll_backend__layout__TypeInfo_9_9 = (MR_Word) &ll_backend__layout_scalar_common_1[4];
#line 13564 "ll_backend.layout.c"
            {
#line 13566 "ll_backend.layout.c"
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
#line 13604 "ll_backend.layout.c"
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
#line 13626 "ll_backend.layout.c"
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

#line 13693 "ll_backend.layout.c"
        {
#line 13695 "ll_backend.layout.c"
          ll_backend__layout__succeeded = parse_tree__prog_data____Unify____event_set_data_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_5_5);
        }
#line 282 "layout.m"
        if (ll_backend__layout__succeeded)
#line 282 "layout.m"
          {
#line 13702 "ll_backend.layout.c"
            ll_backend__layout__TypeInfo_10_10 = (MR_Word) &ll_backend__layout_scalar_common_2[0];
#line 13704 "ll_backend.layout.c"
            {
#line 13706 "ll_backend.layout.c"
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
#line 13744 "ll_backend.layout.c"
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
#line 13770 "ll_backend.layout.c"
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
#line 13790 "ll_backend.layout.c"
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

#line 13857 "ll_backend.layout.c"
        ll_backend__layout__succeeded = (ll_backend__layout__V_3_3 == ll_backend__layout__V_6_6);
#line 160 "layout.m"
        if (ll_backend__layout__succeeded)
#line 160 "layout.m"
          {
#line 13863 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 == ll_backend__layout__V_7_7);
#line 160 "layout.m"
            if (ll_backend__layout__succeeded)
#line 13867 "ll_backend.layout.c"
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
#line 13904 "ll_backend.layout.c"
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
#line 13933 "ll_backend.layout.c"
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
#line 13946 "ll_backend.layout.c"
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
#line 14014 "ll_backend.layout.c"
              {
#line 14016 "ll_backend.layout.c"
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
#line 14040 "ll_backend.layout.c"
              {
#line 14042 "ll_backend.layout.c"
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
#line 14080 "ll_backend.layout.c"
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
#line 14126 "ll_backend.layout.c"
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
#line 14146 "ll_backend.layout.c"
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
#line 14166 "ll_backend.layout.c"
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
#line 14186 "ll_backend.layout.c"
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
#line 14206 "ll_backend.layout.c"
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
#line 14226 "ll_backend.layout.c"
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
#line 14246 "ll_backend.layout.c"
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

#line 14343 "ll_backend.layout.c"
        {
#line 14345 "ll_backend.layout.c"
          ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_11_11);
        }
#line 56 "layout.m"
        if (ll_backend__layout__succeeded)
#line 56 "layout.m"
          {
#line 14352 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 == ll_backend__layout__V_12_12);
#line 56 "layout.m"
            if (ll_backend__layout__succeeded)
#line 56 "layout.m"
              {
#line 14358 "ll_backend.layout.c"
                {
#line 14360 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__layout__V_5_5, ll_backend__layout__V_13_13);
                }
#line 56 "layout.m"
                if (ll_backend__layout__succeeded)
#line 56 "layout.m"
                  {
#line 14367 "ll_backend.layout.c"
                    {
#line 14369 "ll_backend.layout.c"
                      ll_backend__layout__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__layout__V_6_6, ll_backend__layout__V_14_14);
                    }
#line 56 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 56 "layout.m"
                      {
#line 14376 "ll_backend.layout.c"
                        ll_backend__layout__succeeded = (strcmp(ll_backend__layout__V_7_7, ll_backend__layout__V_15_15) == 0);
#line 56 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 56 "layout.m"
                          {
#line 14382 "ll_backend.layout.c"
                            ll_backend__layout__succeeded = (ll_backend__layout__V_8_8 == ll_backend__layout__V_16_16);
#line 56 "layout.m"
                            if (ll_backend__layout__succeeded)
#line 56 "layout.m"
                              {
#line 14388 "ll_backend.layout.c"
                                {
#line 14390 "ll_backend.layout.c"
                                  ll_backend__layout__succeeded = hlds__hlds_pred____Unify____pred_origin_0_0(ll_backend__layout__V_9_9, ll_backend__layout__V_17_17);
                                }
#line 56 "layout.m"
                                if (ll_backend__layout__succeeded)
#line 14395 "ll_backend.layout.c"
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
#line 14442 "ll_backend.layout.c"
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
#line 14488 "ll_backend.layout.c"
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
#line 14508 "ll_backend.layout.c"
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
#line 14528 "ll_backend.layout.c"
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
#line 14548 "ll_backend.layout.c"
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
#line 14568 "ll_backend.layout.c"
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
#line 14588 "ll_backend.layout.c"
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
#line 14608 "ll_backend.layout.c"
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

#line 14717 "ll_backend.layout.c"
        {
#line 14719 "ll_backend.layout.c"
          ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_11_11);
        }
#line 81 "layout.m"
        if (ll_backend__layout__succeeded)
#line 81 "layout.m"
          {
#line 14726 "ll_backend.layout.c"
            ll_backend__layout__succeeded = (ll_backend__layout__V_4_4 == ll_backend__layout__V_12_12);
#line 81 "layout.m"
            if (ll_backend__layout__succeeded)
#line 81 "layout.m"
              {
#line 14732 "ll_backend.layout.c"
                {
#line 14734 "ll_backend.layout.c"
                  ll_backend__layout__succeeded = ll_backend__layout____Unify____layout_name_0_0(ll_backend__layout__V_5_5, ll_backend__layout__V_13_13);
                }
#line 81 "layout.m"
                if (ll_backend__layout__succeeded)
#line 81 "layout.m"
                  {
#line 14741 "ll_backend.layout.c"
                    ll_backend__layout__TypeInfo_22_22 = (MR_Word) &ll_backend__layout_scalar_common_1[0];
#line 14743 "ll_backend.layout.c"
                    {
#line 14745 "ll_backend.layout.c"
                      ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_22_22, ((MR_Box) (ll_backend__layout__V_6_6)), ((MR_Box) (ll_backend__layout__V_14_14)));
                    }
#line 81 "layout.m"
                    if (ll_backend__layout__succeeded)
#line 81 "layout.m"
                      {
#line 14752 "ll_backend.layout.c"
                        ll_backend__layout__TypeInfo_23_23 = (MR_Word) &ll_backend__layout_scalar_common_1[1];
#line 14754 "ll_backend.layout.c"
                        {
#line 14756 "ll_backend.layout.c"
                          ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_23_23, ((MR_Box) (ll_backend__layout__V_7_7)), ((MR_Box) (ll_backend__layout__V_15_15)));
                        }
#line 81 "layout.m"
                        if (ll_backend__layout__succeeded)
#line 81 "layout.m"
                          {
#line 14763 "ll_backend.layout.c"
                            ll_backend__layout__succeeded = (ll_backend__layout__V_8_8 == ll_backend__layout__V_16_16);
#line 81 "layout.m"
                            if (ll_backend__layout__succeeded)
#line 81 "layout.m"
                              {
#line 14769 "ll_backend.layout.c"
                                ll_backend__layout__TypeInfo_24_24 = (MR_Word) &ll_backend__layout_scalar_common_1[2];
#line 14771 "ll_backend.layout.c"
                                {
#line 14773 "ll_backend.layout.c"
                                  ll_backend__layout__succeeded = mercury__builtin__unify_2_p_0(ll_backend__layout__TypeInfo_24_24, ((MR_Box) (ll_backend__layout__V_9_9)), ((MR_Box) (ll_backend__layout__V_17_17)));
                                }
#line 81 "layout.m"
                                if (ll_backend__layout__succeeded)
#line 81 "layout.m"
                                  {
#line 14780 "ll_backend.layout.c"
                                    ll_backend__layout__TypeInfo_25_25 = (MR_Word) &ll_backend__layout_scalar_common_1[3];
#line 14782 "ll_backend.layout.c"
                                    {
#line 14784 "ll_backend.layout.c"
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
#line 14834 "ll_backend.layout.c"
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
#line 14864 "ll_backend.layout.c"
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
#line 14884 "ll_backend.layout.c"
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
#line 14904 "ll_backend.layout.c"
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

#line 14977 "ll_backend.layout.c"
        {
#line 14979 "ll_backend.layout.c"
          ll_backend__layout__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__layout__V_3_3, ll_backend__layout__V_7_7);
        }
#line 336 "layout.m"
        if (ll_backend__layout__succeeded)
#line 336 "layout.m"
          {
#line 14986 "ll_backend.layout.c"
            {
#line 14988 "ll_backend.layout.c"
              ll_backend__layout__succeeded = mercury__term____Unify____context_0_0(ll_backend__layout__V_4_4, ll_backend__layout__V_8_8);
            }
#line 336 "layout.m"
            if (ll_backend__layout__succeeded)
#line 336 "layout.m"
              {
#line 14995 "ll_backend.layout.c"
                ll_backend__layout__succeeded = (strcmp(ll_backend__layout__V_5_5, ll_backend__layout__V_9_9) == 0);
#line 336 "layout.m"
                if (ll_backend__layout__succeeded)
#line 14999 "ll_backend.layout.c"
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
