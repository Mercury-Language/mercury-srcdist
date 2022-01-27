/*
** Automatically generated from `global_data.m'
** by the Mercury compiler,
** version 13.05.2, configured for x86_64-apple-darwin12.5.0.
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


/* :- module ll_backend.global_data. */
/* :- implementation. */

/*
INIT mercury__ll_backend__global_data__init
ENDINIT
*/

#include "ll_backend.global_data.mih"


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
#include "ll_backend.code_info.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.trace_gen.mih"
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




#line 145 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_alloc_site_id_0__plain_ll_backend__layout__type_ctor_info_layout_slot_name_0;

#line 148 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_llds_type_0;

#line 151 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__global_data__list__ti_list_1ll_backend__llds__type_ctor_info_rval_0;

#line 154 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__global_data__list__pti_list_1__plain_list__ti_list_1ll_backend__llds__type_ctor_info_rval_0;

#line 157 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_rval_0;

#line 160 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__global_data__bimap__pti_bimap_2__plain_ll_backend__llds__type_ctor_info_common_cell_type_0__plain_ll_backend__llds__type_ctor_info_type_num_0;

#line 163 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_scalar_common_data_array_0;

#line 166 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_vector_common_data_array_0;

#line 169 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_type_num_0__plain_ll_backend__llds__type_ctor_info_type_num_0;

#line 172 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_type_num_0__plain_ll_backend__global_data__type_ctor_info_scalar_cell_group_0;

#line 175 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_data_id_0ll_backend__llds__type_ctor_info_data_id_0;

#line 178 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_type_num_0__plain_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_data_id_0ll_backend__llds__type_ctor_info_data_id_0;

#line 181 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_type_num_0__plain_ll_backend__global_data__type_ctor_info_vector_cell_group_0;

#line 184 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_common_cell_value_0;

#line 187 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__global_data__bimap__pti_bimap_2__plain_list__ti_list_1ll_backend__llds__type_ctor_info_rval_0__plain_ll_backend__llds__type_ctor_info_data_id_0;

#line 190 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_data_id_0__plain_ll_backend__llds__type_ctor_info_data_id_0;

#line 193 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__bimap__ti_bimap_2ll_backend__llds__type_ctor_info_common_cell_type_0ll_backend__llds__type_ctor_info_type_num_0;

#line 196 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0ll_backend__llds__type_ctor_info_type_num_0;

#line 199 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__llds__type_ctor_info_tabling_info_struct_0;

#line 202 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__continuation_info__type_ctor_info_proc_layout_info_0;

#line 205 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__global_data__list__ti_list_1ll_backend__layout__type_ctor_info_closure_proc_id_data_0;

#line 208 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__global_data__list__ti_list_1builtin__type_ctor_info_string_0;

#line 211 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__global_data__set_tree234__ti_set_tree234_1ll_backend__layout__type_ctor_info_alloc_site_info_0;

#line 214 "ll_backend.global_data.c"
static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_global_data_0_0[7];

#line 217 "ll_backend.global_data.c"
static const MR_ConstString ll_backend__global_data__ll_backend__global_data__field_names_global_data_0_0[7];

#line 220 "ll_backend.global_data.c"
static const MR_DuFunctorDesc ll_backend__global_data__ll_backend__global_data__du_functor_desc_global_data_0_0;

#line 223 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_global_data_0_0[1];

#line 226 "ll_backend.global_data.c"
static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_global_data_0[1];

#line 229 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_global_data_0[1];

#line 232 "ll_backend.global_data.c"
static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_global_data_0[1];

#line 235 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__global_data__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

#line 238 "ll_backend.global_data.c"
static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_global_data_remapping_0_0[2];

#line 241 "ll_backend.global_data.c"
static const MR_ConstString ll_backend__global_data__ll_backend__global_data__field_names_global_data_remapping_0_0[2];

#line 244 "ll_backend.global_data.c"
static const MR_DuFunctorDesc ll_backend__global_data__ll_backend__global_data__du_functor_desc_global_data_remapping_0_0;

#line 247 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_global_data_remapping_0_0[1];

#line 250 "ll_backend.global_data.c"
static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_global_data_remapping_0[1];

#line 253 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_global_data_remapping_0[1];

#line 256 "ll_backend.global_data.c"
static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_global_data_remapping_0[1];

#line 259 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__bimap__ti_bimap_2list__ti_list_1ll_backend__llds__type_ctor_info_rval_0ll_backend__llds__type_ctor_info_data_id_0;

#line 262 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__global_data__list__ti_list_1ll_backend__llds__type_ctor_info_common_cell_value_0;

#line 265 "ll_backend.global_data.c"
static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_scalar_cell_group_0_0[3];

#line 268 "ll_backend.global_data.c"
static const MR_ConstString ll_backend__global_data__ll_backend__global_data__field_names_scalar_cell_group_0_0[3];

#line 271 "ll_backend.global_data.c"
static const MR_DuFunctorDesc ll_backend__global_data__ll_backend__global_data__du_functor_desc_scalar_cell_group_0_0;

#line 274 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_scalar_cell_group_0_0[1];

#line 277 "ll_backend.global_data.c"
static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_scalar_cell_group_0[1];

#line 280 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_scalar_cell_group_0[1];

#line 283 "ll_backend.global_data.c"
static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_scalar_cell_group_0[1];

#line 286 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0ll_backend__global_data__type_ctor_info_scalar_cell_group_0;

#line 289 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0ll_backend__global_data__type_ctor_info_vector_cell_group_0;

#line 292 "ll_backend.global_data.c"
static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_static_cell_info_0_0[5];

#line 295 "ll_backend.global_data.c"
static const MR_ConstString ll_backend__global_data__ll_backend__global_data__field_names_static_cell_info_0_0[5];

#line 298 "ll_backend.global_data.c"
static const MR_DuFunctorDesc ll_backend__global_data__ll_backend__global_data__du_functor_desc_static_cell_info_0_0;

#line 301 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_static_cell_info_0_0[1];

#line 304 "ll_backend.global_data.c"
static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_static_cell_info_0[1];

#line 307 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_static_cell_info_0[1];

#line 310 "ll_backend.global_data.c"
static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_static_cell_info_0[1];

#line 313 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0tree234__ti_tree234_2ll_backend__llds__type_ctor_info_data_id_0ll_backend__llds__type_ctor_info_data_id_0;

#line 316 "ll_backend.global_data.c"
static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_static_cell_remap_info_0_0[2];

#line 319 "ll_backend.global_data.c"
static const MR_DuFunctorDesc ll_backend__global_data__ll_backend__global_data__du_functor_desc_static_cell_remap_info_0_0;

#line 322 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_static_cell_remap_info_0_0[1];

#line 325 "ll_backend.global_data.c"
static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_static_cell_remap_info_0[1];

#line 328 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_static_cell_remap_info_0[1];

#line 331 "ll_backend.global_data.c"
static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_static_cell_remap_info_0[1];

#line 334 "ll_backend.global_data.c"
static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_static_cell_sub_info_0_0[3];

#line 337 "ll_backend.global_data.c"
static const MR_ConstString ll_backend__global_data__ll_backend__global_data__field_names_static_cell_sub_info_0_0[3];

#line 340 "ll_backend.global_data.c"
static const MR_DuArgLocn ll_backend__global_data__ll_backend__global_data__field_locns_static_cell_sub_info_0_0[3];

#line 343 "ll_backend.global_data.c"
static const MR_DuFunctorDesc ll_backend__global_data__ll_backend__global_data__du_functor_desc_static_cell_sub_info_0_0;

#line 346 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_static_cell_sub_info_0_0[1];

#line 349 "ll_backend.global_data.c"
static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_static_cell_sub_info_0[1];

#line 352 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_static_cell_sub_info_0[1];

#line 355 "ll_backend.global_data.c"
static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_static_cell_sub_info_0[1];

#line 358 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__global_data__type_ctor_info_vector_contents_0;

#line 361 "ll_backend.global_data.c"
static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_vector_cell_group_0_0[2];

#line 364 "ll_backend.global_data.c"
static const MR_ConstString ll_backend__global_data__ll_backend__global_data__field_names_vector_cell_group_0_0[2];

#line 367 "ll_backend.global_data.c"
static const MR_DuFunctorDesc ll_backend__global_data__ll_backend__global_data__du_functor_desc_vector_cell_group_0_0;

#line 370 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_vector_cell_group_0_0[1];

#line 373 "ll_backend.global_data.c"
static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_vector_cell_group_0[1];

#line 376 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_vector_cell_group_0[1];

#line 379 "ll_backend.global_data.c"
static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_vector_cell_group_0[1];

#line 382 "ll_backend.global_data.c"
static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_vector_contents_0[1];

#line 385 "ll_backend.global_data.c"
static const MR_NotagFunctorDesc ll_backend__global_data__ll_backend__global_data__notag_functor_desc_vector_contents_0;

#line 388 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____cell_type_bimap_0_0_10001(
#line 391 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 393 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2);

#line 396 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____cell_type_bimap_0_0_10001(
#line 399 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 401 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 403 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3);

#line 406 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____cell_type_num_remap_0_0_10001(
#line 409 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 411 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2);

#line 414 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____cell_type_num_remap_0_0_10001(
#line 417 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 419 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 421 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3);

#line 424 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____global_data_0_0_10001(
#line 427 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 429 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2);

#line 432 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____global_data_0_0_10001(
#line 435 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 437 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 439 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3);

#line 442 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____global_data_remapping_0_0_10001(
#line 445 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 447 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2);

#line 450 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____global_data_remapping_0_0_10001(
#line 453 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 455 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 457 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3);

#line 460 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____proc_layout_map_0_0_10001(
#line 463 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 465 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2);

#line 468 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____proc_layout_map_0_0_10001(
#line 471 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 473 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 475 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3);

#line 478 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____proc_var_map_0_0_10001(
#line 481 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 483 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2);

#line 486 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____proc_var_map_0_0_10001(
#line 489 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 491 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 493 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3);

#line 496 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_cell_group_0_0_10001(
#line 499 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 501 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2);

#line 504 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____scalar_cell_group_0_0_10001(
#line 507 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 509 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 511 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3);

#line 514 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_cell_group_remap_0_0_10001(
#line 517 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 519 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2);

#line 522 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____scalar_cell_group_remap_0_0_10001(
#line 525 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 527 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 529 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3);

#line 532 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_type_cell_map_0_0_10001(
#line 535 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 537 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2);

#line 540 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____scalar_type_cell_map_0_0_10001(
#line 543 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 545 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 547 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3);

#line 550 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____static_cell_info_0_0_10001(
#line 553 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 555 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2);

#line 558 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____static_cell_info_0_0_10001(
#line 561 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 563 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 565 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3);

#line 568 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____static_cell_remap_info_0_0_10001(
#line 571 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 573 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2);

#line 576 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____static_cell_remap_info_0_0_10001(
#line 579 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 581 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 583 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3);

#line 586 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____static_cell_sub_info_0_0_10001(
#line 589 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 591 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2);

#line 594 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____static_cell_sub_info_0_0_10001(
#line 597 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 599 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 601 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3);

#line 604 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_cell_group_0_0_10001(
#line 607 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 609 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2);

#line 612 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____vector_cell_group_0_0_10001(
#line 615 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 617 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 619 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3);

#line 622 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_contents_0_0_10001(
#line 625 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 627 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2);

#line 630 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____vector_contents_0_0_10001(
#line 633 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 635 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 637 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3);

#line 640 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_type_cell_map_0_0_10001(
#line 643 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 645 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2);

#line 648 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____vector_type_cell_map_0_0_10001(
#line 651 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 653 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 655 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3);

#line 792 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data__IntroducedFrom__pred__merge_static_cell_infos__792__1_2_p_0(
#line 792 "global_data.m"
  MR_Word ll_backend__global_data__SubInfoA_9,
#line 792 "global_data.m"
  MR_Word ll_backend__global_data__SubInfoB_14);

#line 534 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data__IntroducedFrom__pred__add_vector_static_cell__534__1_1_p_0(
#line 534 "global_data.m"
  MR_Word ll_backend__global_data__VectorData_7);

#line 533 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data__IntroducedFrom__pred__add_vector_static_cell__533__1_1_p_0(
#line 533 "global_data.m"
  MR_Word ll_backend__global_data__LLDSTypes_6);

#line 338 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____vector_type_cell_map_0_0(
#line 338 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 338 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 338 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3);

#line 338 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_type_cell_map_0_0(
#line 338 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 338 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2);

#line 326 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____vector_contents_0_0(
#line 326 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 326 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 326 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3);

#line 326 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_contents_0_0(
#line 326 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 326 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2);

#line 320 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____vector_cell_group_0_0(
#line 320 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 320 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 320 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3);

#line 320 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_cell_group_0_0(
#line 320 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 320 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2);

#line 329 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____static_cell_sub_info_0_0(
#line 329 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 329 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 329 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3);

#line 329 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____static_cell_sub_info_0_0(
#line 329 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 329 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2);

#line 337 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____scalar_type_cell_map_0_0(
#line 337 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 337 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 337 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3);

#line 337 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_type_cell_map_0_0(
#line 337 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 337 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2);

#line 730 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____scalar_cell_group_remap_0_0(
#line 730 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 730 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 730 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3);

#line 730 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_cell_group_remap_0_0(
#line 730 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 730 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2);

#line 298 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____scalar_cell_group_0_0(
#line 298 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 298 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 298 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3);

#line 298 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_cell_group_0_0(
#line 298 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 298 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2);

#line 168 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____proc_var_map_0_0(
#line 168 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 168 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 168 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3);

#line 168 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____proc_var_map_0_0(
#line 168 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 168 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2);

#line 169 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____proc_layout_map_0_0(
#line 169 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 169 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 169 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3);

#line 169 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____proc_layout_map_0_0(
#line 169 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 169 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2);

#line 727 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____cell_type_num_remap_0_0(
#line 727 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 727 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 727 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3);

#line 727 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____cell_type_num_remap_0_0(
#line 727 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 727 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2);

#line 336 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____cell_type_bimap_0_0(
#line 336 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 336 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 336 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3);

#line 336 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____cell_type_bimap_0_0(
#line 336 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 336 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2);

#line 1357 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_mem_ref_3_p_0(
#line 1357 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 1357 "global_data.m"
  MR_Word ll_backend__global_data__MemRef0_5,
#line 1357 "global_data.m"
  MR_Word * ll_backend__global_data__MemRef_6);

#line 1276 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_rval_3_p_0(
#line 1276 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 1276 "global_data.m"
  MR_Word ll_backend__global_data__Rval0_5,
#line 1276 "global_data.m"
  MR_Word * ll_backend__global_data__Rval_6);

#line 1241 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_lval_3_p_0(
#line 1241 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 1241 "global_data.m"
  MR_Word ll_backend__global_data__Lval0_5,
#line 1241 "global_data.m"
  MR_Word * ll_backend__global_data__Lval_6);

#line 1233 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_foreign_proc_output_3_p_0(
#line 1233 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 1233 "global_data.m"
  MR_Word ll_backend__global_data__Output0_5,
#line 1233 "global_data.m"
  MR_Word * ll_backend__global_data__Output_6);

#line 1225 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_foreign_proc_input_3_p_0(
#line 1225 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 1225 "global_data.m"
  MR_Word ll_backend__global_data__Input0_5,
#line 1225 "global_data.m"
  MR_Word * ll_backend__global_data__Input_6);

#line 1213 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_foreign_proc_component_3_p_0_2(
#line 1213 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 1213 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 1213 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2);

#line 1209 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_foreign_proc_component_3_p_0_1(
#line 1209 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 1209 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 1209 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2);

#line 1203 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_foreign_proc_component_3_p_0(
#line 1203 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 1203 "global_data.m"
  MR_Word ll_backend__global_data__Comp0_5,
#line 1203 "global_data.m"
  MR_Word * ll_backend__global_data__Comp_6);

#line 1198 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_ts_table_index_3_p_0(
#line 1198 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 1198 "global_data.m"
  MR_Integer ll_backend__global_data__HeadVar__2_2,
#line 1198 "global_data.m"
  MR_Integer * ll_backend__global_data__HeadVar__3_3);

#line 1060 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_instr_3_p_0_2(
#line 1060 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 1060 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 1060 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2);

#line 1044 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_instr_3_p_0_1(
#line 1044 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 1044 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 1044 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2);

#line 1038 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_instr_3_p_0(
#line 1038 "global_data.m"
  MR_Word ll_backend__global_data__GlobalDataRemap_4,
#line 1038 "global_data.m"
  MR_Word ll_backend__global_data__Instr0_5,
#line 1038 "global_data.m"
  MR_Word * ll_backend__global_data__Instr_6);

#line 1030 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_instruction_3_p_0(
#line 1030 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 1030 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_Instr_0_9,
#line 1030 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Instr_10);

#line 1009 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_arg_group_value_3_p_0_1(
#line 1009 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 1009 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 1009 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2);

#line 1003 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_arg_group_value_3_p_0(
#line 1003 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 1003 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_GroupedArgs_0_10,
#line 1003 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_GroupedArgs_11);

#line 997 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_plain_value_3_p_0(
#line 997 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 997 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 997 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__3_3);

#line 989 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_common_cell_value_3_p_0_2(
#line 989 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 989 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 989 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2);

#line 993 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_common_cell_value_3_p_0_1(
#line 993 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 993 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 993 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2);

#line 983 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_common_cell_value_3_p_0(
#line 983 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 983 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_CommonCellValue_0_10,
#line 983 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_CommonCellValue_11);

#line 980 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_vector_contents_3_p_0_1(
#line 980 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 980 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 980 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2);

#line 975 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_vector_contents_3_p_0(
#line 975 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 975 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_Contents_0_8,
#line 975 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Contents_9);

#line 972 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_vector_cell_group_3_p_0_1(
#line 972 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 972 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 972 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2);

#line 967 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_vector_cell_group_3_p_0(
#line 967 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 967 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_VectorCellGroup_0_9,
#line 967 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_VectorCellGroup_10);

#line 964 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_scalar_cell_group_3_p_0_1(
#line 964 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 964 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 964 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2);

#line 959 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_scalar_cell_group_3_p_0(
#line 959 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 959 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_ScalarCellGroup_0_8,
#line 959 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_ScalarCellGroup_9);

#line 955 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_static_cell_info_3_p_0_2(
#line 955 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 955 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 955 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2);

#line 954 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_static_cell_info_3_p_0_1(
#line 954 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 954 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 954 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2);

#line 948 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_static_cell_info_3_p_0(
#line 948 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 948 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_SCI_0_10,
#line 948 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_SCI_11);

#line 929 "global_data.m"
static void MR_CALL 
ll_backend__global_data__merge_vector_cell_group_maps_2_5_p_0(
#line 929 "global_data.m"
  MR_Word ll_backend__global_data__TypeNumRemap_6,
#line 929 "global_data.m"
  MR_Word ll_backend__global_data__OldTypeNum_7,
#line 929 "global_data.m"
  MR_Word ll_backend__global_data__VectorCellGroup_8,
#line 929 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_VectorCellGroupMap_0_11,
#line 929 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_VectorCellGroupMap_12);

#line 885 "global_data.m"
static void MR_CALL 
ll_backend__global_data__merge_scalar_cell_groups_2_9_p_0(
#line 885 "global_data.m"
  MR_Word ll_backend__global_data__TypeNum_10,
#line 885 "global_data.m"
  MR_Word ll_backend__global_data__ArrayB_11,
#line 885 "global_data.m"
  MR_Word ll_backend__global_data__ArrayAB_12,
#line 885 "global_data.m"
  MR_Word ll_backend__global_data__Rvals_13,
#line 885 "global_data.m"
  MR_Word ll_backend__global_data__BDataId_14,
#line 885 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_GroupMembers_0_30,
#line 885 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_GroupMembers_31,
#line 885 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_GroupRemap_0_32,
#line 885 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_GroupRemap_33);

#line 881 "global_data.m"
static void MR_CALL 
ll_backend__global_data__merge_scalar_cell_group_maps_2_7_p_0_1(
#line 881 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 881 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 881 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 881 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_3,
#line 881 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_4,
#line 881 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_5,
#line 881 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_6);

#line 844 "global_data.m"
static void MR_CALL 
ll_backend__global_data__merge_scalar_cell_group_maps_2_7_p_0(
#line 844 "global_data.m"
  MR_Word ll_backend__global_data__TypeNumRemap_8,
#line 844 "global_data.m"
  MR_Word ll_backend__global_data__BTypeNum_9,
#line 844 "global_data.m"
  MR_Word ll_backend__global_data__BScalarCellGroup_10,
#line 844 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_ScalarCellGroupMap_0_18,
#line 844 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_ScalarCellGroupMap_19,
#line 844 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_Remap_0_20,
#line 844 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Remap_21);

#line 814 "global_data.m"
static void MR_CALL 
ll_backend__global_data__merge_cell_type_num_maps_8_p_0(
#line 814 "global_data.m"
  MR_Word ll_backend__global_data__CellType_9,
#line 814 "global_data.m"
  MR_Word ll_backend__global_data__BTypeNum_10,
#line 814 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_TypeCounter_0_17,
#line 814 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_TypeCounter_18,
#line 814 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_CellTypeNumMap_0_19,
#line 814 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_CellTypeNumMap_20,
#line 814 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_TypeNumRemap_0_21,
#line 814 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_TypeNumRemap_22);

#line 925 "global_data.m"
static void MR_CALL 
ll_backend__global_data__merge_static_cell_infos_4_p_0_4(
#line 925 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 925 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 925 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 925 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_3,
#line 925 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_4);

#line 839 "global_data.m"
static void MR_CALL 
ll_backend__global_data__merge_static_cell_infos_4_p_0_3(
#line 839 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 839 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 839 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 839 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_3,
#line 839 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_4,
#line 839 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_5,
#line 839 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_6);

#line 795 "global_data.m"
static void MR_CALL 
ll_backend__global_data__merge_static_cell_infos_4_p_0_2(
#line 795 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 795 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 795 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 795 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_3,
#line 795 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_4,
#line 795 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_5,
#line 795 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_6,
#line 795 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_7,
#line 795 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_8);

#line 792 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data__merge_static_cell_infos_4_p_0_1(
#line 792 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg);

#line 784 "global_data.m"
static void MR_CALL 
ll_backend__global_data__merge_static_cell_infos_4_p_0(
#line 784 "global_data.m"
  MR_Word ll_backend__global_data__SCIa_5,
#line 784 "global_data.m"
  MR_Word ll_backend__global_data__SCIb_6,
#line 784 "global_data.m"
  MR_Word * ll_backend__global_data__SCI_7,
#line 784 "global_data.m"
  MR_Word * ll_backend__global_data__Remap_8);

#line 710 "global_data.m"
static void MR_CALL 
ll_backend__global_data__associate_natural_type_4_p_0(
#line 710 "global_data.m"
  MR_Word ll_backend__global_data__UnboxFloat_5,
#line 710 "global_data.m"
  MR_Word ll_backend__global_data__ArgWidth_6,
#line 710 "global_data.m"
  MR_Word ll_backend__global_data__Rval_7,
#line 710 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__4_4);

#line 695 "global_data.m"
static void MR_CALL 
ll_backend__global_data__natural_type_4_p_0(
#line 695 "global_data.m"
  MR_Word ll_backend__global_data__UnboxFloat_5,
#line 695 "global_data.m"
  MR_Word ll_backend__global_data__ArgWidth_6,
#line 695 "global_data.m"
  MR_Word ll_backend__global_data__Rval_7,
#line 695 "global_data.m"
  MR_Word * ll_backend__global_data__Type_8);

#line 651 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data__threshold_group_types_5_p_0(
#line 651 "global_data.m"
  MR_Word ll_backend__global_data__CurType_6,
#line 651 "global_data.m"
  MR_Word ll_backend__global_data__RevArgsSoFar_7,
#line 651 "global_data.m"
  MR_Word ll_backend__global_data__LaterArgsTypes_8,
#line 651 "global_data.m"
  MR_Word * ll_backend__global_data__TypeGroups_9,
#line 651 "global_data.m"
  MR_Word * ll_backend__global_data__TypeAndArgGroups_10);

#line 619 "global_data.m"
static void MR_CALL 
ll_backend__global_data__add_one_vector_static_cell_6_p_0(
#line 619 "global_data.m"
  MR_Word ll_backend__global_data__TypeNum_7,
#line 619 "global_data.m"
  MR_Word ll_backend__global_data__CellType_8,
#line 619 "global_data.m"
  MR_Integer ll_backend__global_data__CellNum_9,
#line 619 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__4_4,
#line 619 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_Arrays_0_13,
#line 619 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Arrays_14);

#line 616 "global_data.m"
static void MR_CALL 
ll_backend__global_data__add_all_vector_static_cells_for_type_5_p_0_1(
#line 616 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 616 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 616 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 616 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_3,
#line 616 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_4);

#line 608 "global_data.m"
static void MR_CALL 
ll_backend__global_data__add_all_vector_static_cells_for_type_5_p_0(
#line 608 "global_data.m"
  MR_Word ll_backend__global_data__TypeNumMap_6,
#line 608 "global_data.m"
  MR_Word ll_backend__global_data__TypeNum_7,
#line 608 "global_data.m"
  MR_Word ll_backend__global_data__CellGroup_8,
#line 608 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_Arrays_0_11,
#line 608 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Arrays_12);

#line 596 "global_data.m"
static void MR_CALL 
ll_backend__global_data__add_scalar_static_cell_for_type_5_p_0(
#line 596 "global_data.m"
  MR_Word ll_backend__global_data__TypeNumMap_6,
#line 596 "global_data.m"
  MR_Word ll_backend__global_data__TypeNum_7,
#line 596 "global_data.m"
  MR_Word ll_backend__global_data__CellGroup_8,
#line 596 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_Arrays_0_13,
#line 596 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Arrays_14);

#line 580 "global_data.m"
static MR_Word MR_CALL 
ll_backend__global_data__pair_vector_element_2_f_0(
#line 580 "global_data.m"
  MR_Word ll_backend__global_data__Types_4,
#line 580 "global_data.m"
  MR_Word ll_backend__global_data__Args_5);

#line 576 "global_data.m"
static MR_Word MR_CALL 
ll_backend__global_data__init_vector_cell_group_0_f_0(void);

#line 491 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data__find_general_llds_types_in_cell_5_p_0(
#line 491 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 491 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 491 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3,
#line 491 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__4_4,
#line 491 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__5_5);

#line 482 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data__find_general_llds_types_2_5_p_0(
#line 482 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 482 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 482 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3,
#line 482 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_LLDSTypes_0_4,
#line 482 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_LLDSTypes_5);

#line 462 "global_data.m"
static MR_Word MR_CALL 
ll_backend__global_data__init_scalar_cell_group_0_f_0(void);

#line 384 "global_data.m"
static void MR_CALL 
ll_backend__global_data__do_add_scalar_static_cell_6_p_0(
#line 384 "global_data.m"
  MR_Word ll_backend__global_data__TypedArgs_7,
#line 384 "global_data.m"
  MR_Word ll_backend__global_data__CellType_8,
#line 384 "global_data.m"
  MR_Word ll_backend__global_data__CellValue_9,
#line 384 "global_data.m"
  MR_Word * ll_backend__global_data__DataId_10,
#line 384 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_Info_0_35,
#line 384 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Info_36);

#line 281 "global_data.m"
static void MR_CALL 
ll_backend__global_data__make_alloc_id_map_5_p_0(
#line 281 "global_data.m"
  MR_Word ll_backend__global_data__AllocSite_6,
#line 281 "global_data.m"
  MR_Integer ll_backend__global_data__Slot_7,
#line 281 "global_data.m"
  MR_Integer * ll_backend__global_data__HeadVar__3_3,
#line 281 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_Map_0_11,
#line 281 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Map_12);

#line 1027 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_references_to_global_data_3_p_0_1(
#line 1027 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 1027 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 1027 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2);

#line 592 "global_data.m"
static void MR_CALL 
ll_backend__global_data__get_static_cells_3_p_0_2(
#line 592 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 592 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 592 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 592 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_3,
#line 592 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_4);

#line 589 "global_data.m"
static void MR_CALL 
ll_backend__global_data__get_static_cells_3_p_0_1(
#line 589 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 589 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 589 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 589 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_3,
#line 589 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_4);

#line 542 "global_data.m"
static MR_Box MR_CALL 
ll_backend__global_data__add_vector_static_cell_5_p_0_3(
#line 542 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 542 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1);

#line 534 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data__add_vector_static_cell_5_p_0_2(
#line 534 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg);

#line 533 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data__add_vector_static_cell_5_p_0_1(
#line 533 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg);

#line 478 "global_data.m"
static void MR_CALL 
ll_backend__global_data__find_general_llds_types_4_p_0_1(
#line 478 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 478 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 478 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2);

#line 279 "global_data.m"
static void MR_CALL 
ll_backend__global_data__global_data_get_all_alloc_sites_3_p_0_1(
#line 279 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 279 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 279 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 279 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_3,
#line 279 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_4,
#line 279 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_5);

#line 367 "global_data.m"
static void MR_CALL 
ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0_1(
#line 367 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 367 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 367 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2);


static /* final */ const MR_Box ll_backend__global_data_scalar_common_1[13][3];

static /* final */ const MR_Box ll_backend__global_data_scalar_common_2[11][2];

static /* final */ const MR_Box ll_backend__global_data_scalar_common_3[1][1];

static /* final */ const MR_Box ll_backend__global_data_scalar_common_4[2][7];

static /* final */ const MR_Box ll_backend__global_data_scalar_common_5[4][8];

static /* final */ const MR_Box ll_backend__global_data_scalar_common_6[2][4];

static /* final */ const MR_Box ll_backend__global_data_scalar_common_7[12][6];

static /* final */ const MR_Box ll_backend__global_data_scalar_common_8[1][9];

static /* final */ const MR_Box ll_backend__global_data_scalar_common_9[1][5];

static /* final */ const MR_Box ll_backend__global_data_scalar_common_10[1][11];

static /* final */ const MR_Box ll_backend__global_data_scalar_common_11[1][10];

static /* final */ const MR_Box ll_backend__global_data_scalar_common_12[1][12];




static /* final */ const MR_Box ll_backend__global_data_scalar_common_1[13][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_alloc_site_id_0)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__bimap__bimap__type_ctor_info_bimap_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0)),
    ((MR_Box) (&ll_backend__global_data_scalar_common_1[3]))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__bimap__bimap__type_ctor_info_bimap_2)),
    ((MR_Box) (&ll_backend__global_data_scalar_common_2[0])),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_tabling_info_struct_0))
  },
  /* row 9 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_info_0))
  },
  /* row 10 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_contents_0))
  },
  /* row 11 */
  {
    ((MR_Box) (&ll_backend__global_data_scalar_common_5[0])),
    ((MR_Box) (ll_backend__global_data__global_data_get_all_alloc_sites_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 12 */
  {
    ((MR_Box) (&ll_backend__global_data_scalar_common_10[0])),
    ((MR_Box) (ll_backend__global_data__merge_static_cell_infos_4_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__global_data_scalar_common_2[11][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_scalar_common_data_array_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_vector_common_data_array_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_closure_proc_id_data_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__global_data_scalar_common_3[0])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__global_data_scalar_common_2[8]))),
    ((MR_Box) ((MR_Integer) 7))
  },
  /* row 10 */
  {
    ((MR_Box) (&ll_backend__global_data_scalar_common_2[9])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ll_backend__global_data_scalar_common_3[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) -1))
  },
};

static /* final */ const MR_Box ll_backend__global_data_scalar_common_4[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_have_unboxed_floats_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_have_unboxed_floats_0)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_arg_width_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0))
  },
};

static /* final */ const MR_Box ll_backend__global_data_scalar_common_5[4][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_alloc_site_id_0__plain_ll_backend__layout__type_ctor_info_layout_slot_name_0)),
    ((MR_Box) (&ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_alloc_site_id_0__plain_ll_backend__layout__type_ctor_info_layout_slot_name_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__global_data__bimap__pti_bimap_2__plain_ll_backend__llds__type_ctor_info_common_cell_type_0__plain_ll_backend__llds__type_ctor_info_type_num_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0)),
    ((MR_Box) (&ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_scalar_common_data_array_0)),
    ((MR_Box) (&ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_scalar_common_data_array_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__global_data__bimap__pti_bimap_2__plain_ll_backend__llds__type_ctor_info_common_cell_type_0__plain_ll_backend__llds__type_ctor_info_type_num_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0)),
    ((MR_Box) (&ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_vector_common_data_array_0)),
    ((MR_Box) (&ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_vector_common_data_array_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_type_num_0__plain_ll_backend__llds__type_ctor_info_type_num_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0)),
    ((MR_Box) (&ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_type_num_0__plain_ll_backend__global_data__type_ctor_info_vector_cell_group_0)),
    ((MR_Box) (&ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_type_num_0__plain_ll_backend__global_data__type_ctor_info_vector_cell_group_0))
  },
};

static /* final */ const MR_Box ll_backend__global_data_scalar_common_6[2][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_llds_type_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ll_backend__global_data__list__pti_list_1__plain_list__ti_list_1ll_backend__llds__type_ctor_info_rval_0))
  },
};

static /* final */ const MR_Box ll_backend__global_data_scalar_common_7[12][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_llds_type_0)),
    ((MR_Box) (&ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_remapping_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_remap_info_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_remap_info_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_remap_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0))
  },
  /* row 5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_remap_info_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_contents_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_contents_0))
  },
  /* row 6 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_remap_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_arg_group_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_arg_group_0))
  },
  /* row 7 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_remap_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0))
  },
  /* row 8 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_remap_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row 9 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_remap_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0))
  },
  /* row 10 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_remap_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_input_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_input_0))
  },
  /* row 11 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_remap_info_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_output_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_output_0))
  },
};

static /* final */ const MR_Box ll_backend__global_data_scalar_common_8[1][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_contents_0)),
    ((MR_Box) (&ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_vector_common_data_array_0)),
    ((MR_Box) (&ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_vector_common_data_array_0))
  },
};

static /* final */ const MR_Box ll_backend__global_data_scalar_common_9[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_sub_info_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_sub_info_0))
  },
};

static /* final */ const MR_Box ll_backend__global_data_scalar_common_10[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&mercury__counter__counter__type_ctor_info_counter_0)),
    ((MR_Box) (&ll_backend__global_data__bimap__pti_bimap_2__plain_ll_backend__llds__type_ctor_info_common_cell_type_0__plain_ll_backend__llds__type_ctor_info_type_num_0)),
    ((MR_Box) (&ll_backend__global_data__bimap__pti_bimap_2__plain_ll_backend__llds__type_ctor_info_common_cell_type_0__plain_ll_backend__llds__type_ctor_info_type_num_0)),
    ((MR_Box) (&ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_type_num_0__plain_ll_backend__llds__type_ctor_info_type_num_0)),
    ((MR_Box) (&ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_type_num_0__plain_ll_backend__llds__type_ctor_info_type_num_0))
  },
};

static /* final */ const MR_Box ll_backend__global_data_scalar_common_11[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_type_num_0__plain_ll_backend__llds__type_ctor_info_type_num_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0)),
    ((MR_Box) (&ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0)),
    ((MR_Box) (&ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_type_num_0__plain_ll_backend__global_data__type_ctor_info_scalar_cell_group_0)),
    ((MR_Box) (&ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_type_num_0__plain_ll_backend__global_data__type_ctor_info_scalar_cell_group_0)),
    ((MR_Box) (&ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_type_num_0__plain_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_data_id_0ll_backend__llds__type_ctor_info_data_id_0)),
    ((MR_Box) (&ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_type_num_0__plain_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_data_id_0ll_backend__llds__type_ctor_info_data_id_0))
  },
};

static /* final */ const MR_Box ll_backend__global_data_scalar_common_12[1][12] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 9)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0)),
    ((MR_Box) (&ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_common_cell_value_0)),
    ((MR_Box) (&ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_common_cell_value_0)),
    ((MR_Box) (&ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0)),
    ((MR_Box) (&ll_backend__global_data__bimap__pti_bimap_2__plain_list__ti_list_1ll_backend__llds__type_ctor_info_rval_0__plain_ll_backend__llds__type_ctor_info_data_id_0)),
    ((MR_Box) (&ll_backend__global_data__bimap__pti_bimap_2__plain_list__ti_list_1ll_backend__llds__type_ctor_info_rval_0__plain_ll_backend__llds__type_ctor_info_data_id_0)),
    ((MR_Box) (&ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_data_id_0__plain_ll_backend__llds__type_ctor_info_data_id_0)),
    ((MR_Box) (&ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_data_id_0__plain_ll_backend__llds__type_ctor_info_data_id_0))
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



#line 2050 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_alloc_site_id_0__plain_ll_backend__layout__type_ctor_info_layout_slot_name_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_alloc_site_id_0,
    (MR_PseudoTypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0
  }
};

#line 2059 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_llds_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0
  }
};

#line 2067 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__global_data__list__ti_list_1ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0
  }
};

#line 2075 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__global_data__list__pti_list_1__plain_list__ti_list_1ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__global_data__list__ti_list_1ll_backend__llds__type_ctor_info_rval_0
  }
};

#line 2083 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0
  }
};

#line 2091 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__global_data__bimap__pti_bimap_2__plain_ll_backend__llds__type_ctor_info_common_cell_type_0__plain_ll_backend__llds__type_ctor_info_type_num_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0,
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0
  }
};

#line 2100 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_scalar_common_data_array_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_scalar_common_data_array_0
  }
};

#line 2108 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_vector_common_data_array_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_vector_common_data_array_0
  }
};

#line 2116 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_type_num_0__plain_ll_backend__llds__type_ctor_info_type_num_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0,
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0
  }
};

#line 2125 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_type_num_0__plain_ll_backend__global_data__type_ctor_info_scalar_cell_group_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0,
    (MR_PseudoTypeInfo) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0
  }
};

#line 2134 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_data_id_0ll_backend__llds__type_ctor_info_data_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0
  }
};

#line 2143 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_type_num_0__plain_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_data_id_0ll_backend__llds__type_ctor_info_data_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0,
    (MR_PseudoTypeInfo) &ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_data_id_0ll_backend__llds__type_ctor_info_data_id_0
  }
};

#line 2152 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_type_num_0__plain_ll_backend__global_data__type_ctor_info_vector_cell_group_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0,
    (MR_PseudoTypeInfo) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0
  }
};

#line 2161 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_common_cell_value_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0
  }
};

#line 2169 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__global_data__bimap__pti_bimap_2__plain_list__ti_list_1ll_backend__llds__type_ctor_info_rval_0__plain_ll_backend__llds__type_ctor_info_data_id_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__global_data__list__ti_list_1ll_backend__llds__type_ctor_info_rval_0,
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0
  }
};

#line 2178 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_data_id_0__plain_ll_backend__llds__type_ctor_info_data_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0,
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0
  }
};

#line 2187 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__bimap__ti_bimap_2ll_backend__llds__type_ctor_info_common_cell_type_0ll_backend__llds__type_ctor_info_type_num_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0
  }
};

#line 2196 "ll_backend.global_data.c"
const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_cell_type_bimap_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__global_data____Unify____cell_type_bimap_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____cell_type_bimap_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "cell_type_bimap",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &ll_backend__global_data__bimap__ti_bimap_2ll_backend__llds__type_ctor_info_common_cell_type_0ll_backend__llds__type_ctor_info_type_num_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2217 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0ll_backend__llds__type_ctor_info_type_num_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0
  }
};

#line 2226 "ll_backend.global_data.c"
const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_cell_type_num_remap_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__global_data____Unify____cell_type_num_remap_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____cell_type_num_remap_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "cell_type_num_remap",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0ll_backend__llds__type_ctor_info_type_num_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2247 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__llds__type_ctor_info_tabling_info_struct_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_tabling_info_struct_0
  }
};

#line 2256 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__continuation_info__type_ctor_info_proc_layout_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_info_0
  }
};

#line 2265 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__global_data__list__ti_list_1ll_backend__layout__type_ctor_info_closure_proc_id_data_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_closure_proc_id_data_0
  }
};

#line 2273 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__global_data__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2281 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__global_data__set_tree234__ti_set_tree234_1ll_backend__layout__type_ctor_info_alloc_site_info_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0
  }
};

#line 2289 "ll_backend.global_data.c"
static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_global_data_0_0[7] = {
  (MR_PseudoTypeInfo) &ll_backend__global_data__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__llds__type_ctor_info_tabling_info_struct_0,
  (MR_PseudoTypeInfo) &ll_backend__global_data__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__continuation_info__type_ctor_info_proc_layout_info_0,
  (MR_PseudoTypeInfo) &ll_backend__global_data__list__ti_list_1ll_backend__layout__type_ctor_info_closure_proc_id_data_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__global_data__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0,
  (MR_PseudoTypeInfo) &ll_backend__global_data__set_tree234__ti_set_tree234_1ll_backend__layout__type_ctor_info_alloc_site_info_0
};

#line 2300 "ll_backend.global_data.c"
static const MR_ConstString ll_backend__global_data__ll_backend__global_data__field_names_global_data_0_0[7] = {
  (MR_String) "gd_proc_var_map",
  (MR_String) "gd_proc_layout_map",
  (MR_String) "gd_closure_layouts",
  (MR_String) "gd_ts_string_table_size",
  (MR_String) "gd_ts_rev_string_table",
  (MR_String) "gd_static_cell_info",
  (MR_String) "gd_alloc_sites"
};

#line 2311 "ll_backend.global_data.c"
static const MR_DuFunctorDesc ll_backend__global_data__ll_backend__global_data__du_functor_desc_global_data_0_0 = {
  (MR_String) "global_data",
  (MR_Integer) 7,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__global_data__ll_backend__global_data__field_types_global_data_0_0,
  ll_backend__global_data__ll_backend__global_data__field_names_global_data_0_0,
  NULL,
  NULL
};

#line 2326 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_global_data_0_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_global_data_0_0
};

#line 2331 "ll_backend.global_data.c"
static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_global_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__global_data__ll_backend__global_data__du_stag_ordered_global_data_0_0
  }
};

#line 2340 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_global_data_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_global_data_0_0
};

#line 2345 "ll_backend.global_data.c"
static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_global_data_0[1] = {
  (MR_Integer) 0
};

#line 2350 "ll_backend.global_data.c"
const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__global_data____Unify____global_data_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____global_data_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "global_data",
  {
    ll_backend__global_data__ll_backend__global_data__du_name_ordered_global_data_0
  },
  {
    ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_global_data_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__global_data__ll_backend__global_data__functor_number_map_global_data_0
};

#line 2371 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__global_data__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2379 "ll_backend.global_data.c"
static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_global_data_remapping_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__global_data__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_remap_info_0
};

#line 2385 "ll_backend.global_data.c"
static const MR_ConstString ll_backend__global_data__ll_backend__global_data__field_names_global_data_remapping_0_0[2] = {
  (MR_String) "gdr_maybe_ts_table_offset",
  (MR_String) "gdr_static_cell_remap_info"
};

#line 2391 "ll_backend.global_data.c"
static const MR_DuFunctorDesc ll_backend__global_data__ll_backend__global_data__du_functor_desc_global_data_remapping_0_0 = {
  (MR_String) "global_data_remapping",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__global_data__ll_backend__global_data__field_types_global_data_remapping_0_0,
  ll_backend__global_data__ll_backend__global_data__field_names_global_data_remapping_0_0,
  NULL,
  NULL
};

#line 2406 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_global_data_remapping_0_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_global_data_remapping_0_0
};

#line 2411 "ll_backend.global_data.c"
static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_global_data_remapping_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__global_data__ll_backend__global_data__du_stag_ordered_global_data_remapping_0_0
  }
};

#line 2420 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_global_data_remapping_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_global_data_remapping_0_0
};

#line 2425 "ll_backend.global_data.c"
static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_global_data_remapping_0[1] = {
  (MR_Integer) 0
};

#line 2430 "ll_backend.global_data.c"
const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_remapping_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__global_data____Unify____global_data_remapping_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____global_data_remapping_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "global_data_remapping",
  {
    ll_backend__global_data__ll_backend__global_data__du_name_ordered_global_data_remapping_0
  },
  {
    ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_global_data_remapping_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__global_data__ll_backend__global_data__functor_number_map_global_data_remapping_0
};

#line 2451 "ll_backend.global_data.c"
const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_proc_layout_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__global_data____Unify____proc_layout_map_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____proc_layout_map_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "proc_layout_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &ll_backend__global_data__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__continuation_info__type_ctor_info_proc_layout_info_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2472 "ll_backend.global_data.c"
const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_proc_var_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__global_data____Unify____proc_var_map_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____proc_var_map_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "proc_var_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &ll_backend__global_data__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__llds__type_ctor_info_tabling_info_struct_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2493 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__bimap__ti_bimap_2list__ti_list_1ll_backend__llds__type_ctor_info_rval_0ll_backend__llds__type_ctor_info_data_id_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_TypeInfo) &ll_backend__global_data__list__ti_list_1ll_backend__llds__type_ctor_info_rval_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0
  }
};

#line 2502 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__global_data__list__ti_list_1ll_backend__llds__type_ctor_info_common_cell_value_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0
  }
};

#line 2510 "ll_backend.global_data.c"
static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_scalar_cell_group_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &ll_backend__global_data__bimap__ti_bimap_2list__ti_list_1ll_backend__llds__type_ctor_info_rval_0ll_backend__llds__type_ctor_info_data_id_0,
  (MR_PseudoTypeInfo) &ll_backend__global_data__list__ti_list_1ll_backend__llds__type_ctor_info_common_cell_value_0
};

#line 2517 "ll_backend.global_data.c"
static const MR_ConstString ll_backend__global_data__ll_backend__global_data__field_names_scalar_cell_group_0_0[3] = {
  (MR_String) "scalar_cell_counter",
  (MR_String) "scalar_cell_group_members",
  (MR_String) "scalar_cell_rev_array"
};

#line 2524 "ll_backend.global_data.c"
static const MR_DuFunctorDesc ll_backend__global_data__ll_backend__global_data__du_functor_desc_scalar_cell_group_0_0 = {
  (MR_String) "scalar_cell_group",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__global_data__ll_backend__global_data__field_types_scalar_cell_group_0_0,
  ll_backend__global_data__ll_backend__global_data__field_names_scalar_cell_group_0_0,
  NULL,
  NULL
};

#line 2539 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_scalar_cell_group_0_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_scalar_cell_group_0_0
};

#line 2544 "ll_backend.global_data.c"
static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_scalar_cell_group_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__global_data__ll_backend__global_data__du_stag_ordered_scalar_cell_group_0_0
  }
};

#line 2553 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_scalar_cell_group_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_scalar_cell_group_0_0
};

#line 2558 "ll_backend.global_data.c"
static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_scalar_cell_group_0[1] = {
  (MR_Integer) 0
};

#line 2563 "ll_backend.global_data.c"
const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__global_data____Unify____scalar_cell_group_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____scalar_cell_group_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "scalar_cell_group",
  {
    ll_backend__global_data__ll_backend__global_data__du_name_ordered_scalar_cell_group_0
  },
  {
    ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_scalar_cell_group_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__global_data__ll_backend__global_data__functor_number_map_scalar_cell_group_0
};

#line 2584 "ll_backend.global_data.c"
const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_remap_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__global_data____Unify____scalar_cell_group_remap_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____scalar_cell_group_remap_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "scalar_cell_group_remap",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_data_id_0ll_backend__llds__type_ctor_info_data_id_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2605 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0ll_backend__global_data__type_ctor_info_scalar_cell_group_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0,
    (MR_TypeInfo) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0
  }
};

#line 2614 "ll_backend.global_data.c"
const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_type_cell_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__global_data____Unify____scalar_type_cell_map_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____scalar_type_cell_map_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "scalar_type_cell_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0ll_backend__global_data__type_ctor_info_scalar_cell_group_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2635 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0ll_backend__global_data__type_ctor_info_vector_cell_group_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0,
    (MR_TypeInfo) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0
  }
};

#line 2644 "ll_backend.global_data.c"
static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_static_cell_info_0_0[5] = {
  (MR_PseudoTypeInfo) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_sub_info_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &ll_backend__global_data__bimap__ti_bimap_2ll_backend__llds__type_ctor_info_common_cell_type_0ll_backend__llds__type_ctor_info_type_num_0,
  (MR_PseudoTypeInfo) &ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0ll_backend__global_data__type_ctor_info_scalar_cell_group_0,
  (MR_PseudoTypeInfo) &ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0ll_backend__global_data__type_ctor_info_vector_cell_group_0
};

#line 2653 "ll_backend.global_data.c"
static const MR_ConstString ll_backend__global_data__ll_backend__global_data__field_names_static_cell_info_0_0[5] = {
  (MR_String) "sci_sub_info",
  (MR_String) "sci_type_counter",
  (MR_String) "sci_cell_type_num_map",
  (MR_String) "sci_scalar_cell_group_map",
  (MR_String) "sci_vector_cell_group_map"
};

#line 2662 "ll_backend.global_data.c"
static const MR_DuFunctorDesc ll_backend__global_data__ll_backend__global_data__du_functor_desc_static_cell_info_0_0 = {
  (MR_String) "static_cell_info",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__global_data__ll_backend__global_data__field_types_static_cell_info_0_0,
  ll_backend__global_data__ll_backend__global_data__field_names_static_cell_info_0_0,
  NULL,
  NULL
};

#line 2677 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_static_cell_info_0_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_static_cell_info_0_0
};

#line 2682 "ll_backend.global_data.c"
static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_static_cell_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__global_data__ll_backend__global_data__du_stag_ordered_static_cell_info_0_0
  }
};

#line 2691 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_static_cell_info_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_static_cell_info_0_0
};

#line 2696 "ll_backend.global_data.c"
static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_static_cell_info_0[1] = {
  (MR_Integer) 0
};

#line 2701 "ll_backend.global_data.c"
const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__global_data____Unify____static_cell_info_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____static_cell_info_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "static_cell_info",
  {
    ll_backend__global_data__ll_backend__global_data__du_name_ordered_static_cell_info_0
  },
  {
    ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_static_cell_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__global_data__ll_backend__global_data__functor_number_map_static_cell_info_0
};

#line 2722 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0tree234__ti_tree234_2ll_backend__llds__type_ctor_info_data_id_0ll_backend__llds__type_ctor_info_data_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0,
    (MR_TypeInfo) &ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_data_id_0ll_backend__llds__type_ctor_info_data_id_0
  }
};

#line 2731 "ll_backend.global_data.c"
static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_static_cell_remap_info_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0ll_backend__llds__type_ctor_info_type_num_0,
  (MR_PseudoTypeInfo) &ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0tree234__ti_tree234_2ll_backend__llds__type_ctor_info_data_id_0ll_backend__llds__type_ctor_info_data_id_0
};

#line 2737 "ll_backend.global_data.c"
static const MR_DuFunctorDesc ll_backend__global_data__ll_backend__global_data__du_functor_desc_static_cell_remap_info_0_0 = {
  (MR_String) "static_cell_remap_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__global_data__ll_backend__global_data__field_types_static_cell_remap_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 2752 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_static_cell_remap_info_0_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_static_cell_remap_info_0_0
};

#line 2757 "ll_backend.global_data.c"
static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_static_cell_remap_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__global_data__ll_backend__global_data__du_stag_ordered_static_cell_remap_info_0_0
  }
};

#line 2766 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_static_cell_remap_info_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_static_cell_remap_info_0_0
};

#line 2771 "ll_backend.global_data.c"
static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_static_cell_remap_info_0[1] = {
  (MR_Integer) 0
};

#line 2776 "ll_backend.global_data.c"
const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_remap_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__global_data____Unify____static_cell_remap_info_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____static_cell_remap_info_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "static_cell_remap_info",
  {
    ll_backend__global_data__ll_backend__global_data__du_name_ordered_static_cell_remap_info_0
  },
  {
    ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_static_cell_remap_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__global_data__ll_backend__global_data__functor_number_map_static_cell_remap_info_0
};

#line 2797 "ll_backend.global_data.c"
static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_static_cell_sub_info_0_0[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_have_unboxed_floats_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 2804 "ll_backend.global_data.c"
static const MR_ConstString ll_backend__global_data__ll_backend__global_data__field_names_static_cell_sub_info_0_0[3] = {
  (MR_String) "scsi_module_name",
  (MR_String) "scsi_unbox_float",
  (MR_String) "scsi_common_data"
};

#line 2811 "ll_backend.global_data.c"
static const MR_DuArgLocn ll_backend__global_data__ll_backend__global_data__field_locns_static_cell_sub_info_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 1,
    (MR_Integer) 1
  }
};

#line 2830 "ll_backend.global_data.c"
static const MR_DuFunctorDesc ll_backend__global_data__ll_backend__global_data__du_functor_desc_static_cell_sub_info_0_0 = {
  (MR_String) "static_cell_sub_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__global_data__ll_backend__global_data__field_types_static_cell_sub_info_0_0,
  ll_backend__global_data__ll_backend__global_data__field_names_static_cell_sub_info_0_0,
  ll_backend__global_data__ll_backend__global_data__field_locns_static_cell_sub_info_0_0,
  NULL
};

#line 2845 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_static_cell_sub_info_0_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_static_cell_sub_info_0_0
};

#line 2850 "ll_backend.global_data.c"
static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_static_cell_sub_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__global_data__ll_backend__global_data__du_stag_ordered_static_cell_sub_info_0_0
  }
};

#line 2859 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_static_cell_sub_info_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_static_cell_sub_info_0_0
};

#line 2864 "ll_backend.global_data.c"
static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_static_cell_sub_info_0[1] = {
  (MR_Integer) 0
};

#line 2869 "ll_backend.global_data.c"
const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_sub_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__global_data____Unify____static_cell_sub_info_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____static_cell_sub_info_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "static_cell_sub_info",
  {
    ll_backend__global_data__ll_backend__global_data__du_name_ordered_static_cell_sub_info_0
  },
  {
    ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_static_cell_sub_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__global_data__ll_backend__global_data__functor_number_map_static_cell_sub_info_0
};

#line 2890 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__global_data__type_ctor_info_vector_contents_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_contents_0
  }
};

#line 2899 "ll_backend.global_data.c"
static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_vector_cell_group_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &ll_backend__global_data__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__global_data__type_ctor_info_vector_contents_0
};

#line 2905 "ll_backend.global_data.c"
static const MR_ConstString ll_backend__global_data__ll_backend__global_data__field_names_vector_cell_group_0_0[2] = {
  (MR_String) "vector_cell_counter",
  (MR_String) "vector_cell_map"
};

#line 2911 "ll_backend.global_data.c"
static const MR_DuFunctorDesc ll_backend__global_data__ll_backend__global_data__du_functor_desc_vector_cell_group_0_0 = {
  (MR_String) "vector_cell_group",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__global_data__ll_backend__global_data__field_types_vector_cell_group_0_0,
  ll_backend__global_data__ll_backend__global_data__field_names_vector_cell_group_0_0,
  NULL,
  NULL
};

#line 2926 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_vector_cell_group_0_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_vector_cell_group_0_0
};

#line 2931 "ll_backend.global_data.c"
static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_vector_cell_group_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__global_data__ll_backend__global_data__du_stag_ordered_vector_cell_group_0_0
  }
};

#line 2940 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_vector_cell_group_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_vector_cell_group_0_0
};

#line 2945 "ll_backend.global_data.c"
static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_vector_cell_group_0[1] = {
  (MR_Integer) 0
};

#line 2950 "ll_backend.global_data.c"
const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__global_data____Unify____vector_cell_group_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____vector_cell_group_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "vector_cell_group",
  {
    ll_backend__global_data__ll_backend__global_data__du_name_ordered_vector_cell_group_0
  },
  {
    ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_vector_cell_group_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__global_data__ll_backend__global_data__functor_number_map_vector_cell_group_0
};

#line 2971 "ll_backend.global_data.c"
static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_vector_contents_0[1] = {
  (MR_Integer) 0
};

#line 2976 "ll_backend.global_data.c"
static const MR_NotagFunctorDesc ll_backend__global_data__ll_backend__global_data__notag_functor_desc_vector_contents_0 = {
  (MR_String) "vector_contents",
  (MR_PseudoTypeInfo) &ll_backend__global_data__list__ti_list_1ll_backend__llds__type_ctor_info_common_cell_value_0,
  NULL
};

#line 2983 "ll_backend.global_data.c"
const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_contents_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (ll_backend__global_data____Unify____vector_contents_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____vector_contents_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "vector_contents",
  {
    &ll_backend__global_data__ll_backend__global_data__notag_functor_desc_vector_contents_0
  },
  {
    &ll_backend__global_data__ll_backend__global_data__notag_functor_desc_vector_contents_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__global_data__ll_backend__global_data__functor_number_map_vector_contents_0
};

#line 3004 "ll_backend.global_data.c"
const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_type_cell_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__global_data____Unify____vector_type_cell_map_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____vector_type_cell_map_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "vector_type_cell_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0ll_backend__global_data__type_ctor_info_vector_cell_group_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 3025 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____cell_type_bimap_0_0_10001(
#line 3028 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 3030 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2)
#line 3032 "ll_backend.global_data.c"
{
#line 3034 "ll_backend.global_data.c"
  {
#line 3036 "ll_backend.global_data.c"
    MR_bool ll_backend__global_data__succeeded;

#line 3039 "ll_backend.global_data.c"
    {
#line 3041 "ll_backend.global_data.c"
      ll_backend__global_data__succeeded = ll_backend__global_data____Unify____cell_type_bimap_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    }
#line 3044 "ll_backend.global_data.c"
    return ll_backend__global_data__succeeded;
#line 3046 "ll_backend.global_data.c"
  }
#line 3048 "ll_backend.global_data.c"
}

#line 3051 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____cell_type_bimap_0_0_10001(
#line 3054 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 3056 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 3058 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3)
#line 3060 "ll_backend.global_data.c"
{
#line 3062 "ll_backend.global_data.c"
  {
#line 3064 "ll_backend.global_data.c"
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

#line 3067 "ll_backend.global_data.c"
    {
#line 3069 "ll_backend.global_data.c"
      ll_backend__global_data____Compare____cell_type_bimap_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    }
#line 3072 "ll_backend.global_data.c"
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
#line 3074 "ll_backend.global_data.c"
  }
#line 3076 "ll_backend.global_data.c"
}

#line 3079 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____cell_type_num_remap_0_0_10001(
#line 3082 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 3084 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2)
#line 3086 "ll_backend.global_data.c"
{
#line 3088 "ll_backend.global_data.c"
  {
#line 3090 "ll_backend.global_data.c"
    MR_bool ll_backend__global_data__succeeded;

#line 3093 "ll_backend.global_data.c"
    {
#line 3095 "ll_backend.global_data.c"
      ll_backend__global_data__succeeded = ll_backend__global_data____Unify____cell_type_num_remap_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    }
#line 3098 "ll_backend.global_data.c"
    return ll_backend__global_data__succeeded;
#line 3100 "ll_backend.global_data.c"
  }
#line 3102 "ll_backend.global_data.c"
}

#line 3105 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____cell_type_num_remap_0_0_10001(
#line 3108 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 3110 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 3112 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3)
#line 3114 "ll_backend.global_data.c"
{
#line 3116 "ll_backend.global_data.c"
  {
#line 3118 "ll_backend.global_data.c"
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

#line 3121 "ll_backend.global_data.c"
    {
#line 3123 "ll_backend.global_data.c"
      ll_backend__global_data____Compare____cell_type_num_remap_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    }
#line 3126 "ll_backend.global_data.c"
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
#line 3128 "ll_backend.global_data.c"
  }
#line 3130 "ll_backend.global_data.c"
}

#line 3133 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____global_data_0_0_10001(
#line 3136 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 3138 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2)
#line 3140 "ll_backend.global_data.c"
{
#line 3142 "ll_backend.global_data.c"
  {
#line 3144 "ll_backend.global_data.c"
    MR_bool ll_backend__global_data__succeeded;

#line 3147 "ll_backend.global_data.c"
    {
#line 3149 "ll_backend.global_data.c"
      ll_backend__global_data__succeeded = ll_backend__global_data____Unify____global_data_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    }
#line 3152 "ll_backend.global_data.c"
    return ll_backend__global_data__succeeded;
#line 3154 "ll_backend.global_data.c"
  }
#line 3156 "ll_backend.global_data.c"
}

#line 3159 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____global_data_0_0_10001(
#line 3162 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 3164 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 3166 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3)
#line 3168 "ll_backend.global_data.c"
{
#line 3170 "ll_backend.global_data.c"
  {
#line 3172 "ll_backend.global_data.c"
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

#line 3175 "ll_backend.global_data.c"
    {
#line 3177 "ll_backend.global_data.c"
      ll_backend__global_data____Compare____global_data_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    }
#line 3180 "ll_backend.global_data.c"
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
#line 3182 "ll_backend.global_data.c"
  }
#line 3184 "ll_backend.global_data.c"
}

#line 3187 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____global_data_remapping_0_0_10001(
#line 3190 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 3192 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2)
#line 3194 "ll_backend.global_data.c"
{
#line 3196 "ll_backend.global_data.c"
  {
#line 3198 "ll_backend.global_data.c"
    MR_bool ll_backend__global_data__succeeded;

#line 3201 "ll_backend.global_data.c"
    {
#line 3203 "ll_backend.global_data.c"
      ll_backend__global_data__succeeded = ll_backend__global_data____Unify____global_data_remapping_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    }
#line 3206 "ll_backend.global_data.c"
    return ll_backend__global_data__succeeded;
#line 3208 "ll_backend.global_data.c"
  }
#line 3210 "ll_backend.global_data.c"
}

#line 3213 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____global_data_remapping_0_0_10001(
#line 3216 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 3218 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 3220 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3)
#line 3222 "ll_backend.global_data.c"
{
#line 3224 "ll_backend.global_data.c"
  {
#line 3226 "ll_backend.global_data.c"
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

#line 3229 "ll_backend.global_data.c"
    {
#line 3231 "ll_backend.global_data.c"
      ll_backend__global_data____Compare____global_data_remapping_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    }
#line 3234 "ll_backend.global_data.c"
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
#line 3236 "ll_backend.global_data.c"
  }
#line 3238 "ll_backend.global_data.c"
}

#line 3241 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____proc_layout_map_0_0_10001(
#line 3244 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 3246 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2)
#line 3248 "ll_backend.global_data.c"
{
#line 3250 "ll_backend.global_data.c"
  {
#line 3252 "ll_backend.global_data.c"
    MR_bool ll_backend__global_data__succeeded;

#line 3255 "ll_backend.global_data.c"
    {
#line 3257 "ll_backend.global_data.c"
      ll_backend__global_data__succeeded = ll_backend__global_data____Unify____proc_layout_map_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    }
#line 3260 "ll_backend.global_data.c"
    return ll_backend__global_data__succeeded;
#line 3262 "ll_backend.global_data.c"
  }
#line 3264 "ll_backend.global_data.c"
}

#line 3267 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____proc_layout_map_0_0_10001(
#line 3270 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 3272 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 3274 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3)
#line 3276 "ll_backend.global_data.c"
{
#line 3278 "ll_backend.global_data.c"
  {
#line 3280 "ll_backend.global_data.c"
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

#line 3283 "ll_backend.global_data.c"
    {
#line 3285 "ll_backend.global_data.c"
      ll_backend__global_data____Compare____proc_layout_map_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    }
#line 3288 "ll_backend.global_data.c"
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
#line 3290 "ll_backend.global_data.c"
  }
#line 3292 "ll_backend.global_data.c"
}

#line 3295 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____proc_var_map_0_0_10001(
#line 3298 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 3300 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2)
#line 3302 "ll_backend.global_data.c"
{
#line 3304 "ll_backend.global_data.c"
  {
#line 3306 "ll_backend.global_data.c"
    MR_bool ll_backend__global_data__succeeded;

#line 3309 "ll_backend.global_data.c"
    {
#line 3311 "ll_backend.global_data.c"
      ll_backend__global_data__succeeded = ll_backend__global_data____Unify____proc_var_map_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    }
#line 3314 "ll_backend.global_data.c"
    return ll_backend__global_data__succeeded;
#line 3316 "ll_backend.global_data.c"
  }
#line 3318 "ll_backend.global_data.c"
}

#line 3321 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____proc_var_map_0_0_10001(
#line 3324 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 3326 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 3328 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3)
#line 3330 "ll_backend.global_data.c"
{
#line 3332 "ll_backend.global_data.c"
  {
#line 3334 "ll_backend.global_data.c"
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

#line 3337 "ll_backend.global_data.c"
    {
#line 3339 "ll_backend.global_data.c"
      ll_backend__global_data____Compare____proc_var_map_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    }
#line 3342 "ll_backend.global_data.c"
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
#line 3344 "ll_backend.global_data.c"
  }
#line 3346 "ll_backend.global_data.c"
}

#line 3349 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_cell_group_0_0_10001(
#line 3352 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 3354 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2)
#line 3356 "ll_backend.global_data.c"
{
#line 3358 "ll_backend.global_data.c"
  {
#line 3360 "ll_backend.global_data.c"
    MR_bool ll_backend__global_data__succeeded;

#line 3363 "ll_backend.global_data.c"
    {
#line 3365 "ll_backend.global_data.c"
      ll_backend__global_data__succeeded = ll_backend__global_data____Unify____scalar_cell_group_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    }
#line 3368 "ll_backend.global_data.c"
    return ll_backend__global_data__succeeded;
#line 3370 "ll_backend.global_data.c"
  }
#line 3372 "ll_backend.global_data.c"
}

#line 3375 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____scalar_cell_group_0_0_10001(
#line 3378 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 3380 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 3382 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3)
#line 3384 "ll_backend.global_data.c"
{
#line 3386 "ll_backend.global_data.c"
  {
#line 3388 "ll_backend.global_data.c"
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

#line 3391 "ll_backend.global_data.c"
    {
#line 3393 "ll_backend.global_data.c"
      ll_backend__global_data____Compare____scalar_cell_group_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    }
#line 3396 "ll_backend.global_data.c"
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
#line 3398 "ll_backend.global_data.c"
  }
#line 3400 "ll_backend.global_data.c"
}

#line 3403 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_cell_group_remap_0_0_10001(
#line 3406 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 3408 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2)
#line 3410 "ll_backend.global_data.c"
{
#line 3412 "ll_backend.global_data.c"
  {
#line 3414 "ll_backend.global_data.c"
    MR_bool ll_backend__global_data__succeeded;

#line 3417 "ll_backend.global_data.c"
    {
#line 3419 "ll_backend.global_data.c"
      ll_backend__global_data__succeeded = ll_backend__global_data____Unify____scalar_cell_group_remap_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    }
#line 3422 "ll_backend.global_data.c"
    return ll_backend__global_data__succeeded;
#line 3424 "ll_backend.global_data.c"
  }
#line 3426 "ll_backend.global_data.c"
}

#line 3429 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____scalar_cell_group_remap_0_0_10001(
#line 3432 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 3434 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 3436 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3)
#line 3438 "ll_backend.global_data.c"
{
#line 3440 "ll_backend.global_data.c"
  {
#line 3442 "ll_backend.global_data.c"
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

#line 3445 "ll_backend.global_data.c"
    {
#line 3447 "ll_backend.global_data.c"
      ll_backend__global_data____Compare____scalar_cell_group_remap_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    }
#line 3450 "ll_backend.global_data.c"
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
#line 3452 "ll_backend.global_data.c"
  }
#line 3454 "ll_backend.global_data.c"
}

#line 3457 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_type_cell_map_0_0_10001(
#line 3460 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 3462 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2)
#line 3464 "ll_backend.global_data.c"
{
#line 3466 "ll_backend.global_data.c"
  {
#line 3468 "ll_backend.global_data.c"
    MR_bool ll_backend__global_data__succeeded;

#line 3471 "ll_backend.global_data.c"
    {
#line 3473 "ll_backend.global_data.c"
      ll_backend__global_data__succeeded = ll_backend__global_data____Unify____scalar_type_cell_map_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    }
#line 3476 "ll_backend.global_data.c"
    return ll_backend__global_data__succeeded;
#line 3478 "ll_backend.global_data.c"
  }
#line 3480 "ll_backend.global_data.c"
}

#line 3483 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____scalar_type_cell_map_0_0_10001(
#line 3486 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 3488 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 3490 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3)
#line 3492 "ll_backend.global_data.c"
{
#line 3494 "ll_backend.global_data.c"
  {
#line 3496 "ll_backend.global_data.c"
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

#line 3499 "ll_backend.global_data.c"
    {
#line 3501 "ll_backend.global_data.c"
      ll_backend__global_data____Compare____scalar_type_cell_map_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    }
#line 3504 "ll_backend.global_data.c"
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
#line 3506 "ll_backend.global_data.c"
  }
#line 3508 "ll_backend.global_data.c"
}

#line 3511 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____static_cell_info_0_0_10001(
#line 3514 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 3516 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2)
#line 3518 "ll_backend.global_data.c"
{
#line 3520 "ll_backend.global_data.c"
  {
#line 3522 "ll_backend.global_data.c"
    MR_bool ll_backend__global_data__succeeded;

#line 3525 "ll_backend.global_data.c"
    {
#line 3527 "ll_backend.global_data.c"
      ll_backend__global_data__succeeded = ll_backend__global_data____Unify____static_cell_info_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    }
#line 3530 "ll_backend.global_data.c"
    return ll_backend__global_data__succeeded;
#line 3532 "ll_backend.global_data.c"
  }
#line 3534 "ll_backend.global_data.c"
}

#line 3537 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____static_cell_info_0_0_10001(
#line 3540 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 3542 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 3544 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3)
#line 3546 "ll_backend.global_data.c"
{
#line 3548 "ll_backend.global_data.c"
  {
#line 3550 "ll_backend.global_data.c"
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

#line 3553 "ll_backend.global_data.c"
    {
#line 3555 "ll_backend.global_data.c"
      ll_backend__global_data____Compare____static_cell_info_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    }
#line 3558 "ll_backend.global_data.c"
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
#line 3560 "ll_backend.global_data.c"
  }
#line 3562 "ll_backend.global_data.c"
}

#line 3565 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____static_cell_remap_info_0_0_10001(
#line 3568 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 3570 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2)
#line 3572 "ll_backend.global_data.c"
{
#line 3574 "ll_backend.global_data.c"
  {
#line 3576 "ll_backend.global_data.c"
    MR_bool ll_backend__global_data__succeeded;

#line 3579 "ll_backend.global_data.c"
    {
#line 3581 "ll_backend.global_data.c"
      ll_backend__global_data__succeeded = ll_backend__global_data____Unify____static_cell_remap_info_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    }
#line 3584 "ll_backend.global_data.c"
    return ll_backend__global_data__succeeded;
#line 3586 "ll_backend.global_data.c"
  }
#line 3588 "ll_backend.global_data.c"
}

#line 3591 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____static_cell_remap_info_0_0_10001(
#line 3594 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 3596 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 3598 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3)
#line 3600 "ll_backend.global_data.c"
{
#line 3602 "ll_backend.global_data.c"
  {
#line 3604 "ll_backend.global_data.c"
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

#line 3607 "ll_backend.global_data.c"
    {
#line 3609 "ll_backend.global_data.c"
      ll_backend__global_data____Compare____static_cell_remap_info_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    }
#line 3612 "ll_backend.global_data.c"
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
#line 3614 "ll_backend.global_data.c"
  }
#line 3616 "ll_backend.global_data.c"
}

#line 3619 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____static_cell_sub_info_0_0_10001(
#line 3622 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 3624 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2)
#line 3626 "ll_backend.global_data.c"
{
#line 3628 "ll_backend.global_data.c"
  {
#line 3630 "ll_backend.global_data.c"
    MR_bool ll_backend__global_data__succeeded;

#line 3633 "ll_backend.global_data.c"
    {
#line 3635 "ll_backend.global_data.c"
      ll_backend__global_data__succeeded = ll_backend__global_data____Unify____static_cell_sub_info_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    }
#line 3638 "ll_backend.global_data.c"
    return ll_backend__global_data__succeeded;
#line 3640 "ll_backend.global_data.c"
  }
#line 3642 "ll_backend.global_data.c"
}

#line 3645 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____static_cell_sub_info_0_0_10001(
#line 3648 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 3650 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 3652 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3)
#line 3654 "ll_backend.global_data.c"
{
#line 3656 "ll_backend.global_data.c"
  {
#line 3658 "ll_backend.global_data.c"
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

#line 3661 "ll_backend.global_data.c"
    {
#line 3663 "ll_backend.global_data.c"
      ll_backend__global_data____Compare____static_cell_sub_info_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    }
#line 3666 "ll_backend.global_data.c"
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
#line 3668 "ll_backend.global_data.c"
  }
#line 3670 "ll_backend.global_data.c"
}

#line 3673 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_cell_group_0_0_10001(
#line 3676 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 3678 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2)
#line 3680 "ll_backend.global_data.c"
{
#line 3682 "ll_backend.global_data.c"
  {
#line 3684 "ll_backend.global_data.c"
    MR_bool ll_backend__global_data__succeeded;

#line 3687 "ll_backend.global_data.c"
    {
#line 3689 "ll_backend.global_data.c"
      ll_backend__global_data__succeeded = ll_backend__global_data____Unify____vector_cell_group_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    }
#line 3692 "ll_backend.global_data.c"
    return ll_backend__global_data__succeeded;
#line 3694 "ll_backend.global_data.c"
  }
#line 3696 "ll_backend.global_data.c"
}

#line 3699 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____vector_cell_group_0_0_10001(
#line 3702 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 3704 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 3706 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3)
#line 3708 "ll_backend.global_data.c"
{
#line 3710 "ll_backend.global_data.c"
  {
#line 3712 "ll_backend.global_data.c"
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

#line 3715 "ll_backend.global_data.c"
    {
#line 3717 "ll_backend.global_data.c"
      ll_backend__global_data____Compare____vector_cell_group_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    }
#line 3720 "ll_backend.global_data.c"
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
#line 3722 "ll_backend.global_data.c"
  }
#line 3724 "ll_backend.global_data.c"
}

#line 3727 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_contents_0_0_10001(
#line 3730 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 3732 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2)
#line 3734 "ll_backend.global_data.c"
{
#line 3736 "ll_backend.global_data.c"
  {
#line 3738 "ll_backend.global_data.c"
    MR_bool ll_backend__global_data__succeeded;

#line 3741 "ll_backend.global_data.c"
    {
#line 3743 "ll_backend.global_data.c"
      ll_backend__global_data__succeeded = ll_backend__global_data____Unify____vector_contents_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    }
#line 3746 "ll_backend.global_data.c"
    return ll_backend__global_data__succeeded;
#line 3748 "ll_backend.global_data.c"
  }
#line 3750 "ll_backend.global_data.c"
}

#line 3753 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____vector_contents_0_0_10001(
#line 3756 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 3758 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 3760 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3)
#line 3762 "ll_backend.global_data.c"
{
#line 3764 "ll_backend.global_data.c"
  {
#line 3766 "ll_backend.global_data.c"
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

#line 3769 "ll_backend.global_data.c"
    {
#line 3771 "ll_backend.global_data.c"
      ll_backend__global_data____Compare____vector_contents_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    }
#line 3774 "ll_backend.global_data.c"
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
#line 3776 "ll_backend.global_data.c"
  }
#line 3778 "ll_backend.global_data.c"
}

#line 3781 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_type_cell_map_0_0_10001(
#line 3784 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 3786 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2)
#line 3788 "ll_backend.global_data.c"
{
#line 3790 "ll_backend.global_data.c"
  {
#line 3792 "ll_backend.global_data.c"
    MR_bool ll_backend__global_data__succeeded;

#line 3795 "ll_backend.global_data.c"
    {
#line 3797 "ll_backend.global_data.c"
      ll_backend__global_data__succeeded = ll_backend__global_data____Unify____vector_type_cell_map_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    }
#line 3800 "ll_backend.global_data.c"
    return ll_backend__global_data__succeeded;
#line 3802 "ll_backend.global_data.c"
  }
#line 3804 "ll_backend.global_data.c"
}

#line 3807 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____vector_type_cell_map_0_0_10001(
#line 3810 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 3812 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 3814 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3)
#line 3816 "ll_backend.global_data.c"
{
#line 3818 "ll_backend.global_data.c"
  {
#line 3820 "ll_backend.global_data.c"
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

#line 3823 "ll_backend.global_data.c"
    {
#line 3825 "ll_backend.global_data.c"
      ll_backend__global_data____Compare____vector_type_cell_map_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    }
#line 3828 "ll_backend.global_data.c"
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
#line 3830 "ll_backend.global_data.c"
  }
#line 3832 "ll_backend.global_data.c"
}

#line 792 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data__IntroducedFrom__pred__merge_static_cell_infos__792__1_2_p_0(
#line 792 "global_data.m"
  MR_Word ll_backend__global_data__SubInfoA_9,
#line 792 "global_data.m"
  MR_Word ll_backend__global_data__SubInfoB_14)
#line 792 "global_data.m"
{
#line 329 "global_data.m"
  {
#line 329 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 329 "global_data.m"
    MR_Integer ll_backend__global_data__CastX_52 = (MR_Integer) ll_backend__global_data__SubInfoA_9;
#line 329 "global_data.m"
    MR_Integer ll_backend__global_data__CastY_53 = (MR_Integer) ll_backend__global_data__SubInfoB_14;

#line 329 "global_data.m"
    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_52 == ll_backend__global_data__CastY_53);
#line 329 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 329 "global_data.m"
      ll_backend__global_data__succeeded = MR_TRUE;
#line 329 "global_data.m"
    else
#line 329 "global_data.m"
      {
#line 329 "global_data.m"
        MR_Word ll_backend__global_data__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SubInfoA_9, (MR_Integer) 0)));
#line 329 "global_data.m"
        MR_Word ll_backend__global_data__V_47_47 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SubInfoA_9, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 329 "global_data.m"
        MR_Word ll_backend__global_data__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SubInfoA_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 329 "global_data.m"
        MR_Word ll_backend__global_data__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SubInfoB_14, (MR_Integer) 0)));
#line 329 "global_data.m"
        MR_Word ll_backend__global_data__V_50_50 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SubInfoB_14, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 329 "global_data.m"
        MR_Word ll_backend__global_data__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SubInfoB_14, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 3876 "ll_backend.global_data.c"
        {
#line 3878 "ll_backend.global_data.c"
          ll_backend__global_data__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__global_data__V_46_46, ll_backend__global_data__V_49_49);
        }
#line 329 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 329 "global_data.m"
          {
#line 3885 "ll_backend.global_data.c"
            ll_backend__global_data__succeeded = (ll_backend__global_data__V_47_47 == ll_backend__global_data__V_50_50);
#line 329 "global_data.m"
            if (ll_backend__global_data__succeeded)
#line 3889 "ll_backend.global_data.c"
              ll_backend__global_data__succeeded = (ll_backend__global_data__V_48_48 == ll_backend__global_data__V_51_51);
#line 329 "global_data.m"
          }
#line 329 "global_data.m"
      }
#line 329 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 329 "global_data.m"
  }
#line 792 "global_data.m"
}

#line 534 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data__IntroducedFrom__pred__add_vector_static_cell__534__1_1_p_0(
#line 534 "global_data.m"
  MR_Word ll_backend__global_data__VectorData_7)
#line 534 "global_data.m"
{
#line 534 "global_data.m"
  {
#line 534 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;

#line 534 "global_data.m"
    {
#line 534 "global_data.m"
      return ll_backend__global_data__succeeded = mercury__list__is_not_empty_1_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[0], ll_backend__global_data__VectorData_7);
    }
#line 534 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 534 "global_data.m"
  }
#line 534 "global_data.m"
}

#line 533 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data__IntroducedFrom__pred__add_vector_static_cell__533__1_1_p_0(
#line 533 "global_data.m"
  MR_Word ll_backend__global_data__LLDSTypes_6)
#line 533 "global_data.m"
{
#line 533 "global_data.m"
  {
#line 533 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;

#line 533 "global_data.m"
    {
#line 533 "global_data.m"
      return ll_backend__global_data__succeeded = mercury__list__is_not_empty_1_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0, ll_backend__global_data__LLDSTypes_6);
    }
#line 533 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 533 "global_data.m"
  }
#line 533 "global_data.m"
}

#line 338 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____vector_type_cell_map_0_0(
#line 338 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 338 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 338 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3)
#line 338 "global_data.m"
{
#line 338 "global_data.m"
  {
#line 338 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 338 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar1_4 = ll_backend__global_data__HeadVar__2_2;
#line 338 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar2_5 = ll_backend__global_data__HeadVar__3_3;

#line 338 "global_data.m"
    {
#line 338 "global_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[7], ll_backend__global_data__HeadVar__1_1, ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_5)));
#line 338 "global_data.m"
      return;
    }
#line 338 "global_data.m"
  }
#line 338 "global_data.m"
}

#line 338 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_type_cell_map_0_0(
#line 338 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 338 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2)
#line 338 "global_data.m"
{
#line 338 "global_data.m"
  {
#line 338 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 338 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar1_3 = ll_backend__global_data__HeadVar__1_1;
#line 338 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar2_4 = ll_backend__global_data__HeadVar__2_2;

#line 338 "global_data.m"
    {
#line 338 "global_data.m"
      return ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[7], ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_4)));
    }
#line 338 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 338 "global_data.m"
  }
#line 338 "global_data.m"
}

#line 326 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____vector_contents_0_0(
#line 326 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 326 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 326 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3)
#line 326 "global_data.m"
{
#line 326 "global_data.m"
  {
#line 326 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 326 "global_data.m"
    MR_Integer ll_backend__global_data__CastX_6 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;
#line 326 "global_data.m"
    MR_Integer ll_backend__global_data__CastY_7 = (MR_Integer) ll_backend__global_data__HeadVar__3_3;

#line 326 "global_data.m"
    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_6 == ll_backend__global_data__CastY_7);
#line 326 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 4036 "ll_backend.global_data.c"
      *ll_backend__global_data__HeadVar__1_1 = (MR_Integer) 0;
#line 326 "global_data.m"
    else
#line 326 "global_data.m"
      {
#line 326 "global_data.m"
        MR_Word ll_backend__global_data__V_4_4 = (MR_Word) ll_backend__global_data__HeadVar__2_2;
#line 326 "global_data.m"
        MR_Word ll_backend__global_data__V_5_5 = (MR_Word) ll_backend__global_data__HeadVar__3_3;

#line 326 "global_data.m"
        {
#line 326 "global_data.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[7], ll_backend__global_data__HeadVar__1_1, ((MR_Box) (ll_backend__global_data__V_4_4)), ((MR_Box) (ll_backend__global_data__V_5_5)));
#line 326 "global_data.m"
          return;
        }
#line 326 "global_data.m"
      }
#line 326 "global_data.m"
  }
#line 326 "global_data.m"
}

#line 326 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_contents_0_0(
#line 326 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 326 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2)
#line 326 "global_data.m"
{
#line 326 "global_data.m"
  {
#line 326 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 326 "global_data.m"
    MR_Integer ll_backend__global_data__CastX_5 = (MR_Integer) ll_backend__global_data__HeadVar__1_1;
#line 326 "global_data.m"
    MR_Integer ll_backend__global_data__CastY_6 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;

#line 326 "global_data.m"
    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_5 == ll_backend__global_data__CastY_6);
#line 326 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 326 "global_data.m"
      ll_backend__global_data__succeeded = MR_TRUE;
#line 326 "global_data.m"
    else
#line 326 "global_data.m"
      {
#line 326 "global_data.m"
        MR_Word ll_backend__global_data__V_3_3 = (MR_Word) ll_backend__global_data__HeadVar__1_1;
#line 326 "global_data.m"
        MR_Word ll_backend__global_data__V_4_4 = (MR_Word) ll_backend__global_data__HeadVar__2_2;

#line 4094 "ll_backend.global_data.c"
        {
#line 4096 "ll_backend.global_data.c"
          return ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[7], ((MR_Box) (ll_backend__global_data__V_3_3)), ((MR_Box) (ll_backend__global_data__V_4_4)));
        }
#line 326 "global_data.m"
      }
#line 326 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 326 "global_data.m"
  }
#line 326 "global_data.m"
}

#line 320 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____vector_cell_group_0_0(
#line 320 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 320 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 320 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3)
#line 320 "global_data.m"
{
#line 320 "global_data.m"
  {
#line 320 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 320 "global_data.m"
    MR_Integer ll_backend__global_data__CastX_9 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;
#line 320 "global_data.m"
    MR_Integer ll_backend__global_data__CastY_10 = (MR_Integer) ll_backend__global_data__HeadVar__3_3;

#line 320 "global_data.m"
    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_9 == ll_backend__global_data__CastY_10);
#line 320 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 4132 "ll_backend.global_data.c"
      *ll_backend__global_data__HeadVar__1_1 = (MR_Integer) 0;
#line 320 "global_data.m"
    else
#line 320 "global_data.m"
      {
#line 320 "global_data.m"
        MR_Word ll_backend__global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 320 "global_data.m"
        MR_Word ll_backend__global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 320 "global_data.m"
        MR_Word ll_backend__global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 0)));
#line 320 "global_data.m"
        MR_Word ll_backend__global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 1)));
#line 320 "global_data.m"
        MR_Word ll_backend__global_data__V_8_8;

#line 320 "global_data.m"
        {
#line 320 "global_data.m"
          mercury__counter____Compare____counter_0_0(&ll_backend__global_data__V_8_8, ll_backend__global_data__V_4_4, ll_backend__global_data__V_6_6);
        }
#line 4154 "ll_backend.global_data.c"
        ll_backend__global_data__succeeded = (ll_backend__global_data__V_8_8 == (MR_Integer) 0);
#line 320 "global_data.m"
        ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 320 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 320 "global_data.m"
          *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__V_8_8;
#line 320 "global_data.m"
        else
#line 320 "global_data.m"
          {
#line 320 "global_data.m"
            {
#line 320 "global_data.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[10], ll_backend__global_data__HeadVar__1_1, ((MR_Box) (ll_backend__global_data__V_5_5)), ((MR_Box) (ll_backend__global_data__V_7_7)));
#line 320 "global_data.m"
              return;
            }
#line 320 "global_data.m"
          }
#line 320 "global_data.m"
      }
#line 320 "global_data.m"
  }
#line 320 "global_data.m"
}

#line 320 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_cell_group_0_0(
#line 320 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 320 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2)
#line 320 "global_data.m"
{
#line 320 "global_data.m"
  {
#line 320 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 320 "global_data.m"
    MR_Integer ll_backend__global_data__CastX_7 = (MR_Integer) ll_backend__global_data__HeadVar__1_1;
#line 320 "global_data.m"
    MR_Integer ll_backend__global_data__CastY_8 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;

#line 320 "global_data.m"
    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_7 == ll_backend__global_data__CastY_8);
#line 320 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 320 "global_data.m"
      ll_backend__global_data__succeeded = MR_TRUE;
#line 320 "global_data.m"
    else
#line 320 "global_data.m"
      {
#line 320 "global_data.m"
        MR_Word ll_backend__global_data__TypeInfo_10_10;
#line 320 "global_data.m"
        MR_Word ll_backend__global_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 0)));
#line 320 "global_data.m"
        MR_Word ll_backend__global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 1)));
#line 320 "global_data.m"
        MR_Word ll_backend__global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 320 "global_data.m"
        MR_Word ll_backend__global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));

#line 4221 "ll_backend.global_data.c"
        {
#line 4223 "ll_backend.global_data.c"
          ll_backend__global_data__succeeded = mercury__counter____Unify____counter_0_0(ll_backend__global_data__V_3_3, ll_backend__global_data__V_5_5);
        }
#line 320 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 320 "global_data.m"
          {
#line 4230 "ll_backend.global_data.c"
            ll_backend__global_data__TypeInfo_10_10 = (MR_Word) &ll_backend__global_data_scalar_common_1[10];
#line 4232 "ll_backend.global_data.c"
            {
#line 4234 "ll_backend.global_data.c"
              return ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0(ll_backend__global_data__TypeInfo_10_10, ((MR_Box) (ll_backend__global_data__V_4_4)), ((MR_Box) (ll_backend__global_data__V_6_6)));
            }
#line 320 "global_data.m"
          }
#line 320 "global_data.m"
      }
#line 320 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 320 "global_data.m"
  }
#line 320 "global_data.m"
}

#line 329 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____static_cell_sub_info_0_0(
#line 329 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 329 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 329 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3)
#line 329 "global_data.m"
{
#line 329 "global_data.m"
  {
#line 329 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 329 "global_data.m"
    MR_Integer ll_backend__global_data__CastX_12 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;
#line 329 "global_data.m"
    MR_Integer ll_backend__global_data__CastY_13 = (MR_Integer) ll_backend__global_data__HeadVar__3_3;

#line 329 "global_data.m"
    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_12 == ll_backend__global_data__CastY_13);
#line 329 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 4272 "ll_backend.global_data.c"
      *ll_backend__global_data__HeadVar__1_1 = (MR_Integer) 0;
#line 329 "global_data.m"
    else
#line 329 "global_data.m"
      {
#line 329 "global_data.m"
        MR_Word ll_backend__global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 329 "global_data.m"
        MR_Word ll_backend__global_data__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 329 "global_data.m"
        MR_Word ll_backend__global_data__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 329 "global_data.m"
        MR_Word ll_backend__global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 0)));
#line 329 "global_data.m"
        MR_Word ll_backend__global_data__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 329 "global_data.m"
        MR_Word ll_backend__global_data__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 329 "global_data.m"
        MR_Word ll_backend__global_data__V_10_10;

#line 329 "global_data.m"
        {
#line 329 "global_data.m"
          mdbcomp__prim_data____Compare____sym_name_0_0(&ll_backend__global_data__V_10_10, ll_backend__global_data__V_4_4, ll_backend__global_data__V_7_7);
        }
#line 4298 "ll_backend.global_data.c"
        ll_backend__global_data__succeeded = (ll_backend__global_data__V_10_10 == (MR_Integer) 0);
#line 329 "global_data.m"
        ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 329 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 329 "global_data.m"
          *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__V_10_10;
#line 329 "global_data.m"
        else
#line 329 "global_data.m"
          {
#line 329 "global_data.m"
            MR_Word ll_backend__global_data__V_11_11;
#line 329 "global_data.m"
            MR_Integer ll_backend__global_data__V_17_17 = (MR_Integer) ll_backend__global_data__V_5_5;
#line 329 "global_data.m"
            MR_Integer ll_backend__global_data__V_18_18 = (MR_Integer) ll_backend__global_data__V_8_8;

#line 329 "global_data.m"
            {
#line 329 "global_data.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__global_data__V_11_11, ll_backend__global_data__V_17_17, ll_backend__global_data__V_18_18);
            }
#line 4322 "ll_backend.global_data.c"
            ll_backend__global_data__succeeded = (ll_backend__global_data__V_11_11 == (MR_Integer) 0);
#line 329 "global_data.m"
            ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 329 "global_data.m"
            if (ll_backend__global_data__succeeded)
#line 329 "global_data.m"
              *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__V_11_11;
#line 329 "global_data.m"
            else
#line 329 "global_data.m"
              {
#line 329 "global_data.m"
                MR_Integer ll_backend__global_data__V_19_19 = (MR_Integer) ll_backend__global_data__V_6_6;
#line 329 "global_data.m"
                MR_Integer ll_backend__global_data__V_20_20 = (MR_Integer) ll_backend__global_data__V_9_9;

#line 329 "global_data.m"
                {
#line 329 "global_data.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__global_data__HeadVar__1_1, ll_backend__global_data__V_19_19, ll_backend__global_data__V_20_20);
#line 329 "global_data.m"
                  return;
                }
#line 329 "global_data.m"
              }
#line 329 "global_data.m"
          }
#line 329 "global_data.m"
      }
#line 329 "global_data.m"
  }
#line 329 "global_data.m"
}

#line 329 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____static_cell_sub_info_0_0(
#line 329 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 329 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2)
#line 329 "global_data.m"
{
#line 329 "global_data.m"
  {
#line 329 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 329 "global_data.m"
    MR_Integer ll_backend__global_data__CastX_9 = (MR_Integer) ll_backend__global_data__HeadVar__1_1;
#line 329 "global_data.m"
    MR_Integer ll_backend__global_data__CastY_10 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;

#line 329 "global_data.m"
    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_9 == ll_backend__global_data__CastY_10);
#line 329 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 329 "global_data.m"
      ll_backend__global_data__succeeded = MR_TRUE;
#line 329 "global_data.m"
    else
#line 329 "global_data.m"
      {
#line 329 "global_data.m"
        MR_Word ll_backend__global_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 0)));
#line 329 "global_data.m"
        MR_Word ll_backend__global_data__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 329 "global_data.m"
        MR_Word ll_backend__global_data__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 329 "global_data.m"
        MR_Word ll_backend__global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 329 "global_data.m"
        MR_Word ll_backend__global_data__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 329 "global_data.m"
        MR_Word ll_backend__global_data__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 4398 "ll_backend.global_data.c"
        {
#line 4400 "ll_backend.global_data.c"
          ll_backend__global_data__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__global_data__V_3_3, ll_backend__global_data__V_6_6);
        }
#line 329 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 329 "global_data.m"
          {
#line 4407 "ll_backend.global_data.c"
            ll_backend__global_data__succeeded = (ll_backend__global_data__V_4_4 == ll_backend__global_data__V_7_7);
#line 329 "global_data.m"
            if (ll_backend__global_data__succeeded)
#line 4411 "ll_backend.global_data.c"
              ll_backend__global_data__succeeded = (ll_backend__global_data__V_5_5 == ll_backend__global_data__V_8_8);
#line 329 "global_data.m"
          }
#line 329 "global_data.m"
      }
#line 329 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 329 "global_data.m"
  }
#line 329 "global_data.m"
}

#line 719 "global_data.m"
void MR_CALL 
ll_backend__global_data____Compare____static_cell_remap_info_0_0(
#line 719 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 719 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 719 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3)
#line 719 "global_data.m"
{
#line 719 "global_data.m"
  {
#line 719 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 719 "global_data.m"
    MR_Integer ll_backend__global_data__CastX_9 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;
#line 719 "global_data.m"
    MR_Integer ll_backend__global_data__CastY_10 = (MR_Integer) ll_backend__global_data__HeadVar__3_3;

#line 719 "global_data.m"
    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_9 == ll_backend__global_data__CastY_10);
#line 719 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 4448 "ll_backend.global_data.c"
      *ll_backend__global_data__HeadVar__1_1 = (MR_Integer) 0;
#line 719 "global_data.m"
    else
#line 719 "global_data.m"
      {
#line 719 "global_data.m"
        MR_Word ll_backend__global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 719 "global_data.m"
        MR_Word ll_backend__global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 719 "global_data.m"
        MR_Word ll_backend__global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 0)));
#line 719 "global_data.m"
        MR_Word ll_backend__global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 1)));
#line 719 "global_data.m"
        MR_Word ll_backend__global_data__V_8_8;

#line 719 "global_data.m"
        {
#line 719 "global_data.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[2], &ll_backend__global_data__V_8_8, ((MR_Box) (ll_backend__global_data__V_4_4)), ((MR_Box) (ll_backend__global_data__V_6_6)));
        }
#line 4470 "ll_backend.global_data.c"
        ll_backend__global_data__succeeded = (ll_backend__global_data__V_8_8 == (MR_Integer) 0);
#line 719 "global_data.m"
        ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 719 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 719 "global_data.m"
          *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__V_8_8;
#line 719 "global_data.m"
        else
#line 719 "global_data.m"
          {
#line 719 "global_data.m"
            {
#line 719 "global_data.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[5], ll_backend__global_data__HeadVar__1_1, ((MR_Box) (ll_backend__global_data__V_5_5)), ((MR_Box) (ll_backend__global_data__V_7_7)));
#line 719 "global_data.m"
              return;
            }
#line 719 "global_data.m"
          }
#line 719 "global_data.m"
      }
#line 719 "global_data.m"
  }
#line 719 "global_data.m"
}

#line 719 "global_data.m"
MR_bool MR_CALL 
ll_backend__global_data____Unify____static_cell_remap_info_0_0(
#line 719 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 719 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2)
#line 719 "global_data.m"
{
#line 719 "global_data.m"
  {
#line 719 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 719 "global_data.m"
    MR_Integer ll_backend__global_data__CastX_7 = (MR_Integer) ll_backend__global_data__HeadVar__1_1;
#line 719 "global_data.m"
    MR_Integer ll_backend__global_data__CastY_8 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;

#line 719 "global_data.m"
    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_7 == ll_backend__global_data__CastY_8);
#line 719 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 719 "global_data.m"
      ll_backend__global_data__succeeded = MR_TRUE;
#line 719 "global_data.m"
    else
#line 719 "global_data.m"
      {
#line 719 "global_data.m"
        MR_Word ll_backend__global_data__TypeInfo_10_10;
#line 719 "global_data.m"
        MR_Word ll_backend__global_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 0)));
#line 719 "global_data.m"
        MR_Word ll_backend__global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 1)));
#line 719 "global_data.m"
        MR_Word ll_backend__global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 719 "global_data.m"
        MR_Word ll_backend__global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));

#line 4537 "ll_backend.global_data.c"
        {
#line 4539 "ll_backend.global_data.c"
          ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[2], ((MR_Box) (ll_backend__global_data__V_3_3)), ((MR_Box) (ll_backend__global_data__V_5_5)));
        }
#line 719 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 719 "global_data.m"
          {
#line 4546 "ll_backend.global_data.c"
            ll_backend__global_data__TypeInfo_10_10 = (MR_Word) &ll_backend__global_data_scalar_common_1[5];
#line 4548 "ll_backend.global_data.c"
            {
#line 4550 "ll_backend.global_data.c"
              return ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0(ll_backend__global_data__TypeInfo_10_10, ((MR_Box) (ll_backend__global_data__V_4_4)), ((MR_Box) (ll_backend__global_data__V_6_6)));
            }
#line 719 "global_data.m"
          }
#line 719 "global_data.m"
      }
#line 719 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 719 "global_data.m"
  }
#line 719 "global_data.m"
}

#line 340 "global_data.m"
void MR_CALL 
ll_backend__global_data____Compare____static_cell_info_0_0(
#line 340 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 340 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 340 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3)
#line 340 "global_data.m"
{
#line 340 "global_data.m"
  {
#line 340 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 340 "global_data.m"
    MR_Integer ll_backend__global_data__CastX_18 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;
#line 340 "global_data.m"
    MR_Integer ll_backend__global_data__CastY_19 = (MR_Integer) ll_backend__global_data__HeadVar__3_3;

#line 340 "global_data.m"
    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_18 == ll_backend__global_data__CastY_19);
#line 340 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 4588 "ll_backend.global_data.c"
      *ll_backend__global_data__HeadVar__1_1 = (MR_Integer) 0;
#line 340 "global_data.m"
    else
#line 340 "global_data.m"
      {
#line 340 "global_data.m"
        MR_Word ll_backend__global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 340 "global_data.m"
        MR_Word ll_backend__global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 340 "global_data.m"
        MR_Word ll_backend__global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 2)));
#line 340 "global_data.m"
        MR_Word ll_backend__global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 3)));
#line 340 "global_data.m"
        MR_Word ll_backend__global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 4)));
#line 340 "global_data.m"
        MR_Word ll_backend__global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 0)));
#line 340 "global_data.m"
        MR_Word ll_backend__global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 1)));
#line 340 "global_data.m"
        MR_Word ll_backend__global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 2)));
#line 340 "global_data.m"
        MR_Word ll_backend__global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 3)));
#line 340 "global_data.m"
        MR_Word ll_backend__global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 4)));
#line 340 "global_data.m"
        MR_Word ll_backend__global_data__V_14_14;
#line 329 "global_data.m"
        MR_Integer ll_backend__global_data__CastX_33 = (MR_Integer) ll_backend__global_data__V_4_4;
#line 329 "global_data.m"
        MR_Integer ll_backend__global_data__CastY_34 = (MR_Integer) ll_backend__global_data__V_9_9;

#line 329 "global_data.m"
        ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_33 == ll_backend__global_data__CastY_34);
#line 329 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 4625 "ll_backend.global_data.c"
          {
#line 4627 "ll_backend.global_data.c"
            ll_backend__global_data__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
#line 340 "global_data.m"
            ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 4631 "ll_backend.global_data.c"
            if (ll_backend__global_data__succeeded)
#line 4633 "ll_backend.global_data.c"
              {
#line 4635 "ll_backend.global_data.c"
                ll_backend__global_data__V_14_14 = (MR_Integer) 0;
#line 4637 "ll_backend.global_data.c"
                ll_backend__global_data__succeeded = MR_TRUE;
#line 4639 "ll_backend.global_data.c"
              }
#line 4641 "ll_backend.global_data.c"
          }
#line 329 "global_data.m"
        else
#line 329 "global_data.m"
          {
#line 329 "global_data.m"
            MR_Word ll_backend__global_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_4_4, (MR_Integer) 0)));
#line 329 "global_data.m"
            MR_Word ll_backend__global_data__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_4_4, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 329 "global_data.m"
            MR_Word ll_backend__global_data__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_4_4, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 329 "global_data.m"
            MR_Word ll_backend__global_data__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_9_9, (MR_Integer) 0)));
#line 329 "global_data.m"
            MR_Word ll_backend__global_data__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_9_9, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 329 "global_data.m"
            MR_Word ll_backend__global_data__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_9_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 329 "global_data.m"
            MR_Word ll_backend__global_data__V_31_31;

#line 329 "global_data.m"
            {
#line 329 "global_data.m"
              mdbcomp__prim_data____Compare____sym_name_0_0(&ll_backend__global_data__V_31_31, ll_backend__global_data__V_25_25, ll_backend__global_data__V_28_28);
            }
#line 4667 "ll_backend.global_data.c"
            ll_backend__global_data__succeeded = (ll_backend__global_data__V_31_31 == (MR_Integer) 0);
#line 329 "global_data.m"
            ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 329 "global_data.m"
            if (ll_backend__global_data__succeeded)
#line 329 "global_data.m"
              {
#line 329 "global_data.m"
                ll_backend__global_data__V_14_14 = ll_backend__global_data__V_31_31;
#line 4677 "ll_backend.global_data.c"
                ll_backend__global_data__succeeded = (ll_backend__global_data__V_14_14 == (MR_Integer) 0);
#line 340 "global_data.m"
                ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 329 "global_data.m"
              }
#line 329 "global_data.m"
            else
#line 329 "global_data.m"
              {
#line 329 "global_data.m"
                MR_Word ll_backend__global_data__V_32_32;
#line 329 "global_data.m"
                MR_Integer ll_backend__global_data__V_38_38 = (MR_Integer) ll_backend__global_data__V_26_26;
#line 329 "global_data.m"
                MR_Integer ll_backend__global_data__V_39_39 = (MR_Integer) ll_backend__global_data__V_29_29;

#line 329 "global_data.m"
                {
#line 329 "global_data.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__global_data__V_32_32, ll_backend__global_data__V_38_38, ll_backend__global_data__V_39_39);
                }
#line 4699 "ll_backend.global_data.c"
                ll_backend__global_data__succeeded = (ll_backend__global_data__V_32_32 == (MR_Integer) 0);
#line 329 "global_data.m"
                ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 329 "global_data.m"
                if (ll_backend__global_data__succeeded)
#line 329 "global_data.m"
                  {
#line 329 "global_data.m"
                    ll_backend__global_data__V_14_14 = ll_backend__global_data__V_32_32;
#line 4709 "ll_backend.global_data.c"
                    ll_backend__global_data__succeeded = (ll_backend__global_data__V_14_14 == (MR_Integer) 0);
#line 340 "global_data.m"
                    ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 329 "global_data.m"
                  }
#line 329 "global_data.m"
                else
#line 329 "global_data.m"
                  {
#line 329 "global_data.m"
                    MR_Integer ll_backend__global_data__V_40_40 = (MR_Integer) ll_backend__global_data__V_27_27;
#line 329 "global_data.m"
                    MR_Integer ll_backend__global_data__V_41_41 = (MR_Integer) ll_backend__global_data__V_30_30;

#line 329 "global_data.m"
                    {
#line 329 "global_data.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__global_data__V_14_14, ll_backend__global_data__V_40_40, ll_backend__global_data__V_41_41);
                    }
#line 4729 "ll_backend.global_data.c"
                    ll_backend__global_data__succeeded = (ll_backend__global_data__V_14_14 == (MR_Integer) 0);
#line 340 "global_data.m"
                    ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 329 "global_data.m"
                  }
#line 329 "global_data.m"
              }
#line 329 "global_data.m"
          }
#line 340 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 340 "global_data.m"
          *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__V_14_14;
#line 340 "global_data.m"
        else
#line 340 "global_data.m"
          {
#line 340 "global_data.m"
            MR_Word ll_backend__global_data__V_15_15;

#line 340 "global_data.m"
            {
#line 340 "global_data.m"
              mercury__counter____Compare____counter_0_0(&ll_backend__global_data__V_15_15, ll_backend__global_data__V_5_5, ll_backend__global_data__V_10_10);
            }
#line 4755 "ll_backend.global_data.c"
            ll_backend__global_data__succeeded = (ll_backend__global_data__V_15_15 == (MR_Integer) 0);
#line 340 "global_data.m"
            ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 340 "global_data.m"
            if (ll_backend__global_data__succeeded)
#line 340 "global_data.m"
              *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__V_15_15;
#line 340 "global_data.m"
            else
#line 340 "global_data.m"
              {
#line 340 "global_data.m"
                MR_Word ll_backend__global_data__V_16_16;

#line 340 "global_data.m"
                {
#line 340 "global_data.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[1], &ll_backend__global_data__V_16_16, ((MR_Box) (ll_backend__global_data__V_6_6)), ((MR_Box) (ll_backend__global_data__V_11_11)));
                }
#line 4775 "ll_backend.global_data.c"
                ll_backend__global_data__succeeded = (ll_backend__global_data__V_16_16 == (MR_Integer) 0);
#line 340 "global_data.m"
                ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 340 "global_data.m"
                if (ll_backend__global_data__succeeded)
#line 340 "global_data.m"
                  *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__V_16_16;
#line 340 "global_data.m"
                else
#line 340 "global_data.m"
                  {
#line 340 "global_data.m"
                    MR_Word ll_backend__global_data__V_17_17;

#line 340 "global_data.m"
                    {
#line 340 "global_data.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[4], &ll_backend__global_data__V_17_17, ((MR_Box) (ll_backend__global_data__V_7_7)), ((MR_Box) (ll_backend__global_data__V_12_12)));
                    }
#line 4795 "ll_backend.global_data.c"
                    ll_backend__global_data__succeeded = (ll_backend__global_data__V_17_17 == (MR_Integer) 0);
#line 340 "global_data.m"
                    ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 340 "global_data.m"
                    if (ll_backend__global_data__succeeded)
#line 340 "global_data.m"
                      *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__V_17_17;
#line 340 "global_data.m"
                    else
#line 340 "global_data.m"
                      {
#line 340 "global_data.m"
                        {
#line 340 "global_data.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[7], ll_backend__global_data__HeadVar__1_1, ((MR_Box) (ll_backend__global_data__V_8_8)), ((MR_Box) (ll_backend__global_data__V_13_13)));
#line 340 "global_data.m"
                          return;
                        }
#line 340 "global_data.m"
                      }
#line 340 "global_data.m"
                  }
#line 340 "global_data.m"
              }
#line 340 "global_data.m"
          }
#line 340 "global_data.m"
      }
#line 340 "global_data.m"
  }
#line 340 "global_data.m"
}

#line 340 "global_data.m"
MR_bool MR_CALL 
ll_backend__global_data____Unify____static_cell_info_0_0(
#line 340 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 340 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2)
#line 340 "global_data.m"
{
#line 340 "global_data.m"
  {
#line 340 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 340 "global_data.m"
    MR_Integer ll_backend__global_data__CastX_13 = (MR_Integer) ll_backend__global_data__HeadVar__1_1;
#line 340 "global_data.m"
    MR_Integer ll_backend__global_data__CastY_14 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;

#line 340 "global_data.m"
    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_13 == ll_backend__global_data__CastY_14);
#line 340 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 340 "global_data.m"
      ll_backend__global_data__succeeded = MR_TRUE;
#line 340 "global_data.m"
    else
#line 340 "global_data.m"
      {
#line 340 "global_data.m"
        MR_Word ll_backend__global_data__TypeInfo_16_16;
#line 340 "global_data.m"
        MR_Word ll_backend__global_data__TypeInfo_17_17;
#line 340 "global_data.m"
        MR_Word ll_backend__global_data__TypeInfo_18_18;
#line 340 "global_data.m"
        MR_Word ll_backend__global_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 0)));
#line 340 "global_data.m"
        MR_Word ll_backend__global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 1)));
#line 340 "global_data.m"
        MR_Word ll_backend__global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 2)));
#line 340 "global_data.m"
        MR_Word ll_backend__global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 3)));
#line 340 "global_data.m"
        MR_Word ll_backend__global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 4)));
#line 340 "global_data.m"
        MR_Word ll_backend__global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 340 "global_data.m"
        MR_Word ll_backend__global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 340 "global_data.m"
        MR_Word ll_backend__global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 2)));
#line 340 "global_data.m"
        MR_Word ll_backend__global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 3)));
#line 340 "global_data.m"
        MR_Word ll_backend__global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 4)));
#line 329 "global_data.m"
        MR_Integer ll_backend__global_data__CastX_25 = (MR_Integer) ll_backend__global_data__V_3_3;
#line 329 "global_data.m"
        MR_Integer ll_backend__global_data__CastY_26 = (MR_Integer) ll_backend__global_data__V_8_8;

#line 329 "global_data.m"
        ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_25 == ll_backend__global_data__CastY_26);
#line 329 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 329 "global_data.m"
          ll_backend__global_data__succeeded = MR_TRUE;
#line 329 "global_data.m"
        else
#line 329 "global_data.m"
          {
#line 329 "global_data.m"
            MR_Word ll_backend__global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_3_3, (MR_Integer) 0)));
#line 329 "global_data.m"
            MR_Word ll_backend__global_data__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_3_3, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 329 "global_data.m"
            MR_Word ll_backend__global_data__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_3_3, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 329 "global_data.m"
            MR_Word ll_backend__global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_8_8, (MR_Integer) 0)));
#line 329 "global_data.m"
            MR_Word ll_backend__global_data__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_8_8, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 329 "global_data.m"
            MR_Word ll_backend__global_data__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_8_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 4911 "ll_backend.global_data.c"
            {
#line 4913 "ll_backend.global_data.c"
              ll_backend__global_data__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__global_data__V_19_19, ll_backend__global_data__V_22_22);
            }
#line 329 "global_data.m"
            if (ll_backend__global_data__succeeded)
#line 329 "global_data.m"
              {
#line 4920 "ll_backend.global_data.c"
                ll_backend__global_data__succeeded = (ll_backend__global_data__V_20_20 == ll_backend__global_data__V_23_23);
#line 329 "global_data.m"
                if (ll_backend__global_data__succeeded)
#line 4924 "ll_backend.global_data.c"
                  ll_backend__global_data__succeeded = (ll_backend__global_data__V_21_21 == ll_backend__global_data__V_24_24);
#line 329 "global_data.m"
              }
#line 329 "global_data.m"
          }
#line 340 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 340 "global_data.m"
          {
#line 4934 "ll_backend.global_data.c"
            {
#line 4936 "ll_backend.global_data.c"
              ll_backend__global_data__succeeded = mercury__counter____Unify____counter_0_0(ll_backend__global_data__V_4_4, ll_backend__global_data__V_9_9);
            }
#line 340 "global_data.m"
            if (ll_backend__global_data__succeeded)
#line 340 "global_data.m"
              {
#line 4943 "ll_backend.global_data.c"
                ll_backend__global_data__TypeInfo_16_16 = (MR_Word) &ll_backend__global_data_scalar_common_1[1];
#line 4945 "ll_backend.global_data.c"
                {
#line 4947 "ll_backend.global_data.c"
                  ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0(ll_backend__global_data__TypeInfo_16_16, ((MR_Box) (ll_backend__global_data__V_5_5)), ((MR_Box) (ll_backend__global_data__V_10_10)));
                }
#line 340 "global_data.m"
                if (ll_backend__global_data__succeeded)
#line 340 "global_data.m"
                  {
#line 4954 "ll_backend.global_data.c"
                    ll_backend__global_data__TypeInfo_17_17 = (MR_Word) &ll_backend__global_data_scalar_common_1[4];
#line 4956 "ll_backend.global_data.c"
                    {
#line 4958 "ll_backend.global_data.c"
                      ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0(ll_backend__global_data__TypeInfo_17_17, ((MR_Box) (ll_backend__global_data__V_6_6)), ((MR_Box) (ll_backend__global_data__V_11_11)));
                    }
#line 340 "global_data.m"
                    if (ll_backend__global_data__succeeded)
#line 340 "global_data.m"
                      {
#line 4965 "ll_backend.global_data.c"
                        ll_backend__global_data__TypeInfo_18_18 = (MR_Word) &ll_backend__global_data_scalar_common_1[7];
#line 4967 "ll_backend.global_data.c"
                        {
#line 4969 "ll_backend.global_data.c"
                          return ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0(ll_backend__global_data__TypeInfo_18_18, ((MR_Box) (ll_backend__global_data__V_7_7)), ((MR_Box) (ll_backend__global_data__V_12_12)));
                        }
#line 340 "global_data.m"
                      }
#line 340 "global_data.m"
                  }
#line 340 "global_data.m"
              }
#line 340 "global_data.m"
          }
#line 340 "global_data.m"
      }
#line 340 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 340 "global_data.m"
  }
#line 340 "global_data.m"
}

#line 337 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____scalar_type_cell_map_0_0(
#line 337 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 337 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 337 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3)
#line 337 "global_data.m"
{
#line 337 "global_data.m"
  {
#line 337 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 337 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar1_4 = ll_backend__global_data__HeadVar__2_2;
#line 337 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar2_5 = ll_backend__global_data__HeadVar__3_3;

#line 337 "global_data.m"
    {
#line 337 "global_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[4], ll_backend__global_data__HeadVar__1_1, ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_5)));
#line 337 "global_data.m"
      return;
    }
#line 337 "global_data.m"
  }
#line 337 "global_data.m"
}

#line 337 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_type_cell_map_0_0(
#line 337 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 337 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2)
#line 337 "global_data.m"
{
#line 337 "global_data.m"
  {
#line 337 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 337 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar1_3 = ll_backend__global_data__HeadVar__1_1;
#line 337 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar2_4 = ll_backend__global_data__HeadVar__2_2;

#line 337 "global_data.m"
    {
#line 337 "global_data.m"
      return ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[4], ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_4)));
    }
#line 337 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 337 "global_data.m"
  }
#line 337 "global_data.m"
}

#line 730 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____scalar_cell_group_remap_0_0(
#line 730 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 730 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 730 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3)
#line 730 "global_data.m"
{
#line 730 "global_data.m"
  {
#line 730 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 730 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar1_4 = ll_backend__global_data__HeadVar__2_2;
#line 730 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar2_5 = ll_backend__global_data__HeadVar__3_3;

#line 730 "global_data.m"
    {
#line 730 "global_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[3], ll_backend__global_data__HeadVar__1_1, ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_5)));
#line 730 "global_data.m"
      return;
    }
#line 730 "global_data.m"
  }
#line 730 "global_data.m"
}

#line 730 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_cell_group_remap_0_0(
#line 730 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 730 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2)
#line 730 "global_data.m"
{
#line 730 "global_data.m"
  {
#line 730 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 730 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar1_3 = ll_backend__global_data__HeadVar__1_1;
#line 730 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar2_4 = ll_backend__global_data__HeadVar__2_2;

#line 730 "global_data.m"
    {
#line 730 "global_data.m"
      return ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[3], ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_4)));
    }
#line 730 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 730 "global_data.m"
  }
#line 730 "global_data.m"
}

#line 298 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____scalar_cell_group_0_0(
#line 298 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 298 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 298 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3)
#line 298 "global_data.m"
{
#line 298 "global_data.m"
  {
#line 298 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 298 "global_data.m"
    MR_Integer ll_backend__global_data__CastX_12 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;
#line 298 "global_data.m"
    MR_Integer ll_backend__global_data__CastY_13 = (MR_Integer) ll_backend__global_data__HeadVar__3_3;

#line 298 "global_data.m"
    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_12 == ll_backend__global_data__CastY_13);
#line 298 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 5137 "ll_backend.global_data.c"
      *ll_backend__global_data__HeadVar__1_1 = (MR_Integer) 0;
#line 298 "global_data.m"
    else
#line 298 "global_data.m"
      {
#line 298 "global_data.m"
        MR_Word ll_backend__global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 298 "global_data.m"
        MR_Word ll_backend__global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 298 "global_data.m"
        MR_Word ll_backend__global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 2)));
#line 298 "global_data.m"
        MR_Word ll_backend__global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 0)));
#line 298 "global_data.m"
        MR_Word ll_backend__global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 1)));
#line 298 "global_data.m"
        MR_Word ll_backend__global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 2)));
#line 298 "global_data.m"
        MR_Word ll_backend__global_data__V_10_10;

#line 298 "global_data.m"
        {
#line 298 "global_data.m"
          mercury__counter____Compare____counter_0_0(&ll_backend__global_data__V_10_10, ll_backend__global_data__V_4_4, ll_backend__global_data__V_7_7);
        }
#line 5163 "ll_backend.global_data.c"
        ll_backend__global_data__succeeded = (ll_backend__global_data__V_10_10 == (MR_Integer) 0);
#line 298 "global_data.m"
        ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 298 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 298 "global_data.m"
          *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__V_10_10;
#line 298 "global_data.m"
        else
#line 298 "global_data.m"
          {
#line 298 "global_data.m"
            MR_Word ll_backend__global_data__V_11_11;

#line 298 "global_data.m"
            {
#line 298 "global_data.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[6], &ll_backend__global_data__V_11_11, ((MR_Box) (ll_backend__global_data__V_5_5)), ((MR_Box) (ll_backend__global_data__V_8_8)));
            }
#line 5183 "ll_backend.global_data.c"
            ll_backend__global_data__succeeded = (ll_backend__global_data__V_11_11 == (MR_Integer) 0);
#line 298 "global_data.m"
            ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 298 "global_data.m"
            if (ll_backend__global_data__succeeded)
#line 298 "global_data.m"
              *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__V_11_11;
#line 298 "global_data.m"
            else
#line 298 "global_data.m"
              {
#line 298 "global_data.m"
                {
#line 298 "global_data.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[7], ll_backend__global_data__HeadVar__1_1, ((MR_Box) (ll_backend__global_data__V_6_6)), ((MR_Box) (ll_backend__global_data__V_9_9)));
#line 298 "global_data.m"
                  return;
                }
#line 298 "global_data.m"
              }
#line 298 "global_data.m"
          }
#line 298 "global_data.m"
      }
#line 298 "global_data.m"
  }
#line 298 "global_data.m"
}

#line 298 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_cell_group_0_0(
#line 298 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 298 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2)
#line 298 "global_data.m"
{
#line 298 "global_data.m"
  {
#line 298 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 298 "global_data.m"
    MR_Integer ll_backend__global_data__CastX_9 = (MR_Integer) ll_backend__global_data__HeadVar__1_1;
#line 298 "global_data.m"
    MR_Integer ll_backend__global_data__CastY_10 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;

#line 298 "global_data.m"
    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_9 == ll_backend__global_data__CastY_10);
#line 298 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 298 "global_data.m"
      ll_backend__global_data__succeeded = MR_TRUE;
#line 298 "global_data.m"
    else
#line 298 "global_data.m"
      {
#line 298 "global_data.m"
        MR_Word ll_backend__global_data__TypeInfo_12_12;
#line 298 "global_data.m"
        MR_Word ll_backend__global_data__TypeInfo_13_13;
#line 298 "global_data.m"
        MR_Word ll_backend__global_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 0)));
#line 298 "global_data.m"
        MR_Word ll_backend__global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 1)));
#line 298 "global_data.m"
        MR_Word ll_backend__global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 2)));
#line 298 "global_data.m"
        MR_Word ll_backend__global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 298 "global_data.m"
        MR_Word ll_backend__global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 298 "global_data.m"
        MR_Word ll_backend__global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 2)));

#line 5258 "ll_backend.global_data.c"
        {
#line 5260 "ll_backend.global_data.c"
          ll_backend__global_data__succeeded = mercury__counter____Unify____counter_0_0(ll_backend__global_data__V_3_3, ll_backend__global_data__V_6_6);
        }
#line 298 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 298 "global_data.m"
          {
#line 5267 "ll_backend.global_data.c"
            ll_backend__global_data__TypeInfo_12_12 = (MR_Word) &ll_backend__global_data_scalar_common_1[6];
#line 5269 "ll_backend.global_data.c"
            {
#line 5271 "ll_backend.global_data.c"
              ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0(ll_backend__global_data__TypeInfo_12_12, ((MR_Box) (ll_backend__global_data__V_4_4)), ((MR_Box) (ll_backend__global_data__V_7_7)));
            }
#line 298 "global_data.m"
            if (ll_backend__global_data__succeeded)
#line 298 "global_data.m"
              {
#line 5278 "ll_backend.global_data.c"
                ll_backend__global_data__TypeInfo_13_13 = (MR_Word) &ll_backend__global_data_scalar_common_2[7];
#line 5280 "ll_backend.global_data.c"
                {
#line 5282 "ll_backend.global_data.c"
                  return ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0(ll_backend__global_data__TypeInfo_13_13, ((MR_Box) (ll_backend__global_data__V_5_5)), ((MR_Box) (ll_backend__global_data__V_8_8)));
                }
#line 298 "global_data.m"
              }
#line 298 "global_data.m"
          }
#line 298 "global_data.m"
      }
#line 298 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 298 "global_data.m"
  }
#line 298 "global_data.m"
}

#line 168 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____proc_var_map_0_0(
#line 168 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 168 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 168 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3)
#line 168 "global_data.m"
{
#line 168 "global_data.m"
  {
#line 168 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 168 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar1_4 = ll_backend__global_data__HeadVar__2_2;
#line 168 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar2_5 = ll_backend__global_data__HeadVar__3_3;

#line 168 "global_data.m"
    {
#line 168 "global_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[8], ll_backend__global_data__HeadVar__1_1, ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_5)));
#line 168 "global_data.m"
      return;
    }
#line 168 "global_data.m"
  }
#line 168 "global_data.m"
}

#line 168 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____proc_var_map_0_0(
#line 168 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 168 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2)
#line 168 "global_data.m"
{
#line 168 "global_data.m"
  {
#line 168 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 168 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar1_3 = ll_backend__global_data__HeadVar__1_1;
#line 168 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar2_4 = ll_backend__global_data__HeadVar__2_2;

#line 168 "global_data.m"
    {
#line 168 "global_data.m"
      return ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[8], ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_4)));
    }
#line 168 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 168 "global_data.m"
  }
#line 168 "global_data.m"
}

#line 169 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____proc_layout_map_0_0(
#line 169 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 169 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 169 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3)
#line 169 "global_data.m"
{
#line 169 "global_data.m"
  {
#line 169 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 169 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar1_4 = ll_backend__global_data__HeadVar__2_2;
#line 169 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar2_5 = ll_backend__global_data__HeadVar__3_3;

#line 169 "global_data.m"
    {
#line 169 "global_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[9], ll_backend__global_data__HeadVar__1_1, ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_5)));
#line 169 "global_data.m"
      return;
    }
#line 169 "global_data.m"
  }
#line 169 "global_data.m"
}

#line 169 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____proc_layout_map_0_0(
#line 169 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 169 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2)
#line 169 "global_data.m"
{
#line 169 "global_data.m"
  {
#line 169 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 169 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar1_3 = ll_backend__global_data__HeadVar__1_1;
#line 169 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar2_4 = ll_backend__global_data__HeadVar__2_2;

#line 169 "global_data.m"
    {
#line 169 "global_data.m"
      return ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[9], ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_4)));
    }
#line 169 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 169 "global_data.m"
  }
#line 169 "global_data.m"
}

#line 1019 "global_data.m"
void MR_CALL 
ll_backend__global_data____Compare____global_data_remapping_0_0(
#line 1019 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 1019 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 1019 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3)
#line 1019 "global_data.m"
{
#line 1019 "global_data.m"
  {
#line 1019 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 1019 "global_data.m"
    MR_Integer ll_backend__global_data__CastX_9 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;
#line 1019 "global_data.m"
    MR_Integer ll_backend__global_data__CastY_10 = (MR_Integer) ll_backend__global_data__HeadVar__3_3;

#line 1019 "global_data.m"
    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_9 == ll_backend__global_data__CastY_10);
#line 1019 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 5446 "ll_backend.global_data.c"
      *ll_backend__global_data__HeadVar__1_1 = (MR_Integer) 0;
#line 1019 "global_data.m"
    else
#line 1019 "global_data.m"
      {
#line 1019 "global_data.m"
        MR_Word ll_backend__global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 1019 "global_data.m"
        MR_Word ll_backend__global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 1019 "global_data.m"
        MR_Word ll_backend__global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 0)));
#line 1019 "global_data.m"
        MR_Word ll_backend__global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 1)));
#line 1019 "global_data.m"
        MR_Word ll_backend__global_data__V_8_8;

#line 1019 "global_data.m"
        {
#line 1019 "global_data.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[6], &ll_backend__global_data__V_8_8, ((MR_Box) (ll_backend__global_data__V_4_4)), ((MR_Box) (ll_backend__global_data__V_6_6)));
        }
#line 5468 "ll_backend.global_data.c"
        ll_backend__global_data__succeeded = (ll_backend__global_data__V_8_8 == (MR_Integer) 0);
#line 1019 "global_data.m"
        ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 1019 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 1019 "global_data.m"
          *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__V_8_8;
#line 1019 "global_data.m"
        else
#line 1019 "global_data.m"
          {
#line 1019 "global_data.m"
            ll_backend__global_data____Compare____static_cell_remap_info_0_0(ll_backend__global_data__HeadVar__1_1, ll_backend__global_data__V_5_5, ll_backend__global_data__V_7_7);
#line 1019 "global_data.m"
            return;
          }
#line 1019 "global_data.m"
      }
#line 1019 "global_data.m"
  }
#line 1019 "global_data.m"
}

#line 1019 "global_data.m"
MR_bool MR_CALL 
ll_backend__global_data____Unify____global_data_remapping_0_0(
#line 1019 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 1019 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2)
#line 1019 "global_data.m"
{
#line 1019 "global_data.m"
  {
#line 1019 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 1019 "global_data.m"
    MR_Integer ll_backend__global_data__CastX_7 = (MR_Integer) ll_backend__global_data__HeadVar__1_1;
#line 1019 "global_data.m"
    MR_Integer ll_backend__global_data__CastY_8 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;

#line 1019 "global_data.m"
    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_7 == ll_backend__global_data__CastY_8);
#line 1019 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 1019 "global_data.m"
      ll_backend__global_data__succeeded = MR_TRUE;
#line 1019 "global_data.m"
    else
#line 1019 "global_data.m"
      {
#line 1019 "global_data.m"
        MR_Word ll_backend__global_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 0)));
#line 1019 "global_data.m"
        MR_Word ll_backend__global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 1)));
#line 1019 "global_data.m"
        MR_Word ll_backend__global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 1019 "global_data.m"
        MR_Word ll_backend__global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));

#line 5529 "ll_backend.global_data.c"
        {
#line 5531 "ll_backend.global_data.c"
          ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[6], ((MR_Box) (ll_backend__global_data__V_3_3)), ((MR_Box) (ll_backend__global_data__V_5_5)));
        }
#line 1019 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 5536 "ll_backend.global_data.c"
          {
#line 5538 "ll_backend.global_data.c"
            return ll_backend__global_data__succeeded = ll_backend__global_data____Unify____static_cell_remap_info_0_0(ll_backend__global_data__V_4_4, ll_backend__global_data__V_6_6);
          }
#line 1019 "global_data.m"
      }
#line 1019 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 1019 "global_data.m"
  }
#line 1019 "global_data.m"
}

#line 171 "global_data.m"
void MR_CALL 
ll_backend__global_data____Compare____global_data_0_0(
#line 171 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 171 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 171 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3)
#line 171 "global_data.m"
{
#line 171 "global_data.m"
  {
#line 171 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 171 "global_data.m"
    MR_Integer ll_backend__global_data__CastX_24 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;
#line 171 "global_data.m"
    MR_Integer ll_backend__global_data__CastY_25 = (MR_Integer) ll_backend__global_data__HeadVar__3_3;

#line 171 "global_data.m"
    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_24 == ll_backend__global_data__CastY_25);
#line 171 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 5574 "ll_backend.global_data.c"
      *ll_backend__global_data__HeadVar__1_1 = (MR_Integer) 0;
#line 171 "global_data.m"
    else
#line 171 "global_data.m"
      {
#line 171 "global_data.m"
        MR_Word ll_backend__global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 171 "global_data.m"
        MR_Word ll_backend__global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "global_data.m"
        MR_Word ll_backend__global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 2)));
#line 171 "global_data.m"
        MR_Integer ll_backend__global_data__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 3)));
#line 171 "global_data.m"
        MR_Word ll_backend__global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 4)));
#line 171 "global_data.m"
        MR_Word ll_backend__global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 5)));
#line 171 "global_data.m"
        MR_Word ll_backend__global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 6)));
#line 171 "global_data.m"
        MR_Word ll_backend__global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 0)));
#line 171 "global_data.m"
        MR_Word ll_backend__global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 1)));
#line 171 "global_data.m"
        MR_Word ll_backend__global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 2)));
#line 171 "global_data.m"
        MR_Integer ll_backend__global_data__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 3)));
#line 171 "global_data.m"
        MR_Word ll_backend__global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 4)));
#line 171 "global_data.m"
        MR_Word ll_backend__global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 5)));
#line 171 "global_data.m"
        MR_Word ll_backend__global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 6)));
#line 171 "global_data.m"
        MR_Word ll_backend__global_data__V_18_18;

#line 171 "global_data.m"
        {
#line 171 "global_data.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[8], &ll_backend__global_data__V_18_18, ((MR_Box) (ll_backend__global_data__V_4_4)), ((MR_Box) (ll_backend__global_data__V_11_11)));
        }
#line 5616 "ll_backend.global_data.c"
        ll_backend__global_data__succeeded = (ll_backend__global_data__V_18_18 == (MR_Integer) 0);
#line 171 "global_data.m"
        ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 171 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 171 "global_data.m"
          *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__V_18_18;
#line 171 "global_data.m"
        else
#line 171 "global_data.m"
          {
#line 171 "global_data.m"
            MR_Word ll_backend__global_data__V_19_19;

#line 171 "global_data.m"
            {
#line 171 "global_data.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[9], &ll_backend__global_data__V_19_19, ((MR_Box) (ll_backend__global_data__V_5_5)), ((MR_Box) (ll_backend__global_data__V_12_12)));
            }
#line 5636 "ll_backend.global_data.c"
            ll_backend__global_data__succeeded = (ll_backend__global_data__V_19_19 == (MR_Integer) 0);
#line 171 "global_data.m"
            ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 171 "global_data.m"
            if (ll_backend__global_data__succeeded)
#line 171 "global_data.m"
              *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__V_19_19;
#line 171 "global_data.m"
            else
#line 171 "global_data.m"
              {
#line 171 "global_data.m"
                MR_Word ll_backend__global_data__V_20_20;

#line 171 "global_data.m"
                {
#line 171 "global_data.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[3], &ll_backend__global_data__V_20_20, ((MR_Box) (ll_backend__global_data__V_6_6)), ((MR_Box) (ll_backend__global_data__V_13_13)));
                }
#line 5656 "ll_backend.global_data.c"
                ll_backend__global_data__succeeded = (ll_backend__global_data__V_20_20 == (MR_Integer) 0);
#line 171 "global_data.m"
                ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 171 "global_data.m"
                if (ll_backend__global_data__succeeded)
#line 171 "global_data.m"
                  *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__V_20_20;
#line 171 "global_data.m"
                else
#line 171 "global_data.m"
                  {
#line 171 "global_data.m"
                    MR_Word ll_backend__global_data__V_21_21;

#line 171 "global_data.m"
                    {
#line 171 "global_data.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__global_data__V_21_21, ll_backend__global_data__V_7_7, ll_backend__global_data__V_14_14);
                    }
#line 5676 "ll_backend.global_data.c"
                    ll_backend__global_data__succeeded = (ll_backend__global_data__V_21_21 == (MR_Integer) 0);
#line 171 "global_data.m"
                    ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 171 "global_data.m"
                    if (ll_backend__global_data__succeeded)
#line 171 "global_data.m"
                      *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__V_21_21;
#line 171 "global_data.m"
                    else
#line 171 "global_data.m"
                      {
#line 171 "global_data.m"
                        MR_Word ll_backend__global_data__V_22_22;

#line 171 "global_data.m"
                        {
#line 171 "global_data.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[4], &ll_backend__global_data__V_22_22, ((MR_Box) (ll_backend__global_data__V_8_8)), ((MR_Box) (ll_backend__global_data__V_15_15)));
                        }
#line 5696 "ll_backend.global_data.c"
                        ll_backend__global_data__succeeded = (ll_backend__global_data__V_22_22 == (MR_Integer) 0);
#line 171 "global_data.m"
                        ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 171 "global_data.m"
                        if (ll_backend__global_data__succeeded)
#line 171 "global_data.m"
                          *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__V_22_22;
#line 171 "global_data.m"
                        else
#line 171 "global_data.m"
                          {
#line 171 "global_data.m"
                            MR_Word ll_backend__global_data__V_23_23;

#line 171 "global_data.m"
                            {
#line 171 "global_data.m"
                              ll_backend__global_data____Compare____static_cell_info_0_0(&ll_backend__global_data__V_23_23, ll_backend__global_data__V_9_9, ll_backend__global_data__V_16_16);
                            }
#line 5716 "ll_backend.global_data.c"
                            ll_backend__global_data__succeeded = (ll_backend__global_data__V_23_23 == (MR_Integer) 0);
#line 171 "global_data.m"
                            ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 171 "global_data.m"
                            if (ll_backend__global_data__succeeded)
#line 171 "global_data.m"
                              *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__V_23_23;
#line 171 "global_data.m"
                            else
#line 171 "global_data.m"
                              {
#line 171 "global_data.m"
                                {
#line 171 "global_data.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[5], ll_backend__global_data__HeadVar__1_1, ((MR_Box) (ll_backend__global_data__V_10_10)), ((MR_Box) (ll_backend__global_data__V_17_17)));
#line 171 "global_data.m"
                                  return;
                                }
#line 171 "global_data.m"
                              }
#line 171 "global_data.m"
                          }
#line 171 "global_data.m"
                      }
#line 171 "global_data.m"
                  }
#line 171 "global_data.m"
              }
#line 171 "global_data.m"
          }
#line 171 "global_data.m"
      }
#line 171 "global_data.m"
  }
#line 171 "global_data.m"
}

#line 171 "global_data.m"
MR_bool MR_CALL 
ll_backend__global_data____Unify____global_data_0_0(
#line 171 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 171 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2)
#line 171 "global_data.m"
{
#line 171 "global_data.m"
  {
#line 171 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 171 "global_data.m"
    MR_Integer ll_backend__global_data__CastX_17 = (MR_Integer) ll_backend__global_data__HeadVar__1_1;
#line 171 "global_data.m"
    MR_Integer ll_backend__global_data__CastY_18 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;

#line 171 "global_data.m"
    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_17 == ll_backend__global_data__CastY_18);
#line 171 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 171 "global_data.m"
      ll_backend__global_data__succeeded = MR_TRUE;
#line 171 "global_data.m"
    else
#line 171 "global_data.m"
      {
#line 171 "global_data.m"
        MR_Word ll_backend__global_data__TypeInfo_20_20;
#line 171 "global_data.m"
        MR_Word ll_backend__global_data__TypeInfo_21_21;
#line 171 "global_data.m"
        MR_Word ll_backend__global_data__TypeInfo_22_22;
#line 171 "global_data.m"
        MR_Word ll_backend__global_data__TypeInfo_23_23;
#line 171 "global_data.m"
        MR_Word ll_backend__global_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 0)));
#line 171 "global_data.m"
        MR_Word ll_backend__global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 1)));
#line 171 "global_data.m"
        MR_Word ll_backend__global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 2)));
#line 171 "global_data.m"
        MR_Integer ll_backend__global_data__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 3)));
#line 171 "global_data.m"
        MR_Word ll_backend__global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 4)));
#line 171 "global_data.m"
        MR_Word ll_backend__global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 5)));
#line 171 "global_data.m"
        MR_Word ll_backend__global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 6)));
#line 171 "global_data.m"
        MR_Word ll_backend__global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 171 "global_data.m"
        MR_Word ll_backend__global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 171 "global_data.m"
        MR_Word ll_backend__global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 2)));
#line 171 "global_data.m"
        MR_Integer ll_backend__global_data__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 3)));
#line 171 "global_data.m"
        MR_Word ll_backend__global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 4)));
#line 171 "global_data.m"
        MR_Word ll_backend__global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 5)));
#line 171 "global_data.m"
        MR_Word ll_backend__global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 6)));

#line 5819 "ll_backend.global_data.c"
        {
#line 5821 "ll_backend.global_data.c"
          ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[8], ((MR_Box) (ll_backend__global_data__V_3_3)), ((MR_Box) (ll_backend__global_data__V_10_10)));
        }
#line 171 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 171 "global_data.m"
          {
#line 5828 "ll_backend.global_data.c"
            ll_backend__global_data__TypeInfo_20_20 = (MR_Word) &ll_backend__global_data_scalar_common_1[9];
#line 5830 "ll_backend.global_data.c"
            {
#line 5832 "ll_backend.global_data.c"
              ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0(ll_backend__global_data__TypeInfo_20_20, ((MR_Box) (ll_backend__global_data__V_4_4)), ((MR_Box) (ll_backend__global_data__V_11_11)));
            }
#line 171 "global_data.m"
            if (ll_backend__global_data__succeeded)
#line 171 "global_data.m"
              {
#line 5839 "ll_backend.global_data.c"
                ll_backend__global_data__TypeInfo_21_21 = (MR_Word) &ll_backend__global_data_scalar_common_2[3];
#line 5841 "ll_backend.global_data.c"
                {
#line 5843 "ll_backend.global_data.c"
                  ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0(ll_backend__global_data__TypeInfo_21_21, ((MR_Box) (ll_backend__global_data__V_5_5)), ((MR_Box) (ll_backend__global_data__V_12_12)));
                }
#line 171 "global_data.m"
                if (ll_backend__global_data__succeeded)
#line 171 "global_data.m"
                  {
#line 5850 "ll_backend.global_data.c"
                    ll_backend__global_data__succeeded = (ll_backend__global_data__V_6_6 == ll_backend__global_data__V_13_13);
#line 171 "global_data.m"
                    if (ll_backend__global_data__succeeded)
#line 171 "global_data.m"
                      {
#line 5856 "ll_backend.global_data.c"
                        ll_backend__global_data__TypeInfo_22_22 = (MR_Word) &ll_backend__global_data_scalar_common_2[4];
#line 5858 "ll_backend.global_data.c"
                        {
#line 5860 "ll_backend.global_data.c"
                          ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0(ll_backend__global_data__TypeInfo_22_22, ((MR_Box) (ll_backend__global_data__V_7_7)), ((MR_Box) (ll_backend__global_data__V_14_14)));
                        }
#line 171 "global_data.m"
                        if (ll_backend__global_data__succeeded)
#line 171 "global_data.m"
                          {
#line 5867 "ll_backend.global_data.c"
                            {
#line 5869 "ll_backend.global_data.c"
                              ll_backend__global_data__succeeded = ll_backend__global_data____Unify____static_cell_info_0_0(ll_backend__global_data__V_8_8, ll_backend__global_data__V_15_15);
                            }
#line 171 "global_data.m"
                            if (ll_backend__global_data__succeeded)
#line 171 "global_data.m"
                              {
#line 5876 "ll_backend.global_data.c"
                                ll_backend__global_data__TypeInfo_23_23 = (MR_Word) &ll_backend__global_data_scalar_common_2[5];
#line 5878 "ll_backend.global_data.c"
                                {
#line 5880 "ll_backend.global_data.c"
                                  return ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0(ll_backend__global_data__TypeInfo_23_23, ((MR_Box) (ll_backend__global_data__V_9_9)), ((MR_Box) (ll_backend__global_data__V_16_16)));
                                }
#line 171 "global_data.m"
                              }
#line 171 "global_data.m"
                          }
#line 171 "global_data.m"
                      }
#line 171 "global_data.m"
                  }
#line 171 "global_data.m"
              }
#line 171 "global_data.m"
          }
#line 171 "global_data.m"
      }
#line 171 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 171 "global_data.m"
  }
#line 171 "global_data.m"
}

#line 727 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____cell_type_num_remap_0_0(
#line 727 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 727 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 727 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3)
#line 727 "global_data.m"
{
#line 727 "global_data.m"
  {
#line 727 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 727 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar1_4 = ll_backend__global_data__HeadVar__2_2;
#line 727 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar2_5 = ll_backend__global_data__HeadVar__3_3;

#line 727 "global_data.m"
    {
#line 727 "global_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[2], ll_backend__global_data__HeadVar__1_1, ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_5)));
#line 727 "global_data.m"
      return;
    }
#line 727 "global_data.m"
  }
#line 727 "global_data.m"
}

#line 727 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____cell_type_num_remap_0_0(
#line 727 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 727 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2)
#line 727 "global_data.m"
{
#line 727 "global_data.m"
  {
#line 727 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 727 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar1_3 = ll_backend__global_data__HeadVar__1_1;
#line 727 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar2_4 = ll_backend__global_data__HeadVar__2_2;

#line 727 "global_data.m"
    {
#line 727 "global_data.m"
      return ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[2], ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_4)));
    }
#line 727 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 727 "global_data.m"
  }
#line 727 "global_data.m"
}

#line 336 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____cell_type_bimap_0_0(
#line 336 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 336 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 336 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3)
#line 336 "global_data.m"
{
#line 336 "global_data.m"
  {
#line 336 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 336 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar1_4 = ll_backend__global_data__HeadVar__2_2;
#line 336 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar2_5 = ll_backend__global_data__HeadVar__3_3;

#line 336 "global_data.m"
    {
#line 336 "global_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[1], ll_backend__global_data__HeadVar__1_1, ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_5)));
#line 336 "global_data.m"
      return;
    }
#line 336 "global_data.m"
  }
#line 336 "global_data.m"
}

#line 336 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____cell_type_bimap_0_0(
#line 336 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 336 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2)
#line 336 "global_data.m"
{
#line 336 "global_data.m"
  {
#line 336 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 336 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar1_3 = ll_backend__global_data__HeadVar__1_1;
#line 336 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar2_4 = ll_backend__global_data__HeadVar__2_2;

#line 336 "global_data.m"
    {
#line 336 "global_data.m"
      return ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[1], ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_4)));
    }
#line 336 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 336 "global_data.m"
  }
#line 336 "global_data.m"
}

#line 1357 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_mem_ref_3_p_0(
#line 1357 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 1357 "global_data.m"
  MR_Word ll_backend__global_data__MemRef0_5,
#line 1357 "global_data.m"
  MR_Word * ll_backend__global_data__MemRef_6)
#line 1357 "global_data.m"
{
#line 1364 "global_data.m"
  {
#line 1364 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;

#line 1364 "global_data.m"
    if (((MR_tag((MR_Word) ll_backend__global_data__MemRef0_5)) == (MR_mktag((MR_Integer) 2))))
#line 1367 "global_data.m"
      {
#line 1367 "global_data.m"
        MR_Word ll_backend__global_data__Ptr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__global_data__MemRef0_5, (MR_Integer) 0)));
#line 1367 "global_data.m"
        MR_Word ll_backend__global_data__MaybeTag_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__global_data__MemRef0_5, (MR_Integer) 1)));
#line 1367 "global_data.m"
        MR_Word ll_backend__global_data__FieldNum_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__global_data__MemRef0_5, (MR_Integer) 2)));
#line 1367 "global_data.m"
        MR_Word ll_backend__global_data__Ptr_12;

#line 1368 "global_data.m"
        {
#line 1368 "global_data.m"
          ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__Remap_4, ll_backend__global_data__Ptr0_9, &ll_backend__global_data__Ptr_12);
        }
#line 1369 "global_data.m"
        {
#line 1369 "global_data.m"
          MR_Word base;
#line 1369 "global_data.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1369 "global_data.m"
          *ll_backend__global_data__MemRef_6 = base;
#line 1369 "global_data.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__global_data__Ptr_12));
#line 1369 "global_data.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__global_data__MaybeTag_10));
#line 1369 "global_data.m"
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (ll_backend__global_data__FieldNum_11));
#line 1369 "global_data.m"
        }
#line 1367 "global_data.m"
      }
#line 1364 "global_data.m"
    else
#line 1365 "global_data.m"
      *ll_backend__global_data__MemRef_6 = ll_backend__global_data__MemRef0_5;
#line 1364 "global_data.m"
  }
#line 1357 "global_data.m"
}

#line 1276 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_rval_3_p_0(
#line 1276 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 1276 "global_data.m"
  MR_Word ll_backend__global_data__Rval0_5,
#line 1276 "global_data.m"
  MR_Word * ll_backend__global_data__Rval_6)
#line 1276 "global_data.m"
{
#line 1280 "global_data.m"
  {
#line 1280 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;

#line 1280 "global_data.m"
    if (((MR_tag((MR_Word) ll_backend__global_data__Rval0_5)) == (MR_mktag((MR_Integer) 0))))
#line 1280 "global_data.m"
      {
#line 1280 "global_data.m"
        MR_Word ll_backend__global_data__Lval0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Rval0_5, (MR_Integer) 0)));
#line 1280 "global_data.m"
        MR_Word ll_backend__global_data__Lval_8;

#line 1281 "global_data.m"
        {
#line 1281 "global_data.m"
          ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__Remap_4, ll_backend__global_data__Lval0_7, &ll_backend__global_data__Lval_8);
        }
#line 1282 "global_data.m"
        {
#line 1282 "global_data.m"
          MR_Word base;
#line 1282 "global_data.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1282 "global_data.m"
          *ll_backend__global_data__Rval_6 = base;
#line 1282 "global_data.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__Lval_8));
#line 1282 "global_data.m"
        }
#line 1280 "global_data.m"
      }
#line 1280 "global_data.m"
    else
#line 1280 "global_data.m"
      if (((MR_tag((MR_Word) ll_backend__global_data__Rval0_5)) == (MR_mktag((MR_Integer) 2))))
#line 1287 "global_data.m"
        {
#line 1287 "global_data.m"
          MR_Integer ll_backend__global_data__Tag_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__global_data__Rval0_5, (MR_Integer) 0)));
#line 1287 "global_data.m"
          MR_Word ll_backend__global_data__Ptr0_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__global_data__Rval0_5, (MR_Integer) 1)));
#line 1287 "global_data.m"
          MR_Word ll_backend__global_data__Ptr_12;

#line 1288 "global_data.m"
          {
#line 1288 "global_data.m"
            ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__Remap_4, ll_backend__global_data__Ptr0_11, &ll_backend__global_data__Ptr_12);
          }
#line 1289 "global_data.m"
          {
#line 1289 "global_data.m"
            MR_Word base;
#line 1289 "global_data.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1289 "global_data.m"
            *ll_backend__global_data__Rval_6 = base;
#line 1289 "global_data.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__global_data__Tag_10));
#line 1289 "global_data.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__global_data__Ptr_12));
#line 1289 "global_data.m"
          }
#line 1287 "global_data.m"
        }
#line 1280 "global_data.m"
      else
#line 1280 "global_data.m"
        if (((MR_tag((MR_Word) ll_backend__global_data__Rval0_5)) == (MR_mktag((MR_Integer) 1))))
#line 1285 "global_data.m"
          *ll_backend__global_data__Rval_6 = ll_backend__global_data__Rval0_5;
#line 1280 "global_data.m"
        else
#line 1280 "global_data.m"
          if (((((MR_tag((MR_Word) ll_backend__global_data__Rval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Rval0_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1302 "global_data.m"
            {
#line 1302 "global_data.m"
              MR_Word ll_backend__global_data__Binop_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Rval0_5, (MR_Integer) 1)));
#line 1302 "global_data.m"
              MR_Word ll_backend__global_data__B0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Rval0_5, (MR_Integer) 3)));
#line 1302 "global_data.m"
              MR_Word ll_backend__global_data__B_21;
#line 1302 "global_data.m"
              MR_Word ll_backend__global_data__A0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Rval0_5, (MR_Integer) 2)));
#line 1302 "global_data.m"
              MR_Word ll_backend__global_data__A_25;

#line 1303 "global_data.m"
              {
#line 1303 "global_data.m"
                ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__Remap_4, ll_backend__global_data__A0_24, &ll_backend__global_data__A_25);
              }
#line 1304 "global_data.m"
              {
#line 1304 "global_data.m"
                ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__Remap_4, ll_backend__global_data__B0_20, &ll_backend__global_data__B_21);
              }
#line 1305 "global_data.m"
              {
#line 1305 "global_data.m"
                MR_Word base;
#line 1305 "global_data.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1305 "global_data.m"
                *ll_backend__global_data__Rval_6 = base;
#line 1305 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1305 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Binop_19));
#line 1305 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__A_25));
#line 1305 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__global_data__B_21));
#line 1305 "global_data.m"
              }
#line 1302 "global_data.m"
            }
#line 1280 "global_data.m"
          else
#line 1280 "global_data.m"
            if (((((MR_tag((MR_Word) ll_backend__global_data__Rval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Rval0_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1294 "global_data.m"
              {
#line 1294 "global_data.m"
                MR_Word ll_backend__global_data__Const0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Rval0_5, (MR_Integer) 1)));
#line 1294 "global_data.m"
                MR_Word ll_backend__global_data__Const_15;

#line 1317 "global_data.m"
                if (((((MR_tag((MR_Word) ll_backend__global_data__Const0_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Const0_14, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1317 "global_data.m"
                  {
#line 1317 "global_data.m"
                    MR_Word ll_backend__global_data__DataId0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Const0_14, (MR_Integer) 1)));
#line 1317 "global_data.m"
                    MR_Word ll_backend__global_data__MaybeOffset_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Const0_14, (MR_Integer) 2)));
#line 1317 "global_data.m"
                    MR_Word ll_backend__global_data__DataId_36;

#line 1327 "global_data.m"
                    if (((MR_tag((MR_Word) ll_backend__global_data__DataId0_29)) == (MR_mktag((MR_Integer) 2))))
#line 1319 "global_data.m"
                      {
#line 1319 "global_data.m"
                        MR_Word ll_backend__global_data__TypeNum0_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__global_data__DataId0_29, (MR_Integer) 0)));
#line 1319 "global_data.m"
                        MR_Word ll_backend__global_data__TypeNumRemap_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Remap_4, (MR_Integer) 0)));
#line 1319 "global_data.m"
                        MR_Word ll_backend__global_data__ScalarCellGroupRemap_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Remap_4, (MR_Integer) 1)));
#line 1319 "global_data.m"
                        MR_Integer ll_backend__global_data___CellNum_32 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__global_data__DataId0_29, (MR_Integer) 1)));
#line 1321 "global_data.m"
                        MR_Word ll_backend__global_data__TypeCtorInfo_33_55 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;

#line 1321 "global_data.m"
                        {
#line 1321 "global_data.m"
                          ll_backend__global_data__succeeded = mercury__map__contains_2_p_0(ll_backend__global_data__TypeCtorInfo_33_55, ll_backend__global_data__TypeCtorInfo_33_55, ll_backend__global_data__TypeNumRemap_33, ((MR_Box) (ll_backend__global_data__TypeNum0_31)));
                        }
#line 1324 "global_data.m"
                        if (ll_backend__global_data__succeeded)
#line 1322 "global_data.m"
                          {
#line 1322 "global_data.m"
                            MR_Word ll_backend__global_data__TypeCtorInfo_36_58;
#line 1322 "global_data.m"
                            MR_Word ll_backend__global_data__ScalarCellGroup_35;
#line 1322 "global_data.m"
                            MR_Box ll_backend__global_data__conv0_ScalarCellGroup_35;
#line 1323 "global_data.m"
                            MR_Box ll_backend__global_data__conv1_DataId_36;

#line 1322 "global_data.m"
                            {
#line 1322 "global_data.m"
                              mercury__map__lookup_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, (MR_Word) &ll_backend__global_data_scalar_common_1[3], ll_backend__global_data__ScalarCellGroupRemap_34, ((MR_Box) (ll_backend__global_data__TypeNum0_31)), &ll_backend__global_data__conv0_ScalarCellGroup_35);
                            }
#line 1322 "global_data.m"
                            ll_backend__global_data__ScalarCellGroup_35 = ((MR_Word) ll_backend__global_data__conv0_ScalarCellGroup_35);
#line 6282 "ll_backend.global_data.c"
                            ll_backend__global_data__TypeCtorInfo_36_58 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0;
#line 1323 "global_data.m"
                            {
#line 1323 "global_data.m"
                              mercury__map__lookup_3_p_0(ll_backend__global_data__TypeCtorInfo_36_58, ll_backend__global_data__TypeCtorInfo_36_58, ll_backend__global_data__ScalarCellGroup_35, ((MR_Box) (ll_backend__global_data__DataId0_29)), &ll_backend__global_data__conv1_DataId_36);
                            }
#line 1323 "global_data.m"
                            ll_backend__global_data__DataId_36 = ((MR_Word) ll_backend__global_data__conv1_DataId_36);
#line 1322 "global_data.m"
                          }
#line 1324 "global_data.m"
                        else
#line 1325 "global_data.m"
                          ll_backend__global_data__DataId_36 = ll_backend__global_data__DataId0_29;
#line 1319 "global_data.m"
                      }
#line 1327 "global_data.m"
                    else
#line 1327 "global_data.m"
                      if (((((MR_tag((MR_Word) ll_backend__global_data__DataId0_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__DataId0_29, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1328 "global_data.m"
                        {
#line 1328 "global_data.m"
                          MR_Integer ll_backend__global_data__CellNum_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__global_data__DataId0_29, (MR_Integer) 2)));
#line 1328 "global_data.m"
                          MR_Word ll_backend__global_data__TypeNum0_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__DataId0_29, (MR_Integer) 1)));
#line 1328 "global_data.m"
                          MR_Word ll_backend__global_data__TypeNumRemap_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Remap_4, (MR_Integer) 0)));
#line 1329 "global_data.m"
                          MR_Word ll_backend__global_data__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Remap_4, (MR_Integer) 1)));
#line 1332 "global_data.m"
                          MR_Word ll_backend__global_data__TypeNum_39;
#line 1330 "global_data.m"
                          MR_Word ll_backend__global_data__TypeCtorInfo_37_59 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;
#line 1330 "global_data.m"
                          MR_Box ll_backend__global_data__conv2_TypeNum_39;

#line 1330 "global_data.m"
                          {
#line 1330 "global_data.m"
                            ll_backend__global_data__succeeded = mercury__map__search_3_p_0(ll_backend__global_data__TypeCtorInfo_37_59, ll_backend__global_data__TypeCtorInfo_37_59, ll_backend__global_data__TypeNumRemap_54, ((MR_Box) (ll_backend__global_data__TypeNum0_53)), &ll_backend__global_data__conv2_TypeNum_39);
                          }
#line 1330 "global_data.m"
                          if (ll_backend__global_data__succeeded)
#line 1330 "global_data.m"
                            {
#line 1330 "global_data.m"
                              ll_backend__global_data__TypeNum_39 = ((MR_Word) ll_backend__global_data__conv2_TypeNum_39);
#line 1330 "global_data.m"
                              ll_backend__global_data__succeeded = MR_TRUE;
#line 1330 "global_data.m"
                            }
#line 1332 "global_data.m"
                          if (ll_backend__global_data__succeeded)
#line 1331 "global_data.m"
                            {
#line 1331 "global_data.m"
                              ll_backend__global_data__DataId_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1331 "global_data.m"
                              MR_hl_field(MR_mktag(3), ll_backend__global_data__DataId_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1331 "global_data.m"
                              MR_hl_field(MR_mktag(3), ll_backend__global_data__DataId_36, 1) = ((MR_Box) (ll_backend__global_data__TypeNum_39));
#line 1331 "global_data.m"
                              MR_hl_field(MR_mktag(3), ll_backend__global_data__DataId_36, 2) = ((MR_Box) (ll_backend__global_data__CellNum_37));
#line 1331 "global_data.m"
                            }
#line 1332 "global_data.m"
                          else
#line 1333 "global_data.m"
                            ll_backend__global_data__DataId_36 = ll_backend__global_data__DataId0_29;
#line 1328 "global_data.m"
                        }
#line 1327 "global_data.m"
                      else
#line 1341 "global_data.m"
                        ll_backend__global_data__DataId_36 = ll_backend__global_data__DataId0_29;
#line 1343 "global_data.m"
                    {
#line 1343 "global_data.m"
                      ll_backend__global_data__Const_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1343 "global_data.m"
                      MR_hl_field(MR_mktag(3), ll_backend__global_data__Const_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1343 "global_data.m"
                      MR_hl_field(MR_mktag(3), ll_backend__global_data__Const_15, 1) = ((MR_Box) (ll_backend__global_data__DataId_36));
#line 1343 "global_data.m"
                      MR_hl_field(MR_mktag(3), ll_backend__global_data__Const_15, 2) = ((MR_Box) (ll_backend__global_data__MaybeOffset_30));
#line 1343 "global_data.m"
                    }
#line 1317 "global_data.m"
                  }
#line 1317 "global_data.m"
                else
#line 1354 "global_data.m"
                  ll_backend__global_data__Const_15 = ll_backend__global_data__Const0_14;
#line 1296 "global_data.m"
                {
#line 1296 "global_data.m"
                  MR_Word base;
#line 1296 "global_data.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1296 "global_data.m"
                  *ll_backend__global_data__Rval_6 = base;
#line 1296 "global_data.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1296 "global_data.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Const_15));
#line 1296 "global_data.m"
                }
#line 1294 "global_data.m"
              }
#line 1280 "global_data.m"
            else
#line 1280 "global_data.m"
              if (((((MR_tag((MR_Word) ll_backend__global_data__Rval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Rval0_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1307 "global_data.m"
                {
#line 1307 "global_data.m"
                  MR_Word ll_backend__global_data__MemRef0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Rval0_5, (MR_Integer) 1)));
#line 1307 "global_data.m"
                  MR_Word ll_backend__global_data__MemRef_23;

#line 1308 "global_data.m"
                  {
#line 1308 "global_data.m"
                    ll_backend__global_data__remap_mem_ref_3_p_0(ll_backend__global_data__Remap_4, ll_backend__global_data__MemRef0_22, &ll_backend__global_data__MemRef_23);
                  }
#line 1309 "global_data.m"
                  {
#line 1309 "global_data.m"
                    MR_Word base;
#line 1309 "global_data.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1309 "global_data.m"
                    *ll_backend__global_data__Rval_6 = base;
#line 1309 "global_data.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1309 "global_data.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__MemRef_23));
#line 1309 "global_data.m"
                  }
#line 1307 "global_data.m"
                }
#line 1280 "global_data.m"
              else
#line 1280 "global_data.m"
                if (((((MR_tag((MR_Word) ll_backend__global_data__Rval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Rval0_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1292 "global_data.m"
                  *ll_backend__global_data__Rval_6 = ll_backend__global_data__Rval0_5;
#line 1280 "global_data.m"
                else
#line 1298 "global_data.m"
                  {
#line 1298 "global_data.m"
                    MR_Word ll_backend__global_data__Unop_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Rval0_5, (MR_Integer) 1)));
#line 1298 "global_data.m"
                    MR_Word ll_backend__global_data__A0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Rval0_5, (MR_Integer) 2)));
#line 1298 "global_data.m"
                    MR_Word ll_backend__global_data__A_18;

#line 1299 "global_data.m"
                    {
#line 1299 "global_data.m"
                      ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__Remap_4, ll_backend__global_data__A0_17, &ll_backend__global_data__A_18);
                    }
#line 1300 "global_data.m"
                    {
#line 1300 "global_data.m"
                      MR_Word base;
#line 1300 "global_data.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1300 "global_data.m"
                      *ll_backend__global_data__Rval_6 = base;
#line 1300 "global_data.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1300 "global_data.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Unop_16));
#line 1300 "global_data.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__A_18));
#line 1300 "global_data.m"
                    }
#line 1298 "global_data.m"
                  }
#line 1280 "global_data.m"
  }
#line 1276 "global_data.m"
}

#line 1241 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_lval_3_p_0(
#line 1241 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 1241 "global_data.m"
  MR_Word ll_backend__global_data__Lval0_5,
#line 1241 "global_data.m"
  MR_Word * ll_backend__global_data__Lval_6)
#line 1241 "global_data.m"
{
#line 1245 "global_data.m"
  {
#line 1245 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;

#line 1245 "global_data.m"
    if (((((MR_tag((MR_Word) ll_backend__global_data__Lval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Lval0_5, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 1245 "global_data.m"
      {
#line 1245 "global_data.m"
        MR_Word ll_backend__global_data__MaybeTag_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Lval0_5, (MR_Integer) 1)));
#line 1245 "global_data.m"
        MR_Word ll_backend__global_data__Rval0_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Lval0_5, (MR_Integer) 2)));
#line 1245 "global_data.m"
        MR_Word ll_backend__global_data__FieldNum_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Lval0_5, (MR_Integer) 3)));
#line 1245 "global_data.m"
        MR_Word ll_backend__global_data__Rval_10;

#line 1246 "global_data.m"
        {
#line 1246 "global_data.m"
          ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__Remap_4, ll_backend__global_data__Rval0_8, &ll_backend__global_data__Rval_10);
        }
#line 1247 "global_data.m"
        {
#line 1247 "global_data.m"
          MR_Word base;
#line 1247 "global_data.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1247 "global_data.m"
          *ll_backend__global_data__Lval_6 = base;
#line 1247 "global_data.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1247 "global_data.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__MaybeTag_7));
#line 1247 "global_data.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__Rval_10));
#line 1247 "global_data.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__global_data__FieldNum_9));
#line 1247 "global_data.m"
        }
#line 1245 "global_data.m"
      }
#line 1245 "global_data.m"
    else
#line 1245 "global_data.m"
      if (((((MR_tag((MR_Word) ll_backend__global_data__Lval0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Lval0_5, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 1249 "global_data.m"
        {
#line 1249 "global_data.m"
          MR_Word ll_backend__global_data__Rval0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Lval0_5, (MR_Integer) 1)));
#line 1249 "global_data.m"
          MR_Word ll_backend__global_data__Rval_28;

#line 1250 "global_data.m"
          {
#line 1250 "global_data.m"
            ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__Remap_4, ll_backend__global_data__Rval0_27, &ll_backend__global_data__Rval_28);
          }
#line 1251 "global_data.m"
          {
#line 1251 "global_data.m"
            MR_Word base;
#line 1251 "global_data.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1251 "global_data.m"
            *ll_backend__global_data__Lval_6 = base;
#line 1251 "global_data.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 1251 "global_data.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Rval_28));
#line 1251 "global_data.m"
          }
#line 1249 "global_data.m"
        }
#line 1245 "global_data.m"
      else
#line 1273 "global_data.m"
        *ll_backend__global_data__Lval_6 = ll_backend__global_data__Lval0_5;
#line 1245 "global_data.m"
  }
#line 1241 "global_data.m"
}

#line 1233 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_foreign_proc_output_3_p_0(
#line 1233 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 1233 "global_data.m"
  MR_Word ll_backend__global_data__Output0_5,
#line 1233 "global_data.m"
  MR_Word * ll_backend__global_data__Output_6)
#line 1233 "global_data.m"
{
#line 1236 "global_data.m"
  {
#line 1236 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 1236 "global_data.m"
    MR_Word ll_backend__global_data__Lval0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Output0_5, (MR_Integer) 0)));
#line 1236 "global_data.m"
    MR_Word ll_backend__global_data__A_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Output0_5, (MR_Integer) 1)));
#line 1236 "global_data.m"
    MR_Word ll_backend__global_data__B_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Output0_5, (MR_Integer) 2)));
#line 1236 "global_data.m"
    MR_Word ll_backend__global_data__C_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Output0_5, (MR_Integer) 3)));
#line 1236 "global_data.m"
    MR_String ll_backend__global_data__D_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Output0_5, (MR_Integer) 4)));
#line 1236 "global_data.m"
    MR_Word ll_backend__global_data__E_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Output0_5, (MR_Integer) 5)));
#line 1236 "global_data.m"
    MR_Word ll_backend__global_data__F_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Output0_5, (MR_Integer) 6)));
#line 1236 "global_data.m"
    MR_Word ll_backend__global_data__Lval_14;

#line 1238 "global_data.m"
    {
#line 1238 "global_data.m"
      ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__Remap_4, ll_backend__global_data__Lval0_7, &ll_backend__global_data__Lval_14);
    }
#line 1239 "global_data.m"
    {
#line 1239 "global_data.m"
      MR_Word base;
#line 1239 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1239 "global_data.m"
      *ll_backend__global_data__Output_6 = base;
#line 1239 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__Lval_14));
#line 1239 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__A_8));
#line 1239 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__B_9));
#line 1239 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__C_10));
#line 1239 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__D_11));
#line 1239 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__global_data__E_12));
#line 1239 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__global_data__F_13));
#line 1239 "global_data.m"
    }
#line 1236 "global_data.m"
  }
#line 1233 "global_data.m"
}

#line 1225 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_foreign_proc_input_3_p_0(
#line 1225 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 1225 "global_data.m"
  MR_Word ll_backend__global_data__Input0_5,
#line 1225 "global_data.m"
  MR_Word * ll_backend__global_data__Input_6)
#line 1225 "global_data.m"
{
#line 1228 "global_data.m"
  {
#line 1228 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 1228 "global_data.m"
    MR_String ll_backend__global_data__A_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Input0_5, (MR_Integer) 0)));
#line 1228 "global_data.m"
    MR_Word ll_backend__global_data__B_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Input0_5, (MR_Integer) 1)));
#line 1228 "global_data.m"
    MR_Word ll_backend__global_data__C_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Input0_5, (MR_Integer) 2)));
#line 1228 "global_data.m"
    MR_Word ll_backend__global_data__D_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Input0_5, (MR_Integer) 3)));
#line 1228 "global_data.m"
    MR_Word ll_backend__global_data__Rval0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Input0_5, (MR_Integer) 4)));
#line 1228 "global_data.m"
    MR_Word ll_backend__global_data__E_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Input0_5, (MR_Integer) 5)));
#line 1228 "global_data.m"
    MR_Word ll_backend__global_data__F_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Input0_5, (MR_Integer) 6)));
#line 1228 "global_data.m"
    MR_Word ll_backend__global_data__Rval_14;

#line 1230 "global_data.m"
    {
#line 1230 "global_data.m"
      ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__Remap_4, ll_backend__global_data__Rval0_11, &ll_backend__global_data__Rval_14);
    }
#line 1231 "global_data.m"
    {
#line 1231 "global_data.m"
      MR_Word base;
#line 1231 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1231 "global_data.m"
      *ll_backend__global_data__Input_6 = base;
#line 1231 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__A_7));
#line 1231 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__B_8));
#line 1231 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__C_9));
#line 1231 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__D_10));
#line 1231 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__Rval_14));
#line 1231 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__global_data__E_12));
#line 1231 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__global_data__F_13));
#line 1231 "global_data.m"
    }
#line 1228 "global_data.m"
  }
#line 1225 "global_data.m"
}

#line 1213 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_foreign_proc_component_3_p_0_2(
#line 1213 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 1213 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 1213 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2)
#line 1213 "global_data.m"
{
#line 1213 "global_data.m"
  {
#line 1213 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 1213 "global_data.m"
    MR_Word ll_backend__global_data__conv1_Output_6;

#line 1213 "global_data.m"
    {
#line 1213 "global_data.m"
      ll_backend__global_data__remap_foreign_proc_output_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv1_Output_6);
    }
#line 1213 "global_data.m"
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv1_Output_6));
#line 1213 "global_data.m"
  }
#line 1213 "global_data.m"
}

#line 1209 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_foreign_proc_component_3_p_0_1(
#line 1209 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 1209 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 1209 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2)
#line 1209 "global_data.m"
{
#line 1209 "global_data.m"
  {
#line 1209 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 1209 "global_data.m"
    MR_Word ll_backend__global_data__conv0_Input_6;

#line 1209 "global_data.m"
    {
#line 1209 "global_data.m"
      ll_backend__global_data__remap_foreign_proc_input_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv0_Input_6);
    }
#line 1209 "global_data.m"
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv0_Input_6));
#line 1209 "global_data.m"
  }
#line 1209 "global_data.m"
}

#line 1203 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_foreign_proc_component_3_p_0(
#line 1203 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 1203 "global_data.m"
  MR_Word ll_backend__global_data__Comp0_5,
#line 1203 "global_data.m"
  MR_Word * ll_backend__global_data__Comp_6)
#line 1203 "global_data.m"
{
#line 1208 "global_data.m"
  {
#line 1208 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;

#line 1208 "global_data.m"
    if (((MR_tag((MR_Word) ll_backend__global_data__Comp0_5)) == (MR_mktag((MR_Integer) 1))))
#line 1208 "global_data.m"
      {
#line 1208 "global_data.m"
        MR_Word ll_backend__global_data__TypeCtorInfo_24_24;
#line 1208 "global_data.m"
        MR_Word ll_backend__global_data__Inputs0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__Comp0_5, (MR_Integer) 0)));
#line 1208 "global_data.m"
        MR_Word ll_backend__global_data__Inputs_8;
#line 1208 "global_data.m"
        MR_Word ll_backend__global_data__V_21_21;

#line 1209 "global_data.m"
        {
#line 1209 "global_data.m"
          ll_backend__global_data__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1209 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__V_21_21, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[10]));
#line 1209 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__V_21_21, 1) = ((MR_Box) (ll_backend__global_data__remap_foreign_proc_component_3_p_0_1));
#line 1209 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1209 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__V_21_21, 3) = ((MR_Box) (ll_backend__global_data__Remap_4));
#line 1209 "global_data.m"
        }
#line 6800 "ll_backend.global_data.c"
        ll_backend__global_data__TypeCtorInfo_24_24 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_input_0;
#line 1209 "global_data.m"
        {
#line 1209 "global_data.m"
          mercury__list__map_3_p_0(ll_backend__global_data__TypeCtorInfo_24_24, ll_backend__global_data__TypeCtorInfo_24_24, ll_backend__global_data__V_21_21, ll_backend__global_data__Inputs0_7, &ll_backend__global_data__Inputs_8);
        }
#line 1210 "global_data.m"
        {
#line 1210 "global_data.m"
          MR_Word base;
#line 1210 "global_data.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1210 "global_data.m"
          *ll_backend__global_data__Comp_6 = base;
#line 1210 "global_data.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__global_data__Inputs_8));
#line 1210 "global_data.m"
        }
#line 1208 "global_data.m"
      }
#line 1208 "global_data.m"
    else
#line 1208 "global_data.m"
      if (((MR_tag((MR_Word) ll_backend__global_data__Comp0_5)) == (MR_mktag((MR_Integer) 2))))
#line 1212 "global_data.m"
        {
#line 1212 "global_data.m"
          MR_Word ll_backend__global_data__TypeCtorInfo_27_27;
#line 1212 "global_data.m"
          MR_Word ll_backend__global_data__Outputs0_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__global_data__Comp0_5, (MR_Integer) 0)));
#line 1212 "global_data.m"
          MR_Word ll_backend__global_data__Outputs_10;
#line 1212 "global_data.m"
          MR_Word ll_backend__global_data__V_20_20;

#line 1213 "global_data.m"
          {
#line 1213 "global_data.m"
            ll_backend__global_data__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1213 "global_data.m"
            MR_hl_field(MR_mktag(0), ll_backend__global_data__V_20_20, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[11]));
#line 1213 "global_data.m"
            MR_hl_field(MR_mktag(0), ll_backend__global_data__V_20_20, 1) = ((MR_Box) (ll_backend__global_data__remap_foreign_proc_component_3_p_0_2));
#line 1213 "global_data.m"
            MR_hl_field(MR_mktag(0), ll_backend__global_data__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1213 "global_data.m"
            MR_hl_field(MR_mktag(0), ll_backend__global_data__V_20_20, 3) = ((MR_Box) (ll_backend__global_data__Remap_4));
#line 1213 "global_data.m"
          }
#line 6850 "ll_backend.global_data.c"
          ll_backend__global_data__TypeCtorInfo_27_27 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_output_0;
#line 1213 "global_data.m"
          {
#line 1213 "global_data.m"
            mercury__list__map_3_p_0(ll_backend__global_data__TypeCtorInfo_27_27, ll_backend__global_data__TypeCtorInfo_27_27, ll_backend__global_data__V_20_20, ll_backend__global_data__Outputs0_9, &ll_backend__global_data__Outputs_10);
          }
#line 1214 "global_data.m"
          {
#line 1214 "global_data.m"
            MR_Word base;
#line 1214 "global_data.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1214 "global_data.m"
            *ll_backend__global_data__Comp_6 = base;
#line 1214 "global_data.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__global_data__Outputs_10));
#line 1214 "global_data.m"
          }
#line 1212 "global_data.m"
        }
#line 1208 "global_data.m"
      else
#line 1222 "global_data.m"
        *ll_backend__global_data__Comp_6 = ll_backend__global_data__Comp0_5;
#line 1208 "global_data.m"
  }
#line 1203 "global_data.m"
}

#line 1198 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_ts_table_index_3_p_0(
#line 1198 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 1198 "global_data.m"
  MR_Integer ll_backend__global_data__HeadVar__2_2,
#line 1198 "global_data.m"
  MR_Integer * ll_backend__global_data__HeadVar__3_3)
#line 1198 "global_data.m"
{
#line 1200 "global_data.m"
  {
#line 1200 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;

#line 1200 "global_data.m"
    if ((ll_backend__global_data__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1200 "global_data.m"
      *ll_backend__global_data__HeadVar__3_3 = ll_backend__global_data__HeadVar__2_2;
#line 1200 "global_data.m"
    else
#line 1201 "global_data.m"
      {
#line 1201 "global_data.m"
        MR_Integer ll_backend__global_data__Offset_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 0)));

#line 1201 "global_data.m"
        *ll_backend__global_data__HeadVar__3_3 = (ll_backend__global_data__HeadVar__2_2 + ll_backend__global_data__Offset_7);
#line 1201 "global_data.m"
      }
#line 1200 "global_data.m"
  }
#line 1198 "global_data.m"
}

#line 1060 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_instr_3_p_0_2(
#line 1060 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 1060 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 1060 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2)
#line 1060 "global_data.m"
{
#line 1060 "global_data.m"
  {
#line 1060 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 1060 "global_data.m"
    MR_Word ll_backend__global_data__conv1_Comp_6;

#line 1060 "global_data.m"
    {
#line 1060 "global_data.m"
      ll_backend__global_data__remap_foreign_proc_component_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv1_Comp_6);
    }
#line 1060 "global_data.m"
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv1_Comp_6));
#line 1060 "global_data.m"
  }
#line 1060 "global_data.m"
}

#line 1044 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_instr_3_p_0_1(
#line 1044 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 1044 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 1044 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2)
#line 1044 "global_data.m"
{
#line 1044 "global_data.m"
  {
#line 1044 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 1044 "global_data.m"
    MR_Word ll_backend__global_data__conv0_STATE_VARIABLE_Instr_10;

#line 1044 "global_data.m"
    {
#line 1044 "global_data.m"
      ll_backend__global_data__remap_instruction_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv0_STATE_VARIABLE_Instr_10);
    }
#line 1044 "global_data.m"
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv0_STATE_VARIABLE_Instr_10));
#line 1044 "global_data.m"
  }
#line 1044 "global_data.m"
}

#line 1038 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_instr_3_p_0(
#line 1038 "global_data.m"
  MR_Word ll_backend__global_data__GlobalDataRemap_4,
#line 1038 "global_data.m"
  MR_Word ll_backend__global_data__Instr0_5,
#line 1038 "global_data.m"
  MR_Word * ll_backend__global_data__Instr_6)
#line 1038 "global_data.m"
{
#line 1040 "global_data.m"
  {
#line 1040 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 1040 "global_data.m"
    MR_Word ll_backend__global_data__StaticCellRemap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataRemap_4, (MR_Integer) 1)));
#line 1041 "global_data.m"
    MR_Word ll_backend__global_data__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataRemap_4, (MR_Integer) 0)));

#line 1046 "global_data.m"
    if (((((MR_tag((MR_Word) ll_backend__global_data__Instr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1047 "global_data.m"
      {
#line 1047 "global_data.m"
        MR_Word ll_backend__global_data__Lval_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
#line 1047 "global_data.m"
        MR_Word ll_backend__global_data__Rval0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));
#line 1047 "global_data.m"
        MR_Word ll_backend__global_data__Rval_14;

#line 1048 "global_data.m"
        {
#line 1048 "global_data.m"
          ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Rval0_13, &ll_backend__global_data__Rval_14);
        }
#line 1049 "global_data.m"
        {
#line 1049 "global_data.m"
          MR_Word base;
#line 1049 "global_data.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1049 "global_data.m"
          *ll_backend__global_data__Instr_6 = base;
#line 1049 "global_data.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1049 "global_data.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Lval_12));
#line 1049 "global_data.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__Rval_14));
#line 1049 "global_data.m"
        }
#line 1047 "global_data.m"
      }
#line 1046 "global_data.m"
    else
#line 1046 "global_data.m"
      if (((((MR_tag((MR_Word) ll_backend__global_data__Instr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1043 "global_data.m"
        {
#line 1043 "global_data.m"
          MR_Word ll_backend__global_data__TypeCtorInfo_144_144;
#line 1043 "global_data.m"
          MR_Integer ll_backend__global_data__NumIntTemps_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
#line 1043 "global_data.m"
          MR_Integer ll_backend__global_data__NumFloatTemps_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));
#line 1043 "global_data.m"
          MR_Word ll_backend__global_data__Block0_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 3)));
#line 1043 "global_data.m"
          MR_Word ll_backend__global_data__Block_11;
#line 1043 "global_data.m"
          MR_Word ll_backend__global_data__V_94_94;

#line 1044 "global_data.m"
          {
#line 1044 "global_data.m"
            ll_backend__global_data__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1044 "global_data.m"
            MR_hl_field(MR_mktag(0), ll_backend__global_data__V_94_94, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[1]));
#line 1044 "global_data.m"
            MR_hl_field(MR_mktag(0), ll_backend__global_data__V_94_94, 1) = ((MR_Box) (ll_backend__global_data__remap_instr_3_p_0_1));
#line 1044 "global_data.m"
            MR_hl_field(MR_mktag(0), ll_backend__global_data__V_94_94, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1044 "global_data.m"
            MR_hl_field(MR_mktag(0), ll_backend__global_data__V_94_94, 3) = ((MR_Box) (ll_backend__global_data__GlobalDataRemap_4));
#line 1044 "global_data.m"
          }
#line 7063 "ll_backend.global_data.c"
          ll_backend__global_data__TypeCtorInfo_144_144 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 1044 "global_data.m"
          {
#line 1044 "global_data.m"
            mercury__list__map_3_p_0(ll_backend__global_data__TypeCtorInfo_144_144, ll_backend__global_data__TypeCtorInfo_144_144, ll_backend__global_data__V_94_94, ll_backend__global_data__Block0_10, &ll_backend__global_data__Block_11);
          }
#line 1045 "global_data.m"
          {
#line 1045 "global_data.m"
            MR_Word base;
#line 1045 "global_data.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1045 "global_data.m"
            *ll_backend__global_data__Instr_6 = base;
#line 1045 "global_data.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1045 "global_data.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__NumIntTemps_8));
#line 1045 "global_data.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__NumFloatTemps_9));
#line 1045 "global_data.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__global_data__Block_11));
#line 1045 "global_data.m"
          }
#line 1043 "global_data.m"
        }
#line 1046 "global_data.m"
      else
#line 1046 "global_data.m"
        if (((((MR_tag((MR_Word) ll_backend__global_data__Instr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1063 "global_data.m"
          {
#line 1063 "global_data.m"
            MR_Word ll_backend__global_data__MaybeLabels_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));
#line 1063 "global_data.m"
            MR_Word ll_backend__global_data__Rval0_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
#line 1063 "global_data.m"
            MR_Word ll_backend__global_data__Rval_101;

#line 1064 "global_data.m"
            {
#line 1064 "global_data.m"
              ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Rval0_100, &ll_backend__global_data__Rval_101);
            }
#line 1065 "global_data.m"
            {
#line 1065 "global_data.m"
              MR_Word base;
#line 1065 "global_data.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1065 "global_data.m"
              *ll_backend__global_data__Instr_6 = base;
#line 1065 "global_data.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1065 "global_data.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Rval_101));
#line 1065 "global_data.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__MaybeLabels_27));
#line 1065 "global_data.m"
            }
#line 1063 "global_data.m"
          }
#line 1046 "global_data.m"
        else
#line 1046 "global_data.m"
          if (((((MR_tag((MR_Word) ll_backend__global_data__Instr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 0)))) == (MR_Integer) 27))))
#line 1059 "global_data.m"
            {
#line 1059 "global_data.m"
              MR_Word ll_backend__global_data__TypeCtorInfo_147_147;
#line 1059 "global_data.m"
              MR_Word ll_backend__global_data__A_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
#line 1059 "global_data.m"
              MR_Word ll_backend__global_data__Comps0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));
#line 1059 "global_data.m"
              MR_Word ll_backend__global_data__B_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 3)));
#line 1059 "global_data.m"
              MR_Word ll_backend__global_data__C_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 4)));
#line 1059 "global_data.m"
              MR_Word ll_backend__global_data__D_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 5)));
#line 1059 "global_data.m"
              MR_Word ll_backend__global_data__E_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 6)));
#line 1059 "global_data.m"
              MR_Word ll_backend__global_data__F_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 7)));
#line 1059 "global_data.m"
              MR_Word ll_backend__global_data__G_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 8)));
#line 1059 "global_data.m"
              MR_Word ll_backend__global_data__H_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 9)));
#line 1059 "global_data.m"
              MR_Word ll_backend__global_data__I_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 10)));
#line 1059 "global_data.m"
              MR_Word ll_backend__global_data__Comps_26;
#line 1059 "global_data.m"
              MR_Word ll_backend__global_data__V_93_93;

#line 1060 "global_data.m"
              {
#line 1060 "global_data.m"
                ll_backend__global_data__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1060 "global_data.m"
                MR_hl_field(MR_mktag(0), ll_backend__global_data__V_93_93, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[9]));
#line 1060 "global_data.m"
                MR_hl_field(MR_mktag(0), ll_backend__global_data__V_93_93, 1) = ((MR_Box) (ll_backend__global_data__remap_instr_3_p_0_2));
#line 1060 "global_data.m"
                MR_hl_field(MR_mktag(0), ll_backend__global_data__V_93_93, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1060 "global_data.m"
                MR_hl_field(MR_mktag(0), ll_backend__global_data__V_93_93, 3) = ((MR_Box) (ll_backend__global_data__StaticCellRemap_7));
#line 1060 "global_data.m"
              }
#line 7173 "ll_backend.global_data.c"
              ll_backend__global_data__TypeCtorInfo_147_147 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0;
#line 1060 "global_data.m"
              {
#line 1060 "global_data.m"
                mercury__list__map_3_p_0(ll_backend__global_data__TypeCtorInfo_147_147, ll_backend__global_data__TypeCtorInfo_147_147, ll_backend__global_data__V_93_93, ll_backend__global_data__Comps0_17, &ll_backend__global_data__Comps_26);
              }
#line 1061 "global_data.m"
              {
#line 1061 "global_data.m"
                MR_Word base;
#line 1061 "global_data.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 1061 "global_data.m"
                *ll_backend__global_data__Instr_6 = base;
#line 1061 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 1061 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__A_16));
#line 1061 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__Comps_26));
#line 1061 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__global_data__B_18));
#line 1061 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__global_data__C_19));
#line 1061 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ll_backend__global_data__D_20));
#line 1061 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (ll_backend__global_data__E_21));
#line 1061 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (ll_backend__global_data__F_22));
#line 1061 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (ll_backend__global_data__G_23));
#line 1061 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 9) = ((MR_Box) (ll_backend__global_data__H_24));
#line 1061 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 10) = ((MR_Box) (ll_backend__global_data__I_25));
#line 1061 "global_data.m"
              }
#line 1059 "global_data.m"
            }
#line 1046 "global_data.m"
          else
#line 1046 "global_data.m"
            if (((((MR_tag((MR_Word) ll_backend__global_data__Instr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 1114 "global_data.m"
              {
#line 1114 "global_data.m"
                MR_Word ll_backend__global_data__Rval0_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
#line 1114 "global_data.m"
                MR_Word ll_backend__global_data__Rval_112;

#line 1115 "global_data.m"
                {
#line 1115 "global_data.m"
                  ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Rval0_111, &ll_backend__global_data__Rval_112);
                }
#line 1116 "global_data.m"
                {
#line 1116 "global_data.m"
                  MR_Word base;
#line 1116 "global_data.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1116 "global_data.m"
                  *ll_backend__global_data__Instr_6 = base;
#line 1116 "global_data.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 1116 "global_data.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Rval_112));
#line 1116 "global_data.m"
                }
#line 1114 "global_data.m"
              }
#line 1046 "global_data.m"
            else
#line 1046 "global_data.m"
              if (((((MR_tag((MR_Word) ll_backend__global_data__Instr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 1055 "global_data.m"
                {
#line 1055 "global_data.m"
                  MR_Word ll_backend__global_data__CodeAddr_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));
#line 1055 "global_data.m"
                  MR_Word ll_backend__global_data__Rval0_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
#line 1055 "global_data.m"
                  MR_Word ll_backend__global_data__Rval_99;

#line 1056 "global_data.m"
                  {
#line 1056 "global_data.m"
                    ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Rval0_98, &ll_backend__global_data__Rval_99);
                  }
#line 1057 "global_data.m"
                  {
#line 1057 "global_data.m"
                    MR_Word base;
#line 1057 "global_data.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1057 "global_data.m"
                    *ll_backend__global_data__Instr_6 = base;
#line 1057 "global_data.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1057 "global_data.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Rval_99));
#line 1057 "global_data.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__CodeAddr_15));
#line 1057 "global_data.m"
                  }
#line 1055 "global_data.m"
                }
#line 1046 "global_data.m"
              else
#line 1046 "global_data.m"
                if (((((MR_tag((MR_Word) ll_backend__global_data__Instr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 1076 "global_data.m"
                  {
#line 1076 "global_data.m"
                    MR_Word ll_backend__global_data__MaybeTag_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));
#line 1076 "global_data.m"
                    MR_Word ll_backend__global_data__MaybeOffset_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 3)));
#line 1076 "global_data.m"
                    MR_Word ll_backend__global_data__SizeRval0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 4)));
#line 1076 "global_data.m"
                    MR_Word ll_backend__global_data__Prof_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 5)));
#line 1076 "global_data.m"
                    MR_Word ll_backend__global_data__Atomic_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 6)));
#line 1076 "global_data.m"
                    MR_Word ll_backend__global_data__MaybeRegion0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 7)));
#line 1076 "global_data.m"
                    MR_Word ll_backend__global_data__MaybeReuse0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 8)));
#line 1076 "global_data.m"
                    MR_Word ll_backend__global_data__SizeRval_36;
#line 1076 "global_data.m"
                    MR_Word ll_backend__global_data__MaybeRegion_39;
#line 1076 "global_data.m"
                    MR_Word ll_backend__global_data__MaybeReuse_46;
#line 1076 "global_data.m"
                    MR_Word ll_backend__global_data__Lval_105;
#line 1076 "global_data.m"
                    MR_Word ll_backend__global_data__Lval0_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));

#line 1077 "global_data.m"
                    {
#line 1077 "global_data.m"
                      ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Lval0_106, &ll_backend__global_data__Lval_105);
                    }
#line 1078 "global_data.m"
                    {
#line 1078 "global_data.m"
                      ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__SizeRval0_31, &ll_backend__global_data__SizeRval_36);
                    }
#line 1083 "global_data.m"
                    if ((ll_backend__global_data__MaybeRegion0_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1085 "global_data.m"
                      ll_backend__global_data__MaybeRegion_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1083 "global_data.m"
                    else
#line 1080 "global_data.m"
                      {
#line 1080 "global_data.m"
                        MR_Word ll_backend__global_data__Region0_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__MaybeRegion0_34, (MR_Integer) 0)));
#line 1080 "global_data.m"
                        MR_Word ll_backend__global_data__Region_38;

#line 1081 "global_data.m"
                        {
#line 1081 "global_data.m"
                          ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Region0_37, &ll_backend__global_data__Region_38);
                        }
#line 1082 "global_data.m"
                        {
#line 1082 "global_data.m"
                          ll_backend__global_data__MaybeRegion_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1082 "global_data.m"
                          MR_hl_field(MR_mktag(1), ll_backend__global_data__MaybeRegion_39, 0) = ((MR_Box) (ll_backend__global_data__Region_38));
#line 1082 "global_data.m"
                        }
#line 1080 "global_data.m"
                      }
#line 1099 "global_data.m"
                    if ((ll_backend__global_data__MaybeReuse0_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1101 "global_data.m"
                      ll_backend__global_data__MaybeReuse_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1099 "global_data.m"
                    else
#line 1088 "global_data.m"
                      {
#line 1088 "global_data.m"
                        MR_Word ll_backend__global_data__Reuse0_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__MaybeReuse0_35, (MR_Integer) 0)));
#line 1088 "global_data.m"
                        MR_Word ll_backend__global_data__MaybeFlag0_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__MaybeReuse0_35, (MR_Integer) 1)));
#line 1088 "global_data.m"
                        MR_Word ll_backend__global_data__Reuse_42;
#line 1088 "global_data.m"
                        MR_Word ll_backend__global_data__MaybeFlag_45;

#line 1089 "global_data.m"
                        {
#line 1089 "global_data.m"
                          ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Reuse0_40, &ll_backend__global_data__Reuse_42);
                        }
#line 1094 "global_data.m"
                        if ((ll_backend__global_data__MaybeFlag0_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1096 "global_data.m"
                          ll_backend__global_data__MaybeFlag_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1094 "global_data.m"
                        else
#line 1091 "global_data.m"
                          {
#line 1091 "global_data.m"
                            MR_Word ll_backend__global_data__Flag0_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__MaybeFlag0_41, (MR_Integer) 0)));
#line 1091 "global_data.m"
                            MR_Word ll_backend__global_data__Flag_44;

#line 1092 "global_data.m"
                            {
#line 1092 "global_data.m"
                              ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Flag0_43, &ll_backend__global_data__Flag_44);
                            }
#line 1093 "global_data.m"
                            {
#line 1093 "global_data.m"
                              ll_backend__global_data__MaybeFlag_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1093 "global_data.m"
                              MR_hl_field(MR_mktag(1), ll_backend__global_data__MaybeFlag_45, 0) = ((MR_Box) (ll_backend__global_data__Flag_44));
#line 1093 "global_data.m"
                            }
#line 1091 "global_data.m"
                          }
#line 1098 "global_data.m"
                        {
#line 1098 "global_data.m"
                          ll_backend__global_data__MaybeReuse_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1098 "global_data.m"
                          MR_hl_field(MR_mktag(1), ll_backend__global_data__MaybeReuse_46, 0) = ((MR_Box) (ll_backend__global_data__Reuse_42));
#line 1098 "global_data.m"
                          MR_hl_field(MR_mktag(1), ll_backend__global_data__MaybeReuse_46, 1) = ((MR_Box) (ll_backend__global_data__MaybeFlag_45));
#line 1098 "global_data.m"
                        }
#line 1088 "global_data.m"
                      }
#line 1103 "global_data.m"
                    {
#line 1103 "global_data.m"
                      MR_Word base;
#line 1103 "global_data.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL));
#line 1103 "global_data.m"
                      *ll_backend__global_data__Instr_6 = base;
#line 1103 "global_data.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 1103 "global_data.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Lval_105));
#line 1103 "global_data.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__MaybeTag_29));
#line 1103 "global_data.m"
                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__global_data__MaybeOffset_30));
#line 1103 "global_data.m"
                      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__global_data__SizeRval_36));
#line 1103 "global_data.m"
                      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ll_backend__global_data__Prof_32));
#line 1103 "global_data.m"
                      MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (ll_backend__global_data__Atomic_33));
#line 1103 "global_data.m"
                      MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (ll_backend__global_data__MaybeRegion_39));
#line 1103 "global_data.m"
                      MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (ll_backend__global_data__MaybeReuse_46));
#line 1103 "global_data.m"
                    }
#line 1076 "global_data.m"
                  }
#line 1046 "global_data.m"
                else
#line 1046 "global_data.m"
                  if (((((MR_tag((MR_Word) ll_backend__global_data__Instr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 0)))) == (MR_Integer) 28))))
#line 1152 "global_data.m"
                    {
#line 1152 "global_data.m"
                      MR_Integer ll_backend__global_data__NumJoins_61 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));
#line 1152 "global_data.m"
                      MR_Integer ll_backend__global_data__ConjId0_62 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 3)));
#line 1152 "global_data.m"
                      MR_Integer ll_backend__global_data__ConjId_63;
#line 1152 "global_data.m"
                      MR_Word ll_backend__global_data__V_92_92;
#line 1152 "global_data.m"
                      MR_Word ll_backend__global_data__Lval_124;
#line 1152 "global_data.m"
                      MR_Word ll_backend__global_data__Lval0_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
#line 1154 "global_data.m"
                      MR_Word ll_backend__global_data__V_141_141;

#line 1153 "global_data.m"
                      {
#line 1153 "global_data.m"
                        ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Lval0_125, &ll_backend__global_data__Lval_124);
                      }
#line 1154 "global_data.m"
                      ll_backend__global_data__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataRemap_4, (MR_Integer) 0)));
#line 1154 "global_data.m"
                      ll_backend__global_data__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataRemap_4, (MR_Integer) 1)));
#line 1154 "global_data.m"
                      {
#line 1154 "global_data.m"
                        ll_backend__global_data__remap_ts_table_index_3_p_0(ll_backend__global_data__V_92_92, ll_backend__global_data__ConjId0_62, &ll_backend__global_data__ConjId_63);
                      }
#line 1156 "global_data.m"
                      {
#line 1156 "global_data.m"
                        MR_Word base;
#line 1156 "global_data.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1156 "global_data.m"
                        *ll_backend__global_data__Instr_6 = base;
#line 1156 "global_data.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 28));
#line 1156 "global_data.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Lval_124));
#line 1156 "global_data.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__NumJoins_61));
#line 1156 "global_data.m"
                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__global_data__ConjId_63));
#line 1156 "global_data.m"
                      }
#line 1152 "global_data.m"
                    }
#line 1046 "global_data.m"
                  else
#line 1046 "global_data.m"
                    if (((((MR_tag((MR_Word) ll_backend__global_data__Instr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 0)))) == (MR_Integer) 30))))
#line 1158 "global_data.m"
                      {
#line 1158 "global_data.m"
                        MR_Word ll_backend__global_data__Label_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));
#line 1158 "global_data.m"
                        MR_Word ll_backend__global_data__Lval_126;
#line 1158 "global_data.m"
                        MR_Word ll_backend__global_data__Lval0_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));

#line 1159 "global_data.m"
                        {
#line 1159 "global_data.m"
                          ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Lval0_127, &ll_backend__global_data__Lval_126);
                        }
#line 1160 "global_data.m"
                        {
#line 1160 "global_data.m"
                          MR_Word base;
#line 1160 "global_data.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1160 "global_data.m"
                          *ll_backend__global_data__Instr_6 = base;
#line 1160 "global_data.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 30));
#line 1160 "global_data.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Lval_126));
#line 1160 "global_data.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__Label_64));
#line 1160 "global_data.m"
                        }
#line 1158 "global_data.m"
                      }
#line 1046 "global_data.m"
                    else
#line 1046 "global_data.m"
                      if (((((MR_tag((MR_Word) ll_backend__global_data__Instr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1051 "global_data.m"
                        {
#line 1051 "global_data.m"
                          MR_Word ll_backend__global_data__Lval_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
#line 1051 "global_data.m"
                          MR_Word ll_backend__global_data__Rval0_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));
#line 1051 "global_data.m"
                          MR_Word ll_backend__global_data__Rval_97;

#line 1052 "global_data.m"
                          {
#line 1052 "global_data.m"
                            ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Rval0_96, &ll_backend__global_data__Rval_97);
                          }
#line 1053 "global_data.m"
                          {
#line 1053 "global_data.m"
                            MR_Word base;
#line 1053 "global_data.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1053 "global_data.m"
                            *ll_backend__global_data__Instr_6 = base;
#line 1053 "global_data.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1053 "global_data.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Lval_95));
#line 1053 "global_data.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__Rval_97));
#line 1053 "global_data.m"
                          }
#line 1051 "global_data.m"
                        }
#line 1046 "global_data.m"
                      else
#line 1046 "global_data.m"
                        if (((((MR_tag((MR_Word) ll_backend__global_data__Instr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 0)))) == (MR_Integer) 31))))
#line 1162 "global_data.m"
                          {
#line 1162 "global_data.m"
                            MR_Integer ll_backend__global_data__NumSlots_65 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
#line 1162 "global_data.m"
                            MR_Word ll_backend__global_data__Lval_128;
#line 1162 "global_data.m"
                            MR_Word ll_backend__global_data__Lval0_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));

#line 1163 "global_data.m"
                            {
#line 1163 "global_data.m"
                              ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Lval0_129, &ll_backend__global_data__Lval_128);
                            }
#line 1164 "global_data.m"
                            {
#line 1164 "global_data.m"
                              MR_Word base;
#line 1164 "global_data.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1164 "global_data.m"
                              *ll_backend__global_data__Instr_6 = base;
#line 1164 "global_data.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 31));
#line 1164 "global_data.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__NumSlots_65));
#line 1164 "global_data.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__Lval_128));
#line 1164 "global_data.m"
                            }
#line 1162 "global_data.m"
                          }
#line 1046 "global_data.m"
                        else
#line 1046 "global_data.m"
                          if (((((MR_tag((MR_Word) ll_backend__global_data__Instr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 0)))) == (MR_Integer) 34))))
#line 1176 "global_data.m"
                            {
#line 1176 "global_data.m"
                              MR_Word ll_backend__global_data__LCRval0_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
#line 1176 "global_data.m"
                              MR_Word ll_backend__global_data__LCSRval0_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));
#line 1176 "global_data.m"
                              MR_Word ll_backend__global_data__LCRval_138;
#line 1176 "global_data.m"
                              MR_Word ll_backend__global_data__LCSRval_139;

#line 1177 "global_data.m"
                              {
#line 1177 "global_data.m"
                                ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__LCRval0_136, &ll_backend__global_data__LCRval_138);
                              }
#line 1178 "global_data.m"
                              {
#line 1178 "global_data.m"
                                ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__LCSRval0_137, &ll_backend__global_data__LCSRval_139);
                              }
#line 1179 "global_data.m"
                              {
#line 1179 "global_data.m"
                                MR_Word base;
#line 1179 "global_data.m"
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1179 "global_data.m"
                                *ll_backend__global_data__Instr_6 = base;
#line 1179 "global_data.m"
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 34));
#line 1179 "global_data.m"
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__LCRval_138));
#line 1179 "global_data.m"
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__LCSRval_139));
#line 1179 "global_data.m"
                              }
#line 1176 "global_data.m"
                            }
#line 1046 "global_data.m"
                          else
#line 1046 "global_data.m"
                            if (((((MR_tag((MR_Word) ll_backend__global_data__Instr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 0)))) == (MR_Integer) 33))))
#line 1171 "global_data.m"
                              {
#line 1171 "global_data.m"
                                MR_Word ll_backend__global_data__LCRval0_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
#line 1171 "global_data.m"
                                MR_Word ll_backend__global_data__LCSRval0_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));
#line 1171 "global_data.m"
                                MR_Word ll_backend__global_data__LCRval_68;
#line 1171 "global_data.m"
                                MR_Word ll_backend__global_data__LCSRval_69;
#line 1171 "global_data.m"
                                MR_Word ll_backend__global_data__Label_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 3)));

#line 1172 "global_data.m"
                                {
#line 1172 "global_data.m"
                                  ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__LCRval0_66, &ll_backend__global_data__LCRval_68);
                                }
#line 1173 "global_data.m"
                                {
#line 1173 "global_data.m"
                                  ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__LCSRval0_67, &ll_backend__global_data__LCSRval_69);
                                }
#line 1174 "global_data.m"
                                {
#line 1174 "global_data.m"
                                  MR_Word base;
#line 1174 "global_data.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1174 "global_data.m"
                                  *ll_backend__global_data__Instr_6 = base;
#line 1174 "global_data.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 33));
#line 1174 "global_data.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__LCRval_68));
#line 1174 "global_data.m"
                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__LCSRval_69));
#line 1174 "global_data.m"
                                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__global_data__Label_135));
#line 1174 "global_data.m"
                                }
#line 1171 "global_data.m"
                              }
#line 1046 "global_data.m"
                            else
#line 1046 "global_data.m"
                              if (((((MR_tag((MR_Word) ll_backend__global_data__Instr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 0)))) == (MR_Integer) 32))))
#line 1166 "global_data.m"
                                {
#line 1166 "global_data.m"
                                  MR_Word ll_backend__global_data__Lval_130;
#line 1166 "global_data.m"
                                  MR_Word ll_backend__global_data__Rval0_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
#line 1166 "global_data.m"
                                  MR_Word ll_backend__global_data__Rval_132;
#line 1166 "global_data.m"
                                  MR_Word ll_backend__global_data__Lval0_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));
#line 1166 "global_data.m"
                                  MR_Word ll_backend__global_data__Label_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 3)));

#line 1167 "global_data.m"
                                  {
#line 1167 "global_data.m"
                                    ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Rval0_131, &ll_backend__global_data__Rval_132);
                                  }
#line 1168 "global_data.m"
                                  {
#line 1168 "global_data.m"
                                    ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Lval0_133, &ll_backend__global_data__Lval_130);
                                  }
#line 1169 "global_data.m"
                                  {
#line 1169 "global_data.m"
                                    MR_Word base;
#line 1169 "global_data.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1169 "global_data.m"
                                    *ll_backend__global_data__Instr_6 = base;
#line 1169 "global_data.m"
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 32));
#line 1169 "global_data.m"
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Rval_132));
#line 1169 "global_data.m"
                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__Lval_130));
#line 1169 "global_data.m"
                                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__global_data__Label_134));
#line 1169 "global_data.m"
                                  }
#line 1166 "global_data.m"
                                }
#line 1046 "global_data.m"
                              else
#line 1046 "global_data.m"
                                if (((((MR_tag((MR_Word) ll_backend__global_data__Instr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 1106 "global_data.m"
                                  {
#line 1106 "global_data.m"
                                    MR_Word ll_backend__global_data__Lval_107;
#line 1106 "global_data.m"
                                    MR_Word ll_backend__global_data__Lval0_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));

#line 1107 "global_data.m"
                                    {
#line 1107 "global_data.m"
                                      ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Lval0_108, &ll_backend__global_data__Lval_107);
                                    }
#line 1108 "global_data.m"
                                    {
#line 1108 "global_data.m"
                                      MR_Word base;
#line 1108 "global_data.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1108 "global_data.m"
                                      *ll_backend__global_data__Instr_6 = base;
#line 1108 "global_data.m"
                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 1108 "global_data.m"
                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Lval_107));
#line 1108 "global_data.m"
                                    }
#line 1106 "global_data.m"
                                  }
#line 1046 "global_data.m"
                                else
#line 1046 "global_data.m"
                                  if (((((MR_tag((MR_Word) ll_backend__global_data__Instr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 0)))) == (MR_Integer) 22))))
#line 1144 "global_data.m"
                                    {
#line 1144 "global_data.m"
                                      MR_Word ll_backend__global_data__Lval_120;
#line 1144 "global_data.m"
                                      MR_Word ll_backend__global_data__Lval0_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));

#line 1145 "global_data.m"
                                      {
#line 1145 "global_data.m"
                                        ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Lval0_121, &ll_backend__global_data__Lval_120);
                                      }
#line 1146 "global_data.m"
                                      {
#line 1146 "global_data.m"
                                        MR_Word base;
#line 1146 "global_data.m"
                                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1146 "global_data.m"
                                        *ll_backend__global_data__Instr_6 = base;
#line 1146 "global_data.m"
                                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 1146 "global_data.m"
                                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Lval_120));
#line 1146 "global_data.m"
                                      }
#line 1144 "global_data.m"
                                    }
#line 1046 "global_data.m"
                                  else
#line 1046 "global_data.m"
                                    if (((((MR_tag((MR_Word) ll_backend__global_data__Instr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 0)))) == (MR_Integer) 23))))
#line 1148 "global_data.m"
                                      {
#line 1148 "global_data.m"
                                        MR_Word ll_backend__global_data__Rval0_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
#line 1148 "global_data.m"
                                        MR_Word ll_backend__global_data__Rval_123;

#line 1149 "global_data.m"
                                        {
#line 1149 "global_data.m"
                                          ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Rval0_122, &ll_backend__global_data__Rval_123);
                                        }
#line 1150 "global_data.m"
                                        {
#line 1150 "global_data.m"
                                          MR_Word base;
#line 1150 "global_data.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1150 "global_data.m"
                                          *ll_backend__global_data__Instr_6 = base;
#line 1150 "global_data.m"
                                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 23));
#line 1150 "global_data.m"
                                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Rval_123));
#line 1150 "global_data.m"
                                        }
#line 1148 "global_data.m"
                                      }
#line 1046 "global_data.m"
                                    else
#line 1046 "global_data.m"
                                      if (((((MR_tag((MR_Word) ll_backend__global_data__Instr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 1119 "global_data.m"
                                        *ll_backend__global_data__Instr_6 = ll_backend__global_data__Instr0_5;
#line 1046 "global_data.m"
                                      else
#line 1046 "global_data.m"
                                        if (((((MR_tag((MR_Word) ll_backend__global_data__Instr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 0)))) == (MR_Integer) 17))))
#line 1122 "global_data.m"
                                          {
#line 1122 "global_data.m"
                                            MR_Word ll_backend__global_data__FillOp_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
#line 1122 "global_data.m"
                                            MR_Word ll_backend__global_data__IdRval0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 3)));
#line 1122 "global_data.m"
                                            MR_Word ll_backend__global_data__NumLval0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 4)));
#line 1122 "global_data.m"
                                            MR_Word ll_backend__global_data__AddrLval0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 5)));
#line 1122 "global_data.m"
                                            MR_Word ll_backend__global_data__IdRval_53;
#line 1122 "global_data.m"
                                            MR_Word ll_backend__global_data__NumLval_54;
#line 1122 "global_data.m"
                                            MR_Word ll_backend__global_data__AddrLval_55;
#line 1122 "global_data.m"
                                            MR_Word ll_backend__global_data__EmbeddedStackFrame_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));

#line 1123 "global_data.m"
                                            {
#line 1123 "global_data.m"
                                              ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__IdRval0_50, &ll_backend__global_data__IdRval_53);
                                            }
#line 1124 "global_data.m"
                                            {
#line 1124 "global_data.m"
                                              ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__NumLval0_51, &ll_backend__global_data__NumLval_54);
                                            }
#line 1125 "global_data.m"
                                            {
#line 1125 "global_data.m"
                                              ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__AddrLval0_52, &ll_backend__global_data__AddrLval_55);
                                            }
#line 1126 "global_data.m"
                                            {
#line 1126 "global_data.m"
                                              MR_Word base;
#line 1126 "global_data.m"
                                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1126 "global_data.m"
                                              *ll_backend__global_data__Instr_6 = base;
#line 1126 "global_data.m"
                                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
#line 1126 "global_data.m"
                                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__FillOp_49));
#line 1126 "global_data.m"
                                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__EmbeddedStackFrame_113));
#line 1126 "global_data.m"
                                              MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__global_data__IdRval_53));
#line 1126 "global_data.m"
                                              MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__global_data__NumLval_54));
#line 1126 "global_data.m"
                                              MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ll_backend__global_data__AddrLval_55));
#line 1126 "global_data.m"
                                            }
#line 1122 "global_data.m"
                                          }
#line 1046 "global_data.m"
                                        else
#line 1046 "global_data.m"
                                          if (((((MR_tag((MR_Word) ll_backend__global_data__Instr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 0)))) == (MR_Integer) 18))))
#line 1129 "global_data.m"
                                            {
#line 1129 "global_data.m"
                                              MR_Word ll_backend__global_data__SetOp_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
#line 1129 "global_data.m"
                                              MR_Word ll_backend__global_data__ValueRval0_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 3)));
#line 1129 "global_data.m"
                                              MR_Word ll_backend__global_data__ValueRval_58;
#line 1129 "global_data.m"
                                              MR_Word ll_backend__global_data__EmbeddedStackFrame_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));

#line 1130 "global_data.m"
                                              {
#line 1130 "global_data.m"
                                                ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__ValueRval0_57, &ll_backend__global_data__ValueRval_58);
                                              }
#line 1131 "global_data.m"
                                              {
#line 1131 "global_data.m"
                                                MR_Word base;
#line 1131 "global_data.m"
                                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1131 "global_data.m"
                                                *ll_backend__global_data__Instr_6 = base;
#line 1131 "global_data.m"
                                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 1131 "global_data.m"
                                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__SetOp_56));
#line 1131 "global_data.m"
                                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__EmbeddedStackFrame_114));
#line 1131 "global_data.m"
                                                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__global_data__ValueRval_58));
#line 1131 "global_data.m"
                                              }
#line 1129 "global_data.m"
                                            }
#line 1046 "global_data.m"
                                          else
#line 1046 "global_data.m"
                                            if (((((MR_tag((MR_Word) ll_backend__global_data__Instr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 0)))) == (MR_Integer) 21))))
#line 1140 "global_data.m"
                                              {
#line 1140 "global_data.m"
                                                MR_Word ll_backend__global_data__Reason_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));
#line 1140 "global_data.m"
                                                MR_Word ll_backend__global_data__Rval0_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
#line 1140 "global_data.m"
                                                MR_Word ll_backend__global_data__Rval_119;

#line 1141 "global_data.m"
                                                {
#line 1141 "global_data.m"
                                                  ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Rval0_118, &ll_backend__global_data__Rval_119);
                                                }
#line 1142 "global_data.m"
                                                {
#line 1142 "global_data.m"
                                                  MR_Word base;
#line 1142 "global_data.m"
                                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1142 "global_data.m"
                                                  *ll_backend__global_data__Instr_6 = base;
#line 1142 "global_data.m"
                                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 1142 "global_data.m"
                                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Rval_119));
#line 1142 "global_data.m"
                                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__Reason_60));
#line 1142 "global_data.m"
                                                }
#line 1140 "global_data.m"
                                              }
#line 1046 "global_data.m"
                                            else
#line 1046 "global_data.m"
                                              if (((((MR_tag((MR_Word) ll_backend__global_data__Instr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 1110 "global_data.m"
                                                {
#line 1110 "global_data.m"
                                                  MR_Word ll_backend__global_data__Rval0_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
#line 1110 "global_data.m"
                                                  MR_Word ll_backend__global_data__Rval_110;

#line 1111 "global_data.m"
                                                  {
#line 1111 "global_data.m"
                                                    ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Rval0_109, &ll_backend__global_data__Rval_110);
                                                  }
#line 1112 "global_data.m"
                                                  {
#line 1112 "global_data.m"
                                                    MR_Word base;
#line 1112 "global_data.m"
                                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1112 "global_data.m"
                                                    *ll_backend__global_data__Instr_6 = base;
#line 1112 "global_data.m"
                                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 1112 "global_data.m"
                                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Rval_110));
#line 1112 "global_data.m"
                                                  }
#line 1110 "global_data.m"
                                                }
#line 1046 "global_data.m"
                                              else
#line 1046 "global_data.m"
                                                if (((((MR_tag((MR_Word) ll_backend__global_data__Instr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 1071 "global_data.m"
                                                  {
#line 1071 "global_data.m"
                                                    MR_Word ll_backend__global_data__Lval_103;
#line 1071 "global_data.m"
                                                    MR_Word ll_backend__global_data__Lval0_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));

#line 1072 "global_data.m"
                                                    {
#line 1072 "global_data.m"
                                                      ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Lval0_104, &ll_backend__global_data__Lval_103);
                                                    }
#line 1073 "global_data.m"
                                                    {
#line 1073 "global_data.m"
                                                      MR_Word base;
#line 1073 "global_data.m"
                                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1073 "global_data.m"
                                                      *ll_backend__global_data__Instr_6 = base;
#line 1073 "global_data.m"
                                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 1073 "global_data.m"
                                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Lval_103));
#line 1073 "global_data.m"
                                                    }
#line 1071 "global_data.m"
                                                  }
#line 1046 "global_data.m"
                                                else
#line 1046 "global_data.m"
                                                  if (((((MR_tag((MR_Word) ll_backend__global_data__Instr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 1067 "global_data.m"
                                                    {
#line 1067 "global_data.m"
                                                      MR_Word ll_backend__global_data__Lval0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
#line 1067 "global_data.m"
                                                      MR_Word ll_backend__global_data__Lval_102;

#line 1068 "global_data.m"
                                                      {
#line 1068 "global_data.m"
                                                        ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Lval0_28, &ll_backend__global_data__Lval_102);
                                                      }
#line 1069 "global_data.m"
                                                      {
#line 1069 "global_data.m"
                                                        MR_Word base;
#line 1069 "global_data.m"
                                                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1069 "global_data.m"
                                                        *ll_backend__global_data__Instr_6 = base;
#line 1069 "global_data.m"
                                                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 1069 "global_data.m"
                                                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Lval_102));
#line 1069 "global_data.m"
                                                      }
#line 1067 "global_data.m"
                                                    }
#line 1046 "global_data.m"
                                                  else
#line 1046 "global_data.m"
                                                    if (((((MR_tag((MR_Word) ll_backend__global_data__Instr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 0)))) == (MR_Integer) 20))))
#line 1136 "global_data.m"
                                                      {
#line 1136 "global_data.m"
                                                        MR_Word ll_backend__global_data__Lval_116;
#line 1136 "global_data.m"
                                                        MR_Word ll_backend__global_data__Lval0_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));

#line 1137 "global_data.m"
                                                        {
#line 1137 "global_data.m"
                                                          ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Lval0_117, &ll_backend__global_data__Lval_116);
                                                        }
#line 1138 "global_data.m"
                                                        {
#line 1138 "global_data.m"
                                                          MR_Word base;
#line 1138 "global_data.m"
                                                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1138 "global_data.m"
                                                          *ll_backend__global_data__Instr_6 = base;
#line 1138 "global_data.m"
                                                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 1138 "global_data.m"
                                                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Lval_116));
#line 1138 "global_data.m"
                                                        }
#line 1136 "global_data.m"
                                                      }
#line 1046 "global_data.m"
                                                    else
#line 1046 "global_data.m"
                                                      if (((((MR_tag((MR_Word) ll_backend__global_data__Instr0_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 0)))) == (MR_Integer) 19))))
#line 1134 "global_data.m"
                                                        *ll_backend__global_data__Instr_6 = ll_backend__global_data__Instr0_5;
#line 1046 "global_data.m"
                                                      else
#line 1195 "global_data.m"
                                                        *ll_backend__global_data__Instr_6 = ll_backend__global_data__Instr0_5;
#line 1040 "global_data.m"
  }
#line 1038 "global_data.m"
}

#line 1030 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_instruction_3_p_0(
#line 1030 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 1030 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_Instr_0_9,
#line 1030 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Instr_10)
#line 1030 "global_data.m"
{
#line 1033 "global_data.m"
  {
#line 1033 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 1033 "global_data.m"
    MR_Word ll_backend__global_data__Uinstr0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Instr_0_9, (MR_Integer) 0)));
#line 1033 "global_data.m"
    MR_String ll_backend__global_data__Comment_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Instr_0_9, (MR_Integer) 1)));
#line 1033 "global_data.m"
    MR_Word ll_backend__global_data__Uinstr_8;

#line 1035 "global_data.m"
    {
#line 1035 "global_data.m"
      ll_backend__global_data__remap_instr_3_p_0(ll_backend__global_data__Remap_4, ll_backend__global_data__Uinstr0_6, &ll_backend__global_data__Uinstr_8);
    }
#line 1036 "global_data.m"
    {
#line 1036 "global_data.m"
      MR_Word base;
#line 1036 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1036 "global_data.m"
      *ll_backend__global_data__STATE_VARIABLE_Instr_10 = base;
#line 1036 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__Uinstr_8));
#line 1036 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__Comment_7));
#line 1036 "global_data.m"
    }
#line 1033 "global_data.m"
  }
#line 1030 "global_data.m"
}

#line 1009 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_arg_group_value_3_p_0_1(
#line 1009 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 1009 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 1009 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2)
#line 1009 "global_data.m"
{
#line 1009 "global_data.m"
  {
#line 1009 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 1009 "global_data.m"
    MR_Word ll_backend__global_data__conv0_Rval_6;

#line 1009 "global_data.m"
    {
#line 1009 "global_data.m"
      ll_backend__global_data__remap_rval_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv0_Rval_6);
    }
#line 1009 "global_data.m"
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv0_Rval_6));
#line 1009 "global_data.m"
  }
#line 1009 "global_data.m"
}

#line 1003 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_arg_group_value_3_p_0(
#line 1003 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 1003 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_GroupedArgs_0_10,
#line 1003 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_GroupedArgs_11)
#line 1003 "global_data.m"
{
#line 1008 "global_data.m"
  {
#line 1008 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;

#line 1008 "global_data.m"
    if (((MR_tag((MR_Word) ll_backend__global_data__STATE_VARIABLE_GroupedArgs_0_10)) == (MR_mktag((MR_Integer) 0))))
#line 1008 "global_data.m"
      {
#line 1008 "global_data.m"
        MR_Word ll_backend__global_data__TypeCtorInfo_20_20;
#line 1008 "global_data.m"
        MR_Word ll_backend__global_data__Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GroupedArgs_0_10, (MR_Integer) 0)));
#line 1008 "global_data.m"
        MR_Integer ll_backend__global_data__Fields_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GroupedArgs_0_10, (MR_Integer) 1)));
#line 1008 "global_data.m"
        MR_Word ll_backend__global_data__Rvals0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GroupedArgs_0_10, (MR_Integer) 2)));
#line 1008 "global_data.m"
        MR_Word ll_backend__global_data__Rvals_9;
#line 1008 "global_data.m"
        MR_Word ll_backend__global_data__V_13_13;

#line 1009 "global_data.m"
        {
#line 1009 "global_data.m"
          ll_backend__global_data__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1009 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__V_13_13, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[8]));
#line 1009 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__V_13_13, 1) = ((MR_Box) (ll_backend__global_data__remap_arg_group_value_3_p_0_1));
#line 1009 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1009 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__V_13_13, 3) = ((MR_Box) (ll_backend__global_data__Remap_4));
#line 1009 "global_data.m"
        }
#line 8249 "ll_backend.global_data.c"
        ll_backend__global_data__TypeCtorInfo_20_20 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
#line 1009 "global_data.m"
        {
#line 1009 "global_data.m"
          mercury__list__map_3_p_0(ll_backend__global_data__TypeCtorInfo_20_20, ll_backend__global_data__TypeCtorInfo_20_20, ll_backend__global_data__V_13_13, ll_backend__global_data__Rvals0_8, &ll_backend__global_data__Rvals_9);
        }
#line 1010 "global_data.m"
        {
#line 1010 "global_data.m"
          MR_Word base;
#line 1010 "global_data.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1010 "global_data.m"
          *ll_backend__global_data__STATE_VARIABLE_GroupedArgs_11 = base;
#line 1010 "global_data.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__Type_6));
#line 1010 "global_data.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__Fields_7));
#line 1010 "global_data.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__Rvals_9));
#line 1010 "global_data.m"
        }
#line 1008 "global_data.m"
      }
#line 1008 "global_data.m"
    else
#line 1012 "global_data.m"
      {
#line 1012 "global_data.m"
        MR_Word ll_backend__global_data__Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__STATE_VARIABLE_GroupedArgs_0_10, (MR_Integer) 0)));
#line 1012 "global_data.m"
        MR_Word ll_backend__global_data__Rvals0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__STATE_VARIABLE_GroupedArgs_0_10, (MR_Integer) 1)));
#line 1012 "global_data.m"
        MR_Word ll_backend__global_data__Rvals_17;

#line 1013 "global_data.m"
        {
#line 1013 "global_data.m"
          ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__Remap_4, ll_backend__global_data__Rvals0_16, &ll_backend__global_data__Rvals_17);
        }
#line 1014 "global_data.m"
        {
#line 1014 "global_data.m"
          MR_Word base;
#line 1014 "global_data.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1014 "global_data.m"
          *ll_backend__global_data__STATE_VARIABLE_GroupedArgs_11 = base;
#line 1014 "global_data.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__global_data__Type_15));
#line 1014 "global_data.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__global_data__Rvals_17));
#line 1014 "global_data.m"
        }
#line 1012 "global_data.m"
      }
#line 1008 "global_data.m"
  }
#line 1003 "global_data.m"
}

#line 997 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_plain_value_3_p_0(
#line 997 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 997 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 997 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__3_3)
#line 997 "global_data.m"
{
#line 1000 "global_data.m"
  {
#line 1000 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 1000 "global_data.m"
    MR_Word ll_backend__global_data__Rval0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 1000 "global_data.m"
    MR_Word ll_backend__global_data__Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 1000 "global_data.m"
    MR_Word ll_backend__global_data__Rval_7;

#line 1001 "global_data.m"
    {
#line 1001 "global_data.m"
      ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__Remap_4, ll_backend__global_data__Rval0_5, &ll_backend__global_data__Rval_7);
    }
#line 1000 "global_data.m"
    {
#line 1000 "global_data.m"
      MR_Word base;
#line 1000 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1000 "global_data.m"
      *ll_backend__global_data__HeadVar__3_3 = base;
#line 1000 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__Rval_7));
#line 1000 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__Type_6));
#line 1000 "global_data.m"
    }
#line 1000 "global_data.m"
  }
#line 997 "global_data.m"
}

#line 989 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_common_cell_value_3_p_0_2(
#line 989 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 989 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 989 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2)
#line 989 "global_data.m"
{
#line 989 "global_data.m"
  {
#line 989 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 989 "global_data.m"
    MR_Word ll_backend__global_data__conv1_HeadVar__3_3;

#line 989 "global_data.m"
    {
#line 989 "global_data.m"
      ll_backend__global_data__remap_plain_value_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv1_HeadVar__3_3);
    }
#line 989 "global_data.m"
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv1_HeadVar__3_3));
#line 989 "global_data.m"
  }
#line 989 "global_data.m"
}

#line 993 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_common_cell_value_3_p_0_1(
#line 993 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 993 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 993 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2)
#line 993 "global_data.m"
{
#line 993 "global_data.m"
  {
#line 993 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 993 "global_data.m"
    MR_Word ll_backend__global_data__conv0_STATE_VARIABLE_GroupedArgs_11;

#line 993 "global_data.m"
    {
#line 993 "global_data.m"
      ll_backend__global_data__remap_arg_group_value_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv0_STATE_VARIABLE_GroupedArgs_11);
    }
#line 993 "global_data.m"
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv0_STATE_VARIABLE_GroupedArgs_11));
#line 993 "global_data.m"
  }
#line 993 "global_data.m"
}

#line 983 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_common_cell_value_3_p_0(
#line 983 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 983 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_CommonCellValue_0_10,
#line 983 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_CommonCellValue_11)
#line 983 "global_data.m"
{
#line 988 "global_data.m"
  {
#line 988 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;

#line 988 "global_data.m"
    if (((MR_tag((MR_Word) ll_backend__global_data__STATE_VARIABLE_CommonCellValue_0_10)) == (MR_mktag((MR_Integer) 1))))
#line 992 "global_data.m"
      {
#line 992 "global_data.m"
        MR_Word ll_backend__global_data__TypeCtorInfo_21_21;
#line 992 "global_data.m"
        MR_Word ll_backend__global_data__ArgGroup0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__STATE_VARIABLE_CommonCellValue_0_10, (MR_Integer) 0)));
#line 992 "global_data.m"
        MR_Word ll_backend__global_data__ArgGroup_9;
#line 992 "global_data.m"
        MR_Word ll_backend__global_data__V_12_12;

#line 993 "global_data.m"
        {
#line 993 "global_data.m"
          ll_backend__global_data__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 993 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__V_12_12, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[6]));
#line 993 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__V_12_12, 1) = ((MR_Box) (ll_backend__global_data__remap_common_cell_value_3_p_0_1));
#line 993 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 993 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__V_12_12, 3) = ((MR_Box) (ll_backend__global_data__Remap_4));
#line 993 "global_data.m"
        }
#line 8460 "ll_backend.global_data.c"
        ll_backend__global_data__TypeCtorInfo_21_21 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_arg_group_0;
#line 993 "global_data.m"
        {
#line 993 "global_data.m"
          mercury__list__map_3_p_0(ll_backend__global_data__TypeCtorInfo_21_21, ll_backend__global_data__TypeCtorInfo_21_21, ll_backend__global_data__V_12_12, ll_backend__global_data__ArgGroup0_8, &ll_backend__global_data__ArgGroup_9);
        }
#line 994 "global_data.m"
        {
#line 994 "global_data.m"
          MR_Word base;
#line 994 "global_data.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 994 "global_data.m"
          *ll_backend__global_data__STATE_VARIABLE_CommonCellValue_11 = base;
#line 994 "global_data.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__global_data__ArgGroup_9));
#line 994 "global_data.m"
        }
#line 992 "global_data.m"
      }
#line 988 "global_data.m"
    else
#line 988 "global_data.m"
      {
#line 988 "global_data.m"
        MR_Word ll_backend__global_data__TypeCtorInfo_18_18;
#line 988 "global_data.m"
        MR_Word ll_backend__global_data__RvalsTypes0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CommonCellValue_0_10, (MR_Integer) 0)));
#line 988 "global_data.m"
        MR_Word ll_backend__global_data__RvalsTypes_7;
#line 988 "global_data.m"
        MR_Word ll_backend__global_data__V_14_14;

#line 989 "global_data.m"
        {
#line 989 "global_data.m"
          ll_backend__global_data__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 989 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__V_14_14, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[7]));
#line 989 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__V_14_14, 1) = ((MR_Box) (ll_backend__global_data__remap_common_cell_value_3_p_0_2));
#line 989 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 989 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__V_14_14, 3) = ((MR_Box) (ll_backend__global_data__Remap_4));
#line 989 "global_data.m"
        }
#line 8508 "ll_backend.global_data.c"
        ll_backend__global_data__TypeCtorInfo_18_18 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0;
#line 989 "global_data.m"
        {
#line 989 "global_data.m"
          mercury__list__map_3_p_0(ll_backend__global_data__TypeCtorInfo_18_18, ll_backend__global_data__TypeCtorInfo_18_18, ll_backend__global_data__V_14_14, ll_backend__global_data__RvalsTypes0_6, &ll_backend__global_data__RvalsTypes_7);
        }
#line 990 "global_data.m"
        {
#line 990 "global_data.m"
          MR_Word base;
#line 990 "global_data.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 990 "global_data.m"
          *ll_backend__global_data__STATE_VARIABLE_CommonCellValue_11 = base;
#line 990 "global_data.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__RvalsTypes_7));
#line 990 "global_data.m"
        }
#line 988 "global_data.m"
      }
#line 988 "global_data.m"
  }
#line 983 "global_data.m"
}

#line 980 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_vector_contents_3_p_0_1(
#line 980 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 980 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 980 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2)
#line 980 "global_data.m"
{
#line 980 "global_data.m"
  {
#line 980 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 980 "global_data.m"
    MR_Word ll_backend__global_data__conv0_STATE_VARIABLE_CommonCellValue_11;

#line 980 "global_data.m"
    {
#line 980 "global_data.m"
      ll_backend__global_data__remap_common_cell_value_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv0_STATE_VARIABLE_CommonCellValue_11);
    }
#line 980 "global_data.m"
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv0_STATE_VARIABLE_CommonCellValue_11));
#line 980 "global_data.m"
  }
#line 980 "global_data.m"
}

#line 975 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_vector_contents_3_p_0(
#line 975 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 975 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_Contents_0_8,
#line 975 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Contents_9)
#line 975 "global_data.m"
{
#line 978 "global_data.m"
  {
#line 978 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 978 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_14_14;
#line 978 "global_data.m"
    MR_Word ll_backend__global_data__Values0_6 = (MR_Word) ll_backend__global_data__STATE_VARIABLE_Contents_0_8;
#line 978 "global_data.m"
    MR_Word ll_backend__global_data__Values_7;
#line 978 "global_data.m"
    MR_Word ll_backend__global_data__V_10_10;

#line 980 "global_data.m"
    {
#line 980 "global_data.m"
      ll_backend__global_data__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 980 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_10_10, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[4]));
#line 980 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_10_10, 1) = ((MR_Box) (ll_backend__global_data__remap_vector_contents_3_p_0_1));
#line 980 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 980 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_10_10, 3) = ((MR_Box) (ll_backend__global_data__Remap_4));
#line 980 "global_data.m"
    }
#line 8602 "ll_backend.global_data.c"
    ll_backend__global_data__TypeCtorInfo_14_14 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0;
#line 980 "global_data.m"
    {
#line 980 "global_data.m"
      mercury__list__map_3_p_0(ll_backend__global_data__TypeCtorInfo_14_14, ll_backend__global_data__TypeCtorInfo_14_14, ll_backend__global_data__V_10_10, ll_backend__global_data__Values0_6, &ll_backend__global_data__Values_7);
    }
#line 981 "global_data.m"
    *ll_backend__global_data__STATE_VARIABLE_Contents_9 = (MR_Word) ll_backend__global_data__Values_7;
#line 978 "global_data.m"
  }
#line 975 "global_data.m"
}

#line 972 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_vector_cell_group_3_p_0_1(
#line 972 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 972 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 972 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2)
#line 972 "global_data.m"
{
#line 972 "global_data.m"
  {
#line 972 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 972 "global_data.m"
    MR_Word ll_backend__global_data__conv0_STATE_VARIABLE_Contents_9;

#line 972 "global_data.m"
    {
#line 972 "global_data.m"
      ll_backend__global_data__remap_vector_contents_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv0_STATE_VARIABLE_Contents_9);
    }
#line 972 "global_data.m"
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv0_STATE_VARIABLE_Contents_9));
#line 972 "global_data.m"
  }
#line 972 "global_data.m"
}

#line 967 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_vector_cell_group_3_p_0(
#line 967 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 967 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_VectorCellGroup_0_9,
#line 967 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_VectorCellGroup_10)
#line 967 "global_data.m"
{
#line 970 "global_data.m"
  {
#line 970 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 970 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_15_15;
#line 970 "global_data.m"
    MR_Word ll_backend__global_data__Counter_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_VectorCellGroup_0_9, (MR_Integer) 0)));
#line 970 "global_data.m"
    MR_Word ll_backend__global_data__Map0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_VectorCellGroup_0_9, (MR_Integer) 1)));
#line 970 "global_data.m"
    MR_Word ll_backend__global_data__Map_8;
#line 970 "global_data.m"
    MR_Word ll_backend__global_data__V_11_11;

#line 972 "global_data.m"
    {
#line 972 "global_data.m"
      ll_backend__global_data__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 972 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_11_11, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[5]));
#line 972 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_11_11, 1) = ((MR_Box) (ll_backend__global_data__remap_vector_cell_group_3_p_0_1));
#line 972 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 972 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_11_11, 3) = ((MR_Box) (ll_backend__global_data__Remap_4));
#line 972 "global_data.m"
    }
#line 8686 "ll_backend.global_data.c"
    ll_backend__global_data__TypeCtorInfo_15_15 = (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_contents_0;
#line 972 "global_data.m"
    {
#line 972 "global_data.m"
      mercury__map__map_values_only_3_p_0(ll_backend__global_data__TypeCtorInfo_15_15, ll_backend__global_data__TypeCtorInfo_15_15, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__global_data__V_11_11, ll_backend__global_data__Map0_7, &ll_backend__global_data__Map_8);
    }
#line 973 "global_data.m"
    {
#line 973 "global_data.m"
      MR_Word base;
#line 973 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 973 "global_data.m"
      *ll_backend__global_data__STATE_VARIABLE_VectorCellGroup_10 = base;
#line 973 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__Counter_6));
#line 973 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__Map_8));
#line 973 "global_data.m"
    }
#line 970 "global_data.m"
  }
#line 967 "global_data.m"
}

#line 964 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_scalar_cell_group_3_p_0_1(
#line 964 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 964 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 964 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2)
#line 964 "global_data.m"
{
#line 964 "global_data.m"
  {
#line 964 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 964 "global_data.m"
    MR_Word ll_backend__global_data__conv0_STATE_VARIABLE_CommonCellValue_11;

#line 964 "global_data.m"
    {
#line 964 "global_data.m"
      ll_backend__global_data__remap_common_cell_value_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv0_STATE_VARIABLE_CommonCellValue_11);
    }
#line 964 "global_data.m"
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv0_STATE_VARIABLE_CommonCellValue_11));
#line 964 "global_data.m"
  }
#line 964 "global_data.m"
}

#line 959 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_scalar_cell_group_3_p_0(
#line 959 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 959 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_ScalarCellGroup_0_8,
#line 959 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_ScalarCellGroup_9)
#line 959 "global_data.m"
{
#line 962 "global_data.m"
  {
#line 962 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 962 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_19_19;
#line 962 "global_data.m"
    MR_Word ll_backend__global_data__Array0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_ScalarCellGroup_0_8, (MR_Integer) 2)));
#line 962 "global_data.m"
    MR_Word ll_backend__global_data__Array_7;
#line 962 "global_data.m"
    MR_Word ll_backend__global_data__V_10_10;
#line 963 "global_data.m"
    MR_Word ll_backend__global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_ScalarCellGroup_0_8, (MR_Integer) 0)));
#line 963 "global_data.m"
    MR_Word ll_backend__global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_ScalarCellGroup_0_8, (MR_Integer) 1)));
#line 965 "global_data.m"
    MR_Word ll_backend__global_data__V_14_14;
#line 965 "global_data.m"
    MR_Word ll_backend__global_data__V_15_15;
#line 965 "global_data.m"
    MR_Word ll_backend__global_data__V_16_16;

#line 964 "global_data.m"
    {
#line 964 "global_data.m"
      ll_backend__global_data__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 964 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_10_10, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[4]));
#line 964 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_10_10, 1) = ((MR_Box) (ll_backend__global_data__remap_scalar_cell_group_3_p_0_1));
#line 964 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 964 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_10_10, 3) = ((MR_Box) (ll_backend__global_data__Remap_4));
#line 964 "global_data.m"
    }
#line 8790 "ll_backend.global_data.c"
    ll_backend__global_data__TypeCtorInfo_19_19 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0;
#line 964 "global_data.m"
    {
#line 964 "global_data.m"
      mercury__list__map_3_p_0(ll_backend__global_data__TypeCtorInfo_19_19, ll_backend__global_data__TypeCtorInfo_19_19, ll_backend__global_data__V_10_10, ll_backend__global_data__Array0_6, &ll_backend__global_data__Array_7);
    }
#line 965 "global_data.m"
    ll_backend__global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_ScalarCellGroup_0_8, (MR_Integer) 0)));
#line 965 "global_data.m"
    ll_backend__global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_ScalarCellGroup_0_8, (MR_Integer) 1)));
#line 965 "global_data.m"
    ll_backend__global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_ScalarCellGroup_0_8, (MR_Integer) 2)));
#line 965 "global_data.m"
    {
#line 965 "global_data.m"
      MR_Word base;
#line 965 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 965 "global_data.m"
      *ll_backend__global_data__STATE_VARIABLE_ScalarCellGroup_9 = base;
#line 965 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__V_14_14));
#line 965 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__V_15_15));
#line 965 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__Array_7));
#line 965 "global_data.m"
    }
#line 962 "global_data.m"
  }
#line 959 "global_data.m"
}

#line 955 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_static_cell_info_3_p_0_2(
#line 955 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 955 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 955 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2)
#line 955 "global_data.m"
{
#line 955 "global_data.m"
  {
#line 955 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 955 "global_data.m"
    MR_Word ll_backend__global_data__conv1_STATE_VARIABLE_VectorCellGroup_10;

#line 955 "global_data.m"
    {
#line 955 "global_data.m"
      ll_backend__global_data__remap_vector_cell_group_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv1_STATE_VARIABLE_VectorCellGroup_10);
    }
#line 955 "global_data.m"
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv1_STATE_VARIABLE_VectorCellGroup_10));
#line 955 "global_data.m"
  }
#line 955 "global_data.m"
}

#line 954 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_static_cell_info_3_p_0_1(
#line 954 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 954 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 954 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2)
#line 954 "global_data.m"
{
#line 954 "global_data.m"
  {
#line 954 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 954 "global_data.m"
    MR_Word ll_backend__global_data__conv0_STATE_VARIABLE_ScalarCellGroup_9;

#line 954 "global_data.m"
    {
#line 954 "global_data.m"
      ll_backend__global_data__remap_scalar_cell_group_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv0_STATE_VARIABLE_ScalarCellGroup_9);
    }
#line 954 "global_data.m"
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv0_STATE_VARIABLE_ScalarCellGroup_9));
#line 954 "global_data.m"
  }
#line 954 "global_data.m"
}

#line 948 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_static_cell_info_3_p_0(
#line 948 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 948 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_SCI_0_10,
#line 948 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_SCI_11)
#line 948 "global_data.m"
{
#line 951 "global_data.m"
  {
#line 951 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 951 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_36_36;
#line 951 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_37_37;
#line 951 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_40_40;
#line 951 "global_data.m"
    MR_Word ll_backend__global_data__ScalarMap0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_SCI_0_10, (MR_Integer) 3)));
#line 951 "global_data.m"
    MR_Word ll_backend__global_data__VectorMap0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_SCI_0_10, (MR_Integer) 4)));
#line 951 "global_data.m"
    MR_Word ll_backend__global_data__ScalarMap_8;
#line 951 "global_data.m"
    MR_Word ll_backend__global_data__VectorMap_9;
#line 951 "global_data.m"
    MR_Word ll_backend__global_data__V_12_12;
#line 951 "global_data.m"
    MR_Word ll_backend__global_data__V_13_13;
#line 951 "global_data.m"
    MR_Word ll_backend__global_data__V_24_24;
#line 951 "global_data.m"
    MR_Word ll_backend__global_data__V_25_25;
#line 951 "global_data.m"
    MR_Word ll_backend__global_data__V_26_26;
#line 952 "global_data.m"
    MR_Word ll_backend__global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_SCI_0_10, (MR_Integer) 0)));
#line 952 "global_data.m"
    MR_Word ll_backend__global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_SCI_0_10, (MR_Integer) 1)));
#line 952 "global_data.m"
    MR_Word ll_backend__global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_SCI_0_10, (MR_Integer) 2)));
#line 956 "global_data.m"
    MR_Word ll_backend__global_data__V_27_27;
#line 956 "global_data.m"
    MR_Word ll_backend__global_data__V_28_28;

#line 954 "global_data.m"
    {
#line 954 "global_data.m"
      ll_backend__global_data__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 954 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_12_12, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[2]));
#line 954 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_12_12, 1) = ((MR_Box) (ll_backend__global_data__remap_static_cell_info_3_p_0_1));
#line 954 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 954 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_12_12, 3) = ((MR_Box) (ll_backend__global_data__Remap_4));
#line 954 "global_data.m"
    }
#line 8948 "ll_backend.global_data.c"
    ll_backend__global_data__TypeCtorInfo_36_36 = (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0;
#line 8950 "ll_backend.global_data.c"
    ll_backend__global_data__TypeCtorInfo_37_37 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;
#line 954 "global_data.m"
    {
#line 954 "global_data.m"
      mercury__map__map_values_only_3_p_0(ll_backend__global_data__TypeCtorInfo_36_36, ll_backend__global_data__TypeCtorInfo_36_36, ll_backend__global_data__TypeCtorInfo_37_37, ll_backend__global_data__V_12_12, ll_backend__global_data__ScalarMap0_6, &ll_backend__global_data__ScalarMap_8);
    }
#line 955 "global_data.m"
    {
#line 955 "global_data.m"
      ll_backend__global_data__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 955 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_13_13, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[3]));
#line 955 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_13_13, 1) = ((MR_Box) (ll_backend__global_data__remap_static_cell_info_3_p_0_2));
#line 955 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 955 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_13_13, 3) = ((MR_Box) (ll_backend__global_data__Remap_4));
#line 955 "global_data.m"
    }
#line 8971 "ll_backend.global_data.c"
    ll_backend__global_data__TypeCtorInfo_40_40 = (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0;
#line 955 "global_data.m"
    {
#line 955 "global_data.m"
      mercury__map__map_values_only_3_p_0(ll_backend__global_data__TypeCtorInfo_40_40, ll_backend__global_data__TypeCtorInfo_40_40, ll_backend__global_data__TypeCtorInfo_37_37, ll_backend__global_data__V_13_13, ll_backend__global_data__VectorMap0_7, &ll_backend__global_data__VectorMap_9);
    }
#line 956 "global_data.m"
    ll_backend__global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_SCI_0_10, (MR_Integer) 0)));
#line 956 "global_data.m"
    ll_backend__global_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_SCI_0_10, (MR_Integer) 1)));
#line 956 "global_data.m"
    ll_backend__global_data__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_SCI_0_10, (MR_Integer) 2)));
#line 956 "global_data.m"
    ll_backend__global_data__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_SCI_0_10, (MR_Integer) 3)));
#line 956 "global_data.m"
    ll_backend__global_data__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_SCI_0_10, (MR_Integer) 4)));
#line 957 "global_data.m"
    {
#line 957 "global_data.m"
      MR_Word base;
#line 957 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 957 "global_data.m"
      *ll_backend__global_data__STATE_VARIABLE_SCI_11 = base;
#line 957 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__V_24_24));
#line 957 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__V_25_25));
#line 957 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__V_26_26));
#line 957 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__ScalarMap_8));
#line 957 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__VectorMap_9));
#line 957 "global_data.m"
    }
#line 951 "global_data.m"
  }
#line 948 "global_data.m"
}

#line 929 "global_data.m"
static void MR_CALL 
ll_backend__global_data__merge_vector_cell_group_maps_2_5_p_0(
#line 929 "global_data.m"
  MR_Word ll_backend__global_data__TypeNumRemap_6,
#line 929 "global_data.m"
  MR_Word ll_backend__global_data__OldTypeNum_7,
#line 929 "global_data.m"
  MR_Word ll_backend__global_data__VectorCellGroup_8,
#line 929 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_VectorCellGroupMap_0_11,
#line 929 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_VectorCellGroupMap_12)
#line 929 "global_data.m"
{
#line 934 "global_data.m"
  {
#line 934 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 934 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_14_14 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;
#line 934 "global_data.m"
    MR_Word ll_backend__global_data__NewTypeNum_10;
#line 935 "global_data.m"
    MR_Box ll_backend__global_data__conv0_NewTypeNum_10;

#line 935 "global_data.m"
    {
#line 935 "global_data.m"
      mercury__map__lookup_3_p_0(ll_backend__global_data__TypeCtorInfo_14_14, ll_backend__global_data__TypeCtorInfo_14_14, ll_backend__global_data__TypeNumRemap_6, ((MR_Box) (ll_backend__global_data__OldTypeNum_7)), &ll_backend__global_data__conv0_NewTypeNum_10);
    }
#line 935 "global_data.m"
    ll_backend__global_data__NewTypeNum_10 = ((MR_Word) ll_backend__global_data__conv0_NewTypeNum_10);
#line 936 "global_data.m"
    {
#line 936 "global_data.m"
      mercury__map__det_insert_4_p_0(ll_backend__global_data__TypeCtorInfo_14_14, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0, ((MR_Box) (ll_backend__global_data__NewTypeNum_10)), ((MR_Box) (ll_backend__global_data__VectorCellGroup_8)), ll_backend__global_data__STATE_VARIABLE_VectorCellGroupMap_0_11, ll_backend__global_data__STATE_VARIABLE_VectorCellGroupMap_12);
#line 936 "global_data.m"
      return;
    }
#line 934 "global_data.m"
  }
#line 929 "global_data.m"
}

#line 885 "global_data.m"
static void MR_CALL 
ll_backend__global_data__merge_scalar_cell_groups_2_9_p_0(
#line 885 "global_data.m"
  MR_Word ll_backend__global_data__TypeNum_10,
#line 885 "global_data.m"
  MR_Word ll_backend__global_data__ArrayB_11,
#line 885 "global_data.m"
  MR_Word ll_backend__global_data__ArrayAB_12,
#line 885 "global_data.m"
  MR_Word ll_backend__global_data__Rvals_13,
#line 885 "global_data.m"
  MR_Word ll_backend__global_data__BDataId_14,
#line 885 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_GroupMembers_0_30,
#line 885 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_GroupMembers_31,
#line 885 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_GroupRemap_0_32,
#line 885 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_GroupRemap_33)
#line 885 "global_data.m"
{
#line 896 "global_data.m"
  {
#line 896 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 896 "global_data.m"
    MR_Word ll_backend__global_data__DataId_17;
#line 893 "global_data.m"
    MR_Box ll_backend__global_data__conv0_DataId_17;

#line 893 "global_data.m"
    {
#line 893 "global_data.m"
      ll_backend__global_data__succeeded = mercury__bimap__search_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0, ll_backend__global_data__STATE_VARIABLE_GroupMembers_0_30, ((MR_Box) (ll_backend__global_data__Rvals_13)), &ll_backend__global_data__conv0_DataId_17);
    }
#line 893 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 893 "global_data.m"
      {
#line 893 "global_data.m"
        ll_backend__global_data__DataId_17 = ((MR_Word) ll_backend__global_data__conv0_DataId_17);
#line 893 "global_data.m"
        ll_backend__global_data__succeeded = MR_TRUE;
#line 893 "global_data.m"
      }
#line 896 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 895 "global_data.m"
      {
#line 895 "global_data.m"
        MR_Word ll_backend__global_data__TypeCtorInfo_44_44 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0;

#line 895 "global_data.m"
        {
#line 895 "global_data.m"
          mercury__map__det_insert_4_p_0(ll_backend__global_data__TypeCtorInfo_44_44, ll_backend__global_data__TypeCtorInfo_44_44, ((MR_Box) (ll_backend__global_data__BDataId_14)), ((MR_Box) (ll_backend__global_data__DataId_17)), ll_backend__global_data__STATE_VARIABLE_GroupRemap_0_32, ll_backend__global_data__STATE_VARIABLE_GroupRemap_33);
        }
#line 895 "global_data.m"
        *ll_backend__global_data__STATE_VARIABLE_GroupMembers_31 = ll_backend__global_data__STATE_VARIABLE_GroupMembers_0_30;
#line 895 "global_data.m"
      }
#line 896 "global_data.m"
    else
#line 908 "global_data.m"
      if (((MR_tag((MR_Word) ll_backend__global_data__BDataId_14)) == (MR_mktag((MR_Integer) 2))))
#line 899 "global_data.m"
        {
#line 899 "global_data.m"
          MR_Word ll_backend__global_data__TypeCtorInfo_45_45 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0;
#line 899 "global_data.m"
          MR_Word ll_backend__global_data__TypeCtorInfo_47_47;
#line 899 "global_data.m"
          MR_Integer ll_backend__global_data__BCellNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__global_data__BDataId_14, (MR_Integer) 1)));
#line 899 "global_data.m"
          MR_Word ll_backend__global_data__CommonCellValue_20;
#line 899 "global_data.m"
          MR_Integer ll_backend__global_data__CellNum_21;
#line 899 "global_data.m"
          MR_Word ll_backend__global_data__DataId_40;
#line 899 "global_data.m"
          MR_Integer ll_backend__global_data__Pos_50;
#line 899 "global_data.m"
          MR_Word ll_backend__global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__global_data__BDataId_14, (MR_Integer) 0)));
#line 902 "global_data.m"
          MR_Box ll_backend__global_data__conv1_CommonCellValue_20;

#line 902 "global_data.m"
          {
#line 902 "global_data.m"
            ll_backend__global_data__conv1_CommonCellValue_20 = mercury__list__det_index0_2_f_0(ll_backend__global_data__TypeCtorInfo_45_45, ll_backend__global_data__ArrayB_11, ll_backend__global_data__BCellNum_19);
          }
#line 902 "global_data.m"
          ll_backend__global_data__CommonCellValue_20 = ((MR_Word) ll_backend__global_data__conv1_CommonCellValue_20);
#line 941 "global_data.m"
          {
#line 941 "global_data.m"
            mercury__list__nth_member_lookup_3_p_0(ll_backend__global_data__TypeCtorInfo_45_45, ll_backend__global_data__ArrayAB_12, ((MR_Box) (ll_backend__global_data__CommonCellValue_20)), &ll_backend__global_data__Pos_50);
          }
#line 940 "global_data.m"
          ll_backend__global_data__CellNum_21 = (ll_backend__global_data__Pos_50 - (MR_Integer) 1);
#line 905 "global_data.m"
          {
#line 905 "global_data.m"
            ll_backend__global_data__DataId_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 905 "global_data.m"
            MR_hl_field(MR_mktag(2), ll_backend__global_data__DataId_40, 0) = ((MR_Box) (ll_backend__global_data__TypeNum_10));
#line 905 "global_data.m"
            MR_hl_field(MR_mktag(2), ll_backend__global_data__DataId_40, 1) = ((MR_Box) (ll_backend__global_data__CellNum_21));
#line 905 "global_data.m"
          }
#line 9170 "ll_backend.global_data.c"
          ll_backend__global_data__TypeCtorInfo_47_47 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0;
#line 906 "global_data.m"
          {
#line 906 "global_data.m"
            mercury__bimap__det_insert_4_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[0], ll_backend__global_data__TypeCtorInfo_47_47, ((MR_Box) (ll_backend__global_data__Rvals_13)), ((MR_Box) (ll_backend__global_data__DataId_40)), ll_backend__global_data__STATE_VARIABLE_GroupMembers_0_30, ll_backend__global_data__STATE_VARIABLE_GroupMembers_31);
          }
#line 907 "global_data.m"
          {
#line 907 "global_data.m"
            mercury__map__det_insert_4_p_0(ll_backend__global_data__TypeCtorInfo_47_47, ll_backend__global_data__TypeCtorInfo_47_47, ((MR_Box) (ll_backend__global_data__BDataId_14)), ((MR_Box) (ll_backend__global_data__DataId_40)), ll_backend__global_data__STATE_VARIABLE_GroupRemap_0_32, ll_backend__global_data__STATE_VARIABLE_GroupRemap_33);
#line 907 "global_data.m"
            return;
          }
#line 899 "global_data.m"
        }
#line 908 "global_data.m"
      else
#line 914 "global_data.m"
        {
#line 915 "global_data.m"
          {
#line 915 "global_data.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.global_data", (MR_String) "predicate \140ll_backend.global_data.merge_scalar_cell_groups_2\'/9", (MR_String) "unexpected BDataId");
#line 915 "global_data.m"
            return;
          }
#line 914 "global_data.m"
        }
#line 896 "global_data.m"
  }
#line 885 "global_data.m"
}

#line 881 "global_data.m"
static void MR_CALL 
ll_backend__global_data__merge_scalar_cell_group_maps_2_7_p_0_1(
#line 881 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 881 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 881 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 881 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_3,
#line 881 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_4,
#line 881 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_5,
#line 881 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_6)
#line 881 "global_data.m"
{
#line 881 "global_data.m"
  {
#line 881 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 881 "global_data.m"
    MR_Word ll_backend__global_data__conv3_STATE_VARIABLE_GroupMembers_31;
#line 881 "global_data.m"
    MR_Word ll_backend__global_data__conv2_STATE_VARIABLE_GroupRemap_33;

#line 881 "global_data.m"
    {
#line 881 "global_data.m"
      ll_backend__global_data__merge_scalar_cell_groups_2_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 5))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3), &ll_backend__global_data__conv3_STATE_VARIABLE_GroupMembers_31, ((MR_Word) ll_backend__global_data__wrapper_arg_5), &ll_backend__global_data__conv2_STATE_VARIABLE_GroupRemap_33);
    }
#line 881 "global_data.m"
    *ll_backend__global_data__wrapper_arg_4 = ((MR_Box) (ll_backend__global_data__conv3_STATE_VARIABLE_GroupMembers_31));
#line 881 "global_data.m"
    *ll_backend__global_data__wrapper_arg_6 = ((MR_Box) (ll_backend__global_data__conv2_STATE_VARIABLE_GroupRemap_33));
#line 881 "global_data.m"
  }
#line 881 "global_data.m"
}

#line 844 "global_data.m"
static void MR_CALL 
ll_backend__global_data__merge_scalar_cell_group_maps_2_7_p_0(
#line 844 "global_data.m"
  MR_Word ll_backend__global_data__TypeNumRemap_8,
#line 844 "global_data.m"
  MR_Word ll_backend__global_data__BTypeNum_9,
#line 844 "global_data.m"
  MR_Word ll_backend__global_data__BScalarCellGroup_10,
#line 844 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_ScalarCellGroupMap_0_18,
#line 844 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_ScalarCellGroupMap_19,
#line 844 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_Remap_0_20,
#line 844 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Remap_21)
#line 844 "global_data.m"
{
#line 852 "global_data.m"
  {
#line 852 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 852 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_28_28 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;
#line 852 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_27_55;
#line 852 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_34_62;
#line 852 "global_data.m"
    MR_Word ll_backend__global_data__TypeNum_13;
#line 852 "global_data.m"
    MR_Word ll_backend__global_data__ScalarCellGroup0_15;
#line 852 "global_data.m"
    MR_Word ll_backend__global_data__ScalarCellGroup_16;
#line 852 "global_data.m"
    MR_Word ll_backend__global_data__ScalarCellGroupRemap_17;
#line 852 "global_data.m"
    MR_Word ll_backend__global_data__GroupMembersA_40;
#line 852 "global_data.m"
    MR_Word ll_backend__global_data__RevArrayA_41;
#line 852 "global_data.m"
    MR_Word ll_backend__global_data__GroupMembersB_43;
#line 852 "global_data.m"
    MR_Word ll_backend__global_data__RevArrayB_44;
#line 852 "global_data.m"
    MR_Word ll_backend__global_data__CounterAB_45;
#line 852 "global_data.m"
    MR_Word ll_backend__global_data__GroupMembersAB_46;
#line 852 "global_data.m"
    MR_Word ll_backend__global_data__RevArrayAB_47;
#line 852 "global_data.m"
    MR_Word ll_backend__global_data__ArrayA_48;
#line 852 "global_data.m"
    MR_Word ll_backend__global_data__ArrayB_49;
#line 852 "global_data.m"
    MR_Word ll_backend__global_data__ArrayAB_50;
#line 852 "global_data.m"
    MR_Integer ll_backend__global_data__V_51_51;
#line 852 "global_data.m"
    MR_Word ll_backend__global_data__V_52_52;
#line 852 "global_data.m"
    MR_Word ll_backend__global_data__V_53_53;
#line 852 "global_data.m"
    MR_Word ll_backend__global_data__V_54_54;
#line 853 "global_data.m"
    MR_Box ll_backend__global_data__conv0_TypeNum_13;
#line 856 "global_data.m"
    MR_Word ll_backend__global_data__ScalarCellGroupPrime_14;
#line 854 "global_data.m"
    MR_Box ll_backend__global_data__conv1_ScalarCellGroupPrime_14;
#line 870 "global_data.m"
    MR_Word ll_backend__global_data___CounterA_39;
#line 871 "global_data.m"
    MR_Word ll_backend__global_data___CounterB_42;
#line 881 "global_data.m"
    MR_Box ll_backend__global_data__conv5_GroupMembersAB_46;
#line 881 "global_data.m"
    MR_Box ll_backend__global_data__conv4_ScalarCellGroupRemap_17;

#line 853 "global_data.m"
    {
#line 853 "global_data.m"
      mercury__map__lookup_3_p_0(ll_backend__global_data__TypeCtorInfo_28_28, ll_backend__global_data__TypeCtorInfo_28_28, ll_backend__global_data__TypeNumRemap_8, ((MR_Box) (ll_backend__global_data__BTypeNum_9)), &ll_backend__global_data__conv0_TypeNum_13);
    }
#line 853 "global_data.m"
    ll_backend__global_data__TypeNum_13 = ((MR_Word) ll_backend__global_data__conv0_TypeNum_13);
#line 854 "global_data.m"
    {
#line 854 "global_data.m"
      ll_backend__global_data__succeeded = mercury__map__search_3_p_0(ll_backend__global_data__TypeCtorInfo_28_28, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0, ll_backend__global_data__STATE_VARIABLE_ScalarCellGroupMap_0_18, ((MR_Box) (ll_backend__global_data__TypeNum_13)), &ll_backend__global_data__conv1_ScalarCellGroupPrime_14);
    }
#line 854 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 854 "global_data.m"
      {
#line 854 "global_data.m"
        ll_backend__global_data__ScalarCellGroupPrime_14 = ((MR_Word) ll_backend__global_data__conv1_ScalarCellGroupPrime_14);
#line 854 "global_data.m"
        ll_backend__global_data__succeeded = MR_TRUE;
#line 854 "global_data.m"
      }
#line 856 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 855 "global_data.m"
      ll_backend__global_data__ScalarCellGroup0_15 = ll_backend__global_data__ScalarCellGroupPrime_14;
#line 856 "global_data.m"
    else
#line 858 "global_data.m"
      {
#line 858 "global_data.m"
        MR_Word ll_backend__global_data__V_22_22;
#line 858 "global_data.m"
        MR_Word ll_backend__global_data__V_24_24;

#line 858 "global_data.m"
        {
#line 858 "global_data.m"
          ll_backend__global_data__V_22_22 = mercury__counter__init_1_f_0((MR_Integer) 0);
        }
#line 858 "global_data.m"
        {
#line 858 "global_data.m"
          ll_backend__global_data__V_24_24 = mercury__bimap__init_0_f_0((MR_Word) &ll_backend__global_data_scalar_common_2[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0);
        }
#line 858 "global_data.m"
        {
#line 858 "global_data.m"
          ll_backend__global_data__ScalarCellGroup0_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 858 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__ScalarCellGroup0_15, 0) = ((MR_Box) (ll_backend__global_data__V_22_22));
#line 858 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__ScalarCellGroup0_15, 1) = ((MR_Box) (ll_backend__global_data__V_24_24));
#line 858 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__ScalarCellGroup0_15, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 858 "global_data.m"
        }
#line 858 "global_data.m"
      }
#line 870 "global_data.m"
    ll_backend__global_data___CounterA_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__ScalarCellGroup0_15, (MR_Integer) 0)));
#line 870 "global_data.m"
    ll_backend__global_data__GroupMembersA_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__ScalarCellGroup0_15, (MR_Integer) 1)));
#line 870 "global_data.m"
    ll_backend__global_data__RevArrayA_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__ScalarCellGroup0_15, (MR_Integer) 2)));
#line 871 "global_data.m"
    ll_backend__global_data___CounterB_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__BScalarCellGroup_10, (MR_Integer) 0)));
#line 871 "global_data.m"
    ll_backend__global_data__GroupMembersB_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__BScalarCellGroup_10, (MR_Integer) 1)));
#line 871 "global_data.m"
    ll_backend__global_data__RevArrayB_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__BScalarCellGroup_10, (MR_Integer) 2)));
#line 9397 "ll_backend.global_data.c"
    ll_backend__global_data__TypeCtorInfo_27_55 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0;
#line 876 "global_data.m"
    {
#line 876 "global_data.m"
      ll_backend__global_data__ArrayA_48 = mercury__list__reverse_1_f_0(ll_backend__global_data__TypeCtorInfo_27_55, ll_backend__global_data__RevArrayA_41);
    }
#line 877 "global_data.m"
    {
#line 877 "global_data.m"
      ll_backend__global_data__ArrayB_49 = mercury__list__reverse_1_f_0(ll_backend__global_data__TypeCtorInfo_27_55, ll_backend__global_data__RevArrayB_44);
    }
#line 878 "global_data.m"
    {
#line 878 "global_data.m"
      ll_backend__global_data__V_52_52 = mercury__list__delete_elems_2_f_0(ll_backend__global_data__TypeCtorInfo_27_55, ll_backend__global_data__ArrayB_49, ll_backend__global_data__ArrayA_48);
    }
#line 878 "global_data.m"
    {
#line 878 "global_data.m"
      ll_backend__global_data__ArrayAB_50 = mercury__list__f_43_43_2_f_0(ll_backend__global_data__TypeCtorInfo_27_55, ll_backend__global_data__ArrayA_48, ll_backend__global_data__V_52_52);
    }
#line 879 "global_data.m"
    {
#line 879 "global_data.m"
      ll_backend__global_data__RevArrayAB_47 = mercury__list__reverse_1_f_0(ll_backend__global_data__TypeCtorInfo_27_55, ll_backend__global_data__ArrayAB_50);
    }
#line 874 "global_data.m"
    {
#line 874 "global_data.m"
      ll_backend__global_data__V_51_51 = mercury__list__length_1_f_0(ll_backend__global_data__TypeCtorInfo_27_55, ll_backend__global_data__RevArrayAB_47);
    }
#line 874 "global_data.m"
    {
#line 874 "global_data.m"
      ll_backend__global_data__CounterAB_45 = mercury__counter__init_1_f_0(ll_backend__global_data__V_51_51);
    }
#line 881 "global_data.m"
    {
#line 881 "global_data.m"
      ll_backend__global_data__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 881 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_53_53, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_12[0]));
#line 881 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_53_53, 1) = ((MR_Box) (ll_backend__global_data__merge_scalar_cell_group_maps_2_7_p_0_1));
#line 881 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 881 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_53_53, 3) = ((MR_Box) (ll_backend__global_data__TypeNum_13));
#line 881 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_53_53, 4) = ((MR_Box) (ll_backend__global_data__ArrayB_49));
#line 881 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_53_53, 5) = ((MR_Box) (ll_backend__global_data__ArrayAB_50));
#line 881 "global_data.m"
    }
#line 9452 "ll_backend.global_data.c"
    ll_backend__global_data__TypeCtorInfo_34_62 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0;
#line 881 "global_data.m"
    {
#line 881 "global_data.m"
      ll_backend__global_data__V_54_54 = mercury__map__init_0_f_0(ll_backend__global_data__TypeCtorInfo_34_62, ll_backend__global_data__TypeCtorInfo_34_62);
    }
#line 881 "global_data.m"
    {
#line 881 "global_data.m"
      mercury__bimap__foldl2_6_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[0], ll_backend__global_data__TypeCtorInfo_34_62, (MR_Word) &ll_backend__global_data_scalar_common_1[6], (MR_Word) &ll_backend__global_data_scalar_common_1[3], ll_backend__global_data__V_53_53, ll_backend__global_data__GroupMembersB_43, ((MR_Box) (ll_backend__global_data__GroupMembersA_40)), &ll_backend__global_data__conv5_GroupMembersAB_46, ((MR_Box) (ll_backend__global_data__V_54_54)), &ll_backend__global_data__conv4_ScalarCellGroupRemap_17);
    }
#line 881 "global_data.m"
    ll_backend__global_data__GroupMembersAB_46 = ((MR_Word) ll_backend__global_data__conv5_GroupMembersAB_46);
#line 881 "global_data.m"
    ll_backend__global_data__ScalarCellGroupRemap_17 = ((MR_Word) ll_backend__global_data__conv4_ScalarCellGroupRemap_17);
#line 872 "global_data.m"
    {
#line 872 "global_data.m"
      ll_backend__global_data__ScalarCellGroup_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 872 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__ScalarCellGroup_16, 0) = ((MR_Box) (ll_backend__global_data__CounterAB_45));
#line 872 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__ScalarCellGroup_16, 1) = ((MR_Box) (ll_backend__global_data__GroupMembersAB_46));
#line 872 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__ScalarCellGroup_16, 2) = ((MR_Box) (ll_backend__global_data__RevArrayAB_47));
#line 872 "global_data.m"
    }
#line 862 "global_data.m"
    {
#line 862 "global_data.m"
      mercury__map__set_4_p_0(ll_backend__global_data__TypeCtorInfo_28_28, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0, ((MR_Box) (ll_backend__global_data__TypeNum_13)), ((MR_Box) (ll_backend__global_data__ScalarCellGroup_16)), ll_backend__global_data__STATE_VARIABLE_ScalarCellGroupMap_0_18, ll_backend__global_data__STATE_VARIABLE_ScalarCellGroupMap_19);
    }
#line 863 "global_data.m"
    {
#line 863 "global_data.m"
      mercury__map__det_insert_4_p_0(ll_backend__global_data__TypeCtorInfo_28_28, (MR_Word) &ll_backend__global_data_scalar_common_1[3], ((MR_Box) (ll_backend__global_data__BTypeNum_9)), ((MR_Box) (ll_backend__global_data__ScalarCellGroupRemap_17)), ll_backend__global_data__STATE_VARIABLE_Remap_0_20, ll_backend__global_data__STATE_VARIABLE_Remap_21);
#line 863 "global_data.m"
      return;
    }
#line 852 "global_data.m"
  }
#line 844 "global_data.m"
}

#line 814 "global_data.m"
static void MR_CALL 
ll_backend__global_data__merge_cell_type_num_maps_8_p_0(
#line 814 "global_data.m"
  MR_Word ll_backend__global_data__CellType_9,
#line 814 "global_data.m"
  MR_Word ll_backend__global_data__BTypeNum_10,
#line 814 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_TypeCounter_0_17,
#line 814 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_TypeCounter_18,
#line 814 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_CellTypeNumMap_0_19,
#line 814 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_CellTypeNumMap_20,
#line 814 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_TypeNumRemap_0_21,
#line 814 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_TypeNumRemap_22)
#line 814 "global_data.m"
{
#line 823 "global_data.m"
  {
#line 823 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 823 "global_data.m"
    MR_Word ll_backend__global_data__ATypeNum_14;
#line 820 "global_data.m"
    MR_Box ll_backend__global_data__conv0_ATypeNum_14;

#line 820 "global_data.m"
    {
#line 820 "global_data.m"
      ll_backend__global_data__succeeded = mercury__bimap__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, ll_backend__global_data__STATE_VARIABLE_CellTypeNumMap_0_19, ((MR_Box) (ll_backend__global_data__CellType_9)), &ll_backend__global_data__conv0_ATypeNum_14);
    }
#line 820 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 820 "global_data.m"
      {
#line 820 "global_data.m"
        ll_backend__global_data__ATypeNum_14 = ((MR_Word) ll_backend__global_data__conv0_ATypeNum_14);
#line 820 "global_data.m"
        ll_backend__global_data__succeeded = MR_TRUE;
#line 820 "global_data.m"
      }
#line 823 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 822 "global_data.m"
      {
#line 822 "global_data.m"
        MR_Word ll_backend__global_data__TypeCtorInfo_29_29 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;

#line 822 "global_data.m"
        {
#line 822 "global_data.m"
          mercury__map__det_insert_4_p_0(ll_backend__global_data__TypeCtorInfo_29_29, ll_backend__global_data__TypeCtorInfo_29_29, ((MR_Box) (ll_backend__global_data__BTypeNum_10)), ((MR_Box) (ll_backend__global_data__ATypeNum_14)), ll_backend__global_data__STATE_VARIABLE_TypeNumRemap_0_21, ll_backend__global_data__STATE_VARIABLE_TypeNumRemap_22);
        }
#line 822 "global_data.m"
        *ll_backend__global_data__STATE_VARIABLE_CellTypeNumMap_20 = ll_backend__global_data__STATE_VARIABLE_CellTypeNumMap_0_19;
#line 822 "global_data.m"
        *ll_backend__global_data__STATE_VARIABLE_TypeCounter_18 = ll_backend__global_data__STATE_VARIABLE_TypeCounter_0_17;
#line 822 "global_data.m"
      }
#line 823 "global_data.m"
    else
#line 825 "global_data.m"
      {
#line 825 "global_data.m"
        MR_Word ll_backend__global_data__TypeCtorInfo_30_30;
#line 825 "global_data.m"
        MR_Integer ll_backend__global_data__N_15;
#line 825 "global_data.m"
        MR_Word ll_backend__global_data__NewTypeNum_16;

#line 825 "global_data.m"
        {
#line 825 "global_data.m"
          mercury__counter__allocate_3_p_0(&ll_backend__global_data__N_15, ll_backend__global_data__STATE_VARIABLE_TypeCounter_0_17, ll_backend__global_data__STATE_VARIABLE_TypeCounter_18);
        }
#line 826 "global_data.m"
        ll_backend__global_data__NewTypeNum_16 = (MR_Word) ll_backend__global_data__N_15;
#line 9578 "ll_backend.global_data.c"
        ll_backend__global_data__TypeCtorInfo_30_30 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;
#line 827 "global_data.m"
        {
#line 827 "global_data.m"
          mercury__map__det_insert_4_p_0(ll_backend__global_data__TypeCtorInfo_30_30, ll_backend__global_data__TypeCtorInfo_30_30, ((MR_Box) (ll_backend__global_data__BTypeNum_10)), ((MR_Box) (ll_backend__global_data__NewTypeNum_16)), ll_backend__global_data__STATE_VARIABLE_TypeNumRemap_0_21, ll_backend__global_data__STATE_VARIABLE_TypeNumRemap_22);
        }
#line 828 "global_data.m"
        {
#line 828 "global_data.m"
          mercury__bimap__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0, ll_backend__global_data__TypeCtorInfo_30_30, ((MR_Box) (ll_backend__global_data__CellType_9)), ((MR_Box) (ll_backend__global_data__NewTypeNum_16)), ll_backend__global_data__STATE_VARIABLE_CellTypeNumMap_0_19, ll_backend__global_data__STATE_VARIABLE_CellTypeNumMap_20);
#line 828 "global_data.m"
          return;
        }
#line 825 "global_data.m"
      }
#line 823 "global_data.m"
  }
#line 814 "global_data.m"
}

#line 925 "global_data.m"
static void MR_CALL 
ll_backend__global_data__merge_static_cell_infos_4_p_0_4(
#line 925 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 925 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 925 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 925 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_3,
#line 925 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_4)
#line 925 "global_data.m"
{
#line 925 "global_data.m"
  {
#line 925 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 925 "global_data.m"
    MR_Word ll_backend__global_data__conv10_STATE_VARIABLE_VectorCellGroupMap_12;

#line 925 "global_data.m"
    {
#line 925 "global_data.m"
      ll_backend__global_data__merge_vector_cell_group_maps_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3), &ll_backend__global_data__conv10_STATE_VARIABLE_VectorCellGroupMap_12);
    }
#line 925 "global_data.m"
    *ll_backend__global_data__wrapper_arg_4 = ((MR_Box) (ll_backend__global_data__conv10_STATE_VARIABLE_VectorCellGroupMap_12));
#line 925 "global_data.m"
  }
#line 925 "global_data.m"
}

#line 839 "global_data.m"
static void MR_CALL 
ll_backend__global_data__merge_static_cell_infos_4_p_0_3(
#line 839 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 839 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 839 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 839 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_3,
#line 839 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_4,
#line 839 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_5,
#line 839 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_6)
#line 839 "global_data.m"
{
#line 839 "global_data.m"
  {
#line 839 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 839 "global_data.m"
    MR_Word ll_backend__global_data__conv7_STATE_VARIABLE_ScalarCellGroupMap_19;
#line 839 "global_data.m"
    MR_Word ll_backend__global_data__conv6_STATE_VARIABLE_Remap_21;

#line 839 "global_data.m"
    {
#line 839 "global_data.m"
      ll_backend__global_data__merge_scalar_cell_group_maps_2_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3), &ll_backend__global_data__conv7_STATE_VARIABLE_ScalarCellGroupMap_19, ((MR_Word) ll_backend__global_data__wrapper_arg_5), &ll_backend__global_data__conv6_STATE_VARIABLE_Remap_21);
    }
#line 839 "global_data.m"
    *ll_backend__global_data__wrapper_arg_4 = ((MR_Box) (ll_backend__global_data__conv7_STATE_VARIABLE_ScalarCellGroupMap_19));
#line 839 "global_data.m"
    *ll_backend__global_data__wrapper_arg_6 = ((MR_Box) (ll_backend__global_data__conv6_STATE_VARIABLE_Remap_21));
#line 839 "global_data.m"
  }
#line 839 "global_data.m"
}

#line 795 "global_data.m"
static void MR_CALL 
ll_backend__global_data__merge_static_cell_infos_4_p_0_2(
#line 795 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 795 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 795 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 795 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_3,
#line 795 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_4,
#line 795 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_5,
#line 795 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_6,
#line 795 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_7,
#line 795 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_8)
#line 795 "global_data.m"
{
#line 795 "global_data.m"
  {
#line 795 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 795 "global_data.m"
    MR_Word ll_backend__global_data__conv2_STATE_VARIABLE_TypeCounter_18;
#line 795 "global_data.m"
    MR_Word ll_backend__global_data__conv1_STATE_VARIABLE_CellTypeNumMap_20;
#line 795 "global_data.m"
    MR_Word ll_backend__global_data__conv0_STATE_VARIABLE_TypeNumRemap_22;

#line 795 "global_data.m"
    {
#line 795 "global_data.m"
      ll_backend__global_data__merge_cell_type_num_maps_8_p_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3), &ll_backend__global_data__conv2_STATE_VARIABLE_TypeCounter_18, ((MR_Word) ll_backend__global_data__wrapper_arg_5), &ll_backend__global_data__conv1_STATE_VARIABLE_CellTypeNumMap_20, ((MR_Word) ll_backend__global_data__wrapper_arg_7), &ll_backend__global_data__conv0_STATE_VARIABLE_TypeNumRemap_22);
    }
#line 795 "global_data.m"
    *ll_backend__global_data__wrapper_arg_4 = ((MR_Box) (ll_backend__global_data__conv2_STATE_VARIABLE_TypeCounter_18));
#line 795 "global_data.m"
    *ll_backend__global_data__wrapper_arg_6 = ((MR_Box) (ll_backend__global_data__conv1_STATE_VARIABLE_CellTypeNumMap_20));
#line 795 "global_data.m"
    *ll_backend__global_data__wrapper_arg_8 = ((MR_Box) (ll_backend__global_data__conv0_STATE_VARIABLE_TypeNumRemap_22));
#line 795 "global_data.m"
  }
#line 795 "global_data.m"
}

#line 792 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data__merge_static_cell_infos_4_p_0_1(
#line 792 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg)
#line 792 "global_data.m"
{
#line 792 "global_data.m"
  {
#line 792 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 792 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;

#line 792 "global_data.m"
    {
#line 792 "global_data.m"
      return ll_backend__global_data__succeeded = ll_backend__global_data__IntroducedFrom__pred__merge_static_cell_infos__792__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 4))));
    }
#line 792 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 792 "global_data.m"
  }
#line 792 "global_data.m"
}

#line 784 "global_data.m"
static void MR_CALL 
ll_backend__global_data__merge_static_cell_infos_4_p_0(
#line 784 "global_data.m"
  MR_Word ll_backend__global_data__SCIa_5,
#line 784 "global_data.m"
  MR_Word ll_backend__global_data__SCIb_6,
#line 784 "global_data.m"
  MR_Word * ll_backend__global_data__SCI_7,
#line 784 "global_data.m"
  MR_Word * ll_backend__global_data__Remap_8)
#line 784 "global_data.m"
{
#line 787 "global_data.m"
  {
#line 787 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 787 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_41_41;
#line 787 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_19_59;
#line 787 "global_data.m"
    MR_Word ll_backend__global_data__SubInfoA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SCIa_5, (MR_Integer) 0)));
#line 787 "global_data.m"
    MR_Word ll_backend__global_data__TypeCounterA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SCIa_5, (MR_Integer) 1)));
#line 787 "global_data.m"
    MR_Word ll_backend__global_data__CellTypeNumMapA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SCIa_5, (MR_Integer) 2)));
#line 787 "global_data.m"
    MR_Word ll_backend__global_data__ScalarCellGroupMapA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SCIa_5, (MR_Integer) 3)));
#line 787 "global_data.m"
    MR_Word ll_backend__global_data__VectorCellGroupMapA_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SCIa_5, (MR_Integer) 4)));
#line 787 "global_data.m"
    MR_Word ll_backend__global_data__SubInfoB_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SCIb_6, (MR_Integer) 0)));
#line 787 "global_data.m"
    MR_Word ll_backend__global_data__CellTypeNumMapB_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SCIb_6, (MR_Integer) 2)));
#line 787 "global_data.m"
    MR_Word ll_backend__global_data__ScalarCellGroupMapB_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SCIb_6, (MR_Integer) 3)));
#line 787 "global_data.m"
    MR_Word ll_backend__global_data__VectorCellGroupMapB_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SCIb_6, (MR_Integer) 4)));
#line 787 "global_data.m"
    MR_Word ll_backend__global_data__TypeCounter_19;
#line 787 "global_data.m"
    MR_Word ll_backend__global_data__CellTypeNumMap_20;
#line 787 "global_data.m"
    MR_Word ll_backend__global_data__CellTypeNumMapRemap_21;
#line 787 "global_data.m"
    MR_Word ll_backend__global_data__ScalarCellGroupMap_22;
#line 787 "global_data.m"
    MR_Word ll_backend__global_data__ScalarCellGroupRemap_23;
#line 787 "global_data.m"
    MR_Word ll_backend__global_data__VectorCellGroupMap_24;
#line 787 "global_data.m"
    MR_Word ll_backend__global_data__SCI0_25;
#line 787 "global_data.m"
    MR_Word ll_backend__global_data__V_26_26;
#line 787 "global_data.m"
    MR_Word ll_backend__global_data__V_31_31;
#line 787 "global_data.m"
    MR_Word ll_backend__global_data__V_51_51;
#line 787 "global_data.m"
    MR_Word ll_backend__global_data__V_52_52;
#line 787 "global_data.m"
    MR_Word ll_backend__global_data__V_68_68;
#line 790 "global_data.m"
    MR_Word ll_backend__global_data___TypeCounterB_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SCIb_6, (MR_Integer) 1)));
#line 795 "global_data.m"
    MR_Box ll_backend__global_data__conv5_TypeCounter_19;
#line 795 "global_data.m"
    MR_Box ll_backend__global_data__conv4_CellTypeNumMap_20;
#line 795 "global_data.m"
    MR_Box ll_backend__global_data__conv3_CellTypeNumMapRemap_21;
#line 839 "global_data.m"
    MR_Box ll_backend__global_data__conv9_ScalarCellGroupMap_22;
#line 839 "global_data.m"
    MR_Box ll_backend__global_data__conv8_ScalarCellGroupRemap_23;
#line 925 "global_data.m"
    MR_Box ll_backend__global_data__conv11_VectorCellGroupMap_24;

#line 792 "global_data.m"
    {
#line 792 "global_data.m"
      ll_backend__global_data__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 792 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_26_26, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_9[0]));
#line 792 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_26_26, 1) = ((MR_Box) (ll_backend__global_data__merge_static_cell_infos_4_p_0_1));
#line 792 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 792 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_26_26, 3) = ((MR_Box) (ll_backend__global_data__SubInfoA_9));
#line 792 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_26_26, 4) = ((MR_Box) (ll_backend__global_data__SubInfoB_14));
#line 792 "global_data.m"
    }
#line 792 "global_data.m"
    {
#line 792 "global_data.m"
      mercury__require__expect_4_p_0(ll_backend__global_data__V_26_26, (MR_String) "ll_backend.global_data", (MR_String) "predicate \140ll_backend.global_data.merge_static_cell_infos\'/4", (MR_String) "mismatch");
    }
#line 9850 "ll_backend.global_data.c"
    ll_backend__global_data__TypeCtorInfo_41_41 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;
#line 795 "global_data.m"
    {
#line 795 "global_data.m"
      ll_backend__global_data__V_31_31 = mercury__map__init_0_f_0(ll_backend__global_data__TypeCtorInfo_41_41, ll_backend__global_data__TypeCtorInfo_41_41);
    }
#line 795 "global_data.m"
    {
#line 795 "global_data.m"
      mercury__bimap__foldl3_8_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0, ll_backend__global_data__TypeCtorInfo_41_41, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &ll_backend__global_data_scalar_common_1[1], (MR_Word) &ll_backend__global_data_scalar_common_1[2], (MR_Word) &ll_backend__global_data_scalar_common_1[12], ll_backend__global_data__CellTypeNumMapB_16, ((MR_Box) (ll_backend__global_data__TypeCounterA_10)), &ll_backend__global_data__conv5_TypeCounter_19, ((MR_Box) (ll_backend__global_data__CellTypeNumMapA_11)), &ll_backend__global_data__conv4_CellTypeNumMap_20, ((MR_Box) (ll_backend__global_data__V_31_31)), &ll_backend__global_data__conv3_CellTypeNumMapRemap_21);
    }
#line 795 "global_data.m"
    ll_backend__global_data__TypeCounter_19 = ((MR_Word) ll_backend__global_data__conv5_TypeCounter_19);
#line 795 "global_data.m"
    ll_backend__global_data__CellTypeNumMap_20 = ((MR_Word) ll_backend__global_data__conv4_CellTypeNumMap_20);
#line 795 "global_data.m"
    ll_backend__global_data__CellTypeNumMapRemap_21 = ((MR_Word) ll_backend__global_data__conv3_CellTypeNumMapRemap_21);
#line 839 "global_data.m"
    {
#line 839 "global_data.m"
      ll_backend__global_data__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 839 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_51_51, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_11[0]));
#line 839 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_51_51, 1) = ((MR_Box) (ll_backend__global_data__merge_static_cell_infos_4_p_0_3));
#line 839 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_51_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 839 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_51_51, 3) = ((MR_Box) (ll_backend__global_data__CellTypeNumMapRemap_21));
#line 839 "global_data.m"
    }
#line 9882 "ll_backend.global_data.c"
    ll_backend__global_data__TypeCtorInfo_19_59 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;
#line 839 "global_data.m"
    {
#line 839 "global_data.m"
      ll_backend__global_data__V_52_52 = mercury__map__init_0_f_0(ll_backend__global_data__TypeCtorInfo_19_59, (MR_Word) &ll_backend__global_data_scalar_common_1[3]);
    }
#line 839 "global_data.m"
    {
#line 839 "global_data.m"
      mercury__map__foldl2_6_p_0(ll_backend__global_data__TypeCtorInfo_19_59, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0, (MR_Word) &ll_backend__global_data_scalar_common_1[4], (MR_Word) &ll_backend__global_data_scalar_common_1[5], ll_backend__global_data__V_51_51, ll_backend__global_data__ScalarCellGroupMapB_17, ((MR_Box) (ll_backend__global_data__ScalarCellGroupMapA_12)), &ll_backend__global_data__conv9_ScalarCellGroupMap_22, ((MR_Box) (ll_backend__global_data__V_52_52)), &ll_backend__global_data__conv8_ScalarCellGroupRemap_23);
    }
#line 839 "global_data.m"
    ll_backend__global_data__ScalarCellGroupMap_22 = ((MR_Word) ll_backend__global_data__conv9_ScalarCellGroupMap_22);
#line 839 "global_data.m"
    ll_backend__global_data__ScalarCellGroupRemap_23 = ((MR_Word) ll_backend__global_data__conv8_ScalarCellGroupRemap_23);
#line 925 "global_data.m"
    {
#line 925 "global_data.m"
      ll_backend__global_data__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 925 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_68_68, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_5[3]));
#line 925 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_68_68, 1) = ((MR_Box) (ll_backend__global_data__merge_static_cell_infos_4_p_0_4));
#line 925 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_68_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 925 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_68_68, 3) = ((MR_Box) (ll_backend__global_data__CellTypeNumMapRemap_21));
#line 925 "global_data.m"
    }
#line 925 "global_data.m"
    {
#line 925 "global_data.m"
      mercury__map__foldl_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0, (MR_Word) &ll_backend__global_data_scalar_common_1[7], ll_backend__global_data__V_68_68, ll_backend__global_data__VectorCellGroupMapB_18, ((MR_Box) (ll_backend__global_data__VectorCellGroupMapA_13)), &ll_backend__global_data__conv11_VectorCellGroupMap_24);
    }
#line 925 "global_data.m"
    ll_backend__global_data__VectorCellGroupMap_24 = ((MR_Word) ll_backend__global_data__conv11_VectorCellGroupMap_24);
#line 807 "global_data.m"
    {
#line 807 "global_data.m"
      MR_Word base;
#line 807 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 807 "global_data.m"
      *ll_backend__global_data__Remap_8 = base;
#line 807 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__CellTypeNumMapRemap_21));
#line 807 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__ScalarCellGroupRemap_23));
#line 807 "global_data.m"
    }
#line 810 "global_data.m"
    {
#line 810 "global_data.m"
      ll_backend__global_data__SCI0_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 810 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__SCI0_25, 0) = ((MR_Box) (ll_backend__global_data__SubInfoA_9));
#line 810 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__SCI0_25, 1) = ((MR_Box) (ll_backend__global_data__TypeCounter_19));
#line 810 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__SCI0_25, 2) = ((MR_Box) (ll_backend__global_data__CellTypeNumMap_20));
#line 810 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__SCI0_25, 3) = ((MR_Box) (ll_backend__global_data__ScalarCellGroupMap_22));
#line 810 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__SCI0_25, 4) = ((MR_Box) (ll_backend__global_data__VectorCellGroupMap_24));
#line 810 "global_data.m"
    }
#line 812 "global_data.m"
    {
#line 812 "global_data.m"
      ll_backend__global_data__remap_static_cell_info_3_p_0(*ll_backend__global_data__Remap_8, ll_backend__global_data__SCI0_25, ll_backend__global_data__SCI_7);
#line 812 "global_data.m"
      return;
    }
#line 787 "global_data.m"
  }
#line 784 "global_data.m"
}

#line 710 "global_data.m"
static void MR_CALL 
ll_backend__global_data__associate_natural_type_4_p_0(
#line 710 "global_data.m"
  MR_Word ll_backend__global_data__UnboxFloat_5,
#line 710 "global_data.m"
  MR_Word ll_backend__global_data__ArgWidth_6,
#line 710 "global_data.m"
  MR_Word ll_backend__global_data__Rval_7,
#line 710 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__4_4)
#line 710 "global_data.m"
{
#line 713 "global_data.m"
  {
#line 713 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 713 "global_data.m"
    MR_Word ll_backend__global_data__Type_8;

#line 714 "global_data.m"
    {
#line 714 "global_data.m"
      ll_backend__global_data__natural_type_4_p_0(ll_backend__global_data__UnboxFloat_5, ll_backend__global_data__ArgWidth_6, ll_backend__global_data__Rval_7, &ll_backend__global_data__Type_8);
    }
#line 713 "global_data.m"
    {
#line 713 "global_data.m"
      MR_Word base;
#line 713 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 713 "global_data.m"
      *ll_backend__global_data__HeadVar__4_4 = base;
#line 713 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__Rval_7));
#line 713 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__Type_8));
#line 713 "global_data.m"
    }
#line 713 "global_data.m"
  }
#line 710 "global_data.m"
}

#line 695 "global_data.m"
static void MR_CALL 
ll_backend__global_data__natural_type_4_p_0(
#line 695 "global_data.m"
  MR_Word ll_backend__global_data__UnboxFloat_5,
#line 695 "global_data.m"
  MR_Word ll_backend__global_data__ArgWidth_6,
#line 695 "global_data.m"
  MR_Word ll_backend__global_data__Rval_7,
#line 695 "global_data.m"
  MR_Word * ll_backend__global_data__Type_8)
#line 695 "global_data.m"
{
#line 698 "global_data.m"
  {
#line 698 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 698 "global_data.m"
    MR_Word ll_backend__global_data__Type0_9;

#line 699 "global_data.m"
    {
#line 699 "global_data.m"
      ll_backend__llds__rval_type_2_p_0(ll_backend__global_data__Rval_7, &ll_backend__global_data__Type0_9);
    }
#line 701 "global_data.m"
    ll_backend__global_data__succeeded = (ll_backend__global_data__Type0_9 == (MR_Integer) 9);
#line 701 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 701 "global_data.m"
      {
#line 702 "global_data.m"
        ll_backend__global_data__succeeded = (ll_backend__global_data__UnboxFloat_5 == (MR_Integer) 1);
#line 701 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 701 "global_data.m"
          {
#line 703 "global_data.m"
            ll_backend__global_data__succeeded = (ll_backend__global_data__ArgWidth_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 703 "global_data.m"
            ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 701 "global_data.m"
          }
#line 701 "global_data.m"
      }
#line 706 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 705 "global_data.m"
      *ll_backend__global_data__Type_8 = (MR_Integer) 11;
#line 706 "global_data.m"
    else
#line 707 "global_data.m"
      *ll_backend__global_data__Type_8 = ll_backend__global_data__Type0_9;
#line 698 "global_data.m"
  }
#line 695 "global_data.m"
}

#line 651 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data__threshold_group_types_5_p_0(
#line 651 "global_data.m"
  MR_Word ll_backend__global_data__CurType_6,
#line 651 "global_data.m"
  MR_Word ll_backend__global_data__RevArgsSoFar_7,
#line 651 "global_data.m"
  MR_Word ll_backend__global_data__LaterArgsTypes_8,
#line 651 "global_data.m"
  MR_Word * ll_backend__global_data__TypeGroups_9,
#line 651 "global_data.m"
  MR_Word * ll_backend__global_data__TypeAndArgGroups_10)
#line 651 "global_data.m"
{
#line 658 "global_data.m"
  while (MR_TRUE)
#line 658 "global_data.m"
    {
#line 658 "global_data.m"
      /* tailcall optimized into a loop */
#line 658 "global_data.m"
      {
#line 658 "global_data.m"
        MR_bool ll_backend__global_data__succeeded;

#line 658 "global_data.m"
        if ((ll_backend__global_data__LaterArgsTypes_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 658 "global_data.m"
          {
#line 658 "global_data.m"
            MR_Word ll_backend__global_data__TypeGroup_11;
#line 658 "global_data.m"
            MR_Word ll_backend__global_data__TypeAndArgGroup_12;
#line 683 "global_data.m"
            MR_Word ll_backend__global_data__Arg_34;
#line 680 "global_data.m"
            MR_Word ll_backend__global_data__V_37_37;

#line 680 "global_data.m"
            ll_backend__global_data__succeeded = ((MR_tag((MR_Word) ll_backend__global_data__RevArgsSoFar_7)) == (MR_mktag((MR_Integer) 1)));
#line 680 "global_data.m"
            if (ll_backend__global_data__succeeded)
#line 680 "global_data.m"
              {
#line 680 "global_data.m"
                ll_backend__global_data__Arg_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__RevArgsSoFar_7, (MR_Integer) 0)));
#line 680 "global_data.m"
                ll_backend__global_data__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__RevArgsSoFar_7, (MR_Integer) 1)));
#line 680 "global_data.m"
                ll_backend__global_data__succeeded = (ll_backend__global_data__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 680 "global_data.m"
              }
#line 683 "global_data.m"
            if (ll_backend__global_data__succeeded)
#line 681 "global_data.m"
              {
#line 681 "global_data.m"
                {
#line 681 "global_data.m"
                  ll_backend__global_data__TypeGroup_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 681 "global_data.m"
                  MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeGroup_11, 0) = ((MR_Box) (ll_backend__global_data__CurType_6));
#line 681 "global_data.m"
                  MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeGroup_11, 1) = ((MR_Box) ((MR_Integer) 1));
#line 681 "global_data.m"
                }
#line 682 "global_data.m"
                {
#line 682 "global_data.m"
                  ll_backend__global_data__TypeAndArgGroup_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 682 "global_data.m"
                  MR_hl_field(MR_mktag(1), ll_backend__global_data__TypeAndArgGroup_12, 0) = ((MR_Box) (ll_backend__global_data__CurType_6));
#line 682 "global_data.m"
                  MR_hl_field(MR_mktag(1), ll_backend__global_data__TypeAndArgGroup_12, 1) = ((MR_Box) (ll_backend__global_data__Arg_34));
#line 682 "global_data.m"
                }
#line 681 "global_data.m"
              }
#line 683 "global_data.m"
            else
#line 684 "global_data.m"
              {
#line 684 "global_data.m"
                MR_Word ll_backend__global_data__TypeCtorInfo_14_39 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
#line 684 "global_data.m"
                MR_Integer ll_backend__global_data__NumArgs_35;
#line 684 "global_data.m"
                MR_Word ll_backend__global_data__Args_36;

#line 684 "global_data.m"
                {
#line 684 "global_data.m"
                  mercury__list__length_2_p_0(ll_backend__global_data__TypeCtorInfo_14_39, ll_backend__global_data__RevArgsSoFar_7, &ll_backend__global_data__NumArgs_35);
                }
#line 685 "global_data.m"
                {
#line 685 "global_data.m"
                  mercury__list__reverse_2_p_0(ll_backend__global_data__TypeCtorInfo_14_39, ll_backend__global_data__RevArgsSoFar_7, &ll_backend__global_data__Args_36);
                }
#line 686 "global_data.m"
                {
#line 686 "global_data.m"
                  ll_backend__global_data__TypeGroup_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 686 "global_data.m"
                  MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeGroup_11, 0) = ((MR_Box) (ll_backend__global_data__CurType_6));
#line 686 "global_data.m"
                  MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeGroup_11, 1) = ((MR_Box) (ll_backend__global_data__NumArgs_35));
#line 686 "global_data.m"
                }
#line 687 "global_data.m"
                {
#line 687 "global_data.m"
                  ll_backend__global_data__TypeAndArgGroup_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 687 "global_data.m"
                  MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeAndArgGroup_12, 0) = ((MR_Box) (ll_backend__global_data__CurType_6));
#line 687 "global_data.m"
                  MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeAndArgGroup_12, 1) = ((MR_Box) (ll_backend__global_data__NumArgs_35));
#line 687 "global_data.m"
                  MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeAndArgGroup_12, 2) = ((MR_Box) (ll_backend__global_data__Args_36));
#line 687 "global_data.m"
                }
#line 684 "global_data.m"
              }
#line 660 "global_data.m"
            {
#line 660 "global_data.m"
              MR_Word base;
#line 660 "global_data.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 660 "global_data.m"
              *ll_backend__global_data__TypeGroups_9 = base;
#line 660 "global_data.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__global_data__TypeGroup_11));
#line 660 "global_data.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 660 "global_data.m"
            }
#line 661 "global_data.m"
            {
#line 661 "global_data.m"
              MR_Word base;
#line 661 "global_data.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 661 "global_data.m"
              *ll_backend__global_data__TypeAndArgGroups_10 = base;
#line 661 "global_data.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__global_data__TypeAndArgGroup_12));
#line 661 "global_data.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 661 "global_data.m"
            }
#line 658 "global_data.m"
            ll_backend__global_data__succeeded = MR_TRUE;
#line 658 "global_data.m"
          }
#line 658 "global_data.m"
        else
#line 663 "global_data.m"
          {
#line 663 "global_data.m"
            MR_Word ll_backend__global_data__NextArg_13;
#line 663 "global_data.m"
            MR_Word ll_backend__global_data__NextType_14;
#line 663 "global_data.m"
            MR_Word ll_backend__global_data__MoreArgsTypes_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__LaterArgsTypes_8, (MR_Integer) 1)));
#line 663 "global_data.m"
            MR_Word ll_backend__global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__LaterArgsTypes_8, (MR_Integer) 0)));

#line 663 "global_data.m"
            ll_backend__global_data__NextArg_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_18_18, (MR_Integer) 0)));
#line 663 "global_data.m"
            ll_backend__global_data__NextType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_18_18, (MR_Integer) 1)));
#line 664 "global_data.m"
            ll_backend__global_data__succeeded = (ll_backend__global_data__CurType_6 == ll_backend__global_data__NextType_14);
#line 667 "global_data.m"
            if (ll_backend__global_data__succeeded)
#line 665 "global_data.m"
              {
#line 665 "global_data.m"
                MR_Word ll_backend__global_data__V_19_19;

#line 665 "global_data.m"
                {
#line 665 "global_data.m"
                  ll_backend__global_data__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 665 "global_data.m"
                  MR_hl_field(MR_mktag(1), ll_backend__global_data__V_19_19, 0) = ((MR_Box) (ll_backend__global_data__NextArg_13));
#line 665 "global_data.m"
                  MR_hl_field(MR_mktag(1), ll_backend__global_data__V_19_19, 1) = ((MR_Box) (ll_backend__global_data__RevArgsSoFar_7));
#line 665 "global_data.m"
                }
#line 665 "global_data.m"
                /* direct tailcall eliminated */
#line 665 "global_data.m"
                {
#line 665 "global_data.m"
                  MR_Word ll_backend__global_data__RevArgsSoFar__tmp_copy_7 = ll_backend__global_data__V_19_19;
#line 665 "global_data.m"
                  MR_Word ll_backend__global_data__LaterArgsTypes__tmp_copy_8 = ll_backend__global_data__MoreArgsTypes_15;

#line 665 "global_data.m"
                  ll_backend__global_data__LaterArgsTypes_8 = ll_backend__global_data__LaterArgsTypes__tmp_copy_8;
#line 665 "global_data.m"
                  ll_backend__global_data__RevArgsSoFar_7 = ll_backend__global_data__RevArgsSoFar__tmp_copy_7;
#line 665 "global_data.m"
                }
#line 665 "global_data.m"
                continue;
#line 665 "global_data.m"
              }
#line 667 "global_data.m"
            else
#line 669 "global_data.m"
              {
#line 669 "global_data.m"
                MR_Word ll_backend__global_data__TypeGroupsTail_16;
#line 669 "global_data.m"
                MR_Word ll_backend__global_data__TypeAndArgGroupsTail_17;
#line 669 "global_data.m"
                MR_Word ll_backend__global_data__V_20_20;
#line 669 "global_data.m"
                MR_Word ll_backend__global_data__TypeGroup_24;
#line 669 "global_data.m"
                MR_Word ll_backend__global_data__TypeAndArgGroup_25;
#line 683 "global_data.m"
                MR_Word ll_backend__global_data__Arg_44;
#line 680 "global_data.m"
                MR_Word ll_backend__global_data__V_47_47;

#line 668 "global_data.m"
                {
#line 668 "global_data.m"
                  ll_backend__global_data__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 668 "global_data.m"
                  MR_hl_field(MR_mktag(1), ll_backend__global_data__V_20_20, 0) = ((MR_Box) (ll_backend__global_data__NextArg_13));
#line 668 "global_data.m"
                  MR_hl_field(MR_mktag(1), ll_backend__global_data__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 668 "global_data.m"
                }
#line 668 "global_data.m"
                {
#line 668 "global_data.m"
                  ll_backend__global_data__succeeded = ll_backend__global_data__threshold_group_types_5_p_0(ll_backend__global_data__NextType_14, ll_backend__global_data__V_20_20, ll_backend__global_data__MoreArgsTypes_15, &ll_backend__global_data__TypeGroupsTail_16, &ll_backend__global_data__TypeAndArgGroupsTail_17);
                }
#line 669 "global_data.m"
                if (ll_backend__global_data__succeeded)
#line 669 "global_data.m"
                  {
#line 680 "global_data.m"
                    ll_backend__global_data__succeeded = ((MR_tag((MR_Word) ll_backend__global_data__RevArgsSoFar_7)) == (MR_mktag((MR_Integer) 1)));
#line 680 "global_data.m"
                    if (ll_backend__global_data__succeeded)
#line 680 "global_data.m"
                      {
#line 680 "global_data.m"
                        ll_backend__global_data__Arg_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__RevArgsSoFar_7, (MR_Integer) 0)));
#line 680 "global_data.m"
                        ll_backend__global_data__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__RevArgsSoFar_7, (MR_Integer) 1)));
#line 680 "global_data.m"
                        ll_backend__global_data__succeeded = (ll_backend__global_data__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 680 "global_data.m"
                      }
#line 683 "global_data.m"
                    if (ll_backend__global_data__succeeded)
#line 681 "global_data.m"
                      {
#line 681 "global_data.m"
                        {
#line 681 "global_data.m"
                          ll_backend__global_data__TypeGroup_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 681 "global_data.m"
                          MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeGroup_24, 0) = ((MR_Box) (ll_backend__global_data__CurType_6));
#line 681 "global_data.m"
                          MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeGroup_24, 1) = ((MR_Box) ((MR_Integer) 1));
#line 681 "global_data.m"
                        }
#line 682 "global_data.m"
                        {
#line 682 "global_data.m"
                          ll_backend__global_data__TypeAndArgGroup_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 682 "global_data.m"
                          MR_hl_field(MR_mktag(1), ll_backend__global_data__TypeAndArgGroup_25, 0) = ((MR_Box) (ll_backend__global_data__CurType_6));
#line 682 "global_data.m"
                          MR_hl_field(MR_mktag(1), ll_backend__global_data__TypeAndArgGroup_25, 1) = ((MR_Box) (ll_backend__global_data__Arg_44));
#line 682 "global_data.m"
                        }
#line 681 "global_data.m"
                      }
#line 683 "global_data.m"
                    else
#line 684 "global_data.m"
                      {
#line 684 "global_data.m"
                        MR_Word ll_backend__global_data__TypeCtorInfo_14_49 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
#line 684 "global_data.m"
                        MR_Integer ll_backend__global_data__NumArgs_45;
#line 684 "global_data.m"
                        MR_Word ll_backend__global_data__Args_46;

#line 684 "global_data.m"
                        {
#line 684 "global_data.m"
                          mercury__list__length_2_p_0(ll_backend__global_data__TypeCtorInfo_14_49, ll_backend__global_data__RevArgsSoFar_7, &ll_backend__global_data__NumArgs_45);
                        }
#line 685 "global_data.m"
                        {
#line 685 "global_data.m"
                          mercury__list__reverse_2_p_0(ll_backend__global_data__TypeCtorInfo_14_49, ll_backend__global_data__RevArgsSoFar_7, &ll_backend__global_data__Args_46);
                        }
#line 686 "global_data.m"
                        {
#line 686 "global_data.m"
                          ll_backend__global_data__TypeGroup_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 686 "global_data.m"
                          MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeGroup_24, 0) = ((MR_Box) (ll_backend__global_data__CurType_6));
#line 686 "global_data.m"
                          MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeGroup_24, 1) = ((MR_Box) (ll_backend__global_data__NumArgs_45));
#line 686 "global_data.m"
                        }
#line 687 "global_data.m"
                        {
#line 687 "global_data.m"
                          ll_backend__global_data__TypeAndArgGroup_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 687 "global_data.m"
                          MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeAndArgGroup_25, 0) = ((MR_Box) (ll_backend__global_data__CurType_6));
#line 687 "global_data.m"
                          MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeAndArgGroup_25, 1) = ((MR_Box) (ll_backend__global_data__NumArgs_45));
#line 687 "global_data.m"
                          MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeAndArgGroup_25, 2) = ((MR_Box) (ll_backend__global_data__Args_46));
#line 687 "global_data.m"
                        }
#line 684 "global_data.m"
                      }
#line 671 "global_data.m"
                    {
#line 671 "global_data.m"
                      MR_Word base;
#line 671 "global_data.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 671 "global_data.m"
                      *ll_backend__global_data__TypeGroups_9 = base;
#line 671 "global_data.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__global_data__TypeGroup_24));
#line 671 "global_data.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__global_data__TypeGroupsTail_16));
#line 671 "global_data.m"
                    }
#line 672 "global_data.m"
                    {
#line 672 "global_data.m"
                      MR_Word base;
#line 672 "global_data.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 672 "global_data.m"
                      *ll_backend__global_data__TypeAndArgGroups_10 = base;
#line 672 "global_data.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__global_data__TypeAndArgGroup_25));
#line 672 "global_data.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__global_data__TypeAndArgGroupsTail_17));
#line 672 "global_data.m"
                    }
#line 672 "global_data.m"
                    ll_backend__global_data__succeeded = MR_TRUE;
#line 669 "global_data.m"
                  }
#line 669 "global_data.m"
              }
#line 663 "global_data.m"
          }
#line 658 "global_data.m"
        return ll_backend__global_data__succeeded;
#line 658 "global_data.m"
      }
#line 658 "global_data.m"
      break;
#line 658 "global_data.m"
    }
#line 651 "global_data.m"
}

#line 619 "global_data.m"
static void MR_CALL 
ll_backend__global_data__add_one_vector_static_cell_6_p_0(
#line 619 "global_data.m"
  MR_Word ll_backend__global_data__TypeNum_7,
#line 619 "global_data.m"
  MR_Word ll_backend__global_data__CellType_8,
#line 619 "global_data.m"
  MR_Integer ll_backend__global_data__CellNum_9,
#line 619 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__4_4,
#line 619 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_Arrays_0_13,
#line 619 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Arrays_14)
#line 619 "global_data.m"
{
#line 625 "global_data.m"
  {
#line 625 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 625 "global_data.m"
    MR_Word ll_backend__global_data__VectorContents_10 = (MR_Word) ll_backend__global_data__HeadVar__4_4;
#line 625 "global_data.m"
    MR_Word ll_backend__global_data__Array_12;

#line 626 "global_data.m"
    {
#line 626 "global_data.m"
      ll_backend__global_data__Array_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 626 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Array_12, 0) = ((MR_Box) (ll_backend__global_data__CellType_8));
#line 626 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Array_12, 1) = ((MR_Box) (ll_backend__global_data__TypeNum_7));
#line 626 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Array_12, 2) = ((MR_Box) (ll_backend__global_data__CellNum_9));
#line 626 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Array_12, 3) = ((MR_Box) (ll_backend__global_data__VectorContents_10));
#line 626 "global_data.m"
    }
#line 628 "global_data.m"
    {
#line 628 "global_data.m"
      MR_Word base;
#line 628 "global_data.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 628 "global_data.m"
      *ll_backend__global_data__STATE_VARIABLE_Arrays_14 = base;
#line 628 "global_data.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__global_data__Array_12));
#line 628 "global_data.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__global_data__STATE_VARIABLE_Arrays_0_13));
#line 628 "global_data.m"
    }
#line 625 "global_data.m"
  }
#line 619 "global_data.m"
}

#line 616 "global_data.m"
static void MR_CALL 
ll_backend__global_data__add_all_vector_static_cells_for_type_5_p_0_1(
#line 616 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 616 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 616 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 616 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_3,
#line 616 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_4)
#line 616 "global_data.m"
{
#line 616 "global_data.m"
  {
#line 616 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 616 "global_data.m"
    MR_Word ll_backend__global_data__conv1_STATE_VARIABLE_Arrays_14;

#line 616 "global_data.m"
    {
#line 616 "global_data.m"
      ll_backend__global_data__add_one_vector_static_cell_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 4))), ((MR_Integer) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3), &ll_backend__global_data__conv1_STATE_VARIABLE_Arrays_14);
    }
#line 616 "global_data.m"
    *ll_backend__global_data__wrapper_arg_4 = ((MR_Box) (ll_backend__global_data__conv1_STATE_VARIABLE_Arrays_14));
#line 616 "global_data.m"
  }
#line 616 "global_data.m"
}

#line 608 "global_data.m"
static void MR_CALL 
ll_backend__global_data__add_all_vector_static_cells_for_type_5_p_0(
#line 608 "global_data.m"
  MR_Word ll_backend__global_data__TypeNumMap_6,
#line 608 "global_data.m"
  MR_Word ll_backend__global_data__TypeNum_7,
#line 608 "global_data.m"
  MR_Word ll_backend__global_data__CellGroup_8,
#line 608 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_Arrays_0_11,
#line 608 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Arrays_12)
#line 608 "global_data.m"
{
#line 614 "global_data.m"
  {
#line 614 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 614 "global_data.m"
    MR_Word ll_backend__global_data__CellType_10;
#line 614 "global_data.m"
    MR_Word ll_backend__global_data__V_13_13;
#line 614 "global_data.m"
    MR_Word ll_backend__global_data__V_14_14;
#line 615 "global_data.m"
    MR_Box ll_backend__global_data__conv0_CellType_10;
#line 616 "global_data.m"
    MR_Word ll_backend__global_data__V_16_16;
#line 616 "global_data.m"
    MR_Box ll_backend__global_data__conv2_STATE_VARIABLE_Arrays_12;

#line 615 "global_data.m"
    {
#line 615 "global_data.m"
      mercury__bimap__reverse_lookup_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, ll_backend__global_data__TypeNumMap_6, &ll_backend__global_data__conv0_CellType_10, ((MR_Box) (ll_backend__global_data__TypeNum_7)));
    }
#line 615 "global_data.m"
    ll_backend__global_data__CellType_10 = ((MR_Word) ll_backend__global_data__conv0_CellType_10);
#line 616 "global_data.m"
    {
#line 616 "global_data.m"
      ll_backend__global_data__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 616 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_13_13, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_8[0]));
#line 616 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_13_13, 1) = ((MR_Box) (ll_backend__global_data__add_all_vector_static_cells_for_type_5_p_0_1));
#line 616 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 616 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_13_13, 3) = ((MR_Box) (ll_backend__global_data__TypeNum_7));
#line 616 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_13_13, 4) = ((MR_Box) (ll_backend__global_data__CellType_10));
#line 616 "global_data.m"
    }
#line 616 "global_data.m"
    ll_backend__global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__CellGroup_8, (MR_Integer) 0)));
#line 616 "global_data.m"
    ll_backend__global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__CellGroup_8, (MR_Integer) 1)));
#line 616 "global_data.m"
    {
#line 616 "global_data.m"
      mercury__map__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_contents_0, (MR_Word) &ll_backend__global_data_scalar_common_2[2], ll_backend__global_data__V_13_13, ll_backend__global_data__V_14_14, ((MR_Box) (ll_backend__global_data__STATE_VARIABLE_Arrays_0_11)), &ll_backend__global_data__conv2_STATE_VARIABLE_Arrays_12);
    }
#line 616 "global_data.m"
    *ll_backend__global_data__STATE_VARIABLE_Arrays_12 = ((MR_Word) ll_backend__global_data__conv2_STATE_VARIABLE_Arrays_12);
#line 614 "global_data.m"
  }
#line 608 "global_data.m"
}

#line 596 "global_data.m"
static void MR_CALL 
ll_backend__global_data__add_scalar_static_cell_for_type_5_p_0(
#line 596 "global_data.m"
  MR_Word ll_backend__global_data__TypeNumMap_6,
#line 596 "global_data.m"
  MR_Word ll_backend__global_data__TypeNum_7,
#line 596 "global_data.m"
  MR_Word ll_backend__global_data__CellGroup_8,
#line 596 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_Arrays_0_13,
#line 596 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Arrays_14)
#line 596 "global_data.m"
{
#line 602 "global_data.m"
  {
#line 602 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 602 "global_data.m"
    MR_Word ll_backend__global_data__CellType_10;
#line 602 "global_data.m"
    MR_Word ll_backend__global_data__ArrayContents_11;
#line 602 "global_data.m"
    MR_Word ll_backend__global_data__Array_12;
#line 602 "global_data.m"
    MR_Word ll_backend__global_data__V_15_15;
#line 603 "global_data.m"
    MR_Box ll_backend__global_data__conv0_CellType_10;
#line 604 "global_data.m"
    MR_Word ll_backend__global_data__V_17_17;
#line 604 "global_data.m"
    MR_Word ll_backend__global_data__V_18_18;

#line 603 "global_data.m"
    {
#line 603 "global_data.m"
      mercury__bimap__reverse_lookup_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, ll_backend__global_data__TypeNumMap_6, &ll_backend__global_data__conv0_CellType_10, ((MR_Box) (ll_backend__global_data__TypeNum_7)));
    }
#line 603 "global_data.m"
    ll_backend__global_data__CellType_10 = ((MR_Word) ll_backend__global_data__conv0_CellType_10);
#line 604 "global_data.m"
    ll_backend__global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__CellGroup_8, (MR_Integer) 0)));
#line 604 "global_data.m"
    ll_backend__global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__CellGroup_8, (MR_Integer) 1)));
#line 604 "global_data.m"
    ll_backend__global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__CellGroup_8, (MR_Integer) 2)));
#line 604 "global_data.m"
    {
#line 604 "global_data.m"
      mercury__list__reverse_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0, ll_backend__global_data__V_15_15, &ll_backend__global_data__ArrayContents_11);
    }
#line 605 "global_data.m"
    {
#line 605 "global_data.m"
      ll_backend__global_data__Array_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 605 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Array_12, 0) = ((MR_Box) (ll_backend__global_data__CellType_10));
#line 605 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Array_12, 1) = ((MR_Box) (ll_backend__global_data__TypeNum_7));
#line 605 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Array_12, 2) = ((MR_Box) (ll_backend__global_data__ArrayContents_11));
#line 605 "global_data.m"
    }
#line 606 "global_data.m"
    {
#line 606 "global_data.m"
      MR_Word base;
#line 606 "global_data.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 606 "global_data.m"
      *ll_backend__global_data__STATE_VARIABLE_Arrays_14 = base;
#line 606 "global_data.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__global_data__Array_12));
#line 606 "global_data.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__global_data__STATE_VARIABLE_Arrays_0_13));
#line 606 "global_data.m"
    }
#line 602 "global_data.m"
  }
#line 596 "global_data.m"
}

#line 580 "global_data.m"
static MR_Word MR_CALL 
ll_backend__global_data__pair_vector_element_2_f_0(
#line 580 "global_data.m"
  MR_Word ll_backend__global_data__Types_4,
#line 580 "global_data.m"
  MR_Word ll_backend__global_data__Args_5)
#line 580 "global_data.m"
{
#line 582 "global_data.m"
  {
#line 582 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 582 "global_data.m"
    MR_Word ll_backend__global_data__HeadVar__3_3;
#line 582 "global_data.m"
    MR_Word ll_backend__global_data__TypedArgs_6;

#line 583 "global_data.m"
    {
#line 583 "global_data.m"
      ll_backend__llds__build_typed_rvals_3_p_0(ll_backend__global_data__Args_5, ll_backend__global_data__Types_4, &ll_backend__global_data__TypedArgs_6);
    }
#line 582 "global_data.m"
    {
#line 582 "global_data.m"
      ll_backend__global_data__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 582 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, 0) = ((MR_Box) (ll_backend__global_data__TypedArgs_6));
#line 582 "global_data.m"
    }
#line 582 "global_data.m"
    return ll_backend__global_data__HeadVar__3_3;
#line 582 "global_data.m"
  }
#line 580 "global_data.m"
}

#line 576 "global_data.m"
static MR_Word MR_CALL 
ll_backend__global_data__init_vector_cell_group_0_f_0(void)
#line 576 "global_data.m"
{
#line 578 "global_data.m"
  {
#line 578 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 578 "global_data.m"
    MR_Word ll_backend__global_data__HeadVar__1_1;
#line 578 "global_data.m"
    MR_Word ll_backend__global_data__V_2_2;
#line 578 "global_data.m"
    MR_Word ll_backend__global_data__V_4_4;

#line 578 "global_data.m"
    {
#line 578 "global_data.m"
      ll_backend__global_data__V_2_2 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
#line 578 "global_data.m"
    {
#line 578 "global_data.m"
      ll_backend__global_data__V_4_4 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_contents_0);
    }
#line 578 "global_data.m"
    {
#line 578 "global_data.m"
      ll_backend__global_data__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 578 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, 0) = ((MR_Box) (ll_backend__global_data__V_2_2));
#line 578 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, 1) = ((MR_Box) (ll_backend__global_data__V_4_4));
#line 578 "global_data.m"
    }
#line 578 "global_data.m"
    return ll_backend__global_data__HeadVar__1_1;
#line 578 "global_data.m"
  }
#line 576 "global_data.m"
}

#line 491 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data__find_general_llds_types_in_cell_5_p_0(
#line 491 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 491 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 491 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3,
#line 491 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__4_4,
#line 491 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__5_5)
#line 491 "global_data.m"
{
#line 495 "global_data.m"
  {
#line 495 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;

#line 495 "global_data.m"
    if ((ll_backend__global_data__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 495 "global_data.m"
      {
#line 495 "global_data.m"
        ll_backend__global_data__succeeded = (ll_backend__global_data__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 495 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 495 "global_data.m"
          {
#line 495 "global_data.m"
            ll_backend__global_data__succeeded = (ll_backend__global_data__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 495 "global_data.m"
            if (ll_backend__global_data__succeeded)
#line 495 "global_data.m"
              {
#line 495 "global_data.m"
                *ll_backend__global_data__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 495 "global_data.m"
                ll_backend__global_data__succeeded = MR_TRUE;
#line 495 "global_data.m"
              }
#line 495 "global_data.m"
          }
#line 495 "global_data.m"
      }
#line 495 "global_data.m"
    else
#line 497 "global_data.m"
      {
#line 497 "global_data.m"
        MR_Word ll_backend__global_data__Types_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 497 "global_data.m"
        MR_Word ll_backend__global_data__Rval_10;
#line 497 "global_data.m"
        MR_Word ll_backend__global_data__Rvals_11;
#line 497 "global_data.m"
        MR_Word ll_backend__global_data__LLDSType0_12;
#line 497 "global_data.m"
        MR_Word ll_backend__global_data__LLDSTypes0_13;
#line 497 "global_data.m"
        MR_Word ll_backend__global_data__LLDSType_14;
#line 497 "global_data.m"
        MR_Word ll_backend__global_data__LLDSTypes_15;
#line 497 "global_data.m"
        MR_Word ll_backend__global_data__ArgWidth_16;
#line 497 "global_data.m"
        MR_Word ll_backend__global_data__NaturalType_17;
#line 497 "global_data.m"
        MR_Word ll_backend__global_data___Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));

#line 497 "global_data.m"
        ll_backend__global_data__succeeded = ((MR_tag((MR_Word) ll_backend__global_data__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 497 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 497 "global_data.m"
          {
#line 497 "global_data.m"
            ll_backend__global_data__Rval_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 0)));
#line 497 "global_data.m"
            ll_backend__global_data__Rvals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 1)));
#line 497 "global_data.m"
            ll_backend__global_data__succeeded = ((MR_tag((MR_Word) ll_backend__global_data__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 497 "global_data.m"
            if (ll_backend__global_data__succeeded)
#line 497 "global_data.m"
              {
#line 497 "global_data.m"
                ll_backend__global_data__LLDSType0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__HeadVar__4_4, (MR_Integer) 0)));
#line 497 "global_data.m"
                ll_backend__global_data__LLDSTypes0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__HeadVar__4_4, (MR_Integer) 1)));
#line 498 "global_data.m"
                ll_backend__global_data__ArgWidth_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 499 "global_data.m"
                {
#line 499 "global_data.m"
                  ll_backend__global_data__natural_type_4_p_0(ll_backend__global_data__HeadVar__1_1, ll_backend__global_data__ArgWidth_16, ll_backend__global_data__Rval_10, &ll_backend__global_data__NaturalType_17);
                }
#line 511 "global_data.m"
                ll_backend__global_data__succeeded = (ll_backend__global_data__NaturalType_17 == ll_backend__global_data__LLDSType0_12);
#line 514 "global_data.m"
                if (ll_backend__global_data__succeeded)
#line 513 "global_data.m"
                  {
#line 513 "global_data.m"
                    ll_backend__global_data__LLDSType_14 = ll_backend__global_data__LLDSType0_12;
#line 513 "global_data.m"
                    ll_backend__global_data__succeeded = MR_TRUE;
#line 513 "global_data.m"
                  }
#line 514 "global_data.m"
                else
#line 519 "global_data.m"
                  {
#line 515 "global_data.m"
                    ll_backend__global_data__succeeded = (ll_backend__global_data__NaturalType_17 == (MR_Integer) 7);
#line 515 "global_data.m"
                    if (ll_backend__global_data__succeeded)
#line 516 "global_data.m"
                      ll_backend__global_data__succeeded = (ll_backend__global_data__LLDSType0_12 == (MR_Integer) 11);
#line 519 "global_data.m"
                    if (ll_backend__global_data__succeeded)
#line 518 "global_data.m"
                      {
#line 518 "global_data.m"
                        ll_backend__global_data__LLDSType_14 = (MR_Integer) 11;
#line 518 "global_data.m"
                        ll_backend__global_data__succeeded = MR_TRUE;
#line 518 "global_data.m"
                      }
#line 519 "global_data.m"
                    else
#line 524 "global_data.m"
                      {
#line 520 "global_data.m"
                        ll_backend__global_data__succeeded = (ll_backend__global_data__NaturalType_17 == (MR_Integer) 11);
#line 524 "global_data.m"
                        if (ll_backend__global_data__succeeded)
#line 524 "global_data.m"
                          {
#line 521 "global_data.m"
                            ll_backend__global_data__succeeded = (ll_backend__global_data__LLDSType0_12 == (MR_Integer) 7);
#line 524 "global_data.m"
                            if (ll_backend__global_data__succeeded)
#line 524 "global_data.m"
                              {
#line 523 "global_data.m"
                                ll_backend__global_data__LLDSType_14 = (MR_Integer) 11;
#line 523 "global_data.m"
                                ll_backend__global_data__succeeded = MR_TRUE;
#line 524 "global_data.m"
                              }
#line 524 "global_data.m"
                          }
#line 524 "global_data.m"
                      }
#line 519 "global_data.m"
                  }
#line 497 "global_data.m"
                if (ll_backend__global_data__succeeded)
#line 497 "global_data.m"
                  {
#line 527 "global_data.m"
                    {
#line 527 "global_data.m"
                      ll_backend__global_data__succeeded = ll_backend__global_data__find_general_llds_types_in_cell_5_p_0(ll_backend__global_data__HeadVar__1_1, ll_backend__global_data__Types_9, ll_backend__global_data__Rvals_11, ll_backend__global_data__LLDSTypes0_13, &ll_backend__global_data__LLDSTypes_15);
                    }
#line 497 "global_data.m"
                    if (ll_backend__global_data__succeeded)
#line 497 "global_data.m"
                      {
#line 497 "global_data.m"
                        {
#line 497 "global_data.m"
                          MR_Word base;
#line 497 "global_data.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 497 "global_data.m"
                          *ll_backend__global_data__HeadVar__5_5 = base;
#line 497 "global_data.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__global_data__LLDSType_14));
#line 497 "global_data.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__global_data__LLDSTypes_15));
#line 497 "global_data.m"
                        }
#line 497 "global_data.m"
                        ll_backend__global_data__succeeded = MR_TRUE;
#line 497 "global_data.m"
                      }
#line 497 "global_data.m"
                  }
#line 497 "global_data.m"
              }
#line 497 "global_data.m"
          }
#line 497 "global_data.m"
      }
#line 495 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 495 "global_data.m"
  }
#line 491 "global_data.m"
}

#line 482 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data__find_general_llds_types_2_5_p_0(
#line 482 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 482 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 482 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3,
#line 482 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_LLDSTypes_0_4,
#line 482 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_LLDSTypes_5)
#line 482 "global_data.m"
{
#line 486 "global_data.m"
  while (MR_TRUE)
#line 486 "global_data.m"
    {
#line 486 "global_data.m"
      /* tailcall optimized into a loop */
#line 486 "global_data.m"
      {
#line 486 "global_data.m"
        MR_bool ll_backend__global_data__succeeded;

#line 486 "global_data.m"
        if ((ll_backend__global_data__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 486 "global_data.m"
          {
#line 486 "global_data.m"
            *ll_backend__global_data__STATE_VARIABLE_LLDSTypes_5 = ll_backend__global_data__STATE_VARIABLE_LLDSTypes_0_4;
#line 486 "global_data.m"
            ll_backend__global_data__succeeded = MR_TRUE;
#line 486 "global_data.m"
          }
#line 486 "global_data.m"
        else
#line 487 "global_data.m"
          {
#line 487 "global_data.m"
            MR_Word ll_backend__global_data__Vector_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 0)));
#line 487 "global_data.m"
            MR_Word ll_backend__global_data__Vectors_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 1)));
#line 487 "global_data.m"
            MR_Word ll_backend__global_data__STATE_VARIABLE_LLDSTypes_18_18;

#line 488 "global_data.m"
            {
#line 488 "global_data.m"
              ll_backend__global_data__succeeded = ll_backend__global_data__find_general_llds_types_in_cell_5_p_0(ll_backend__global_data__HeadVar__1_1, ll_backend__global_data__HeadVar__2_2, ll_backend__global_data__Vector_13, ll_backend__global_data__STATE_VARIABLE_LLDSTypes_0_4, &ll_backend__global_data__STATE_VARIABLE_LLDSTypes_18_18);
            }
#line 487 "global_data.m"
            if (ll_backend__global_data__succeeded)
#line 489 "global_data.m"
              {
#line 489 "global_data.m"
                /* direct tailcall eliminated */
#line 489 "global_data.m"
                {
#line 489 "global_data.m"
                  MR_Word ll_backend__global_data__HeadVar__3__tmp_copy_3 = ll_backend__global_data__Vectors_14;
#line 489 "global_data.m"
                  MR_Word ll_backend__global_data__STATE_VARIABLE_LLDSTypes_0__tmp_copy_4 = ll_backend__global_data__STATE_VARIABLE_LLDSTypes_18_18;

#line 489 "global_data.m"
                  ll_backend__global_data__STATE_VARIABLE_LLDSTypes_0_4 = ll_backend__global_data__STATE_VARIABLE_LLDSTypes_0__tmp_copy_4;
#line 489 "global_data.m"
                  ll_backend__global_data__HeadVar__3_3 = ll_backend__global_data__HeadVar__3__tmp_copy_3;
#line 489 "global_data.m"
                }
#line 489 "global_data.m"
                continue;
#line 489 "global_data.m"
              }
#line 487 "global_data.m"
          }
#line 486 "global_data.m"
        return ll_backend__global_data__succeeded;
#line 486 "global_data.m"
      }
#line 486 "global_data.m"
      break;
#line 486 "global_data.m"
    }
#line 482 "global_data.m"
}

#line 462 "global_data.m"
static MR_Word MR_CALL 
ll_backend__global_data__init_scalar_cell_group_0_f_0(void)
#line 462 "global_data.m"
{
#line 464 "global_data.m"
  {
#line 464 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 464 "global_data.m"
    MR_Word ll_backend__global_data__HeadVar__1_1;
#line 464 "global_data.m"
    MR_Word ll_backend__global_data__V_2_2;
#line 464 "global_data.m"
    MR_Word ll_backend__global_data__V_4_4;

#line 464 "global_data.m"
    {
#line 464 "global_data.m"
      ll_backend__global_data__V_2_2 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
#line 464 "global_data.m"
    {
#line 464 "global_data.m"
      ll_backend__global_data__V_4_4 = mercury__bimap__init_0_f_0((MR_Word) &ll_backend__global_data_scalar_common_2[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0);
    }
#line 464 "global_data.m"
    {
#line 464 "global_data.m"
      ll_backend__global_data__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 464 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, 0) = ((MR_Box) (ll_backend__global_data__V_2_2));
#line 464 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, 1) = ((MR_Box) (ll_backend__global_data__V_4_4));
#line 464 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 464 "global_data.m"
    }
#line 464 "global_data.m"
    return ll_backend__global_data__HeadVar__1_1;
#line 464 "global_data.m"
  }
#line 462 "global_data.m"
}

#line 384 "global_data.m"
static void MR_CALL 
ll_backend__global_data__do_add_scalar_static_cell_6_p_0(
#line 384 "global_data.m"
  MR_Word ll_backend__global_data__TypedArgs_7,
#line 384 "global_data.m"
  MR_Word ll_backend__global_data__CellType_8,
#line 384 "global_data.m"
  MR_Word ll_backend__global_data__CellValue_9,
#line 384 "global_data.m"
  MR_Word * ll_backend__global_data__DataId_10,
#line 384 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_Info_0_35,
#line 384 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Info_36)
#line 384 "global_data.m"
{
#line 388 "global_data.m"
  {
#line 388 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 388 "global_data.m"
    MR_Word ll_backend__global_data__Args_12;
#line 388 "global_data.m"
    MR_Word ll_backend__global_data__TypeNumMap0_14;
#line 388 "global_data.m"
    MR_Word ll_backend__global_data__CellGroupMap0_15;
#line 388 "global_data.m"
    MR_Word ll_backend__global_data__TypeNum_17;
#line 388 "global_data.m"
    MR_Word ll_backend__global_data__InsertCommonData_22;
#line 388 "global_data.m"
    MR_Word ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38;
#line 388 "global_data.m"
    MR_Word ll_backend__global_data__STATE_VARIABLE_Info_40_40;
#line 388 "global_data.m"
    MR_Word ll_backend__global_data__V_42_42;
#line 388 "global_data.m"
    MR_Word ll_backend__global_data__V_155_155;
#line 388 "global_data.m"
    MR_Word ll_backend__global_data__V_156_156;
#line 391 "global_data.m"
    MR_Word ll_backend__global_data__V_75_75;
#line 391 "global_data.m"
    MR_Word ll_backend__global_data__V_76_76;
#line 391 "global_data.m"
    MR_Word ll_backend__global_data__V_78_78;
#line 402 "global_data.m"
    MR_Word ll_backend__global_data__OldTypeNum_16;
#line 395 "global_data.m"
    MR_Box ll_backend__global_data__conv0_OldTypeNum_16;
#line 414 "global_data.m"
    MR_Word ll_backend__global_data__V_97_97;
#line 414 "global_data.m"
    MR_Word ll_backend__global_data__V_98_98;
#line 414 "global_data.m"
    MR_Word ll_backend__global_data__V_99_99;
#line 414 "global_data.m"
    MR_Word ll_backend__global_data__V_100_100;
#line 414 "global_data.m"
    MR_Word ll_backend__global_data__V_101_101;
#line 414 "global_data.m"
    MR_Word ll_backend__global_data__V_102_102;
#line 442 "global_data.m"
    MR_Word ll_backend__global_data__V_154_154;

#line 389 "global_data.m"
    {
#line 389 "global_data.m"
      ll_backend__global_data__Args_12 = ll_backend__llds__typed_rvals_project_rvals_1_f_0(ll_backend__global_data__TypedArgs_7);
    }
#line 391 "global_data.m"
    ll_backend__global_data__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 0)));
#line 391 "global_data.m"
    ll_backend__global_data__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 1)));
#line 391 "global_data.m"
    ll_backend__global_data__TypeNumMap0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 2)));
#line 391 "global_data.m"
    ll_backend__global_data__CellGroupMap0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 3)));
#line 391 "global_data.m"
    ll_backend__global_data__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 4)));
#line 395 "global_data.m"
    {
#line 395 "global_data.m"
      ll_backend__global_data__succeeded = mercury__bimap__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, ll_backend__global_data__TypeNumMap0_14, ((MR_Box) (ll_backend__global_data__CellType_8)), &ll_backend__global_data__conv0_OldTypeNum_16);
    }
#line 395 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 395 "global_data.m"
      {
#line 395 "global_data.m"
        ll_backend__global_data__OldTypeNum_16 = ((MR_Word) ll_backend__global_data__conv0_OldTypeNum_16);
#line 395 "global_data.m"
        ll_backend__global_data__succeeded = MR_TRUE;
#line 395 "global_data.m"
      }
#line 402 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 396 "global_data.m"
      {
#line 399 "global_data.m"
        MR_Word ll_backend__global_data__STATE_VARIABLE_CellGroup_37_37;
#line 397 "global_data.m"
        MR_Box ll_backend__global_data__conv1_STATE_VARIABLE_CellGroup_37_37;

#line 396 "global_data.m"
        ll_backend__global_data__TypeNum_17 = ll_backend__global_data__OldTypeNum_16;
#line 397 "global_data.m"
        {
#line 397 "global_data.m"
          ll_backend__global_data__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0, ll_backend__global_data__CellGroupMap0_15, ((MR_Box) (ll_backend__global_data__TypeNum_17)), &ll_backend__global_data__conv1_STATE_VARIABLE_CellGroup_37_37);
        }
#line 397 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 397 "global_data.m"
          {
#line 397 "global_data.m"
            ll_backend__global_data__STATE_VARIABLE_CellGroup_37_37 = ((MR_Word) ll_backend__global_data__conv1_STATE_VARIABLE_CellGroup_37_37);
#line 397 "global_data.m"
            ll_backend__global_data__succeeded = MR_TRUE;
#line 397 "global_data.m"
          }
#line 399 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 397 "global_data.m"
          ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38 = ll_backend__global_data__STATE_VARIABLE_CellGroup_37_37;
#line 399 "global_data.m"
        else
#line 400 "global_data.m"
          {
#line 400 "global_data.m"
            ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38 = ll_backend__global_data__init_scalar_cell_group_0_f_0();
          }
#line 400 "global_data.m"
        ll_backend__global_data__STATE_VARIABLE_Info_40_40 = ll_backend__global_data__STATE_VARIABLE_Info_0_35;
#line 396 "global_data.m"
      }
#line 402 "global_data.m"
    else
#line 403 "global_data.m"
      {
#line 403 "global_data.m"
        MR_Word ll_backend__global_data__TypeNumCounter0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 1)));
#line 403 "global_data.m"
        MR_Integer ll_backend__global_data__TypeRawNum_19;
#line 403 "global_data.m"
        MR_Word ll_backend__global_data__TypeNumCounter_20;
#line 403 "global_data.m"
        MR_Word ll_backend__global_data__TypeNumMap_21;
#line 403 "global_data.m"
        MR_Word ll_backend__global_data__STATE_VARIABLE_Info_39_39;
#line 403 "global_data.m"
        MR_Word ll_backend__global_data__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 0)));
#line 403 "global_data.m"
        MR_Word ll_backend__global_data__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 2)));
#line 403 "global_data.m"
        MR_Word ll_backend__global_data__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 3)));
#line 403 "global_data.m"
        MR_Word ll_backend__global_data__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 4)));
#line 406 "global_data.m"
        MR_Word ll_backend__global_data__V_87_87;
#line 406 "global_data.m"
        MR_Word ll_backend__global_data__V_89_89;
#line 406 "global_data.m"
        MR_Word ll_backend__global_data__V_90_90;
#line 406 "global_data.m"
        MR_Word ll_backend__global_data__V_91_91;
#line 406 "global_data.m"
        MR_Word ll_backend__global_data__V_88_88;
#line 409 "global_data.m"
        MR_Word ll_backend__global_data__V_92_92;
#line 409 "global_data.m"
        MR_Word ll_backend__global_data__V_93_93;
#line 409 "global_data.m"
        MR_Word ll_backend__global_data__V_95_95;
#line 409 "global_data.m"
        MR_Word ll_backend__global_data__V_96_96;
#line 409 "global_data.m"
        MR_Word ll_backend__global_data__V_94_94;

#line 404 "global_data.m"
        {
#line 404 "global_data.m"
          mercury__counter__allocate_3_p_0(&ll_backend__global_data__TypeRawNum_19, ll_backend__global_data__TypeNumCounter0_18, &ll_backend__global_data__TypeNumCounter_20);
        }
#line 405 "global_data.m"
        ll_backend__global_data__TypeNum_17 = (MR_Word) ll_backend__global_data__TypeRawNum_19;
#line 406 "global_data.m"
        ll_backend__global_data__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 0)));
#line 406 "global_data.m"
        ll_backend__global_data__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 1)));
#line 406 "global_data.m"
        ll_backend__global_data__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 2)));
#line 406 "global_data.m"
        ll_backend__global_data__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 3)));
#line 406 "global_data.m"
        ll_backend__global_data__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 4)));
#line 406 "global_data.m"
        {
#line 406 "global_data.m"
          ll_backend__global_data__STATE_VARIABLE_Info_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 406 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_39_39, 0) = ((MR_Box) (ll_backend__global_data__V_87_87));
#line 406 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_39_39, 1) = ((MR_Box) (ll_backend__global_data__TypeNumCounter_20));
#line 406 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_39_39, 2) = ((MR_Box) (ll_backend__global_data__V_89_89));
#line 406 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_39_39, 3) = ((MR_Box) (ll_backend__global_data__V_90_90));
#line 406 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_39_39, 4) = ((MR_Box) (ll_backend__global_data__V_91_91));
#line 406 "global_data.m"
        }
#line 408 "global_data.m"
        {
#line 408 "global_data.m"
          mercury__bimap__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, ((MR_Box) (ll_backend__global_data__CellType_8)), ((MR_Box) (ll_backend__global_data__TypeNum_17)), ll_backend__global_data__TypeNumMap0_14, &ll_backend__global_data__TypeNumMap_21);
        }
#line 409 "global_data.m"
        ll_backend__global_data__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_39_39, (MR_Integer) 0)));
#line 409 "global_data.m"
        ll_backend__global_data__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_39_39, (MR_Integer) 1)));
#line 409 "global_data.m"
        ll_backend__global_data__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_39_39, (MR_Integer) 2)));
#line 409 "global_data.m"
        ll_backend__global_data__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_39_39, (MR_Integer) 3)));
#line 409 "global_data.m"
        ll_backend__global_data__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_39_39, (MR_Integer) 4)));
#line 409 "global_data.m"
        {
#line 409 "global_data.m"
          ll_backend__global_data__STATE_VARIABLE_Info_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 409 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, 0) = ((MR_Box) (ll_backend__global_data__V_92_92));
#line 409 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, 1) = ((MR_Box) (ll_backend__global_data__V_93_93));
#line 409 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, 2) = ((MR_Box) (ll_backend__global_data__TypeNumMap_21));
#line 409 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, 3) = ((MR_Box) (ll_backend__global_data__V_95_95));
#line 409 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, 4) = ((MR_Box) (ll_backend__global_data__V_96_96));
#line 409 "global_data.m"
        }
#line 411 "global_data.m"
        {
#line 411 "global_data.m"
          ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38 = ll_backend__global_data__init_scalar_cell_group_0_f_0();
        }
#line 403 "global_data.m"
      }
#line 414 "global_data.m"
    ll_backend__global_data__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 0)));
#line 414 "global_data.m"
    ll_backend__global_data__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 1)));
#line 414 "global_data.m"
    ll_backend__global_data__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 2)));
#line 414 "global_data.m"
    ll_backend__global_data__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 3)));
#line 414 "global_data.m"
    ll_backend__global_data__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 4)));
#line 414 "global_data.m"
    ll_backend__global_data__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_42_42, (MR_Integer) 0)));
#line 414 "global_data.m"
    ll_backend__global_data__V_102_102 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_42_42, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 414 "global_data.m"
    ll_backend__global_data__InsertCommonData_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_42_42, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 442 "global_data.m"
    ll_backend__global_data__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 0)));
#line 442 "global_data.m"
    ll_backend__global_data__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 1)));
#line 442 "global_data.m"
    ll_backend__global_data__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 2)));
#line 440 "global_data.m"
    if ((ll_backend__global_data__InsertCommonData_22 == (MR_Integer) 0))
#line 445 "global_data.m"
      {
#line 445 "global_data.m"
        MR_Word ll_backend__global_data__DataIdPrime_34;
#line 443 "global_data.m"
        MR_Box ll_backend__global_data__conv2_DataIdPrime_34;

#line 443 "global_data.m"
        {
#line 443 "global_data.m"
          ll_backend__global_data__succeeded = mercury__bimap__search_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0, ll_backend__global_data__V_155_155, ((MR_Box) (ll_backend__global_data__Args_12)), &ll_backend__global_data__conv2_DataIdPrime_34);
        }
#line 443 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 443 "global_data.m"
          {
#line 443 "global_data.m"
            ll_backend__global_data__DataIdPrime_34 = ((MR_Word) ll_backend__global_data__conv2_DataIdPrime_34);
#line 443 "global_data.m"
            ll_backend__global_data__succeeded = MR_TRUE;
#line 443 "global_data.m"
          }
#line 445 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 444 "global_data.m"
          {
#line 444 "global_data.m"
            *ll_backend__global_data__DataId_10 = ll_backend__global_data__DataIdPrime_34;
#line 444 "global_data.m"
            *ll_backend__global_data__STATE_VARIABLE_Info_36 = ll_backend__global_data__STATE_VARIABLE_Info_40_40;
#line 444 "global_data.m"
          }
#line 445 "global_data.m"
        else
#line 446 "global_data.m"
          {
#line 446 "global_data.m"
            MR_Word ll_backend__global_data__CellNumCounter0_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 0)));
#line 446 "global_data.m"
            MR_Integer ll_backend__global_data__CellNum_54;
#line 446 "global_data.m"
            MR_Word ll_backend__global_data__CellNumCounter_55;
#line 446 "global_data.m"
            MR_Word ll_backend__global_data__RevArray0_56;
#line 446 "global_data.m"
            MR_Word ll_backend__global_data__RevArray_57;
#line 446 "global_data.m"
            MR_Word ll_backend__global_data__CellGroupMap_58;
#line 446 "global_data.m"
            MR_Word ll_backend__global_data__STATE_VARIABLE_CellGroup_48_59;
#line 446 "global_data.m"
            MR_Word ll_backend__global_data__V_128_128;
#line 446 "global_data.m"
            MR_Word ll_backend__global_data__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 1)));
#line 446 "global_data.m"
            MR_Word ll_backend__global_data__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 2)));
#line 448 "global_data.m"
            MR_Word ll_backend__global_data__V_127_127;
#line 457 "global_data.m"
            MR_Word ll_backend__global_data__V_135_135;
#line 457 "global_data.m"
            MR_Word ll_backend__global_data__V_136_136;
#line 457 "global_data.m"
            MR_Word ll_backend__global_data__V_137_137;
#line 457 "global_data.m"
            MR_Word ll_backend__global_data__V_139_139;
#line 457 "global_data.m"
            MR_Word ll_backend__global_data__V_138_138;

#line 447 "global_data.m"
            {
#line 447 "global_data.m"
              mercury__counter__allocate_3_p_0(&ll_backend__global_data__CellNum_54, ll_backend__global_data__CellNumCounter0_53, &ll_backend__global_data__CellNumCounter_55);
            }
#line 448 "global_data.m"
            ll_backend__global_data__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 0)));
#line 448 "global_data.m"
            ll_backend__global_data__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 1)));
#line 448 "global_data.m"
            ll_backend__global_data__RevArray0_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 2)));
#line 449 "global_data.m"
            {
#line 449 "global_data.m"
              MR_Word base;
#line 449 "global_data.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "global_data.m"
              *ll_backend__global_data__DataId_10 = base;
#line 449 "global_data.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__global_data__TypeNum_17));
#line 449 "global_data.m"
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__global_data__CellNum_54));
#line 449 "global_data.m"
            }
#line 451 "global_data.m"
            {
#line 451 "global_data.m"
              ll_backend__global_data__RevArray_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 451 "global_data.m"
              MR_hl_field(MR_mktag(1), ll_backend__global_data__RevArray_57, 0) = ((MR_Box) (ll_backend__global_data__CellValue_9));
#line 451 "global_data.m"
              MR_hl_field(MR_mktag(1), ll_backend__global_data__RevArray_57, 1) = ((MR_Box) (ll_backend__global_data__RevArray0_56));
#line 451 "global_data.m"
            }
#line 452 "global_data.m"
            {
#line 452 "global_data.m"
              ll_backend__global_data__STATE_VARIABLE_CellGroup_48_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 452 "global_data.m"
              MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_48_59, 0) = ((MR_Box) (ll_backend__global_data__CellNumCounter_55));
#line 452 "global_data.m"
              MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_48_59, 1) = ((MR_Box) (ll_backend__global_data__V_128_128));
#line 452 "global_data.m"
              MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_48_59, 2) = ((MR_Box) (ll_backend__global_data__RevArray_57));
#line 452 "global_data.m"
            }
#line 456 "global_data.m"
            {
#line 456 "global_data.m"
              mercury__map__set_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0, ((MR_Box) (ll_backend__global_data__TypeNum_17)), ((MR_Box) (ll_backend__global_data__STATE_VARIABLE_CellGroup_48_59)), ll_backend__global_data__CellGroupMap0_15, &ll_backend__global_data__CellGroupMap_58);
            }
#line 457 "global_data.m"
            ll_backend__global_data__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 0)));
#line 457 "global_data.m"
            ll_backend__global_data__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 1)));
#line 457 "global_data.m"
            ll_backend__global_data__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 2)));
#line 457 "global_data.m"
            ll_backend__global_data__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 3)));
#line 457 "global_data.m"
            ll_backend__global_data__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 4)));
#line 457 "global_data.m"
            {
#line 457 "global_data.m"
              MR_Word base;
#line 457 "global_data.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 457 "global_data.m"
              *ll_backend__global_data__STATE_VARIABLE_Info_36 = base;
#line 457 "global_data.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__V_135_135));
#line 457 "global_data.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__V_136_136));
#line 457 "global_data.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__V_137_137));
#line 457 "global_data.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__CellGroupMap_58));
#line 457 "global_data.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__V_139_139));
#line 457 "global_data.m"
            }
#line 446 "global_data.m"
          }
#line 445 "global_data.m"
      }
#line 440 "global_data.m"
    else
#line 416 "global_data.m"
      {
#line 416 "global_data.m"
        MR_Integer ll_backend__global_data__CellNum_25;
#line 416 "global_data.m"
        MR_Word ll_backend__global_data__CellNumCounter_26;
#line 416 "global_data.m"
        MR_Word ll_backend__global_data__NewDataId_27;
#line 416 "global_data.m"
        MR_Word ll_backend__global_data__MaybeOldDataId_28;
#line 416 "global_data.m"
        MR_Word ll_backend__global_data__MembersMap_29;

#line 419 "global_data.m"
        {
#line 419 "global_data.m"
          mercury__counter__allocate_3_p_0(&ll_backend__global_data__CellNum_25, ll_backend__global_data__V_156_156, &ll_backend__global_data__CellNumCounter_26);
        }
#line 420 "global_data.m"
        {
#line 420 "global_data.m"
          ll_backend__global_data__NewDataId_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 420 "global_data.m"
          MR_hl_field(MR_mktag(2), ll_backend__global_data__NewDataId_27, 0) = ((MR_Box) (ll_backend__global_data__TypeNum_17));
#line 420 "global_data.m"
          MR_hl_field(MR_mktag(2), ll_backend__global_data__NewDataId_27, 1) = ((MR_Box) (ll_backend__global_data__CellNum_25));
#line 420 "global_data.m"
        }
#line 422 "global_data.m"
        {
#line 422 "global_data.m"
          mercury__bimap__search_insert_5_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0, ((MR_Box) (ll_backend__global_data__Args_12)), ((MR_Box) (ll_backend__global_data__NewDataId_27)), &ll_backend__global_data__MaybeOldDataId_28, ll_backend__global_data__V_155_155, &ll_backend__global_data__MembersMap_29);
        }
#line 429 "global_data.m"
        if ((ll_backend__global_data__MaybeOldDataId_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 430 "global_data.m"
          {
#line 430 "global_data.m"
            MR_Word ll_backend__global_data__RevArray0_31;
#line 430 "global_data.m"
            MR_Word ll_backend__global_data__RevArray_32;
#line 430 "global_data.m"
            MR_Word ll_backend__global_data__CellGroupMap_33;
#line 430 "global_data.m"
            MR_Word ll_backend__global_data__STATE_VARIABLE_CellGroup_48_50;
#line 430 "global_data.m"
            MR_Word ll_backend__global_data__V_109_109;
#line 430 "global_data.m"
            MR_Word ll_backend__global_data__V_110_110;
#line 432 "global_data.m"
            MR_Word ll_backend__global_data__V_107_107;
#line 432 "global_data.m"
            MR_Word ll_backend__global_data__V_108_108;
#line 438 "global_data.m"
            MR_Word ll_backend__global_data__V_118_118;
#line 438 "global_data.m"
            MR_Word ll_backend__global_data__V_119_119;
#line 438 "global_data.m"
            MR_Word ll_backend__global_data__V_120_120;
#line 438 "global_data.m"
            MR_Word ll_backend__global_data__V_122_122;
#line 438 "global_data.m"
            MR_Word ll_backend__global_data__V_121_121;

#line 431 "global_data.m"
            *ll_backend__global_data__DataId_10 = ll_backend__global_data__NewDataId_27;
#line 432 "global_data.m"
            ll_backend__global_data__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 0)));
#line 432 "global_data.m"
            ll_backend__global_data__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 1)));
#line 432 "global_data.m"
            ll_backend__global_data__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 2)));
#line 433 "global_data.m"
            ll_backend__global_data__V_110_110 = ll_backend__global_data__CellNumCounter_26;
#line 433 "global_data.m"
            ll_backend__global_data__RevArray0_31 = ll_backend__global_data__V_109_109;
#line 435 "global_data.m"
            {
#line 435 "global_data.m"
              ll_backend__global_data__RevArray_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 435 "global_data.m"
              MR_hl_field(MR_mktag(1), ll_backend__global_data__RevArray_32, 0) = ((MR_Box) (ll_backend__global_data__CellValue_9));
#line 435 "global_data.m"
              MR_hl_field(MR_mktag(1), ll_backend__global_data__RevArray_32, 1) = ((MR_Box) (ll_backend__global_data__RevArray0_31));
#line 435 "global_data.m"
            }
#line 436 "global_data.m"
            {
#line 436 "global_data.m"
              ll_backend__global_data__STATE_VARIABLE_CellGroup_48_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 436 "global_data.m"
              MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_48_50, 0) = ((MR_Box) (ll_backend__global_data__V_110_110));
#line 436 "global_data.m"
              MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_48_50, 1) = ((MR_Box) (ll_backend__global_data__MembersMap_29));
#line 436 "global_data.m"
              MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_48_50, 2) = ((MR_Box) (ll_backend__global_data__RevArray_32));
#line 436 "global_data.m"
            }
#line 437 "global_data.m"
            {
#line 437 "global_data.m"
              mercury__map__set_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0, ((MR_Box) (ll_backend__global_data__TypeNum_17)), ((MR_Box) (ll_backend__global_data__STATE_VARIABLE_CellGroup_48_50)), ll_backend__global_data__CellGroupMap0_15, &ll_backend__global_data__CellGroupMap_33);
            }
#line 438 "global_data.m"
            ll_backend__global_data__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 0)));
#line 438 "global_data.m"
            ll_backend__global_data__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 1)));
#line 438 "global_data.m"
            ll_backend__global_data__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 2)));
#line 438 "global_data.m"
            ll_backend__global_data__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 3)));
#line 438 "global_data.m"
            ll_backend__global_data__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 4)));
#line 438 "global_data.m"
            {
#line 438 "global_data.m"
              MR_Word base;
#line 438 "global_data.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 438 "global_data.m"
              *ll_backend__global_data__STATE_VARIABLE_Info_36 = base;
#line 438 "global_data.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__V_118_118));
#line 438 "global_data.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__V_119_119));
#line 438 "global_data.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__V_120_120));
#line 438 "global_data.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__CellGroupMap_33));
#line 438 "global_data.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__V_122_122));
#line 438 "global_data.m"
            }
#line 430 "global_data.m"
          }
#line 429 "global_data.m"
        else
#line 425 "global_data.m"
          {
#line 425 "global_data.m"
            *ll_backend__global_data__DataId_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__MaybeOldDataId_28, (MR_Integer) 0)));
#line 428 "global_data.m"
            *ll_backend__global_data__STATE_VARIABLE_Info_36 = ll_backend__global_data__STATE_VARIABLE_Info_40_40;
#line 425 "global_data.m"
          }
#line 416 "global_data.m"
      }
#line 388 "global_data.m"
  }
#line 384 "global_data.m"
}

#line 281 "global_data.m"
static void MR_CALL 
ll_backend__global_data__make_alloc_id_map_5_p_0(
#line 281 "global_data.m"
  MR_Word ll_backend__global_data__AllocSite_6,
#line 281 "global_data.m"
  MR_Integer ll_backend__global_data__Slot_7,
#line 281 "global_data.m"
  MR_Integer * ll_backend__global_data__HeadVar__3_3,
#line 281 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_Map_0_11,
#line 281 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Map_12)
#line 281 "global_data.m"
{
#line 285 "global_data.m"
  {
#line 285 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 285 "global_data.m"
    MR_Word ll_backend__global_data__AllocId_9;
#line 285 "global_data.m"
    MR_Word ll_backend__global_data__ArraySlot_10;

#line 285 "global_data.m"
    *ll_backend__global_data__HeadVar__3_3 = (ll_backend__global_data__Slot_7 + (MR_Integer) 1);
#line 286 "global_data.m"
    ll_backend__global_data__AllocId_9 = (MR_Word) ll_backend__global_data__AllocSite_6;
#line 287 "global_data.m"
    {
#line 287 "global_data.m"
      ll_backend__global_data__ArraySlot_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 287 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__ArraySlot_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17))));
#line 287 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__ArraySlot_10, 1) = ((MR_Box) (ll_backend__global_data__Slot_7));
#line 287 "global_data.m"
    }
#line 288 "global_data.m"
    {
#line 288 "global_data.m"
      mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_alloc_site_id_0, (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0, ((MR_Box) (ll_backend__global_data__AllocId_9)), ((MR_Box) (ll_backend__global_data__ArraySlot_10)), ll_backend__global_data__STATE_VARIABLE_Map_0_11, ll_backend__global_data__STATE_VARIABLE_Map_12);
#line 288 "global_data.m"
      return;
    }
#line 285 "global_data.m"
  }
#line 281 "global_data.m"
}

#line 1027 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_references_to_global_data_3_p_0_1(
#line 1027 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 1027 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 1027 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2)
#line 1027 "global_data.m"
{
#line 1027 "global_data.m"
  {
#line 1027 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 1027 "global_data.m"
    MR_Word ll_backend__global_data__conv0_STATE_VARIABLE_Instr_10;

#line 1027 "global_data.m"
    {
#line 1027 "global_data.m"
      ll_backend__global_data__remap_instruction_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv0_STATE_VARIABLE_Instr_10);
    }
#line 1027 "global_data.m"
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv0_STATE_VARIABLE_Instr_10));
#line 1027 "global_data.m"
  }
#line 1027 "global_data.m"
}

#line 148 "global_data.m"
void MR_CALL 
ll_backend__global_data__remap_references_to_global_data_3_p_0(
#line 148 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 148 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_Procedure_0_8,
#line 148 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Procedure_9)
#line 148 "global_data.m"
{
#line 1025 "global_data.m"
  {
#line 1025 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 1025 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_31_31;
#line 1025 "global_data.m"
    MR_Word ll_backend__global_data__Code0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 4)));
#line 1025 "global_data.m"
    MR_Word ll_backend__global_data__Code_7;
#line 1025 "global_data.m"
    MR_Word ll_backend__global_data__V_10_10;
#line 1026 "global_data.m"
    MR_String ll_backend__global_data__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 0)));
#line 1026 "global_data.m"
    MR_Integer ll_backend__global_data__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 1)));
#line 1026 "global_data.m"
    MR_Word ll_backend__global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 2)));
#line 1026 "global_data.m"
    MR_Word ll_backend__global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 3)));
#line 1026 "global_data.m"
    MR_Word ll_backend__global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 5)));
#line 1026 "global_data.m"
    MR_Word ll_backend__global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 6)));
#line 1026 "global_data.m"
    MR_Word ll_backend__global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 7)));
#line 1026 "global_data.m"
    MR_Word ll_backend__global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 8)));
#line 1028 "global_data.m"
    MR_String ll_backend__global_data__V_20_20;
#line 1028 "global_data.m"
    MR_Integer ll_backend__global_data__V_21_21;
#line 1028 "global_data.m"
    MR_Word ll_backend__global_data__V_22_22;
#line 1028 "global_data.m"
    MR_Word ll_backend__global_data__V_23_23;
#line 1028 "global_data.m"
    MR_Word ll_backend__global_data__V_25_25;
#line 1028 "global_data.m"
    MR_Word ll_backend__global_data__V_26_26;
#line 1028 "global_data.m"
    MR_Word ll_backend__global_data__V_27_27;
#line 1028 "global_data.m"
    MR_Word ll_backend__global_data__V_28_28;
#line 1028 "global_data.m"
    MR_Word ll_backend__global_data__V_24_24;

#line 1027 "global_data.m"
    {
#line 1027 "global_data.m"
      ll_backend__global_data__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1027 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_10_10, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[1]));
#line 1027 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_10_10, 1) = ((MR_Box) (ll_backend__global_data__remap_references_to_global_data_3_p_0_1));
#line 1027 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1027 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_10_10, 3) = ((MR_Box) (ll_backend__global_data__Remap_4));
#line 1027 "global_data.m"
    }
#line 11845 "ll_backend.global_data.c"
    ll_backend__global_data__TypeCtorInfo_31_31 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 1027 "global_data.m"
    {
#line 1027 "global_data.m"
      mercury__list__map_3_p_0(ll_backend__global_data__TypeCtorInfo_31_31, ll_backend__global_data__TypeCtorInfo_31_31, ll_backend__global_data__V_10_10, ll_backend__global_data__Code0_6, &ll_backend__global_data__Code_7);
    }
#line 1028 "global_data.m"
    ll_backend__global_data__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 0)));
#line 1028 "global_data.m"
    ll_backend__global_data__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 1)));
#line 1028 "global_data.m"
    ll_backend__global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 2)));
#line 1028 "global_data.m"
    ll_backend__global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 3)));
#line 1028 "global_data.m"
    ll_backend__global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 4)));
#line 1028 "global_data.m"
    ll_backend__global_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 5)));
#line 1028 "global_data.m"
    ll_backend__global_data__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 6)));
#line 1028 "global_data.m"
    ll_backend__global_data__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 7)));
#line 1028 "global_data.m"
    ll_backend__global_data__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 8)));
#line 1028 "global_data.m"
    {
#line 1028 "global_data.m"
      MR_Word base;
#line 1028 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 1028 "global_data.m"
      *ll_backend__global_data__STATE_VARIABLE_Procedure_9 = base;
#line 1028 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__V_20_20));
#line 1028 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__V_21_21));
#line 1028 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__V_22_22));
#line 1028 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__V_23_23));
#line 1028 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__Code_7));
#line 1028 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__global_data__V_25_25));
#line 1028 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__global_data__V_26_26));
#line 1028 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__global_data__V_27_27));
#line 1028 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__global_data__V_28_28));
#line 1028 "global_data.m"
    }
#line 1025 "global_data.m"
  }
#line 148 "global_data.m"
}

#line 141 "global_data.m"
void MR_CALL 
ll_backend__global_data__merge_global_datas_4_p_0(
#line 141 "global_data.m"
  MR_Word ll_backend__global_data__GlobalDataA_5,
#line 141 "global_data.m"
  MR_Word ll_backend__global_data__GlobalDataB_6,
#line 141 "global_data.m"
  MR_Word * ll_backend__global_data__GlobalData_7,
#line 141 "global_data.m"
  MR_Word * ll_backend__global_data__GlobalDataRemap_8)
#line 141 "global_data.m"
{
#line 739 "global_data.m"
  {
#line 739 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 739 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 739 "global_data.m"
    MR_Word ll_backend__global_data__ProcVarMapA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataA_5, (MR_Integer) 0)));
#line 739 "global_data.m"
    MR_Word ll_backend__global_data__ProcLayoutMapA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataA_5, (MR_Integer) 1)));
#line 739 "global_data.m"
    MR_Word ll_backend__global_data__ClosureLayoutsA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataA_5, (MR_Integer) 2)));
#line 739 "global_data.m"
    MR_Integer ll_backend__global_data__TSStringSlotCounterA_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataA_5, (MR_Integer) 3)));
#line 739 "global_data.m"
    MR_Word ll_backend__global_data__TSRevStringTableA_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataA_5, (MR_Integer) 4)));
#line 739 "global_data.m"
    MR_Word ll_backend__global_data__StaticCellInfoA_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataA_5, (MR_Integer) 5)));
#line 739 "global_data.m"
    MR_Word ll_backend__global_data__AllocSitesA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataA_5, (MR_Integer) 6)));
#line 739 "global_data.m"
    MR_Word ll_backend__global_data__ProcVarMapB_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataB_6, (MR_Integer) 0)));
#line 739 "global_data.m"
    MR_Word ll_backend__global_data__ProcLayoutMapB_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataB_6, (MR_Integer) 1)));
#line 739 "global_data.m"
    MR_Word ll_backend__global_data__ClosureLayoutsB_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataB_6, (MR_Integer) 2)));
#line 739 "global_data.m"
    MR_Integer ll_backend__global_data__TSStringSlotCounterB_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataB_6, (MR_Integer) 3)));
#line 739 "global_data.m"
    MR_Word ll_backend__global_data__TSRevStringTableB_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataB_6, (MR_Integer) 4)));
#line 739 "global_data.m"
    MR_Word ll_backend__global_data__StaticCellInfoB_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataB_6, (MR_Integer) 5)));
#line 739 "global_data.m"
    MR_Word ll_backend__global_data__AllocSitesB_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataB_6, (MR_Integer) 6)));
#line 739 "global_data.m"
    MR_Word ll_backend__global_data__ProcVarMap_23;
#line 739 "global_data.m"
    MR_Word ll_backend__global_data__ProcLayoutMap_24;
#line 739 "global_data.m"
    MR_Word ll_backend__global_data__ClosureLayouts_25;
#line 739 "global_data.m"
    MR_Word ll_backend__global_data__TSRevStringTable_26;
#line 739 "global_data.m"
    MR_Integer ll_backend__global_data__TSStringSlotCounter_27;
#line 739 "global_data.m"
    MR_Word ll_backend__global_data__MaybeTSStringTableRemap_28;
#line 739 "global_data.m"
    MR_Word ll_backend__global_data__StaticCellInfo_29;
#line 739 "global_data.m"
    MR_Word ll_backend__global_data__StaticCellRemap_30;
#line 739 "global_data.m"
    MR_Word ll_backend__global_data__AllocSites_31;

#line 746 "global_data.m"
    {
#line 746 "global_data.m"
      ll_backend__global_data__ProcVarMap_23 = mercury__map__old_merge_2_f_0(ll_backend__global_data__TypeCtorInfo_32_32, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_tabling_info_struct_0, ll_backend__global_data__ProcVarMapA_9, ll_backend__global_data__ProcVarMapB_16);
    }
#line 747 "global_data.m"
    {
#line 747 "global_data.m"
      ll_backend__global_data__ProcLayoutMap_24 = mercury__map__old_merge_2_f_0(ll_backend__global_data__TypeCtorInfo_32_32, (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_info_0, ll_backend__global_data__ProcLayoutMapA_10, ll_backend__global_data__ProcLayoutMapB_17);
    }
#line 748 "global_data.m"
    {
#line 748 "global_data.m"
      ll_backend__global_data__ClosureLayouts_25 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_closure_proc_id_data_0, ll_backend__global_data__ClosureLayoutsA_11, ll_backend__global_data__ClosureLayoutsB_18);
    }
#line 773 "global_data.m"
    if ((ll_backend__global_data__TSRevStringTableA_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 773 "global_data.m"
      if ((ll_backend__global_data__TSRevStringTableB_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 773 "global_data.m"
        {
#line 773 "global_data.m"
          ll_backend__global_data__TSRevStringTable_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 773 "global_data.m"
          ll_backend__global_data__TSStringSlotCounter_27 = (MR_Integer) 0;
#line 773 "global_data.m"
          ll_backend__global_data__MaybeTSStringTableRemap_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 773 "global_data.m"
        }
#line 773 "global_data.m"
      else
#line 774 "global_data.m"
        {
#line 774 "global_data.m"
          ll_backend__global_data__TSRevStringTable_26 = ll_backend__global_data__TSRevStringTableB_20;
#line 774 "global_data.m"
          ll_backend__global_data__TSStringSlotCounter_27 = ll_backend__global_data__TSStringSlotCounterB_19;
#line 774 "global_data.m"
          ll_backend__global_data__MaybeTSStringTableRemap_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 774 "global_data.m"
        }
#line 773 "global_data.m"
    else
#line 773 "global_data.m"
      if ((ll_backend__global_data__TSRevStringTableB_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 775 "global_data.m"
        {
#line 775 "global_data.m"
          ll_backend__global_data__TSRevStringTable_26 = ll_backend__global_data__TSRevStringTableA_13;
#line 775 "global_data.m"
          ll_backend__global_data__TSStringSlotCounter_27 = ll_backend__global_data__TSStringSlotCounterA_12;
#line 775 "global_data.m"
          ll_backend__global_data__MaybeTSStringTableRemap_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 775 "global_data.m"
        }
#line 773 "global_data.m"
      else
#line 777 "global_data.m"
        {
#line 780 "global_data.m"
          {
#line 780 "global_data.m"
            ll_backend__global_data__TSRevStringTable_26 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__global_data__TSRevStringTableB_20, ll_backend__global_data__TSRevStringTableA_13);
          }
#line 781 "global_data.m"
          ll_backend__global_data__TSStringSlotCounter_27 = (ll_backend__global_data__TSStringSlotCounterA_12 + ll_backend__global_data__TSStringSlotCounterB_19);
#line 777 "global_data.m"
          {
#line 777 "global_data.m"
            ll_backend__global_data__MaybeTSStringTableRemap_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 777 "global_data.m"
            MR_hl_field(MR_mktag(1), ll_backend__global_data__MaybeTSStringTableRemap_28, 0) = ((MR_Box) (ll_backend__global_data__TSStringSlotCounterA_12));
#line 777 "global_data.m"
          }
#line 777 "global_data.m"
        }
#line 752 "global_data.m"
    {
#line 752 "global_data.m"
      ll_backend__global_data__merge_static_cell_infos_4_p_0(ll_backend__global_data__StaticCellInfoA_14, ll_backend__global_data__StaticCellInfoB_21, &ll_backend__global_data__StaticCellInfo_29, &ll_backend__global_data__StaticCellRemap_30);
    }
#line 754 "global_data.m"
    {
#line 754 "global_data.m"
      mercury__set_tree234__union_3_p_0((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0, ll_backend__global_data__AllocSitesA_15, ll_backend__global_data__AllocSitesB_22, &ll_backend__global_data__AllocSites_31);
    }
#line 755 "global_data.m"
    {
#line 755 "global_data.m"
      MR_Word base;
#line 755 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 755 "global_data.m"
      *ll_backend__global_data__GlobalData_7 = base;
#line 755 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__ProcVarMap_23));
#line 755 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__ProcLayoutMap_24));
#line 755 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__ClosureLayouts_25));
#line 755 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__TSStringSlotCounter_27));
#line 755 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__TSRevStringTable_26));
#line 755 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__global_data__StaticCellInfo_29));
#line 755 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__global_data__AllocSites_31));
#line 755 "global_data.m"
    }
#line 757 "global_data.m"
    {
#line 757 "global_data.m"
      MR_Word base;
#line 757 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 757 "global_data.m"
      *ll_backend__global_data__GlobalDataRemap_8 = base;
#line 757 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__MaybeTSStringTableRemap_28));
#line 757 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__StaticCellRemap_30));
#line 757 "global_data.m"
    }
#line 739 "global_data.m"
  }
#line 141 "global_data.m"
}

#line 129 "global_data.m"
void MR_CALL 
ll_backend__global_data__bump_type_num_counter_3_p_0(
#line 129 "global_data.m"
  MR_Integer ll_backend__global_data__Increment_4,
#line 129 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10,
#line 129 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_GlobalData_11)
#line 129 "global_data.m"
{
#line 733 "global_data.m"
  {
#line 733 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 733 "global_data.m"
    MR_Word ll_backend__global_data__Counter0_6;
#line 733 "global_data.m"
    MR_Integer ll_backend__global_data__N_7;
#line 733 "global_data.m"
    MR_Word ll_backend__global_data__Counter_9;
#line 733 "global_data.m"
    MR_Word ll_backend__global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
#line 733 "global_data.m"
    MR_Integer ll_backend__global_data__V_13_13;
#line 733 "global_data.m"
    MR_Word ll_backend__global_data__V_15_15;
#line 733 "global_data.m"
    MR_Word ll_backend__global_data__V_16_16;
#line 733 "global_data.m"
    MR_Word ll_backend__global_data__V_27_27;
#line 733 "global_data.m"
    MR_Word ll_backend__global_data__V_28_28;
#line 733 "global_data.m"
    MR_Word ll_backend__global_data__V_29_29;
#line 733 "global_data.m"
    MR_Integer ll_backend__global_data__V_30_30;
#line 733 "global_data.m"
    MR_Word ll_backend__global_data__V_31_31;
#line 733 "global_data.m"
    MR_Word ll_backend__global_data__V_32_32;
#line 734 "global_data.m"
    MR_Word ll_backend__global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
#line 734 "global_data.m"
    MR_Word ll_backend__global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
#line 734 "global_data.m"
    MR_Word ll_backend__global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
#line 734 "global_data.m"
    MR_Integer ll_backend__global_data__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
#line 734 "global_data.m"
    MR_Word ll_backend__global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
#line 734 "global_data.m"
    MR_Word ll_backend__global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
#line 734 "global_data.m"
    MR_Word ll_backend__global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_12_12, (MR_Integer) 0)));
#line 734 "global_data.m"
    MR_Word ll_backend__global_data__V_24_24;
#line 734 "global_data.m"
    MR_Word ll_backend__global_data__V_25_25;
#line 734 "global_data.m"
    MR_Word ll_backend__global_data__V_26_26;
#line 735 "global_data.m"
    MR_Word ll_backend__global_data__V_8_8;
#line 737 "global_data.m"
    MR_Word ll_backend__global_data__V_33_33;
#line 737 "global_data.m"
    MR_Word ll_backend__global_data__V_35_35;
#line 737 "global_data.m"
    MR_Word ll_backend__global_data__V_36_36;
#line 737 "global_data.m"
    MR_Word ll_backend__global_data__V_37_37;
#line 737 "global_data.m"
    MR_Word ll_backend__global_data__V_34_34;

#line 734 "global_data.m"
    ll_backend__global_data__Counter0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_12_12, (MR_Integer) 1)));
#line 734 "global_data.m"
    ll_backend__global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_12_12, (MR_Integer) 2)));
#line 734 "global_data.m"
    ll_backend__global_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_12_12, (MR_Integer) 3)));
#line 734 "global_data.m"
    ll_backend__global_data__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_12_12, (MR_Integer) 4)));
#line 735 "global_data.m"
    {
#line 735 "global_data.m"
      mercury__counter__allocate_3_p_0(&ll_backend__global_data__N_7, ll_backend__global_data__Counter0_6, &ll_backend__global_data__V_8_8);
    }
#line 736 "global_data.m"
    ll_backend__global_data__V_13_13 = (ll_backend__global_data__N_7 + ll_backend__global_data__Increment_4);
#line 736 "global_data.m"
    {
#line 736 "global_data.m"
      ll_backend__global_data__Counter_9 = mercury__counter__init_1_f_0(ll_backend__global_data__V_13_13);
    }
#line 737 "global_data.m"
    ll_backend__global_data__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
#line 737 "global_data.m"
    ll_backend__global_data__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
#line 737 "global_data.m"
    ll_backend__global_data__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
#line 737 "global_data.m"
    ll_backend__global_data__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
#line 737 "global_data.m"
    ll_backend__global_data__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
#line 737 "global_data.m"
    ll_backend__global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
#line 737 "global_data.m"
    ll_backend__global_data__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
#line 737 "global_data.m"
    ll_backend__global_data__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_15_15, (MR_Integer) 0)));
#line 737 "global_data.m"
    ll_backend__global_data__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_15_15, (MR_Integer) 1)));
#line 737 "global_data.m"
    ll_backend__global_data__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_15_15, (MR_Integer) 2)));
#line 737 "global_data.m"
    ll_backend__global_data__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_15_15, (MR_Integer) 3)));
#line 737 "global_data.m"
    ll_backend__global_data__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_15_15, (MR_Integer) 4)));
#line 737 "global_data.m"
    {
#line 737 "global_data.m"
      ll_backend__global_data__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 737 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_16_16, 0) = ((MR_Box) (ll_backend__global_data__V_33_33));
#line 737 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_16_16, 1) = ((MR_Box) (ll_backend__global_data__Counter_9));
#line 737 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_16_16, 2) = ((MR_Box) (ll_backend__global_data__V_35_35));
#line 737 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_16_16, 3) = ((MR_Box) (ll_backend__global_data__V_36_36));
#line 737 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_16_16, 4) = ((MR_Box) (ll_backend__global_data__V_37_37));
#line 737 "global_data.m"
    }
#line 737 "global_data.m"
    {
#line 737 "global_data.m"
      MR_Word base;
#line 737 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 737 "global_data.m"
      *ll_backend__global_data__STATE_VARIABLE_GlobalData_11 = base;
#line 737 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__V_27_27));
#line 737 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__V_28_28));
#line 737 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__V_29_29));
#line 737 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__V_30_30));
#line 737 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__V_31_31));
#line 737 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__global_data__V_16_16));
#line 737 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__global_data__V_32_32));
#line 737 "global_data.m"
    }
#line 733 "global_data.m"
  }
#line 129 "global_data.m"
}

#line 119 "global_data.m"
MR_Word MR_CALL 
ll_backend__global_data__rval_type_as_arg_3_f_0(
#line 119 "global_data.m"
  MR_Word ll_backend__global_data__UnboxedFloat_5,
#line 119 "global_data.m"
  MR_Word ll_backend__global_data__ArgWidth_6,
#line 119 "global_data.m"
  MR_Word ll_backend__global_data__Rval_7)
#line 119 "global_data.m"
{
#line 693 "global_data.m"
  {
#line 693 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 693 "global_data.m"
    MR_Word ll_backend__global_data__Type_8;

#line 693 "global_data.m"
    {
#line 693 "global_data.m"
      ll_backend__global_data__natural_type_4_p_0(ll_backend__global_data__UnboxedFloat_5, ll_backend__global_data__ArgWidth_6, ll_backend__global_data__Rval_7, &ll_backend__global_data__Type_8);
    }
#line 693 "global_data.m"
    return ll_backend__global_data__Type_8;
#line 693 "global_data.m"
  }
#line 119 "global_data.m"
}

#line 592 "global_data.m"
static void MR_CALL 
ll_backend__global_data__get_static_cells_3_p_0_2(
#line 592 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 592 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 592 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 592 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_3,
#line 592 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_4)
#line 592 "global_data.m"
{
#line 592 "global_data.m"
  {
#line 592 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 592 "global_data.m"
    MR_Word ll_backend__global_data__conv2_STATE_VARIABLE_Arrays_12;

#line 592 "global_data.m"
    {
#line 592 "global_data.m"
      ll_backend__global_data__add_all_vector_static_cells_for_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3), &ll_backend__global_data__conv2_STATE_VARIABLE_Arrays_12);
    }
#line 592 "global_data.m"
    *ll_backend__global_data__wrapper_arg_4 = ((MR_Box) (ll_backend__global_data__conv2_STATE_VARIABLE_Arrays_12));
#line 592 "global_data.m"
  }
#line 592 "global_data.m"
}

#line 589 "global_data.m"
static void MR_CALL 
ll_backend__global_data__get_static_cells_3_p_0_1(
#line 589 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 589 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 589 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 589 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_3,
#line 589 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_4)
#line 589 "global_data.m"
{
#line 589 "global_data.m"
  {
#line 589 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 589 "global_data.m"
    MR_Word ll_backend__global_data__conv0_STATE_VARIABLE_Arrays_14;

#line 589 "global_data.m"
    {
#line 589 "global_data.m"
      ll_backend__global_data__add_scalar_static_cell_for_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3), &ll_backend__global_data__conv0_STATE_VARIABLE_Arrays_14);
    }
#line 589 "global_data.m"
    *ll_backend__global_data__wrapper_arg_4 = ((MR_Box) (ll_backend__global_data__conv0_STATE_VARIABLE_Arrays_14));
#line 589 "global_data.m"
  }
#line 589 "global_data.m"
}

#line 109 "global_data.m"
void MR_CALL 
ll_backend__global_data__get_static_cells_3_p_0(
#line 109 "global_data.m"
  MR_Word ll_backend__global_data__Info_4,
#line 109 "global_data.m"
  MR_Word * ll_backend__global_data__ScalarDatas_5,
#line 109 "global_data.m"
  MR_Word * ll_backend__global_data__VectorDatas_6)
#line 109 "global_data.m"
{
#line 587 "global_data.m"
  {
#line 587 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 587 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_32_32;
#line 587 "global_data.m"
    MR_Word ll_backend__global_data__TypeNumMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_4, (MR_Integer) 2)));
#line 587 "global_data.m"
    MR_Word ll_backend__global_data__RevScalarDatas_8;
#line 587 "global_data.m"
    MR_Word ll_backend__global_data__RevVectorDatas_9;
#line 587 "global_data.m"
    MR_Word ll_backend__global_data__V_10_10;
#line 587 "global_data.m"
    MR_Word ll_backend__global_data__V_13_13;
#line 587 "global_data.m"
    MR_Word ll_backend__global_data__V_14_14;
#line 587 "global_data.m"
    MR_Word ll_backend__global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_4, (MR_Integer) 3)));
#line 588 "global_data.m"
    MR_Word ll_backend__global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_4, (MR_Integer) 0)));
#line 588 "global_data.m"
    MR_Word ll_backend__global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_4, (MR_Integer) 1)));
#line 588 "global_data.m"
    MR_Word ll_backend__global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_4, (MR_Integer) 4)));
#line 589 "global_data.m"
    MR_Box ll_backend__global_data__conv1_RevScalarDatas_8;
#line 592 "global_data.m"
    MR_Word ll_backend__global_data__V_24_24;
#line 592 "global_data.m"
    MR_Word ll_backend__global_data__V_25_25;
#line 592 "global_data.m"
    MR_Word ll_backend__global_data__V_26_26;
#line 592 "global_data.m"
    MR_Word ll_backend__global_data__V_27_27;
#line 592 "global_data.m"
    MR_Box ll_backend__global_data__conv3_RevVectorDatas_9;

#line 589 "global_data.m"
    {
#line 589 "global_data.m"
      ll_backend__global_data__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 589 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_10_10, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_5[1]));
#line 589 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_10_10, 1) = ((MR_Box) (ll_backend__global_data__get_static_cells_3_p_0_1));
#line 589 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 589 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_10_10, 3) = ((MR_Box) (ll_backend__global_data__TypeNumMap_7));
#line 589 "global_data.m"
    }
#line 12423 "ll_backend.global_data.c"
    ll_backend__global_data__TypeCtorInfo_32_32 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;
#line 589 "global_data.m"
    {
#line 589 "global_data.m"
      mercury__map__foldl_4_p_0(ll_backend__global_data__TypeCtorInfo_32_32, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0, (MR_Word) &ll_backend__global_data_scalar_common_2[1], ll_backend__global_data__V_10_10, ll_backend__global_data__V_18_18, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ll_backend__global_data__conv1_RevScalarDatas_8);
    }
#line 589 "global_data.m"
    ll_backend__global_data__RevScalarDatas_8 = ((MR_Word) ll_backend__global_data__conv1_RevScalarDatas_8);
#line 591 "global_data.m"
    {
#line 591 "global_data.m"
      mercury__list__reverse_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_scalar_common_data_array_0, ll_backend__global_data__RevScalarDatas_8, ll_backend__global_data__ScalarDatas_5);
    }
#line 592 "global_data.m"
    {
#line 592 "global_data.m"
      ll_backend__global_data__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 592 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_13_13, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_5[2]));
#line 592 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_13_13, 1) = ((MR_Box) (ll_backend__global_data__get_static_cells_3_p_0_2));
#line 592 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 592 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_13_13, 3) = ((MR_Box) (ll_backend__global_data__TypeNumMap_7));
#line 592 "global_data.m"
    }
#line 592 "global_data.m"
    ll_backend__global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_4, (MR_Integer) 0)));
#line 592 "global_data.m"
    ll_backend__global_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_4, (MR_Integer) 1)));
#line 592 "global_data.m"
    ll_backend__global_data__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_4, (MR_Integer) 2)));
#line 592 "global_data.m"
    ll_backend__global_data__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_4, (MR_Integer) 3)));
#line 592 "global_data.m"
    ll_backend__global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_4, (MR_Integer) 4)));
#line 592 "global_data.m"
    {
#line 592 "global_data.m"
      mercury__map__foldl_4_p_0(ll_backend__global_data__TypeCtorInfo_32_32, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0, (MR_Word) &ll_backend__global_data_scalar_common_2[2], ll_backend__global_data__V_13_13, ll_backend__global_data__V_14_14, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ll_backend__global_data__conv3_RevVectorDatas_9);
    }
#line 592 "global_data.m"
    ll_backend__global_data__RevVectorDatas_9 = ((MR_Word) ll_backend__global_data__conv3_RevVectorDatas_9);
#line 594 "global_data.m"
    {
#line 594 "global_data.m"
      mercury__list__reverse_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_vector_common_data_array_0, ll_backend__global_data__RevVectorDatas_9, ll_backend__global_data__VectorDatas_6);
#line 594 "global_data.m"
      return;
    }
#line 587 "global_data.m"
  }
#line 109 "global_data.m"
}

#line 106 "global_data.m"
MR_bool MR_CALL 
ll_backend__global_data__search_scalar_static_cell_offset_4_p_0(
#line 106 "global_data.m"
  MR_Word ll_backend__global_data__Info_5,
#line 106 "global_data.m"
  MR_Word ll_backend__global_data__DataId_6,
#line 106 "global_data.m"
  MR_Integer ll_backend__global_data__Offset_7,
#line 106 "global_data.m"
  MR_Word * ll_backend__global_data__Rval_8)
#line 106 "global_data.m"
{
#line 466 "global_data.m"
  {
#line 466 "global_data.m"
    MR_bool ll_backend__global_data__succeeded = ((MR_tag((MR_Word) ll_backend__global_data__DataId_6)) == (MR_mktag((MR_Integer) 2)));
#line 466 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_21_21;
#line 466 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_22_22;
#line 466 "global_data.m"
    MR_Word ll_backend__global_data__TypeInfo_23_23;
#line 466 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_24_24;
#line 466 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_25_25;
#line 466 "global_data.m"
    MR_Word ll_backend__global_data__TypeNum_9;
#line 466 "global_data.m"
    MR_Word ll_backend__global_data__CellGroupMap_11;
#line 466 "global_data.m"
    MR_Word ll_backend__global_data__CellGroup_12;
#line 466 "global_data.m"
    MR_Word ll_backend__global_data__CellGroupMembers_13;
#line 466 "global_data.m"
    MR_Word ll_backend__global_data__Rvals_14;
#line 467 "global_data.m"
    MR_Integer ll_backend__global_data___CellNum_10;
#line 468 "global_data.m"
    MR_Word ll_backend__global_data__V_15_15;
#line 468 "global_data.m"
    MR_Word ll_backend__global_data__V_16_16;
#line 468 "global_data.m"
    MR_Word ll_backend__global_data__V_17_17;
#line 468 "global_data.m"
    MR_Word ll_backend__global_data__V_18_18;
#line 469 "global_data.m"
    MR_Box ll_backend__global_data__conv0_CellGroup_12;
#line 470 "global_data.m"
    MR_Word ll_backend__global_data__V_19_19;
#line 470 "global_data.m"
    MR_Word ll_backend__global_data__V_20_20;
#line 471 "global_data.m"
    MR_Box ll_backend__global_data__conv1_Rvals_14;
#line 472 "global_data.m"
    MR_Box ll_backend__global_data__conv2_Rval_8;

#line 467 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 467 "global_data.m"
      {
#line 467 "global_data.m"
        ll_backend__global_data__TypeNum_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__global_data__DataId_6, (MR_Integer) 0)));
#line 467 "global_data.m"
        ll_backend__global_data___CellNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__global_data__DataId_6, (MR_Integer) 1)));
#line 468 "global_data.m"
        ll_backend__global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_5, (MR_Integer) 0)));
#line 468 "global_data.m"
        ll_backend__global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_5, (MR_Integer) 1)));
#line 468 "global_data.m"
        ll_backend__global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_5, (MR_Integer) 2)));
#line 468 "global_data.m"
        ll_backend__global_data__CellGroupMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_5, (MR_Integer) 3)));
#line 468 "global_data.m"
        ll_backend__global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_5, (MR_Integer) 4)));
#line 12556 "ll_backend.global_data.c"
        ll_backend__global_data__TypeCtorInfo_21_21 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;
#line 12558 "ll_backend.global_data.c"
        ll_backend__global_data__TypeCtorInfo_22_22 = (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0;
#line 469 "global_data.m"
        {
#line 469 "global_data.m"
          mercury__map__lookup_3_p_0(ll_backend__global_data__TypeCtorInfo_21_21, ll_backend__global_data__TypeCtorInfo_22_22, ll_backend__global_data__CellGroupMap_11, ((MR_Box) (ll_backend__global_data__TypeNum_9)), &ll_backend__global_data__conv0_CellGroup_12);
        }
#line 469 "global_data.m"
        ll_backend__global_data__CellGroup_12 = ((MR_Word) ll_backend__global_data__conv0_CellGroup_12);
#line 470 "global_data.m"
        ll_backend__global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__CellGroup_12, (MR_Integer) 0)));
#line 470 "global_data.m"
        ll_backend__global_data__CellGroupMembers_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__CellGroup_12, (MR_Integer) 1)));
#line 470 "global_data.m"
        ll_backend__global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__CellGroup_12, (MR_Integer) 2)));
#line 12573 "ll_backend.global_data.c"
        ll_backend__global_data__TypeInfo_23_23 = (MR_Word) &ll_backend__global_data_scalar_common_2[0];
#line 12575 "ll_backend.global_data.c"
        ll_backend__global_data__TypeCtorInfo_24_24 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0;
#line 471 "global_data.m"
        {
#line 471 "global_data.m"
          mercury__bimap__reverse_lookup_3_p_0(ll_backend__global_data__TypeInfo_23_23, ll_backend__global_data__TypeCtorInfo_24_24, ll_backend__global_data__CellGroupMembers_13, &ll_backend__global_data__conv1_Rvals_14, ((MR_Box) (ll_backend__global_data__DataId_6)));
        }
#line 471 "global_data.m"
        ll_backend__global_data__Rvals_14 = ((MR_Word) ll_backend__global_data__conv1_Rvals_14);
#line 12584 "ll_backend.global_data.c"
        ll_backend__global_data__TypeCtorInfo_25_25 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
#line 472 "global_data.m"
        {
#line 472 "global_data.m"
          mercury__list__det_index0_3_p_0(ll_backend__global_data__TypeCtorInfo_25_25, ll_backend__global_data__Rvals_14, ll_backend__global_data__Offset_7, &ll_backend__global_data__conv2_Rval_8);
        }
#line 472 "global_data.m"
        *ll_backend__global_data__Rval_8 = ((MR_Word) ll_backend__global_data__conv2_Rval_8);
#line 472 "global_data.m"
        ll_backend__global_data__succeeded = MR_TRUE;
#line 467 "global_data.m"
      }
#line 466 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 466 "global_data.m"
  }
#line 106 "global_data.m"
}

#line 542 "global_data.m"
static MR_Box MR_CALL 
ll_backend__global_data__add_vector_static_cell_5_p_0_3(
#line 542 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 542 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1)
#line 542 "global_data.m"
{
#line 542 "global_data.m"
  {
#line 542 "global_data.m"
    MR_Box ll_backend__global_data__wrapper_arg_2;
#line 542 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 542 "global_data.m"
    MR_Word ll_backend__global_data__conv0_HeadVar__3_3;

#line 542 "global_data.m"
    {
#line 542 "global_data.m"
      ll_backend__global_data__conv0_HeadVar__3_3 = ll_backend__global_data__pair_vector_element_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1));
    }
#line 542 "global_data.m"
    ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__3_3));
#line 542 "global_data.m"
    return ll_backend__global_data__wrapper_arg_2;
#line 542 "global_data.m"
  }
#line 542 "global_data.m"
}

#line 534 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data__add_vector_static_cell_5_p_0_2(
#line 534 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg)
#line 534 "global_data.m"
{
#line 534 "global_data.m"
  {
#line 534 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 534 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;

#line 534 "global_data.m"
    {
#line 534 "global_data.m"
      return ll_backend__global_data__succeeded = ll_backend__global_data__IntroducedFrom__pred__add_vector_static_cell__534__1_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))));
    }
#line 534 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 534 "global_data.m"
  }
#line 534 "global_data.m"
}

#line 533 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data__add_vector_static_cell_5_p_0_1(
#line 533 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg)
#line 533 "global_data.m"
{
#line 533 "global_data.m"
  {
#line 533 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 533 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;

#line 533 "global_data.m"
    {
#line 533 "global_data.m"
      return ll_backend__global_data__succeeded = ll_backend__global_data__IntroducedFrom__pred__add_vector_static_cell__533__1_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))));
    }
#line 533 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 533 "global_data.m"
  }
#line 533 "global_data.m"
}

#line 102 "global_data.m"
void MR_CALL 
ll_backend__global_data__add_vector_static_cell_5_p_0(
#line 102 "global_data.m"
  MR_Word ll_backend__global_data__LLDSTypes_6,
#line 102 "global_data.m"
  MR_Word ll_backend__global_data__VectorData_7,
#line 102 "global_data.m"
  MR_Word * ll_backend__global_data__DataId_8,
#line 102 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_Info_0_28,
#line 102 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Info_29)
#line 102 "global_data.m"
{
#line 532 "global_data.m"
  {
#line 532 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 532 "global_data.m"
    MR_Word ll_backend__global_data__CellType_10;
#line 532 "global_data.m"
    MR_Word ll_backend__global_data__VectorCells_11;
#line 532 "global_data.m"
    MR_Word ll_backend__global_data__TypeNumMap0_13;
#line 532 "global_data.m"
    MR_Word ll_backend__global_data__CellGroupMap0_14;
#line 532 "global_data.m"
    MR_Word ll_backend__global_data__TypeNum_16;
#line 532 "global_data.m"
    MR_Word ll_backend__global_data__CellNumCounter0_21;
#line 532 "global_data.m"
    MR_Integer ll_backend__global_data__CellNum_22;
#line 532 "global_data.m"
    MR_Word ll_backend__global_data__CellNumCounter_23;
#line 532 "global_data.m"
    MR_Word ll_backend__global_data__CellMap0_24;
#line 532 "global_data.m"
    MR_Word ll_backend__global_data__VectorContents_25;
#line 532 "global_data.m"
    MR_Word ll_backend__global_data__CellMap_26;
#line 532 "global_data.m"
    MR_Word ll_backend__global_data__CellGroupMap_27;
#line 532 "global_data.m"
    MR_Word ll_backend__global_data__V_30_30;
#line 532 "global_data.m"
    MR_Word ll_backend__global_data__V_32_32;
#line 532 "global_data.m"
    MR_Word ll_backend__global_data__V_34_34;
#line 532 "global_data.m"
    MR_Word ll_backend__global_data__STATE_VARIABLE_CellGroup_36_36;
#line 532 "global_data.m"
    MR_Word ll_backend__global_data__STATE_VARIABLE_Info_38_38;
#line 532 "global_data.m"
    MR_Word ll_backend__global_data__STATE_VARIABLE_CellGroup_40_40;
#line 532 "global_data.m"
    MR_Word ll_backend__global_data__STATE_VARIABLE_CellGroup_41_41;
#line 544 "global_data.m"
    MR_Word ll_backend__global_data__V_43_43;
#line 544 "global_data.m"
    MR_Word ll_backend__global_data__V_44_44;
#line 544 "global_data.m"
    MR_Word ll_backend__global_data__V_45_45;
#line 553 "global_data.m"
    MR_Word ll_backend__global_data__TypeNumPrime_15;
#line 546 "global_data.m"
    MR_Box ll_backend__global_data__conv1_TypeNumPrime_15;
#line 564 "global_data.m"
    MR_Word ll_backend__global_data__V_65_65;
#line 566 "global_data.m"
    MR_Word ll_backend__global_data__V_66_66;
#line 571 "global_data.m"
    MR_Word ll_backend__global_data__V_69_69;
#line 571 "global_data.m"
    MR_Word ll_backend__global_data__V_70_70;
#line 573 "global_data.m"
    MR_Word ll_backend__global_data__V_71_71;
#line 573 "global_data.m"
    MR_Word ll_backend__global_data__V_72_72;
#line 573 "global_data.m"
    MR_Word ll_backend__global_data__V_73_73;
#line 573 "global_data.m"
    MR_Word ll_backend__global_data__V_74_74;
#line 573 "global_data.m"
    MR_Word ll_backend__global_data__V_75_75;

#line 533 "global_data.m"
    {
#line 533 "global_data.m"
      ll_backend__global_data__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 533 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_30_30, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_6[0]));
#line 533 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_30_30, 1) = ((MR_Box) (ll_backend__global_data__add_vector_static_cell_5_p_0_1));
#line 533 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 533 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_30_30, 3) = ((MR_Box) (ll_backend__global_data__LLDSTypes_6));
#line 533 "global_data.m"
    }
#line 533 "global_data.m"
    {
#line 533 "global_data.m"
      mercury__require__require_2_p_0(ll_backend__global_data__V_30_30, (MR_String) "add_vector_static_cell: no types");
    }
#line 534 "global_data.m"
    {
#line 534 "global_data.m"
      ll_backend__global_data__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 534 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_32_32, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_6[1]));
#line 534 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_32_32, 1) = ((MR_Box) (ll_backend__global_data__add_vector_static_cell_5_p_0_2));
#line 534 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 534 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_32_32, 3) = ((MR_Box) (ll_backend__global_data__VectorData_7));
#line 534 "global_data.m"
    }
#line 534 "global_data.m"
    {
#line 534 "global_data.m"
      mercury__require__require_2_p_0(ll_backend__global_data__V_32_32, (MR_String) "add_vector_static_cell: no data");
    }
#line 541 "global_data.m"
    {
#line 541 "global_data.m"
      ll_backend__global_data__CellType_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 541 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__CellType_10, 0) = ((MR_Box) (ll_backend__global_data__LLDSTypes_6));
#line 541 "global_data.m"
    }
#line 542 "global_data.m"
    {
#line 542 "global_data.m"
      ll_backend__global_data__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 542 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_34_34, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[0]));
#line 542 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_34_34, 1) = ((MR_Box) (ll_backend__global_data__add_vector_static_cell_5_p_0_3));
#line 542 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 542 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_34_34, 3) = ((MR_Box) (ll_backend__global_data__LLDSTypes_6));
#line 542 "global_data.m"
    }
#line 542 "global_data.m"
    {
#line 542 "global_data.m"
      ll_backend__global_data__VectorCells_11 = mercury__list__map_2_f_0((MR_Word) &ll_backend__global_data_scalar_common_2[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0, ll_backend__global_data__V_34_34, ll_backend__global_data__VectorData_7);
    }
#line 544 "global_data.m"
    ll_backend__global_data__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 0)));
#line 544 "global_data.m"
    ll_backend__global_data__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 1)));
#line 544 "global_data.m"
    ll_backend__global_data__TypeNumMap0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 2)));
#line 544 "global_data.m"
    ll_backend__global_data__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 3)));
#line 544 "global_data.m"
    ll_backend__global_data__CellGroupMap0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 4)));
#line 546 "global_data.m"
    {
#line 546 "global_data.m"
      ll_backend__global_data__succeeded = mercury__bimap__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, ll_backend__global_data__TypeNumMap0_13, ((MR_Box) (ll_backend__global_data__CellType_10)), &ll_backend__global_data__conv1_TypeNumPrime_15);
    }
#line 546 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 546 "global_data.m"
      {
#line 546 "global_data.m"
        ll_backend__global_data__TypeNumPrime_15 = ((MR_Word) ll_backend__global_data__conv1_TypeNumPrime_15);
#line 546 "global_data.m"
        ll_backend__global_data__succeeded = MR_TRUE;
#line 546 "global_data.m"
      }
#line 553 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 547 "global_data.m"
      {
#line 550 "global_data.m"
        MR_Word ll_backend__global_data__STATE_VARIABLE_CellGroup_35_35;
#line 548 "global_data.m"
        MR_Box ll_backend__global_data__conv2_STATE_VARIABLE_CellGroup_35_35;

#line 547 "global_data.m"
        ll_backend__global_data__TypeNum_16 = ll_backend__global_data__TypeNumPrime_15;
#line 548 "global_data.m"
        {
#line 548 "global_data.m"
          ll_backend__global_data__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0, ll_backend__global_data__CellGroupMap0_14, ((MR_Box) (ll_backend__global_data__TypeNum_16)), &ll_backend__global_data__conv2_STATE_VARIABLE_CellGroup_35_35);
        }
#line 548 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 548 "global_data.m"
          {
#line 548 "global_data.m"
            ll_backend__global_data__STATE_VARIABLE_CellGroup_35_35 = ((MR_Word) ll_backend__global_data__conv2_STATE_VARIABLE_CellGroup_35_35);
#line 548 "global_data.m"
            ll_backend__global_data__succeeded = MR_TRUE;
#line 548 "global_data.m"
          }
#line 550 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 548 "global_data.m"
          ll_backend__global_data__STATE_VARIABLE_CellGroup_36_36 = ll_backend__global_data__STATE_VARIABLE_CellGroup_35_35;
#line 550 "global_data.m"
        else
#line 578 "global_data.m"
          {
#line 578 "global_data.m"
            MR_Word ll_backend__global_data__V_92_92;
#line 578 "global_data.m"
            MR_Word ll_backend__global_data__V_94_94;

#line 578 "global_data.m"
            {
#line 578 "global_data.m"
              ll_backend__global_data__V_92_92 = mercury__counter__init_1_f_0((MR_Integer) 0);
            }
#line 578 "global_data.m"
            {
#line 578 "global_data.m"
              ll_backend__global_data__V_94_94 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_contents_0);
            }
#line 578 "global_data.m"
            {
#line 578 "global_data.m"
              ll_backend__global_data__STATE_VARIABLE_CellGroup_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 578 "global_data.m"
              MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_36_36, 0) = ((MR_Box) (ll_backend__global_data__V_92_92));
#line 578 "global_data.m"
              MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_36_36, 1) = ((MR_Box) (ll_backend__global_data__V_94_94));
#line 578 "global_data.m"
            }
#line 578 "global_data.m"
          }
#line 551 "global_data.m"
        ll_backend__global_data__STATE_VARIABLE_Info_38_38 = ll_backend__global_data__STATE_VARIABLE_Info_0_28;
#line 547 "global_data.m"
      }
#line 553 "global_data.m"
    else
#line 554 "global_data.m"
      {
#line 554 "global_data.m"
        MR_Word ll_backend__global_data__TypeNumCounter0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 1)));
#line 554 "global_data.m"
        MR_Integer ll_backend__global_data__TypeNum0_18;
#line 554 "global_data.m"
        MR_Word ll_backend__global_data__TypeNumCounter_19;
#line 554 "global_data.m"
        MR_Word ll_backend__global_data__TypeNumMap_20;
#line 554 "global_data.m"
        MR_Word ll_backend__global_data__STATE_VARIABLE_Info_37_37;
#line 554 "global_data.m"
        MR_Word ll_backend__global_data__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 0)));
#line 554 "global_data.m"
        MR_Word ll_backend__global_data__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 2)));
#line 554 "global_data.m"
        MR_Word ll_backend__global_data__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 3)));
#line 554 "global_data.m"
        MR_Word ll_backend__global_data__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 4)));
#line 557 "global_data.m"
        MR_Word ll_backend__global_data__V_55_55;
#line 557 "global_data.m"
        MR_Word ll_backend__global_data__V_57_57;
#line 557 "global_data.m"
        MR_Word ll_backend__global_data__V_58_58;
#line 557 "global_data.m"
        MR_Word ll_backend__global_data__V_59_59;
#line 557 "global_data.m"
        MR_Word ll_backend__global_data__V_56_56;
#line 560 "global_data.m"
        MR_Word ll_backend__global_data__V_60_60;
#line 560 "global_data.m"
        MR_Word ll_backend__global_data__V_61_61;
#line 560 "global_data.m"
        MR_Word ll_backend__global_data__V_63_63;
#line 560 "global_data.m"
        MR_Word ll_backend__global_data__V_64_64;
#line 560 "global_data.m"
        MR_Word ll_backend__global_data__V_62_62;

#line 555 "global_data.m"
        {
#line 555 "global_data.m"
          mercury__counter__allocate_3_p_0(&ll_backend__global_data__TypeNum0_18, ll_backend__global_data__TypeNumCounter0_17, &ll_backend__global_data__TypeNumCounter_19);
        }
#line 556 "global_data.m"
        ll_backend__global_data__TypeNum_16 = (MR_Word) ll_backend__global_data__TypeNum0_18;
#line 557 "global_data.m"
        ll_backend__global_data__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 0)));
#line 557 "global_data.m"
        ll_backend__global_data__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 1)));
#line 557 "global_data.m"
        ll_backend__global_data__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 2)));
#line 557 "global_data.m"
        ll_backend__global_data__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 3)));
#line 557 "global_data.m"
        ll_backend__global_data__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 4)));
#line 557 "global_data.m"
        {
#line 557 "global_data.m"
          ll_backend__global_data__STATE_VARIABLE_Info_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 557 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_37_37, 0) = ((MR_Box) (ll_backend__global_data__V_55_55));
#line 557 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_37_37, 1) = ((MR_Box) (ll_backend__global_data__TypeNumCounter_19));
#line 557 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_37_37, 2) = ((MR_Box) (ll_backend__global_data__V_57_57));
#line 557 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_37_37, 3) = ((MR_Box) (ll_backend__global_data__V_58_58));
#line 557 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_37_37, 4) = ((MR_Box) (ll_backend__global_data__V_59_59));
#line 557 "global_data.m"
        }
#line 559 "global_data.m"
        {
#line 559 "global_data.m"
          mercury__bimap__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, ((MR_Box) (ll_backend__global_data__CellType_10)), ((MR_Box) (ll_backend__global_data__TypeNum_16)), ll_backend__global_data__TypeNumMap0_13, &ll_backend__global_data__TypeNumMap_20);
        }
#line 560 "global_data.m"
        ll_backend__global_data__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_37_37, (MR_Integer) 0)));
#line 560 "global_data.m"
        ll_backend__global_data__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_37_37, (MR_Integer) 1)));
#line 560 "global_data.m"
        ll_backend__global_data__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_37_37, (MR_Integer) 2)));
#line 560 "global_data.m"
        ll_backend__global_data__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_37_37, (MR_Integer) 3)));
#line 560 "global_data.m"
        ll_backend__global_data__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_37_37, (MR_Integer) 4)));
#line 560 "global_data.m"
        {
#line 560 "global_data.m"
          ll_backend__global_data__STATE_VARIABLE_Info_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 560 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_38_38, 0) = ((MR_Box) (ll_backend__global_data__V_60_60));
#line 560 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_38_38, 1) = ((MR_Box) (ll_backend__global_data__V_61_61));
#line 560 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_38_38, 2) = ((MR_Box) (ll_backend__global_data__TypeNumMap_20));
#line 560 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_38_38, 3) = ((MR_Box) (ll_backend__global_data__V_63_63));
#line 560 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_38_38, 4) = ((MR_Box) (ll_backend__global_data__V_64_64));
#line 560 "global_data.m"
        }
#line 562 "global_data.m"
        {
#line 562 "global_data.m"
          ll_backend__global_data__STATE_VARIABLE_CellGroup_36_36 = ll_backend__global_data__init_vector_cell_group_0_f_0();
        }
#line 554 "global_data.m"
      }
#line 564 "global_data.m"
    ll_backend__global_data__CellNumCounter0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_36_36, (MR_Integer) 0)));
#line 564 "global_data.m"
    ll_backend__global_data__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_36_36, (MR_Integer) 1)));
#line 565 "global_data.m"
    {
#line 565 "global_data.m"
      mercury__counter__allocate_3_p_0(&ll_backend__global_data__CellNum_22, ll_backend__global_data__CellNumCounter0_21, &ll_backend__global_data__CellNumCounter_23);
    }
#line 566 "global_data.m"
    ll_backend__global_data__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_36_36, (MR_Integer) 0)));
#line 566 "global_data.m"
    ll_backend__global_data__CellMap0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_36_36, (MR_Integer) 1)));
#line 566 "global_data.m"
    {
#line 566 "global_data.m"
      ll_backend__global_data__STATE_VARIABLE_CellGroup_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 566 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_40_40, 0) = ((MR_Box) (ll_backend__global_data__CellNumCounter_23));
#line 566 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_40_40, 1) = ((MR_Box) (ll_backend__global_data__CellMap0_24));
#line 566 "global_data.m"
    }
#line 567 "global_data.m"
    {
#line 567 "global_data.m"
      MR_Word base;
#line 567 "global_data.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 567 "global_data.m"
      *ll_backend__global_data__DataId_8 = base;
#line 567 "global_data.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 567 "global_data.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__TypeNum_16));
#line 567 "global_data.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__CellNum_22));
#line 567 "global_data.m"
    }
#line 569 "global_data.m"
    ll_backend__global_data__VectorContents_25 = (MR_Word) ll_backend__global_data__VectorCells_11;
#line 570 "global_data.m"
    {
#line 570 "global_data.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_contents_0, ll_backend__global_data__CellNum_22, ((MR_Box) (ll_backend__global_data__VectorContents_25)), ll_backend__global_data__CellMap0_24, &ll_backend__global_data__CellMap_26);
    }
#line 571 "global_data.m"
    ll_backend__global_data__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_40_40, (MR_Integer) 0)));
#line 571 "global_data.m"
    ll_backend__global_data__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_40_40, (MR_Integer) 1)));
#line 571 "global_data.m"
    {
#line 571 "global_data.m"
      ll_backend__global_data__STATE_VARIABLE_CellGroup_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 571 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_41_41, 0) = ((MR_Box) (ll_backend__global_data__V_69_69));
#line 571 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_41_41, 1) = ((MR_Box) (ll_backend__global_data__CellMap_26));
#line 571 "global_data.m"
    }
#line 572 "global_data.m"
    {
#line 572 "global_data.m"
      mercury__map__set_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0, ((MR_Box) (ll_backend__global_data__TypeNum_16)), ((MR_Box) (ll_backend__global_data__STATE_VARIABLE_CellGroup_41_41)), ll_backend__global_data__CellGroupMap0_14, &ll_backend__global_data__CellGroupMap_27);
    }
#line 573 "global_data.m"
    ll_backend__global_data__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_38_38, (MR_Integer) 0)));
#line 573 "global_data.m"
    ll_backend__global_data__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_38_38, (MR_Integer) 1)));
#line 573 "global_data.m"
    ll_backend__global_data__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_38_38, (MR_Integer) 2)));
#line 573 "global_data.m"
    ll_backend__global_data__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_38_38, (MR_Integer) 3)));
#line 573 "global_data.m"
    ll_backend__global_data__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_38_38, (MR_Integer) 4)));
#line 573 "global_data.m"
    {
#line 573 "global_data.m"
      MR_Word base;
#line 573 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 573 "global_data.m"
      *ll_backend__global_data__STATE_VARIABLE_Info_29 = base;
#line 573 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__V_71_71));
#line 573 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__V_72_72));
#line 573 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__V_73_73));
#line 573 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__V_74_74));
#line 573 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__CellGroupMap_27));
#line 573 "global_data.m"
    }
#line 532 "global_data.m"
  }
#line 102 "global_data.m"
}

#line 478 "global_data.m"
static void MR_CALL 
ll_backend__global_data__find_general_llds_types_4_p_0_1(
#line 478 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 478 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 478 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2)
#line 478 "global_data.m"
{
#line 478 "global_data.m"
  {
#line 478 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 478 "global_data.m"
    MR_Word ll_backend__global_data__conv0_Type_8;

#line 478 "global_data.m"
    {
#line 478 "global_data.m"
      ll_backend__global_data__natural_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv0_Type_8);
    }
#line 478 "global_data.m"
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv0_Type_8));
#line 478 "global_data.m"
  }
#line 478 "global_data.m"
}

#line 99 "global_data.m"
MR_bool MR_CALL 
ll_backend__global_data__find_general_llds_types_4_p_0(
#line 99 "global_data.m"
  MR_Word ll_backend__global_data__UnboxFloat_5,
#line 99 "global_data.m"
  MR_Word ll_backend__global_data__Types_6,
#line 99 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3,
#line 99 "global_data.m"
  MR_Word * ll_backend__global_data__LLDSTypes_9)
#line 99 "global_data.m"
{
#line 476 "global_data.m"
  {
#line 476 "global_data.m"
    MR_bool ll_backend__global_data__succeeded = ((MR_tag((MR_Word) ll_backend__global_data__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 476 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_15_15;
#line 476 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_16_16;
#line 476 "global_data.m"
    MR_Word ll_backend__global_data__Vector_7;
#line 476 "global_data.m"
    MR_Word ll_backend__global_data__Vectors_8;
#line 476 "global_data.m"
    MR_Word ll_backend__global_data__ArgWidth_10;
#line 476 "global_data.m"
    MR_Word ll_backend__global_data__LLDSTypes0_11;
#line 476 "global_data.m"
    MR_Word ll_backend__global_data__V_12_12;

#line 476 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 476 "global_data.m"
      {
#line 476 "global_data.m"
        ll_backend__global_data__Vector_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 0)));
#line 476 "global_data.m"
        ll_backend__global_data__Vectors_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 1)));
#line 477 "global_data.m"
        ll_backend__global_data__ArgWidth_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 13215 "ll_backend.global_data.c"
        ll_backend__global_data__TypeCtorInfo_15_15 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
#line 13217 "ll_backend.global_data.c"
        ll_backend__global_data__TypeCtorInfo_16_16 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0;
#line 478 "global_data.m"
        {
#line 478 "global_data.m"
          ll_backend__global_data__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 478 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__V_12_12, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_4[1]));
#line 478 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__V_12_12, 1) = ((MR_Box) (ll_backend__global_data__find_general_llds_types_4_p_0_1));
#line 478 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 478 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__V_12_12, 3) = ((MR_Box) (ll_backend__global_data__UnboxFloat_5));
#line 478 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__V_12_12, 4) = ((MR_Box) (ll_backend__global_data__ArgWidth_10));
#line 478 "global_data.m"
        }
#line 478 "global_data.m"
        {
#line 478 "global_data.m"
          mercury__list__map_3_p_0(ll_backend__global_data__TypeCtorInfo_15_15, ll_backend__global_data__TypeCtorInfo_16_16, ll_backend__global_data__V_12_12, ll_backend__global_data__Vector_7, &ll_backend__global_data__LLDSTypes0_11);
        }
#line 479 "global_data.m"
        {
#line 479 "global_data.m"
          return ll_backend__global_data__succeeded = ll_backend__global_data__find_general_llds_types_2_5_p_0(ll_backend__global_data__UnboxFloat_5, ll_backend__global_data__Types_6, ll_backend__global_data__Vectors_8, ll_backend__global_data__LLDSTypes0_11, ll_backend__global_data__LLDSTypes_9);
        }
#line 476 "global_data.m"
      }
#line 476 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 476 "global_data.m"
  }
#line 99 "global_data.m"
}

#line 279 "global_data.m"
static void MR_CALL 
ll_backend__global_data__global_data_get_all_alloc_sites_3_p_0_1(
#line 279 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 279 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 279 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 279 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_3,
#line 279 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_4,
#line 279 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_5)
#line 279 "global_data.m"
{
#line 279 "global_data.m"
  {
#line 279 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 279 "global_data.m"
    MR_Integer ll_backend__global_data__conv1_HeadVar__3_3;
#line 279 "global_data.m"
    MR_Word ll_backend__global_data__conv0_STATE_VARIABLE_Map_12;

#line 279 "global_data.m"
    {
#line 279 "global_data.m"
      ll_backend__global_data__make_alloc_id_map_5_p_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Integer) ll_backend__global_data__wrapper_arg_2), &ll_backend__global_data__conv1_HeadVar__3_3, ((MR_Word) ll_backend__global_data__wrapper_arg_4), &ll_backend__global_data__conv0_STATE_VARIABLE_Map_12);
    }
#line 279 "global_data.m"
    *ll_backend__global_data__wrapper_arg_3 = ((MR_Box) (ll_backend__global_data__conv1_HeadVar__3_3));
#line 279 "global_data.m"
    *ll_backend__global_data__wrapper_arg_5 = ((MR_Box) (ll_backend__global_data__conv0_STATE_VARIABLE_Map_12));
#line 279 "global_data.m"
  }
#line 279 "global_data.m"
}

#line 95 "global_data.m"
void MR_CALL 
ll_backend__global_data__global_data_get_all_alloc_sites_3_p_0(
#line 95 "global_data.m"
  MR_Word ll_backend__global_data__GlobalData_4,
#line 95 "global_data.m"
  MR_Word * ll_backend__global_data__AllocSites_5,
#line 95 "global_data.m"
  MR_Word * ll_backend__global_data__AllocIdMap_6)
#line 95 "global_data.m"
{
#line 276 "global_data.m"
  {
#line 276 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 276 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_18_18 = (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0;
#line 276 "global_data.m"
    MR_Word ll_backend__global_data__AllocSitesSet_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 6)));
#line 276 "global_data.m"
    MR_Word ll_backend__global_data__V_11_11;
#line 277 "global_data.m"
    MR_Word ll_backend__global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 0)));
#line 277 "global_data.m"
    MR_Word ll_backend__global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 1)));
#line 277 "global_data.m"
    MR_Word ll_backend__global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 2)));
#line 277 "global_data.m"
    MR_Integer ll_backend__global_data__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 3)));
#line 277 "global_data.m"
    MR_Word ll_backend__global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 4)));
#line 277 "global_data.m"
    MR_Word ll_backend__global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 5)));
#line 279 "global_data.m"
    MR_Integer ll_backend__global_data___Slot_8;
#line 279 "global_data.m"
    MR_Box ll_backend__global_data__conv3__Slot_8;
#line 279 "global_data.m"
    MR_Box ll_backend__global_data__conv2_AllocIdMap_6;

#line 278 "global_data.m"
    {
#line 278 "global_data.m"
      *ll_backend__global_data__AllocSites_5 = mercury__set_tree234__to_sorted_list_1_f_0(ll_backend__global_data__TypeCtorInfo_18_18, ll_backend__global_data__AllocSitesSet_7);
    }
#line 279 "global_data.m"
    {
#line 279 "global_data.m"
      ll_backend__global_data__V_11_11 = mercury__map__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_alloc_site_id_0, (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0);
    }
#line 279 "global_data.m"
    {
#line 279 "global_data.m"
      mercury__list__foldl2_6_p_0(ll_backend__global_data__TypeCtorInfo_18_18, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__global_data_scalar_common_1[0], (MR_Word) &ll_backend__global_data_scalar_common_1[11], *ll_backend__global_data__AllocSites_5, ((MR_Box) ((MR_Integer) 0)), &ll_backend__global_data__conv3__Slot_8, ((MR_Box) (ll_backend__global_data__V_11_11)), &ll_backend__global_data__conv2_AllocIdMap_6);
    }
#line 279 "global_data.m"
    ll_backend__global_data___Slot_8 = ((MR_Integer) ll_backend__global_data__conv3__Slot_8);
#line 279 "global_data.m"
    *ll_backend__global_data__AllocIdMap_6 = ((MR_Word) ll_backend__global_data__conv2_AllocIdMap_6);
#line 276 "global_data.m"
  }
#line 95 "global_data.m"
}

#line 92 "global_data.m"
void MR_CALL 
ll_backend__global_data__global_data_add_new_alloc_sites_3_p_0(
#line 92 "global_data.m"
  MR_Word ll_backend__global_data__NewAllocSites_4,
#line 92 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8,
#line 92 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_GlobalData_9)
#line 92 "global_data.m"
{
#line 271 "global_data.m"
  {
#line 271 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 271 "global_data.m"
    MR_Word ll_backend__global_data__AllocSites0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
#line 271 "global_data.m"
    MR_Word ll_backend__global_data__AllocSites_7;
#line 272 "global_data.m"
    MR_Word ll_backend__global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
#line 272 "global_data.m"
    MR_Word ll_backend__global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
#line 272 "global_data.m"
    MR_Word ll_backend__global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
#line 272 "global_data.m"
    MR_Integer ll_backend__global_data__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
#line 272 "global_data.m"
    MR_Word ll_backend__global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
#line 272 "global_data.m"
    MR_Word ll_backend__global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
#line 274 "global_data.m"
    MR_Word ll_backend__global_data__V_17_17;
#line 274 "global_data.m"
    MR_Word ll_backend__global_data__V_18_18;
#line 274 "global_data.m"
    MR_Word ll_backend__global_data__V_19_19;
#line 274 "global_data.m"
    MR_Integer ll_backend__global_data__V_20_20;
#line 274 "global_data.m"
    MR_Word ll_backend__global_data__V_21_21;
#line 274 "global_data.m"
    MR_Word ll_backend__global_data__V_22_22;
#line 274 "global_data.m"
    MR_Word ll_backend__global_data__V_23_23;

#line 273 "global_data.m"
    {
#line 273 "global_data.m"
      mercury__set_tree234__union_3_p_0((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0, ll_backend__global_data__NewAllocSites_4, ll_backend__global_data__AllocSites0_6, &ll_backend__global_data__AllocSites_7);
    }
#line 274 "global_data.m"
    ll_backend__global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
#line 274 "global_data.m"
    ll_backend__global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
#line 274 "global_data.m"
    ll_backend__global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
#line 274 "global_data.m"
    ll_backend__global_data__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
#line 274 "global_data.m"
    ll_backend__global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
#line 274 "global_data.m"
    ll_backend__global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
#line 274 "global_data.m"
    ll_backend__global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
#line 274 "global_data.m"
    {
#line 274 "global_data.m"
      MR_Word base;
#line 274 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 274 "global_data.m"
      *ll_backend__global_data__STATE_VARIABLE_GlobalData_9 = base;
#line 274 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__V_17_17));
#line 274 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__V_18_18));
#line 274 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__V_19_19));
#line 274 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__V_20_20));
#line 274 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__V_21_21));
#line 274 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__global_data__V_22_22));
#line 274 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__global_data__AllocSites_7));
#line 274 "global_data.m"
    }
#line 271 "global_data.m"
  }
#line 92 "global_data.m"
}

#line 367 "global_data.m"
static void MR_CALL 
ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0_1(
#line 367 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 367 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 367 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2)
#line 367 "global_data.m"
{
#line 367 "global_data.m"
  {
#line 367 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 367 "global_data.m"
    MR_Word ll_backend__global_data__conv0_HeadVar__4_4;

#line 367 "global_data.m"
    {
#line 367 "global_data.m"
      ll_backend__global_data__associate_natural_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv0_HeadVar__4_4);
    }
#line 367 "global_data.m"
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__4_4));
#line 367 "global_data.m"
  }
#line 367 "global_data.m"
}

#line 89 "global_data.m"
void MR_CALL 
ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0(
#line 89 "global_data.m"
  MR_Word ll_backend__global_data__Args_5,
#line 89 "global_data.m"
  MR_Word * ll_backend__global_data__DataId_6,
#line 89 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_Info_0_11,
#line 89 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Info_12)
#line 89 "global_data.m"
{
#line 364 "global_data.m"
  {
#line 364 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 364 "global_data.m"
    MR_Word ll_backend__global_data__UnboxFloat_8;
#line 364 "global_data.m"
    MR_Word ll_backend__global_data__TypedArgs_10;
#line 364 "global_data.m"
    MR_Word ll_backend__global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_11, (MR_Integer) 0)));
#line 364 "global_data.m"
    MR_Word ll_backend__global_data__V_14_14;
#line 365 "global_data.m"
    MR_Word ll_backend__global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_11, (MR_Integer) 1)));
#line 365 "global_data.m"
    MR_Word ll_backend__global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_11, (MR_Integer) 2)));
#line 365 "global_data.m"
    MR_Word ll_backend__global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_11, (MR_Integer) 3)));
#line 365 "global_data.m"
    MR_Word ll_backend__global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_11, (MR_Integer) 4)));
#line 365 "global_data.m"
    MR_Word ll_backend__global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_13_13, (MR_Integer) 0)));
#line 365 "global_data.m"
    MR_Word ll_backend__global_data__V_21_21;

#line 365 "global_data.m"
    ll_backend__global_data__UnboxFloat_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_13_13, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 365 "global_data.m"
    ll_backend__global_data__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_13_13, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 367 "global_data.m"
    {
#line 367 "global_data.m"
      ll_backend__global_data__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 367 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_14_14, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_4[0]));
#line 367 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_14_14, 1) = ((MR_Box) (ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0_1));
#line 367 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 367 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_14_14, 3) = ((MR_Box) (ll_backend__global_data__UnboxFloat_8));
#line 367 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_14_14, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 367 "global_data.m"
    }
#line 367 "global_data.m"
    {
#line 367 "global_data.m"
      mercury__list__map_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ll_backend__global_data__V_14_14, ll_backend__global_data__Args_5, &ll_backend__global_data__TypedArgs_10);
    }
#line 368 "global_data.m"
    {
#line 368 "global_data.m"
      ll_backend__global_data__add_scalar_static_cell_4_p_0(ll_backend__global_data__TypedArgs_10, ll_backend__global_data__DataId_6, ll_backend__global_data__STATE_VARIABLE_Info_0_11, ll_backend__global_data__STATE_VARIABLE_Info_12);
#line 368 "global_data.m"
      return;
    }
#line 364 "global_data.m"
  }
#line 89 "global_data.m"
}

#line 86 "global_data.m"
void MR_CALL 
ll_backend__global_data__add_scalar_static_cell_4_p_0(
#line 86 "global_data.m"
  MR_Word ll_backend__global_data__TypedArgs0_5,
#line 86 "global_data.m"
  MR_Word * ll_backend__global_data__DataId_6,
#line 86 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_Info_0_13,
#line 86 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Info_14)
#line 86 "global_data.m"
{
#line 370 "global_data.m"
  {
#line 370 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 370 "global_data.m"
    MR_Word ll_backend__global_data__TypedArgs_8;
#line 370 "global_data.m"
    MR_Word ll_backend__global_data__CellType_11;
#line 370 "global_data.m"
    MR_Word ll_backend__global_data__CellTypeAndValue_12;
#line 646 "global_data.m"
    MR_Word ll_backend__global_data__TypeGroups_28;
#line 646 "global_data.m"
    MR_Word ll_backend__global_data__TypeAndArgGroups_29;
#line 637 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_20_38;
#line 637 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_21_39;
#line 637 "global_data.m"
    MR_Word ll_backend__global_data__FirstArg_25;
#line 637 "global_data.m"
    MR_Word ll_backend__global_data__FirstArgType_26;
#line 637 "global_data.m"
    MR_Word ll_backend__global_data__LaterTypedArgs_27;
#line 637 "global_data.m"
    MR_Integer ll_backend__global_data__OldLength_30;
#line 637 "global_data.m"
    MR_Integer ll_backend__global_data__NewLength_31;
#line 637 "global_data.m"
    MR_Word ll_backend__global_data__V_32_32;
#line 637 "global_data.m"
    MR_Word ll_backend__global_data__V_33_33;
#line 637 "global_data.m"
    MR_Word ll_backend__global_data__V_34_34;
#line 637 "global_data.m"
    MR_Integer ll_backend__global_data__V_35_35;
#line 637 "global_data.m"
    MR_Integer ll_backend__global_data__V_36_36;

#line 376 "global_data.m"
    if ((ll_backend__global_data__TypedArgs0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 375 "global_data.m"
      ll_backend__global_data__TypedArgs_8 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__global_data_scalar_common_2[10]);
#line 376 "global_data.m"
    else
#line 378 "global_data.m"
      ll_backend__global_data__TypedArgs_8 = ll_backend__global_data__TypedArgs0_5;
#line 637 "global_data.m"
    ll_backend__global_data__succeeded = ((MR_tag((MR_Word) ll_backend__global_data__TypedArgs_8)) == (MR_mktag((MR_Integer) 1)));
#line 637 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 637 "global_data.m"
      {
#line 637 "global_data.m"
        ll_backend__global_data__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__TypedArgs_8, (MR_Integer) 0)));
#line 637 "global_data.m"
        ll_backend__global_data__LaterTypedArgs_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__TypedArgs_8, (MR_Integer) 1)));
#line 637 "global_data.m"
        ll_backend__global_data__FirstArg_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_32_32, (MR_Integer) 0)));
#line 637 "global_data.m"
        ll_backend__global_data__FirstArgType_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_32_32, (MR_Integer) 1)));
#line 638 "global_data.m"
        ll_backend__global_data__V_34_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 638 "global_data.m"
        {
#line 638 "global_data.m"
          ll_backend__global_data__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 638 "global_data.m"
          MR_hl_field(MR_mktag(1), ll_backend__global_data__V_33_33, 0) = ((MR_Box) (ll_backend__global_data__FirstArg_25));
#line 638 "global_data.m"
          MR_hl_field(MR_mktag(1), ll_backend__global_data__V_33_33, 1) = ((MR_Box) (ll_backend__global_data__V_34_34));
#line 638 "global_data.m"
        }
#line 638 "global_data.m"
        {
#line 638 "global_data.m"
          ll_backend__global_data__succeeded = ll_backend__global_data__threshold_group_types_5_p_0(ll_backend__global_data__FirstArgType_26, ll_backend__global_data__V_33_33, ll_backend__global_data__LaterTypedArgs_27, &ll_backend__global_data__TypeGroups_28, &ll_backend__global_data__TypeAndArgGroups_29);
        }
#line 637 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 637 "global_data.m"
          {
#line 13652 "ll_backend.global_data.c"
            ll_backend__global_data__TypeCtorInfo_20_38 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0;
#line 640 "global_data.m"
            {
#line 640 "global_data.m"
              ll_backend__global_data__OldLength_30 = mercury__list__length_1_f_0(ll_backend__global_data__TypeCtorInfo_20_38, ll_backend__global_data__TypedArgs_8);
            }
#line 13659 "ll_backend.global_data.c"
            ll_backend__global_data__TypeCtorInfo_21_39 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_arg_group_0;
#line 641 "global_data.m"
            {
#line 641 "global_data.m"
              ll_backend__global_data__NewLength_31 = mercury__list__length_1_f_0(ll_backend__global_data__TypeCtorInfo_21_39, ll_backend__global_data__TypeAndArgGroups_29);
            }
#line 642 "global_data.m"
            ll_backend__global_data__V_36_36 = (MR_Integer) 2;
#line 642 "global_data.m"
            ll_backend__global_data__V_35_35 = (ll_backend__global_data__NewLength_31 * ll_backend__global_data__V_36_36);
#line 642 "global_data.m"
            ll_backend__global_data__succeeded = (ll_backend__global_data__OldLength_30 >= ll_backend__global_data__V_35_35);
#line 637 "global_data.m"
          }
#line 637 "global_data.m"
      }
#line 646 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 644 "global_data.m"
      {
#line 644 "global_data.m"
        {
#line 644 "global_data.m"
          ll_backend__global_data__CellType_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 644 "global_data.m"
          MR_hl_field(MR_mktag(1), ll_backend__global_data__CellType_11, 0) = ((MR_Box) (ll_backend__global_data__TypeGroups_28));
#line 644 "global_data.m"
        }
#line 645 "global_data.m"
        {
#line 645 "global_data.m"
          ll_backend__global_data__CellTypeAndValue_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 645 "global_data.m"
          MR_hl_field(MR_mktag(1), ll_backend__global_data__CellTypeAndValue_12, 0) = ((MR_Box) (ll_backend__global_data__TypeAndArgGroups_29));
#line 645 "global_data.m"
        }
#line 644 "global_data.m"
      }
#line 646 "global_data.m"
    else
#line 647 "global_data.m"
      {
#line 647 "global_data.m"
        MR_Word ll_backend__global_data__V_37_37;

#line 647 "global_data.m"
        {
#line 647 "global_data.m"
          ll_backend__global_data__V_37_37 = ll_backend__llds__typed_rvals_project_types_1_f_0(ll_backend__global_data__TypedArgs_8);
        }
#line 647 "global_data.m"
        {
#line 647 "global_data.m"
          ll_backend__global_data__CellType_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 647 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__CellType_11, 0) = ((MR_Box) (ll_backend__global_data__V_37_37));
#line 647 "global_data.m"
        }
#line 648 "global_data.m"
        {
#line 648 "global_data.m"
          ll_backend__global_data__CellTypeAndValue_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 648 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__CellTypeAndValue_12, 0) = ((MR_Box) (ll_backend__global_data__TypedArgs_8));
#line 648 "global_data.m"
        }
#line 647 "global_data.m"
      }
#line 381 "global_data.m"
    {
#line 381 "global_data.m"
      ll_backend__global_data__do_add_scalar_static_cell_6_p_0(ll_backend__global_data__TypedArgs_8, ll_backend__global_data__CellType_11, ll_backend__global_data__CellTypeAndValue_12, ll_backend__global_data__DataId_6, ll_backend__global_data__STATE_VARIABLE_Info_0_13, ll_backend__global_data__STATE_VARIABLE_Info_14);
#line 381 "global_data.m"
      return;
    }
#line 370 "global_data.m"
  }
#line 86 "global_data.m"
}

#line 83 "global_data.m"
MR_Word MR_CALL 
ll_backend__global_data__init_static_cell_info_3_f_0(
#line 83 "global_data.m"
  MR_Word ll_backend__global_data__BaseName_5,
#line 83 "global_data.m"
  MR_Word ll_backend__global_data__UnboxFloat_6,
#line 83 "global_data.m"
  MR_Word ll_backend__global_data__CommonData_7)
#line 83 "global_data.m"
{
#line 357 "global_data.m"
  {
#line 357 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 357 "global_data.m"
    MR_Word ll_backend__global_data__Info0_8;
#line 357 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_16_16;
#line 357 "global_data.m"
    MR_Word ll_backend__global_data__SubInfo0_9;
#line 357 "global_data.m"
    MR_Word ll_backend__global_data__V_10_10;
#line 357 "global_data.m"
    MR_Word ll_backend__global_data__V_12_12;
#line 357 "global_data.m"
    MR_Word ll_backend__global_data__V_13_13;
#line 357 "global_data.m"
    MR_Word ll_backend__global_data__V_14_14;

#line 358 "global_data.m"
    {
#line 358 "global_data.m"
      ll_backend__global_data__SubInfo0_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 358 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__SubInfo0_9, 0) = ((MR_Box) (ll_backend__global_data__BaseName_5));
#line 358 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__SubInfo0_9, 1) = ((MR_Box) ((ll_backend__global_data__UnboxFloat_6 | ((ll_backend__global_data__CommonData_7 << (MR_Integer) 1)))));
#line 358 "global_data.m"
    }
#line 359 "global_data.m"
    {
#line 359 "global_data.m"
      ll_backend__global_data__V_10_10 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
#line 13785 "ll_backend.global_data.c"
    ll_backend__global_data__TypeCtorInfo_16_16 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;
#line 359 "global_data.m"
    {
#line 359 "global_data.m"
      ll_backend__global_data__V_12_12 = mercury__bimap__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0, ll_backend__global_data__TypeCtorInfo_16_16);
    }
#line 359 "global_data.m"
    {
#line 359 "global_data.m"
      ll_backend__global_data__V_13_13 = mercury__map__init_0_f_0(ll_backend__global_data__TypeCtorInfo_16_16, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0);
    }
#line 359 "global_data.m"
    {
#line 359 "global_data.m"
      ll_backend__global_data__V_14_14 = mercury__map__init_0_f_0(ll_backend__global_data__TypeCtorInfo_16_16, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0);
    }
#line 359 "global_data.m"
    {
#line 359 "global_data.m"
      ll_backend__global_data__Info0_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 359 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Info0_8, 0) = ((MR_Box) (ll_backend__global_data__SubInfo0_9));
#line 359 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Info0_8, 1) = ((MR_Box) (ll_backend__global_data__V_10_10));
#line 359 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Info0_8, 2) = ((MR_Box) (ll_backend__global_data__V_12_12));
#line 359 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Info0_8, 3) = ((MR_Box) (ll_backend__global_data__V_13_13));
#line 359 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Info0_8, 4) = ((MR_Box) (ll_backend__global_data__V_14_14));
#line 359 "global_data.m"
    }
#line 357 "global_data.m"
    return ll_backend__global_data__Info0_8;
#line 357 "global_data.m"
  }
#line 83 "global_data.m"
}

#line 78 "global_data.m"
void MR_CALL 
ll_backend__global_data__global_data_set_static_cell_info_3_p_0(
#line 78 "global_data.m"
  MR_Word ll_backend__global_data__StaticCellInfo_4,
#line 78 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_GlobalData_0_6,
#line 78 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_GlobalData_7)
#line 78 "global_data.m"
{
#line 269 "global_data.m"
  {
#line 269 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 269 "global_data.m"
    MR_Word ll_backend__global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 0)));
#line 269 "global_data.m"
    MR_Word ll_backend__global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 1)));
#line 269 "global_data.m"
    MR_Word ll_backend__global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 2)));
#line 269 "global_data.m"
    MR_Integer ll_backend__global_data__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 3)));
#line 269 "global_data.m"
    MR_Word ll_backend__global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 4)));
#line 269 "global_data.m"
    MR_Word ll_backend__global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 6)));
#line 269 "global_data.m"
    MR_Word ll_backend__global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 5)));

#line 269 "global_data.m"
    {
#line 269 "global_data.m"
      MR_Word base;
#line 269 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 269 "global_data.m"
      *ll_backend__global_data__STATE_VARIABLE_GlobalData_7 = base;
#line 269 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__V_9_9));
#line 269 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__V_10_10));
#line 269 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__V_11_11));
#line 269 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__V_12_12));
#line 269 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__V_13_13));
#line 269 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__global_data__StaticCellInfo_4));
#line 269 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__global_data__V_15_15));
#line 269 "global_data.m"
    }
#line 269 "global_data.m"
  }
#line 78 "global_data.m"
}

#line 75 "global_data.m"
void MR_CALL 
ll_backend__global_data__global_data_get_static_cell_info_2_p_0(
#line 75 "global_data.m"
  MR_Word ll_backend__global_data__GlobalData_3,
#line 75 "global_data.m"
  MR_Word * ll_backend__global_data__StaticCellInfo_4)
#line 75 "global_data.m"
{
#line 266 "global_data.m"
  {
#line 266 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 266 "global_data.m"
    MR_Word ll_backend__global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 0)));
#line 266 "global_data.m"
    MR_Word ll_backend__global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 1)));
#line 266 "global_data.m"
    MR_Word ll_backend__global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 2)));
#line 266 "global_data.m"
    MR_Integer ll_backend__global_data__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 3)));
#line 266 "global_data.m"
    MR_Word ll_backend__global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 4)));
#line 266 "global_data.m"
    MR_Word ll_backend__global_data__V_10_10;

#line 266 "global_data.m"
    *ll_backend__global_data__StaticCellInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 5)));
#line 266 "global_data.m"
    ll_backend__global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 6)));
#line 266 "global_data.m"
  }
#line 75 "global_data.m"
}

#line 72 "global_data.m"
void MR_CALL 
ll_backend__global_data__global_data_set_threadscope_rev_string_table_4_p_0(
#line 72 "global_data.m"
  MR_Word ll_backend__global_data__RevTable_5,
#line 72 "global_data.m"
  MR_Integer ll_backend__global_data__TableSize_6,
#line 72 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8,
#line 72 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_GlobalData_9)
#line 72 "global_data.m"
{
#line 261 "global_data.m"
  {
#line 261 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 261 "global_data.m"
    MR_Word ll_backend__global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
#line 261 "global_data.m"
    MR_Word ll_backend__global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
#line 261 "global_data.m"
    MR_Word ll_backend__global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
#line 261 "global_data.m"
    MR_Word ll_backend__global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
#line 261 "global_data.m"
    MR_Word ll_backend__global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
#line 262 "global_data.m"
    MR_Integer ll_backend__global_data__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
#line 262 "global_data.m"
    MR_Word ll_backend__global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));

#line 263 "global_data.m"
    {
#line 263 "global_data.m"
      MR_Word base;
#line 263 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 263 "global_data.m"
      *ll_backend__global_data__STATE_VARIABLE_GlobalData_9 = base;
#line 263 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__V_12_12));
#line 263 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__V_13_13));
#line 263 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__V_14_14));
#line 263 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__TableSize_6));
#line 263 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__RevTable_5));
#line 263 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__global_data__V_17_17));
#line 263 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__global_data__V_18_18));
#line 263 "global_data.m"
    }
#line 261 "global_data.m"
  }
#line 72 "global_data.m"
}

#line 69 "global_data.m"
void MR_CALL 
ll_backend__global_data__global_data_get_threadscope_rev_string_table_3_p_0(
#line 69 "global_data.m"
  MR_Word ll_backend__global_data__GlobalData_4,
#line 69 "global_data.m"
  MR_Word * ll_backend__global_data__RevTable_5,
#line 69 "global_data.m"
  MR_Integer * ll_backend__global_data__TableSize_6)
#line 69 "global_data.m"
{
#line 257 "global_data.m"
  {
#line 257 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 257 "global_data.m"
    MR_Word ll_backend__global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 0)));
#line 257 "global_data.m"
    MR_Word ll_backend__global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 1)));
#line 257 "global_data.m"
    MR_Word ll_backend__global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 2)));
#line 257 "global_data.m"
    MR_Word ll_backend__global_data__V_11_11;
#line 257 "global_data.m"
    MR_Word ll_backend__global_data__V_12_12;

#line 257 "global_data.m"
    *ll_backend__global_data__TableSize_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 3)));
#line 257 "global_data.m"
    *ll_backend__global_data__RevTable_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 4)));
#line 257 "global_data.m"
    ll_backend__global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 5)));
#line 257 "global_data.m"
    ll_backend__global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 6)));
#line 257 "global_data.m"
  }
#line 69 "global_data.m"
}

#line 66 "global_data.m"
void MR_CALL 
ll_backend__global_data__global_data_get_threadscope_string_table_2_p_0(
#line 66 "global_data.m"
  MR_Word ll_backend__global_data__GlobalData_3,
#line 66 "global_data.m"
  MR_Word * ll_backend__global_data__Table_4)
#line 66 "global_data.m"
{
#line 251 "global_data.m"
  {
#line 251 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 251 "global_data.m"
    MR_Word ll_backend__global_data__RevTable_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 4)));
#line 257 "global_data.m"
    MR_Integer ll_backend__global_data__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 3)));
#line 257 "global_data.m"
    MR_Word ll_backend__global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 0)));
#line 257 "global_data.m"
    MR_Word ll_backend__global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 1)));
#line 257 "global_data.m"
    MR_Word ll_backend__global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 2)));
#line 257 "global_data.m"
    MR_Word ll_backend__global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 5)));
#line 257 "global_data.m"
    MR_Word ll_backend__global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 6)));

#line 253 "global_data.m"
    {
#line 253 "global_data.m"
      *ll_backend__global_data__Table_4 = mercury__list__reverse_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__global_data__RevTable_5);
    }
#line 251 "global_data.m"
  }
#line 66 "global_data.m"
}

#line 63 "global_data.m"
void MR_CALL 
ll_backend__global_data__global_data_get_all_closure_layouts_2_p_0(
#line 63 "global_data.m"
  MR_Word ll_backend__global_data__GlobalData_3,
#line 63 "global_data.m"
  MR_Word * ll_backend__global_data__ClosureLayouts_4)
#line 63 "global_data.m"
{
#line 249 "global_data.m"
  {
#line 249 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 249 "global_data.m"
    MR_Word ll_backend__global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 0)));
#line 249 "global_data.m"
    MR_Word ll_backend__global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 1)));
#line 249 "global_data.m"
    MR_Integer ll_backend__global_data__V_7_7;
#line 249 "global_data.m"
    MR_Word ll_backend__global_data__V_8_8;
#line 249 "global_data.m"
    MR_Word ll_backend__global_data__V_9_9;
#line 249 "global_data.m"
    MR_Word ll_backend__global_data__V_10_10;

#line 249 "global_data.m"
    *ll_backend__global_data__ClosureLayouts_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 2)));
#line 249 "global_data.m"
    ll_backend__global_data__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 3)));
#line 249 "global_data.m"
    ll_backend__global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 4)));
#line 249 "global_data.m"
    ll_backend__global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 5)));
#line 249 "global_data.m"
    ll_backend__global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 6)));
#line 249 "global_data.m"
  }
#line 63 "global_data.m"
}

#line 60 "global_data.m"
void MR_CALL 
ll_backend__global_data__global_data_get_all_proc_layouts_2_p_0(
#line 60 "global_data.m"
  MR_Word ll_backend__global_data__GlobalData_3,
#line 60 "global_data.m"
  MR_Word * ll_backend__global_data__ProcLayouts_4)
#line 60 "global_data.m"
{
#line 244 "global_data.m"
  {
#line 244 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 244 "global_data.m"
    MR_Word ll_backend__global_data__ProcLayoutMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 1)));
#line 245 "global_data.m"
    MR_Word ll_backend__global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 0)));
#line 245 "global_data.m"
    MR_Word ll_backend__global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 2)));
#line 245 "global_data.m"
    MR_Integer ll_backend__global_data__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 3)));
#line 245 "global_data.m"
    MR_Word ll_backend__global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 4)));
#line 245 "global_data.m"
    MR_Word ll_backend__global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 5)));
#line 245 "global_data.m"
    MR_Word ll_backend__global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 6)));

#line 246 "global_data.m"
    {
#line 246 "global_data.m"
      mercury__map__values_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_info_0, ll_backend__global_data__ProcLayoutMap_5, ll_backend__global_data__ProcLayouts_4);
#line 246 "global_data.m"
      return;
    }
#line 244 "global_data.m"
  }
#line 60 "global_data.m"
}

#line 57 "global_data.m"
void MR_CALL 
ll_backend__global_data__global_data_get_all_proc_vars_2_p_0(
#line 57 "global_data.m"
  MR_Word ll_backend__global_data__GlobalData_3,
#line 57 "global_data.m"
  MR_Word * ll_backend__global_data__ProcVars_4)
#line 57 "global_data.m"
{
#line 240 "global_data.m"
  {
#line 240 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 240 "global_data.m"
    MR_Word ll_backend__global_data__ProcVarMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 0)));
#line 241 "global_data.m"
    MR_Word ll_backend__global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 1)));
#line 241 "global_data.m"
    MR_Word ll_backend__global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 2)));
#line 241 "global_data.m"
    MR_Integer ll_backend__global_data__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 3)));
#line 241 "global_data.m"
    MR_Word ll_backend__global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 4)));
#line 241 "global_data.m"
    MR_Word ll_backend__global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 5)));
#line 241 "global_data.m"
    MR_Word ll_backend__global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 6)));

#line 242 "global_data.m"
    {
#line 242 "global_data.m"
      mercury__map__values_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_tabling_info_struct_0, ll_backend__global_data__ProcVarMap_5, ll_backend__global_data__ProcVars_4);
#line 242 "global_data.m"
      return;
    }
#line 240 "global_data.m"
  }
#line 57 "global_data.m"
}

#line 54 "global_data.m"
void MR_CALL 
ll_backend__global_data__global_data_get_proc_layout_3_p_0(
#line 54 "global_data.m"
  MR_Word ll_backend__global_data__GlobalData_4,
#line 54 "global_data.m"
  MR_Word ll_backend__global_data__PredProcId_5,
#line 54 "global_data.m"
  MR_Word * ll_backend__global_data__ProcLayout_6)
#line 54 "global_data.m"
{
#line 236 "global_data.m"
  {
#line 236 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 236 "global_data.m"
    MR_Word ll_backend__global_data__ProcLayoutMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 1)));
#line 237 "global_data.m"
    MR_Word ll_backend__global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 0)));
#line 237 "global_data.m"
    MR_Word ll_backend__global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 2)));
#line 237 "global_data.m"
    MR_Integer ll_backend__global_data__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 3)));
#line 237 "global_data.m"
    MR_Word ll_backend__global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 4)));
#line 237 "global_data.m"
    MR_Word ll_backend__global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 5)));
#line 237 "global_data.m"
    MR_Word ll_backend__global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 6)));
#line 238 "global_data.m"
    MR_Box ll_backend__global_data__conv0_ProcLayout_6;

#line 238 "global_data.m"
    {
#line 238 "global_data.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_info_0, ll_backend__global_data__ProcLayoutMap_7, ((MR_Box) (ll_backend__global_data__PredProcId_5)), &ll_backend__global_data__conv0_ProcLayout_6);
    }
#line 238 "global_data.m"
    *ll_backend__global_data__ProcLayout_6 = ((MR_Word) ll_backend__global_data__conv0_ProcLayout_6);
#line 236 "global_data.m"
  }
#line 54 "global_data.m"
}

#line 51 "global_data.m"
MR_bool MR_CALL 
ll_backend__global_data__global_data_maybe_get_proc_layout_3_p_0(
#line 51 "global_data.m"
  MR_Word ll_backend__global_data__GlobalData_4,
#line 51 "global_data.m"
  MR_Word ll_backend__global_data__PredProcId_5,
#line 51 "global_data.m"
  MR_Word * ll_backend__global_data__ProcLayout_6)
#line 51 "global_data.m"
{
#line 232 "global_data.m"
  {
#line 232 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 232 "global_data.m"
    MR_Word ll_backend__global_data__ProcLayoutMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 1)));
#line 233 "global_data.m"
    MR_Word ll_backend__global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 0)));
#line 233 "global_data.m"
    MR_Word ll_backend__global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 2)));
#line 233 "global_data.m"
    MR_Integer ll_backend__global_data__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 3)));
#line 233 "global_data.m"
    MR_Word ll_backend__global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 4)));
#line 233 "global_data.m"
    MR_Word ll_backend__global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 5)));
#line 233 "global_data.m"
    MR_Word ll_backend__global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 6)));
#line 234 "global_data.m"
    MR_Box ll_backend__global_data__conv0_ProcLayout_6;

#line 234 "global_data.m"
    {
#line 234 "global_data.m"
      ll_backend__global_data__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_info_0, ll_backend__global_data__ProcLayoutMap_7, ((MR_Box) (ll_backend__global_data__PredProcId_5)), &ll_backend__global_data__conv0_ProcLayout_6);
    }
#line 234 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 234 "global_data.m"
      {
#line 234 "global_data.m"
        *ll_backend__global_data__ProcLayout_6 = ((MR_Word) ll_backend__global_data__conv0_ProcLayout_6);
#line 234 "global_data.m"
        ll_backend__global_data__succeeded = MR_TRUE;
#line 234 "global_data.m"
      }
#line 232 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 232 "global_data.m"
  }
#line 51 "global_data.m"
}

#line 48 "global_data.m"
void MR_CALL 
ll_backend__global_data__global_data_add_new_closure_layouts_3_p_0(
#line 48 "global_data.m"
  MR_Word ll_backend__global_data__NewClosureLayouts_4,
#line 48 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8,
#line 48 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_GlobalData_9)
#line 48 "global_data.m"
{
#line 227 "global_data.m"
  {
#line 227 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 227 "global_data.m"
    MR_Word ll_backend__global_data__ClosureLayouts0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
#line 227 "global_data.m"
    MR_Word ll_backend__global_data__ClosureLayouts_7;
#line 228 "global_data.m"
    MR_Word ll_backend__global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
#line 228 "global_data.m"
    MR_Word ll_backend__global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
#line 228 "global_data.m"
    MR_Integer ll_backend__global_data__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
#line 228 "global_data.m"
    MR_Word ll_backend__global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
#line 228 "global_data.m"
    MR_Word ll_backend__global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
#line 228 "global_data.m"
    MR_Word ll_backend__global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
#line 230 "global_data.m"
    MR_Word ll_backend__global_data__V_17_17;
#line 230 "global_data.m"
    MR_Word ll_backend__global_data__V_18_18;
#line 230 "global_data.m"
    MR_Integer ll_backend__global_data__V_20_20;
#line 230 "global_data.m"
    MR_Word ll_backend__global_data__V_21_21;
#line 230 "global_data.m"
    MR_Word ll_backend__global_data__V_22_22;
#line 230 "global_data.m"
    MR_Word ll_backend__global_data__V_23_23;
#line 230 "global_data.m"
    MR_Word ll_backend__global_data__V_19_19;

#line 229 "global_data.m"
    {
#line 229 "global_data.m"
      mercury__list__append_3_p_1((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_closure_proc_id_data_0, ll_backend__global_data__NewClosureLayouts_4, ll_backend__global_data__ClosureLayouts0_6, &ll_backend__global_data__ClosureLayouts_7);
    }
#line 230 "global_data.m"
    ll_backend__global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
#line 230 "global_data.m"
    ll_backend__global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
#line 230 "global_data.m"
    ll_backend__global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
#line 230 "global_data.m"
    ll_backend__global_data__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
#line 230 "global_data.m"
    ll_backend__global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
#line 230 "global_data.m"
    ll_backend__global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
#line 230 "global_data.m"
    ll_backend__global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
#line 230 "global_data.m"
    {
#line 230 "global_data.m"
      MR_Word base;
#line 230 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 230 "global_data.m"
      *ll_backend__global_data__STATE_VARIABLE_GlobalData_9 = base;
#line 230 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__V_17_17));
#line 230 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__V_18_18));
#line 230 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__ClosureLayouts_7));
#line 230 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__V_20_20));
#line 230 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__V_21_21));
#line 230 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__global_data__V_22_22));
#line 230 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__global_data__V_23_23));
#line 230 "global_data.m"
    }
#line 227 "global_data.m"
  }
#line 48 "global_data.m"
}

#line 45 "global_data.m"
void MR_CALL 
ll_backend__global_data__global_data_update_proc_layout_4_p_0(
#line 45 "global_data.m"
  MR_Word ll_backend__global_data__PredProcId_5,
#line 45 "global_data.m"
  MR_Word ll_backend__global_data__ProcLayout_6,
#line 45 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10,
#line 45 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_GlobalData_11)
#line 45 "global_data.m"
{
#line 222 "global_data.m"
  {
#line 222 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 222 "global_data.m"
    MR_Word ll_backend__global_data__ProcLayoutMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
#line 222 "global_data.m"
    MR_Word ll_backend__global_data__ProcLayoutMap_9;
#line 223 "global_data.m"
    MR_Word ll_backend__global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
#line 223 "global_data.m"
    MR_Word ll_backend__global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
#line 223 "global_data.m"
    MR_Integer ll_backend__global_data__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
#line 223 "global_data.m"
    MR_Word ll_backend__global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
#line 223 "global_data.m"
    MR_Word ll_backend__global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
#line 223 "global_data.m"
    MR_Word ll_backend__global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
#line 225 "global_data.m"
    MR_Word ll_backend__global_data__V_19_19;
#line 225 "global_data.m"
    MR_Word ll_backend__global_data__V_21_21;
#line 225 "global_data.m"
    MR_Integer ll_backend__global_data__V_22_22;
#line 225 "global_data.m"
    MR_Word ll_backend__global_data__V_23_23;
#line 225 "global_data.m"
    MR_Word ll_backend__global_data__V_24_24;
#line 225 "global_data.m"
    MR_Word ll_backend__global_data__V_25_25;
#line 225 "global_data.m"
    MR_Word ll_backend__global_data__V_20_20;

#line 224 "global_data.m"
    {
#line 224 "global_data.m"
      mercury__map__det_update_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_info_0, ((MR_Box) (ll_backend__global_data__PredProcId_5)), ((MR_Box) (ll_backend__global_data__ProcLayout_6)), ll_backend__global_data__ProcLayoutMap0_8, &ll_backend__global_data__ProcLayoutMap_9);
    }
#line 225 "global_data.m"
    ll_backend__global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
#line 225 "global_data.m"
    ll_backend__global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
#line 225 "global_data.m"
    ll_backend__global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
#line 225 "global_data.m"
    ll_backend__global_data__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
#line 225 "global_data.m"
    ll_backend__global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
#line 225 "global_data.m"
    ll_backend__global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
#line 225 "global_data.m"
    ll_backend__global_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
#line 225 "global_data.m"
    {
#line 225 "global_data.m"
      MR_Word base;
#line 225 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 225 "global_data.m"
      *ll_backend__global_data__STATE_VARIABLE_GlobalData_11 = base;
#line 225 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__V_19_19));
#line 225 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__ProcLayoutMap_9));
#line 225 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__V_21_21));
#line 225 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__V_22_22));
#line 225 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__V_23_23));
#line 225 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__global_data__V_24_24));
#line 225 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__global_data__V_25_25));
#line 225 "global_data.m"
    }
#line 222 "global_data.m"
  }
#line 45 "global_data.m"
}

#line 42 "global_data.m"
void MR_CALL 
ll_backend__global_data__global_data_add_new_proc_layout_4_p_0(
#line 42 "global_data.m"
  MR_Word ll_backend__global_data__PredProcId_5,
#line 42 "global_data.m"
  MR_Word ll_backend__global_data__ProcLayout_6,
#line 42 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10,
#line 42 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_GlobalData_11)
#line 42 "global_data.m"
{
#line 217 "global_data.m"
  {
#line 217 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 217 "global_data.m"
    MR_Word ll_backend__global_data__ProcLayoutMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
#line 217 "global_data.m"
    MR_Word ll_backend__global_data__ProcLayoutMap_9;
#line 218 "global_data.m"
    MR_Word ll_backend__global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
#line 218 "global_data.m"
    MR_Word ll_backend__global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
#line 218 "global_data.m"
    MR_Integer ll_backend__global_data__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
#line 218 "global_data.m"
    MR_Word ll_backend__global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
#line 218 "global_data.m"
    MR_Word ll_backend__global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
#line 218 "global_data.m"
    MR_Word ll_backend__global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
#line 220 "global_data.m"
    MR_Word ll_backend__global_data__V_19_19;
#line 220 "global_data.m"
    MR_Word ll_backend__global_data__V_21_21;
#line 220 "global_data.m"
    MR_Integer ll_backend__global_data__V_22_22;
#line 220 "global_data.m"
    MR_Word ll_backend__global_data__V_23_23;
#line 220 "global_data.m"
    MR_Word ll_backend__global_data__V_24_24;
#line 220 "global_data.m"
    MR_Word ll_backend__global_data__V_25_25;
#line 220 "global_data.m"
    MR_Word ll_backend__global_data__V_20_20;

#line 219 "global_data.m"
    {
#line 219 "global_data.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_info_0, ((MR_Box) (ll_backend__global_data__PredProcId_5)), ((MR_Box) (ll_backend__global_data__ProcLayout_6)), ll_backend__global_data__ProcLayoutMap0_8, &ll_backend__global_data__ProcLayoutMap_9);
    }
#line 220 "global_data.m"
    ll_backend__global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
#line 220 "global_data.m"
    ll_backend__global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
#line 220 "global_data.m"
    ll_backend__global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
#line 220 "global_data.m"
    ll_backend__global_data__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
#line 220 "global_data.m"
    ll_backend__global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
#line 220 "global_data.m"
    ll_backend__global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
#line 220 "global_data.m"
    ll_backend__global_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
#line 220 "global_data.m"
    {
#line 220 "global_data.m"
      MR_Word base;
#line 220 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 220 "global_data.m"
      *ll_backend__global_data__STATE_VARIABLE_GlobalData_11 = base;
#line 220 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__V_19_19));
#line 220 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__ProcLayoutMap_9));
#line 220 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__V_21_21));
#line 220 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__V_22_22));
#line 220 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__V_23_23));
#line 220 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__global_data__V_24_24));
#line 220 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__global_data__V_25_25));
#line 220 "global_data.m"
    }
#line 217 "global_data.m"
  }
#line 42 "global_data.m"
}

#line 39 "global_data.m"
void MR_CALL 
ll_backend__global_data__global_data_add_new_proc_var_4_p_0(
#line 39 "global_data.m"
  MR_Word ll_backend__global_data__PredProcId_5,
#line 39 "global_data.m"
  MR_Word ll_backend__global_data__ProcVar_6,
#line 39 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10,
#line 39 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_GlobalData_11)
#line 39 "global_data.m"
{
#line 212 "global_data.m"
  {
#line 212 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 212 "global_data.m"
    MR_Word ll_backend__global_data__ProcVarMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
#line 212 "global_data.m"
    MR_Word ll_backend__global_data__ProcVarMap_9;
#line 213 "global_data.m"
    MR_Word ll_backend__global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
#line 213 "global_data.m"
    MR_Word ll_backend__global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
#line 213 "global_data.m"
    MR_Integer ll_backend__global_data__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
#line 213 "global_data.m"
    MR_Word ll_backend__global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
#line 213 "global_data.m"
    MR_Word ll_backend__global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
#line 213 "global_data.m"
    MR_Word ll_backend__global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
#line 215 "global_data.m"
    MR_Word ll_backend__global_data__V_20_20;
#line 215 "global_data.m"
    MR_Word ll_backend__global_data__V_21_21;
#line 215 "global_data.m"
    MR_Integer ll_backend__global_data__V_22_22;
#line 215 "global_data.m"
    MR_Word ll_backend__global_data__V_23_23;
#line 215 "global_data.m"
    MR_Word ll_backend__global_data__V_24_24;
#line 215 "global_data.m"
    MR_Word ll_backend__global_data__V_25_25;
#line 215 "global_data.m"
    MR_Word ll_backend__global_data__V_19_19;

#line 214 "global_data.m"
    {
#line 214 "global_data.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_tabling_info_struct_0, ((MR_Box) (ll_backend__global_data__PredProcId_5)), ((MR_Box) (ll_backend__global_data__ProcVar_6)), ll_backend__global_data__ProcVarMap0_8, &ll_backend__global_data__ProcVarMap_9);
    }
#line 215 "global_data.m"
    ll_backend__global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
#line 215 "global_data.m"
    ll_backend__global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
#line 215 "global_data.m"
    ll_backend__global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
#line 215 "global_data.m"
    ll_backend__global_data__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
#line 215 "global_data.m"
    ll_backend__global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
#line 215 "global_data.m"
    ll_backend__global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
#line 215 "global_data.m"
    ll_backend__global_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
#line 215 "global_data.m"
    {
#line 215 "global_data.m"
      MR_Word base;
#line 215 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 215 "global_data.m"
      *ll_backend__global_data__STATE_VARIABLE_GlobalData_11 = base;
#line 215 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__ProcVarMap_9));
#line 215 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__V_20_20));
#line 215 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__V_21_21));
#line 215 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__V_22_22));
#line 215 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__V_23_23));
#line 215 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__global_data__V_24_24));
#line 215 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__global_data__V_25_25));
#line 215 "global_data.m"
    }
#line 212 "global_data.m"
  }
#line 39 "global_data.m"
}

#line 36 "global_data.m"
void MR_CALL 
ll_backend__global_data__global_data_init_4_p_0(
#line 36 "global_data.m"
  MR_Word ll_backend__global_data__StaticCellInfo_5,
#line 36 "global_data.m"
  MR_Integer ll_backend__global_data__TSStringTableSize_6,
#line 36 "global_data.m"
  MR_Word ll_backend__global_data__TSRevStringTable_7,
#line 36 "global_data.m"
  MR_Word * ll_backend__global_data__GlobalData_8)
#line 36 "global_data.m"
{
#line 205 "global_data.m"
  {
#line 205 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 205 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_13_13 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 205 "global_data.m"
    MR_Word ll_backend__global_data__EmptyDataMap_9;
#line 205 "global_data.m"
    MR_Word ll_backend__global_data__EmptyLayoutMap_10;
#line 205 "global_data.m"
    MR_Word ll_backend__global_data__V_12_12;

#line 206 "global_data.m"
    {
#line 206 "global_data.m"
      mercury__map__init_1_p_0(ll_backend__global_data__TypeCtorInfo_13_13, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_tabling_info_struct_0, &ll_backend__global_data__EmptyDataMap_9);
    }
#line 207 "global_data.m"
    {
#line 207 "global_data.m"
      mercury__map__init_1_p_0(ll_backend__global_data__TypeCtorInfo_13_13, (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_info_0, &ll_backend__global_data__EmptyLayoutMap_10);
    }
#line 208 "global_data.m"
    {
#line 208 "global_data.m"
      ll_backend__global_data__V_12_12 = mercury__set_tree234__init_0_f_0((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0);
    }
#line 208 "global_data.m"
    {
#line 208 "global_data.m"
      MR_Word base;
#line 208 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 208 "global_data.m"
      *ll_backend__global_data__GlobalData_8 = base;
#line 208 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__EmptyDataMap_9));
#line 208 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__EmptyLayoutMap_10));
#line 208 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 208 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__TSStringTableSize_6));
#line 208 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__TSRevStringTable_7));
#line 208 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__global_data__StaticCellInfo_5));
#line 208 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__global_data__V_12_12));
#line 208 "global_data.m"
    }
#line 205 "global_data.m"
  }
#line 36 "global_data.m"
}

void mercury__ll_backend__global_data__init(void)
{
}

void mercury__ll_backend__global_data__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__global_data__ll_backend__global_data__type_ctor_info_cell_type_bimap_0);
	MR_register_type_ctor_info(&ll_backend__global_data__ll_backend__global_data__type_ctor_info_cell_type_num_remap_0);
	MR_register_type_ctor_info(&ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_0);
	MR_register_type_ctor_info(&ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_remapping_0);
	MR_register_type_ctor_info(&ll_backend__global_data__ll_backend__global_data__type_ctor_info_proc_layout_map_0);
	MR_register_type_ctor_info(&ll_backend__global_data__ll_backend__global_data__type_ctor_info_proc_var_map_0);
	MR_register_type_ctor_info(&ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0);
	MR_register_type_ctor_info(&ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_remap_0);
	MR_register_type_ctor_info(&ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_type_cell_map_0);
	MR_register_type_ctor_info(&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0);
	MR_register_type_ctor_info(&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_remap_info_0);
	MR_register_type_ctor_info(&ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_sub_info_0);
	MR_register_type_ctor_info(&ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0);
	MR_register_type_ctor_info(&ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_contents_0);
	MR_register_type_ctor_info(&ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_type_cell_map_0);
}

void mercury__ll_backend__global_data__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.global_data. */
