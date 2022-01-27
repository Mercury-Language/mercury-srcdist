/*
** Automatically generated from `global_data.m'
** by the Mercury compiler,
** version rotd-2015-09-15
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
#include "ll_backend.continuation_info.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.trace_gen.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 153 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_alloc_site_id_0__plain_ll_backend__layout__type_ctor_info_layout_slot_name_0;

#line 156 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_llds_type_0;

#line 159 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__global_data__list__ti_list_1ll_backend__llds__type_ctor_info_rval_0;

#line 162 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__global_data__list__pti_list_1__plain_list__ti_list_1ll_backend__llds__type_ctor_info_rval_0;

#line 165 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_rval_0;

#line 168 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__global_data__bimap__pti_bimap_2__plain_ll_backend__llds__type_ctor_info_common_cell_type_0__plain_ll_backend__llds__type_ctor_info_type_num_0;

#line 171 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_scalar_common_data_array_0;

#line 174 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_vector_common_data_array_0;

#line 177 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_type_num_0__plain_ll_backend__llds__type_ctor_info_type_num_0;

#line 180 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_type_num_0__plain_ll_backend__global_data__type_ctor_info_scalar_cell_group_0;

#line 183 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_data_id_0ll_backend__llds__type_ctor_info_data_id_0;

#line 186 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_type_num_0__plain_tree234__ti_tree234_2ll_backend__llds__type_ctor_info_data_id_0ll_backend__llds__type_ctor_info_data_id_0;

#line 189 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_type_num_0__plain_ll_backend__global_data__type_ctor_info_vector_cell_group_0;

#line 192 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__global_data__list__pti_list_1__plain_ll_backend__llds__type_ctor_info_common_cell_value_0;

#line 195 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__global_data__bimap__pti_bimap_2__plain_list__ti_list_1ll_backend__llds__type_ctor_info_rval_0__plain_ll_backend__llds__type_ctor_info_data_id_0;

#line 198 "ll_backend.global_data.c"
static const MR_FA_PseudoTypeInfo_Struct2 ll_backend__global_data__tree234__pti_tree234_2__plain_ll_backend__llds__type_ctor_info_data_id_0__plain_ll_backend__llds__type_ctor_info_data_id_0;

#line 201 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__bimap__ti_bimap_2ll_backend__llds__type_ctor_info_common_cell_type_0ll_backend__llds__type_ctor_info_type_num_0;

#line 204 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0ll_backend__llds__type_ctor_info_type_num_0;

#line 207 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__llds__type_ctor_info_tabling_info_struct_0;

#line 210 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__continuation_info__type_ctor_info_proc_layout_info_0;

#line 213 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__global_data__list__ti_list_1ll_backend__layout__type_ctor_info_closure_proc_id_data_0;

#line 216 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__global_data__list__ti_list_1builtin__type_ctor_info_string_0;

#line 219 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__global_data__set_tree234__ti_set_tree234_1ll_backend__layout__type_ctor_info_alloc_site_info_0;

#line 222 "ll_backend.global_data.c"
static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_global_data_0_0[7];

#line 225 "ll_backend.global_data.c"
static const MR_ConstString ll_backend__global_data__ll_backend__global_data__field_names_global_data_0_0[7];

#line 228 "ll_backend.global_data.c"
static const MR_DuFunctorDesc ll_backend__global_data__ll_backend__global_data__du_functor_desc_global_data_0_0;

#line 231 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_global_data_0_0[1];

#line 234 "ll_backend.global_data.c"
static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_global_data_0[1];

#line 237 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_global_data_0[1];

#line 240 "ll_backend.global_data.c"
static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_global_data_0[1];

#line 243 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__global_data__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

#line 246 "ll_backend.global_data.c"
static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_global_data_remapping_0_0[2];

#line 249 "ll_backend.global_data.c"
static const MR_ConstString ll_backend__global_data__ll_backend__global_data__field_names_global_data_remapping_0_0[2];

#line 252 "ll_backend.global_data.c"
static const MR_DuFunctorDesc ll_backend__global_data__ll_backend__global_data__du_functor_desc_global_data_remapping_0_0;

#line 255 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_global_data_remapping_0_0[1];

#line 258 "ll_backend.global_data.c"
static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_global_data_remapping_0[1];

#line 261 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_global_data_remapping_0[1];

#line 264 "ll_backend.global_data.c"
static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_global_data_remapping_0[1];

#line 267 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__bimap__ti_bimap_2list__ti_list_1ll_backend__llds__type_ctor_info_rval_0ll_backend__llds__type_ctor_info_data_id_0;

#line 270 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__global_data__list__ti_list_1ll_backend__llds__type_ctor_info_common_cell_value_0;

#line 273 "ll_backend.global_data.c"
static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_scalar_cell_group_0_0[3];

#line 276 "ll_backend.global_data.c"
static const MR_ConstString ll_backend__global_data__ll_backend__global_data__field_names_scalar_cell_group_0_0[3];

#line 279 "ll_backend.global_data.c"
static const MR_DuFunctorDesc ll_backend__global_data__ll_backend__global_data__du_functor_desc_scalar_cell_group_0_0;

#line 282 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_scalar_cell_group_0_0[1];

#line 285 "ll_backend.global_data.c"
static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_scalar_cell_group_0[1];

#line 288 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_scalar_cell_group_0[1];

#line 291 "ll_backend.global_data.c"
static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_scalar_cell_group_0[1];

#line 294 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0ll_backend__global_data__type_ctor_info_scalar_cell_group_0;

#line 297 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0ll_backend__global_data__type_ctor_info_vector_cell_group_0;

#line 300 "ll_backend.global_data.c"
static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_static_cell_info_0_0[5];

#line 303 "ll_backend.global_data.c"
static const MR_ConstString ll_backend__global_data__ll_backend__global_data__field_names_static_cell_info_0_0[5];

#line 306 "ll_backend.global_data.c"
static const MR_DuFunctorDesc ll_backend__global_data__ll_backend__global_data__du_functor_desc_static_cell_info_0_0;

#line 309 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_static_cell_info_0_0[1];

#line 312 "ll_backend.global_data.c"
static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_static_cell_info_0[1];

#line 315 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_static_cell_info_0[1];

#line 318 "ll_backend.global_data.c"
static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_static_cell_info_0[1];

#line 321 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0tree234__ti_tree234_2ll_backend__llds__type_ctor_info_data_id_0ll_backend__llds__type_ctor_info_data_id_0;

#line 324 "ll_backend.global_data.c"
static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_static_cell_remap_info_0_0[2];

#line 327 "ll_backend.global_data.c"
static const MR_DuFunctorDesc ll_backend__global_data__ll_backend__global_data__du_functor_desc_static_cell_remap_info_0_0;

#line 330 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_static_cell_remap_info_0_0[1];

#line 333 "ll_backend.global_data.c"
static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_static_cell_remap_info_0[1];

#line 336 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_static_cell_remap_info_0[1];

#line 339 "ll_backend.global_data.c"
static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_static_cell_remap_info_0[1];

#line 342 "ll_backend.global_data.c"
static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_static_cell_sub_info_0_0[3];

#line 345 "ll_backend.global_data.c"
static const MR_ConstString ll_backend__global_data__ll_backend__global_data__field_names_static_cell_sub_info_0_0[3];

#line 348 "ll_backend.global_data.c"
static const MR_DuArgLocn ll_backend__global_data__ll_backend__global_data__field_locns_static_cell_sub_info_0_0[3];

#line 351 "ll_backend.global_data.c"
static const MR_DuFunctorDesc ll_backend__global_data__ll_backend__global_data__du_functor_desc_static_cell_sub_info_0_0;

#line 354 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_static_cell_sub_info_0_0[1];

#line 357 "ll_backend.global_data.c"
static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_static_cell_sub_info_0[1];

#line 360 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_static_cell_sub_info_0[1];

#line 363 "ll_backend.global_data.c"
static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_static_cell_sub_info_0[1];

#line 366 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__global_data__type_ctor_info_vector_contents_0;

#line 369 "ll_backend.global_data.c"
static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_vector_cell_group_0_0[2];

#line 372 "ll_backend.global_data.c"
static const MR_ConstString ll_backend__global_data__ll_backend__global_data__field_names_vector_cell_group_0_0[2];

#line 375 "ll_backend.global_data.c"
static const MR_DuFunctorDesc ll_backend__global_data__ll_backend__global_data__du_functor_desc_vector_cell_group_0_0;

#line 378 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_vector_cell_group_0_0[1];

#line 381 "ll_backend.global_data.c"
static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_vector_cell_group_0[1];

#line 384 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_vector_cell_group_0[1];

#line 387 "ll_backend.global_data.c"
static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_vector_cell_group_0[1];

#line 390 "ll_backend.global_data.c"
static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_vector_contents_0[1];

#line 393 "ll_backend.global_data.c"
static const MR_NotagFunctorDesc ll_backend__global_data__ll_backend__global_data__notag_functor_desc_vector_contents_0;

#line 396 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____cell_type_bimap_0_0_10001(
#line 399 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 401 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2);

#line 404 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____cell_type_bimap_0_0_10001(
#line 407 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 409 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 411 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3);

#line 414 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____cell_type_num_remap_0_0_10001(
#line 417 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 419 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2);

#line 422 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____cell_type_num_remap_0_0_10001(
#line 425 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 427 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 429 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3);

#line 432 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____global_data_0_0_10001(
#line 435 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 437 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2);

#line 440 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____global_data_0_0_10001(
#line 443 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 445 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 447 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3);

#line 450 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____global_data_remapping_0_0_10001(
#line 453 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 455 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2);

#line 458 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____global_data_remapping_0_0_10001(
#line 461 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 463 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 465 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3);

#line 468 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____proc_layout_map_0_0_10001(
#line 471 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 473 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2);

#line 476 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____proc_layout_map_0_0_10001(
#line 479 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 481 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 483 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3);

#line 486 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____proc_var_map_0_0_10001(
#line 489 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 491 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2);

#line 494 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____proc_var_map_0_0_10001(
#line 497 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 499 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 501 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3);

#line 504 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_cell_group_0_0_10001(
#line 507 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 509 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2);

#line 512 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____scalar_cell_group_0_0_10001(
#line 515 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 517 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 519 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3);

#line 522 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_cell_group_remap_0_0_10001(
#line 525 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 527 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2);

#line 530 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____scalar_cell_group_remap_0_0_10001(
#line 533 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 535 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 537 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3);

#line 540 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_type_cell_map_0_0_10001(
#line 543 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 545 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2);

#line 548 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____scalar_type_cell_map_0_0_10001(
#line 551 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 553 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 555 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3);

#line 558 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____static_cell_info_0_0_10001(
#line 561 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 563 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2);

#line 566 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____static_cell_info_0_0_10001(
#line 569 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 571 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 573 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3);

#line 576 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____static_cell_remap_info_0_0_10001(
#line 579 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 581 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2);

#line 584 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____static_cell_remap_info_0_0_10001(
#line 587 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 589 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 591 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3);

#line 594 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____static_cell_sub_info_0_0_10001(
#line 597 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 599 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2);

#line 602 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____static_cell_sub_info_0_0_10001(
#line 605 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 607 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 609 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3);

#line 612 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_cell_group_0_0_10001(
#line 615 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 617 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2);

#line 620 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____vector_cell_group_0_0_10001(
#line 623 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 625 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 627 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3);

#line 630 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_contents_0_0_10001(
#line 633 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 635 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2);

#line 638 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____vector_contents_0_0_10001(
#line 641 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 643 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 645 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3);

#line 648 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_type_cell_map_0_0_10001(
#line 651 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 653 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2);

#line 656 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____vector_type_cell_map_0_0_10001(
#line 659 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 661 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 663 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3);

#line 790 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data__IntroducedFrom__pred__merge_static_cell_infos__790__1_2_p_0(
#line 790 "global_data.m"
  MR_Word ll_backend__global_data__SubInfoA_9,
#line 790 "global_data.m"
  MR_Word ll_backend__global_data__SubInfoB_14);

#line 532 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data__IntroducedFrom__pred__add_vector_static_cell__532__1_1_p_0(
#line 532 "global_data.m"
  MR_Word ll_backend__global_data__VectorData_7);

#line 531 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data__IntroducedFrom__pred__add_vector_static_cell__531__1_1_p_0(
#line 531 "global_data.m"
  MR_Word ll_backend__global_data__LLDSTypes_6);

#line 336 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____vector_type_cell_map_0_0(
#line 336 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 336 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 336 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3);

#line 336 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_type_cell_map_0_0(
#line 336 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 336 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2);

#line 324 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____vector_contents_0_0(
#line 324 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 324 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 324 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3);

#line 324 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_contents_0_0(
#line 324 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 324 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2);

#line 318 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____vector_cell_group_0_0(
#line 318 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 318 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 318 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3);

#line 318 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_cell_group_0_0(
#line 318 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 318 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2);

#line 327 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____static_cell_sub_info_0_0(
#line 327 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 327 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 327 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3);

#line 327 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____static_cell_sub_info_0_0(
#line 327 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 327 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2);

#line 335 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____scalar_type_cell_map_0_0(
#line 335 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 335 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 335 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3);

#line 335 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_type_cell_map_0_0(
#line 335 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 335 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2);

#line 728 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____scalar_cell_group_remap_0_0(
#line 728 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 728 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 728 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3);

#line 728 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_cell_group_remap_0_0(
#line 728 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 728 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2);

#line 296 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____scalar_cell_group_0_0(
#line 296 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 296 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 296 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3);

#line 296 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_cell_group_0_0(
#line 296 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 296 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2);

#line 166 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____proc_var_map_0_0(
#line 166 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 166 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 166 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3);

#line 166 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____proc_var_map_0_0(
#line 166 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 166 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2);

#line 167 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____proc_layout_map_0_0(
#line 167 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 167 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 167 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3);

#line 167 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____proc_layout_map_0_0(
#line 167 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 167 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2);

#line 725 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____cell_type_num_remap_0_0(
#line 725 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 725 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 725 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3);

#line 725 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____cell_type_num_remap_0_0(
#line 725 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 725 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2);

#line 334 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____cell_type_bimap_0_0(
#line 334 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 334 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 334 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3);

#line 334 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____cell_type_bimap_0_0(
#line 334 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 334 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2);

#line 1355 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_mem_ref_3_p_0(
#line 1355 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 1355 "global_data.m"
  MR_Word ll_backend__global_data__MemRef0_5,
#line 1355 "global_data.m"
  MR_Word * ll_backend__global_data__MemRef_6);

#line 1274 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_rval_3_p_0(
#line 1274 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 1274 "global_data.m"
  MR_Word ll_backend__global_data__Rval0_5,
#line 1274 "global_data.m"
  MR_Word * ll_backend__global_data__Rval_6);

#line 1239 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_lval_3_p_0(
#line 1239 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 1239 "global_data.m"
  MR_Word ll_backend__global_data__Lval0_5,
#line 1239 "global_data.m"
  MR_Word * ll_backend__global_data__Lval_6);

#line 1231 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_foreign_proc_output_3_p_0(
#line 1231 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 1231 "global_data.m"
  MR_Word ll_backend__global_data__Output0_5,
#line 1231 "global_data.m"
  MR_Word * ll_backend__global_data__Output_6);

#line 1223 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_foreign_proc_input_3_p_0(
#line 1223 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 1223 "global_data.m"
  MR_Word ll_backend__global_data__Input0_5,
#line 1223 "global_data.m"
  MR_Word * ll_backend__global_data__Input_6);

#line 1211 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_foreign_proc_component_3_p_0_2(
#line 1211 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 1211 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 1211 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2);

#line 1207 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_foreign_proc_component_3_p_0_1(
#line 1207 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 1207 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 1207 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2);

#line 1201 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_foreign_proc_component_3_p_0(
#line 1201 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 1201 "global_data.m"
  MR_Word ll_backend__global_data__Comp0_5,
#line 1201 "global_data.m"
  MR_Word * ll_backend__global_data__Comp_6);

#line 1196 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_ts_table_index_3_p_0(
#line 1196 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 1196 "global_data.m"
  MR_Integer ll_backend__global_data__HeadVar__2_2,
#line 1196 "global_data.m"
  MR_Integer * ll_backend__global_data__HeadVar__3_3);

#line 1056 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_instr_3_p_0_2(
#line 1056 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 1056 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 1056 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2);

#line 1038 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_instr_3_p_0_1(
#line 1038 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 1038 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 1038 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2);

#line 1032 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_instr_3_p_0(
#line 1032 "global_data.m"
  MR_Word ll_backend__global_data__GlobalDataRemap_4,
#line 1032 "global_data.m"
  MR_Word ll_backend__global_data__Instr0_5,
#line 1032 "global_data.m"
  MR_Word * ll_backend__global_data__Instr_6);

#line 1024 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_instruction_3_p_0(
#line 1024 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 1024 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_Instr_0_9,
#line 1024 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Instr_10);

#line 1003 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_arg_group_value_3_p_0_1(
#line 1003 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 1003 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 1003 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2);

#line 997 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_arg_group_value_3_p_0(
#line 997 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 997 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_GroupedArgs_0_10,
#line 997 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_GroupedArgs_11);

#line 991 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_plain_value_3_p_0(
#line 991 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 991 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 991 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__3_3);

#line 983 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_common_cell_value_3_p_0_2(
#line 983 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 983 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 983 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2);

#line 987 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_common_cell_value_3_p_0_1(
#line 987 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 987 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 987 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2);

#line 977 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_common_cell_value_3_p_0(
#line 977 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 977 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_CommonCellValue_0_10,
#line 977 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_CommonCellValue_11);

#line 974 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_vector_contents_3_p_0_1(
#line 974 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 974 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 974 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2);

#line 969 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_vector_contents_3_p_0(
#line 969 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 969 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_Contents_0_8,
#line 969 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Contents_9);

#line 966 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_vector_cell_group_3_p_0_1(
#line 966 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 966 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 966 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2);

#line 961 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_vector_cell_group_3_p_0(
#line 961 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 961 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_VectorCellGroup_0_9,
#line 961 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_VectorCellGroup_10);

#line 958 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_scalar_cell_group_3_p_0_1(
#line 958 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 958 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 958 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2);

#line 953 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_scalar_cell_group_3_p_0(
#line 953 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 953 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_ScalarCellGroup_0_8,
#line 953 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_ScalarCellGroup_9);

#line 949 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_static_cell_info_3_p_0_2(
#line 949 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 949 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 949 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2);

#line 948 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_static_cell_info_3_p_0_1(
#line 948 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 948 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 948 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2);

#line 942 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_static_cell_info_3_p_0(
#line 942 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 942 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_SCI_0_10,
#line 942 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_SCI_11);

#line 928 "global_data.m"
static void MR_CALL 
ll_backend__global_data__merge_vector_cell_group_maps_2_5_p_0(
#line 928 "global_data.m"
  MR_Word ll_backend__global_data__TypeNumRemap_6,
#line 928 "global_data.m"
  MR_Word ll_backend__global_data__OldTypeNum_7,
#line 928 "global_data.m"
  MR_Word ll_backend__global_data__VectorCellGroup_8,
#line 928 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_VectorCellGroupMap_0_11,
#line 928 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_VectorCellGroupMap_12);

#line 883 "global_data.m"
static void MR_CALL 
ll_backend__global_data__merge_scalar_cell_groups_2_9_p_0(
#line 883 "global_data.m"
  MR_Word ll_backend__global_data__TypeNum_10,
#line 883 "global_data.m"
  MR_Word ll_backend__global_data__ArrayB_11,
#line 883 "global_data.m"
  MR_Word ll_backend__global_data__ArrayAB_12,
#line 883 "global_data.m"
  MR_Word ll_backend__global_data__Rvals_13,
#line 883 "global_data.m"
  MR_Word ll_backend__global_data__BDataId_14,
#line 883 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_GroupMembers_0_30,
#line 883 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_GroupMembers_31,
#line 883 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_GroupRemap_0_32,
#line 883 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_GroupRemap_33);

#line 879 "global_data.m"
static void MR_CALL 
ll_backend__global_data__merge_scalar_cell_group_maps_2_7_p_0_1(
#line 879 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 879 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 879 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 879 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_3,
#line 879 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_4,
#line 879 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_5,
#line 879 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_6);

#line 842 "global_data.m"
static void MR_CALL 
ll_backend__global_data__merge_scalar_cell_group_maps_2_7_p_0(
#line 842 "global_data.m"
  MR_Word ll_backend__global_data__TypeNumRemap_8,
#line 842 "global_data.m"
  MR_Word ll_backend__global_data__BTypeNum_9,
#line 842 "global_data.m"
  MR_Word ll_backend__global_data__BScalarCellGroup_10,
#line 842 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_ScalarCellGroupMap_0_18,
#line 842 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_ScalarCellGroupMap_19,
#line 842 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_Remap_0_20,
#line 842 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Remap_21);

#line 812 "global_data.m"
static void MR_CALL 
ll_backend__global_data__merge_cell_type_num_maps_8_p_0(
#line 812 "global_data.m"
  MR_Word ll_backend__global_data__CellType_9,
#line 812 "global_data.m"
  MR_Word ll_backend__global_data__BTypeNum_10,
#line 812 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_TypeCounter_0_17,
#line 812 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_TypeCounter_18,
#line 812 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_CellTypeNumMap_0_19,
#line 812 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_CellTypeNumMap_20,
#line 812 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_TypeNumRemap_0_21,
#line 812 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_TypeNumRemap_22);

#line 924 "global_data.m"
static void MR_CALL 
ll_backend__global_data__merge_static_cell_infos_4_p_0_4(
#line 924 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 924 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 924 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 924 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_3,
#line 924 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_4);

#line 837 "global_data.m"
static void MR_CALL 
ll_backend__global_data__merge_static_cell_infos_4_p_0_3(
#line 837 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 837 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 837 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 837 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_3,
#line 837 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_4,
#line 837 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_5,
#line 837 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_6);

#line 793 "global_data.m"
static void MR_CALL 
ll_backend__global_data__merge_static_cell_infos_4_p_0_2(
#line 793 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 793 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 793 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 793 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_3,
#line 793 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_4,
#line 793 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_5,
#line 793 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_6,
#line 793 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_7,
#line 793 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_8);

#line 790 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data__merge_static_cell_infos_4_p_0_1(
#line 790 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg);

#line 782 "global_data.m"
static void MR_CALL 
ll_backend__global_data__merge_static_cell_infos_4_p_0(
#line 782 "global_data.m"
  MR_Word ll_backend__global_data__SCIa_5,
#line 782 "global_data.m"
  MR_Word ll_backend__global_data__SCIb_6,
#line 782 "global_data.m"
  MR_Word * ll_backend__global_data__SCI_7,
#line 782 "global_data.m"
  MR_Word * ll_backend__global_data__Remap_8);

#line 708 "global_data.m"
static void MR_CALL 
ll_backend__global_data__associate_natural_type_4_p_0(
#line 708 "global_data.m"
  MR_Word ll_backend__global_data__UnboxFloat_5,
#line 708 "global_data.m"
  MR_Word ll_backend__global_data__ArgWidth_6,
#line 708 "global_data.m"
  MR_Word ll_backend__global_data__Rval_7,
#line 708 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__4_4);

#line 693 "global_data.m"
static void MR_CALL 
ll_backend__global_data__natural_type_4_p_0(
#line 693 "global_data.m"
  MR_Word ll_backend__global_data__UnboxFloat_5,
#line 693 "global_data.m"
  MR_Word ll_backend__global_data__ArgWidth_6,
#line 693 "global_data.m"
  MR_Word ll_backend__global_data__Rval_7,
#line 693 "global_data.m"
  MR_Word * ll_backend__global_data__Type_8);

#line 649 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data__threshold_group_types_5_p_0(
#line 649 "global_data.m"
  MR_Word ll_backend__global_data__CurType_6,
#line 649 "global_data.m"
  MR_Word ll_backend__global_data__RevArgsSoFar_7,
#line 649 "global_data.m"
  MR_Word ll_backend__global_data__LaterArgsTypes_8,
#line 649 "global_data.m"
  MR_Word * ll_backend__global_data__TypeGroups_9,
#line 649 "global_data.m"
  MR_Word * ll_backend__global_data__TypeAndArgGroups_10);

#line 617 "global_data.m"
static void MR_CALL 
ll_backend__global_data__add_one_vector_static_cell_6_p_0(
#line 617 "global_data.m"
  MR_Word ll_backend__global_data__TypeNum_7,
#line 617 "global_data.m"
  MR_Word ll_backend__global_data__CellType_8,
#line 617 "global_data.m"
  MR_Integer ll_backend__global_data__CellNum_9,
#line 617 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__4_4,
#line 617 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_Arrays_0_13,
#line 617 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Arrays_14);

#line 614 "global_data.m"
static void MR_CALL 
ll_backend__global_data__add_all_vector_static_cells_for_type_5_p_0_1(
#line 614 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 614 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 614 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 614 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_3,
#line 614 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_4);

#line 606 "global_data.m"
static void MR_CALL 
ll_backend__global_data__add_all_vector_static_cells_for_type_5_p_0(
#line 606 "global_data.m"
  MR_Word ll_backend__global_data__TypeNumMap_6,
#line 606 "global_data.m"
  MR_Word ll_backend__global_data__TypeNum_7,
#line 606 "global_data.m"
  MR_Word ll_backend__global_data__CellGroup_8,
#line 606 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_Arrays_0_11,
#line 606 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Arrays_12);

#line 594 "global_data.m"
static void MR_CALL 
ll_backend__global_data__add_scalar_static_cell_for_type_5_p_0(
#line 594 "global_data.m"
  MR_Word ll_backend__global_data__TypeNumMap_6,
#line 594 "global_data.m"
  MR_Word ll_backend__global_data__TypeNum_7,
#line 594 "global_data.m"
  MR_Word ll_backend__global_data__CellGroup_8,
#line 594 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_Arrays_0_13,
#line 594 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Arrays_14);

#line 578 "global_data.m"
static MR_Word MR_CALL 
ll_backend__global_data__pair_vector_element_2_f_0(
#line 578 "global_data.m"
  MR_Word ll_backend__global_data__Types_4,
#line 578 "global_data.m"
  MR_Word ll_backend__global_data__Args_5);

#line 574 "global_data.m"
static MR_Word MR_CALL 
ll_backend__global_data__init_vector_cell_group_0_f_0(void);

#line 489 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data__find_general_llds_types_in_cell_5_p_0(
#line 489 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 489 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 489 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3,
#line 489 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__4_4,
#line 489 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__5_5);

#line 480 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data__find_general_llds_types_2_5_p_0(
#line 480 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 480 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 480 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3,
#line 480 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_LLDSTypes_0_4,
#line 480 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_LLDSTypes_5);

#line 460 "global_data.m"
static MR_Word MR_CALL 
ll_backend__global_data__init_scalar_cell_group_0_f_0(void);

#line 382 "global_data.m"
static void MR_CALL 
ll_backend__global_data__do_add_scalar_static_cell_6_p_0(
#line 382 "global_data.m"
  MR_Word ll_backend__global_data__TypedArgs_7,
#line 382 "global_data.m"
  MR_Word ll_backend__global_data__CellType_8,
#line 382 "global_data.m"
  MR_Word ll_backend__global_data__CellValue_9,
#line 382 "global_data.m"
  MR_Word * ll_backend__global_data__DataId_10,
#line 382 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_Info_0_35,
#line 382 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Info_36);

#line 279 "global_data.m"
static void MR_CALL 
ll_backend__global_data__make_alloc_id_map_5_p_0(
#line 279 "global_data.m"
  MR_Word ll_backend__global_data__AllocSite_6,
#line 279 "global_data.m"
  MR_Integer ll_backend__global_data__Slot_7,
#line 279 "global_data.m"
  MR_Integer * ll_backend__global_data__HeadVar__3_3,
#line 279 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_Map_0_11,
#line 279 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Map_12);

#line 1021 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_references_to_global_data_3_p_0_1(
#line 1021 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 1021 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 1021 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2);

#line 590 "global_data.m"
static void MR_CALL 
ll_backend__global_data__get_static_cells_3_p_0_2(
#line 590 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 590 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 590 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 590 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_3,
#line 590 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_4);

#line 587 "global_data.m"
static void MR_CALL 
ll_backend__global_data__get_static_cells_3_p_0_1(
#line 587 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 587 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 587 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 587 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_3,
#line 587 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_4);

#line 540 "global_data.m"
static MR_Box MR_CALL 
ll_backend__global_data__add_vector_static_cell_5_p_0_3(
#line 540 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 540 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1);

#line 532 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data__add_vector_static_cell_5_p_0_2(
#line 532 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg);

#line 531 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data__add_vector_static_cell_5_p_0_1(
#line 531 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg);

#line 476 "global_data.m"
static void MR_CALL 
ll_backend__global_data__find_general_llds_types_4_p_0_1(
#line 476 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 476 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 476 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2);

#line 277 "global_data.m"
static void MR_CALL 
ll_backend__global_data__global_data_get_all_alloc_sites_3_p_0_1(
#line 277 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 277 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 277 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 277 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_3,
#line 277 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_4,
#line 277 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_5);

#line 365 "global_data.m"
static void MR_CALL 
ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0_1(
#line 365 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 365 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 365 "global_data.m"
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



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
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__global_data__bimap__ti_bimap_2ll_backend__llds__type_ctor_info_common_cell_type_0ll_backend__llds__type_ctor_info_type_num_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2213 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0ll_backend__llds__type_ctor_info_type_num_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0
  }
};

#line 2222 "ll_backend.global_data.c"
const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_cell_type_num_remap_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__global_data____Unify____cell_type_num_remap_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____cell_type_num_remap_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "cell_type_num_remap",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0ll_backend__llds__type_ctor_info_type_num_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2239 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__llds__type_ctor_info_tabling_info_struct_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_tabling_info_struct_0
  }
};

#line 2248 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__continuation_info__type_ctor_info_proc_layout_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0,
    (MR_TypeInfo) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_info_0
  }
};

#line 2257 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__global_data__list__ti_list_1ll_backend__layout__type_ctor_info_closure_proc_id_data_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_closure_proc_id_data_0
  }
};

#line 2265 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__global_data__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 2273 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__global_data__set_tree234__ti_set_tree234_1ll_backend__layout__type_ctor_info_alloc_site_info_0 = {
  &mercury__set_tree234__set_tree234__type_ctor_info_set_tree234_1,
  {
    (MR_TypeInfo) &ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0
  }
};

#line 2281 "ll_backend.global_data.c"
static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_global_data_0_0[7] = {
  (MR_PseudoTypeInfo) &ll_backend__global_data__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__llds__type_ctor_info_tabling_info_struct_0,
  (MR_PseudoTypeInfo) &ll_backend__global_data__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__continuation_info__type_ctor_info_proc_layout_info_0,
  (MR_PseudoTypeInfo) &ll_backend__global_data__list__ti_list_1ll_backend__layout__type_ctor_info_closure_proc_id_data_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__global_data__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0,
  (MR_PseudoTypeInfo) &ll_backend__global_data__set_tree234__ti_set_tree234_1ll_backend__layout__type_ctor_info_alloc_site_info_0
};

#line 2292 "ll_backend.global_data.c"
static const MR_ConstString ll_backend__global_data__ll_backend__global_data__field_names_global_data_0_0[7] = {
  (MR_String) "gd_proc_var_map",
  (MR_String) "gd_proc_layout_map",
  (MR_String) "gd_closure_layouts",
  (MR_String) "gd_ts_string_table_size",
  (MR_String) "gd_ts_rev_string_table",
  (MR_String) "gd_static_cell_info",
  (MR_String) "gd_alloc_sites"
};

#line 2303 "ll_backend.global_data.c"
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

#line 2318 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_global_data_0_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_global_data_0_0
};

#line 2323 "ll_backend.global_data.c"
static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_global_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__global_data__ll_backend__global_data__du_stag_ordered_global_data_0_0
  }
};

#line 2332 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_global_data_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_global_data_0_0
};

#line 2337 "ll_backend.global_data.c"
static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_global_data_0[1] = {
  (MR_Integer) 0
};

#line 2342 "ll_backend.global_data.c"
const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__global_data____Unify____global_data_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____global_data_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "global_data",
  {     ll_backend__global_data__ll_backend__global_data__du_name_ordered_global_data_0 },
  {     ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_global_data_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__global_data__ll_backend__global_data__functor_number_map_global_data_0
};

#line 2359 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__global_data__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2367 "ll_backend.global_data.c"
static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_global_data_remapping_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__global_data__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_remap_info_0
};

#line 2373 "ll_backend.global_data.c"
static const MR_ConstString ll_backend__global_data__ll_backend__global_data__field_names_global_data_remapping_0_0[2] = {
  (MR_String) "gdr_maybe_ts_table_offset",
  (MR_String) "gdr_static_cell_remap_info"
};

#line 2379 "ll_backend.global_data.c"
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

#line 2394 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_global_data_remapping_0_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_global_data_remapping_0_0
};

#line 2399 "ll_backend.global_data.c"
static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_global_data_remapping_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__global_data__ll_backend__global_data__du_stag_ordered_global_data_remapping_0_0
  }
};

#line 2408 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_global_data_remapping_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_global_data_remapping_0_0
};

#line 2413 "ll_backend.global_data.c"
static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_global_data_remapping_0[1] = {
  (MR_Integer) 0
};

#line 2418 "ll_backend.global_data.c"
const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_global_data_remapping_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__global_data____Unify____global_data_remapping_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____global_data_remapping_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "global_data_remapping",
  {     ll_backend__global_data__ll_backend__global_data__du_name_ordered_global_data_remapping_0 },
  {     ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_global_data_remapping_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__global_data__ll_backend__global_data__functor_number_map_global_data_remapping_0
};

#line 2435 "ll_backend.global_data.c"
const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_proc_layout_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__global_data____Unify____proc_layout_map_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____proc_layout_map_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "proc_layout_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__global_data__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__continuation_info__type_ctor_info_proc_layout_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2452 "ll_backend.global_data.c"
const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_proc_var_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__global_data____Unify____proc_var_map_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____proc_var_map_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "proc_var_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__global_data__tree234__ti_tree234_2hlds__hlds_pred__type_ctor_info_pred_proc_id_0ll_backend__llds__type_ctor_info_tabling_info_struct_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2469 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__bimap__ti_bimap_2list__ti_list_1ll_backend__llds__type_ctor_info_rval_0ll_backend__llds__type_ctor_info_data_id_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_TypeInfo) &ll_backend__global_data__list__ti_list_1ll_backend__llds__type_ctor_info_rval_0,
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0
  }
};

#line 2478 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__global_data__list__ti_list_1ll_backend__llds__type_ctor_info_common_cell_value_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0
  }
};

#line 2486 "ll_backend.global_data.c"
static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_scalar_cell_group_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &ll_backend__global_data__bimap__ti_bimap_2list__ti_list_1ll_backend__llds__type_ctor_info_rval_0ll_backend__llds__type_ctor_info_data_id_0,
  (MR_PseudoTypeInfo) &ll_backend__global_data__list__ti_list_1ll_backend__llds__type_ctor_info_common_cell_value_0
};

#line 2493 "ll_backend.global_data.c"
static const MR_ConstString ll_backend__global_data__ll_backend__global_data__field_names_scalar_cell_group_0_0[3] = {
  (MR_String) "scalar_cell_counter",
  (MR_String) "scalar_cell_group_members",
  (MR_String) "scalar_cell_rev_array"
};

#line 2500 "ll_backend.global_data.c"
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

#line 2515 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_scalar_cell_group_0_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_scalar_cell_group_0_0
};

#line 2520 "ll_backend.global_data.c"
static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_scalar_cell_group_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__global_data__ll_backend__global_data__du_stag_ordered_scalar_cell_group_0_0
  }
};

#line 2529 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_scalar_cell_group_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_scalar_cell_group_0_0
};

#line 2534 "ll_backend.global_data.c"
static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_scalar_cell_group_0[1] = {
  (MR_Integer) 0
};

#line 2539 "ll_backend.global_data.c"
const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__global_data____Unify____scalar_cell_group_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____scalar_cell_group_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "scalar_cell_group",
  {     ll_backend__global_data__ll_backend__global_data__du_name_ordered_scalar_cell_group_0 },
  {     ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_scalar_cell_group_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__global_data__ll_backend__global_data__functor_number_map_scalar_cell_group_0
};

#line 2556 "ll_backend.global_data.c"
const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_remap_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__global_data____Unify____scalar_cell_group_remap_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____scalar_cell_group_remap_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "scalar_cell_group_remap",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_data_id_0ll_backend__llds__type_ctor_info_data_id_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2573 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0ll_backend__global_data__type_ctor_info_scalar_cell_group_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0,
    (MR_TypeInfo) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0
  }
};

#line 2582 "ll_backend.global_data.c"
const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_type_cell_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__global_data____Unify____scalar_type_cell_map_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____scalar_type_cell_map_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "scalar_type_cell_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0ll_backend__global_data__type_ctor_info_scalar_cell_group_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2599 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0ll_backend__global_data__type_ctor_info_vector_cell_group_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0,
    (MR_TypeInfo) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0
  }
};

#line 2608 "ll_backend.global_data.c"
static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_static_cell_info_0_0[5] = {
  (MR_PseudoTypeInfo) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_sub_info_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &ll_backend__global_data__bimap__ti_bimap_2ll_backend__llds__type_ctor_info_common_cell_type_0ll_backend__llds__type_ctor_info_type_num_0,
  (MR_PseudoTypeInfo) &ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0ll_backend__global_data__type_ctor_info_scalar_cell_group_0,
  (MR_PseudoTypeInfo) &ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0ll_backend__global_data__type_ctor_info_vector_cell_group_0
};

#line 2617 "ll_backend.global_data.c"
static const MR_ConstString ll_backend__global_data__ll_backend__global_data__field_names_static_cell_info_0_0[5] = {
  (MR_String) "sci_sub_info",
  (MR_String) "sci_type_counter",
  (MR_String) "sci_cell_type_num_map",
  (MR_String) "sci_scalar_cell_group_map",
  (MR_String) "sci_vector_cell_group_map"
};

#line 2626 "ll_backend.global_data.c"
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

#line 2641 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_static_cell_info_0_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_static_cell_info_0_0
};

#line 2646 "ll_backend.global_data.c"
static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_static_cell_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__global_data__ll_backend__global_data__du_stag_ordered_static_cell_info_0_0
  }
};

#line 2655 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_static_cell_info_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_static_cell_info_0_0
};

#line 2660 "ll_backend.global_data.c"
static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_static_cell_info_0[1] = {
  (MR_Integer) 0
};

#line 2665 "ll_backend.global_data.c"
const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__global_data____Unify____static_cell_info_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____static_cell_info_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "static_cell_info",
  {     ll_backend__global_data__ll_backend__global_data__du_name_ordered_static_cell_info_0 },
  {     ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_static_cell_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__global_data__ll_backend__global_data__functor_number_map_static_cell_info_0
};

#line 2682 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0tree234__ti_tree234_2ll_backend__llds__type_ctor_info_data_id_0ll_backend__llds__type_ctor_info_data_id_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0,
    (MR_TypeInfo) &ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_data_id_0ll_backend__llds__type_ctor_info_data_id_0
  }
};

#line 2691 "ll_backend.global_data.c"
static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_static_cell_remap_info_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0ll_backend__llds__type_ctor_info_type_num_0,
  (MR_PseudoTypeInfo) &ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0tree234__ti_tree234_2ll_backend__llds__type_ctor_info_data_id_0ll_backend__llds__type_ctor_info_data_id_0
};

#line 2697 "ll_backend.global_data.c"
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

#line 2712 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_static_cell_remap_info_0_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_static_cell_remap_info_0_0
};

#line 2717 "ll_backend.global_data.c"
static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_static_cell_remap_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__global_data__ll_backend__global_data__du_stag_ordered_static_cell_remap_info_0_0
  }
};

#line 2726 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_static_cell_remap_info_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_static_cell_remap_info_0_0
};

#line 2731 "ll_backend.global_data.c"
static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_static_cell_remap_info_0[1] = {
  (MR_Integer) 0
};

#line 2736 "ll_backend.global_data.c"
const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_remap_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__global_data____Unify____static_cell_remap_info_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____static_cell_remap_info_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "static_cell_remap_info",
  {     ll_backend__global_data__ll_backend__global_data__du_name_ordered_static_cell_remap_info_0 },
  {     ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_static_cell_remap_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__global_data__ll_backend__global_data__functor_number_map_static_cell_remap_info_0
};

#line 2753 "ll_backend.global_data.c"
static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_static_cell_sub_info_0_0[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_have_unboxed_floats_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 2760 "ll_backend.global_data.c"
static const MR_ConstString ll_backend__global_data__ll_backend__global_data__field_names_static_cell_sub_info_0_0[3] = {
  (MR_String) "scsi_module_name",
  (MR_String) "scsi_unbox_float",
  (MR_String) "scsi_common_data"
};

#line 2767 "ll_backend.global_data.c"
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

#line 2786 "ll_backend.global_data.c"
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

#line 2801 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_static_cell_sub_info_0_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_static_cell_sub_info_0_0
};

#line 2806 "ll_backend.global_data.c"
static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_static_cell_sub_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__global_data__ll_backend__global_data__du_stag_ordered_static_cell_sub_info_0_0
  }
};

#line 2815 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_static_cell_sub_info_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_static_cell_sub_info_0_0
};

#line 2820 "ll_backend.global_data.c"
static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_static_cell_sub_info_0[1] = {
  (MR_Integer) 0
};

#line 2825 "ll_backend.global_data.c"
const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_static_cell_sub_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__global_data____Unify____static_cell_sub_info_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____static_cell_sub_info_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "static_cell_sub_info",
  {     ll_backend__global_data__ll_backend__global_data__du_name_ordered_static_cell_sub_info_0 },
  {     ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_static_cell_sub_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__global_data__ll_backend__global_data__functor_number_map_static_cell_sub_info_0
};

#line 2842 "ll_backend.global_data.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__global_data__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__global_data__type_ctor_info_vector_contents_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_contents_0
  }
};

#line 2851 "ll_backend.global_data.c"
static const MR_PseudoTypeInfo ll_backend__global_data__ll_backend__global_data__field_types_vector_cell_group_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &ll_backend__global_data__tree234__ti_tree234_2builtin__type_ctor_info_int_0ll_backend__global_data__type_ctor_info_vector_contents_0
};

#line 2857 "ll_backend.global_data.c"
static const MR_ConstString ll_backend__global_data__ll_backend__global_data__field_names_vector_cell_group_0_0[2] = {
  (MR_String) "vector_cell_counter",
  (MR_String) "vector_cell_map"
};

#line 2863 "ll_backend.global_data.c"
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

#line 2878 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_stag_ordered_vector_cell_group_0_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_vector_cell_group_0_0
};

#line 2883 "ll_backend.global_data.c"
static const MR_DuPtagLayout ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_vector_cell_group_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__global_data__ll_backend__global_data__du_stag_ordered_vector_cell_group_0_0
  }
};

#line 2892 "ll_backend.global_data.c"
static const MR_DuFunctorDescPtr ll_backend__global_data__ll_backend__global_data__du_name_ordered_vector_cell_group_0[1] = {
  &ll_backend__global_data__ll_backend__global_data__du_functor_desc_vector_cell_group_0_0
};

#line 2897 "ll_backend.global_data.c"
static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_vector_cell_group_0[1] = {
  (MR_Integer) 0
};

#line 2902 "ll_backend.global_data.c"
const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__global_data____Unify____vector_cell_group_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____vector_cell_group_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "vector_cell_group",
  {     ll_backend__global_data__ll_backend__global_data__du_name_ordered_vector_cell_group_0 },
  {     ll_backend__global_data__ll_backend__global_data__du_ptag_ordered_vector_cell_group_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__global_data__ll_backend__global_data__functor_number_map_vector_cell_group_0
};

#line 2919 "ll_backend.global_data.c"
static const MR_Integer ll_backend__global_data__ll_backend__global_data__functor_number_map_vector_contents_0[1] = {
  (MR_Integer) 0
};

#line 2924 "ll_backend.global_data.c"
static const MR_NotagFunctorDesc ll_backend__global_data__ll_backend__global_data__notag_functor_desc_vector_contents_0 = {
  (MR_String) "vector_contents",
  (MR_PseudoTypeInfo) &ll_backend__global_data__list__ti_list_1ll_backend__llds__type_ctor_info_common_cell_value_0,
  NULL
};

#line 2931 "ll_backend.global_data.c"
const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_contents_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (ll_backend__global_data____Unify____vector_contents_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____vector_contents_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "vector_contents",
  {     &ll_backend__global_data__ll_backend__global_data__notag_functor_desc_vector_contents_0 },
  {     &ll_backend__global_data__ll_backend__global_data__notag_functor_desc_vector_contents_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ll_backend__global_data__ll_backend__global_data__functor_number_map_vector_contents_0
};

#line 2948 "ll_backend.global_data.c"
const MR_TypeCtorInfo_Struct ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_type_cell_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__global_data____Unify____vector_type_cell_map_0_0_10001)),
  ((MR_Box) (ll_backend__global_data____Compare____vector_type_cell_map_0_0_10001)),
  (MR_String) "ll_backend.global_data",
  (MR_String) "vector_type_cell_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__global_data__tree234__ti_tree234_2ll_backend__llds__type_ctor_info_type_num_0ll_backend__global_data__type_ctor_info_vector_cell_group_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2965 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____cell_type_bimap_0_0_10001(
#line 2968 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 2970 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2)
#line 2972 "ll_backend.global_data.c"
{
#line 2974 "ll_backend.global_data.c"
  {
#line 2976 "ll_backend.global_data.c"
    MR_bool ll_backend__global_data__succeeded;

#line 2979 "ll_backend.global_data.c"
    {
#line 2981 "ll_backend.global_data.c"
      ll_backend__global_data__succeeded = ll_backend__global_data____Unify____cell_type_bimap_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    }
#line 2984 "ll_backend.global_data.c"
    return ll_backend__global_data__succeeded;
#line 2986 "ll_backend.global_data.c"
  }
#line 2988 "ll_backend.global_data.c"
}

#line 2991 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____cell_type_bimap_0_0_10001(
#line 2994 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 2996 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 2998 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3)
#line 3000 "ll_backend.global_data.c"
{
#line 3002 "ll_backend.global_data.c"
  {
#line 3004 "ll_backend.global_data.c"
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

#line 3007 "ll_backend.global_data.c"
    {
#line 3009 "ll_backend.global_data.c"
      ll_backend__global_data____Compare____cell_type_bimap_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    }
#line 3012 "ll_backend.global_data.c"
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
#line 3014 "ll_backend.global_data.c"
  }
#line 3016 "ll_backend.global_data.c"
}

#line 3019 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____cell_type_num_remap_0_0_10001(
#line 3022 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 3024 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2)
#line 3026 "ll_backend.global_data.c"
{
#line 3028 "ll_backend.global_data.c"
  {
#line 3030 "ll_backend.global_data.c"
    MR_bool ll_backend__global_data__succeeded;

#line 3033 "ll_backend.global_data.c"
    {
#line 3035 "ll_backend.global_data.c"
      ll_backend__global_data__succeeded = ll_backend__global_data____Unify____cell_type_num_remap_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    }
#line 3038 "ll_backend.global_data.c"
    return ll_backend__global_data__succeeded;
#line 3040 "ll_backend.global_data.c"
  }
#line 3042 "ll_backend.global_data.c"
}

#line 3045 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____cell_type_num_remap_0_0_10001(
#line 3048 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 3050 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 3052 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3)
#line 3054 "ll_backend.global_data.c"
{
#line 3056 "ll_backend.global_data.c"
  {
#line 3058 "ll_backend.global_data.c"
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

#line 3061 "ll_backend.global_data.c"
    {
#line 3063 "ll_backend.global_data.c"
      ll_backend__global_data____Compare____cell_type_num_remap_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    }
#line 3066 "ll_backend.global_data.c"
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
#line 3068 "ll_backend.global_data.c"
  }
#line 3070 "ll_backend.global_data.c"
}

#line 3073 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____global_data_0_0_10001(
#line 3076 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 3078 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2)
#line 3080 "ll_backend.global_data.c"
{
#line 3082 "ll_backend.global_data.c"
  {
#line 3084 "ll_backend.global_data.c"
    MR_bool ll_backend__global_data__succeeded;

#line 3087 "ll_backend.global_data.c"
    {
#line 3089 "ll_backend.global_data.c"
      ll_backend__global_data__succeeded = ll_backend__global_data____Unify____global_data_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    }
#line 3092 "ll_backend.global_data.c"
    return ll_backend__global_data__succeeded;
#line 3094 "ll_backend.global_data.c"
  }
#line 3096 "ll_backend.global_data.c"
}

#line 3099 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____global_data_0_0_10001(
#line 3102 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 3104 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 3106 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3)
#line 3108 "ll_backend.global_data.c"
{
#line 3110 "ll_backend.global_data.c"
  {
#line 3112 "ll_backend.global_data.c"
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

#line 3115 "ll_backend.global_data.c"
    {
#line 3117 "ll_backend.global_data.c"
      ll_backend__global_data____Compare____global_data_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    }
#line 3120 "ll_backend.global_data.c"
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
#line 3122 "ll_backend.global_data.c"
  }
#line 3124 "ll_backend.global_data.c"
}

#line 3127 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____global_data_remapping_0_0_10001(
#line 3130 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 3132 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2)
#line 3134 "ll_backend.global_data.c"
{
#line 3136 "ll_backend.global_data.c"
  {
#line 3138 "ll_backend.global_data.c"
    MR_bool ll_backend__global_data__succeeded;

#line 3141 "ll_backend.global_data.c"
    {
#line 3143 "ll_backend.global_data.c"
      ll_backend__global_data__succeeded = ll_backend__global_data____Unify____global_data_remapping_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    }
#line 3146 "ll_backend.global_data.c"
    return ll_backend__global_data__succeeded;
#line 3148 "ll_backend.global_data.c"
  }
#line 3150 "ll_backend.global_data.c"
}

#line 3153 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____global_data_remapping_0_0_10001(
#line 3156 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 3158 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 3160 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3)
#line 3162 "ll_backend.global_data.c"
{
#line 3164 "ll_backend.global_data.c"
  {
#line 3166 "ll_backend.global_data.c"
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

#line 3169 "ll_backend.global_data.c"
    {
#line 3171 "ll_backend.global_data.c"
      ll_backend__global_data____Compare____global_data_remapping_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    }
#line 3174 "ll_backend.global_data.c"
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
#line 3176 "ll_backend.global_data.c"
  }
#line 3178 "ll_backend.global_data.c"
}

#line 3181 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____proc_layout_map_0_0_10001(
#line 3184 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 3186 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2)
#line 3188 "ll_backend.global_data.c"
{
#line 3190 "ll_backend.global_data.c"
  {
#line 3192 "ll_backend.global_data.c"
    MR_bool ll_backend__global_data__succeeded;

#line 3195 "ll_backend.global_data.c"
    {
#line 3197 "ll_backend.global_data.c"
      ll_backend__global_data__succeeded = ll_backend__global_data____Unify____proc_layout_map_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    }
#line 3200 "ll_backend.global_data.c"
    return ll_backend__global_data__succeeded;
#line 3202 "ll_backend.global_data.c"
  }
#line 3204 "ll_backend.global_data.c"
}

#line 3207 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____proc_layout_map_0_0_10001(
#line 3210 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 3212 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 3214 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3)
#line 3216 "ll_backend.global_data.c"
{
#line 3218 "ll_backend.global_data.c"
  {
#line 3220 "ll_backend.global_data.c"
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

#line 3223 "ll_backend.global_data.c"
    {
#line 3225 "ll_backend.global_data.c"
      ll_backend__global_data____Compare____proc_layout_map_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    }
#line 3228 "ll_backend.global_data.c"
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
#line 3230 "ll_backend.global_data.c"
  }
#line 3232 "ll_backend.global_data.c"
}

#line 3235 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____proc_var_map_0_0_10001(
#line 3238 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 3240 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2)
#line 3242 "ll_backend.global_data.c"
{
#line 3244 "ll_backend.global_data.c"
  {
#line 3246 "ll_backend.global_data.c"
    MR_bool ll_backend__global_data__succeeded;

#line 3249 "ll_backend.global_data.c"
    {
#line 3251 "ll_backend.global_data.c"
      ll_backend__global_data__succeeded = ll_backend__global_data____Unify____proc_var_map_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    }
#line 3254 "ll_backend.global_data.c"
    return ll_backend__global_data__succeeded;
#line 3256 "ll_backend.global_data.c"
  }
#line 3258 "ll_backend.global_data.c"
}

#line 3261 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____proc_var_map_0_0_10001(
#line 3264 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 3266 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 3268 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3)
#line 3270 "ll_backend.global_data.c"
{
#line 3272 "ll_backend.global_data.c"
  {
#line 3274 "ll_backend.global_data.c"
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

#line 3277 "ll_backend.global_data.c"
    {
#line 3279 "ll_backend.global_data.c"
      ll_backend__global_data____Compare____proc_var_map_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    }
#line 3282 "ll_backend.global_data.c"
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
#line 3284 "ll_backend.global_data.c"
  }
#line 3286 "ll_backend.global_data.c"
}

#line 3289 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_cell_group_0_0_10001(
#line 3292 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 3294 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2)
#line 3296 "ll_backend.global_data.c"
{
#line 3298 "ll_backend.global_data.c"
  {
#line 3300 "ll_backend.global_data.c"
    MR_bool ll_backend__global_data__succeeded;

#line 3303 "ll_backend.global_data.c"
    {
#line 3305 "ll_backend.global_data.c"
      ll_backend__global_data__succeeded = ll_backend__global_data____Unify____scalar_cell_group_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    }
#line 3308 "ll_backend.global_data.c"
    return ll_backend__global_data__succeeded;
#line 3310 "ll_backend.global_data.c"
  }
#line 3312 "ll_backend.global_data.c"
}

#line 3315 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____scalar_cell_group_0_0_10001(
#line 3318 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 3320 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 3322 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3)
#line 3324 "ll_backend.global_data.c"
{
#line 3326 "ll_backend.global_data.c"
  {
#line 3328 "ll_backend.global_data.c"
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

#line 3331 "ll_backend.global_data.c"
    {
#line 3333 "ll_backend.global_data.c"
      ll_backend__global_data____Compare____scalar_cell_group_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    }
#line 3336 "ll_backend.global_data.c"
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
#line 3338 "ll_backend.global_data.c"
  }
#line 3340 "ll_backend.global_data.c"
}

#line 3343 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_cell_group_remap_0_0_10001(
#line 3346 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 3348 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2)
#line 3350 "ll_backend.global_data.c"
{
#line 3352 "ll_backend.global_data.c"
  {
#line 3354 "ll_backend.global_data.c"
    MR_bool ll_backend__global_data__succeeded;

#line 3357 "ll_backend.global_data.c"
    {
#line 3359 "ll_backend.global_data.c"
      ll_backend__global_data__succeeded = ll_backend__global_data____Unify____scalar_cell_group_remap_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    }
#line 3362 "ll_backend.global_data.c"
    return ll_backend__global_data__succeeded;
#line 3364 "ll_backend.global_data.c"
  }
#line 3366 "ll_backend.global_data.c"
}

#line 3369 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____scalar_cell_group_remap_0_0_10001(
#line 3372 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 3374 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 3376 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3)
#line 3378 "ll_backend.global_data.c"
{
#line 3380 "ll_backend.global_data.c"
  {
#line 3382 "ll_backend.global_data.c"
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

#line 3385 "ll_backend.global_data.c"
    {
#line 3387 "ll_backend.global_data.c"
      ll_backend__global_data____Compare____scalar_cell_group_remap_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    }
#line 3390 "ll_backend.global_data.c"
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
#line 3392 "ll_backend.global_data.c"
  }
#line 3394 "ll_backend.global_data.c"
}

#line 3397 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_type_cell_map_0_0_10001(
#line 3400 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 3402 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2)
#line 3404 "ll_backend.global_data.c"
{
#line 3406 "ll_backend.global_data.c"
  {
#line 3408 "ll_backend.global_data.c"
    MR_bool ll_backend__global_data__succeeded;

#line 3411 "ll_backend.global_data.c"
    {
#line 3413 "ll_backend.global_data.c"
      ll_backend__global_data__succeeded = ll_backend__global_data____Unify____scalar_type_cell_map_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    }
#line 3416 "ll_backend.global_data.c"
    return ll_backend__global_data__succeeded;
#line 3418 "ll_backend.global_data.c"
  }
#line 3420 "ll_backend.global_data.c"
}

#line 3423 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____scalar_type_cell_map_0_0_10001(
#line 3426 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 3428 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 3430 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3)
#line 3432 "ll_backend.global_data.c"
{
#line 3434 "ll_backend.global_data.c"
  {
#line 3436 "ll_backend.global_data.c"
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

#line 3439 "ll_backend.global_data.c"
    {
#line 3441 "ll_backend.global_data.c"
      ll_backend__global_data____Compare____scalar_type_cell_map_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    }
#line 3444 "ll_backend.global_data.c"
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
#line 3446 "ll_backend.global_data.c"
  }
#line 3448 "ll_backend.global_data.c"
}

#line 3451 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____static_cell_info_0_0_10001(
#line 3454 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 3456 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2)
#line 3458 "ll_backend.global_data.c"
{
#line 3460 "ll_backend.global_data.c"
  {
#line 3462 "ll_backend.global_data.c"
    MR_bool ll_backend__global_data__succeeded;

#line 3465 "ll_backend.global_data.c"
    {
#line 3467 "ll_backend.global_data.c"
      ll_backend__global_data__succeeded = ll_backend__global_data____Unify____static_cell_info_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    }
#line 3470 "ll_backend.global_data.c"
    return ll_backend__global_data__succeeded;
#line 3472 "ll_backend.global_data.c"
  }
#line 3474 "ll_backend.global_data.c"
}

#line 3477 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____static_cell_info_0_0_10001(
#line 3480 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 3482 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 3484 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3)
#line 3486 "ll_backend.global_data.c"
{
#line 3488 "ll_backend.global_data.c"
  {
#line 3490 "ll_backend.global_data.c"
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

#line 3493 "ll_backend.global_data.c"
    {
#line 3495 "ll_backend.global_data.c"
      ll_backend__global_data____Compare____static_cell_info_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    }
#line 3498 "ll_backend.global_data.c"
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
#line 3500 "ll_backend.global_data.c"
  }
#line 3502 "ll_backend.global_data.c"
}

#line 3505 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____static_cell_remap_info_0_0_10001(
#line 3508 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 3510 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2)
#line 3512 "ll_backend.global_data.c"
{
#line 3514 "ll_backend.global_data.c"
  {
#line 3516 "ll_backend.global_data.c"
    MR_bool ll_backend__global_data__succeeded;

#line 3519 "ll_backend.global_data.c"
    {
#line 3521 "ll_backend.global_data.c"
      ll_backend__global_data__succeeded = ll_backend__global_data____Unify____static_cell_remap_info_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    }
#line 3524 "ll_backend.global_data.c"
    return ll_backend__global_data__succeeded;
#line 3526 "ll_backend.global_data.c"
  }
#line 3528 "ll_backend.global_data.c"
}

#line 3531 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____static_cell_remap_info_0_0_10001(
#line 3534 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 3536 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 3538 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3)
#line 3540 "ll_backend.global_data.c"
{
#line 3542 "ll_backend.global_data.c"
  {
#line 3544 "ll_backend.global_data.c"
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

#line 3547 "ll_backend.global_data.c"
    {
#line 3549 "ll_backend.global_data.c"
      ll_backend__global_data____Compare____static_cell_remap_info_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    }
#line 3552 "ll_backend.global_data.c"
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
#line 3554 "ll_backend.global_data.c"
  }
#line 3556 "ll_backend.global_data.c"
}

#line 3559 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____static_cell_sub_info_0_0_10001(
#line 3562 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 3564 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2)
#line 3566 "ll_backend.global_data.c"
{
#line 3568 "ll_backend.global_data.c"
  {
#line 3570 "ll_backend.global_data.c"
    MR_bool ll_backend__global_data__succeeded;

#line 3573 "ll_backend.global_data.c"
    {
#line 3575 "ll_backend.global_data.c"
      ll_backend__global_data__succeeded = ll_backend__global_data____Unify____static_cell_sub_info_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    }
#line 3578 "ll_backend.global_data.c"
    return ll_backend__global_data__succeeded;
#line 3580 "ll_backend.global_data.c"
  }
#line 3582 "ll_backend.global_data.c"
}

#line 3585 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____static_cell_sub_info_0_0_10001(
#line 3588 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 3590 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 3592 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3)
#line 3594 "ll_backend.global_data.c"
{
#line 3596 "ll_backend.global_data.c"
  {
#line 3598 "ll_backend.global_data.c"
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

#line 3601 "ll_backend.global_data.c"
    {
#line 3603 "ll_backend.global_data.c"
      ll_backend__global_data____Compare____static_cell_sub_info_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    }
#line 3606 "ll_backend.global_data.c"
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
#line 3608 "ll_backend.global_data.c"
  }
#line 3610 "ll_backend.global_data.c"
}

#line 3613 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_cell_group_0_0_10001(
#line 3616 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 3618 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2)
#line 3620 "ll_backend.global_data.c"
{
#line 3622 "ll_backend.global_data.c"
  {
#line 3624 "ll_backend.global_data.c"
    MR_bool ll_backend__global_data__succeeded;

#line 3627 "ll_backend.global_data.c"
    {
#line 3629 "ll_backend.global_data.c"
      ll_backend__global_data__succeeded = ll_backend__global_data____Unify____vector_cell_group_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    }
#line 3632 "ll_backend.global_data.c"
    return ll_backend__global_data__succeeded;
#line 3634 "ll_backend.global_data.c"
  }
#line 3636 "ll_backend.global_data.c"
}

#line 3639 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____vector_cell_group_0_0_10001(
#line 3642 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 3644 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 3646 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3)
#line 3648 "ll_backend.global_data.c"
{
#line 3650 "ll_backend.global_data.c"
  {
#line 3652 "ll_backend.global_data.c"
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

#line 3655 "ll_backend.global_data.c"
    {
#line 3657 "ll_backend.global_data.c"
      ll_backend__global_data____Compare____vector_cell_group_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    }
#line 3660 "ll_backend.global_data.c"
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
#line 3662 "ll_backend.global_data.c"
  }
#line 3664 "ll_backend.global_data.c"
}

#line 3667 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_contents_0_0_10001(
#line 3670 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 3672 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2)
#line 3674 "ll_backend.global_data.c"
{
#line 3676 "ll_backend.global_data.c"
  {
#line 3678 "ll_backend.global_data.c"
    MR_bool ll_backend__global_data__succeeded;

#line 3681 "ll_backend.global_data.c"
    {
#line 3683 "ll_backend.global_data.c"
      ll_backend__global_data__succeeded = ll_backend__global_data____Unify____vector_contents_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    }
#line 3686 "ll_backend.global_data.c"
    return ll_backend__global_data__succeeded;
#line 3688 "ll_backend.global_data.c"
  }
#line 3690 "ll_backend.global_data.c"
}

#line 3693 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____vector_contents_0_0_10001(
#line 3696 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 3698 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 3700 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3)
#line 3702 "ll_backend.global_data.c"
{
#line 3704 "ll_backend.global_data.c"
  {
#line 3706 "ll_backend.global_data.c"
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

#line 3709 "ll_backend.global_data.c"
    {
#line 3711 "ll_backend.global_data.c"
      ll_backend__global_data____Compare____vector_contents_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    }
#line 3714 "ll_backend.global_data.c"
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
#line 3716 "ll_backend.global_data.c"
  }
#line 3718 "ll_backend.global_data.c"
}

#line 3721 "ll_backend.global_data.c"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_type_cell_map_0_0_10001(
#line 3724 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 3726 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2)
#line 3728 "ll_backend.global_data.c"
{
#line 3730 "ll_backend.global_data.c"
  {
#line 3732 "ll_backend.global_data.c"
    MR_bool ll_backend__global_data__succeeded;

#line 3735 "ll_backend.global_data.c"
    {
#line 3737 "ll_backend.global_data.c"
      ll_backend__global_data__succeeded = ll_backend__global_data____Unify____vector_type_cell_map_0_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2));
    }
#line 3740 "ll_backend.global_data.c"
    return ll_backend__global_data__succeeded;
#line 3742 "ll_backend.global_data.c"
  }
#line 3744 "ll_backend.global_data.c"
}

#line 3747 "ll_backend.global_data.c"
static void MR_CALL 
ll_backend__global_data____Compare____vector_type_cell_map_0_0_10001(
#line 3750 "ll_backend.global_data.c"
  MR_Box * ll_backend__global_data__wrapper_arg_1,
#line 3752 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 3754 "ll_backend.global_data.c"
  MR_Box ll_backend__global_data__wrapper_arg_3)
#line 3756 "ll_backend.global_data.c"
{
#line 3758 "ll_backend.global_data.c"
  {
#line 3760 "ll_backend.global_data.c"
    MR_Word ll_backend__global_data__conv0_HeadVar__1_1;

#line 3763 "ll_backend.global_data.c"
    {
#line 3765 "ll_backend.global_data.c"
      ll_backend__global_data____Compare____vector_type_cell_map_0_0(&ll_backend__global_data__conv0_HeadVar__1_1, ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3));
    }
#line 3768 "ll_backend.global_data.c"
    *ll_backend__global_data__wrapper_arg_1 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__1_1));
#line 3770 "ll_backend.global_data.c"
  }
#line 3772 "ll_backend.global_data.c"
}

#line 790 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data__IntroducedFrom__pred__merge_static_cell_infos__790__1_2_p_0(
#line 790 "global_data.m"
  MR_Word ll_backend__global_data__SubInfoA_9,
#line 790 "global_data.m"
  MR_Word ll_backend__global_data__SubInfoB_14)
#line 790 "global_data.m"
{
#line 327 "global_data.m"
  {
#line 327 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 327 "global_data.m"
    MR_Integer ll_backend__global_data__CastX_52 = (MR_Integer) ll_backend__global_data__SubInfoA_9;
#line 327 "global_data.m"
    MR_Integer ll_backend__global_data__CastY_53 = (MR_Integer) ll_backend__global_data__SubInfoB_14;

#line 327 "global_data.m"
    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_52 == ll_backend__global_data__CastY_53);
#line 327 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 327 "global_data.m"
      ll_backend__global_data__succeeded = MR_TRUE;
#line 327 "global_data.m"
    else
#line 327 "global_data.m"
      {
#line 327 "global_data.m"
        MR_Word ll_backend__global_data__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SubInfoA_9, (MR_Integer) 0)));
#line 327 "global_data.m"
        MR_Word ll_backend__global_data__V_47_47 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SubInfoA_9, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 327 "global_data.m"
        MR_Word ll_backend__global_data__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SubInfoA_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 327 "global_data.m"
        MR_Word ll_backend__global_data__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SubInfoB_14, (MR_Integer) 0)));
#line 327 "global_data.m"
        MR_Word ll_backend__global_data__V_50_50 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SubInfoB_14, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 327 "global_data.m"
        MR_Word ll_backend__global_data__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SubInfoB_14, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 3816 "ll_backend.global_data.c"
        {
#line 3818 "ll_backend.global_data.c"
          ll_backend__global_data__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__global_data__V_46_46, ll_backend__global_data__V_49_49);
        }
#line 327 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 327 "global_data.m"
          {
#line 3825 "ll_backend.global_data.c"
            ll_backend__global_data__succeeded = (ll_backend__global_data__V_47_47 == ll_backend__global_data__V_50_50);
#line 327 "global_data.m"
            if (ll_backend__global_data__succeeded)
#line 3829 "ll_backend.global_data.c"
              ll_backend__global_data__succeeded = (ll_backend__global_data__V_48_48 == ll_backend__global_data__V_51_51);
#line 327 "global_data.m"
          }
#line 327 "global_data.m"
      }
#line 327 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 327 "global_data.m"
  }
#line 790 "global_data.m"
}

#line 532 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data__IntroducedFrom__pred__add_vector_static_cell__532__1_1_p_0(
#line 532 "global_data.m"
  MR_Word ll_backend__global_data__VectorData_7)
#line 532 "global_data.m"
{
#line 532 "global_data.m"
  {
#line 532 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;

#line 532 "global_data.m"
    {
#line 532 "global_data.m"
      return ll_backend__global_data__succeeded = mercury__list__is_not_empty_1_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[0], ll_backend__global_data__VectorData_7);
    }
#line 532 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 532 "global_data.m"
  }
#line 532 "global_data.m"
}

#line 531 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data__IntroducedFrom__pred__add_vector_static_cell__531__1_1_p_0(
#line 531 "global_data.m"
  MR_Word ll_backend__global_data__LLDSTypes_6)
#line 531 "global_data.m"
{
#line 531 "global_data.m"
  {
#line 531 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;

#line 531 "global_data.m"
    {
#line 531 "global_data.m"
      return ll_backend__global_data__succeeded = mercury__list__is_not_empty_1_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0, ll_backend__global_data__LLDSTypes_6);
    }
#line 531 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 531 "global_data.m"
  }
#line 531 "global_data.m"
}

#line 336 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____vector_type_cell_map_0_0(
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
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[7], ll_backend__global_data__HeadVar__1_1, ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_5)));
#line 336 "global_data.m"
      return;
    }
#line 336 "global_data.m"
  }
#line 336 "global_data.m"
}

#line 336 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_type_cell_map_0_0(
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
      return ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[7], ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_4)));
    }
#line 336 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 336 "global_data.m"
  }
#line 336 "global_data.m"
}

#line 324 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____vector_contents_0_0(
#line 324 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 324 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 324 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3)
#line 324 "global_data.m"
{
#line 324 "global_data.m"
  {
#line 324 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 324 "global_data.m"
    MR_Integer ll_backend__global_data__CastX_6 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;
#line 324 "global_data.m"
    MR_Integer ll_backend__global_data__CastY_7 = (MR_Integer) ll_backend__global_data__HeadVar__3_3;

#line 324 "global_data.m"
    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_6 == ll_backend__global_data__CastY_7);
#line 324 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 3976 "ll_backend.global_data.c"
      *ll_backend__global_data__HeadVar__1_1 = (MR_Integer) 0;
#line 324 "global_data.m"
    else
#line 324 "global_data.m"
      {
#line 324 "global_data.m"
        MR_Word ll_backend__global_data__V_4_4 = (MR_Word) ll_backend__global_data__HeadVar__2_2;
#line 324 "global_data.m"
        MR_Word ll_backend__global_data__V_5_5 = (MR_Word) ll_backend__global_data__HeadVar__3_3;

#line 324 "global_data.m"
        {
#line 324 "global_data.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[7], ll_backend__global_data__HeadVar__1_1, ((MR_Box) (ll_backend__global_data__V_4_4)), ((MR_Box) (ll_backend__global_data__V_5_5)));
#line 324 "global_data.m"
          return;
        }
#line 324 "global_data.m"
      }
#line 324 "global_data.m"
  }
#line 324 "global_data.m"
}

#line 324 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_contents_0_0(
#line 324 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 324 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2)
#line 324 "global_data.m"
{
#line 324 "global_data.m"
  {
#line 324 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 324 "global_data.m"
    MR_Integer ll_backend__global_data__CastX_5 = (MR_Integer) ll_backend__global_data__HeadVar__1_1;
#line 324 "global_data.m"
    MR_Integer ll_backend__global_data__CastY_6 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;

#line 324 "global_data.m"
    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_5 == ll_backend__global_data__CastY_6);
#line 324 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 324 "global_data.m"
      ll_backend__global_data__succeeded = MR_TRUE;
#line 324 "global_data.m"
    else
#line 324 "global_data.m"
      {
#line 324 "global_data.m"
        MR_Word ll_backend__global_data__V_3_3 = (MR_Word) ll_backend__global_data__HeadVar__1_1;
#line 324 "global_data.m"
        MR_Word ll_backend__global_data__V_4_4 = (MR_Word) ll_backend__global_data__HeadVar__2_2;

#line 4034 "ll_backend.global_data.c"
        {
#line 4036 "ll_backend.global_data.c"
          return ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[7], ((MR_Box) (ll_backend__global_data__V_3_3)), ((MR_Box) (ll_backend__global_data__V_4_4)));
        }
#line 324 "global_data.m"
      }
#line 324 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 324 "global_data.m"
  }
#line 324 "global_data.m"
}

#line 318 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____vector_cell_group_0_0(
#line 318 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 318 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 318 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3)
#line 318 "global_data.m"
{
#line 318 "global_data.m"
  {
#line 318 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 318 "global_data.m"
    MR_Integer ll_backend__global_data__CastX_9 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;
#line 318 "global_data.m"
    MR_Integer ll_backend__global_data__CastY_10 = (MR_Integer) ll_backend__global_data__HeadVar__3_3;

#line 318 "global_data.m"
    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_9 == ll_backend__global_data__CastY_10);
#line 318 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 4072 "ll_backend.global_data.c"
      *ll_backend__global_data__HeadVar__1_1 = (MR_Integer) 0;
#line 318 "global_data.m"
    else
#line 318 "global_data.m"
      {
#line 318 "global_data.m"
        MR_Word ll_backend__global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 318 "global_data.m"
        MR_Word ll_backend__global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 318 "global_data.m"
        MR_Word ll_backend__global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 0)));
#line 318 "global_data.m"
        MR_Word ll_backend__global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 1)));
#line 318 "global_data.m"
        MR_Word ll_backend__global_data__V_8_8;

#line 318 "global_data.m"
        {
#line 318 "global_data.m"
          mercury__counter____Compare____counter_0_0(&ll_backend__global_data__V_8_8, ll_backend__global_data__V_4_4, ll_backend__global_data__V_6_6);
        }
#line 4094 "ll_backend.global_data.c"
        ll_backend__global_data__succeeded = (ll_backend__global_data__V_8_8 == (MR_Integer) 0);
#line 318 "global_data.m"
        ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 318 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 318 "global_data.m"
          *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__V_8_8;
#line 318 "global_data.m"
        else
#line 318 "global_data.m"
          {
#line 318 "global_data.m"
            {
#line 318 "global_data.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[10], ll_backend__global_data__HeadVar__1_1, ((MR_Box) (ll_backend__global_data__V_5_5)), ((MR_Box) (ll_backend__global_data__V_7_7)));
#line 318 "global_data.m"
              return;
            }
#line 318 "global_data.m"
          }
#line 318 "global_data.m"
      }
#line 318 "global_data.m"
  }
#line 318 "global_data.m"
}

#line 318 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____vector_cell_group_0_0(
#line 318 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 318 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2)
#line 318 "global_data.m"
{
#line 318 "global_data.m"
  {
#line 318 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 318 "global_data.m"
    MR_Integer ll_backend__global_data__CastX_7 = (MR_Integer) ll_backend__global_data__HeadVar__1_1;
#line 318 "global_data.m"
    MR_Integer ll_backend__global_data__CastY_8 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;

#line 318 "global_data.m"
    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_7 == ll_backend__global_data__CastY_8);
#line 318 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 318 "global_data.m"
      ll_backend__global_data__succeeded = MR_TRUE;
#line 318 "global_data.m"
    else
#line 318 "global_data.m"
      {
#line 318 "global_data.m"
        MR_Word ll_backend__global_data__TypeInfo_10_10;
#line 318 "global_data.m"
        MR_Word ll_backend__global_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 0)));
#line 318 "global_data.m"
        MR_Word ll_backend__global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 1)));
#line 318 "global_data.m"
        MR_Word ll_backend__global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 318 "global_data.m"
        MR_Word ll_backend__global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));

#line 4161 "ll_backend.global_data.c"
        {
#line 4163 "ll_backend.global_data.c"
          ll_backend__global_data__succeeded = mercury__counter____Unify____counter_0_0(ll_backend__global_data__V_3_3, ll_backend__global_data__V_5_5);
        }
#line 318 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 318 "global_data.m"
          {
#line 4170 "ll_backend.global_data.c"
            ll_backend__global_data__TypeInfo_10_10 = (MR_Word) &ll_backend__global_data_scalar_common_1[10];
#line 4172 "ll_backend.global_data.c"
            {
#line 4174 "ll_backend.global_data.c"
              return ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0(ll_backend__global_data__TypeInfo_10_10, ((MR_Box) (ll_backend__global_data__V_4_4)), ((MR_Box) (ll_backend__global_data__V_6_6)));
            }
#line 318 "global_data.m"
          }
#line 318 "global_data.m"
      }
#line 318 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 318 "global_data.m"
  }
#line 318 "global_data.m"
}

#line 327 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____static_cell_sub_info_0_0(
#line 327 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 327 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 327 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3)
#line 327 "global_data.m"
{
#line 327 "global_data.m"
  {
#line 327 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 327 "global_data.m"
    MR_Integer ll_backend__global_data__CastX_12 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;
#line 327 "global_data.m"
    MR_Integer ll_backend__global_data__CastY_13 = (MR_Integer) ll_backend__global_data__HeadVar__3_3;

#line 327 "global_data.m"
    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_12 == ll_backend__global_data__CastY_13);
#line 327 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 4212 "ll_backend.global_data.c"
      *ll_backend__global_data__HeadVar__1_1 = (MR_Integer) 0;
#line 327 "global_data.m"
    else
#line 327 "global_data.m"
      {
#line 327 "global_data.m"
        MR_Word ll_backend__global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 327 "global_data.m"
        MR_Word ll_backend__global_data__V_5_5 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 327 "global_data.m"
        MR_Word ll_backend__global_data__V_6_6 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 327 "global_data.m"
        MR_Word ll_backend__global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 0)));
#line 327 "global_data.m"
        MR_Word ll_backend__global_data__V_8_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 327 "global_data.m"
        MR_Word ll_backend__global_data__V_9_9 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 327 "global_data.m"
        MR_Word ll_backend__global_data__V_10_10;

#line 327 "global_data.m"
        {
#line 327 "global_data.m"
          mdbcomp__sym_name____Compare____sym_name_0_0(&ll_backend__global_data__V_10_10, ll_backend__global_data__V_4_4, ll_backend__global_data__V_7_7);
        }
#line 4238 "ll_backend.global_data.c"
        ll_backend__global_data__succeeded = (ll_backend__global_data__V_10_10 == (MR_Integer) 0);
#line 327 "global_data.m"
        ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 327 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 327 "global_data.m"
          *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__V_10_10;
#line 327 "global_data.m"
        else
#line 327 "global_data.m"
          {
#line 327 "global_data.m"
            MR_Word ll_backend__global_data__V_11_11;
#line 327 "global_data.m"
            MR_Integer ll_backend__global_data__V_17_17 = (MR_Integer) ll_backend__global_data__V_5_5;
#line 327 "global_data.m"
            MR_Integer ll_backend__global_data__V_18_18 = (MR_Integer) ll_backend__global_data__V_8_8;

#line 327 "global_data.m"
            {
#line 327 "global_data.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__global_data__V_11_11, ll_backend__global_data__V_17_17, ll_backend__global_data__V_18_18);
            }
#line 4262 "ll_backend.global_data.c"
            ll_backend__global_data__succeeded = (ll_backend__global_data__V_11_11 == (MR_Integer) 0);
#line 327 "global_data.m"
            ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 327 "global_data.m"
            if (ll_backend__global_data__succeeded)
#line 327 "global_data.m"
              *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__V_11_11;
#line 327 "global_data.m"
            else
#line 327 "global_data.m"
              {
#line 327 "global_data.m"
                MR_Integer ll_backend__global_data__V_19_19 = (MR_Integer) ll_backend__global_data__V_6_6;
#line 327 "global_data.m"
                MR_Integer ll_backend__global_data__V_20_20 = (MR_Integer) ll_backend__global_data__V_9_9;

#line 327 "global_data.m"
                {
#line 327 "global_data.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(ll_backend__global_data__HeadVar__1_1, ll_backend__global_data__V_19_19, ll_backend__global_data__V_20_20);
#line 327 "global_data.m"
                  return;
                }
#line 327 "global_data.m"
              }
#line 327 "global_data.m"
          }
#line 327 "global_data.m"
      }
#line 327 "global_data.m"
  }
#line 327 "global_data.m"
}

#line 327 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____static_cell_sub_info_0_0(
#line 327 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 327 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2)
#line 327 "global_data.m"
{
#line 327 "global_data.m"
  {
#line 327 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 327 "global_data.m"
    MR_Integer ll_backend__global_data__CastX_9 = (MR_Integer) ll_backend__global_data__HeadVar__1_1;
#line 327 "global_data.m"
    MR_Integer ll_backend__global_data__CastY_10 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;

#line 327 "global_data.m"
    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_9 == ll_backend__global_data__CastY_10);
#line 327 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 327 "global_data.m"
      ll_backend__global_data__succeeded = MR_TRUE;
#line 327 "global_data.m"
    else
#line 327 "global_data.m"
      {
#line 327 "global_data.m"
        MR_Word ll_backend__global_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 0)));
#line 327 "global_data.m"
        MR_Word ll_backend__global_data__V_4_4 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 327 "global_data.m"
        MR_Word ll_backend__global_data__V_5_5 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 327 "global_data.m"
        MR_Word ll_backend__global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 327 "global_data.m"
        MR_Word ll_backend__global_data__V_7_7 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 327 "global_data.m"
        MR_Word ll_backend__global_data__V_8_8 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 4338 "ll_backend.global_data.c"
        {
#line 4340 "ll_backend.global_data.c"
          ll_backend__global_data__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__global_data__V_3_3, ll_backend__global_data__V_6_6);
        }
#line 327 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 327 "global_data.m"
          {
#line 4347 "ll_backend.global_data.c"
            ll_backend__global_data__succeeded = (ll_backend__global_data__V_4_4 == ll_backend__global_data__V_7_7);
#line 327 "global_data.m"
            if (ll_backend__global_data__succeeded)
#line 4351 "ll_backend.global_data.c"
              ll_backend__global_data__succeeded = (ll_backend__global_data__V_5_5 == ll_backend__global_data__V_8_8);
#line 327 "global_data.m"
          }
#line 327 "global_data.m"
      }
#line 327 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 327 "global_data.m"
  }
#line 327 "global_data.m"
}

#line 717 "global_data.m"
void MR_CALL 
ll_backend__global_data____Compare____static_cell_remap_info_0_0(
#line 717 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 717 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 717 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3)
#line 717 "global_data.m"
{
#line 717 "global_data.m"
  {
#line 717 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 717 "global_data.m"
    MR_Integer ll_backend__global_data__CastX_9 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;
#line 717 "global_data.m"
    MR_Integer ll_backend__global_data__CastY_10 = (MR_Integer) ll_backend__global_data__HeadVar__3_3;

#line 717 "global_data.m"
    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_9 == ll_backend__global_data__CastY_10);
#line 717 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 4388 "ll_backend.global_data.c"
      *ll_backend__global_data__HeadVar__1_1 = (MR_Integer) 0;
#line 717 "global_data.m"
    else
#line 717 "global_data.m"
      {
#line 717 "global_data.m"
        MR_Word ll_backend__global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 717 "global_data.m"
        MR_Word ll_backend__global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 717 "global_data.m"
        MR_Word ll_backend__global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 0)));
#line 717 "global_data.m"
        MR_Word ll_backend__global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 1)));
#line 717 "global_data.m"
        MR_Word ll_backend__global_data__V_8_8;

#line 717 "global_data.m"
        {
#line 717 "global_data.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[2], &ll_backend__global_data__V_8_8, ((MR_Box) (ll_backend__global_data__V_4_4)), ((MR_Box) (ll_backend__global_data__V_6_6)));
        }
#line 4410 "ll_backend.global_data.c"
        ll_backend__global_data__succeeded = (ll_backend__global_data__V_8_8 == (MR_Integer) 0);
#line 717 "global_data.m"
        ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 717 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 717 "global_data.m"
          *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__V_8_8;
#line 717 "global_data.m"
        else
#line 717 "global_data.m"
          {
#line 717 "global_data.m"
            {
#line 717 "global_data.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[5], ll_backend__global_data__HeadVar__1_1, ((MR_Box) (ll_backend__global_data__V_5_5)), ((MR_Box) (ll_backend__global_data__V_7_7)));
#line 717 "global_data.m"
              return;
            }
#line 717 "global_data.m"
          }
#line 717 "global_data.m"
      }
#line 717 "global_data.m"
  }
#line 717 "global_data.m"
}

#line 717 "global_data.m"
MR_bool MR_CALL 
ll_backend__global_data____Unify____static_cell_remap_info_0_0(
#line 717 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 717 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2)
#line 717 "global_data.m"
{
#line 717 "global_data.m"
  {
#line 717 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 717 "global_data.m"
    MR_Integer ll_backend__global_data__CastX_7 = (MR_Integer) ll_backend__global_data__HeadVar__1_1;
#line 717 "global_data.m"
    MR_Integer ll_backend__global_data__CastY_8 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;

#line 717 "global_data.m"
    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_7 == ll_backend__global_data__CastY_8);
#line 717 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 717 "global_data.m"
      ll_backend__global_data__succeeded = MR_TRUE;
#line 717 "global_data.m"
    else
#line 717 "global_data.m"
      {
#line 717 "global_data.m"
        MR_Word ll_backend__global_data__TypeInfo_10_10;
#line 717 "global_data.m"
        MR_Word ll_backend__global_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 0)));
#line 717 "global_data.m"
        MR_Word ll_backend__global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 1)));
#line 717 "global_data.m"
        MR_Word ll_backend__global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 717 "global_data.m"
        MR_Word ll_backend__global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));

#line 4477 "ll_backend.global_data.c"
        {
#line 4479 "ll_backend.global_data.c"
          ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[2], ((MR_Box) (ll_backend__global_data__V_3_3)), ((MR_Box) (ll_backend__global_data__V_5_5)));
        }
#line 717 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 717 "global_data.m"
          {
#line 4486 "ll_backend.global_data.c"
            ll_backend__global_data__TypeInfo_10_10 = (MR_Word) &ll_backend__global_data_scalar_common_1[5];
#line 4488 "ll_backend.global_data.c"
            {
#line 4490 "ll_backend.global_data.c"
              return ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0(ll_backend__global_data__TypeInfo_10_10, ((MR_Box) (ll_backend__global_data__V_4_4)), ((MR_Box) (ll_backend__global_data__V_6_6)));
            }
#line 717 "global_data.m"
          }
#line 717 "global_data.m"
      }
#line 717 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 717 "global_data.m"
  }
#line 717 "global_data.m"
}

#line 338 "global_data.m"
void MR_CALL 
ll_backend__global_data____Compare____static_cell_info_0_0(
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
    MR_Integer ll_backend__global_data__CastX_18 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;
#line 338 "global_data.m"
    MR_Integer ll_backend__global_data__CastY_19 = (MR_Integer) ll_backend__global_data__HeadVar__3_3;

#line 338 "global_data.m"
    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_18 == ll_backend__global_data__CastY_19);
#line 338 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 4528 "ll_backend.global_data.c"
      *ll_backend__global_data__HeadVar__1_1 = (MR_Integer) 0;
#line 338 "global_data.m"
    else
#line 338 "global_data.m"
      {
#line 338 "global_data.m"
        MR_Word ll_backend__global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 338 "global_data.m"
        MR_Word ll_backend__global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 338 "global_data.m"
        MR_Word ll_backend__global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 2)));
#line 338 "global_data.m"
        MR_Word ll_backend__global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 3)));
#line 338 "global_data.m"
        MR_Word ll_backend__global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 4)));
#line 338 "global_data.m"
        MR_Word ll_backend__global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 0)));
#line 338 "global_data.m"
        MR_Word ll_backend__global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 1)));
#line 338 "global_data.m"
        MR_Word ll_backend__global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 2)));
#line 338 "global_data.m"
        MR_Word ll_backend__global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 3)));
#line 338 "global_data.m"
        MR_Word ll_backend__global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 4)));
#line 338 "global_data.m"
        MR_Word ll_backend__global_data__V_14_14;
#line 327 "global_data.m"
        MR_Integer ll_backend__global_data__CastX_33 = (MR_Integer) ll_backend__global_data__V_4_4;
#line 327 "global_data.m"
        MR_Integer ll_backend__global_data__CastY_34 = (MR_Integer) ll_backend__global_data__V_9_9;

#line 327 "global_data.m"
        ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_33 == ll_backend__global_data__CastY_34);
#line 327 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 4565 "ll_backend.global_data.c"
          {
#line 4567 "ll_backend.global_data.c"
            ll_backend__global_data__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
#line 338 "global_data.m"
            ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 4571 "ll_backend.global_data.c"
            if (ll_backend__global_data__succeeded)
#line 4573 "ll_backend.global_data.c"
              {
#line 4575 "ll_backend.global_data.c"
                ll_backend__global_data__V_14_14 = (MR_Integer) 0;
#line 4577 "ll_backend.global_data.c"
                ll_backend__global_data__succeeded = MR_TRUE;
#line 4579 "ll_backend.global_data.c"
              }
#line 4581 "ll_backend.global_data.c"
          }
#line 327 "global_data.m"
        else
#line 327 "global_data.m"
          {
#line 327 "global_data.m"
            MR_Word ll_backend__global_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_4_4, (MR_Integer) 0)));
#line 327 "global_data.m"
            MR_Word ll_backend__global_data__V_26_26 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_4_4, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 327 "global_data.m"
            MR_Word ll_backend__global_data__V_27_27 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_4_4, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 327 "global_data.m"
            MR_Word ll_backend__global_data__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_9_9, (MR_Integer) 0)));
#line 327 "global_data.m"
            MR_Word ll_backend__global_data__V_29_29 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_9_9, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 327 "global_data.m"
            MR_Word ll_backend__global_data__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_9_9, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 327 "global_data.m"
            MR_Word ll_backend__global_data__V_31_31;

#line 327 "global_data.m"
            {
#line 327 "global_data.m"
              mdbcomp__sym_name____Compare____sym_name_0_0(&ll_backend__global_data__V_31_31, ll_backend__global_data__V_25_25, ll_backend__global_data__V_28_28);
            }
#line 4607 "ll_backend.global_data.c"
            ll_backend__global_data__succeeded = (ll_backend__global_data__V_31_31 == (MR_Integer) 0);
#line 327 "global_data.m"
            ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 327 "global_data.m"
            if (ll_backend__global_data__succeeded)
#line 327 "global_data.m"
              {
#line 327 "global_data.m"
                ll_backend__global_data__V_14_14 = ll_backend__global_data__V_31_31;
#line 4617 "ll_backend.global_data.c"
                ll_backend__global_data__succeeded = (ll_backend__global_data__V_14_14 == (MR_Integer) 0);
#line 338 "global_data.m"
                ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 327 "global_data.m"
              }
#line 327 "global_data.m"
            else
#line 327 "global_data.m"
              {
#line 327 "global_data.m"
                MR_Word ll_backend__global_data__V_32_32;
#line 327 "global_data.m"
                MR_Integer ll_backend__global_data__V_38_38 = (MR_Integer) ll_backend__global_data__V_26_26;
#line 327 "global_data.m"
                MR_Integer ll_backend__global_data__V_39_39 = (MR_Integer) ll_backend__global_data__V_29_29;

#line 327 "global_data.m"
                {
#line 327 "global_data.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__global_data__V_32_32, ll_backend__global_data__V_38_38, ll_backend__global_data__V_39_39);
                }
#line 4639 "ll_backend.global_data.c"
                ll_backend__global_data__succeeded = (ll_backend__global_data__V_32_32 == (MR_Integer) 0);
#line 327 "global_data.m"
                ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 327 "global_data.m"
                if (ll_backend__global_data__succeeded)
#line 327 "global_data.m"
                  {
#line 327 "global_data.m"
                    ll_backend__global_data__V_14_14 = ll_backend__global_data__V_32_32;
#line 4649 "ll_backend.global_data.c"
                    ll_backend__global_data__succeeded = (ll_backend__global_data__V_14_14 == (MR_Integer) 0);
#line 338 "global_data.m"
                    ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 327 "global_data.m"
                  }
#line 327 "global_data.m"
                else
#line 327 "global_data.m"
                  {
#line 327 "global_data.m"
                    MR_Integer ll_backend__global_data__V_40_40 = (MR_Integer) ll_backend__global_data__V_27_27;
#line 327 "global_data.m"
                    MR_Integer ll_backend__global_data__V_41_41 = (MR_Integer) ll_backend__global_data__V_30_30;

#line 327 "global_data.m"
                    {
#line 327 "global_data.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__global_data__V_14_14, ll_backend__global_data__V_40_40, ll_backend__global_data__V_41_41);
                    }
#line 4669 "ll_backend.global_data.c"
                    ll_backend__global_data__succeeded = (ll_backend__global_data__V_14_14 == (MR_Integer) 0);
#line 338 "global_data.m"
                    ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 327 "global_data.m"
                  }
#line 327 "global_data.m"
              }
#line 327 "global_data.m"
          }
#line 338 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 338 "global_data.m"
          *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__V_14_14;
#line 338 "global_data.m"
        else
#line 338 "global_data.m"
          {
#line 338 "global_data.m"
            MR_Word ll_backend__global_data__V_15_15;

#line 338 "global_data.m"
            {
#line 338 "global_data.m"
              mercury__counter____Compare____counter_0_0(&ll_backend__global_data__V_15_15, ll_backend__global_data__V_5_5, ll_backend__global_data__V_10_10);
            }
#line 4695 "ll_backend.global_data.c"
            ll_backend__global_data__succeeded = (ll_backend__global_data__V_15_15 == (MR_Integer) 0);
#line 338 "global_data.m"
            ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 338 "global_data.m"
            if (ll_backend__global_data__succeeded)
#line 338 "global_data.m"
              *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__V_15_15;
#line 338 "global_data.m"
            else
#line 338 "global_data.m"
              {
#line 338 "global_data.m"
                MR_Word ll_backend__global_data__V_16_16;

#line 338 "global_data.m"
                {
#line 338 "global_data.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[1], &ll_backend__global_data__V_16_16, ((MR_Box) (ll_backend__global_data__V_6_6)), ((MR_Box) (ll_backend__global_data__V_11_11)));
                }
#line 4715 "ll_backend.global_data.c"
                ll_backend__global_data__succeeded = (ll_backend__global_data__V_16_16 == (MR_Integer) 0);
#line 338 "global_data.m"
                ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 338 "global_data.m"
                if (ll_backend__global_data__succeeded)
#line 338 "global_data.m"
                  *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__V_16_16;
#line 338 "global_data.m"
                else
#line 338 "global_data.m"
                  {
#line 338 "global_data.m"
                    MR_Word ll_backend__global_data__V_17_17;

#line 338 "global_data.m"
                    {
#line 338 "global_data.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[4], &ll_backend__global_data__V_17_17, ((MR_Box) (ll_backend__global_data__V_7_7)), ((MR_Box) (ll_backend__global_data__V_12_12)));
                    }
#line 4735 "ll_backend.global_data.c"
                    ll_backend__global_data__succeeded = (ll_backend__global_data__V_17_17 == (MR_Integer) 0);
#line 338 "global_data.m"
                    ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 338 "global_data.m"
                    if (ll_backend__global_data__succeeded)
#line 338 "global_data.m"
                      *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__V_17_17;
#line 338 "global_data.m"
                    else
#line 338 "global_data.m"
                      {
#line 338 "global_data.m"
                        {
#line 338 "global_data.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[7], ll_backend__global_data__HeadVar__1_1, ((MR_Box) (ll_backend__global_data__V_8_8)), ((MR_Box) (ll_backend__global_data__V_13_13)));
#line 338 "global_data.m"
                          return;
                        }
#line 338 "global_data.m"
                      }
#line 338 "global_data.m"
                  }
#line 338 "global_data.m"
              }
#line 338 "global_data.m"
          }
#line 338 "global_data.m"
      }
#line 338 "global_data.m"
  }
#line 338 "global_data.m"
}

#line 338 "global_data.m"
MR_bool MR_CALL 
ll_backend__global_data____Unify____static_cell_info_0_0(
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
    MR_Integer ll_backend__global_data__CastX_13 = (MR_Integer) ll_backend__global_data__HeadVar__1_1;
#line 338 "global_data.m"
    MR_Integer ll_backend__global_data__CastY_14 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;

#line 338 "global_data.m"
    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_13 == ll_backend__global_data__CastY_14);
#line 338 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 338 "global_data.m"
      ll_backend__global_data__succeeded = MR_TRUE;
#line 338 "global_data.m"
    else
#line 338 "global_data.m"
      {
#line 338 "global_data.m"
        MR_Word ll_backend__global_data__TypeInfo_16_16;
#line 338 "global_data.m"
        MR_Word ll_backend__global_data__TypeInfo_17_17;
#line 338 "global_data.m"
        MR_Word ll_backend__global_data__TypeInfo_18_18;
#line 338 "global_data.m"
        MR_Word ll_backend__global_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 0)));
#line 338 "global_data.m"
        MR_Word ll_backend__global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 1)));
#line 338 "global_data.m"
        MR_Word ll_backend__global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 2)));
#line 338 "global_data.m"
        MR_Word ll_backend__global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 3)));
#line 338 "global_data.m"
        MR_Word ll_backend__global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 4)));
#line 338 "global_data.m"
        MR_Word ll_backend__global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 338 "global_data.m"
        MR_Word ll_backend__global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 338 "global_data.m"
        MR_Word ll_backend__global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 2)));
#line 338 "global_data.m"
        MR_Word ll_backend__global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 3)));
#line 338 "global_data.m"
        MR_Word ll_backend__global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 4)));
#line 327 "global_data.m"
        MR_Integer ll_backend__global_data__CastX_25 = (MR_Integer) ll_backend__global_data__V_3_3;
#line 327 "global_data.m"
        MR_Integer ll_backend__global_data__CastY_26 = (MR_Integer) ll_backend__global_data__V_8_8;

#line 327 "global_data.m"
        ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_25 == ll_backend__global_data__CastY_26);
#line 327 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 327 "global_data.m"
          ll_backend__global_data__succeeded = MR_TRUE;
#line 327 "global_data.m"
        else
#line 327 "global_data.m"
          {
#line 327 "global_data.m"
            MR_Word ll_backend__global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_3_3, (MR_Integer) 0)));
#line 327 "global_data.m"
            MR_Word ll_backend__global_data__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_3_3, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 327 "global_data.m"
            MR_Word ll_backend__global_data__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_3_3, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 327 "global_data.m"
            MR_Word ll_backend__global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_8_8, (MR_Integer) 0)));
#line 327 "global_data.m"
            MR_Word ll_backend__global_data__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_8_8, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 327 "global_data.m"
            MR_Word ll_backend__global_data__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_8_8, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);

#line 4851 "ll_backend.global_data.c"
            {
#line 4853 "ll_backend.global_data.c"
              ll_backend__global_data__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__global_data__V_19_19, ll_backend__global_data__V_22_22);
            }
#line 327 "global_data.m"
            if (ll_backend__global_data__succeeded)
#line 327 "global_data.m"
              {
#line 4860 "ll_backend.global_data.c"
                ll_backend__global_data__succeeded = (ll_backend__global_data__V_20_20 == ll_backend__global_data__V_23_23);
#line 327 "global_data.m"
                if (ll_backend__global_data__succeeded)
#line 4864 "ll_backend.global_data.c"
                  ll_backend__global_data__succeeded = (ll_backend__global_data__V_21_21 == ll_backend__global_data__V_24_24);
#line 327 "global_data.m"
              }
#line 327 "global_data.m"
          }
#line 338 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 338 "global_data.m"
          {
#line 4874 "ll_backend.global_data.c"
            {
#line 4876 "ll_backend.global_data.c"
              ll_backend__global_data__succeeded = mercury__counter____Unify____counter_0_0(ll_backend__global_data__V_4_4, ll_backend__global_data__V_9_9);
            }
#line 338 "global_data.m"
            if (ll_backend__global_data__succeeded)
#line 338 "global_data.m"
              {
#line 4883 "ll_backend.global_data.c"
                ll_backend__global_data__TypeInfo_16_16 = (MR_Word) &ll_backend__global_data_scalar_common_1[1];
#line 4885 "ll_backend.global_data.c"
                {
#line 4887 "ll_backend.global_data.c"
                  ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0(ll_backend__global_data__TypeInfo_16_16, ((MR_Box) (ll_backend__global_data__V_5_5)), ((MR_Box) (ll_backend__global_data__V_10_10)));
                }
#line 338 "global_data.m"
                if (ll_backend__global_data__succeeded)
#line 338 "global_data.m"
                  {
#line 4894 "ll_backend.global_data.c"
                    ll_backend__global_data__TypeInfo_17_17 = (MR_Word) &ll_backend__global_data_scalar_common_1[4];
#line 4896 "ll_backend.global_data.c"
                    {
#line 4898 "ll_backend.global_data.c"
                      ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0(ll_backend__global_data__TypeInfo_17_17, ((MR_Box) (ll_backend__global_data__V_6_6)), ((MR_Box) (ll_backend__global_data__V_11_11)));
                    }
#line 338 "global_data.m"
                    if (ll_backend__global_data__succeeded)
#line 338 "global_data.m"
                      {
#line 4905 "ll_backend.global_data.c"
                        ll_backend__global_data__TypeInfo_18_18 = (MR_Word) &ll_backend__global_data_scalar_common_1[7];
#line 4907 "ll_backend.global_data.c"
                        {
#line 4909 "ll_backend.global_data.c"
                          return ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0(ll_backend__global_data__TypeInfo_18_18, ((MR_Box) (ll_backend__global_data__V_7_7)), ((MR_Box) (ll_backend__global_data__V_12_12)));
                        }
#line 338 "global_data.m"
                      }
#line 338 "global_data.m"
                  }
#line 338 "global_data.m"
              }
#line 338 "global_data.m"
          }
#line 338 "global_data.m"
      }
#line 338 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 338 "global_data.m"
  }
#line 338 "global_data.m"
}

#line 335 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____scalar_type_cell_map_0_0(
#line 335 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 335 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 335 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3)
#line 335 "global_data.m"
{
#line 335 "global_data.m"
  {
#line 335 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 335 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar1_4 = ll_backend__global_data__HeadVar__2_2;
#line 335 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar2_5 = ll_backend__global_data__HeadVar__3_3;

#line 335 "global_data.m"
    {
#line 335 "global_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[4], ll_backend__global_data__HeadVar__1_1, ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_5)));
#line 335 "global_data.m"
      return;
    }
#line 335 "global_data.m"
  }
#line 335 "global_data.m"
}

#line 335 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_type_cell_map_0_0(
#line 335 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 335 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2)
#line 335 "global_data.m"
{
#line 335 "global_data.m"
  {
#line 335 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 335 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar1_3 = ll_backend__global_data__HeadVar__1_1;
#line 335 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar2_4 = ll_backend__global_data__HeadVar__2_2;

#line 335 "global_data.m"
    {
#line 335 "global_data.m"
      return ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[4], ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_4)));
    }
#line 335 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 335 "global_data.m"
  }
#line 335 "global_data.m"
}

#line 728 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____scalar_cell_group_remap_0_0(
#line 728 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 728 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 728 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3)
#line 728 "global_data.m"
{
#line 728 "global_data.m"
  {
#line 728 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 728 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar1_4 = ll_backend__global_data__HeadVar__2_2;
#line 728 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar2_5 = ll_backend__global_data__HeadVar__3_3;

#line 728 "global_data.m"
    {
#line 728 "global_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[3], ll_backend__global_data__HeadVar__1_1, ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_5)));
#line 728 "global_data.m"
      return;
    }
#line 728 "global_data.m"
  }
#line 728 "global_data.m"
}

#line 728 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_cell_group_remap_0_0(
#line 728 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 728 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2)
#line 728 "global_data.m"
{
#line 728 "global_data.m"
  {
#line 728 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 728 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar1_3 = ll_backend__global_data__HeadVar__1_1;
#line 728 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar2_4 = ll_backend__global_data__HeadVar__2_2;

#line 728 "global_data.m"
    {
#line 728 "global_data.m"
      return ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[3], ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_4)));
    }
#line 728 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 728 "global_data.m"
  }
#line 728 "global_data.m"
}

#line 296 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____scalar_cell_group_0_0(
#line 296 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 296 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 296 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3)
#line 296 "global_data.m"
{
#line 296 "global_data.m"
  {
#line 296 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 296 "global_data.m"
    MR_Integer ll_backend__global_data__CastX_12 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;
#line 296 "global_data.m"
    MR_Integer ll_backend__global_data__CastY_13 = (MR_Integer) ll_backend__global_data__HeadVar__3_3;

#line 296 "global_data.m"
    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_12 == ll_backend__global_data__CastY_13);
#line 296 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 5077 "ll_backend.global_data.c"
      *ll_backend__global_data__HeadVar__1_1 = (MR_Integer) 0;
#line 296 "global_data.m"
    else
#line 296 "global_data.m"
      {
#line 296 "global_data.m"
        MR_Word ll_backend__global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 296 "global_data.m"
        MR_Word ll_backend__global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 296 "global_data.m"
        MR_Word ll_backend__global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 2)));
#line 296 "global_data.m"
        MR_Word ll_backend__global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 0)));
#line 296 "global_data.m"
        MR_Word ll_backend__global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 1)));
#line 296 "global_data.m"
        MR_Word ll_backend__global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 2)));
#line 296 "global_data.m"
        MR_Word ll_backend__global_data__V_10_10;

#line 296 "global_data.m"
        {
#line 296 "global_data.m"
          mercury__counter____Compare____counter_0_0(&ll_backend__global_data__V_10_10, ll_backend__global_data__V_4_4, ll_backend__global_data__V_7_7);
        }
#line 5103 "ll_backend.global_data.c"
        ll_backend__global_data__succeeded = (ll_backend__global_data__V_10_10 == (MR_Integer) 0);
#line 296 "global_data.m"
        ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 296 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 296 "global_data.m"
          *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__V_10_10;
#line 296 "global_data.m"
        else
#line 296 "global_data.m"
          {
#line 296 "global_data.m"
            MR_Word ll_backend__global_data__V_11_11;

#line 296 "global_data.m"
            {
#line 296 "global_data.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[6], &ll_backend__global_data__V_11_11, ((MR_Box) (ll_backend__global_data__V_5_5)), ((MR_Box) (ll_backend__global_data__V_8_8)));
            }
#line 5123 "ll_backend.global_data.c"
            ll_backend__global_data__succeeded = (ll_backend__global_data__V_11_11 == (MR_Integer) 0);
#line 296 "global_data.m"
            ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 296 "global_data.m"
            if (ll_backend__global_data__succeeded)
#line 296 "global_data.m"
              *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__V_11_11;
#line 296 "global_data.m"
            else
#line 296 "global_data.m"
              {
#line 296 "global_data.m"
                {
#line 296 "global_data.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[7], ll_backend__global_data__HeadVar__1_1, ((MR_Box) (ll_backend__global_data__V_6_6)), ((MR_Box) (ll_backend__global_data__V_9_9)));
#line 296 "global_data.m"
                  return;
                }
#line 296 "global_data.m"
              }
#line 296 "global_data.m"
          }
#line 296 "global_data.m"
      }
#line 296 "global_data.m"
  }
#line 296 "global_data.m"
}

#line 296 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____scalar_cell_group_0_0(
#line 296 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 296 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2)
#line 296 "global_data.m"
{
#line 296 "global_data.m"
  {
#line 296 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 296 "global_data.m"
    MR_Integer ll_backend__global_data__CastX_9 = (MR_Integer) ll_backend__global_data__HeadVar__1_1;
#line 296 "global_data.m"
    MR_Integer ll_backend__global_data__CastY_10 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;

#line 296 "global_data.m"
    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_9 == ll_backend__global_data__CastY_10);
#line 296 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 296 "global_data.m"
      ll_backend__global_data__succeeded = MR_TRUE;
#line 296 "global_data.m"
    else
#line 296 "global_data.m"
      {
#line 296 "global_data.m"
        MR_Word ll_backend__global_data__TypeInfo_12_12;
#line 296 "global_data.m"
        MR_Word ll_backend__global_data__TypeInfo_13_13;
#line 296 "global_data.m"
        MR_Word ll_backend__global_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 0)));
#line 296 "global_data.m"
        MR_Word ll_backend__global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 1)));
#line 296 "global_data.m"
        MR_Word ll_backend__global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 2)));
#line 296 "global_data.m"
        MR_Word ll_backend__global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 296 "global_data.m"
        MR_Word ll_backend__global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 296 "global_data.m"
        MR_Word ll_backend__global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 2)));

#line 5198 "ll_backend.global_data.c"
        {
#line 5200 "ll_backend.global_data.c"
          ll_backend__global_data__succeeded = mercury__counter____Unify____counter_0_0(ll_backend__global_data__V_3_3, ll_backend__global_data__V_6_6);
        }
#line 296 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 296 "global_data.m"
          {
#line 5207 "ll_backend.global_data.c"
            ll_backend__global_data__TypeInfo_12_12 = (MR_Word) &ll_backend__global_data_scalar_common_1[6];
#line 5209 "ll_backend.global_data.c"
            {
#line 5211 "ll_backend.global_data.c"
              ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0(ll_backend__global_data__TypeInfo_12_12, ((MR_Box) (ll_backend__global_data__V_4_4)), ((MR_Box) (ll_backend__global_data__V_7_7)));
            }
#line 296 "global_data.m"
            if (ll_backend__global_data__succeeded)
#line 296 "global_data.m"
              {
#line 5218 "ll_backend.global_data.c"
                ll_backend__global_data__TypeInfo_13_13 = (MR_Word) &ll_backend__global_data_scalar_common_2[7];
#line 5220 "ll_backend.global_data.c"
                {
#line 5222 "ll_backend.global_data.c"
                  return ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0(ll_backend__global_data__TypeInfo_13_13, ((MR_Box) (ll_backend__global_data__V_5_5)), ((MR_Box) (ll_backend__global_data__V_8_8)));
                }
#line 296 "global_data.m"
              }
#line 296 "global_data.m"
          }
#line 296 "global_data.m"
      }
#line 296 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 296 "global_data.m"
  }
#line 296 "global_data.m"
}

#line 166 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____proc_var_map_0_0(
#line 166 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 166 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 166 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3)
#line 166 "global_data.m"
{
#line 166 "global_data.m"
  {
#line 166 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 166 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar1_4 = ll_backend__global_data__HeadVar__2_2;
#line 166 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar2_5 = ll_backend__global_data__HeadVar__3_3;

#line 166 "global_data.m"
    {
#line 166 "global_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[8], ll_backend__global_data__HeadVar__1_1, ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_5)));
#line 166 "global_data.m"
      return;
    }
#line 166 "global_data.m"
  }
#line 166 "global_data.m"
}

#line 166 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____proc_var_map_0_0(
#line 166 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 166 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2)
#line 166 "global_data.m"
{
#line 166 "global_data.m"
  {
#line 166 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 166 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar1_3 = ll_backend__global_data__HeadVar__1_1;
#line 166 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar2_4 = ll_backend__global_data__HeadVar__2_2;

#line 166 "global_data.m"
    {
#line 166 "global_data.m"
      return ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[8], ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_4)));
    }
#line 166 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 166 "global_data.m"
  }
#line 166 "global_data.m"
}

#line 167 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____proc_layout_map_0_0(
#line 167 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 167 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 167 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3)
#line 167 "global_data.m"
{
#line 167 "global_data.m"
  {
#line 167 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 167 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar1_4 = ll_backend__global_data__HeadVar__2_2;
#line 167 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar2_5 = ll_backend__global_data__HeadVar__3_3;

#line 167 "global_data.m"
    {
#line 167 "global_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[9], ll_backend__global_data__HeadVar__1_1, ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_5)));
#line 167 "global_data.m"
      return;
    }
#line 167 "global_data.m"
  }
#line 167 "global_data.m"
}

#line 167 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____proc_layout_map_0_0(
#line 167 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 167 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2)
#line 167 "global_data.m"
{
#line 167 "global_data.m"
  {
#line 167 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 167 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar1_3 = ll_backend__global_data__HeadVar__1_1;
#line 167 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar2_4 = ll_backend__global_data__HeadVar__2_2;

#line 167 "global_data.m"
    {
#line 167 "global_data.m"
      return ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[9], ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_4)));
    }
#line 167 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 167 "global_data.m"
  }
#line 167 "global_data.m"
}

#line 1013 "global_data.m"
void MR_CALL 
ll_backend__global_data____Compare____global_data_remapping_0_0(
#line 1013 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 1013 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 1013 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3)
#line 1013 "global_data.m"
{
#line 1013 "global_data.m"
  {
#line 1013 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 1013 "global_data.m"
    MR_Integer ll_backend__global_data__CastX_9 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;
#line 1013 "global_data.m"
    MR_Integer ll_backend__global_data__CastY_10 = (MR_Integer) ll_backend__global_data__HeadVar__3_3;

#line 1013 "global_data.m"
    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_9 == ll_backend__global_data__CastY_10);
#line 1013 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 5386 "ll_backend.global_data.c"
      *ll_backend__global_data__HeadVar__1_1 = (MR_Integer) 0;
#line 1013 "global_data.m"
    else
#line 1013 "global_data.m"
      {
#line 1013 "global_data.m"
        MR_Word ll_backend__global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 1013 "global_data.m"
        MR_Word ll_backend__global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 1013 "global_data.m"
        MR_Word ll_backend__global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 0)));
#line 1013 "global_data.m"
        MR_Word ll_backend__global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 1)));
#line 1013 "global_data.m"
        MR_Word ll_backend__global_data__V_8_8;

#line 1013 "global_data.m"
        {
#line 1013 "global_data.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[6], &ll_backend__global_data__V_8_8, ((MR_Box) (ll_backend__global_data__V_4_4)), ((MR_Box) (ll_backend__global_data__V_6_6)));
        }
#line 5408 "ll_backend.global_data.c"
        ll_backend__global_data__succeeded = (ll_backend__global_data__V_8_8 == (MR_Integer) 0);
#line 1013 "global_data.m"
        ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 1013 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 1013 "global_data.m"
          *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__V_8_8;
#line 1013 "global_data.m"
        else
#line 1013 "global_data.m"
          {
#line 1013 "global_data.m"
            ll_backend__global_data____Compare____static_cell_remap_info_0_0(ll_backend__global_data__HeadVar__1_1, ll_backend__global_data__V_5_5, ll_backend__global_data__V_7_7);
#line 1013 "global_data.m"
            return;
          }
#line 1013 "global_data.m"
      }
#line 1013 "global_data.m"
  }
#line 1013 "global_data.m"
}

#line 1013 "global_data.m"
MR_bool MR_CALL 
ll_backend__global_data____Unify____global_data_remapping_0_0(
#line 1013 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 1013 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2)
#line 1013 "global_data.m"
{
#line 1013 "global_data.m"
  {
#line 1013 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 1013 "global_data.m"
    MR_Integer ll_backend__global_data__CastX_7 = (MR_Integer) ll_backend__global_data__HeadVar__1_1;
#line 1013 "global_data.m"
    MR_Integer ll_backend__global_data__CastY_8 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;

#line 1013 "global_data.m"
    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_7 == ll_backend__global_data__CastY_8);
#line 1013 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 1013 "global_data.m"
      ll_backend__global_data__succeeded = MR_TRUE;
#line 1013 "global_data.m"
    else
#line 1013 "global_data.m"
      {
#line 1013 "global_data.m"
        MR_Word ll_backend__global_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 0)));
#line 1013 "global_data.m"
        MR_Word ll_backend__global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 1)));
#line 1013 "global_data.m"
        MR_Word ll_backend__global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 1013 "global_data.m"
        MR_Word ll_backend__global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));

#line 5469 "ll_backend.global_data.c"
        {
#line 5471 "ll_backend.global_data.c"
          ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[6], ((MR_Box) (ll_backend__global_data__V_3_3)), ((MR_Box) (ll_backend__global_data__V_5_5)));
        }
#line 1013 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 5476 "ll_backend.global_data.c"
          {
#line 5478 "ll_backend.global_data.c"
            return ll_backend__global_data__succeeded = ll_backend__global_data____Unify____static_cell_remap_info_0_0(ll_backend__global_data__V_4_4, ll_backend__global_data__V_6_6);
          }
#line 1013 "global_data.m"
      }
#line 1013 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 1013 "global_data.m"
  }
#line 1013 "global_data.m"
}

#line 169 "global_data.m"
void MR_CALL 
ll_backend__global_data____Compare____global_data_0_0(
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
    MR_Integer ll_backend__global_data__CastX_24 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;
#line 169 "global_data.m"
    MR_Integer ll_backend__global_data__CastY_25 = (MR_Integer) ll_backend__global_data__HeadVar__3_3;

#line 169 "global_data.m"
    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_24 == ll_backend__global_data__CastY_25);
#line 169 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 5514 "ll_backend.global_data.c"
      *ll_backend__global_data__HeadVar__1_1 = (MR_Integer) 0;
#line 169 "global_data.m"
    else
#line 169 "global_data.m"
      {
#line 169 "global_data.m"
        MR_Word ll_backend__global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 169 "global_data.m"
        MR_Word ll_backend__global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 169 "global_data.m"
        MR_Word ll_backend__global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 2)));
#line 169 "global_data.m"
        MR_Integer ll_backend__global_data__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 3)));
#line 169 "global_data.m"
        MR_Word ll_backend__global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 4)));
#line 169 "global_data.m"
        MR_Word ll_backend__global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 5)));
#line 169 "global_data.m"
        MR_Word ll_backend__global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 6)));
#line 169 "global_data.m"
        MR_Word ll_backend__global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 0)));
#line 169 "global_data.m"
        MR_Word ll_backend__global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 1)));
#line 169 "global_data.m"
        MR_Word ll_backend__global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 2)));
#line 169 "global_data.m"
        MR_Integer ll_backend__global_data__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 3)));
#line 169 "global_data.m"
        MR_Word ll_backend__global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 4)));
#line 169 "global_data.m"
        MR_Word ll_backend__global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 5)));
#line 169 "global_data.m"
        MR_Word ll_backend__global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 6)));
#line 169 "global_data.m"
        MR_Word ll_backend__global_data__V_18_18;

#line 169 "global_data.m"
        {
#line 169 "global_data.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[8], &ll_backend__global_data__V_18_18, ((MR_Box) (ll_backend__global_data__V_4_4)), ((MR_Box) (ll_backend__global_data__V_11_11)));
        }
#line 5556 "ll_backend.global_data.c"
        ll_backend__global_data__succeeded = (ll_backend__global_data__V_18_18 == (MR_Integer) 0);
#line 169 "global_data.m"
        ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 169 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 169 "global_data.m"
          *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__V_18_18;
#line 169 "global_data.m"
        else
#line 169 "global_data.m"
          {
#line 169 "global_data.m"
            MR_Word ll_backend__global_data__V_19_19;

#line 169 "global_data.m"
            {
#line 169 "global_data.m"
              mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[9], &ll_backend__global_data__V_19_19, ((MR_Box) (ll_backend__global_data__V_5_5)), ((MR_Box) (ll_backend__global_data__V_12_12)));
            }
#line 5576 "ll_backend.global_data.c"
            ll_backend__global_data__succeeded = (ll_backend__global_data__V_19_19 == (MR_Integer) 0);
#line 169 "global_data.m"
            ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 169 "global_data.m"
            if (ll_backend__global_data__succeeded)
#line 169 "global_data.m"
              *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__V_19_19;
#line 169 "global_data.m"
            else
#line 169 "global_data.m"
              {
#line 169 "global_data.m"
                MR_Word ll_backend__global_data__V_20_20;

#line 169 "global_data.m"
                {
#line 169 "global_data.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[3], &ll_backend__global_data__V_20_20, ((MR_Box) (ll_backend__global_data__V_6_6)), ((MR_Box) (ll_backend__global_data__V_13_13)));
                }
#line 5596 "ll_backend.global_data.c"
                ll_backend__global_data__succeeded = (ll_backend__global_data__V_20_20 == (MR_Integer) 0);
#line 169 "global_data.m"
                ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 169 "global_data.m"
                if (ll_backend__global_data__succeeded)
#line 169 "global_data.m"
                  *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__V_20_20;
#line 169 "global_data.m"
                else
#line 169 "global_data.m"
                  {
#line 169 "global_data.m"
                    MR_Word ll_backend__global_data__V_21_21;

#line 169 "global_data.m"
                    {
#line 169 "global_data.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ll_backend__global_data__V_21_21, ll_backend__global_data__V_7_7, ll_backend__global_data__V_14_14);
                    }
#line 5616 "ll_backend.global_data.c"
                    ll_backend__global_data__succeeded = (ll_backend__global_data__V_21_21 == (MR_Integer) 0);
#line 169 "global_data.m"
                    ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 169 "global_data.m"
                    if (ll_backend__global_data__succeeded)
#line 169 "global_data.m"
                      *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__V_21_21;
#line 169 "global_data.m"
                    else
#line 169 "global_data.m"
                      {
#line 169 "global_data.m"
                        MR_Word ll_backend__global_data__V_22_22;

#line 169 "global_data.m"
                        {
#line 169 "global_data.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[4], &ll_backend__global_data__V_22_22, ((MR_Box) (ll_backend__global_data__V_8_8)), ((MR_Box) (ll_backend__global_data__V_15_15)));
                        }
#line 5636 "ll_backend.global_data.c"
                        ll_backend__global_data__succeeded = (ll_backend__global_data__V_22_22 == (MR_Integer) 0);
#line 169 "global_data.m"
                        ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 169 "global_data.m"
                        if (ll_backend__global_data__succeeded)
#line 169 "global_data.m"
                          *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__V_22_22;
#line 169 "global_data.m"
                        else
#line 169 "global_data.m"
                          {
#line 169 "global_data.m"
                            MR_Word ll_backend__global_data__V_23_23;

#line 169 "global_data.m"
                            {
#line 169 "global_data.m"
                              ll_backend__global_data____Compare____static_cell_info_0_0(&ll_backend__global_data__V_23_23, ll_backend__global_data__V_9_9, ll_backend__global_data__V_16_16);
                            }
#line 5656 "ll_backend.global_data.c"
                            ll_backend__global_data__succeeded = (ll_backend__global_data__V_23_23 == (MR_Integer) 0);
#line 169 "global_data.m"
                            ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 169 "global_data.m"
                            if (ll_backend__global_data__succeeded)
#line 169 "global_data.m"
                              *ll_backend__global_data__HeadVar__1_1 = ll_backend__global_data__V_23_23;
#line 169 "global_data.m"
                            else
#line 169 "global_data.m"
                              {
#line 169 "global_data.m"
                                {
#line 169 "global_data.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[5], ll_backend__global_data__HeadVar__1_1, ((MR_Box) (ll_backend__global_data__V_10_10)), ((MR_Box) (ll_backend__global_data__V_17_17)));
#line 169 "global_data.m"
                                  return;
                                }
#line 169 "global_data.m"
                              }
#line 169 "global_data.m"
                          }
#line 169 "global_data.m"
                      }
#line 169 "global_data.m"
                  }
#line 169 "global_data.m"
              }
#line 169 "global_data.m"
          }
#line 169 "global_data.m"
      }
#line 169 "global_data.m"
  }
#line 169 "global_data.m"
}

#line 169 "global_data.m"
MR_bool MR_CALL 
ll_backend__global_data____Unify____global_data_0_0(
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
    MR_Integer ll_backend__global_data__CastX_17 = (MR_Integer) ll_backend__global_data__HeadVar__1_1;
#line 169 "global_data.m"
    MR_Integer ll_backend__global_data__CastY_18 = (MR_Integer) ll_backend__global_data__HeadVar__2_2;

#line 169 "global_data.m"
    ll_backend__global_data__succeeded = (ll_backend__global_data__CastX_17 == ll_backend__global_data__CastY_18);
#line 169 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 169 "global_data.m"
      ll_backend__global_data__succeeded = MR_TRUE;
#line 169 "global_data.m"
    else
#line 169 "global_data.m"
      {
#line 169 "global_data.m"
        MR_Word ll_backend__global_data__TypeInfo_20_20;
#line 169 "global_data.m"
        MR_Word ll_backend__global_data__TypeInfo_21_21;
#line 169 "global_data.m"
        MR_Word ll_backend__global_data__TypeInfo_22_22;
#line 169 "global_data.m"
        MR_Word ll_backend__global_data__TypeInfo_23_23;
#line 169 "global_data.m"
        MR_Word ll_backend__global_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 0)));
#line 169 "global_data.m"
        MR_Word ll_backend__global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 1)));
#line 169 "global_data.m"
        MR_Word ll_backend__global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 2)));
#line 169 "global_data.m"
        MR_Integer ll_backend__global_data__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 3)));
#line 169 "global_data.m"
        MR_Word ll_backend__global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 4)));
#line 169 "global_data.m"
        MR_Word ll_backend__global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 5)));
#line 169 "global_data.m"
        MR_Word ll_backend__global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 6)));
#line 169 "global_data.m"
        MR_Word ll_backend__global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 169 "global_data.m"
        MR_Word ll_backend__global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 169 "global_data.m"
        MR_Word ll_backend__global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 2)));
#line 169 "global_data.m"
        MR_Integer ll_backend__global_data__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 3)));
#line 169 "global_data.m"
        MR_Word ll_backend__global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 4)));
#line 169 "global_data.m"
        MR_Word ll_backend__global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 5)));
#line 169 "global_data.m"
        MR_Word ll_backend__global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 6)));

#line 5759 "ll_backend.global_data.c"
        {
#line 5761 "ll_backend.global_data.c"
          ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[8], ((MR_Box) (ll_backend__global_data__V_3_3)), ((MR_Box) (ll_backend__global_data__V_10_10)));
        }
#line 169 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 169 "global_data.m"
          {
#line 5768 "ll_backend.global_data.c"
            ll_backend__global_data__TypeInfo_20_20 = (MR_Word) &ll_backend__global_data_scalar_common_1[9];
#line 5770 "ll_backend.global_data.c"
            {
#line 5772 "ll_backend.global_data.c"
              ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0(ll_backend__global_data__TypeInfo_20_20, ((MR_Box) (ll_backend__global_data__V_4_4)), ((MR_Box) (ll_backend__global_data__V_11_11)));
            }
#line 169 "global_data.m"
            if (ll_backend__global_data__succeeded)
#line 169 "global_data.m"
              {
#line 5779 "ll_backend.global_data.c"
                ll_backend__global_data__TypeInfo_21_21 = (MR_Word) &ll_backend__global_data_scalar_common_2[3];
#line 5781 "ll_backend.global_data.c"
                {
#line 5783 "ll_backend.global_data.c"
                  ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0(ll_backend__global_data__TypeInfo_21_21, ((MR_Box) (ll_backend__global_data__V_5_5)), ((MR_Box) (ll_backend__global_data__V_12_12)));
                }
#line 169 "global_data.m"
                if (ll_backend__global_data__succeeded)
#line 169 "global_data.m"
                  {
#line 5790 "ll_backend.global_data.c"
                    ll_backend__global_data__succeeded = (ll_backend__global_data__V_6_6 == ll_backend__global_data__V_13_13);
#line 169 "global_data.m"
                    if (ll_backend__global_data__succeeded)
#line 169 "global_data.m"
                      {
#line 5796 "ll_backend.global_data.c"
                        ll_backend__global_data__TypeInfo_22_22 = (MR_Word) &ll_backend__global_data_scalar_common_2[4];
#line 5798 "ll_backend.global_data.c"
                        {
#line 5800 "ll_backend.global_data.c"
                          ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0(ll_backend__global_data__TypeInfo_22_22, ((MR_Box) (ll_backend__global_data__V_7_7)), ((MR_Box) (ll_backend__global_data__V_14_14)));
                        }
#line 169 "global_data.m"
                        if (ll_backend__global_data__succeeded)
#line 169 "global_data.m"
                          {
#line 5807 "ll_backend.global_data.c"
                            {
#line 5809 "ll_backend.global_data.c"
                              ll_backend__global_data__succeeded = ll_backend__global_data____Unify____static_cell_info_0_0(ll_backend__global_data__V_8_8, ll_backend__global_data__V_15_15);
                            }
#line 169 "global_data.m"
                            if (ll_backend__global_data__succeeded)
#line 169 "global_data.m"
                              {
#line 5816 "ll_backend.global_data.c"
                                ll_backend__global_data__TypeInfo_23_23 = (MR_Word) &ll_backend__global_data_scalar_common_2[5];
#line 5818 "ll_backend.global_data.c"
                                {
#line 5820 "ll_backend.global_data.c"
                                  return ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0(ll_backend__global_data__TypeInfo_23_23, ((MR_Box) (ll_backend__global_data__V_9_9)), ((MR_Box) (ll_backend__global_data__V_16_16)));
                                }
#line 169 "global_data.m"
                              }
#line 169 "global_data.m"
                          }
#line 169 "global_data.m"
                      }
#line 169 "global_data.m"
                  }
#line 169 "global_data.m"
              }
#line 169 "global_data.m"
          }
#line 169 "global_data.m"
      }
#line 169 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 169 "global_data.m"
  }
#line 169 "global_data.m"
}

#line 725 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____cell_type_num_remap_0_0(
#line 725 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 725 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 725 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3)
#line 725 "global_data.m"
{
#line 725 "global_data.m"
  {
#line 725 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 725 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar1_4 = ll_backend__global_data__HeadVar__2_2;
#line 725 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar2_5 = ll_backend__global_data__HeadVar__3_3;

#line 725 "global_data.m"
    {
#line 725 "global_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[2], ll_backend__global_data__HeadVar__1_1, ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_5)));
#line 725 "global_data.m"
      return;
    }
#line 725 "global_data.m"
  }
#line 725 "global_data.m"
}

#line 725 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____cell_type_num_remap_0_0(
#line 725 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 725 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2)
#line 725 "global_data.m"
{
#line 725 "global_data.m"
  {
#line 725 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 725 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar1_3 = ll_backend__global_data__HeadVar__1_1;
#line 725 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar2_4 = ll_backend__global_data__HeadVar__2_2;

#line 725 "global_data.m"
    {
#line 725 "global_data.m"
      return ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[2], ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_4)));
    }
#line 725 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 725 "global_data.m"
  }
#line 725 "global_data.m"
}

#line 334 "global_data.m"
static void MR_CALL 
ll_backend__global_data____Compare____cell_type_bimap_0_0(
#line 334 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__1_1,
#line 334 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 334 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3)
#line 334 "global_data.m"
{
#line 334 "global_data.m"
  {
#line 334 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 334 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar1_4 = ll_backend__global_data__HeadVar__2_2;
#line 334 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar2_5 = ll_backend__global_data__HeadVar__3_3;

#line 334 "global_data.m"
    {
#line 334 "global_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[1], ll_backend__global_data__HeadVar__1_1, ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_5)));
#line 334 "global_data.m"
      return;
    }
#line 334 "global_data.m"
  }
#line 334 "global_data.m"
}

#line 334 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data____Unify____cell_type_bimap_0_0(
#line 334 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 334 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2)
#line 334 "global_data.m"
{
#line 334 "global_data.m"
  {
#line 334 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 334 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar1_3 = ll_backend__global_data__HeadVar__1_1;
#line 334 "global_data.m"
    MR_Word ll_backend__global_data__Cast_HeadVar2_4 = ll_backend__global_data__HeadVar__2_2;

#line 334 "global_data.m"
    {
#line 334 "global_data.m"
      return ll_backend__global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__global_data_scalar_common_1[1], ((MR_Box) (ll_backend__global_data__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__global_data__Cast_HeadVar2_4)));
    }
#line 334 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 334 "global_data.m"
  }
#line 334 "global_data.m"
}

#line 1355 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_mem_ref_3_p_0(
#line 1355 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 1355 "global_data.m"
  MR_Word ll_backend__global_data__MemRef0_5,
#line 1355 "global_data.m"
  MR_Word * ll_backend__global_data__MemRef_6)
#line 1355 "global_data.m"
{
#line 1362 "global_data.m"
  {
#line 1362 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;

#line 1362 "global_data.m"
#line 1362 "global_data.m"
    switch (MR_tag((MR_Word) ll_backend__global_data__MemRef0_5)) {
#line 1362 "global_data.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1362 "global_data.m"
      case (MR_Integer) 0:
#line 1362 "global_data.m"
      case (MR_Integer) 1:
#line 1363 "global_data.m"
        *ll_backend__global_data__MemRef_6 = ll_backend__global_data__MemRef0_5;
#line 1362 "global_data.m"
        break;
#line 1362 "global_data.m"
      case (MR_Integer) 2:
#line 1365 "global_data.m"
        {
#line 1365 "global_data.m"
          MR_Word ll_backend__global_data__Ptr0_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__global_data__MemRef0_5, (MR_Integer) 0)));
#line 1365 "global_data.m"
          MR_Word ll_backend__global_data__MaybeTag_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__global_data__MemRef0_5, (MR_Integer) 1)));
#line 1365 "global_data.m"
          MR_Word ll_backend__global_data__FieldNum_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__global_data__MemRef0_5, (MR_Integer) 2)));
#line 1365 "global_data.m"
          MR_Word ll_backend__global_data__Ptr_12;

#line 1366 "global_data.m"
          {
#line 1366 "global_data.m"
            ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__Remap_4, ll_backend__global_data__Ptr0_9, &ll_backend__global_data__Ptr_12);
          }
#line 1367 "global_data.m"
          {
#line 1367 "global_data.m"
            MR_Word base;
#line 1367 "global_data.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1367 "global_data.m"
            *ll_backend__global_data__MemRef_6 = base;
#line 1367 "global_data.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__global_data__Ptr_12));
#line 1367 "global_data.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__global_data__MaybeTag_10));
#line 1367 "global_data.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (ll_backend__global_data__FieldNum_11));
#line 1367 "global_data.m"
          }
#line 1365 "global_data.m"
        }
#line 1362 "global_data.m"
        break;
#line 1362 "global_data.m"
    }
#line 1362 "global_data.m"
  }
#line 1355 "global_data.m"
}

#line 1274 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_rval_3_p_0(
#line 1274 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 1274 "global_data.m"
  MR_Word ll_backend__global_data__Rval0_5,
#line 1274 "global_data.m"
  MR_Word * ll_backend__global_data__Rval_6)
#line 1274 "global_data.m"
{
#line 1278 "global_data.m"
  {
#line 1278 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;

#line 1278 "global_data.m"
#line 1278 "global_data.m"
    switch (MR_tag((MR_Word) ll_backend__global_data__Rval0_5)) {
#line 1278 "global_data.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1278 "global_data.m"
      case (MR_Integer) 0:
#line 1278 "global_data.m"
        {
#line 1278 "global_data.m"
          MR_Word ll_backend__global_data__Lval0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Rval0_5, (MR_Integer) 0)));
#line 1278 "global_data.m"
          MR_Word ll_backend__global_data__Lval_8;

#line 1279 "global_data.m"
          {
#line 1279 "global_data.m"
            ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__Remap_4, ll_backend__global_data__Lval0_7, &ll_backend__global_data__Lval_8);
          }
#line 1280 "global_data.m"
          {
#line 1280 "global_data.m"
            MR_Word base;
#line 1280 "global_data.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1280 "global_data.m"
            *ll_backend__global_data__Rval_6 = base;
#line 1280 "global_data.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__Lval_8));
#line 1280 "global_data.m"
          }
#line 1278 "global_data.m"
        }
#line 1278 "global_data.m"
        break;
#line 1278 "global_data.m"
      case (MR_Integer) 1:
#line 1283 "global_data.m"
        *ll_backend__global_data__Rval_6 = ll_backend__global_data__Rval0_5;
#line 1278 "global_data.m"
        break;
#line 1278 "global_data.m"
      case (MR_Integer) 2:
#line 1285 "global_data.m"
        {
#line 1285 "global_data.m"
          MR_Integer ll_backend__global_data__Tag_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__global_data__Rval0_5, (MR_Integer) 0)));
#line 1285 "global_data.m"
          MR_Word ll_backend__global_data__Ptr0_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__global_data__Rval0_5, (MR_Integer) 1)));
#line 1285 "global_data.m"
          MR_Word ll_backend__global_data__Ptr_12;

#line 1286 "global_data.m"
          {
#line 1286 "global_data.m"
            ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__Remap_4, ll_backend__global_data__Ptr0_11, &ll_backend__global_data__Ptr_12);
          }
#line 1287 "global_data.m"
          {
#line 1287 "global_data.m"
            MR_Word base;
#line 1287 "global_data.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1287 "global_data.m"
            *ll_backend__global_data__Rval_6 = base;
#line 1287 "global_data.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__global_data__Tag_10));
#line 1287 "global_data.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__global_data__Ptr_12));
#line 1287 "global_data.m"
          }
#line 1285 "global_data.m"
        }
#line 1278 "global_data.m"
        break;
#line 1278 "global_data.m"
      case (MR_Integer) 3:
#line 1278 "global_data.m"
#line 1278 "global_data.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Rval0_5, (MR_Integer) 0)))) {
#line 1278 "global_data.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1278 "global_data.m"
          case (MR_Integer) 0:
#line 1290 "global_data.m"
            *ll_backend__global_data__Rval_6 = ll_backend__global_data__Rval0_5;
#line 1278 "global_data.m"
            break;
#line 1278 "global_data.m"
          case (MR_Integer) 1:
#line 1292 "global_data.m"
            {
#line 1292 "global_data.m"
              MR_Word ll_backend__global_data__Const0_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Rval0_5, (MR_Integer) 1)));
#line 1292 "global_data.m"
              MR_Word ll_backend__global_data__Const_15;

#line 1315 "global_data.m"
#line 1315 "global_data.m"
              switch (MR_tag((MR_Word) ll_backend__global_data__Const0_14)) {
#line 1315 "global_data.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1315 "global_data.m"
                case (MR_Integer) 0:
#line 1352 "global_data.m"
                  ll_backend__global_data__Const_15 = ll_backend__global_data__Const0_14;
#line 1315 "global_data.m"
                  break;
#line 1315 "global_data.m"
                case (MR_Integer) 1:
#line 1315 "global_data.m"
                case (MR_Integer) 2:
#line 1352 "global_data.m"
                  ll_backend__global_data__Const_15 = ll_backend__global_data__Const0_14;
#line 1315 "global_data.m"
                  break;
#line 1315 "global_data.m"
                case (MR_Integer) 3:
#line 1315 "global_data.m"
#line 1315 "global_data.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Const0_14, (MR_Integer) 0)))) {
#line 1315 "global_data.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1315 "global_data.m"
                    case (MR_Integer) 0:
#line 1315 "global_data.m"
                    case (MR_Integer) 1:
#line 1315 "global_data.m"
                    case (MR_Integer) 2:
#line 1315 "global_data.m"
                    case (MR_Integer) 3:
#line 1352 "global_data.m"
                      ll_backend__global_data__Const_15 = ll_backend__global_data__Const0_14;
#line 1315 "global_data.m"
                      break;
#line 1315 "global_data.m"
                    case (MR_Integer) 4:
#line 1315 "global_data.m"
                      {
#line 1315 "global_data.m"
                        MR_Word ll_backend__global_data__DataId0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Const0_14, (MR_Integer) 1)));
#line 1315 "global_data.m"
                        MR_Word ll_backend__global_data__MaybeOffset_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Const0_14, (MR_Integer) 2)));
#line 1315 "global_data.m"
                        MR_Word ll_backend__global_data__DataId_36;

#line 1325 "global_data.m"
#line 1325 "global_data.m"
                        switch (MR_tag((MR_Word) ll_backend__global_data__DataId0_29)) {
#line 1325 "global_data.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 1325 "global_data.m"
                          case (MR_Integer) 0:
#line 1325 "global_data.m"
                          case (MR_Integer) 1:
#line 1339 "global_data.m"
                            ll_backend__global_data__DataId_36 = ll_backend__global_data__DataId0_29;
#line 1325 "global_data.m"
                            break;
#line 1325 "global_data.m"
                          case (MR_Integer) 2:
#line 1317 "global_data.m"
                            {
#line 1317 "global_data.m"
                              MR_Word ll_backend__global_data__TypeNum0_31 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__global_data__DataId0_29, (MR_Integer) 0)));
#line 1317 "global_data.m"
                              MR_Word ll_backend__global_data__TypeNumRemap_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Remap_4, (MR_Integer) 0)));
#line 1317 "global_data.m"
                              MR_Word ll_backend__global_data__ScalarCellGroupRemap_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Remap_4, (MR_Integer) 1)));
#line 1317 "global_data.m"
                              MR_Integer ll_backend__global_data___CellNum_32 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__global_data__DataId0_29, (MR_Integer) 1)));
#line 1319 "global_data.m"
                              MR_Word ll_backend__global_data__TypeCtorInfo_33_55 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;

#line 1319 "global_data.m"
                              {
#line 1319 "global_data.m"
                                ll_backend__global_data__succeeded = mercury__map__contains_2_p_0(ll_backend__global_data__TypeCtorInfo_33_55, ll_backend__global_data__TypeCtorInfo_33_55, ll_backend__global_data__TypeNumRemap_33, ((MR_Box) (ll_backend__global_data__TypeNum0_31)));
                              }
#line 1322 "global_data.m"
                              if (ll_backend__global_data__succeeded)
#line 1320 "global_data.m"
                                {
#line 1320 "global_data.m"
                                  MR_Word ll_backend__global_data__TypeCtorInfo_36_58;
#line 1320 "global_data.m"
                                  MR_Word ll_backend__global_data__ScalarCellGroup_35;
#line 1320 "global_data.m"
                                  MR_Box ll_backend__global_data__conv0_ScalarCellGroup_35;
#line 1321 "global_data.m"
                                  MR_Box ll_backend__global_data__conv1_DataId_36;

#line 1320 "global_data.m"
                                  {
#line 1320 "global_data.m"
                                    mercury__map__lookup_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, (MR_Word) &ll_backend__global_data_scalar_common_1[3], ll_backend__global_data__ScalarCellGroupRemap_34, ((MR_Box) (ll_backend__global_data__TypeNum0_31)), &ll_backend__global_data__conv0_ScalarCellGroup_35);
                                  }
#line 1320 "global_data.m"
                                  ll_backend__global_data__ScalarCellGroup_35 = ((MR_Word) ll_backend__global_data__conv0_ScalarCellGroup_35);
#line 6257 "ll_backend.global_data.c"
                                  ll_backend__global_data__TypeCtorInfo_36_58 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0;
#line 1321 "global_data.m"
                                  {
#line 1321 "global_data.m"
                                    mercury__map__lookup_3_p_0(ll_backend__global_data__TypeCtorInfo_36_58, ll_backend__global_data__TypeCtorInfo_36_58, ll_backend__global_data__ScalarCellGroup_35, ((MR_Box) (ll_backend__global_data__DataId0_29)), &ll_backend__global_data__conv1_DataId_36);
                                  }
#line 1321 "global_data.m"
                                  ll_backend__global_data__DataId_36 = ((MR_Word) ll_backend__global_data__conv1_DataId_36);
#line 1320 "global_data.m"
                                }
#line 1322 "global_data.m"
                              else
#line 1323 "global_data.m"
                                ll_backend__global_data__DataId_36 = ll_backend__global_data__DataId0_29;
#line 1317 "global_data.m"
                            }
#line 1325 "global_data.m"
                            break;
#line 1325 "global_data.m"
                          case (MR_Integer) 3:
#line 1325 "global_data.m"
#line 1325 "global_data.m"
                            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__DataId0_29, (MR_Integer) 0)))) {
#line 1325 "global_data.m"
                              default: /*NOTREACHED*/ MR_assert(0);
#line 1325 "global_data.m"
                              case (MR_Integer) 0:
#line 1326 "global_data.m"
                                {
#line 1326 "global_data.m"
                                  MR_Integer ll_backend__global_data__CellNum_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__global_data__DataId0_29, (MR_Integer) 2)));
#line 1326 "global_data.m"
                                  MR_Word ll_backend__global_data__TypeNum0_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__DataId0_29, (MR_Integer) 1)));
#line 1326 "global_data.m"
                                  MR_Word ll_backend__global_data__TypeNumRemap_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Remap_4, (MR_Integer) 0)));
#line 1327 "global_data.m"
                                  MR_Word ll_backend__global_data__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Remap_4, (MR_Integer) 1)));
#line 1330 "global_data.m"
                                  MR_Word ll_backend__global_data__TypeNum_39;
#line 1328 "global_data.m"
                                  MR_Word ll_backend__global_data__TypeCtorInfo_37_59 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;
#line 1328 "global_data.m"
                                  MR_Box ll_backend__global_data__conv2_TypeNum_39;

#line 1328 "global_data.m"
                                  {
#line 1328 "global_data.m"
                                    ll_backend__global_data__succeeded = mercury__map__search_3_p_0(ll_backend__global_data__TypeCtorInfo_37_59, ll_backend__global_data__TypeCtorInfo_37_59, ll_backend__global_data__TypeNumRemap_54, ((MR_Box) (ll_backend__global_data__TypeNum0_53)), &ll_backend__global_data__conv2_TypeNum_39);
                                  }
#line 1328 "global_data.m"
                                  if (ll_backend__global_data__succeeded)
#line 1328 "global_data.m"
                                    {
#line 1328 "global_data.m"
                                      ll_backend__global_data__TypeNum_39 = ((MR_Word) ll_backend__global_data__conv2_TypeNum_39);
#line 1328 "global_data.m"
                                      ll_backend__global_data__succeeded = MR_TRUE;
#line 1328 "global_data.m"
                                    }
#line 1330 "global_data.m"
                                  if (ll_backend__global_data__succeeded)
#line 1329 "global_data.m"
                                    {
#line 1329 "global_data.m"
                                      ll_backend__global_data__DataId_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1329 "global_data.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__global_data__DataId_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1329 "global_data.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__global_data__DataId_36, 1) = ((MR_Box) (ll_backend__global_data__TypeNum_39));
#line 1329 "global_data.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__global_data__DataId_36, 2) = ((MR_Box) (ll_backend__global_data__CellNum_37));
#line 1329 "global_data.m"
                                    }
#line 1330 "global_data.m"
                                  else
#line 1331 "global_data.m"
                                    ll_backend__global_data__DataId_36 = ll_backend__global_data__DataId0_29;
#line 1326 "global_data.m"
                                }
#line 1325 "global_data.m"
                                break;
#line 1325 "global_data.m"
                              case (MR_Integer) 1:
#line 1325 "global_data.m"
                              case (MR_Integer) 2:
#line 1339 "global_data.m"
                                ll_backend__global_data__DataId_36 = ll_backend__global_data__DataId0_29;
#line 1325 "global_data.m"
                                break;
#line 1325 "global_data.m"
                            }
#line 1325 "global_data.m"
                            break;
#line 1325 "global_data.m"
                        }
#line 1341 "global_data.m"
                        {
#line 1341 "global_data.m"
                          ll_backend__global_data__Const_15 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1341 "global_data.m"
                          MR_hl_field(MR_mktag(3), ll_backend__global_data__Const_15, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1341 "global_data.m"
                          MR_hl_field(MR_mktag(3), ll_backend__global_data__Const_15, 1) = ((MR_Box) (ll_backend__global_data__DataId_36));
#line 1341 "global_data.m"
                          MR_hl_field(MR_mktag(3), ll_backend__global_data__Const_15, 2) = ((MR_Box) (ll_backend__global_data__MaybeOffset_30));
#line 1341 "global_data.m"
                        }
#line 1315 "global_data.m"
                      }
#line 1315 "global_data.m"
                      break;
#line 1315 "global_data.m"
                  }
#line 1315 "global_data.m"
                  break;
#line 1315 "global_data.m"
              }
#line 1294 "global_data.m"
              {
#line 1294 "global_data.m"
                MR_Word base;
#line 1294 "global_data.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1294 "global_data.m"
                *ll_backend__global_data__Rval_6 = base;
#line 1294 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1294 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Const_15));
#line 1294 "global_data.m"
              }
#line 1292 "global_data.m"
            }
#line 1278 "global_data.m"
            break;
#line 1278 "global_data.m"
          case (MR_Integer) 2:
#line 1296 "global_data.m"
            {
#line 1296 "global_data.m"
              MR_Word ll_backend__global_data__Unop_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Rval0_5, (MR_Integer) 1)));
#line 1296 "global_data.m"
              MR_Word ll_backend__global_data__A0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Rval0_5, (MR_Integer) 2)));
#line 1296 "global_data.m"
              MR_Word ll_backend__global_data__A_18;

#line 1297 "global_data.m"
              {
#line 1297 "global_data.m"
                ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__Remap_4, ll_backend__global_data__A0_17, &ll_backend__global_data__A_18);
              }
#line 1298 "global_data.m"
              {
#line 1298 "global_data.m"
                MR_Word base;
#line 1298 "global_data.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1298 "global_data.m"
                *ll_backend__global_data__Rval_6 = base;
#line 1298 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1298 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Unop_16));
#line 1298 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__A_18));
#line 1298 "global_data.m"
              }
#line 1296 "global_data.m"
            }
#line 1278 "global_data.m"
            break;
#line 1278 "global_data.m"
          case (MR_Integer) 3:
#line 1300 "global_data.m"
            {
#line 1300 "global_data.m"
              MR_Word ll_backend__global_data__Binop_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Rval0_5, (MR_Integer) 1)));
#line 1300 "global_data.m"
              MR_Word ll_backend__global_data__B0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Rval0_5, (MR_Integer) 3)));
#line 1300 "global_data.m"
              MR_Word ll_backend__global_data__B_21;
#line 1300 "global_data.m"
              MR_Word ll_backend__global_data__A0_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Rval0_5, (MR_Integer) 2)));
#line 1300 "global_data.m"
              MR_Word ll_backend__global_data__A_25;

#line 1301 "global_data.m"
              {
#line 1301 "global_data.m"
                ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__Remap_4, ll_backend__global_data__A0_24, &ll_backend__global_data__A_25);
              }
#line 1302 "global_data.m"
              {
#line 1302 "global_data.m"
                ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__Remap_4, ll_backend__global_data__B0_20, &ll_backend__global_data__B_21);
              }
#line 1303 "global_data.m"
              {
#line 1303 "global_data.m"
                MR_Word base;
#line 1303 "global_data.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1303 "global_data.m"
                *ll_backend__global_data__Rval_6 = base;
#line 1303 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1303 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Binop_19));
#line 1303 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__A_25));
#line 1303 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__global_data__B_21));
#line 1303 "global_data.m"
              }
#line 1300 "global_data.m"
            }
#line 1278 "global_data.m"
            break;
#line 1278 "global_data.m"
          case (MR_Integer) 4:
#line 1305 "global_data.m"
            {
#line 1305 "global_data.m"
              MR_Word ll_backend__global_data__MemRef0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Rval0_5, (MR_Integer) 1)));
#line 1305 "global_data.m"
              MR_Word ll_backend__global_data__MemRef_23;

#line 1306 "global_data.m"
              {
#line 1306 "global_data.m"
                ll_backend__global_data__remap_mem_ref_3_p_0(ll_backend__global_data__Remap_4, ll_backend__global_data__MemRef0_22, &ll_backend__global_data__MemRef_23);
              }
#line 1307 "global_data.m"
              {
#line 1307 "global_data.m"
                MR_Word base;
#line 1307 "global_data.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1307 "global_data.m"
                *ll_backend__global_data__Rval_6 = base;
#line 1307 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1307 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__MemRef_23));
#line 1307 "global_data.m"
              }
#line 1305 "global_data.m"
            }
#line 1278 "global_data.m"
            break;
#line 1278 "global_data.m"
        }
#line 1278 "global_data.m"
        break;
#line 1278 "global_data.m"
    }
#line 1278 "global_data.m"
  }
#line 1274 "global_data.m"
}

#line 1239 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_lval_3_p_0(
#line 1239 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 1239 "global_data.m"
  MR_Word ll_backend__global_data__Lval0_5,
#line 1239 "global_data.m"
  MR_Word * ll_backend__global_data__Lval_6)
#line 1239 "global_data.m"
{
#line 1243 "global_data.m"
  {
#line 1243 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;

#line 1243 "global_data.m"
#line 1243 "global_data.m"
    switch (MR_tag((MR_Word) ll_backend__global_data__Lval0_5)) {
#line 1243 "global_data.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1243 "global_data.m"
      case (MR_Integer) 0:
#line 1271 "global_data.m"
        *ll_backend__global_data__Lval_6 = ll_backend__global_data__Lval0_5;
#line 1243 "global_data.m"
        break;
#line 1243 "global_data.m"
      case (MR_Integer) 1:
#line 1243 "global_data.m"
      case (MR_Integer) 2:
#line 1271 "global_data.m"
        *ll_backend__global_data__Lval_6 = ll_backend__global_data__Lval0_5;
#line 1243 "global_data.m"
        break;
#line 1243 "global_data.m"
      case (MR_Integer) 3:
#line 1243 "global_data.m"
#line 1243 "global_data.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Lval0_5, (MR_Integer) 0)))) {
#line 1243 "global_data.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1243 "global_data.m"
          case (MR_Integer) 0:
#line 1243 "global_data.m"
          case (MR_Integer) 1:
#line 1243 "global_data.m"
          case (MR_Integer) 2:
#line 1243 "global_data.m"
          case (MR_Integer) 3:
#line 1243 "global_data.m"
          case (MR_Integer) 4:
#line 1243 "global_data.m"
          case (MR_Integer) 5:
#line 1243 "global_data.m"
          case (MR_Integer) 6:
#line 1243 "global_data.m"
          case (MR_Integer) 7:
#line 1243 "global_data.m"
          case (MR_Integer) 8:
#line 1243 "global_data.m"
          case (MR_Integer) 11:
#line 1243 "global_data.m"
          case (MR_Integer) 12:
#line 1271 "global_data.m"
            *ll_backend__global_data__Lval_6 = ll_backend__global_data__Lval0_5;
#line 1243 "global_data.m"
            break;
#line 1243 "global_data.m"
          case (MR_Integer) 9:
#line 1243 "global_data.m"
            {
#line 1243 "global_data.m"
              MR_Word ll_backend__global_data__MaybeTag_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Lval0_5, (MR_Integer) 1)));
#line 1243 "global_data.m"
              MR_Word ll_backend__global_data__Rval0_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Lval0_5, (MR_Integer) 2)));
#line 1243 "global_data.m"
              MR_Word ll_backend__global_data__FieldNum_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Lval0_5, (MR_Integer) 3)));
#line 1243 "global_data.m"
              MR_Word ll_backend__global_data__Rval_10;

#line 1244 "global_data.m"
              {
#line 1244 "global_data.m"
                ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__Remap_4, ll_backend__global_data__Rval0_8, &ll_backend__global_data__Rval_10);
              }
#line 1245 "global_data.m"
              {
#line 1245 "global_data.m"
                MR_Word base;
#line 1245 "global_data.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1245 "global_data.m"
                *ll_backend__global_data__Lval_6 = base;
#line 1245 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1245 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__MaybeTag_7));
#line 1245 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__Rval_10));
#line 1245 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__global_data__FieldNum_9));
#line 1245 "global_data.m"
              }
#line 1243 "global_data.m"
            }
#line 1243 "global_data.m"
            break;
#line 1243 "global_data.m"
          case (MR_Integer) 10:
#line 1247 "global_data.m"
            {
#line 1247 "global_data.m"
              MR_Word ll_backend__global_data__Rval0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Lval0_5, (MR_Integer) 1)));
#line 1247 "global_data.m"
              MR_Word ll_backend__global_data__Rval_28;

#line 1248 "global_data.m"
              {
#line 1248 "global_data.m"
                ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__Remap_4, ll_backend__global_data__Rval0_27, &ll_backend__global_data__Rval_28);
              }
#line 1249 "global_data.m"
              {
#line 1249 "global_data.m"
                MR_Word base;
#line 1249 "global_data.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1249 "global_data.m"
                *ll_backend__global_data__Lval_6 = base;
#line 1249 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 1249 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Rval_28));
#line 1249 "global_data.m"
              }
#line 1247 "global_data.m"
            }
#line 1243 "global_data.m"
            break;
#line 1243 "global_data.m"
        }
#line 1243 "global_data.m"
        break;
#line 1243 "global_data.m"
    }
#line 1243 "global_data.m"
  }
#line 1239 "global_data.m"
}

#line 1231 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_foreign_proc_output_3_p_0(
#line 1231 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 1231 "global_data.m"
  MR_Word ll_backend__global_data__Output0_5,
#line 1231 "global_data.m"
  MR_Word * ll_backend__global_data__Output_6)
#line 1231 "global_data.m"
{
#line 1234 "global_data.m"
  {
#line 1234 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 1234 "global_data.m"
    MR_Word ll_backend__global_data__Lval0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Output0_5, (MR_Integer) 0)));
#line 1234 "global_data.m"
    MR_Word ll_backend__global_data__A_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Output0_5, (MR_Integer) 1)));
#line 1234 "global_data.m"
    MR_Word ll_backend__global_data__B_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Output0_5, (MR_Integer) 2)));
#line 1234 "global_data.m"
    MR_Word ll_backend__global_data__C_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Output0_5, (MR_Integer) 3)));
#line 1234 "global_data.m"
    MR_String ll_backend__global_data__D_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Output0_5, (MR_Integer) 4)));
#line 1234 "global_data.m"
    MR_Word ll_backend__global_data__E_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Output0_5, (MR_Integer) 5)));
#line 1234 "global_data.m"
    MR_Word ll_backend__global_data__F_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Output0_5, (MR_Integer) 6)));
#line 1234 "global_data.m"
    MR_Word ll_backend__global_data__Lval_14;

#line 1236 "global_data.m"
    {
#line 1236 "global_data.m"
      ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__Remap_4, ll_backend__global_data__Lval0_7, &ll_backend__global_data__Lval_14);
    }
#line 1237 "global_data.m"
    {
#line 1237 "global_data.m"
      MR_Word base;
#line 1237 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1237 "global_data.m"
      *ll_backend__global_data__Output_6 = base;
#line 1237 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__Lval_14));
#line 1237 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__A_8));
#line 1237 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__B_9));
#line 1237 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__C_10));
#line 1237 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__D_11));
#line 1237 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__global_data__E_12));
#line 1237 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__global_data__F_13));
#line 1237 "global_data.m"
    }
#line 1234 "global_data.m"
  }
#line 1231 "global_data.m"
}

#line 1223 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_foreign_proc_input_3_p_0(
#line 1223 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 1223 "global_data.m"
  MR_Word ll_backend__global_data__Input0_5,
#line 1223 "global_data.m"
  MR_Word * ll_backend__global_data__Input_6)
#line 1223 "global_data.m"
{
#line 1226 "global_data.m"
  {
#line 1226 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 1226 "global_data.m"
    MR_String ll_backend__global_data__A_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Input0_5, (MR_Integer) 0)));
#line 1226 "global_data.m"
    MR_Word ll_backend__global_data__B_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Input0_5, (MR_Integer) 1)));
#line 1226 "global_data.m"
    MR_Word ll_backend__global_data__C_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Input0_5, (MR_Integer) 2)));
#line 1226 "global_data.m"
    MR_Word ll_backend__global_data__D_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Input0_5, (MR_Integer) 3)));
#line 1226 "global_data.m"
    MR_Word ll_backend__global_data__Rval0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Input0_5, (MR_Integer) 4)));
#line 1226 "global_data.m"
    MR_Word ll_backend__global_data__E_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Input0_5, (MR_Integer) 5)));
#line 1226 "global_data.m"
    MR_Word ll_backend__global_data__F_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Input0_5, (MR_Integer) 6)));
#line 1226 "global_data.m"
    MR_Word ll_backend__global_data__Rval_14;

#line 1228 "global_data.m"
    {
#line 1228 "global_data.m"
      ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__Remap_4, ll_backend__global_data__Rval0_11, &ll_backend__global_data__Rval_14);
    }
#line 1229 "global_data.m"
    {
#line 1229 "global_data.m"
      MR_Word base;
#line 1229 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1229 "global_data.m"
      *ll_backend__global_data__Input_6 = base;
#line 1229 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__A_7));
#line 1229 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__B_8));
#line 1229 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__C_9));
#line 1229 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__D_10));
#line 1229 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__Rval_14));
#line 1229 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__global_data__E_12));
#line 1229 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__global_data__F_13));
#line 1229 "global_data.m"
    }
#line 1226 "global_data.m"
  }
#line 1223 "global_data.m"
}

#line 1211 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_foreign_proc_component_3_p_0_2(
#line 1211 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 1211 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 1211 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2)
#line 1211 "global_data.m"
{
#line 1211 "global_data.m"
  {
#line 1211 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 1211 "global_data.m"
    MR_Word ll_backend__global_data__conv1_Output_6;

#line 1211 "global_data.m"
    {
#line 1211 "global_data.m"
      ll_backend__global_data__remap_foreign_proc_output_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv1_Output_6);
    }
#line 1211 "global_data.m"
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv1_Output_6));
#line 1211 "global_data.m"
  }
#line 1211 "global_data.m"
}

#line 1207 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_foreign_proc_component_3_p_0_1(
#line 1207 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 1207 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 1207 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2)
#line 1207 "global_data.m"
{
#line 1207 "global_data.m"
  {
#line 1207 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 1207 "global_data.m"
    MR_Word ll_backend__global_data__conv0_Input_6;

#line 1207 "global_data.m"
    {
#line 1207 "global_data.m"
      ll_backend__global_data__remap_foreign_proc_input_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv0_Input_6);
    }
#line 1207 "global_data.m"
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv0_Input_6));
#line 1207 "global_data.m"
  }
#line 1207 "global_data.m"
}

#line 1201 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_foreign_proc_component_3_p_0(
#line 1201 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 1201 "global_data.m"
  MR_Word ll_backend__global_data__Comp0_5,
#line 1201 "global_data.m"
  MR_Word * ll_backend__global_data__Comp_6)
#line 1201 "global_data.m"
{
#line 1206 "global_data.m"
  {
#line 1206 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;

#line 1206 "global_data.m"
#line 1206 "global_data.m"
    switch (MR_tag((MR_Word) ll_backend__global_data__Comp0_5)) {
#line 1206 "global_data.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1206 "global_data.m"
      case (MR_Integer) 0:
#line 1220 "global_data.m"
        *ll_backend__global_data__Comp_6 = ll_backend__global_data__Comp0_5;
#line 1206 "global_data.m"
        break;
#line 1206 "global_data.m"
      case (MR_Integer) 1:
#line 1206 "global_data.m"
        {
#line 1206 "global_data.m"
          MR_Word ll_backend__global_data__TypeCtorInfo_24_24;
#line 1206 "global_data.m"
          MR_Word ll_backend__global_data__Inputs0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__Comp0_5, (MR_Integer) 0)));
#line 1206 "global_data.m"
          MR_Word ll_backend__global_data__Inputs_8;
#line 1206 "global_data.m"
          MR_Word ll_backend__global_data__V_21_21;

#line 1207 "global_data.m"
          {
#line 1207 "global_data.m"
            ll_backend__global_data__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1207 "global_data.m"
            MR_hl_field(MR_mktag(0), ll_backend__global_data__V_21_21, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[10]));
#line 1207 "global_data.m"
            MR_hl_field(MR_mktag(0), ll_backend__global_data__V_21_21, 1) = ((MR_Box) (ll_backend__global_data__remap_foreign_proc_component_3_p_0_1));
#line 1207 "global_data.m"
            MR_hl_field(MR_mktag(0), ll_backend__global_data__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1207 "global_data.m"
            MR_hl_field(MR_mktag(0), ll_backend__global_data__V_21_21, 3) = ((MR_Box) (ll_backend__global_data__Remap_4));
#line 1207 "global_data.m"
          }
#line 6916 "ll_backend.global_data.c"
          ll_backend__global_data__TypeCtorInfo_24_24 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_input_0;
#line 1207 "global_data.m"
          {
#line 1207 "global_data.m"
            mercury__list__map_3_p_0(ll_backend__global_data__TypeCtorInfo_24_24, ll_backend__global_data__TypeCtorInfo_24_24, ll_backend__global_data__V_21_21, ll_backend__global_data__Inputs0_7, &ll_backend__global_data__Inputs_8);
          }
#line 1208 "global_data.m"
          {
#line 1208 "global_data.m"
            MR_Word base;
#line 1208 "global_data.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1208 "global_data.m"
            *ll_backend__global_data__Comp_6 = base;
#line 1208 "global_data.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__global_data__Inputs_8));
#line 1208 "global_data.m"
          }
#line 1206 "global_data.m"
        }
#line 1206 "global_data.m"
        break;
#line 1206 "global_data.m"
      case (MR_Integer) 2:
#line 1210 "global_data.m"
        {
#line 1210 "global_data.m"
          MR_Word ll_backend__global_data__TypeCtorInfo_27_27;
#line 1210 "global_data.m"
          MR_Word ll_backend__global_data__Outputs0_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__global_data__Comp0_5, (MR_Integer) 0)));
#line 1210 "global_data.m"
          MR_Word ll_backend__global_data__Outputs_10;
#line 1210 "global_data.m"
          MR_Word ll_backend__global_data__V_20_20;

#line 1211 "global_data.m"
          {
#line 1211 "global_data.m"
            ll_backend__global_data__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1211 "global_data.m"
            MR_hl_field(MR_mktag(0), ll_backend__global_data__V_20_20, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[11]));
#line 1211 "global_data.m"
            MR_hl_field(MR_mktag(0), ll_backend__global_data__V_20_20, 1) = ((MR_Box) (ll_backend__global_data__remap_foreign_proc_component_3_p_0_2));
#line 1211 "global_data.m"
            MR_hl_field(MR_mktag(0), ll_backend__global_data__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1211 "global_data.m"
            MR_hl_field(MR_mktag(0), ll_backend__global_data__V_20_20, 3) = ((MR_Box) (ll_backend__global_data__Remap_4));
#line 1211 "global_data.m"
          }
#line 6966 "ll_backend.global_data.c"
          ll_backend__global_data__TypeCtorInfo_27_27 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_output_0;
#line 1211 "global_data.m"
          {
#line 1211 "global_data.m"
            mercury__list__map_3_p_0(ll_backend__global_data__TypeCtorInfo_27_27, ll_backend__global_data__TypeCtorInfo_27_27, ll_backend__global_data__V_20_20, ll_backend__global_data__Outputs0_9, &ll_backend__global_data__Outputs_10);
          }
#line 1212 "global_data.m"
          {
#line 1212 "global_data.m"
            MR_Word base;
#line 1212 "global_data.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1212 "global_data.m"
            *ll_backend__global_data__Comp_6 = base;
#line 1212 "global_data.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__global_data__Outputs_10));
#line 1212 "global_data.m"
          }
#line 1210 "global_data.m"
        }
#line 1206 "global_data.m"
        break;
#line 1206 "global_data.m"
      case (MR_Integer) 3:
#line 1220 "global_data.m"
        *ll_backend__global_data__Comp_6 = ll_backend__global_data__Comp0_5;
#line 1206 "global_data.m"
        break;
#line 1206 "global_data.m"
    }
#line 1206 "global_data.m"
  }
#line 1201 "global_data.m"
}

#line 1196 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_ts_table_index_3_p_0(
#line 1196 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 1196 "global_data.m"
  MR_Integer ll_backend__global_data__HeadVar__2_2,
#line 1196 "global_data.m"
  MR_Integer * ll_backend__global_data__HeadVar__3_3)
#line 1196 "global_data.m"
{
#line 1198 "global_data.m"
  {
#line 1198 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;

#line 1198 "global_data.m"
    if ((ll_backend__global_data__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1198 "global_data.m"
      *ll_backend__global_data__HeadVar__3_3 = ll_backend__global_data__HeadVar__2_2;
#line 1198 "global_data.m"
    else
#line 1199 "global_data.m"
      {
#line 1199 "global_data.m"
        MR_Integer ll_backend__global_data__Offset_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__global_data__HeadVar__1_1, (MR_Integer) 0)));

#line 1199 "global_data.m"
        *ll_backend__global_data__HeadVar__3_3 = (ll_backend__global_data__HeadVar__2_2 + ll_backend__global_data__Offset_7);
#line 1199 "global_data.m"
      }
#line 1198 "global_data.m"
  }
#line 1196 "global_data.m"
}

#line 1056 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_instr_3_p_0_2(
#line 1056 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 1056 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 1056 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2)
#line 1056 "global_data.m"
{
#line 1056 "global_data.m"
  {
#line 1056 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 1056 "global_data.m"
    MR_Word ll_backend__global_data__conv1_Comp_6;

#line 1056 "global_data.m"
    {
#line 1056 "global_data.m"
      ll_backend__global_data__remap_foreign_proc_component_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv1_Comp_6);
    }
#line 1056 "global_data.m"
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv1_Comp_6));
#line 1056 "global_data.m"
  }
#line 1056 "global_data.m"
}

#line 1038 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_instr_3_p_0_1(
#line 1038 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 1038 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 1038 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2)
#line 1038 "global_data.m"
{
#line 1038 "global_data.m"
  {
#line 1038 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 1038 "global_data.m"
    MR_Word ll_backend__global_data__conv0_STATE_VARIABLE_Instr_10;

#line 1038 "global_data.m"
    {
#line 1038 "global_data.m"
      ll_backend__global_data__remap_instruction_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv0_STATE_VARIABLE_Instr_10);
    }
#line 1038 "global_data.m"
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv0_STATE_VARIABLE_Instr_10));
#line 1038 "global_data.m"
  }
#line 1038 "global_data.m"
}

#line 1032 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_instr_3_p_0(
#line 1032 "global_data.m"
  MR_Word ll_backend__global_data__GlobalDataRemap_4,
#line 1032 "global_data.m"
  MR_Word ll_backend__global_data__Instr0_5,
#line 1032 "global_data.m"
  MR_Word * ll_backend__global_data__Instr_6)
#line 1032 "global_data.m"
{
#line 1034 "global_data.m"
  {
#line 1034 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 1034 "global_data.m"
    MR_Word ll_backend__global_data__StaticCellRemap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataRemap_4, (MR_Integer) 1)));
#line 1035 "global_data.m"
    MR_Word ll_backend__global_data__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataRemap_4, (MR_Integer) 0)));

#line 1040 "global_data.m"
#line 1040 "global_data.m"
    switch (MR_tag((MR_Word) ll_backend__global_data__Instr0_5)) {
#line 1040 "global_data.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1040 "global_data.m"
      case (MR_Integer) 0:
#line 1193 "global_data.m"
        *ll_backend__global_data__Instr_6 = ll_backend__global_data__Instr0_5;
#line 1040 "global_data.m"
        break;
#line 1040 "global_data.m"
      case (MR_Integer) 1:
#line 1040 "global_data.m"
      case (MR_Integer) 2:
#line 1193 "global_data.m"
        *ll_backend__global_data__Instr_6 = ll_backend__global_data__Instr0_5;
#line 1040 "global_data.m"
        break;
#line 1040 "global_data.m"
      case (MR_Integer) 3:
#line 1040 "global_data.m"
#line 1040 "global_data.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 0)))) {
#line 1040 "global_data.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1040 "global_data.m"
          case (MR_Integer) 0:
#line 1037 "global_data.m"
            {
#line 1037 "global_data.m"
              MR_Word ll_backend__global_data__TypeCtorInfo_144_144;
#line 1037 "global_data.m"
              MR_Integer ll_backend__global_data__NumIntTemps_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
#line 1037 "global_data.m"
              MR_Integer ll_backend__global_data__NumFloatTemps_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));
#line 1037 "global_data.m"
              MR_Word ll_backend__global_data__Block0_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 3)));
#line 1037 "global_data.m"
              MR_Word ll_backend__global_data__Block_11;
#line 1037 "global_data.m"
              MR_Word ll_backend__global_data__V_94_94;

#line 1038 "global_data.m"
              {
#line 1038 "global_data.m"
                ll_backend__global_data__V_94_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1038 "global_data.m"
                MR_hl_field(MR_mktag(0), ll_backend__global_data__V_94_94, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[1]));
#line 1038 "global_data.m"
                MR_hl_field(MR_mktag(0), ll_backend__global_data__V_94_94, 1) = ((MR_Box) (ll_backend__global_data__remap_instr_3_p_0_1));
#line 1038 "global_data.m"
                MR_hl_field(MR_mktag(0), ll_backend__global_data__V_94_94, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1038 "global_data.m"
                MR_hl_field(MR_mktag(0), ll_backend__global_data__V_94_94, 3) = ((MR_Box) (ll_backend__global_data__GlobalDataRemap_4));
#line 1038 "global_data.m"
              }
#line 7175 "ll_backend.global_data.c"
              ll_backend__global_data__TypeCtorInfo_144_144 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 1038 "global_data.m"
              {
#line 1038 "global_data.m"
                mercury__list__map_3_p_0(ll_backend__global_data__TypeCtorInfo_144_144, ll_backend__global_data__TypeCtorInfo_144_144, ll_backend__global_data__V_94_94, ll_backend__global_data__Block0_10, &ll_backend__global_data__Block_11);
              }
#line 1039 "global_data.m"
              {
#line 1039 "global_data.m"
                MR_Word base;
#line 1039 "global_data.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1039 "global_data.m"
                *ll_backend__global_data__Instr_6 = base;
#line 1039 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1039 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__NumIntTemps_8));
#line 1039 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__NumFloatTemps_9));
#line 1039 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__global_data__Block_11));
#line 1039 "global_data.m"
              }
#line 1037 "global_data.m"
            }
#line 1040 "global_data.m"
            break;
#line 1040 "global_data.m"
          case (MR_Integer) 1:
#line 1041 "global_data.m"
            {
#line 1041 "global_data.m"
              MR_Word ll_backend__global_data__Lval_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
#line 1041 "global_data.m"
              MR_Word ll_backend__global_data__Rval0_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));
#line 1041 "global_data.m"
              MR_Word ll_backend__global_data__Rval_14;

#line 1042 "global_data.m"
              {
#line 1042 "global_data.m"
                ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Rval0_13, &ll_backend__global_data__Rval_14);
              }
#line 1043 "global_data.m"
              {
#line 1043 "global_data.m"
                MR_Word base;
#line 1043 "global_data.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1043 "global_data.m"
                *ll_backend__global_data__Instr_6 = base;
#line 1043 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1043 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Lval_12));
#line 1043 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__Rval_14));
#line 1043 "global_data.m"
              }
#line 1041 "global_data.m"
            }
#line 1040 "global_data.m"
            break;
#line 1040 "global_data.m"
          case (MR_Integer) 2:
#line 1045 "global_data.m"
            {
#line 1045 "global_data.m"
              MR_Word ll_backend__global_data__Lval_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
#line 1045 "global_data.m"
              MR_Word ll_backend__global_data__Rval0_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));
#line 1045 "global_data.m"
              MR_Word ll_backend__global_data__Rval_97;

#line 1046 "global_data.m"
              {
#line 1046 "global_data.m"
                ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Rval0_96, &ll_backend__global_data__Rval_97);
              }
#line 1047 "global_data.m"
              {
#line 1047 "global_data.m"
                MR_Word base;
#line 1047 "global_data.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1047 "global_data.m"
                *ll_backend__global_data__Instr_6 = base;
#line 1047 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1047 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Lval_95));
#line 1047 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__Rval_97));
#line 1047 "global_data.m"
              }
#line 1045 "global_data.m"
            }
#line 1040 "global_data.m"
            break;
#line 1040 "global_data.m"
          case (MR_Integer) 3:
#line 1040 "global_data.m"
          case (MR_Integer) 4:
#line 1040 "global_data.m"
          case (MR_Integer) 5:
#line 1040 "global_data.m"
          case (MR_Integer) 6:
#line 1040 "global_data.m"
          case (MR_Integer) 8:
#line 1040 "global_data.m"
          case (MR_Integer) 24:
#line 1040 "global_data.m"
          case (MR_Integer) 25:
#line 1040 "global_data.m"
          case (MR_Integer) 26:
#line 1040 "global_data.m"
          case (MR_Integer) 29:
#line 1193 "global_data.m"
            *ll_backend__global_data__Instr_6 = ll_backend__global_data__Instr0_5;
#line 1040 "global_data.m"
            break;
#line 1040 "global_data.m"
          case (MR_Integer) 7:
#line 1061 "global_data.m"
            {
#line 1061 "global_data.m"
              MR_Word ll_backend__global_data__MaybeLabels_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));
#line 1061 "global_data.m"
              MR_Word ll_backend__global_data__Rval0_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
#line 1061 "global_data.m"
              MR_Word ll_backend__global_data__Rval_101;

#line 1062 "global_data.m"
              {
#line 1062 "global_data.m"
                ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Rval0_100, &ll_backend__global_data__Rval_101);
              }
#line 1063 "global_data.m"
              {
#line 1063 "global_data.m"
                MR_Word base;
#line 1063 "global_data.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1063 "global_data.m"
                *ll_backend__global_data__Instr_6 = base;
#line 1063 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1063 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Rval_101));
#line 1063 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__MaybeLabels_27));
#line 1063 "global_data.m"
              }
#line 1061 "global_data.m"
            }
#line 1040 "global_data.m"
            break;
#line 1040 "global_data.m"
          case (MR_Integer) 9:
#line 1049 "global_data.m"
            {
#line 1049 "global_data.m"
              MR_Word ll_backend__global_data__CodeAddr_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));
#line 1049 "global_data.m"
              MR_Word ll_backend__global_data__Rval0_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
#line 1049 "global_data.m"
              MR_Word ll_backend__global_data__Rval_99;

#line 1050 "global_data.m"
              {
#line 1050 "global_data.m"
                ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Rval0_98, &ll_backend__global_data__Rval_99);
              }
#line 1051 "global_data.m"
              {
#line 1051 "global_data.m"
                MR_Word base;
#line 1051 "global_data.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1051 "global_data.m"
                *ll_backend__global_data__Instr_6 = base;
#line 1051 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1051 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Rval_99));
#line 1051 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__CodeAddr_15));
#line 1051 "global_data.m"
              }
#line 1049 "global_data.m"
            }
#line 1040 "global_data.m"
            break;
#line 1040 "global_data.m"
          case (MR_Integer) 10:
#line 1065 "global_data.m"
            {
#line 1065 "global_data.m"
              MR_Word ll_backend__global_data__Lval0_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
#line 1065 "global_data.m"
              MR_Word ll_backend__global_data__Lval_102;

#line 1066 "global_data.m"
              {
#line 1066 "global_data.m"
                ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Lval0_28, &ll_backend__global_data__Lval_102);
              }
#line 1067 "global_data.m"
              {
#line 1067 "global_data.m"
                MR_Word base;
#line 1067 "global_data.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1067 "global_data.m"
                *ll_backend__global_data__Instr_6 = base;
#line 1067 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 1067 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Lval_102));
#line 1067 "global_data.m"
              }
#line 1065 "global_data.m"
            }
#line 1040 "global_data.m"
            break;
#line 1040 "global_data.m"
          case (MR_Integer) 11:
#line 1069 "global_data.m"
            {
#line 1069 "global_data.m"
              MR_Word ll_backend__global_data__Lval_103;
#line 1069 "global_data.m"
              MR_Word ll_backend__global_data__Lval0_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));

#line 1070 "global_data.m"
              {
#line 1070 "global_data.m"
                ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Lval0_104, &ll_backend__global_data__Lval_103);
              }
#line 1071 "global_data.m"
              {
#line 1071 "global_data.m"
                MR_Word base;
#line 1071 "global_data.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1071 "global_data.m"
                *ll_backend__global_data__Instr_6 = base;
#line 1071 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 1071 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Lval_103));
#line 1071 "global_data.m"
              }
#line 1069 "global_data.m"
            }
#line 1040 "global_data.m"
            break;
#line 1040 "global_data.m"
          case (MR_Integer) 12:
#line 1074 "global_data.m"
            {
#line 1074 "global_data.m"
              MR_Word ll_backend__global_data__MaybeTag_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));
#line 1074 "global_data.m"
              MR_Word ll_backend__global_data__MaybeOffset_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 3)));
#line 1074 "global_data.m"
              MR_Word ll_backend__global_data__SizeRval0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 4)));
#line 1074 "global_data.m"
              MR_Word ll_backend__global_data__Prof_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 5)));
#line 1074 "global_data.m"
              MR_Word ll_backend__global_data__Atomic_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 6)));
#line 1074 "global_data.m"
              MR_Word ll_backend__global_data__MaybeRegion0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 7)));
#line 1074 "global_data.m"
              MR_Word ll_backend__global_data__MaybeReuse0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 8)));
#line 1074 "global_data.m"
              MR_Word ll_backend__global_data__SizeRval_36;
#line 1074 "global_data.m"
              MR_Word ll_backend__global_data__MaybeRegion_39;
#line 1074 "global_data.m"
              MR_Word ll_backend__global_data__MaybeReuse_46;
#line 1074 "global_data.m"
              MR_Word ll_backend__global_data__Lval_105;
#line 1074 "global_data.m"
              MR_Word ll_backend__global_data__Lval0_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));

#line 1075 "global_data.m"
              {
#line 1075 "global_data.m"
                ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Lval0_106, &ll_backend__global_data__Lval_105);
              }
#line 1076 "global_data.m"
              {
#line 1076 "global_data.m"
                ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__SizeRval0_31, &ll_backend__global_data__SizeRval_36);
              }
#line 1081 "global_data.m"
              if ((ll_backend__global_data__MaybeRegion0_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1083 "global_data.m"
                ll_backend__global_data__MaybeRegion_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1081 "global_data.m"
              else
#line 1078 "global_data.m"
                {
#line 1078 "global_data.m"
                  MR_Word ll_backend__global_data__Region0_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__MaybeRegion0_34, (MR_Integer) 0)));
#line 1078 "global_data.m"
                  MR_Word ll_backend__global_data__Region_38;

#line 1079 "global_data.m"
                  {
#line 1079 "global_data.m"
                    ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Region0_37, &ll_backend__global_data__Region_38);
                  }
#line 1080 "global_data.m"
                  {
#line 1080 "global_data.m"
                    ll_backend__global_data__MaybeRegion_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1080 "global_data.m"
                    MR_hl_field(MR_mktag(1), ll_backend__global_data__MaybeRegion_39, 0) = ((MR_Box) (ll_backend__global_data__Region_38));
#line 1080 "global_data.m"
                  }
#line 1078 "global_data.m"
                }
#line 1097 "global_data.m"
              if ((ll_backend__global_data__MaybeReuse0_35 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1099 "global_data.m"
                ll_backend__global_data__MaybeReuse_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1097 "global_data.m"
              else
#line 1086 "global_data.m"
                {
#line 1086 "global_data.m"
                  MR_Word ll_backend__global_data__Reuse0_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__MaybeReuse0_35, (MR_Integer) 0)));
#line 1086 "global_data.m"
                  MR_Word ll_backend__global_data__MaybeFlag0_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__MaybeReuse0_35, (MR_Integer) 1)));
#line 1086 "global_data.m"
                  MR_Word ll_backend__global_data__Reuse_42;
#line 1086 "global_data.m"
                  MR_Word ll_backend__global_data__MaybeFlag_45;

#line 1087 "global_data.m"
                  {
#line 1087 "global_data.m"
                    ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Reuse0_40, &ll_backend__global_data__Reuse_42);
                  }
#line 1092 "global_data.m"
                  if ((ll_backend__global_data__MaybeFlag0_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1094 "global_data.m"
                    ll_backend__global_data__MaybeFlag_45 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1092 "global_data.m"
                  else
#line 1089 "global_data.m"
                    {
#line 1089 "global_data.m"
                      MR_Word ll_backend__global_data__Flag0_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__MaybeFlag0_41, (MR_Integer) 0)));
#line 1089 "global_data.m"
                      MR_Word ll_backend__global_data__Flag_44;

#line 1090 "global_data.m"
                      {
#line 1090 "global_data.m"
                        ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Flag0_43, &ll_backend__global_data__Flag_44);
                      }
#line 1091 "global_data.m"
                      {
#line 1091 "global_data.m"
                        ll_backend__global_data__MaybeFlag_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1091 "global_data.m"
                        MR_hl_field(MR_mktag(1), ll_backend__global_data__MaybeFlag_45, 0) = ((MR_Box) (ll_backend__global_data__Flag_44));
#line 1091 "global_data.m"
                      }
#line 1089 "global_data.m"
                    }
#line 1096 "global_data.m"
                  {
#line 1096 "global_data.m"
                    ll_backend__global_data__MaybeReuse_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1096 "global_data.m"
                    MR_hl_field(MR_mktag(1), ll_backend__global_data__MaybeReuse_46, 0) = ((MR_Box) (ll_backend__global_data__Reuse_42));
#line 1096 "global_data.m"
                    MR_hl_field(MR_mktag(1), ll_backend__global_data__MaybeReuse_46, 1) = ((MR_Box) (ll_backend__global_data__MaybeFlag_45));
#line 1096 "global_data.m"
                  }
#line 1086 "global_data.m"
                }
#line 1101 "global_data.m"
              {
#line 1101 "global_data.m"
                MR_Word base;
#line 1101 "global_data.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL));
#line 1101 "global_data.m"
                *ll_backend__global_data__Instr_6 = base;
#line 1101 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 1101 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Lval_105));
#line 1101 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__MaybeTag_29));
#line 1101 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__global_data__MaybeOffset_30));
#line 1101 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__global_data__SizeRval_36));
#line 1101 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ll_backend__global_data__Prof_32));
#line 1101 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (ll_backend__global_data__Atomic_33));
#line 1101 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (ll_backend__global_data__MaybeRegion_39));
#line 1101 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (ll_backend__global_data__MaybeReuse_46));
#line 1101 "global_data.m"
              }
#line 1074 "global_data.m"
            }
#line 1040 "global_data.m"
            break;
#line 1040 "global_data.m"
          case (MR_Integer) 13:
#line 1104 "global_data.m"
            {
#line 1104 "global_data.m"
              MR_Word ll_backend__global_data__Lval_107;
#line 1104 "global_data.m"
              MR_Word ll_backend__global_data__Lval0_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));

#line 1105 "global_data.m"
              {
#line 1105 "global_data.m"
                ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Lval0_108, &ll_backend__global_data__Lval_107);
              }
#line 1106 "global_data.m"
              {
#line 1106 "global_data.m"
                MR_Word base;
#line 1106 "global_data.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1106 "global_data.m"
                *ll_backend__global_data__Instr_6 = base;
#line 1106 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 1106 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Lval_107));
#line 1106 "global_data.m"
              }
#line 1104 "global_data.m"
            }
#line 1040 "global_data.m"
            break;
#line 1040 "global_data.m"
          case (MR_Integer) 14:
#line 1108 "global_data.m"
            {
#line 1108 "global_data.m"
              MR_Word ll_backend__global_data__Rval0_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
#line 1108 "global_data.m"
              MR_Word ll_backend__global_data__Rval_110;

#line 1109 "global_data.m"
              {
#line 1109 "global_data.m"
                ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Rval0_109, &ll_backend__global_data__Rval_110);
              }
#line 1110 "global_data.m"
              {
#line 1110 "global_data.m"
                MR_Word base;
#line 1110 "global_data.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1110 "global_data.m"
                *ll_backend__global_data__Instr_6 = base;
#line 1110 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 1110 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Rval_110));
#line 1110 "global_data.m"
              }
#line 1108 "global_data.m"
            }
#line 1040 "global_data.m"
            break;
#line 1040 "global_data.m"
          case (MR_Integer) 15:
#line 1112 "global_data.m"
            {
#line 1112 "global_data.m"
              MR_Word ll_backend__global_data__Rval0_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
#line 1112 "global_data.m"
              MR_Word ll_backend__global_data__Rval_112;

#line 1113 "global_data.m"
              {
#line 1113 "global_data.m"
                ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Rval0_111, &ll_backend__global_data__Rval_112);
              }
#line 1114 "global_data.m"
              {
#line 1114 "global_data.m"
                MR_Word base;
#line 1114 "global_data.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1114 "global_data.m"
                *ll_backend__global_data__Instr_6 = base;
#line 1114 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 1114 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Rval_112));
#line 1114 "global_data.m"
              }
#line 1112 "global_data.m"
            }
#line 1040 "global_data.m"
            break;
#line 1040 "global_data.m"
          case (MR_Integer) 16:
#line 1117 "global_data.m"
            *ll_backend__global_data__Instr_6 = ll_backend__global_data__Instr0_5;
#line 1040 "global_data.m"
            break;
#line 1040 "global_data.m"
          case (MR_Integer) 17:
#line 1120 "global_data.m"
            {
#line 1120 "global_data.m"
              MR_Word ll_backend__global_data__FillOp_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
#line 1120 "global_data.m"
              MR_Word ll_backend__global_data__IdRval0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 3)));
#line 1120 "global_data.m"
              MR_Word ll_backend__global_data__NumLval0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 4)));
#line 1120 "global_data.m"
              MR_Word ll_backend__global_data__AddrLval0_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 5)));
#line 1120 "global_data.m"
              MR_Word ll_backend__global_data__IdRval_53;
#line 1120 "global_data.m"
              MR_Word ll_backend__global_data__NumLval_54;
#line 1120 "global_data.m"
              MR_Word ll_backend__global_data__AddrLval_55;
#line 1120 "global_data.m"
              MR_Word ll_backend__global_data__EmbeddedStackFrame_113 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));

#line 1121 "global_data.m"
              {
#line 1121 "global_data.m"
                ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__IdRval0_50, &ll_backend__global_data__IdRval_53);
              }
#line 1122 "global_data.m"
              {
#line 1122 "global_data.m"
                ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__NumLval0_51, &ll_backend__global_data__NumLval_54);
              }
#line 1123 "global_data.m"
              {
#line 1123 "global_data.m"
                ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__AddrLval0_52, &ll_backend__global_data__AddrLval_55);
              }
#line 1124 "global_data.m"
              {
#line 1124 "global_data.m"
                MR_Word base;
#line 1124 "global_data.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 1124 "global_data.m"
                *ll_backend__global_data__Instr_6 = base;
#line 1124 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
#line 1124 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__FillOp_49));
#line 1124 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__EmbeddedStackFrame_113));
#line 1124 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__global_data__IdRval_53));
#line 1124 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__global_data__NumLval_54));
#line 1124 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ll_backend__global_data__AddrLval_55));
#line 1124 "global_data.m"
              }
#line 1120 "global_data.m"
            }
#line 1040 "global_data.m"
            break;
#line 1040 "global_data.m"
          case (MR_Integer) 18:
#line 1127 "global_data.m"
            {
#line 1127 "global_data.m"
              MR_Word ll_backend__global_data__SetOp_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
#line 1127 "global_data.m"
              MR_Word ll_backend__global_data__ValueRval0_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 3)));
#line 1127 "global_data.m"
              MR_Word ll_backend__global_data__ValueRval_58;
#line 1127 "global_data.m"
              MR_Word ll_backend__global_data__EmbeddedStackFrame_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));

#line 1128 "global_data.m"
              {
#line 1128 "global_data.m"
                ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__ValueRval0_57, &ll_backend__global_data__ValueRval_58);
              }
#line 1129 "global_data.m"
              {
#line 1129 "global_data.m"
                MR_Word base;
#line 1129 "global_data.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1129 "global_data.m"
                *ll_backend__global_data__Instr_6 = base;
#line 1129 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 1129 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__SetOp_56));
#line 1129 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__EmbeddedStackFrame_114));
#line 1129 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__global_data__ValueRval_58));
#line 1129 "global_data.m"
              }
#line 1127 "global_data.m"
            }
#line 1040 "global_data.m"
            break;
#line 1040 "global_data.m"
          case (MR_Integer) 19:
#line 1132 "global_data.m"
            *ll_backend__global_data__Instr_6 = ll_backend__global_data__Instr0_5;
#line 1040 "global_data.m"
            break;
#line 1040 "global_data.m"
          case (MR_Integer) 20:
#line 1134 "global_data.m"
            {
#line 1134 "global_data.m"
              MR_Word ll_backend__global_data__Lval_116;
#line 1134 "global_data.m"
              MR_Word ll_backend__global_data__Lval0_117 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));

#line 1135 "global_data.m"
              {
#line 1135 "global_data.m"
                ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Lval0_117, &ll_backend__global_data__Lval_116);
              }
#line 1136 "global_data.m"
              {
#line 1136 "global_data.m"
                MR_Word base;
#line 1136 "global_data.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1136 "global_data.m"
                *ll_backend__global_data__Instr_6 = base;
#line 1136 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 1136 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Lval_116));
#line 1136 "global_data.m"
              }
#line 1134 "global_data.m"
            }
#line 1040 "global_data.m"
            break;
#line 1040 "global_data.m"
          case (MR_Integer) 21:
#line 1138 "global_data.m"
            {
#line 1138 "global_data.m"
              MR_Word ll_backend__global_data__Reason_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));
#line 1138 "global_data.m"
              MR_Word ll_backend__global_data__Rval0_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
#line 1138 "global_data.m"
              MR_Word ll_backend__global_data__Rval_119;

#line 1139 "global_data.m"
              {
#line 1139 "global_data.m"
                ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Rval0_118, &ll_backend__global_data__Rval_119);
              }
#line 1140 "global_data.m"
              {
#line 1140 "global_data.m"
                MR_Word base;
#line 1140 "global_data.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1140 "global_data.m"
                *ll_backend__global_data__Instr_6 = base;
#line 1140 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 1140 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Rval_119));
#line 1140 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__Reason_60));
#line 1140 "global_data.m"
              }
#line 1138 "global_data.m"
            }
#line 1040 "global_data.m"
            break;
#line 1040 "global_data.m"
          case (MR_Integer) 22:
#line 1142 "global_data.m"
            {
#line 1142 "global_data.m"
              MR_Word ll_backend__global_data__Lval_120;
#line 1142 "global_data.m"
              MR_Word ll_backend__global_data__Lval0_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));

#line 1143 "global_data.m"
              {
#line 1143 "global_data.m"
                ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Lval0_121, &ll_backend__global_data__Lval_120);
              }
#line 1144 "global_data.m"
              {
#line 1144 "global_data.m"
                MR_Word base;
#line 1144 "global_data.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1144 "global_data.m"
                *ll_backend__global_data__Instr_6 = base;
#line 1144 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 1144 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Lval_120));
#line 1144 "global_data.m"
              }
#line 1142 "global_data.m"
            }
#line 1040 "global_data.m"
            break;
#line 1040 "global_data.m"
          case (MR_Integer) 23:
#line 1146 "global_data.m"
            {
#line 1146 "global_data.m"
              MR_Word ll_backend__global_data__Rval0_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
#line 1146 "global_data.m"
              MR_Word ll_backend__global_data__Rval_123;

#line 1147 "global_data.m"
              {
#line 1147 "global_data.m"
                ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Rval0_122, &ll_backend__global_data__Rval_123);
              }
#line 1148 "global_data.m"
              {
#line 1148 "global_data.m"
                MR_Word base;
#line 1148 "global_data.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "global_data.m"
                *ll_backend__global_data__Instr_6 = base;
#line 1148 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 23));
#line 1148 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Rval_123));
#line 1148 "global_data.m"
              }
#line 1146 "global_data.m"
            }
#line 1040 "global_data.m"
            break;
#line 1040 "global_data.m"
          case (MR_Integer) 27:
#line 1055 "global_data.m"
            {
#line 1055 "global_data.m"
              MR_Word ll_backend__global_data__TypeCtorInfo_147_147;
#line 1055 "global_data.m"
              MR_Word ll_backend__global_data__Decls_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
#line 1055 "global_data.m"
              MR_Word ll_backend__global_data__Comps0_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));
#line 1055 "global_data.m"
              MR_Word ll_backend__global_data__MayCallMerc_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 3)));
#line 1055 "global_data.m"
              MR_Word ll_backend__global_data__FixNoLayout_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 4)));
#line 1055 "global_data.m"
              MR_Word ll_backend__global_data__FixLayout_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 5)));
#line 1055 "global_data.m"
              MR_Word ll_backend__global_data__FixOnlyLayout_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 6)));
#line 1055 "global_data.m"
              MR_Word ll_backend__global_data__NoFix_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 7)));
#line 1055 "global_data.m"
              MR_Word ll_backend__global_data__HashDefnLabel_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 8)));
#line 1055 "global_data.m"
              MR_Word ll_backend__global_data__StackSlotRef_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 9)));
#line 1055 "global_data.m"
              MR_Word ll_backend__global_data__MaybeDup_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 10)));
#line 1055 "global_data.m"
              MR_Word ll_backend__global_data__Comps_26;
#line 1055 "global_data.m"
              MR_Word ll_backend__global_data__V_93_93;

#line 1056 "global_data.m"
              {
#line 1056 "global_data.m"
                ll_backend__global_data__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1056 "global_data.m"
                MR_hl_field(MR_mktag(0), ll_backend__global_data__V_93_93, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[9]));
#line 1056 "global_data.m"
                MR_hl_field(MR_mktag(0), ll_backend__global_data__V_93_93, 1) = ((MR_Box) (ll_backend__global_data__remap_instr_3_p_0_2));
#line 1056 "global_data.m"
                MR_hl_field(MR_mktag(0), ll_backend__global_data__V_93_93, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1056 "global_data.m"
                MR_hl_field(MR_mktag(0), ll_backend__global_data__V_93_93, 3) = ((MR_Box) (ll_backend__global_data__StaticCellRemap_7));
#line 1056 "global_data.m"
              }
#line 7982 "ll_backend.global_data.c"
              ll_backend__global_data__TypeCtorInfo_147_147 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0;
#line 1056 "global_data.m"
              {
#line 1056 "global_data.m"
                mercury__list__map_3_p_0(ll_backend__global_data__TypeCtorInfo_147_147, ll_backend__global_data__TypeCtorInfo_147_147, ll_backend__global_data__V_93_93, ll_backend__global_data__Comps0_17, &ll_backend__global_data__Comps_26);
              }
#line 1057 "global_data.m"
              {
#line 1057 "global_data.m"
                MR_Word base;
#line 1057 "global_data.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 1057 "global_data.m"
                *ll_backend__global_data__Instr_6 = base;
#line 1057 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 1057 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Decls_16));
#line 1057 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__Comps_26));
#line 1057 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__global_data__MayCallMerc_18));
#line 1057 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__global_data__FixNoLayout_19));
#line 1057 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ll_backend__global_data__FixLayout_20));
#line 1057 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (ll_backend__global_data__FixOnlyLayout_21));
#line 1057 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (ll_backend__global_data__NoFix_22));
#line 1057 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (ll_backend__global_data__HashDefnLabel_23));
#line 1057 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 9) = ((MR_Box) (ll_backend__global_data__StackSlotRef_24));
#line 1057 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 10) = ((MR_Box) (ll_backend__global_data__MaybeDup_25));
#line 1057 "global_data.m"
              }
#line 1055 "global_data.m"
            }
#line 1040 "global_data.m"
            break;
#line 1040 "global_data.m"
          case (MR_Integer) 28:
#line 1150 "global_data.m"
            {
#line 1150 "global_data.m"
              MR_Integer ll_backend__global_data__NumJoins_61 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));
#line 1150 "global_data.m"
              MR_Integer ll_backend__global_data__ConjId0_62 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 3)));
#line 1150 "global_data.m"
              MR_Integer ll_backend__global_data__ConjId_63;
#line 1150 "global_data.m"
              MR_Word ll_backend__global_data__V_92_92;
#line 1150 "global_data.m"
              MR_Word ll_backend__global_data__Lval_124;
#line 1150 "global_data.m"
              MR_Word ll_backend__global_data__Lval0_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
#line 1152 "global_data.m"
              MR_Word ll_backend__global_data__V_141_141;

#line 1151 "global_data.m"
              {
#line 1151 "global_data.m"
                ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Lval0_125, &ll_backend__global_data__Lval_124);
              }
#line 1152 "global_data.m"
              ll_backend__global_data__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataRemap_4, (MR_Integer) 0)));
#line 1152 "global_data.m"
              ll_backend__global_data__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataRemap_4, (MR_Integer) 1)));
#line 1152 "global_data.m"
              {
#line 1152 "global_data.m"
                ll_backend__global_data__remap_ts_table_index_3_p_0(ll_backend__global_data__V_92_92, ll_backend__global_data__ConjId0_62, &ll_backend__global_data__ConjId_63);
              }
#line 1154 "global_data.m"
              {
#line 1154 "global_data.m"
                MR_Word base;
#line 1154 "global_data.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1154 "global_data.m"
                *ll_backend__global_data__Instr_6 = base;
#line 1154 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 28));
#line 1154 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Lval_124));
#line 1154 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__NumJoins_61));
#line 1154 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__global_data__ConjId_63));
#line 1154 "global_data.m"
              }
#line 1150 "global_data.m"
            }
#line 1040 "global_data.m"
            break;
#line 1040 "global_data.m"
          case (MR_Integer) 30:
#line 1156 "global_data.m"
            {
#line 1156 "global_data.m"
              MR_Word ll_backend__global_data__Label_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));
#line 1156 "global_data.m"
              MR_Word ll_backend__global_data__Lval_126;
#line 1156 "global_data.m"
              MR_Word ll_backend__global_data__Lval0_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));

#line 1157 "global_data.m"
              {
#line 1157 "global_data.m"
                ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Lval0_127, &ll_backend__global_data__Lval_126);
              }
#line 1158 "global_data.m"
              {
#line 1158 "global_data.m"
                MR_Word base;
#line 1158 "global_data.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1158 "global_data.m"
                *ll_backend__global_data__Instr_6 = base;
#line 1158 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 30));
#line 1158 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Lval_126));
#line 1158 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__Label_64));
#line 1158 "global_data.m"
              }
#line 1156 "global_data.m"
            }
#line 1040 "global_data.m"
            break;
#line 1040 "global_data.m"
          case (MR_Integer) 31:
#line 1160 "global_data.m"
            {
#line 1160 "global_data.m"
              MR_Integer ll_backend__global_data__NumSlots_65 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
#line 1160 "global_data.m"
              MR_Word ll_backend__global_data__Lval_128;
#line 1160 "global_data.m"
              MR_Word ll_backend__global_data__Lval0_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));

#line 1161 "global_data.m"
              {
#line 1161 "global_data.m"
                ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Lval0_129, &ll_backend__global_data__Lval_128);
              }
#line 1162 "global_data.m"
              {
#line 1162 "global_data.m"
                MR_Word base;
#line 1162 "global_data.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1162 "global_data.m"
                *ll_backend__global_data__Instr_6 = base;
#line 1162 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 31));
#line 1162 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__NumSlots_65));
#line 1162 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__Lval_128));
#line 1162 "global_data.m"
              }
#line 1160 "global_data.m"
            }
#line 1040 "global_data.m"
            break;
#line 1040 "global_data.m"
          case (MR_Integer) 32:
#line 1164 "global_data.m"
            {
#line 1164 "global_data.m"
              MR_Word ll_backend__global_data__Lval_130;
#line 1164 "global_data.m"
              MR_Word ll_backend__global_data__Rval0_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
#line 1164 "global_data.m"
              MR_Word ll_backend__global_data__Rval_132;
#line 1164 "global_data.m"
              MR_Word ll_backend__global_data__Lval0_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));
#line 1164 "global_data.m"
              MR_Word ll_backend__global_data__Label_134 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 3)));

#line 1165 "global_data.m"
              {
#line 1165 "global_data.m"
                ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Rval0_131, &ll_backend__global_data__Rval_132);
              }
#line 1166 "global_data.m"
              {
#line 1166 "global_data.m"
                ll_backend__global_data__remap_lval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__Lval0_133, &ll_backend__global_data__Lval_130);
              }
#line 1167 "global_data.m"
              {
#line 1167 "global_data.m"
                MR_Word base;
#line 1167 "global_data.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1167 "global_data.m"
                *ll_backend__global_data__Instr_6 = base;
#line 1167 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 32));
#line 1167 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__Rval_132));
#line 1167 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__Lval_130));
#line 1167 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__global_data__Label_134));
#line 1167 "global_data.m"
              }
#line 1164 "global_data.m"
            }
#line 1040 "global_data.m"
            break;
#line 1040 "global_data.m"
          case (MR_Integer) 33:
#line 1169 "global_data.m"
            {
#line 1169 "global_data.m"
              MR_Word ll_backend__global_data__LCRval0_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
#line 1169 "global_data.m"
              MR_Word ll_backend__global_data__LCSRval0_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));
#line 1169 "global_data.m"
              MR_Word ll_backend__global_data__LCRval_68;
#line 1169 "global_data.m"
              MR_Word ll_backend__global_data__LCSRval_69;
#line 1169 "global_data.m"
              MR_Word ll_backend__global_data__Label_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 3)));

#line 1170 "global_data.m"
              {
#line 1170 "global_data.m"
                ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__LCRval0_66, &ll_backend__global_data__LCRval_68);
              }
#line 1171 "global_data.m"
              {
#line 1171 "global_data.m"
                ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__LCSRval0_67, &ll_backend__global_data__LCSRval_69);
              }
#line 1172 "global_data.m"
              {
#line 1172 "global_data.m"
                MR_Word base;
#line 1172 "global_data.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1172 "global_data.m"
                *ll_backend__global_data__Instr_6 = base;
#line 1172 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 33));
#line 1172 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__LCRval_68));
#line 1172 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__LCSRval_69));
#line 1172 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__global_data__Label_135));
#line 1172 "global_data.m"
              }
#line 1169 "global_data.m"
            }
#line 1040 "global_data.m"
            break;
#line 1040 "global_data.m"
          case (MR_Integer) 34:
#line 1174 "global_data.m"
            {
#line 1174 "global_data.m"
              MR_Word ll_backend__global_data__LCRval0_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 1)));
#line 1174 "global_data.m"
              MR_Word ll_backend__global_data__LCSRval0_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__global_data__Instr0_5, (MR_Integer) 2)));
#line 1174 "global_data.m"
              MR_Word ll_backend__global_data__LCRval_138;
#line 1174 "global_data.m"
              MR_Word ll_backend__global_data__LCSRval_139;

#line 1175 "global_data.m"
              {
#line 1175 "global_data.m"
                ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__LCRval0_136, &ll_backend__global_data__LCRval_138);
              }
#line 1176 "global_data.m"
              {
#line 1176 "global_data.m"
                ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__StaticCellRemap_7, ll_backend__global_data__LCSRval0_137, &ll_backend__global_data__LCSRval_139);
              }
#line 1177 "global_data.m"
              {
#line 1177 "global_data.m"
                MR_Word base;
#line 1177 "global_data.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1177 "global_data.m"
                *ll_backend__global_data__Instr_6 = base;
#line 1177 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 34));
#line 1177 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__LCRval_138));
#line 1177 "global_data.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__LCSRval_139));
#line 1177 "global_data.m"
              }
#line 1174 "global_data.m"
            }
#line 1040 "global_data.m"
            break;
#line 1040 "global_data.m"
        }
#line 1040 "global_data.m"
        break;
#line 1040 "global_data.m"
    }
#line 1034 "global_data.m"
  }
#line 1032 "global_data.m"
}

#line 1024 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_instruction_3_p_0(
#line 1024 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 1024 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_Instr_0_9,
#line 1024 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Instr_10)
#line 1024 "global_data.m"
{
#line 1027 "global_data.m"
  {
#line 1027 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 1027 "global_data.m"
    MR_Word ll_backend__global_data__Uinstr0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Instr_0_9, (MR_Integer) 0)));
#line 1027 "global_data.m"
    MR_String ll_backend__global_data__Comment_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Instr_0_9, (MR_Integer) 1)));
#line 1027 "global_data.m"
    MR_Word ll_backend__global_data__Uinstr_8;

#line 1029 "global_data.m"
    {
#line 1029 "global_data.m"
      ll_backend__global_data__remap_instr_3_p_0(ll_backend__global_data__Remap_4, ll_backend__global_data__Uinstr0_6, &ll_backend__global_data__Uinstr_8);
    }
#line 1030 "global_data.m"
    {
#line 1030 "global_data.m"
      MR_Word base;
#line 1030 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1030 "global_data.m"
      *ll_backend__global_data__STATE_VARIABLE_Instr_10 = base;
#line 1030 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__Uinstr_8));
#line 1030 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__Comment_7));
#line 1030 "global_data.m"
    }
#line 1027 "global_data.m"
  }
#line 1024 "global_data.m"
}

#line 1003 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_arg_group_value_3_p_0_1(
#line 1003 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 1003 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 1003 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2)
#line 1003 "global_data.m"
{
#line 1003 "global_data.m"
  {
#line 1003 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 1003 "global_data.m"
    MR_Word ll_backend__global_data__conv0_Rval_6;

#line 1003 "global_data.m"
    {
#line 1003 "global_data.m"
      ll_backend__global_data__remap_rval_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv0_Rval_6);
    }
#line 1003 "global_data.m"
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv0_Rval_6));
#line 1003 "global_data.m"
  }
#line 1003 "global_data.m"
}

#line 997 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_arg_group_value_3_p_0(
#line 997 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 997 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_GroupedArgs_0_10,
#line 997 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_GroupedArgs_11)
#line 997 "global_data.m"
{
#line 1002 "global_data.m"
  {
#line 1002 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;

#line 1002 "global_data.m"
    if (((MR_tag((MR_Word) ll_backend__global_data__STATE_VARIABLE_GroupedArgs_0_10)) == (MR_mktag((MR_Integer) 0))))
#line 1002 "global_data.m"
      {
#line 1002 "global_data.m"
        MR_Word ll_backend__global_data__TypeCtorInfo_20_20;
#line 1002 "global_data.m"
        MR_Word ll_backend__global_data__Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GroupedArgs_0_10, (MR_Integer) 0)));
#line 1002 "global_data.m"
        MR_Integer ll_backend__global_data__Fields_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GroupedArgs_0_10, (MR_Integer) 1)));
#line 1002 "global_data.m"
        MR_Word ll_backend__global_data__Rvals0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GroupedArgs_0_10, (MR_Integer) 2)));
#line 1002 "global_data.m"
        MR_Word ll_backend__global_data__Rvals_9;
#line 1002 "global_data.m"
        MR_Word ll_backend__global_data__V_13_13;

#line 1003 "global_data.m"
        {
#line 1003 "global_data.m"
          ll_backend__global_data__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1003 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__V_13_13, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[8]));
#line 1003 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__V_13_13, 1) = ((MR_Box) (ll_backend__global_data__remap_arg_group_value_3_p_0_1));
#line 1003 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1003 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__V_13_13, 3) = ((MR_Box) (ll_backend__global_data__Remap_4));
#line 1003 "global_data.m"
        }
#line 8423 "ll_backend.global_data.c"
        ll_backend__global_data__TypeCtorInfo_20_20 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
#line 1003 "global_data.m"
        {
#line 1003 "global_data.m"
          mercury__list__map_3_p_0(ll_backend__global_data__TypeCtorInfo_20_20, ll_backend__global_data__TypeCtorInfo_20_20, ll_backend__global_data__V_13_13, ll_backend__global_data__Rvals0_8, &ll_backend__global_data__Rvals_9);
        }
#line 1004 "global_data.m"
        {
#line 1004 "global_data.m"
          MR_Word base;
#line 1004 "global_data.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1004 "global_data.m"
          *ll_backend__global_data__STATE_VARIABLE_GroupedArgs_11 = base;
#line 1004 "global_data.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__Type_6));
#line 1004 "global_data.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__Fields_7));
#line 1004 "global_data.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__Rvals_9));
#line 1004 "global_data.m"
        }
#line 1002 "global_data.m"
      }
#line 1002 "global_data.m"
    else
#line 1006 "global_data.m"
      {
#line 1006 "global_data.m"
        MR_Word ll_backend__global_data__Type_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__STATE_VARIABLE_GroupedArgs_0_10, (MR_Integer) 0)));
#line 1006 "global_data.m"
        MR_Word ll_backend__global_data__Rvals0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__STATE_VARIABLE_GroupedArgs_0_10, (MR_Integer) 1)));
#line 1006 "global_data.m"
        MR_Word ll_backend__global_data__Rvals_17;

#line 1007 "global_data.m"
        {
#line 1007 "global_data.m"
          ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__Remap_4, ll_backend__global_data__Rvals0_16, &ll_backend__global_data__Rvals_17);
        }
#line 1008 "global_data.m"
        {
#line 1008 "global_data.m"
          MR_Word base;
#line 1008 "global_data.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1008 "global_data.m"
          *ll_backend__global_data__STATE_VARIABLE_GroupedArgs_11 = base;
#line 1008 "global_data.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__global_data__Type_15));
#line 1008 "global_data.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__global_data__Rvals_17));
#line 1008 "global_data.m"
        }
#line 1006 "global_data.m"
      }
#line 1002 "global_data.m"
  }
#line 997 "global_data.m"
}

#line 991 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_plain_value_3_p_0(
#line 991 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 991 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 991 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__3_3)
#line 991 "global_data.m"
{
#line 994 "global_data.m"
  {
#line 994 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 994 "global_data.m"
    MR_Word ll_backend__global_data__Rval0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 994 "global_data.m"
    MR_Word ll_backend__global_data__Type_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 994 "global_data.m"
    MR_Word ll_backend__global_data__Rval_7;

#line 995 "global_data.m"
    {
#line 995 "global_data.m"
      ll_backend__global_data__remap_rval_3_p_0(ll_backend__global_data__Remap_4, ll_backend__global_data__Rval0_5, &ll_backend__global_data__Rval_7);
    }
#line 994 "global_data.m"
    {
#line 994 "global_data.m"
      MR_Word base;
#line 994 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 994 "global_data.m"
      *ll_backend__global_data__HeadVar__3_3 = base;
#line 994 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__Rval_7));
#line 994 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__Type_6));
#line 994 "global_data.m"
    }
#line 994 "global_data.m"
  }
#line 991 "global_data.m"
}

#line 983 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_common_cell_value_3_p_0_2(
#line 983 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 983 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 983 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2)
#line 983 "global_data.m"
{
#line 983 "global_data.m"
  {
#line 983 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 983 "global_data.m"
    MR_Word ll_backend__global_data__conv1_HeadVar__3_3;

#line 983 "global_data.m"
    {
#line 983 "global_data.m"
      ll_backend__global_data__remap_plain_value_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv1_HeadVar__3_3);
    }
#line 983 "global_data.m"
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv1_HeadVar__3_3));
#line 983 "global_data.m"
  }
#line 983 "global_data.m"
}

#line 987 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_common_cell_value_3_p_0_1(
#line 987 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 987 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 987 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2)
#line 987 "global_data.m"
{
#line 987 "global_data.m"
  {
#line 987 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 987 "global_data.m"
    MR_Word ll_backend__global_data__conv0_STATE_VARIABLE_GroupedArgs_11;

#line 987 "global_data.m"
    {
#line 987 "global_data.m"
      ll_backend__global_data__remap_arg_group_value_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv0_STATE_VARIABLE_GroupedArgs_11);
    }
#line 987 "global_data.m"
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv0_STATE_VARIABLE_GroupedArgs_11));
#line 987 "global_data.m"
  }
#line 987 "global_data.m"
}

#line 977 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_common_cell_value_3_p_0(
#line 977 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 977 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_CommonCellValue_0_10,
#line 977 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_CommonCellValue_11)
#line 977 "global_data.m"
{
#line 982 "global_data.m"
  {
#line 982 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;

#line 982 "global_data.m"
    if (((MR_tag((MR_Word) ll_backend__global_data__STATE_VARIABLE_CommonCellValue_0_10)) == (MR_mktag((MR_Integer) 1))))
#line 986 "global_data.m"
      {
#line 986 "global_data.m"
        MR_Word ll_backend__global_data__TypeCtorInfo_21_21;
#line 986 "global_data.m"
        MR_Word ll_backend__global_data__ArgGroup0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__STATE_VARIABLE_CommonCellValue_0_10, (MR_Integer) 0)));
#line 986 "global_data.m"
        MR_Word ll_backend__global_data__ArgGroup_9;
#line 986 "global_data.m"
        MR_Word ll_backend__global_data__V_12_12;

#line 987 "global_data.m"
        {
#line 987 "global_data.m"
          ll_backend__global_data__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 987 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__V_12_12, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[6]));
#line 987 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__V_12_12, 1) = ((MR_Box) (ll_backend__global_data__remap_common_cell_value_3_p_0_1));
#line 987 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 987 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__V_12_12, 3) = ((MR_Box) (ll_backend__global_data__Remap_4));
#line 987 "global_data.m"
        }
#line 8634 "ll_backend.global_data.c"
        ll_backend__global_data__TypeCtorInfo_21_21 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_arg_group_0;
#line 987 "global_data.m"
        {
#line 987 "global_data.m"
          mercury__list__map_3_p_0(ll_backend__global_data__TypeCtorInfo_21_21, ll_backend__global_data__TypeCtorInfo_21_21, ll_backend__global_data__V_12_12, ll_backend__global_data__ArgGroup0_8, &ll_backend__global_data__ArgGroup_9);
        }
#line 988 "global_data.m"
        {
#line 988 "global_data.m"
          MR_Word base;
#line 988 "global_data.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 988 "global_data.m"
          *ll_backend__global_data__STATE_VARIABLE_CommonCellValue_11 = base;
#line 988 "global_data.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__global_data__ArgGroup_9));
#line 988 "global_data.m"
        }
#line 986 "global_data.m"
      }
#line 982 "global_data.m"
    else
#line 982 "global_data.m"
      {
#line 982 "global_data.m"
        MR_Word ll_backend__global_data__TypeCtorInfo_18_18;
#line 982 "global_data.m"
        MR_Word ll_backend__global_data__RvalsTypes0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CommonCellValue_0_10, (MR_Integer) 0)));
#line 982 "global_data.m"
        MR_Word ll_backend__global_data__RvalsTypes_7;
#line 982 "global_data.m"
        MR_Word ll_backend__global_data__V_14_14;

#line 983 "global_data.m"
        {
#line 983 "global_data.m"
          ll_backend__global_data__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 983 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__V_14_14, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[7]));
#line 983 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__V_14_14, 1) = ((MR_Box) (ll_backend__global_data__remap_common_cell_value_3_p_0_2));
#line 983 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 983 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__V_14_14, 3) = ((MR_Box) (ll_backend__global_data__Remap_4));
#line 983 "global_data.m"
        }
#line 8682 "ll_backend.global_data.c"
        ll_backend__global_data__TypeCtorInfo_18_18 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0;
#line 983 "global_data.m"
        {
#line 983 "global_data.m"
          mercury__list__map_3_p_0(ll_backend__global_data__TypeCtorInfo_18_18, ll_backend__global_data__TypeCtorInfo_18_18, ll_backend__global_data__V_14_14, ll_backend__global_data__RvalsTypes0_6, &ll_backend__global_data__RvalsTypes_7);
        }
#line 984 "global_data.m"
        {
#line 984 "global_data.m"
          MR_Word base;
#line 984 "global_data.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 984 "global_data.m"
          *ll_backend__global_data__STATE_VARIABLE_CommonCellValue_11 = base;
#line 984 "global_data.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__RvalsTypes_7));
#line 984 "global_data.m"
        }
#line 982 "global_data.m"
      }
#line 982 "global_data.m"
  }
#line 977 "global_data.m"
}

#line 974 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_vector_contents_3_p_0_1(
#line 974 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 974 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 974 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2)
#line 974 "global_data.m"
{
#line 974 "global_data.m"
  {
#line 974 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 974 "global_data.m"
    MR_Word ll_backend__global_data__conv0_STATE_VARIABLE_CommonCellValue_11;

#line 974 "global_data.m"
    {
#line 974 "global_data.m"
      ll_backend__global_data__remap_common_cell_value_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv0_STATE_VARIABLE_CommonCellValue_11);
    }
#line 974 "global_data.m"
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv0_STATE_VARIABLE_CommonCellValue_11));
#line 974 "global_data.m"
  }
#line 974 "global_data.m"
}

#line 969 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_vector_contents_3_p_0(
#line 969 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 969 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_Contents_0_8,
#line 969 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Contents_9)
#line 969 "global_data.m"
{
#line 972 "global_data.m"
  {
#line 972 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 972 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_14_14;
#line 972 "global_data.m"
    MR_Word ll_backend__global_data__Values0_6 = (MR_Word) ll_backend__global_data__STATE_VARIABLE_Contents_0_8;
#line 972 "global_data.m"
    MR_Word ll_backend__global_data__Values_7;
#line 972 "global_data.m"
    MR_Word ll_backend__global_data__V_10_10;

#line 974 "global_data.m"
    {
#line 974 "global_data.m"
      ll_backend__global_data__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 974 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_10_10, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[4]));
#line 974 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_10_10, 1) = ((MR_Box) (ll_backend__global_data__remap_vector_contents_3_p_0_1));
#line 974 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 974 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_10_10, 3) = ((MR_Box) (ll_backend__global_data__Remap_4));
#line 974 "global_data.m"
    }
#line 8776 "ll_backend.global_data.c"
    ll_backend__global_data__TypeCtorInfo_14_14 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0;
#line 974 "global_data.m"
    {
#line 974 "global_data.m"
      mercury__list__map_3_p_0(ll_backend__global_data__TypeCtorInfo_14_14, ll_backend__global_data__TypeCtorInfo_14_14, ll_backend__global_data__V_10_10, ll_backend__global_data__Values0_6, &ll_backend__global_data__Values_7);
    }
#line 975 "global_data.m"
    *ll_backend__global_data__STATE_VARIABLE_Contents_9 = (MR_Word) ll_backend__global_data__Values_7;
#line 972 "global_data.m"
  }
#line 969 "global_data.m"
}

#line 966 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_vector_cell_group_3_p_0_1(
#line 966 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 966 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 966 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2)
#line 966 "global_data.m"
{
#line 966 "global_data.m"
  {
#line 966 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 966 "global_data.m"
    MR_Word ll_backend__global_data__conv0_STATE_VARIABLE_Contents_9;

#line 966 "global_data.m"
    {
#line 966 "global_data.m"
      ll_backend__global_data__remap_vector_contents_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv0_STATE_VARIABLE_Contents_9);
    }
#line 966 "global_data.m"
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv0_STATE_VARIABLE_Contents_9));
#line 966 "global_data.m"
  }
#line 966 "global_data.m"
}

#line 961 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_vector_cell_group_3_p_0(
#line 961 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 961 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_VectorCellGroup_0_9,
#line 961 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_VectorCellGroup_10)
#line 961 "global_data.m"
{
#line 964 "global_data.m"
  {
#line 964 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 964 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_15_15;
#line 964 "global_data.m"
    MR_Word ll_backend__global_data__Counter_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_VectorCellGroup_0_9, (MR_Integer) 0)));
#line 964 "global_data.m"
    MR_Word ll_backend__global_data__Map0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_VectorCellGroup_0_9, (MR_Integer) 1)));
#line 964 "global_data.m"
    MR_Word ll_backend__global_data__Map_8;
#line 964 "global_data.m"
    MR_Word ll_backend__global_data__V_11_11;

#line 966 "global_data.m"
    {
#line 966 "global_data.m"
      ll_backend__global_data__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 966 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_11_11, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[5]));
#line 966 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_11_11, 1) = ((MR_Box) (ll_backend__global_data__remap_vector_cell_group_3_p_0_1));
#line 966 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_11_11, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 966 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_11_11, 3) = ((MR_Box) (ll_backend__global_data__Remap_4));
#line 966 "global_data.m"
    }
#line 8860 "ll_backend.global_data.c"
    ll_backend__global_data__TypeCtorInfo_15_15 = (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_contents_0;
#line 966 "global_data.m"
    {
#line 966 "global_data.m"
      mercury__map__map_values_only_3_p_0(ll_backend__global_data__TypeCtorInfo_15_15, ll_backend__global_data__TypeCtorInfo_15_15, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__global_data__V_11_11, ll_backend__global_data__Map0_7, &ll_backend__global_data__Map_8);
    }
#line 967 "global_data.m"
    {
#line 967 "global_data.m"
      MR_Word base;
#line 967 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 967 "global_data.m"
      *ll_backend__global_data__STATE_VARIABLE_VectorCellGroup_10 = base;
#line 967 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__Counter_6));
#line 967 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__Map_8));
#line 967 "global_data.m"
    }
#line 964 "global_data.m"
  }
#line 961 "global_data.m"
}

#line 958 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_scalar_cell_group_3_p_0_1(
#line 958 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 958 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 958 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2)
#line 958 "global_data.m"
{
#line 958 "global_data.m"
  {
#line 958 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 958 "global_data.m"
    MR_Word ll_backend__global_data__conv0_STATE_VARIABLE_CommonCellValue_11;

#line 958 "global_data.m"
    {
#line 958 "global_data.m"
      ll_backend__global_data__remap_common_cell_value_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv0_STATE_VARIABLE_CommonCellValue_11);
    }
#line 958 "global_data.m"
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv0_STATE_VARIABLE_CommonCellValue_11));
#line 958 "global_data.m"
  }
#line 958 "global_data.m"
}

#line 953 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_scalar_cell_group_3_p_0(
#line 953 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 953 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_ScalarCellGroup_0_8,
#line 953 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_ScalarCellGroup_9)
#line 953 "global_data.m"
{
#line 956 "global_data.m"
  {
#line 956 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 956 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_19_19;
#line 956 "global_data.m"
    MR_Word ll_backend__global_data__Array0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_ScalarCellGroup_0_8, (MR_Integer) 2)));
#line 956 "global_data.m"
    MR_Word ll_backend__global_data__Array_7;
#line 956 "global_data.m"
    MR_Word ll_backend__global_data__V_10_10;
#line 957 "global_data.m"
    MR_Word ll_backend__global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_ScalarCellGroup_0_8, (MR_Integer) 0)));
#line 957 "global_data.m"
    MR_Word ll_backend__global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_ScalarCellGroup_0_8, (MR_Integer) 1)));
#line 959 "global_data.m"
    MR_Word ll_backend__global_data__V_14_14;
#line 959 "global_data.m"
    MR_Word ll_backend__global_data__V_15_15;
#line 959 "global_data.m"
    MR_Word ll_backend__global_data__V_16_16;

#line 958 "global_data.m"
    {
#line 958 "global_data.m"
      ll_backend__global_data__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 958 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_10_10, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[4]));
#line 958 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_10_10, 1) = ((MR_Box) (ll_backend__global_data__remap_scalar_cell_group_3_p_0_1));
#line 958 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 958 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_10_10, 3) = ((MR_Box) (ll_backend__global_data__Remap_4));
#line 958 "global_data.m"
    }
#line 8964 "ll_backend.global_data.c"
    ll_backend__global_data__TypeCtorInfo_19_19 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0;
#line 958 "global_data.m"
    {
#line 958 "global_data.m"
      mercury__list__map_3_p_0(ll_backend__global_data__TypeCtorInfo_19_19, ll_backend__global_data__TypeCtorInfo_19_19, ll_backend__global_data__V_10_10, ll_backend__global_data__Array0_6, &ll_backend__global_data__Array_7);
    }
#line 959 "global_data.m"
    ll_backend__global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_ScalarCellGroup_0_8, (MR_Integer) 0)));
#line 959 "global_data.m"
    ll_backend__global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_ScalarCellGroup_0_8, (MR_Integer) 1)));
#line 959 "global_data.m"
    ll_backend__global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_ScalarCellGroup_0_8, (MR_Integer) 2)));
#line 959 "global_data.m"
    {
#line 959 "global_data.m"
      MR_Word base;
#line 959 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 959 "global_data.m"
      *ll_backend__global_data__STATE_VARIABLE_ScalarCellGroup_9 = base;
#line 959 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__V_14_14));
#line 959 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__V_15_15));
#line 959 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__Array_7));
#line 959 "global_data.m"
    }
#line 956 "global_data.m"
  }
#line 953 "global_data.m"
}

#line 949 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_static_cell_info_3_p_0_2(
#line 949 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 949 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 949 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2)
#line 949 "global_data.m"
{
#line 949 "global_data.m"
  {
#line 949 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 949 "global_data.m"
    MR_Word ll_backend__global_data__conv1_STATE_VARIABLE_VectorCellGroup_10;

#line 949 "global_data.m"
    {
#line 949 "global_data.m"
      ll_backend__global_data__remap_vector_cell_group_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv1_STATE_VARIABLE_VectorCellGroup_10);
    }
#line 949 "global_data.m"
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv1_STATE_VARIABLE_VectorCellGroup_10));
#line 949 "global_data.m"
  }
#line 949 "global_data.m"
}

#line 948 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_static_cell_info_3_p_0_1(
#line 948 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 948 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 948 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2)
#line 948 "global_data.m"
{
#line 948 "global_data.m"
  {
#line 948 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 948 "global_data.m"
    MR_Word ll_backend__global_data__conv0_STATE_VARIABLE_ScalarCellGroup_9;

#line 948 "global_data.m"
    {
#line 948 "global_data.m"
      ll_backend__global_data__remap_scalar_cell_group_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv0_STATE_VARIABLE_ScalarCellGroup_9);
    }
#line 948 "global_data.m"
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv0_STATE_VARIABLE_ScalarCellGroup_9));
#line 948 "global_data.m"
  }
#line 948 "global_data.m"
}

#line 942 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_static_cell_info_3_p_0(
#line 942 "global_data.m"
  MR_Word ll_backend__global_data__Remap_4,
#line 942 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_SCI_0_10,
#line 942 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_SCI_11)
#line 942 "global_data.m"
{
#line 945 "global_data.m"
  {
#line 945 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 945 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_36_36;
#line 945 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_37_37;
#line 945 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_40_40;
#line 945 "global_data.m"
    MR_Word ll_backend__global_data__ScalarMap0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_SCI_0_10, (MR_Integer) 3)));
#line 945 "global_data.m"
    MR_Word ll_backend__global_data__VectorMap0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_SCI_0_10, (MR_Integer) 4)));
#line 945 "global_data.m"
    MR_Word ll_backend__global_data__ScalarMap_8;
#line 945 "global_data.m"
    MR_Word ll_backend__global_data__VectorMap_9;
#line 945 "global_data.m"
    MR_Word ll_backend__global_data__V_12_12;
#line 945 "global_data.m"
    MR_Word ll_backend__global_data__V_13_13;
#line 945 "global_data.m"
    MR_Word ll_backend__global_data__V_24_24;
#line 945 "global_data.m"
    MR_Word ll_backend__global_data__V_25_25;
#line 945 "global_data.m"
    MR_Word ll_backend__global_data__V_26_26;
#line 946 "global_data.m"
    MR_Word ll_backend__global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_SCI_0_10, (MR_Integer) 0)));
#line 946 "global_data.m"
    MR_Word ll_backend__global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_SCI_0_10, (MR_Integer) 1)));
#line 946 "global_data.m"
    MR_Word ll_backend__global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_SCI_0_10, (MR_Integer) 2)));
#line 950 "global_data.m"
    MR_Word ll_backend__global_data__V_27_27;
#line 950 "global_data.m"
    MR_Word ll_backend__global_data__V_28_28;

#line 948 "global_data.m"
    {
#line 948 "global_data.m"
      ll_backend__global_data__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 948 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_12_12, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[2]));
#line 948 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_12_12, 1) = ((MR_Box) (ll_backend__global_data__remap_static_cell_info_3_p_0_1));
#line 948 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 948 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_12_12, 3) = ((MR_Box) (ll_backend__global_data__Remap_4));
#line 948 "global_data.m"
    }
#line 9122 "ll_backend.global_data.c"
    ll_backend__global_data__TypeCtorInfo_36_36 = (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0;
#line 9124 "ll_backend.global_data.c"
    ll_backend__global_data__TypeCtorInfo_37_37 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;
#line 948 "global_data.m"
    {
#line 948 "global_data.m"
      mercury__map__map_values_only_3_p_0(ll_backend__global_data__TypeCtorInfo_36_36, ll_backend__global_data__TypeCtorInfo_36_36, ll_backend__global_data__TypeCtorInfo_37_37, ll_backend__global_data__V_12_12, ll_backend__global_data__ScalarMap0_6, &ll_backend__global_data__ScalarMap_8);
    }
#line 949 "global_data.m"
    {
#line 949 "global_data.m"
      ll_backend__global_data__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 949 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_13_13, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[3]));
#line 949 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_13_13, 1) = ((MR_Box) (ll_backend__global_data__remap_static_cell_info_3_p_0_2));
#line 949 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 949 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_13_13, 3) = ((MR_Box) (ll_backend__global_data__Remap_4));
#line 949 "global_data.m"
    }
#line 9145 "ll_backend.global_data.c"
    ll_backend__global_data__TypeCtorInfo_40_40 = (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0;
#line 949 "global_data.m"
    {
#line 949 "global_data.m"
      mercury__map__map_values_only_3_p_0(ll_backend__global_data__TypeCtorInfo_40_40, ll_backend__global_data__TypeCtorInfo_40_40, ll_backend__global_data__TypeCtorInfo_37_37, ll_backend__global_data__V_13_13, ll_backend__global_data__VectorMap0_7, &ll_backend__global_data__VectorMap_9);
    }
#line 950 "global_data.m"
    ll_backend__global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_SCI_0_10, (MR_Integer) 0)));
#line 950 "global_data.m"
    ll_backend__global_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_SCI_0_10, (MR_Integer) 1)));
#line 950 "global_data.m"
    ll_backend__global_data__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_SCI_0_10, (MR_Integer) 2)));
#line 950 "global_data.m"
    ll_backend__global_data__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_SCI_0_10, (MR_Integer) 3)));
#line 950 "global_data.m"
    ll_backend__global_data__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_SCI_0_10, (MR_Integer) 4)));
#line 951 "global_data.m"
    {
#line 951 "global_data.m"
      MR_Word base;
#line 951 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 951 "global_data.m"
      *ll_backend__global_data__STATE_VARIABLE_SCI_11 = base;
#line 951 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__V_24_24));
#line 951 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__V_25_25));
#line 951 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__V_26_26));
#line 951 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__ScalarMap_8));
#line 951 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__VectorMap_9));
#line 951 "global_data.m"
    }
#line 945 "global_data.m"
  }
#line 942 "global_data.m"
}

#line 928 "global_data.m"
static void MR_CALL 
ll_backend__global_data__merge_vector_cell_group_maps_2_5_p_0(
#line 928 "global_data.m"
  MR_Word ll_backend__global_data__TypeNumRemap_6,
#line 928 "global_data.m"
  MR_Word ll_backend__global_data__OldTypeNum_7,
#line 928 "global_data.m"
  MR_Word ll_backend__global_data__VectorCellGroup_8,
#line 928 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_VectorCellGroupMap_0_11,
#line 928 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_VectorCellGroupMap_12)
#line 928 "global_data.m"
{
#line 933 "global_data.m"
  {
#line 933 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 933 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_14_14 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;
#line 933 "global_data.m"
    MR_Word ll_backend__global_data__NewTypeNum_10;
#line 934 "global_data.m"
    MR_Box ll_backend__global_data__conv0_NewTypeNum_10;

#line 934 "global_data.m"
    {
#line 934 "global_data.m"
      mercury__map__lookup_3_p_0(ll_backend__global_data__TypeCtorInfo_14_14, ll_backend__global_data__TypeCtorInfo_14_14, ll_backend__global_data__TypeNumRemap_6, ((MR_Box) (ll_backend__global_data__OldTypeNum_7)), &ll_backend__global_data__conv0_NewTypeNum_10);
    }
#line 934 "global_data.m"
    ll_backend__global_data__NewTypeNum_10 = ((MR_Word) ll_backend__global_data__conv0_NewTypeNum_10);
#line 935 "global_data.m"
    {
#line 935 "global_data.m"
      mercury__map__det_insert_4_p_0(ll_backend__global_data__TypeCtorInfo_14_14, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0, ((MR_Box) (ll_backend__global_data__NewTypeNum_10)), ((MR_Box) (ll_backend__global_data__VectorCellGroup_8)), ll_backend__global_data__STATE_VARIABLE_VectorCellGroupMap_0_11, ll_backend__global_data__STATE_VARIABLE_VectorCellGroupMap_12);
#line 935 "global_data.m"
      return;
    }
#line 933 "global_data.m"
  }
#line 928 "global_data.m"
}

#line 883 "global_data.m"
static void MR_CALL 
ll_backend__global_data__merge_scalar_cell_groups_2_9_p_0(
#line 883 "global_data.m"
  MR_Word ll_backend__global_data__TypeNum_10,
#line 883 "global_data.m"
  MR_Word ll_backend__global_data__ArrayB_11,
#line 883 "global_data.m"
  MR_Word ll_backend__global_data__ArrayAB_12,
#line 883 "global_data.m"
  MR_Word ll_backend__global_data__Rvals_13,
#line 883 "global_data.m"
  MR_Word ll_backend__global_data__BDataId_14,
#line 883 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_GroupMembers_0_30,
#line 883 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_GroupMembers_31,
#line 883 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_GroupRemap_0_32,
#line 883 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_GroupRemap_33)
#line 883 "global_data.m"
{
#line 894 "global_data.m"
  {
#line 894 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 894 "global_data.m"
    MR_Word ll_backend__global_data__DataId_17;
#line 891 "global_data.m"
    MR_Box ll_backend__global_data__conv0_DataId_17;

#line 891 "global_data.m"
    {
#line 891 "global_data.m"
      ll_backend__global_data__succeeded = mercury__bimap__search_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0, ll_backend__global_data__STATE_VARIABLE_GroupMembers_0_30, ((MR_Box) (ll_backend__global_data__Rvals_13)), &ll_backend__global_data__conv0_DataId_17);
    }
#line 891 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 891 "global_data.m"
      {
#line 891 "global_data.m"
        ll_backend__global_data__DataId_17 = ((MR_Word) ll_backend__global_data__conv0_DataId_17);
#line 891 "global_data.m"
        ll_backend__global_data__succeeded = MR_TRUE;
#line 891 "global_data.m"
      }
#line 894 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 893 "global_data.m"
      {
#line 893 "global_data.m"
        MR_Word ll_backend__global_data__TypeCtorInfo_44_44 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0;

#line 893 "global_data.m"
        {
#line 893 "global_data.m"
          mercury__map__det_insert_4_p_0(ll_backend__global_data__TypeCtorInfo_44_44, ll_backend__global_data__TypeCtorInfo_44_44, ((MR_Box) (ll_backend__global_data__BDataId_14)), ((MR_Box) (ll_backend__global_data__DataId_17)), ll_backend__global_data__STATE_VARIABLE_GroupRemap_0_32, ll_backend__global_data__STATE_VARIABLE_GroupRemap_33);
        }
#line 893 "global_data.m"
        *ll_backend__global_data__STATE_VARIABLE_GroupMembers_31 = ll_backend__global_data__STATE_VARIABLE_GroupMembers_0_30;
#line 893 "global_data.m"
      }
#line 894 "global_data.m"
    else
#line 907 "global_data.m"
#line 907 "global_data.m"
      switch (MR_tag((MR_Word) ll_backend__global_data__BDataId_14)) {
#line 907 "global_data.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 907 "global_data.m"
        case (MR_Integer) 0:
#line 907 "global_data.m"
        case (MR_Integer) 1:
#line 913 "global_data.m"
          {
#line 914 "global_data.m"
            {
#line 914 "global_data.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.global_data", (MR_String) "predicate \140ll_backend.global_data.merge_scalar_cell_groups_2\'/9", (MR_String) "unexpected BDataId");
#line 914 "global_data.m"
              return;
            }
#line 913 "global_data.m"
          }
#line 907 "global_data.m"
          break;
#line 907 "global_data.m"
        case (MR_Integer) 2:
#line 897 "global_data.m"
          {
#line 897 "global_data.m"
            MR_Word ll_backend__global_data__TypeCtorInfo_45_45 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0;
#line 897 "global_data.m"
            MR_Word ll_backend__global_data__TypeCtorInfo_47_47;
#line 897 "global_data.m"
            MR_Integer ll_backend__global_data__BCellNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__global_data__BDataId_14, (MR_Integer) 1)));
#line 897 "global_data.m"
            MR_Word ll_backend__global_data__CommonCellValue_20;
#line 897 "global_data.m"
            MR_Integer ll_backend__global_data__CellNum_21;
#line 897 "global_data.m"
            MR_Word ll_backend__global_data__DataId_40;
#line 897 "global_data.m"
            MR_Word ll_backend__global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__global_data__BDataId_14, (MR_Integer) 0)));
#line 900 "global_data.m"
            MR_Box ll_backend__global_data__conv1_CommonCellValue_20;

#line 900 "global_data.m"
            {
#line 900 "global_data.m"
              ll_backend__global_data__conv1_CommonCellValue_20 = mercury__list__det_index0_2_f_0(ll_backend__global_data__TypeCtorInfo_45_45, ll_backend__global_data__ArrayB_11, ll_backend__global_data__BCellNum_19);
            }
#line 900 "global_data.m"
            ll_backend__global_data__CommonCellValue_20 = ((MR_Word) ll_backend__global_data__conv1_CommonCellValue_20);
#line 901 "global_data.m"
            {
#line 901 "global_data.m"
              ll_backend__global_data__CellNum_21 = mercury__list__det_index0_of_first_occurrence_2_f_0(ll_backend__global_data__TypeCtorInfo_45_45, ll_backend__global_data__ArrayAB_12, ((MR_Box) (ll_backend__global_data__CommonCellValue_20)));
            }
#line 904 "global_data.m"
            {
#line 904 "global_data.m"
              ll_backend__global_data__DataId_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "global_data.m"
              MR_hl_field(MR_mktag(2), ll_backend__global_data__DataId_40, 0) = ((MR_Box) (ll_backend__global_data__TypeNum_10));
#line 904 "global_data.m"
              MR_hl_field(MR_mktag(2), ll_backend__global_data__DataId_40, 1) = ((MR_Box) (ll_backend__global_data__CellNum_21));
#line 904 "global_data.m"
            }
#line 9362 "ll_backend.global_data.c"
            ll_backend__global_data__TypeCtorInfo_47_47 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0;
#line 905 "global_data.m"
            {
#line 905 "global_data.m"
              mercury__bimap__det_insert_4_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[0], ll_backend__global_data__TypeCtorInfo_47_47, ((MR_Box) (ll_backend__global_data__Rvals_13)), ((MR_Box) (ll_backend__global_data__DataId_40)), ll_backend__global_data__STATE_VARIABLE_GroupMembers_0_30, ll_backend__global_data__STATE_VARIABLE_GroupMembers_31);
            }
#line 906 "global_data.m"
            {
#line 906 "global_data.m"
              mercury__map__det_insert_4_p_0(ll_backend__global_data__TypeCtorInfo_47_47, ll_backend__global_data__TypeCtorInfo_47_47, ((MR_Box) (ll_backend__global_data__BDataId_14)), ((MR_Box) (ll_backend__global_data__DataId_40)), ll_backend__global_data__STATE_VARIABLE_GroupRemap_0_32, ll_backend__global_data__STATE_VARIABLE_GroupRemap_33);
#line 906 "global_data.m"
              return;
            }
#line 897 "global_data.m"
          }
#line 907 "global_data.m"
          break;
#line 907 "global_data.m"
        case (MR_Integer) 3:
#line 913 "global_data.m"
          {
#line 914 "global_data.m"
            {
#line 914 "global_data.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.global_data", (MR_String) "predicate \140ll_backend.global_data.merge_scalar_cell_groups_2\'/9", (MR_String) "unexpected BDataId");
#line 914 "global_data.m"
              return;
            }
#line 913 "global_data.m"
          }
#line 907 "global_data.m"
          break;
#line 907 "global_data.m"
      }
#line 894 "global_data.m"
  }
#line 883 "global_data.m"
}

#line 879 "global_data.m"
static void MR_CALL 
ll_backend__global_data__merge_scalar_cell_group_maps_2_7_p_0_1(
#line 879 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 879 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 879 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 879 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_3,
#line 879 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_4,
#line 879 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_5,
#line 879 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_6)
#line 879 "global_data.m"
{
#line 879 "global_data.m"
  {
#line 879 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 879 "global_data.m"
    MR_Word ll_backend__global_data__conv3_STATE_VARIABLE_GroupMembers_31;
#line 879 "global_data.m"
    MR_Word ll_backend__global_data__conv2_STATE_VARIABLE_GroupRemap_33;

#line 879 "global_data.m"
    {
#line 879 "global_data.m"
      ll_backend__global_data__merge_scalar_cell_groups_2_9_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 5))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3), &ll_backend__global_data__conv3_STATE_VARIABLE_GroupMembers_31, ((MR_Word) ll_backend__global_data__wrapper_arg_5), &ll_backend__global_data__conv2_STATE_VARIABLE_GroupRemap_33);
    }
#line 879 "global_data.m"
    *ll_backend__global_data__wrapper_arg_4 = ((MR_Box) (ll_backend__global_data__conv3_STATE_VARIABLE_GroupMembers_31));
#line 879 "global_data.m"
    *ll_backend__global_data__wrapper_arg_6 = ((MR_Box) (ll_backend__global_data__conv2_STATE_VARIABLE_GroupRemap_33));
#line 879 "global_data.m"
  }
#line 879 "global_data.m"
}

#line 842 "global_data.m"
static void MR_CALL 
ll_backend__global_data__merge_scalar_cell_group_maps_2_7_p_0(
#line 842 "global_data.m"
  MR_Word ll_backend__global_data__TypeNumRemap_8,
#line 842 "global_data.m"
  MR_Word ll_backend__global_data__BTypeNum_9,
#line 842 "global_data.m"
  MR_Word ll_backend__global_data__BScalarCellGroup_10,
#line 842 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_ScalarCellGroupMap_0_18,
#line 842 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_ScalarCellGroupMap_19,
#line 842 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_Remap_0_20,
#line 842 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Remap_21)
#line 842 "global_data.m"
{
#line 850 "global_data.m"
  {
#line 850 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 850 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_28_28 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;
#line 850 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_27_55;
#line 850 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_34_62;
#line 850 "global_data.m"
    MR_Word ll_backend__global_data__TypeNum_13;
#line 850 "global_data.m"
    MR_Word ll_backend__global_data__ScalarCellGroup0_15;
#line 850 "global_data.m"
    MR_Word ll_backend__global_data__ScalarCellGroup_16;
#line 850 "global_data.m"
    MR_Word ll_backend__global_data__ScalarCellGroupRemap_17;
#line 850 "global_data.m"
    MR_Word ll_backend__global_data__GroupMembersA_40;
#line 850 "global_data.m"
    MR_Word ll_backend__global_data__RevArrayA_41;
#line 850 "global_data.m"
    MR_Word ll_backend__global_data__GroupMembersB_43;
#line 850 "global_data.m"
    MR_Word ll_backend__global_data__RevArrayB_44;
#line 850 "global_data.m"
    MR_Word ll_backend__global_data__CounterAB_45;
#line 850 "global_data.m"
    MR_Word ll_backend__global_data__GroupMembersAB_46;
#line 850 "global_data.m"
    MR_Word ll_backend__global_data__RevArrayAB_47;
#line 850 "global_data.m"
    MR_Word ll_backend__global_data__ArrayA_48;
#line 850 "global_data.m"
    MR_Word ll_backend__global_data__ArrayB_49;
#line 850 "global_data.m"
    MR_Word ll_backend__global_data__ArrayAB_50;
#line 850 "global_data.m"
    MR_Integer ll_backend__global_data__V_51_51;
#line 850 "global_data.m"
    MR_Word ll_backend__global_data__V_52_52;
#line 850 "global_data.m"
    MR_Word ll_backend__global_data__V_53_53;
#line 850 "global_data.m"
    MR_Word ll_backend__global_data__V_54_54;
#line 851 "global_data.m"
    MR_Box ll_backend__global_data__conv0_TypeNum_13;
#line 854 "global_data.m"
    MR_Word ll_backend__global_data__ScalarCellGroupPrime_14;
#line 852 "global_data.m"
    MR_Box ll_backend__global_data__conv1_ScalarCellGroupPrime_14;
#line 868 "global_data.m"
    MR_Word ll_backend__global_data___CounterA_39;
#line 869 "global_data.m"
    MR_Word ll_backend__global_data___CounterB_42;
#line 879 "global_data.m"
    MR_Box ll_backend__global_data__conv5_GroupMembersAB_46;
#line 879 "global_data.m"
    MR_Box ll_backend__global_data__conv4_ScalarCellGroupRemap_17;

#line 851 "global_data.m"
    {
#line 851 "global_data.m"
      mercury__map__lookup_3_p_0(ll_backend__global_data__TypeCtorInfo_28_28, ll_backend__global_data__TypeCtorInfo_28_28, ll_backend__global_data__TypeNumRemap_8, ((MR_Box) (ll_backend__global_data__BTypeNum_9)), &ll_backend__global_data__conv0_TypeNum_13);
    }
#line 851 "global_data.m"
    ll_backend__global_data__TypeNum_13 = ((MR_Word) ll_backend__global_data__conv0_TypeNum_13);
#line 852 "global_data.m"
    {
#line 852 "global_data.m"
      ll_backend__global_data__succeeded = mercury__map__search_3_p_0(ll_backend__global_data__TypeCtorInfo_28_28, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0, ll_backend__global_data__STATE_VARIABLE_ScalarCellGroupMap_0_18, ((MR_Box) (ll_backend__global_data__TypeNum_13)), &ll_backend__global_data__conv1_ScalarCellGroupPrime_14);
    }
#line 852 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 852 "global_data.m"
      {
#line 852 "global_data.m"
        ll_backend__global_data__ScalarCellGroupPrime_14 = ((MR_Word) ll_backend__global_data__conv1_ScalarCellGroupPrime_14);
#line 852 "global_data.m"
        ll_backend__global_data__succeeded = MR_TRUE;
#line 852 "global_data.m"
      }
#line 854 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 853 "global_data.m"
      ll_backend__global_data__ScalarCellGroup0_15 = ll_backend__global_data__ScalarCellGroupPrime_14;
#line 854 "global_data.m"
    else
#line 856 "global_data.m"
      {
#line 856 "global_data.m"
        MR_Word ll_backend__global_data__V_22_22;
#line 856 "global_data.m"
        MR_Word ll_backend__global_data__V_24_24;

#line 856 "global_data.m"
        {
#line 856 "global_data.m"
          ll_backend__global_data__V_22_22 = mercury__counter__init_1_f_0((MR_Integer) 0);
        }
#line 856 "global_data.m"
        {
#line 856 "global_data.m"
          ll_backend__global_data__V_24_24 = mercury__bimap__init_0_f_0((MR_Word) &ll_backend__global_data_scalar_common_2[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0);
        }
#line 856 "global_data.m"
        {
#line 856 "global_data.m"
          ll_backend__global_data__ScalarCellGroup0_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 856 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__ScalarCellGroup0_15, 0) = ((MR_Box) (ll_backend__global_data__V_22_22));
#line 856 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__ScalarCellGroup0_15, 1) = ((MR_Box) (ll_backend__global_data__V_24_24));
#line 856 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__ScalarCellGroup0_15, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 856 "global_data.m"
        }
#line 856 "global_data.m"
      }
#line 868 "global_data.m"
    ll_backend__global_data___CounterA_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__ScalarCellGroup0_15, (MR_Integer) 0)));
#line 868 "global_data.m"
    ll_backend__global_data__GroupMembersA_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__ScalarCellGroup0_15, (MR_Integer) 1)));
#line 868 "global_data.m"
    ll_backend__global_data__RevArrayA_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__ScalarCellGroup0_15, (MR_Integer) 2)));
#line 869 "global_data.m"
    ll_backend__global_data___CounterB_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__BScalarCellGroup_10, (MR_Integer) 0)));
#line 869 "global_data.m"
    ll_backend__global_data__GroupMembersB_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__BScalarCellGroup_10, (MR_Integer) 1)));
#line 869 "global_data.m"
    ll_backend__global_data__RevArrayB_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__BScalarCellGroup_10, (MR_Integer) 2)));
#line 9595 "ll_backend.global_data.c"
    ll_backend__global_data__TypeCtorInfo_27_55 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0;
#line 874 "global_data.m"
    {
#line 874 "global_data.m"
      ll_backend__global_data__ArrayA_48 = mercury__list__reverse_1_f_0(ll_backend__global_data__TypeCtorInfo_27_55, ll_backend__global_data__RevArrayA_41);
    }
#line 875 "global_data.m"
    {
#line 875 "global_data.m"
      ll_backend__global_data__ArrayB_49 = mercury__list__reverse_1_f_0(ll_backend__global_data__TypeCtorInfo_27_55, ll_backend__global_data__RevArrayB_44);
    }
#line 876 "global_data.m"
    {
#line 876 "global_data.m"
      ll_backend__global_data__V_52_52 = mercury__list__delete_elems_2_f_0(ll_backend__global_data__TypeCtorInfo_27_55, ll_backend__global_data__ArrayB_49, ll_backend__global_data__ArrayA_48);
    }
#line 876 "global_data.m"
    {
#line 876 "global_data.m"
      ll_backend__global_data__ArrayAB_50 = mercury__list__f_43_43_2_f_0(ll_backend__global_data__TypeCtorInfo_27_55, ll_backend__global_data__ArrayA_48, ll_backend__global_data__V_52_52);
    }
#line 877 "global_data.m"
    {
#line 877 "global_data.m"
      ll_backend__global_data__RevArrayAB_47 = mercury__list__reverse_1_f_0(ll_backend__global_data__TypeCtorInfo_27_55, ll_backend__global_data__ArrayAB_50);
    }
#line 872 "global_data.m"
    {
#line 872 "global_data.m"
      ll_backend__global_data__V_51_51 = mercury__list__length_1_f_0(ll_backend__global_data__TypeCtorInfo_27_55, ll_backend__global_data__RevArrayAB_47);
    }
#line 872 "global_data.m"
    {
#line 872 "global_data.m"
      ll_backend__global_data__CounterAB_45 = mercury__counter__init_1_f_0(ll_backend__global_data__V_51_51);
    }
#line 879 "global_data.m"
    {
#line 879 "global_data.m"
      ll_backend__global_data__V_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 879 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_53_53, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_12[0]));
#line 879 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_53_53, 1) = ((MR_Box) (ll_backend__global_data__merge_scalar_cell_group_maps_2_7_p_0_1));
#line 879 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_53_53, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 879 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_53_53, 3) = ((MR_Box) (ll_backend__global_data__TypeNum_13));
#line 879 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_53_53, 4) = ((MR_Box) (ll_backend__global_data__ArrayB_49));
#line 879 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_53_53, 5) = ((MR_Box) (ll_backend__global_data__ArrayAB_50));
#line 879 "global_data.m"
    }
#line 9650 "ll_backend.global_data.c"
    ll_backend__global_data__TypeCtorInfo_34_62 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0;
#line 881 "global_data.m"
    {
#line 881 "global_data.m"
      ll_backend__global_data__V_54_54 = mercury__map__init_0_f_0(ll_backend__global_data__TypeCtorInfo_34_62, ll_backend__global_data__TypeCtorInfo_34_62);
    }
#line 879 "global_data.m"
    {
#line 879 "global_data.m"
      mercury__bimap__foldl2_6_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[0], ll_backend__global_data__TypeCtorInfo_34_62, (MR_Word) &ll_backend__global_data_scalar_common_1[6], (MR_Word) &ll_backend__global_data_scalar_common_1[3], ll_backend__global_data__V_53_53, ll_backend__global_data__GroupMembersB_43, ((MR_Box) (ll_backend__global_data__GroupMembersA_40)), &ll_backend__global_data__conv5_GroupMembersAB_46, ((MR_Box) (ll_backend__global_data__V_54_54)), &ll_backend__global_data__conv4_ScalarCellGroupRemap_17);
    }
#line 879 "global_data.m"
    ll_backend__global_data__GroupMembersAB_46 = ((MR_Word) ll_backend__global_data__conv5_GroupMembersAB_46);
#line 879 "global_data.m"
    ll_backend__global_data__ScalarCellGroupRemap_17 = ((MR_Word) ll_backend__global_data__conv4_ScalarCellGroupRemap_17);
#line 870 "global_data.m"
    {
#line 870 "global_data.m"
      ll_backend__global_data__ScalarCellGroup_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 870 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__ScalarCellGroup_16, 0) = ((MR_Box) (ll_backend__global_data__CounterAB_45));
#line 870 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__ScalarCellGroup_16, 1) = ((MR_Box) (ll_backend__global_data__GroupMembersAB_46));
#line 870 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__ScalarCellGroup_16, 2) = ((MR_Box) (ll_backend__global_data__RevArrayAB_47));
#line 870 "global_data.m"
    }
#line 860 "global_data.m"
    {
#line 860 "global_data.m"
      mercury__map__set_4_p_0(ll_backend__global_data__TypeCtorInfo_28_28, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0, ((MR_Box) (ll_backend__global_data__TypeNum_13)), ((MR_Box) (ll_backend__global_data__ScalarCellGroup_16)), ll_backend__global_data__STATE_VARIABLE_ScalarCellGroupMap_0_18, ll_backend__global_data__STATE_VARIABLE_ScalarCellGroupMap_19);
    }
#line 861 "global_data.m"
    {
#line 861 "global_data.m"
      mercury__map__det_insert_4_p_0(ll_backend__global_data__TypeCtorInfo_28_28, (MR_Word) &ll_backend__global_data_scalar_common_1[3], ((MR_Box) (ll_backend__global_data__BTypeNum_9)), ((MR_Box) (ll_backend__global_data__ScalarCellGroupRemap_17)), ll_backend__global_data__STATE_VARIABLE_Remap_0_20, ll_backend__global_data__STATE_VARIABLE_Remap_21);
#line 861 "global_data.m"
      return;
    }
#line 850 "global_data.m"
  }
#line 842 "global_data.m"
}

#line 812 "global_data.m"
static void MR_CALL 
ll_backend__global_data__merge_cell_type_num_maps_8_p_0(
#line 812 "global_data.m"
  MR_Word ll_backend__global_data__CellType_9,
#line 812 "global_data.m"
  MR_Word ll_backend__global_data__BTypeNum_10,
#line 812 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_TypeCounter_0_17,
#line 812 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_TypeCounter_18,
#line 812 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_CellTypeNumMap_0_19,
#line 812 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_CellTypeNumMap_20,
#line 812 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_TypeNumRemap_0_21,
#line 812 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_TypeNumRemap_22)
#line 812 "global_data.m"
{
#line 821 "global_data.m"
  {
#line 821 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 821 "global_data.m"
    MR_Word ll_backend__global_data__ATypeNum_14;
#line 818 "global_data.m"
    MR_Box ll_backend__global_data__conv0_ATypeNum_14;

#line 818 "global_data.m"
    {
#line 818 "global_data.m"
      ll_backend__global_data__succeeded = mercury__bimap__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, ll_backend__global_data__STATE_VARIABLE_CellTypeNumMap_0_19, ((MR_Box) (ll_backend__global_data__CellType_9)), &ll_backend__global_data__conv0_ATypeNum_14);
    }
#line 818 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 818 "global_data.m"
      {
#line 818 "global_data.m"
        ll_backend__global_data__ATypeNum_14 = ((MR_Word) ll_backend__global_data__conv0_ATypeNum_14);
#line 818 "global_data.m"
        ll_backend__global_data__succeeded = MR_TRUE;
#line 818 "global_data.m"
      }
#line 821 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 820 "global_data.m"
      {
#line 820 "global_data.m"
        MR_Word ll_backend__global_data__TypeCtorInfo_29_29 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;

#line 820 "global_data.m"
        {
#line 820 "global_data.m"
          mercury__map__det_insert_4_p_0(ll_backend__global_data__TypeCtorInfo_29_29, ll_backend__global_data__TypeCtorInfo_29_29, ((MR_Box) (ll_backend__global_data__BTypeNum_10)), ((MR_Box) (ll_backend__global_data__ATypeNum_14)), ll_backend__global_data__STATE_VARIABLE_TypeNumRemap_0_21, ll_backend__global_data__STATE_VARIABLE_TypeNumRemap_22);
        }
#line 820 "global_data.m"
        *ll_backend__global_data__STATE_VARIABLE_CellTypeNumMap_20 = ll_backend__global_data__STATE_VARIABLE_CellTypeNumMap_0_19;
#line 820 "global_data.m"
        *ll_backend__global_data__STATE_VARIABLE_TypeCounter_18 = ll_backend__global_data__STATE_VARIABLE_TypeCounter_0_17;
#line 820 "global_data.m"
      }
#line 821 "global_data.m"
    else
#line 823 "global_data.m"
      {
#line 823 "global_data.m"
        MR_Word ll_backend__global_data__TypeCtorInfo_30_30;
#line 823 "global_data.m"
        MR_Integer ll_backend__global_data__N_15;
#line 823 "global_data.m"
        MR_Word ll_backend__global_data__NewTypeNum_16;

#line 823 "global_data.m"
        {
#line 823 "global_data.m"
          mercury__counter__allocate_3_p_0(&ll_backend__global_data__N_15, ll_backend__global_data__STATE_VARIABLE_TypeCounter_0_17, ll_backend__global_data__STATE_VARIABLE_TypeCounter_18);
        }
#line 824 "global_data.m"
        ll_backend__global_data__NewTypeNum_16 = (MR_Word) ll_backend__global_data__N_15;
#line 9776 "ll_backend.global_data.c"
        ll_backend__global_data__TypeCtorInfo_30_30 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;
#line 825 "global_data.m"
        {
#line 825 "global_data.m"
          mercury__map__det_insert_4_p_0(ll_backend__global_data__TypeCtorInfo_30_30, ll_backend__global_data__TypeCtorInfo_30_30, ((MR_Box) (ll_backend__global_data__BTypeNum_10)), ((MR_Box) (ll_backend__global_data__NewTypeNum_16)), ll_backend__global_data__STATE_VARIABLE_TypeNumRemap_0_21, ll_backend__global_data__STATE_VARIABLE_TypeNumRemap_22);
        }
#line 826 "global_data.m"
        {
#line 826 "global_data.m"
          mercury__bimap__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0, ll_backend__global_data__TypeCtorInfo_30_30, ((MR_Box) (ll_backend__global_data__CellType_9)), ((MR_Box) (ll_backend__global_data__NewTypeNum_16)), ll_backend__global_data__STATE_VARIABLE_CellTypeNumMap_0_19, ll_backend__global_data__STATE_VARIABLE_CellTypeNumMap_20);
#line 826 "global_data.m"
          return;
        }
#line 823 "global_data.m"
      }
#line 821 "global_data.m"
  }
#line 812 "global_data.m"
}

#line 924 "global_data.m"
static void MR_CALL 
ll_backend__global_data__merge_static_cell_infos_4_p_0_4(
#line 924 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 924 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 924 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 924 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_3,
#line 924 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_4)
#line 924 "global_data.m"
{
#line 924 "global_data.m"
  {
#line 924 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 924 "global_data.m"
    MR_Word ll_backend__global_data__conv10_STATE_VARIABLE_VectorCellGroupMap_12;

#line 924 "global_data.m"
    {
#line 924 "global_data.m"
      ll_backend__global_data__merge_vector_cell_group_maps_2_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3), &ll_backend__global_data__conv10_STATE_VARIABLE_VectorCellGroupMap_12);
    }
#line 924 "global_data.m"
    *ll_backend__global_data__wrapper_arg_4 = ((MR_Box) (ll_backend__global_data__conv10_STATE_VARIABLE_VectorCellGroupMap_12));
#line 924 "global_data.m"
  }
#line 924 "global_data.m"
}

#line 837 "global_data.m"
static void MR_CALL 
ll_backend__global_data__merge_static_cell_infos_4_p_0_3(
#line 837 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 837 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 837 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 837 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_3,
#line 837 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_4,
#line 837 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_5,
#line 837 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_6)
#line 837 "global_data.m"
{
#line 837 "global_data.m"
  {
#line 837 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 837 "global_data.m"
    MR_Word ll_backend__global_data__conv7_STATE_VARIABLE_ScalarCellGroupMap_19;
#line 837 "global_data.m"
    MR_Word ll_backend__global_data__conv6_STATE_VARIABLE_Remap_21;

#line 837 "global_data.m"
    {
#line 837 "global_data.m"
      ll_backend__global_data__merge_scalar_cell_group_maps_2_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3), &ll_backend__global_data__conv7_STATE_VARIABLE_ScalarCellGroupMap_19, ((MR_Word) ll_backend__global_data__wrapper_arg_5), &ll_backend__global_data__conv6_STATE_VARIABLE_Remap_21);
    }
#line 837 "global_data.m"
    *ll_backend__global_data__wrapper_arg_4 = ((MR_Box) (ll_backend__global_data__conv7_STATE_VARIABLE_ScalarCellGroupMap_19));
#line 837 "global_data.m"
    *ll_backend__global_data__wrapper_arg_6 = ((MR_Box) (ll_backend__global_data__conv6_STATE_VARIABLE_Remap_21));
#line 837 "global_data.m"
  }
#line 837 "global_data.m"
}

#line 793 "global_data.m"
static void MR_CALL 
ll_backend__global_data__merge_static_cell_infos_4_p_0_2(
#line 793 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 793 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 793 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 793 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_3,
#line 793 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_4,
#line 793 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_5,
#line 793 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_6,
#line 793 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_7,
#line 793 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_8)
#line 793 "global_data.m"
{
#line 793 "global_data.m"
  {
#line 793 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 793 "global_data.m"
    MR_Word ll_backend__global_data__conv2_STATE_VARIABLE_TypeCounter_18;
#line 793 "global_data.m"
    MR_Word ll_backend__global_data__conv1_STATE_VARIABLE_CellTypeNumMap_20;
#line 793 "global_data.m"
    MR_Word ll_backend__global_data__conv0_STATE_VARIABLE_TypeNumRemap_22;

#line 793 "global_data.m"
    {
#line 793 "global_data.m"
      ll_backend__global_data__merge_cell_type_num_maps_8_p_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3), &ll_backend__global_data__conv2_STATE_VARIABLE_TypeCounter_18, ((MR_Word) ll_backend__global_data__wrapper_arg_5), &ll_backend__global_data__conv1_STATE_VARIABLE_CellTypeNumMap_20, ((MR_Word) ll_backend__global_data__wrapper_arg_7), &ll_backend__global_data__conv0_STATE_VARIABLE_TypeNumRemap_22);
    }
#line 793 "global_data.m"
    *ll_backend__global_data__wrapper_arg_4 = ((MR_Box) (ll_backend__global_data__conv2_STATE_VARIABLE_TypeCounter_18));
#line 793 "global_data.m"
    *ll_backend__global_data__wrapper_arg_6 = ((MR_Box) (ll_backend__global_data__conv1_STATE_VARIABLE_CellTypeNumMap_20));
#line 793 "global_data.m"
    *ll_backend__global_data__wrapper_arg_8 = ((MR_Box) (ll_backend__global_data__conv0_STATE_VARIABLE_TypeNumRemap_22));
#line 793 "global_data.m"
  }
#line 793 "global_data.m"
}

#line 790 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data__merge_static_cell_infos_4_p_0_1(
#line 790 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg)
#line 790 "global_data.m"
{
#line 790 "global_data.m"
  {
#line 790 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 790 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;

#line 790 "global_data.m"
    {
#line 790 "global_data.m"
      return ll_backend__global_data__succeeded = ll_backend__global_data__IntroducedFrom__pred__merge_static_cell_infos__790__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 4))));
    }
#line 790 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 790 "global_data.m"
  }
#line 790 "global_data.m"
}

#line 782 "global_data.m"
static void MR_CALL 
ll_backend__global_data__merge_static_cell_infos_4_p_0(
#line 782 "global_data.m"
  MR_Word ll_backend__global_data__SCIa_5,
#line 782 "global_data.m"
  MR_Word ll_backend__global_data__SCIb_6,
#line 782 "global_data.m"
  MR_Word * ll_backend__global_data__SCI_7,
#line 782 "global_data.m"
  MR_Word * ll_backend__global_data__Remap_8)
#line 782 "global_data.m"
{
#line 785 "global_data.m"
  {
#line 785 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 785 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_41_41;
#line 785 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_19_59;
#line 785 "global_data.m"
    MR_Word ll_backend__global_data__SubInfoA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SCIa_5, (MR_Integer) 0)));
#line 785 "global_data.m"
    MR_Word ll_backend__global_data__TypeCounterA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SCIa_5, (MR_Integer) 1)));
#line 785 "global_data.m"
    MR_Word ll_backend__global_data__CellTypeNumMapA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SCIa_5, (MR_Integer) 2)));
#line 785 "global_data.m"
    MR_Word ll_backend__global_data__ScalarCellGroupMapA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SCIa_5, (MR_Integer) 3)));
#line 785 "global_data.m"
    MR_Word ll_backend__global_data__VectorCellGroupMapA_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SCIa_5, (MR_Integer) 4)));
#line 785 "global_data.m"
    MR_Word ll_backend__global_data__SubInfoB_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SCIb_6, (MR_Integer) 0)));
#line 785 "global_data.m"
    MR_Word ll_backend__global_data__CellTypeNumMapB_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SCIb_6, (MR_Integer) 2)));
#line 785 "global_data.m"
    MR_Word ll_backend__global_data__ScalarCellGroupMapB_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SCIb_6, (MR_Integer) 3)));
#line 785 "global_data.m"
    MR_Word ll_backend__global_data__VectorCellGroupMapB_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SCIb_6, (MR_Integer) 4)));
#line 785 "global_data.m"
    MR_Word ll_backend__global_data__TypeCounter_19;
#line 785 "global_data.m"
    MR_Word ll_backend__global_data__CellTypeNumMap_20;
#line 785 "global_data.m"
    MR_Word ll_backend__global_data__CellTypeNumMapRemap_21;
#line 785 "global_data.m"
    MR_Word ll_backend__global_data__ScalarCellGroupMap_22;
#line 785 "global_data.m"
    MR_Word ll_backend__global_data__ScalarCellGroupRemap_23;
#line 785 "global_data.m"
    MR_Word ll_backend__global_data__VectorCellGroupMap_24;
#line 785 "global_data.m"
    MR_Word ll_backend__global_data__SCI0_25;
#line 785 "global_data.m"
    MR_Word ll_backend__global_data__V_26_26;
#line 785 "global_data.m"
    MR_Word ll_backend__global_data__V_31_31;
#line 785 "global_data.m"
    MR_Word ll_backend__global_data__V_51_51;
#line 785 "global_data.m"
    MR_Word ll_backend__global_data__V_52_52;
#line 785 "global_data.m"
    MR_Word ll_backend__global_data__V_68_68;
#line 788 "global_data.m"
    MR_Word ll_backend__global_data___TypeCounterB_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__SCIb_6, (MR_Integer) 1)));
#line 793 "global_data.m"
    MR_Box ll_backend__global_data__conv5_TypeCounter_19;
#line 793 "global_data.m"
    MR_Box ll_backend__global_data__conv4_CellTypeNumMap_20;
#line 793 "global_data.m"
    MR_Box ll_backend__global_data__conv3_CellTypeNumMapRemap_21;
#line 837 "global_data.m"
    MR_Box ll_backend__global_data__conv9_ScalarCellGroupMap_22;
#line 837 "global_data.m"
    MR_Box ll_backend__global_data__conv8_ScalarCellGroupRemap_23;
#line 924 "global_data.m"
    MR_Box ll_backend__global_data__conv11_VectorCellGroupMap_24;

#line 790 "global_data.m"
    {
#line 790 "global_data.m"
      ll_backend__global_data__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 790 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_26_26, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_9[0]));
#line 790 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_26_26, 1) = ((MR_Box) (ll_backend__global_data__merge_static_cell_infos_4_p_0_1));
#line 790 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_26_26, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 790 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_26_26, 3) = ((MR_Box) (ll_backend__global_data__SubInfoA_9));
#line 790 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_26_26, 4) = ((MR_Box) (ll_backend__global_data__SubInfoB_14));
#line 790 "global_data.m"
    }
#line 790 "global_data.m"
    {
#line 790 "global_data.m"
      mercury__require__expect_4_p_0(ll_backend__global_data__V_26_26, (MR_String) "ll_backend.global_data", (MR_String) "predicate \140ll_backend.global_data.merge_static_cell_infos\'/4", (MR_String) "mismatch");
    }
#line 10048 "ll_backend.global_data.c"
    ll_backend__global_data__TypeCtorInfo_41_41 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;
#line 795 "global_data.m"
    {
#line 795 "global_data.m"
      ll_backend__global_data__V_31_31 = mercury__map__init_0_f_0(ll_backend__global_data__TypeCtorInfo_41_41, ll_backend__global_data__TypeCtorInfo_41_41);
    }
#line 793 "global_data.m"
    {
#line 793 "global_data.m"
      mercury__bimap__foldl3_8_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0, ll_backend__global_data__TypeCtorInfo_41_41, (MR_Word) &mercury__counter__counter__type_ctor_info_counter_0, (MR_Word) &ll_backend__global_data_scalar_common_1[1], (MR_Word) &ll_backend__global_data_scalar_common_1[2], (MR_Word) &ll_backend__global_data_scalar_common_1[12], ll_backend__global_data__CellTypeNumMapB_16, ((MR_Box) (ll_backend__global_data__TypeCounterA_10)), &ll_backend__global_data__conv5_TypeCounter_19, ((MR_Box) (ll_backend__global_data__CellTypeNumMapA_11)), &ll_backend__global_data__conv4_CellTypeNumMap_20, ((MR_Box) (ll_backend__global_data__V_31_31)), &ll_backend__global_data__conv3_CellTypeNumMapRemap_21);
    }
#line 793 "global_data.m"
    ll_backend__global_data__TypeCounter_19 = ((MR_Word) ll_backend__global_data__conv5_TypeCounter_19);
#line 793 "global_data.m"
    ll_backend__global_data__CellTypeNumMap_20 = ((MR_Word) ll_backend__global_data__conv4_CellTypeNumMap_20);
#line 793 "global_data.m"
    ll_backend__global_data__CellTypeNumMapRemap_21 = ((MR_Word) ll_backend__global_data__conv3_CellTypeNumMapRemap_21);
#line 837 "global_data.m"
    {
#line 837 "global_data.m"
      ll_backend__global_data__V_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 837 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_51_51, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_11[0]));
#line 837 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_51_51, 1) = ((MR_Box) (ll_backend__global_data__merge_static_cell_infos_4_p_0_3));
#line 837 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_51_51, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 837 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_51_51, 3) = ((MR_Box) (ll_backend__global_data__CellTypeNumMapRemap_21));
#line 837 "global_data.m"
    }
#line 10080 "ll_backend.global_data.c"
    ll_backend__global_data__TypeCtorInfo_19_59 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;
#line 840 "global_data.m"
    {
#line 840 "global_data.m"
      ll_backend__global_data__V_52_52 = mercury__map__init_0_f_0(ll_backend__global_data__TypeCtorInfo_19_59, (MR_Word) &ll_backend__global_data_scalar_common_1[3]);
    }
#line 837 "global_data.m"
    {
#line 837 "global_data.m"
      mercury__map__foldl2_6_p_0(ll_backend__global_data__TypeCtorInfo_19_59, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0, (MR_Word) &ll_backend__global_data_scalar_common_1[4], (MR_Word) &ll_backend__global_data_scalar_common_1[5], ll_backend__global_data__V_51_51, ll_backend__global_data__ScalarCellGroupMapB_17, ((MR_Box) (ll_backend__global_data__ScalarCellGroupMapA_12)), &ll_backend__global_data__conv9_ScalarCellGroupMap_22, ((MR_Box) (ll_backend__global_data__V_52_52)), &ll_backend__global_data__conv8_ScalarCellGroupRemap_23);
    }
#line 837 "global_data.m"
    ll_backend__global_data__ScalarCellGroupMap_22 = ((MR_Word) ll_backend__global_data__conv9_ScalarCellGroupMap_22);
#line 837 "global_data.m"
    ll_backend__global_data__ScalarCellGroupRemap_23 = ((MR_Word) ll_backend__global_data__conv8_ScalarCellGroupRemap_23);
#line 924 "global_data.m"
    {
#line 924 "global_data.m"
      ll_backend__global_data__V_68_68 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 924 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_68_68, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_5[3]));
#line 924 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_68_68, 1) = ((MR_Box) (ll_backend__global_data__merge_static_cell_infos_4_p_0_4));
#line 924 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_68_68, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 924 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_68_68, 3) = ((MR_Box) (ll_backend__global_data__CellTypeNumMapRemap_21));
#line 924 "global_data.m"
    }
#line 924 "global_data.m"
    {
#line 924 "global_data.m"
      mercury__map__foldl_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0, (MR_Word) &ll_backend__global_data_scalar_common_1[7], ll_backend__global_data__V_68_68, ll_backend__global_data__VectorCellGroupMapB_18, ((MR_Box) (ll_backend__global_data__VectorCellGroupMapA_13)), &ll_backend__global_data__conv11_VectorCellGroupMap_24);
    }
#line 924 "global_data.m"
    ll_backend__global_data__VectorCellGroupMap_24 = ((MR_Word) ll_backend__global_data__conv11_VectorCellGroupMap_24);
#line 805 "global_data.m"
    {
#line 805 "global_data.m"
      MR_Word base;
#line 805 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 805 "global_data.m"
      *ll_backend__global_data__Remap_8 = base;
#line 805 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__CellTypeNumMapRemap_21));
#line 805 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__ScalarCellGroupRemap_23));
#line 805 "global_data.m"
    }
#line 808 "global_data.m"
    {
#line 808 "global_data.m"
      ll_backend__global_data__SCI0_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 808 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__SCI0_25, 0) = ((MR_Box) (ll_backend__global_data__SubInfoA_9));
#line 808 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__SCI0_25, 1) = ((MR_Box) (ll_backend__global_data__TypeCounter_19));
#line 808 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__SCI0_25, 2) = ((MR_Box) (ll_backend__global_data__CellTypeNumMap_20));
#line 808 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__SCI0_25, 3) = ((MR_Box) (ll_backend__global_data__ScalarCellGroupMap_22));
#line 808 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__SCI0_25, 4) = ((MR_Box) (ll_backend__global_data__VectorCellGroupMap_24));
#line 808 "global_data.m"
    }
#line 810 "global_data.m"
    {
#line 810 "global_data.m"
      ll_backend__global_data__remap_static_cell_info_3_p_0(*ll_backend__global_data__Remap_8, ll_backend__global_data__SCI0_25, ll_backend__global_data__SCI_7);
#line 810 "global_data.m"
      return;
    }
#line 785 "global_data.m"
  }
#line 782 "global_data.m"
}

#line 708 "global_data.m"
static void MR_CALL 
ll_backend__global_data__associate_natural_type_4_p_0(
#line 708 "global_data.m"
  MR_Word ll_backend__global_data__UnboxFloat_5,
#line 708 "global_data.m"
  MR_Word ll_backend__global_data__ArgWidth_6,
#line 708 "global_data.m"
  MR_Word ll_backend__global_data__Rval_7,
#line 708 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__4_4)
#line 708 "global_data.m"
{
#line 711 "global_data.m"
  {
#line 711 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 711 "global_data.m"
    MR_Word ll_backend__global_data__Type_8;

#line 712 "global_data.m"
    {
#line 712 "global_data.m"
      ll_backend__global_data__natural_type_4_p_0(ll_backend__global_data__UnboxFloat_5, ll_backend__global_data__ArgWidth_6, ll_backend__global_data__Rval_7, &ll_backend__global_data__Type_8);
    }
#line 711 "global_data.m"
    {
#line 711 "global_data.m"
      MR_Word base;
#line 711 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 711 "global_data.m"
      *ll_backend__global_data__HeadVar__4_4 = base;
#line 711 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__Rval_7));
#line 711 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__Type_8));
#line 711 "global_data.m"
    }
#line 711 "global_data.m"
  }
#line 708 "global_data.m"
}

#line 693 "global_data.m"
static void MR_CALL 
ll_backend__global_data__natural_type_4_p_0(
#line 693 "global_data.m"
  MR_Word ll_backend__global_data__UnboxFloat_5,
#line 693 "global_data.m"
  MR_Word ll_backend__global_data__ArgWidth_6,
#line 693 "global_data.m"
  MR_Word ll_backend__global_data__Rval_7,
#line 693 "global_data.m"
  MR_Word * ll_backend__global_data__Type_8)
#line 693 "global_data.m"
{
#line 696 "global_data.m"
  {
#line 696 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 696 "global_data.m"
    MR_Word ll_backend__global_data__Type0_9;

#line 697 "global_data.m"
    {
#line 697 "global_data.m"
      ll_backend__llds__rval_type_2_p_0(ll_backend__global_data__Rval_7, &ll_backend__global_data__Type0_9);
    }
#line 699 "global_data.m"
    ll_backend__global_data__succeeded = (ll_backend__global_data__Type0_9 == (MR_Integer) 9);
#line 699 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 699 "global_data.m"
      {
#line 700 "global_data.m"
        ll_backend__global_data__succeeded = (ll_backend__global_data__UnboxFloat_5 == (MR_Integer) 1);
#line 699 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 699 "global_data.m"
          {
#line 701 "global_data.m"
            ll_backend__global_data__succeeded = (ll_backend__global_data__ArgWidth_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 701 "global_data.m"
            ll_backend__global_data__succeeded = !(ll_backend__global_data__succeeded);
#line 699 "global_data.m"
          }
#line 699 "global_data.m"
      }
#line 704 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 703 "global_data.m"
      *ll_backend__global_data__Type_8 = (MR_Integer) 11;
#line 704 "global_data.m"
    else
#line 705 "global_data.m"
      *ll_backend__global_data__Type_8 = ll_backend__global_data__Type0_9;
#line 696 "global_data.m"
  }
#line 693 "global_data.m"
}

#line 649 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data__threshold_group_types_5_p_0(
#line 649 "global_data.m"
  MR_Word ll_backend__global_data__CurType_6,
#line 649 "global_data.m"
  MR_Word ll_backend__global_data__RevArgsSoFar_7,
#line 649 "global_data.m"
  MR_Word ll_backend__global_data__LaterArgsTypes_8,
#line 649 "global_data.m"
  MR_Word * ll_backend__global_data__TypeGroups_9,
#line 649 "global_data.m"
  MR_Word * ll_backend__global_data__TypeAndArgGroups_10)
#line 649 "global_data.m"
{
#line 656 "global_data.m"
  while (MR_TRUE)
#line 656 "global_data.m"
    {
#line 656 "global_data.m"
      /* tailcall optimized into a loop */
#line 656 "global_data.m"
      {
#line 656 "global_data.m"
        MR_bool ll_backend__global_data__succeeded;

#line 656 "global_data.m"
        if ((ll_backend__global_data__LaterArgsTypes_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 656 "global_data.m"
          {
#line 656 "global_data.m"
            MR_Word ll_backend__global_data__TypeGroup_11;
#line 656 "global_data.m"
            MR_Word ll_backend__global_data__TypeAndArgGroup_12;
#line 681 "global_data.m"
            MR_Word ll_backend__global_data__Arg_34;
#line 678 "global_data.m"
            MR_Word ll_backend__global_data__V_37_37;

#line 678 "global_data.m"
            ll_backend__global_data__succeeded = ((MR_tag((MR_Word) ll_backend__global_data__RevArgsSoFar_7)) == (MR_mktag((MR_Integer) 1)));
#line 678 "global_data.m"
            if (ll_backend__global_data__succeeded)
#line 678 "global_data.m"
              {
#line 678 "global_data.m"
                ll_backend__global_data__Arg_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__RevArgsSoFar_7, (MR_Integer) 0)));
#line 678 "global_data.m"
                ll_backend__global_data__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__RevArgsSoFar_7, (MR_Integer) 1)));
#line 678 "global_data.m"
                ll_backend__global_data__succeeded = (ll_backend__global_data__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 678 "global_data.m"
              }
#line 681 "global_data.m"
            if (ll_backend__global_data__succeeded)
#line 679 "global_data.m"
              {
#line 679 "global_data.m"
                {
#line 679 "global_data.m"
                  ll_backend__global_data__TypeGroup_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 679 "global_data.m"
                  MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeGroup_11, 0) = ((MR_Box) (ll_backend__global_data__CurType_6));
#line 679 "global_data.m"
                  MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeGroup_11, 1) = ((MR_Box) ((MR_Integer) 1));
#line 679 "global_data.m"
                }
#line 680 "global_data.m"
                {
#line 680 "global_data.m"
                  ll_backend__global_data__TypeAndArgGroup_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 680 "global_data.m"
                  MR_hl_field(MR_mktag(1), ll_backend__global_data__TypeAndArgGroup_12, 0) = ((MR_Box) (ll_backend__global_data__CurType_6));
#line 680 "global_data.m"
                  MR_hl_field(MR_mktag(1), ll_backend__global_data__TypeAndArgGroup_12, 1) = ((MR_Box) (ll_backend__global_data__Arg_34));
#line 680 "global_data.m"
                }
#line 679 "global_data.m"
              }
#line 681 "global_data.m"
            else
#line 682 "global_data.m"
              {
#line 682 "global_data.m"
                MR_Word ll_backend__global_data__TypeCtorInfo_14_39 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
#line 682 "global_data.m"
                MR_Integer ll_backend__global_data__NumArgs_35;
#line 682 "global_data.m"
                MR_Word ll_backend__global_data__Args_36;

#line 682 "global_data.m"
                {
#line 682 "global_data.m"
                  mercury__list__length_2_p_0(ll_backend__global_data__TypeCtorInfo_14_39, ll_backend__global_data__RevArgsSoFar_7, &ll_backend__global_data__NumArgs_35);
                }
#line 683 "global_data.m"
                {
#line 683 "global_data.m"
                  mercury__list__reverse_2_p_0(ll_backend__global_data__TypeCtorInfo_14_39, ll_backend__global_data__RevArgsSoFar_7, &ll_backend__global_data__Args_36);
                }
#line 684 "global_data.m"
                {
#line 684 "global_data.m"
                  ll_backend__global_data__TypeGroup_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 684 "global_data.m"
                  MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeGroup_11, 0) = ((MR_Box) (ll_backend__global_data__CurType_6));
#line 684 "global_data.m"
                  MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeGroup_11, 1) = ((MR_Box) (ll_backend__global_data__NumArgs_35));
#line 684 "global_data.m"
                }
#line 685 "global_data.m"
                {
#line 685 "global_data.m"
                  ll_backend__global_data__TypeAndArgGroup_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 685 "global_data.m"
                  MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeAndArgGroup_12, 0) = ((MR_Box) (ll_backend__global_data__CurType_6));
#line 685 "global_data.m"
                  MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeAndArgGroup_12, 1) = ((MR_Box) (ll_backend__global_data__NumArgs_35));
#line 685 "global_data.m"
                  MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeAndArgGroup_12, 2) = ((MR_Box) (ll_backend__global_data__Args_36));
#line 685 "global_data.m"
                }
#line 682 "global_data.m"
              }
#line 658 "global_data.m"
            {
#line 658 "global_data.m"
              MR_Word base;
#line 658 "global_data.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 658 "global_data.m"
              *ll_backend__global_data__TypeGroups_9 = base;
#line 658 "global_data.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__global_data__TypeGroup_11));
#line 658 "global_data.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 658 "global_data.m"
            }
#line 659 "global_data.m"
            {
#line 659 "global_data.m"
              MR_Word base;
#line 659 "global_data.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 659 "global_data.m"
              *ll_backend__global_data__TypeAndArgGroups_10 = base;
#line 659 "global_data.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__global_data__TypeAndArgGroup_12));
#line 659 "global_data.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 659 "global_data.m"
            }
#line 656 "global_data.m"
            ll_backend__global_data__succeeded = MR_TRUE;
#line 656 "global_data.m"
          }
#line 656 "global_data.m"
        else
#line 661 "global_data.m"
          {
#line 661 "global_data.m"
            MR_Word ll_backend__global_data__NextArg_13;
#line 661 "global_data.m"
            MR_Word ll_backend__global_data__NextType_14;
#line 661 "global_data.m"
            MR_Word ll_backend__global_data__MoreArgsTypes_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__LaterArgsTypes_8, (MR_Integer) 1)));
#line 661 "global_data.m"
            MR_Word ll_backend__global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__LaterArgsTypes_8, (MR_Integer) 0)));

#line 661 "global_data.m"
            ll_backend__global_data__NextArg_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_18_18, (MR_Integer) 0)));
#line 661 "global_data.m"
            ll_backend__global_data__NextType_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_18_18, (MR_Integer) 1)));
#line 662 "global_data.m"
            ll_backend__global_data__succeeded = (ll_backend__global_data__CurType_6 == ll_backend__global_data__NextType_14);
#line 665 "global_data.m"
            if (ll_backend__global_data__succeeded)
#line 663 "global_data.m"
              {
#line 663 "global_data.m"
                MR_Word ll_backend__global_data__V_19_19;

#line 663 "global_data.m"
                {
#line 663 "global_data.m"
                  ll_backend__global_data__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 663 "global_data.m"
                  MR_hl_field(MR_mktag(1), ll_backend__global_data__V_19_19, 0) = ((MR_Box) (ll_backend__global_data__NextArg_13));
#line 663 "global_data.m"
                  MR_hl_field(MR_mktag(1), ll_backend__global_data__V_19_19, 1) = ((MR_Box) (ll_backend__global_data__RevArgsSoFar_7));
#line 663 "global_data.m"
                }
#line 663 "global_data.m"
                /* direct tailcall eliminated */
#line 663 "global_data.m"
                {
#line 663 "global_data.m"
                  MR_Word ll_backend__global_data__RevArgsSoFar__tmp_copy_7 = ll_backend__global_data__V_19_19;
#line 663 "global_data.m"
                  MR_Word ll_backend__global_data__LaterArgsTypes__tmp_copy_8 = ll_backend__global_data__MoreArgsTypes_15;

#line 663 "global_data.m"
                  ll_backend__global_data__LaterArgsTypes_8 = ll_backend__global_data__LaterArgsTypes__tmp_copy_8;
#line 663 "global_data.m"
                  ll_backend__global_data__RevArgsSoFar_7 = ll_backend__global_data__RevArgsSoFar__tmp_copy_7;
#line 663 "global_data.m"
                }
#line 663 "global_data.m"
                continue;
#line 663 "global_data.m"
              }
#line 665 "global_data.m"
            else
#line 667 "global_data.m"
              {
#line 667 "global_data.m"
                MR_Word ll_backend__global_data__TypeGroupsTail_16;
#line 667 "global_data.m"
                MR_Word ll_backend__global_data__TypeAndArgGroupsTail_17;
#line 667 "global_data.m"
                MR_Word ll_backend__global_data__V_20_20;
#line 667 "global_data.m"
                MR_Word ll_backend__global_data__TypeGroup_24;
#line 667 "global_data.m"
                MR_Word ll_backend__global_data__TypeAndArgGroup_25;
#line 681 "global_data.m"
                MR_Word ll_backend__global_data__Arg_44;
#line 678 "global_data.m"
                MR_Word ll_backend__global_data__V_47_47;

#line 666 "global_data.m"
                {
#line 666 "global_data.m"
                  ll_backend__global_data__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 666 "global_data.m"
                  MR_hl_field(MR_mktag(1), ll_backend__global_data__V_20_20, 0) = ((MR_Box) (ll_backend__global_data__NextArg_13));
#line 666 "global_data.m"
                  MR_hl_field(MR_mktag(1), ll_backend__global_data__V_20_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 666 "global_data.m"
                }
#line 666 "global_data.m"
                {
#line 666 "global_data.m"
                  ll_backend__global_data__succeeded = ll_backend__global_data__threshold_group_types_5_p_0(ll_backend__global_data__NextType_14, ll_backend__global_data__V_20_20, ll_backend__global_data__MoreArgsTypes_15, &ll_backend__global_data__TypeGroupsTail_16, &ll_backend__global_data__TypeAndArgGroupsTail_17);
                }
#line 667 "global_data.m"
                if (ll_backend__global_data__succeeded)
#line 667 "global_data.m"
                  {
#line 678 "global_data.m"
                    ll_backend__global_data__succeeded = ((MR_tag((MR_Word) ll_backend__global_data__RevArgsSoFar_7)) == (MR_mktag((MR_Integer) 1)));
#line 678 "global_data.m"
                    if (ll_backend__global_data__succeeded)
#line 678 "global_data.m"
                      {
#line 678 "global_data.m"
                        ll_backend__global_data__Arg_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__RevArgsSoFar_7, (MR_Integer) 0)));
#line 678 "global_data.m"
                        ll_backend__global_data__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__RevArgsSoFar_7, (MR_Integer) 1)));
#line 678 "global_data.m"
                        ll_backend__global_data__succeeded = (ll_backend__global_data__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 678 "global_data.m"
                      }
#line 681 "global_data.m"
                    if (ll_backend__global_data__succeeded)
#line 679 "global_data.m"
                      {
#line 679 "global_data.m"
                        {
#line 679 "global_data.m"
                          ll_backend__global_data__TypeGroup_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 679 "global_data.m"
                          MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeGroup_24, 0) = ((MR_Box) (ll_backend__global_data__CurType_6));
#line 679 "global_data.m"
                          MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeGroup_24, 1) = ((MR_Box) ((MR_Integer) 1));
#line 679 "global_data.m"
                        }
#line 680 "global_data.m"
                        {
#line 680 "global_data.m"
                          ll_backend__global_data__TypeAndArgGroup_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 680 "global_data.m"
                          MR_hl_field(MR_mktag(1), ll_backend__global_data__TypeAndArgGroup_25, 0) = ((MR_Box) (ll_backend__global_data__CurType_6));
#line 680 "global_data.m"
                          MR_hl_field(MR_mktag(1), ll_backend__global_data__TypeAndArgGroup_25, 1) = ((MR_Box) (ll_backend__global_data__Arg_44));
#line 680 "global_data.m"
                        }
#line 679 "global_data.m"
                      }
#line 681 "global_data.m"
                    else
#line 682 "global_data.m"
                      {
#line 682 "global_data.m"
                        MR_Word ll_backend__global_data__TypeCtorInfo_14_49 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
#line 682 "global_data.m"
                        MR_Integer ll_backend__global_data__NumArgs_45;
#line 682 "global_data.m"
                        MR_Word ll_backend__global_data__Args_46;

#line 682 "global_data.m"
                        {
#line 682 "global_data.m"
                          mercury__list__length_2_p_0(ll_backend__global_data__TypeCtorInfo_14_49, ll_backend__global_data__RevArgsSoFar_7, &ll_backend__global_data__NumArgs_45);
                        }
#line 683 "global_data.m"
                        {
#line 683 "global_data.m"
                          mercury__list__reverse_2_p_0(ll_backend__global_data__TypeCtorInfo_14_49, ll_backend__global_data__RevArgsSoFar_7, &ll_backend__global_data__Args_46);
                        }
#line 684 "global_data.m"
                        {
#line 684 "global_data.m"
                          ll_backend__global_data__TypeGroup_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 684 "global_data.m"
                          MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeGroup_24, 0) = ((MR_Box) (ll_backend__global_data__CurType_6));
#line 684 "global_data.m"
                          MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeGroup_24, 1) = ((MR_Box) (ll_backend__global_data__NumArgs_45));
#line 684 "global_data.m"
                        }
#line 685 "global_data.m"
                        {
#line 685 "global_data.m"
                          ll_backend__global_data__TypeAndArgGroup_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 685 "global_data.m"
                          MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeAndArgGroup_25, 0) = ((MR_Box) (ll_backend__global_data__CurType_6));
#line 685 "global_data.m"
                          MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeAndArgGroup_25, 1) = ((MR_Box) (ll_backend__global_data__NumArgs_45));
#line 685 "global_data.m"
                          MR_hl_field(MR_mktag(0), ll_backend__global_data__TypeAndArgGroup_25, 2) = ((MR_Box) (ll_backend__global_data__Args_46));
#line 685 "global_data.m"
                        }
#line 682 "global_data.m"
                      }
#line 669 "global_data.m"
                    {
#line 669 "global_data.m"
                      MR_Word base;
#line 669 "global_data.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 669 "global_data.m"
                      *ll_backend__global_data__TypeGroups_9 = base;
#line 669 "global_data.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__global_data__TypeGroup_24));
#line 669 "global_data.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__global_data__TypeGroupsTail_16));
#line 669 "global_data.m"
                    }
#line 670 "global_data.m"
                    {
#line 670 "global_data.m"
                      MR_Word base;
#line 670 "global_data.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 670 "global_data.m"
                      *ll_backend__global_data__TypeAndArgGroups_10 = base;
#line 670 "global_data.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__global_data__TypeAndArgGroup_25));
#line 670 "global_data.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__global_data__TypeAndArgGroupsTail_17));
#line 670 "global_data.m"
                    }
#line 670 "global_data.m"
                    ll_backend__global_data__succeeded = MR_TRUE;
#line 667 "global_data.m"
                  }
#line 667 "global_data.m"
              }
#line 661 "global_data.m"
          }
#line 656 "global_data.m"
        return ll_backend__global_data__succeeded;
#line 656 "global_data.m"
      }
#line 656 "global_data.m"
      break;
#line 656 "global_data.m"
    }
#line 649 "global_data.m"
}

#line 617 "global_data.m"
static void MR_CALL 
ll_backend__global_data__add_one_vector_static_cell_6_p_0(
#line 617 "global_data.m"
  MR_Word ll_backend__global_data__TypeNum_7,
#line 617 "global_data.m"
  MR_Word ll_backend__global_data__CellType_8,
#line 617 "global_data.m"
  MR_Integer ll_backend__global_data__CellNum_9,
#line 617 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__4_4,
#line 617 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_Arrays_0_13,
#line 617 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Arrays_14)
#line 617 "global_data.m"
{
#line 623 "global_data.m"
  {
#line 623 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 623 "global_data.m"
    MR_Word ll_backend__global_data__VectorContents_10 = (MR_Word) ll_backend__global_data__HeadVar__4_4;
#line 623 "global_data.m"
    MR_Word ll_backend__global_data__Array_12;

#line 624 "global_data.m"
    {
#line 624 "global_data.m"
      ll_backend__global_data__Array_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 624 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Array_12, 0) = ((MR_Box) (ll_backend__global_data__CellType_8));
#line 624 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Array_12, 1) = ((MR_Box) (ll_backend__global_data__TypeNum_7));
#line 624 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Array_12, 2) = ((MR_Box) (ll_backend__global_data__CellNum_9));
#line 624 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Array_12, 3) = ((MR_Box) (ll_backend__global_data__VectorContents_10));
#line 624 "global_data.m"
    }
#line 626 "global_data.m"
    {
#line 626 "global_data.m"
      MR_Word base;
#line 626 "global_data.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 626 "global_data.m"
      *ll_backend__global_data__STATE_VARIABLE_Arrays_14 = base;
#line 626 "global_data.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__global_data__Array_12));
#line 626 "global_data.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__global_data__STATE_VARIABLE_Arrays_0_13));
#line 626 "global_data.m"
    }
#line 623 "global_data.m"
  }
#line 617 "global_data.m"
}

#line 614 "global_data.m"
static void MR_CALL 
ll_backend__global_data__add_all_vector_static_cells_for_type_5_p_0_1(
#line 614 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 614 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 614 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 614 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_3,
#line 614 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_4)
#line 614 "global_data.m"
{
#line 614 "global_data.m"
  {
#line 614 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 614 "global_data.m"
    MR_Word ll_backend__global_data__conv1_STATE_VARIABLE_Arrays_14;

#line 614 "global_data.m"
    {
#line 614 "global_data.m"
      ll_backend__global_data__add_one_vector_static_cell_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 4))), ((MR_Integer) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3), &ll_backend__global_data__conv1_STATE_VARIABLE_Arrays_14);
    }
#line 614 "global_data.m"
    *ll_backend__global_data__wrapper_arg_4 = ((MR_Box) (ll_backend__global_data__conv1_STATE_VARIABLE_Arrays_14));
#line 614 "global_data.m"
  }
#line 614 "global_data.m"
}

#line 606 "global_data.m"
static void MR_CALL 
ll_backend__global_data__add_all_vector_static_cells_for_type_5_p_0(
#line 606 "global_data.m"
  MR_Word ll_backend__global_data__TypeNumMap_6,
#line 606 "global_data.m"
  MR_Word ll_backend__global_data__TypeNum_7,
#line 606 "global_data.m"
  MR_Word ll_backend__global_data__CellGroup_8,
#line 606 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_Arrays_0_11,
#line 606 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Arrays_12)
#line 606 "global_data.m"
{
#line 612 "global_data.m"
  {
#line 612 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 612 "global_data.m"
    MR_Word ll_backend__global_data__CellType_10;
#line 612 "global_data.m"
    MR_Word ll_backend__global_data__V_13_13;
#line 612 "global_data.m"
    MR_Word ll_backend__global_data__V_14_14;
#line 613 "global_data.m"
    MR_Box ll_backend__global_data__conv0_CellType_10;
#line 614 "global_data.m"
    MR_Word ll_backend__global_data__V_16_16;
#line 614 "global_data.m"
    MR_Box ll_backend__global_data__conv2_STATE_VARIABLE_Arrays_12;

#line 613 "global_data.m"
    {
#line 613 "global_data.m"
      mercury__bimap__reverse_lookup_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, ll_backend__global_data__TypeNumMap_6, &ll_backend__global_data__conv0_CellType_10, ((MR_Box) (ll_backend__global_data__TypeNum_7)));
    }
#line 613 "global_data.m"
    ll_backend__global_data__CellType_10 = ((MR_Word) ll_backend__global_data__conv0_CellType_10);
#line 614 "global_data.m"
    {
#line 614 "global_data.m"
      ll_backend__global_data__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 614 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_13_13, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_8[0]));
#line 614 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_13_13, 1) = ((MR_Box) (ll_backend__global_data__add_all_vector_static_cells_for_type_5_p_0_1));
#line 614 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 614 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_13_13, 3) = ((MR_Box) (ll_backend__global_data__TypeNum_7));
#line 614 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_13_13, 4) = ((MR_Box) (ll_backend__global_data__CellType_10));
#line 614 "global_data.m"
    }
#line 614 "global_data.m"
    ll_backend__global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__CellGroup_8, (MR_Integer) 0)));
#line 614 "global_data.m"
    ll_backend__global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__CellGroup_8, (MR_Integer) 1)));
#line 614 "global_data.m"
    {
#line 614 "global_data.m"
      mercury__map__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_contents_0, (MR_Word) &ll_backend__global_data_scalar_common_2[2], ll_backend__global_data__V_13_13, ll_backend__global_data__V_14_14, ((MR_Box) (ll_backend__global_data__STATE_VARIABLE_Arrays_0_11)), &ll_backend__global_data__conv2_STATE_VARIABLE_Arrays_12);
    }
#line 614 "global_data.m"
    *ll_backend__global_data__STATE_VARIABLE_Arrays_12 = ((MR_Word) ll_backend__global_data__conv2_STATE_VARIABLE_Arrays_12);
#line 612 "global_data.m"
  }
#line 606 "global_data.m"
}

#line 594 "global_data.m"
static void MR_CALL 
ll_backend__global_data__add_scalar_static_cell_for_type_5_p_0(
#line 594 "global_data.m"
  MR_Word ll_backend__global_data__TypeNumMap_6,
#line 594 "global_data.m"
  MR_Word ll_backend__global_data__TypeNum_7,
#line 594 "global_data.m"
  MR_Word ll_backend__global_data__CellGroup_8,
#line 594 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_Arrays_0_13,
#line 594 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Arrays_14)
#line 594 "global_data.m"
{
#line 600 "global_data.m"
  {
#line 600 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 600 "global_data.m"
    MR_Word ll_backend__global_data__CellType_10;
#line 600 "global_data.m"
    MR_Word ll_backend__global_data__ArrayContents_11;
#line 600 "global_data.m"
    MR_Word ll_backend__global_data__Array_12;
#line 600 "global_data.m"
    MR_Word ll_backend__global_data__V_15_15;
#line 601 "global_data.m"
    MR_Box ll_backend__global_data__conv0_CellType_10;
#line 602 "global_data.m"
    MR_Word ll_backend__global_data__V_17_17;
#line 602 "global_data.m"
    MR_Word ll_backend__global_data__V_18_18;

#line 601 "global_data.m"
    {
#line 601 "global_data.m"
      mercury__bimap__reverse_lookup_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, ll_backend__global_data__TypeNumMap_6, &ll_backend__global_data__conv0_CellType_10, ((MR_Box) (ll_backend__global_data__TypeNum_7)));
    }
#line 601 "global_data.m"
    ll_backend__global_data__CellType_10 = ((MR_Word) ll_backend__global_data__conv0_CellType_10);
#line 602 "global_data.m"
    ll_backend__global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__CellGroup_8, (MR_Integer) 0)));
#line 602 "global_data.m"
    ll_backend__global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__CellGroup_8, (MR_Integer) 1)));
#line 602 "global_data.m"
    ll_backend__global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__CellGroup_8, (MR_Integer) 2)));
#line 602 "global_data.m"
    {
#line 602 "global_data.m"
      mercury__list__reverse_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0, ll_backend__global_data__V_15_15, &ll_backend__global_data__ArrayContents_11);
    }
#line 603 "global_data.m"
    {
#line 603 "global_data.m"
      ll_backend__global_data__Array_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 603 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Array_12, 0) = ((MR_Box) (ll_backend__global_data__CellType_10));
#line 603 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Array_12, 1) = ((MR_Box) (ll_backend__global_data__TypeNum_7));
#line 603 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Array_12, 2) = ((MR_Box) (ll_backend__global_data__ArrayContents_11));
#line 603 "global_data.m"
    }
#line 604 "global_data.m"
    {
#line 604 "global_data.m"
      MR_Word base;
#line 604 "global_data.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 604 "global_data.m"
      *ll_backend__global_data__STATE_VARIABLE_Arrays_14 = base;
#line 604 "global_data.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__global_data__Array_12));
#line 604 "global_data.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__global_data__STATE_VARIABLE_Arrays_0_13));
#line 604 "global_data.m"
    }
#line 600 "global_data.m"
  }
#line 594 "global_data.m"
}

#line 578 "global_data.m"
static MR_Word MR_CALL 
ll_backend__global_data__pair_vector_element_2_f_0(
#line 578 "global_data.m"
  MR_Word ll_backend__global_data__Types_4,
#line 578 "global_data.m"
  MR_Word ll_backend__global_data__Args_5)
#line 578 "global_data.m"
{
#line 580 "global_data.m"
  {
#line 580 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 580 "global_data.m"
    MR_Word ll_backend__global_data__HeadVar__3_3;
#line 580 "global_data.m"
    MR_Word ll_backend__global_data__TypedArgs_6;

#line 581 "global_data.m"
    {
#line 581 "global_data.m"
      ll_backend__llds__build_typed_rvals_3_p_0(ll_backend__global_data__Args_5, ll_backend__global_data__Types_4, &ll_backend__global_data__TypedArgs_6);
    }
#line 580 "global_data.m"
    {
#line 580 "global_data.m"
      ll_backend__global_data__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 580 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__3_3, 0) = ((MR_Box) (ll_backend__global_data__TypedArgs_6));
#line 580 "global_data.m"
    }
#line 580 "global_data.m"
    return ll_backend__global_data__HeadVar__3_3;
#line 580 "global_data.m"
  }
#line 578 "global_data.m"
}

#line 574 "global_data.m"
static MR_Word MR_CALL 
ll_backend__global_data__init_vector_cell_group_0_f_0(void)
#line 574 "global_data.m"
{
#line 576 "global_data.m"
  {
#line 576 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 576 "global_data.m"
    MR_Word ll_backend__global_data__HeadVar__1_1;
#line 576 "global_data.m"
    MR_Word ll_backend__global_data__V_2_2;
#line 576 "global_data.m"
    MR_Word ll_backend__global_data__V_4_4;

#line 576 "global_data.m"
    {
#line 576 "global_data.m"
      ll_backend__global_data__V_2_2 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
#line 576 "global_data.m"
    {
#line 576 "global_data.m"
      ll_backend__global_data__V_4_4 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_contents_0);
    }
#line 576 "global_data.m"
    {
#line 576 "global_data.m"
      ll_backend__global_data__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 576 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, 0) = ((MR_Box) (ll_backend__global_data__V_2_2));
#line 576 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, 1) = ((MR_Box) (ll_backend__global_data__V_4_4));
#line 576 "global_data.m"
    }
#line 576 "global_data.m"
    return ll_backend__global_data__HeadVar__1_1;
#line 576 "global_data.m"
  }
#line 574 "global_data.m"
}

#line 489 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data__find_general_llds_types_in_cell_5_p_0(
#line 489 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 489 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 489 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3,
#line 489 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__4_4,
#line 489 "global_data.m"
  MR_Word * ll_backend__global_data__HeadVar__5_5)
#line 489 "global_data.m"
{
#line 493 "global_data.m"
  {
#line 493 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;

#line 493 "global_data.m"
    if ((ll_backend__global_data__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 493 "global_data.m"
      {
#line 493 "global_data.m"
        ll_backend__global_data__succeeded = (ll_backend__global_data__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 493 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 493 "global_data.m"
          {
#line 493 "global_data.m"
            ll_backend__global_data__succeeded = (ll_backend__global_data__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 493 "global_data.m"
            if (ll_backend__global_data__succeeded)
#line 493 "global_data.m"
              {
#line 493 "global_data.m"
                *ll_backend__global_data__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 493 "global_data.m"
                ll_backend__global_data__succeeded = MR_TRUE;
#line 493 "global_data.m"
              }
#line 493 "global_data.m"
          }
#line 493 "global_data.m"
      }
#line 493 "global_data.m"
    else
#line 495 "global_data.m"
      {
#line 495 "global_data.m"
        MR_Word ll_backend__global_data__Types_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 495 "global_data.m"
        MR_Word ll_backend__global_data__Rval_10;
#line 495 "global_data.m"
        MR_Word ll_backend__global_data__Rvals_11;
#line 495 "global_data.m"
        MR_Word ll_backend__global_data__LLDSType0_12;
#line 495 "global_data.m"
        MR_Word ll_backend__global_data__LLDSTypes0_13;
#line 495 "global_data.m"
        MR_Word ll_backend__global_data__LLDSType_14;
#line 495 "global_data.m"
        MR_Word ll_backend__global_data__LLDSTypes_15;
#line 495 "global_data.m"
        MR_Word ll_backend__global_data__ArgWidth_16;
#line 495 "global_data.m"
        MR_Word ll_backend__global_data__NaturalType_17;
#line 494 "global_data.m"
        MR_Word ll_backend__global_data___Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__HeadVar__2_2, (MR_Integer) 0)));

#line 494 "global_data.m"
        ll_backend__global_data__succeeded = ((MR_tag((MR_Word) ll_backend__global_data__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 494 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 494 "global_data.m"
          {
#line 494 "global_data.m"
            ll_backend__global_data__Rval_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 0)));
#line 494 "global_data.m"
            ll_backend__global_data__Rvals_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 1)));
#line 495 "global_data.m"
            ll_backend__global_data__succeeded = ((MR_tag((MR_Word) ll_backend__global_data__HeadVar__4_4)) == (MR_mktag((MR_Integer) 1)));
#line 495 "global_data.m"
            if (ll_backend__global_data__succeeded)
#line 495 "global_data.m"
              {
#line 495 "global_data.m"
                ll_backend__global_data__LLDSType0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__HeadVar__4_4, (MR_Integer) 0)));
#line 495 "global_data.m"
                ll_backend__global_data__LLDSTypes0_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__HeadVar__4_4, (MR_Integer) 1)));
#line 496 "global_data.m"
                ll_backend__global_data__ArgWidth_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 497 "global_data.m"
                {
#line 497 "global_data.m"
                  ll_backend__global_data__natural_type_4_p_0(ll_backend__global_data__HeadVar__1_1, ll_backend__global_data__ArgWidth_16, ll_backend__global_data__Rval_10, &ll_backend__global_data__NaturalType_17);
                }
#line 509 "global_data.m"
                ll_backend__global_data__succeeded = (ll_backend__global_data__NaturalType_17 == ll_backend__global_data__LLDSType0_12);
#line 512 "global_data.m"
                if (ll_backend__global_data__succeeded)
#line 511 "global_data.m"
                  {
#line 511 "global_data.m"
                    ll_backend__global_data__LLDSType_14 = ll_backend__global_data__LLDSType0_12;
#line 511 "global_data.m"
                    ll_backend__global_data__succeeded = MR_TRUE;
#line 511 "global_data.m"
                  }
#line 512 "global_data.m"
                else
#line 517 "global_data.m"
                  {
#line 513 "global_data.m"
                    ll_backend__global_data__succeeded = (ll_backend__global_data__NaturalType_17 == (MR_Integer) 7);
#line 513 "global_data.m"
                    if (ll_backend__global_data__succeeded)
#line 514 "global_data.m"
                      ll_backend__global_data__succeeded = (ll_backend__global_data__LLDSType0_12 == (MR_Integer) 11);
#line 517 "global_data.m"
                    if (ll_backend__global_data__succeeded)
#line 516 "global_data.m"
                      {
#line 516 "global_data.m"
                        ll_backend__global_data__LLDSType_14 = (MR_Integer) 11;
#line 516 "global_data.m"
                        ll_backend__global_data__succeeded = MR_TRUE;
#line 516 "global_data.m"
                      }
#line 517 "global_data.m"
                    else
#line 522 "global_data.m"
                      {
#line 518 "global_data.m"
                        ll_backend__global_data__succeeded = (ll_backend__global_data__NaturalType_17 == (MR_Integer) 11);
#line 522 "global_data.m"
                        if (ll_backend__global_data__succeeded)
#line 522 "global_data.m"
                          {
#line 519 "global_data.m"
                            ll_backend__global_data__succeeded = (ll_backend__global_data__LLDSType0_12 == (MR_Integer) 7);
#line 522 "global_data.m"
                            if (ll_backend__global_data__succeeded)
#line 522 "global_data.m"
                              {
#line 521 "global_data.m"
                                ll_backend__global_data__LLDSType_14 = (MR_Integer) 11;
#line 521 "global_data.m"
                                ll_backend__global_data__succeeded = MR_TRUE;
#line 522 "global_data.m"
                              }
#line 522 "global_data.m"
                          }
#line 522 "global_data.m"
                      }
#line 517 "global_data.m"
                  }
#line 495 "global_data.m"
                if (ll_backend__global_data__succeeded)
#line 495 "global_data.m"
                  {
#line 525 "global_data.m"
                    {
#line 525 "global_data.m"
                      ll_backend__global_data__succeeded = ll_backend__global_data__find_general_llds_types_in_cell_5_p_0(ll_backend__global_data__HeadVar__1_1, ll_backend__global_data__Types_9, ll_backend__global_data__Rvals_11, ll_backend__global_data__LLDSTypes0_13, &ll_backend__global_data__LLDSTypes_15);
                    }
#line 495 "global_data.m"
                    if (ll_backend__global_data__succeeded)
#line 495 "global_data.m"
                      {
#line 495 "global_data.m"
                        {
#line 495 "global_data.m"
                          MR_Word base;
#line 495 "global_data.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 495 "global_data.m"
                          *ll_backend__global_data__HeadVar__5_5 = base;
#line 495 "global_data.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__global_data__LLDSType_14));
#line 495 "global_data.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__global_data__LLDSTypes_15));
#line 495 "global_data.m"
                        }
#line 495 "global_data.m"
                        ll_backend__global_data__succeeded = MR_TRUE;
#line 495 "global_data.m"
                      }
#line 495 "global_data.m"
                  }
#line 495 "global_data.m"
              }
#line 494 "global_data.m"
          }
#line 495 "global_data.m"
      }
#line 493 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 493 "global_data.m"
  }
#line 489 "global_data.m"
}

#line 480 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data__find_general_llds_types_2_5_p_0(
#line 480 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__1_1,
#line 480 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__2_2,
#line 480 "global_data.m"
  MR_Word ll_backend__global_data__HeadVar__3_3,
#line 480 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_LLDSTypes_0_4,
#line 480 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_LLDSTypes_5)
#line 480 "global_data.m"
{
#line 484 "global_data.m"
  while (MR_TRUE)
#line 484 "global_data.m"
    {
#line 484 "global_data.m"
      /* tailcall optimized into a loop */
#line 484 "global_data.m"
      {
#line 484 "global_data.m"
        MR_bool ll_backend__global_data__succeeded;

#line 484 "global_data.m"
        if ((ll_backend__global_data__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 484 "global_data.m"
          {
#line 484 "global_data.m"
            *ll_backend__global_data__STATE_VARIABLE_LLDSTypes_5 = ll_backend__global_data__STATE_VARIABLE_LLDSTypes_0_4;
#line 484 "global_data.m"
            ll_backend__global_data__succeeded = MR_TRUE;
#line 484 "global_data.m"
          }
#line 484 "global_data.m"
        else
#line 485 "global_data.m"
          {
#line 485 "global_data.m"
            MR_Word ll_backend__global_data__Vector_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 0)));
#line 485 "global_data.m"
            MR_Word ll_backend__global_data__Vectors_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 1)));
#line 485 "global_data.m"
            MR_Word ll_backend__global_data__STATE_VARIABLE_LLDSTypes_18_18;

#line 486 "global_data.m"
            {
#line 486 "global_data.m"
              ll_backend__global_data__succeeded = ll_backend__global_data__find_general_llds_types_in_cell_5_p_0(ll_backend__global_data__HeadVar__1_1, ll_backend__global_data__HeadVar__2_2, ll_backend__global_data__Vector_13, ll_backend__global_data__STATE_VARIABLE_LLDSTypes_0_4, &ll_backend__global_data__STATE_VARIABLE_LLDSTypes_18_18);
            }
#line 485 "global_data.m"
            if (ll_backend__global_data__succeeded)
#line 487 "global_data.m"
              {
#line 487 "global_data.m"
                /* direct tailcall eliminated */
#line 487 "global_data.m"
                {
#line 487 "global_data.m"
                  MR_Word ll_backend__global_data__HeadVar__3__tmp_copy_3 = ll_backend__global_data__Vectors_14;
#line 487 "global_data.m"
                  MR_Word ll_backend__global_data__STATE_VARIABLE_LLDSTypes_0__tmp_copy_4 = ll_backend__global_data__STATE_VARIABLE_LLDSTypes_18_18;

#line 487 "global_data.m"
                  ll_backend__global_data__STATE_VARIABLE_LLDSTypes_0_4 = ll_backend__global_data__STATE_VARIABLE_LLDSTypes_0__tmp_copy_4;
#line 487 "global_data.m"
                  ll_backend__global_data__HeadVar__3_3 = ll_backend__global_data__HeadVar__3__tmp_copy_3;
#line 487 "global_data.m"
                }
#line 487 "global_data.m"
                continue;
#line 487 "global_data.m"
              }
#line 485 "global_data.m"
          }
#line 484 "global_data.m"
        return ll_backend__global_data__succeeded;
#line 484 "global_data.m"
      }
#line 484 "global_data.m"
      break;
#line 484 "global_data.m"
    }
#line 480 "global_data.m"
}

#line 460 "global_data.m"
static MR_Word MR_CALL 
ll_backend__global_data__init_scalar_cell_group_0_f_0(void)
#line 460 "global_data.m"
{
#line 462 "global_data.m"
  {
#line 462 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 462 "global_data.m"
    MR_Word ll_backend__global_data__HeadVar__1_1;
#line 462 "global_data.m"
    MR_Word ll_backend__global_data__V_2_2;
#line 462 "global_data.m"
    MR_Word ll_backend__global_data__V_4_4;

#line 462 "global_data.m"
    {
#line 462 "global_data.m"
      ll_backend__global_data__V_2_2 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
#line 462 "global_data.m"
    {
#line 462 "global_data.m"
      ll_backend__global_data__V_4_4 = mercury__bimap__init_0_f_0((MR_Word) &ll_backend__global_data_scalar_common_2[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0);
    }
#line 462 "global_data.m"
    {
#line 462 "global_data.m"
      ll_backend__global_data__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 462 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, 0) = ((MR_Box) (ll_backend__global_data__V_2_2));
#line 462 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, 1) = ((MR_Box) (ll_backend__global_data__V_4_4));
#line 462 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__HeadVar__1_1, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 462 "global_data.m"
    }
#line 462 "global_data.m"
    return ll_backend__global_data__HeadVar__1_1;
#line 462 "global_data.m"
  }
#line 460 "global_data.m"
}

#line 382 "global_data.m"
static void MR_CALL 
ll_backend__global_data__do_add_scalar_static_cell_6_p_0(
#line 382 "global_data.m"
  MR_Word ll_backend__global_data__TypedArgs_7,
#line 382 "global_data.m"
  MR_Word ll_backend__global_data__CellType_8,
#line 382 "global_data.m"
  MR_Word ll_backend__global_data__CellValue_9,
#line 382 "global_data.m"
  MR_Word * ll_backend__global_data__DataId_10,
#line 382 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_Info_0_35,
#line 382 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Info_36)
#line 382 "global_data.m"
{
#line 386 "global_data.m"
  {
#line 386 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 386 "global_data.m"
    MR_Word ll_backend__global_data__Args_12;
#line 386 "global_data.m"
    MR_Word ll_backend__global_data__TypeNumMap0_14;
#line 386 "global_data.m"
    MR_Word ll_backend__global_data__CellGroupMap0_15;
#line 386 "global_data.m"
    MR_Word ll_backend__global_data__TypeNum_17;
#line 386 "global_data.m"
    MR_Word ll_backend__global_data__InsertCommonData_22;
#line 386 "global_data.m"
    MR_Word ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38;
#line 386 "global_data.m"
    MR_Word ll_backend__global_data__STATE_VARIABLE_Info_40_40;
#line 386 "global_data.m"
    MR_Word ll_backend__global_data__V_42_42;
#line 386 "global_data.m"
    MR_Word ll_backend__global_data__V_155_155;
#line 386 "global_data.m"
    MR_Word ll_backend__global_data__V_156_156;
#line 389 "global_data.m"
    MR_Word ll_backend__global_data__V_75_75;
#line 389 "global_data.m"
    MR_Word ll_backend__global_data__V_76_76;
#line 389 "global_data.m"
    MR_Word ll_backend__global_data__V_78_78;
#line 400 "global_data.m"
    MR_Word ll_backend__global_data__OldTypeNum_16;
#line 393 "global_data.m"
    MR_Box ll_backend__global_data__conv0_OldTypeNum_16;
#line 412 "global_data.m"
    MR_Word ll_backend__global_data__V_97_97;
#line 412 "global_data.m"
    MR_Word ll_backend__global_data__V_98_98;
#line 412 "global_data.m"
    MR_Word ll_backend__global_data__V_99_99;
#line 412 "global_data.m"
    MR_Word ll_backend__global_data__V_100_100;
#line 412 "global_data.m"
    MR_Word ll_backend__global_data__V_101_101;
#line 412 "global_data.m"
    MR_Word ll_backend__global_data__V_102_102;
#line 440 "global_data.m"
    MR_Word ll_backend__global_data__V_154_154;

#line 387 "global_data.m"
    {
#line 387 "global_data.m"
      ll_backend__global_data__Args_12 = ll_backend__llds__typed_rvals_project_rvals_1_f_0(ll_backend__global_data__TypedArgs_7);
    }
#line 389 "global_data.m"
    ll_backend__global_data__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 0)));
#line 389 "global_data.m"
    ll_backend__global_data__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 1)));
#line 389 "global_data.m"
    ll_backend__global_data__TypeNumMap0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 2)));
#line 389 "global_data.m"
    ll_backend__global_data__CellGroupMap0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 3)));
#line 389 "global_data.m"
    ll_backend__global_data__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 4)));
#line 393 "global_data.m"
    {
#line 393 "global_data.m"
      ll_backend__global_data__succeeded = mercury__bimap__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, ll_backend__global_data__TypeNumMap0_14, ((MR_Box) (ll_backend__global_data__CellType_8)), &ll_backend__global_data__conv0_OldTypeNum_16);
    }
#line 393 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 393 "global_data.m"
      {
#line 393 "global_data.m"
        ll_backend__global_data__OldTypeNum_16 = ((MR_Word) ll_backend__global_data__conv0_OldTypeNum_16);
#line 393 "global_data.m"
        ll_backend__global_data__succeeded = MR_TRUE;
#line 393 "global_data.m"
      }
#line 400 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 394 "global_data.m"
      {
#line 397 "global_data.m"
        MR_Word ll_backend__global_data__STATE_VARIABLE_CellGroup_37_37;
#line 395 "global_data.m"
        MR_Box ll_backend__global_data__conv1_STATE_VARIABLE_CellGroup_37_37;

#line 394 "global_data.m"
        ll_backend__global_data__TypeNum_17 = ll_backend__global_data__OldTypeNum_16;
#line 395 "global_data.m"
        {
#line 395 "global_data.m"
          ll_backend__global_data__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0, ll_backend__global_data__CellGroupMap0_15, ((MR_Box) (ll_backend__global_data__TypeNum_17)), &ll_backend__global_data__conv1_STATE_VARIABLE_CellGroup_37_37);
        }
#line 395 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 395 "global_data.m"
          {
#line 395 "global_data.m"
            ll_backend__global_data__STATE_VARIABLE_CellGroup_37_37 = ((MR_Word) ll_backend__global_data__conv1_STATE_VARIABLE_CellGroup_37_37);
#line 395 "global_data.m"
            ll_backend__global_data__succeeded = MR_TRUE;
#line 395 "global_data.m"
          }
#line 397 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 397 "global_data.m"
          ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38 = ll_backend__global_data__STATE_VARIABLE_CellGroup_37_37;
#line 397 "global_data.m"
        else
#line 398 "global_data.m"
          {
#line 398 "global_data.m"
            ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38 = ll_backend__global_data__init_scalar_cell_group_0_f_0();
          }
#line 394 "global_data.m"
        ll_backend__global_data__STATE_VARIABLE_Info_40_40 = ll_backend__global_data__STATE_VARIABLE_Info_0_35;
#line 394 "global_data.m"
      }
#line 400 "global_data.m"
    else
#line 401 "global_data.m"
      {
#line 401 "global_data.m"
        MR_Word ll_backend__global_data__TypeNumCounter0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 1)));
#line 401 "global_data.m"
        MR_Integer ll_backend__global_data__TypeRawNum_19;
#line 401 "global_data.m"
        MR_Word ll_backend__global_data__TypeNumCounter_20;
#line 401 "global_data.m"
        MR_Word ll_backend__global_data__TypeNumMap_21;
#line 401 "global_data.m"
        MR_Word ll_backend__global_data__STATE_VARIABLE_Info_39_39;
#line 401 "global_data.m"
        MR_Word ll_backend__global_data__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 0)));
#line 401 "global_data.m"
        MR_Word ll_backend__global_data__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 2)));
#line 401 "global_data.m"
        MR_Word ll_backend__global_data__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 3)));
#line 401 "global_data.m"
        MR_Word ll_backend__global_data__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 4)));
#line 404 "global_data.m"
        MR_Word ll_backend__global_data__V_87_87;
#line 404 "global_data.m"
        MR_Word ll_backend__global_data__V_89_89;
#line 404 "global_data.m"
        MR_Word ll_backend__global_data__V_90_90;
#line 404 "global_data.m"
        MR_Word ll_backend__global_data__V_91_91;
#line 404 "global_data.m"
        MR_Word ll_backend__global_data__V_88_88;
#line 407 "global_data.m"
        MR_Word ll_backend__global_data__V_92_92;
#line 407 "global_data.m"
        MR_Word ll_backend__global_data__V_93_93;
#line 407 "global_data.m"
        MR_Word ll_backend__global_data__V_95_95;
#line 407 "global_data.m"
        MR_Word ll_backend__global_data__V_96_96;
#line 407 "global_data.m"
        MR_Word ll_backend__global_data__V_94_94;

#line 402 "global_data.m"
        {
#line 402 "global_data.m"
          mercury__counter__allocate_3_p_0(&ll_backend__global_data__TypeRawNum_19, ll_backend__global_data__TypeNumCounter0_18, &ll_backend__global_data__TypeNumCounter_20);
        }
#line 403 "global_data.m"
        ll_backend__global_data__TypeNum_17 = (MR_Word) ll_backend__global_data__TypeRawNum_19;
#line 404 "global_data.m"
        ll_backend__global_data__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 0)));
#line 404 "global_data.m"
        ll_backend__global_data__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 1)));
#line 404 "global_data.m"
        ll_backend__global_data__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 2)));
#line 404 "global_data.m"
        ll_backend__global_data__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 3)));
#line 404 "global_data.m"
        ll_backend__global_data__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_35, (MR_Integer) 4)));
#line 404 "global_data.m"
        {
#line 404 "global_data.m"
          ll_backend__global_data__STATE_VARIABLE_Info_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 404 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_39_39, 0) = ((MR_Box) (ll_backend__global_data__V_87_87));
#line 404 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_39_39, 1) = ((MR_Box) (ll_backend__global_data__TypeNumCounter_20));
#line 404 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_39_39, 2) = ((MR_Box) (ll_backend__global_data__V_89_89));
#line 404 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_39_39, 3) = ((MR_Box) (ll_backend__global_data__V_90_90));
#line 404 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_39_39, 4) = ((MR_Box) (ll_backend__global_data__V_91_91));
#line 404 "global_data.m"
        }
#line 406 "global_data.m"
        {
#line 406 "global_data.m"
          mercury__bimap__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, ((MR_Box) (ll_backend__global_data__CellType_8)), ((MR_Box) (ll_backend__global_data__TypeNum_17)), ll_backend__global_data__TypeNumMap0_14, &ll_backend__global_data__TypeNumMap_21);
        }
#line 407 "global_data.m"
        ll_backend__global_data__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_39_39, (MR_Integer) 0)));
#line 407 "global_data.m"
        ll_backend__global_data__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_39_39, (MR_Integer) 1)));
#line 407 "global_data.m"
        ll_backend__global_data__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_39_39, (MR_Integer) 2)));
#line 407 "global_data.m"
        ll_backend__global_data__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_39_39, (MR_Integer) 3)));
#line 407 "global_data.m"
        ll_backend__global_data__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_39_39, (MR_Integer) 4)));
#line 407 "global_data.m"
        {
#line 407 "global_data.m"
          ll_backend__global_data__STATE_VARIABLE_Info_40_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 407 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, 0) = ((MR_Box) (ll_backend__global_data__V_92_92));
#line 407 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, 1) = ((MR_Box) (ll_backend__global_data__V_93_93));
#line 407 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, 2) = ((MR_Box) (ll_backend__global_data__TypeNumMap_21));
#line 407 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, 3) = ((MR_Box) (ll_backend__global_data__V_95_95));
#line 407 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, 4) = ((MR_Box) (ll_backend__global_data__V_96_96));
#line 407 "global_data.m"
        }
#line 409 "global_data.m"
        {
#line 409 "global_data.m"
          ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38 = ll_backend__global_data__init_scalar_cell_group_0_f_0();
        }
#line 401 "global_data.m"
      }
#line 412 "global_data.m"
    ll_backend__global_data__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 0)));
#line 412 "global_data.m"
    ll_backend__global_data__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 1)));
#line 412 "global_data.m"
    ll_backend__global_data__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 2)));
#line 412 "global_data.m"
    ll_backend__global_data__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 3)));
#line 412 "global_data.m"
    ll_backend__global_data__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 4)));
#line 412 "global_data.m"
    ll_backend__global_data__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_42_42, (MR_Integer) 0)));
#line 412 "global_data.m"
    ll_backend__global_data__V_102_102 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_42_42, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 412 "global_data.m"
    ll_backend__global_data__InsertCommonData_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_42_42, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 440 "global_data.m"
    ll_backend__global_data__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 0)));
#line 440 "global_data.m"
    ll_backend__global_data__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 1)));
#line 440 "global_data.m"
    ll_backend__global_data__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 2)));
#line 438 "global_data.m"
#line 438 "global_data.m"
    switch (ll_backend__global_data__InsertCommonData_22) {
#line 438 "global_data.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 438 "global_data.m"
      case (MR_Integer) 0:
#line 443 "global_data.m"
        {
#line 443 "global_data.m"
          MR_Word ll_backend__global_data__DataIdPrime_34;
#line 441 "global_data.m"
          MR_Box ll_backend__global_data__conv2_DataIdPrime_34;

#line 441 "global_data.m"
          {
#line 441 "global_data.m"
            ll_backend__global_data__succeeded = mercury__bimap__search_3_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0, ll_backend__global_data__V_155_155, ((MR_Box) (ll_backend__global_data__Args_12)), &ll_backend__global_data__conv2_DataIdPrime_34);
          }
#line 441 "global_data.m"
          if (ll_backend__global_data__succeeded)
#line 441 "global_data.m"
            {
#line 441 "global_data.m"
              ll_backend__global_data__DataIdPrime_34 = ((MR_Word) ll_backend__global_data__conv2_DataIdPrime_34);
#line 441 "global_data.m"
              ll_backend__global_data__succeeded = MR_TRUE;
#line 441 "global_data.m"
            }
#line 443 "global_data.m"
          if (ll_backend__global_data__succeeded)
#line 442 "global_data.m"
            {
#line 442 "global_data.m"
              *ll_backend__global_data__DataId_10 = ll_backend__global_data__DataIdPrime_34;
#line 442 "global_data.m"
              *ll_backend__global_data__STATE_VARIABLE_Info_36 = ll_backend__global_data__STATE_VARIABLE_Info_40_40;
#line 442 "global_data.m"
            }
#line 443 "global_data.m"
          else
#line 444 "global_data.m"
            {
#line 444 "global_data.m"
              MR_Word ll_backend__global_data__CellNumCounter0_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 0)));
#line 444 "global_data.m"
              MR_Integer ll_backend__global_data__CellNum_54;
#line 444 "global_data.m"
              MR_Word ll_backend__global_data__CellNumCounter_55;
#line 444 "global_data.m"
              MR_Word ll_backend__global_data__RevArray0_56;
#line 444 "global_data.m"
              MR_Word ll_backend__global_data__RevArray_57;
#line 444 "global_data.m"
              MR_Word ll_backend__global_data__CellGroupMap_58;
#line 444 "global_data.m"
              MR_Word ll_backend__global_data__STATE_VARIABLE_CellGroup_48_59;
#line 444 "global_data.m"
              MR_Word ll_backend__global_data__V_128_128;
#line 444 "global_data.m"
              MR_Word ll_backend__global_data__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 1)));
#line 444 "global_data.m"
              MR_Word ll_backend__global_data__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 2)));
#line 446 "global_data.m"
              MR_Word ll_backend__global_data__V_127_127;
#line 455 "global_data.m"
              MR_Word ll_backend__global_data__V_135_135;
#line 455 "global_data.m"
              MR_Word ll_backend__global_data__V_136_136;
#line 455 "global_data.m"
              MR_Word ll_backend__global_data__V_137_137;
#line 455 "global_data.m"
              MR_Word ll_backend__global_data__V_139_139;
#line 455 "global_data.m"
              MR_Word ll_backend__global_data__V_138_138;

#line 445 "global_data.m"
              {
#line 445 "global_data.m"
                mercury__counter__allocate_3_p_0(&ll_backend__global_data__CellNum_54, ll_backend__global_data__CellNumCounter0_53, &ll_backend__global_data__CellNumCounter_55);
              }
#line 446 "global_data.m"
              ll_backend__global_data__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 0)));
#line 446 "global_data.m"
              ll_backend__global_data__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 1)));
#line 446 "global_data.m"
              ll_backend__global_data__RevArray0_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 2)));
#line 447 "global_data.m"
              {
#line 447 "global_data.m"
                MR_Word base;
#line 447 "global_data.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 447 "global_data.m"
                *ll_backend__global_data__DataId_10 = base;
#line 447 "global_data.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__global_data__TypeNum_17));
#line 447 "global_data.m"
                MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__global_data__CellNum_54));
#line 447 "global_data.m"
              }
#line 449 "global_data.m"
              {
#line 449 "global_data.m"
                ll_backend__global_data__RevArray_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 449 "global_data.m"
                MR_hl_field(MR_mktag(1), ll_backend__global_data__RevArray_57, 0) = ((MR_Box) (ll_backend__global_data__CellValue_9));
#line 449 "global_data.m"
                MR_hl_field(MR_mktag(1), ll_backend__global_data__RevArray_57, 1) = ((MR_Box) (ll_backend__global_data__RevArray0_56));
#line 449 "global_data.m"
              }
#line 450 "global_data.m"
              {
#line 450 "global_data.m"
                ll_backend__global_data__STATE_VARIABLE_CellGroup_48_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 450 "global_data.m"
                MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_48_59, 0) = ((MR_Box) (ll_backend__global_data__CellNumCounter_55));
#line 450 "global_data.m"
                MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_48_59, 1) = ((MR_Box) (ll_backend__global_data__V_128_128));
#line 450 "global_data.m"
                MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_48_59, 2) = ((MR_Box) (ll_backend__global_data__RevArray_57));
#line 450 "global_data.m"
              }
#line 454 "global_data.m"
              {
#line 454 "global_data.m"
                mercury__map__set_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0, ((MR_Box) (ll_backend__global_data__TypeNum_17)), ((MR_Box) (ll_backend__global_data__STATE_VARIABLE_CellGroup_48_59)), ll_backend__global_data__CellGroupMap0_15, &ll_backend__global_data__CellGroupMap_58);
              }
#line 455 "global_data.m"
              ll_backend__global_data__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 0)));
#line 455 "global_data.m"
              ll_backend__global_data__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 1)));
#line 455 "global_data.m"
              ll_backend__global_data__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 2)));
#line 455 "global_data.m"
              ll_backend__global_data__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 3)));
#line 455 "global_data.m"
              ll_backend__global_data__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 4)));
#line 455 "global_data.m"
              {
#line 455 "global_data.m"
                MR_Word base;
#line 455 "global_data.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 455 "global_data.m"
                *ll_backend__global_data__STATE_VARIABLE_Info_36 = base;
#line 455 "global_data.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__V_135_135));
#line 455 "global_data.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__V_136_136));
#line 455 "global_data.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__V_137_137));
#line 455 "global_data.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__CellGroupMap_58));
#line 455 "global_data.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__V_139_139));
#line 455 "global_data.m"
              }
#line 444 "global_data.m"
            }
#line 443 "global_data.m"
        }
#line 438 "global_data.m"
        break;
#line 438 "global_data.m"
      case (MR_Integer) 1:
#line 414 "global_data.m"
        {
#line 414 "global_data.m"
          MR_Integer ll_backend__global_data__CellNum_25;
#line 414 "global_data.m"
          MR_Word ll_backend__global_data__CellNumCounter_26;
#line 414 "global_data.m"
          MR_Word ll_backend__global_data__NewDataId_27;
#line 414 "global_data.m"
          MR_Word ll_backend__global_data__MaybeOldDataId_28;
#line 414 "global_data.m"
          MR_Word ll_backend__global_data__MembersMap_29;

#line 417 "global_data.m"
          {
#line 417 "global_data.m"
            mercury__counter__allocate_3_p_0(&ll_backend__global_data__CellNum_25, ll_backend__global_data__V_156_156, &ll_backend__global_data__CellNumCounter_26);
          }
#line 418 "global_data.m"
          {
#line 418 "global_data.m"
            ll_backend__global_data__NewDataId_27 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 418 "global_data.m"
            MR_hl_field(MR_mktag(2), ll_backend__global_data__NewDataId_27, 0) = ((MR_Box) (ll_backend__global_data__TypeNum_17));
#line 418 "global_data.m"
            MR_hl_field(MR_mktag(2), ll_backend__global_data__NewDataId_27, 1) = ((MR_Box) (ll_backend__global_data__CellNum_25));
#line 418 "global_data.m"
          }
#line 420 "global_data.m"
          {
#line 420 "global_data.m"
            mercury__bimap__search_insert_5_p_0((MR_Word) &ll_backend__global_data_scalar_common_2[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0, ((MR_Box) (ll_backend__global_data__Args_12)), ((MR_Box) (ll_backend__global_data__NewDataId_27)), &ll_backend__global_data__MaybeOldDataId_28, ll_backend__global_data__V_155_155, &ll_backend__global_data__MembersMap_29);
          }
#line 427 "global_data.m"
          if ((ll_backend__global_data__MaybeOldDataId_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 428 "global_data.m"
            {
#line 428 "global_data.m"
              MR_Word ll_backend__global_data__RevArray0_31;
#line 428 "global_data.m"
              MR_Word ll_backend__global_data__RevArray_32;
#line 428 "global_data.m"
              MR_Word ll_backend__global_data__CellGroupMap_33;
#line 428 "global_data.m"
              MR_Word ll_backend__global_data__STATE_VARIABLE_CellGroup_48_50;
#line 428 "global_data.m"
              MR_Word ll_backend__global_data__V_109_109;
#line 428 "global_data.m"
              MR_Word ll_backend__global_data__V_110_110;
#line 430 "global_data.m"
              MR_Word ll_backend__global_data__V_107_107;
#line 430 "global_data.m"
              MR_Word ll_backend__global_data__V_108_108;
#line 436 "global_data.m"
              MR_Word ll_backend__global_data__V_118_118;
#line 436 "global_data.m"
              MR_Word ll_backend__global_data__V_119_119;
#line 436 "global_data.m"
              MR_Word ll_backend__global_data__V_120_120;
#line 436 "global_data.m"
              MR_Word ll_backend__global_data__V_122_122;
#line 436 "global_data.m"
              MR_Word ll_backend__global_data__V_121_121;

#line 429 "global_data.m"
              *ll_backend__global_data__DataId_10 = ll_backend__global_data__NewDataId_27;
#line 430 "global_data.m"
              ll_backend__global_data__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 0)));
#line 430 "global_data.m"
              ll_backend__global_data__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 1)));
#line 430 "global_data.m"
              ll_backend__global_data__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_38_38, (MR_Integer) 2)));
#line 431 "global_data.m"
              ll_backend__global_data__V_110_110 = ll_backend__global_data__CellNumCounter_26;
#line 431 "global_data.m"
              ll_backend__global_data__RevArray0_31 = ll_backend__global_data__V_109_109;
#line 433 "global_data.m"
              {
#line 433 "global_data.m"
                ll_backend__global_data__RevArray_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 433 "global_data.m"
                MR_hl_field(MR_mktag(1), ll_backend__global_data__RevArray_32, 0) = ((MR_Box) (ll_backend__global_data__CellValue_9));
#line 433 "global_data.m"
                MR_hl_field(MR_mktag(1), ll_backend__global_data__RevArray_32, 1) = ((MR_Box) (ll_backend__global_data__RevArray0_31));
#line 433 "global_data.m"
              }
#line 434 "global_data.m"
              {
#line 434 "global_data.m"
                ll_backend__global_data__STATE_VARIABLE_CellGroup_48_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 434 "global_data.m"
                MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_48_50, 0) = ((MR_Box) (ll_backend__global_data__V_110_110));
#line 434 "global_data.m"
                MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_48_50, 1) = ((MR_Box) (ll_backend__global_data__MembersMap_29));
#line 434 "global_data.m"
                MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_48_50, 2) = ((MR_Box) (ll_backend__global_data__RevArray_32));
#line 434 "global_data.m"
              }
#line 435 "global_data.m"
              {
#line 435 "global_data.m"
                mercury__map__set_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0, ((MR_Box) (ll_backend__global_data__TypeNum_17)), ((MR_Box) (ll_backend__global_data__STATE_VARIABLE_CellGroup_48_50)), ll_backend__global_data__CellGroupMap0_15, &ll_backend__global_data__CellGroupMap_33);
              }
#line 436 "global_data.m"
              ll_backend__global_data__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 0)));
#line 436 "global_data.m"
              ll_backend__global_data__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 1)));
#line 436 "global_data.m"
              ll_backend__global_data__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 2)));
#line 436 "global_data.m"
              ll_backend__global_data__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 3)));
#line 436 "global_data.m"
              ll_backend__global_data__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_40_40, (MR_Integer) 4)));
#line 436 "global_data.m"
              {
#line 436 "global_data.m"
                MR_Word base;
#line 436 "global_data.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 436 "global_data.m"
                *ll_backend__global_data__STATE_VARIABLE_Info_36 = base;
#line 436 "global_data.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__V_118_118));
#line 436 "global_data.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__V_119_119));
#line 436 "global_data.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__V_120_120));
#line 436 "global_data.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__CellGroupMap_33));
#line 436 "global_data.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__V_122_122));
#line 436 "global_data.m"
              }
#line 428 "global_data.m"
            }
#line 427 "global_data.m"
          else
#line 423 "global_data.m"
            {
#line 423 "global_data.m"
              *ll_backend__global_data__DataId_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__MaybeOldDataId_28, (MR_Integer) 0)));
#line 423 "global_data.m"
              *ll_backend__global_data__STATE_VARIABLE_Info_36 = ll_backend__global_data__STATE_VARIABLE_Info_40_40;
#line 423 "global_data.m"
            }
#line 414 "global_data.m"
        }
#line 438 "global_data.m"
        break;
#line 438 "global_data.m"
    }
#line 386 "global_data.m"
  }
#line 382 "global_data.m"
}

#line 279 "global_data.m"
static void MR_CALL 
ll_backend__global_data__make_alloc_id_map_5_p_0(
#line 279 "global_data.m"
  MR_Word ll_backend__global_data__AllocSite_6,
#line 279 "global_data.m"
  MR_Integer ll_backend__global_data__Slot_7,
#line 279 "global_data.m"
  MR_Integer * ll_backend__global_data__HeadVar__3_3,
#line 279 "global_data.m"
  MR_Word ll_backend__global_data__STATE_VARIABLE_Map_0_11,
#line 279 "global_data.m"
  MR_Word * ll_backend__global_data__STATE_VARIABLE_Map_12)
#line 279 "global_data.m"
{
#line 283 "global_data.m"
  {
#line 283 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 283 "global_data.m"
    MR_Word ll_backend__global_data__AllocId_9;
#line 283 "global_data.m"
    MR_Word ll_backend__global_data__ArraySlot_10;

#line 283 "global_data.m"
    *ll_backend__global_data__HeadVar__3_3 = (ll_backend__global_data__Slot_7 + (MR_Integer) 1);
#line 284 "global_data.m"
    ll_backend__global_data__AllocId_9 = (MR_Word) ll_backend__global_data__AllocSite_6;
#line 285 "global_data.m"
    {
#line 285 "global_data.m"
      ll_backend__global_data__ArraySlot_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 285 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__ArraySlot_10, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17))));
#line 285 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__ArraySlot_10, 1) = ((MR_Box) (ll_backend__global_data__Slot_7));
#line 285 "global_data.m"
    }
#line 286 "global_data.m"
    {
#line 286 "global_data.m"
      mercury__map__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_alloc_site_id_0, (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0, ((MR_Box) (ll_backend__global_data__AllocId_9)), ((MR_Box) (ll_backend__global_data__ArraySlot_10)), ll_backend__global_data__STATE_VARIABLE_Map_0_11, ll_backend__global_data__STATE_VARIABLE_Map_12);
#line 286 "global_data.m"
      return;
    }
#line 283 "global_data.m"
  }
#line 279 "global_data.m"
}

#line 1021 "global_data.m"
static void MR_CALL 
ll_backend__global_data__remap_references_to_global_data_3_p_0_1(
#line 1021 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 1021 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 1021 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2)
#line 1021 "global_data.m"
{
#line 1021 "global_data.m"
  {
#line 1021 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 1021 "global_data.m"
    MR_Word ll_backend__global_data__conv0_STATE_VARIABLE_Instr_10;

#line 1021 "global_data.m"
    {
#line 1021 "global_data.m"
      ll_backend__global_data__remap_instruction_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv0_STATE_VARIABLE_Instr_10);
    }
#line 1021 "global_data.m"
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv0_STATE_VARIABLE_Instr_10));
#line 1021 "global_data.m"
  }
#line 1021 "global_data.m"
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
#line 1019 "global_data.m"
  {
#line 1019 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 1019 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_31_31;
#line 1019 "global_data.m"
    MR_Word ll_backend__global_data__Code0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 4)));
#line 1019 "global_data.m"
    MR_Word ll_backend__global_data__Code_7;
#line 1019 "global_data.m"
    MR_Word ll_backend__global_data__V_10_10;
#line 1020 "global_data.m"
    MR_String ll_backend__global_data__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 0)));
#line 1020 "global_data.m"
    MR_Integer ll_backend__global_data__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 1)));
#line 1020 "global_data.m"
    MR_Word ll_backend__global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 2)));
#line 1020 "global_data.m"
    MR_Word ll_backend__global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 3)));
#line 1020 "global_data.m"
    MR_Word ll_backend__global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 5)));
#line 1020 "global_data.m"
    MR_Word ll_backend__global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 6)));
#line 1020 "global_data.m"
    MR_Word ll_backend__global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 7)));
#line 1020 "global_data.m"
    MR_Word ll_backend__global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 8)));
#line 1022 "global_data.m"
    MR_String ll_backend__global_data__V_20_20;
#line 1022 "global_data.m"
    MR_Integer ll_backend__global_data__V_21_21;
#line 1022 "global_data.m"
    MR_Word ll_backend__global_data__V_22_22;
#line 1022 "global_data.m"
    MR_Word ll_backend__global_data__V_23_23;
#line 1022 "global_data.m"
    MR_Word ll_backend__global_data__V_25_25;
#line 1022 "global_data.m"
    MR_Word ll_backend__global_data__V_26_26;
#line 1022 "global_data.m"
    MR_Word ll_backend__global_data__V_27_27;
#line 1022 "global_data.m"
    MR_Word ll_backend__global_data__V_28_28;
#line 1022 "global_data.m"
    MR_Word ll_backend__global_data__V_24_24;

#line 1021 "global_data.m"
    {
#line 1021 "global_data.m"
      ll_backend__global_data__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1021 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_10_10, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[1]));
#line 1021 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_10_10, 1) = ((MR_Box) (ll_backend__global_data__remap_references_to_global_data_3_p_0_1));
#line 1021 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1021 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_10_10, 3) = ((MR_Box) (ll_backend__global_data__Remap_4));
#line 1021 "global_data.m"
    }
#line 12054 "ll_backend.global_data.c"
    ll_backend__global_data__TypeCtorInfo_31_31 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 1021 "global_data.m"
    {
#line 1021 "global_data.m"
      mercury__list__map_3_p_0(ll_backend__global_data__TypeCtorInfo_31_31, ll_backend__global_data__TypeCtorInfo_31_31, ll_backend__global_data__V_10_10, ll_backend__global_data__Code0_6, &ll_backend__global_data__Code_7);
    }
#line 1022 "global_data.m"
    ll_backend__global_data__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 0)));
#line 1022 "global_data.m"
    ll_backend__global_data__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 1)));
#line 1022 "global_data.m"
    ll_backend__global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 2)));
#line 1022 "global_data.m"
    ll_backend__global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 3)));
#line 1022 "global_data.m"
    ll_backend__global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 4)));
#line 1022 "global_data.m"
    ll_backend__global_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 5)));
#line 1022 "global_data.m"
    ll_backend__global_data__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 6)));
#line 1022 "global_data.m"
    ll_backend__global_data__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 7)));
#line 1022 "global_data.m"
    ll_backend__global_data__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Procedure_0_8, (MR_Integer) 8)));
#line 1022 "global_data.m"
    {
#line 1022 "global_data.m"
      MR_Word base;
#line 1022 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 1022 "global_data.m"
      *ll_backend__global_data__STATE_VARIABLE_Procedure_9 = base;
#line 1022 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__V_20_20));
#line 1022 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__V_21_21));
#line 1022 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__V_22_22));
#line 1022 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__V_23_23));
#line 1022 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__Code_7));
#line 1022 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__global_data__V_25_25));
#line 1022 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__global_data__V_26_26));
#line 1022 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ll_backend__global_data__V_27_27));
#line 1022 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ll_backend__global_data__V_28_28));
#line 1022 "global_data.m"
    }
#line 1019 "global_data.m"
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
#line 737 "global_data.m"
  {
#line 737 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 737 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_32_32 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 737 "global_data.m"
    MR_Word ll_backend__global_data__ProcVarMapA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataA_5, (MR_Integer) 0)));
#line 737 "global_data.m"
    MR_Word ll_backend__global_data__ProcLayoutMapA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataA_5, (MR_Integer) 1)));
#line 737 "global_data.m"
    MR_Word ll_backend__global_data__ClosureLayoutsA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataA_5, (MR_Integer) 2)));
#line 737 "global_data.m"
    MR_Integer ll_backend__global_data__TSStringSlotCounterA_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataA_5, (MR_Integer) 3)));
#line 737 "global_data.m"
    MR_Word ll_backend__global_data__TSRevStringTableA_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataA_5, (MR_Integer) 4)));
#line 737 "global_data.m"
    MR_Word ll_backend__global_data__StaticCellInfoA_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataA_5, (MR_Integer) 5)));
#line 737 "global_data.m"
    MR_Word ll_backend__global_data__AllocSitesA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataA_5, (MR_Integer) 6)));
#line 737 "global_data.m"
    MR_Word ll_backend__global_data__ProcVarMapB_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataB_6, (MR_Integer) 0)));
#line 737 "global_data.m"
    MR_Word ll_backend__global_data__ProcLayoutMapB_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataB_6, (MR_Integer) 1)));
#line 737 "global_data.m"
    MR_Word ll_backend__global_data__ClosureLayoutsB_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataB_6, (MR_Integer) 2)));
#line 737 "global_data.m"
    MR_Integer ll_backend__global_data__TSStringSlotCounterB_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataB_6, (MR_Integer) 3)));
#line 737 "global_data.m"
    MR_Word ll_backend__global_data__TSRevStringTableB_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataB_6, (MR_Integer) 4)));
#line 737 "global_data.m"
    MR_Word ll_backend__global_data__StaticCellInfoB_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataB_6, (MR_Integer) 5)));
#line 737 "global_data.m"
    MR_Word ll_backend__global_data__AllocSitesB_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalDataB_6, (MR_Integer) 6)));
#line 737 "global_data.m"
    MR_Word ll_backend__global_data__ProcVarMap_23;
#line 737 "global_data.m"
    MR_Word ll_backend__global_data__ProcLayoutMap_24;
#line 737 "global_data.m"
    MR_Word ll_backend__global_data__ClosureLayouts_25;
#line 737 "global_data.m"
    MR_Word ll_backend__global_data__TSRevStringTable_26;
#line 737 "global_data.m"
    MR_Integer ll_backend__global_data__TSStringSlotCounter_27;
#line 737 "global_data.m"
    MR_Word ll_backend__global_data__MaybeTSStringTableRemap_28;
#line 737 "global_data.m"
    MR_Word ll_backend__global_data__StaticCellInfo_29;
#line 737 "global_data.m"
    MR_Word ll_backend__global_data__StaticCellRemap_30;
#line 737 "global_data.m"
    MR_Word ll_backend__global_data__AllocSites_31;

#line 744 "global_data.m"
    {
#line 744 "global_data.m"
      ll_backend__global_data__ProcVarMap_23 = mercury__map__old_merge_2_f_0(ll_backend__global_data__TypeCtorInfo_32_32, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_tabling_info_struct_0, ll_backend__global_data__ProcVarMapA_9, ll_backend__global_data__ProcVarMapB_16);
    }
#line 745 "global_data.m"
    {
#line 745 "global_data.m"
      ll_backend__global_data__ProcLayoutMap_24 = mercury__map__old_merge_2_f_0(ll_backend__global_data__TypeCtorInfo_32_32, (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_info_0, ll_backend__global_data__ProcLayoutMapA_10, ll_backend__global_data__ProcLayoutMapB_17);
    }
#line 746 "global_data.m"
    {
#line 746 "global_data.m"
      ll_backend__global_data__ClosureLayouts_25 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_closure_proc_id_data_0, ll_backend__global_data__ClosureLayoutsA_11, ll_backend__global_data__ClosureLayoutsB_18);
    }
#line 771 "global_data.m"
    if ((ll_backend__global_data__TSRevStringTableA_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 771 "global_data.m"
      if ((ll_backend__global_data__TSRevStringTableB_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 771 "global_data.m"
        {
#line 771 "global_data.m"
          ll_backend__global_data__TSRevStringTable_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 771 "global_data.m"
          ll_backend__global_data__TSStringSlotCounter_27 = (MR_Integer) 0;
#line 771 "global_data.m"
          ll_backend__global_data__MaybeTSStringTableRemap_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 771 "global_data.m"
        }
#line 771 "global_data.m"
      else
#line 772 "global_data.m"
        {
#line 772 "global_data.m"
          ll_backend__global_data__TSRevStringTable_26 = ll_backend__global_data__TSRevStringTableB_20;
#line 772 "global_data.m"
          ll_backend__global_data__TSStringSlotCounter_27 = ll_backend__global_data__TSStringSlotCounterB_19;
#line 772 "global_data.m"
          ll_backend__global_data__MaybeTSStringTableRemap_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 772 "global_data.m"
        }
#line 771 "global_data.m"
    else
#line 771 "global_data.m"
    if ((ll_backend__global_data__TSRevStringTableB_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 773 "global_data.m"
      {
#line 773 "global_data.m"
        ll_backend__global_data__TSRevStringTable_26 = ll_backend__global_data__TSRevStringTableA_13;
#line 773 "global_data.m"
        ll_backend__global_data__TSStringSlotCounter_27 = ll_backend__global_data__TSStringSlotCounterA_12;
#line 773 "global_data.m"
        ll_backend__global_data__MaybeTSStringTableRemap_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 773 "global_data.m"
      }
#line 771 "global_data.m"
    else
#line 775 "global_data.m"
      {
#line 778 "global_data.m"
        {
#line 778 "global_data.m"
          ll_backend__global_data__TSRevStringTable_26 = mercury__list__f_43_43_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__global_data__TSRevStringTableB_20, ll_backend__global_data__TSRevStringTableA_13);
        }
#line 779 "global_data.m"
        ll_backend__global_data__TSStringSlotCounter_27 = (ll_backend__global_data__TSStringSlotCounterA_12 + ll_backend__global_data__TSStringSlotCounterB_19);
#line 775 "global_data.m"
        {
#line 775 "global_data.m"
          ll_backend__global_data__MaybeTSStringTableRemap_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 775 "global_data.m"
          MR_hl_field(MR_mktag(1), ll_backend__global_data__MaybeTSStringTableRemap_28, 0) = ((MR_Box) (ll_backend__global_data__TSStringSlotCounterA_12));
#line 775 "global_data.m"
        }
#line 775 "global_data.m"
      }
#line 750 "global_data.m"
    {
#line 750 "global_data.m"
      ll_backend__global_data__merge_static_cell_infos_4_p_0(ll_backend__global_data__StaticCellInfoA_14, ll_backend__global_data__StaticCellInfoB_21, &ll_backend__global_data__StaticCellInfo_29, &ll_backend__global_data__StaticCellRemap_30);
    }
#line 752 "global_data.m"
    {
#line 752 "global_data.m"
      mercury__set_tree234__union_3_p_0((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0, ll_backend__global_data__AllocSitesA_15, ll_backend__global_data__AllocSitesB_22, &ll_backend__global_data__AllocSites_31);
    }
#line 753 "global_data.m"
    {
#line 753 "global_data.m"
      MR_Word base;
#line 753 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 753 "global_data.m"
      *ll_backend__global_data__GlobalData_7 = base;
#line 753 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__ProcVarMap_23));
#line 753 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__ProcLayoutMap_24));
#line 753 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__ClosureLayouts_25));
#line 753 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__TSStringSlotCounter_27));
#line 753 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__TSRevStringTable_26));
#line 753 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__global_data__StaticCellInfo_29));
#line 753 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__global_data__AllocSites_31));
#line 753 "global_data.m"
    }
#line 755 "global_data.m"
    {
#line 755 "global_data.m"
      MR_Word base;
#line 755 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 755 "global_data.m"
      *ll_backend__global_data__GlobalDataRemap_8 = base;
#line 755 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__MaybeTSStringTableRemap_28));
#line 755 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__StaticCellRemap_30));
#line 755 "global_data.m"
    }
#line 737 "global_data.m"
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
#line 731 "global_data.m"
  {
#line 731 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 731 "global_data.m"
    MR_Word ll_backend__global_data__Counter0_6;
#line 731 "global_data.m"
    MR_Integer ll_backend__global_data__N_7;
#line 731 "global_data.m"
    MR_Word ll_backend__global_data__Counter_9;
#line 731 "global_data.m"
    MR_Word ll_backend__global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
#line 731 "global_data.m"
    MR_Integer ll_backend__global_data__V_13_13;
#line 731 "global_data.m"
    MR_Word ll_backend__global_data__V_15_15;
#line 731 "global_data.m"
    MR_Word ll_backend__global_data__V_16_16;
#line 731 "global_data.m"
    MR_Word ll_backend__global_data__V_27_27;
#line 731 "global_data.m"
    MR_Word ll_backend__global_data__V_28_28;
#line 731 "global_data.m"
    MR_Word ll_backend__global_data__V_29_29;
#line 731 "global_data.m"
    MR_Integer ll_backend__global_data__V_30_30;
#line 731 "global_data.m"
    MR_Word ll_backend__global_data__V_31_31;
#line 731 "global_data.m"
    MR_Word ll_backend__global_data__V_32_32;
#line 732 "global_data.m"
    MR_Word ll_backend__global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
#line 732 "global_data.m"
    MR_Word ll_backend__global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
#line 732 "global_data.m"
    MR_Word ll_backend__global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
#line 732 "global_data.m"
    MR_Integer ll_backend__global_data__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
#line 732 "global_data.m"
    MR_Word ll_backend__global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
#line 732 "global_data.m"
    MR_Word ll_backend__global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
#line 732 "global_data.m"
    MR_Word ll_backend__global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_12_12, (MR_Integer) 0)));
#line 732 "global_data.m"
    MR_Word ll_backend__global_data__V_24_24;
#line 732 "global_data.m"
    MR_Word ll_backend__global_data__V_25_25;
#line 732 "global_data.m"
    MR_Word ll_backend__global_data__V_26_26;
#line 733 "global_data.m"
    MR_Word ll_backend__global_data__V_8_8;
#line 735 "global_data.m"
    MR_Word ll_backend__global_data__V_33_33;
#line 735 "global_data.m"
    MR_Word ll_backend__global_data__V_35_35;
#line 735 "global_data.m"
    MR_Word ll_backend__global_data__V_36_36;
#line 735 "global_data.m"
    MR_Word ll_backend__global_data__V_37_37;
#line 735 "global_data.m"
    MR_Word ll_backend__global_data__V_34_34;

#line 732 "global_data.m"
    ll_backend__global_data__Counter0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_12_12, (MR_Integer) 1)));
#line 732 "global_data.m"
    ll_backend__global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_12_12, (MR_Integer) 2)));
#line 732 "global_data.m"
    ll_backend__global_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_12_12, (MR_Integer) 3)));
#line 732 "global_data.m"
    ll_backend__global_data__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_12_12, (MR_Integer) 4)));
#line 733 "global_data.m"
    {
#line 733 "global_data.m"
      mercury__counter__allocate_3_p_0(&ll_backend__global_data__N_7, ll_backend__global_data__Counter0_6, &ll_backend__global_data__V_8_8);
    }
#line 734 "global_data.m"
    ll_backend__global_data__V_13_13 = (ll_backend__global_data__N_7 + ll_backend__global_data__Increment_4);
#line 734 "global_data.m"
    {
#line 734 "global_data.m"
      ll_backend__global_data__Counter_9 = mercury__counter__init_1_f_0(ll_backend__global_data__V_13_13);
    }
#line 735 "global_data.m"
    ll_backend__global_data__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
#line 735 "global_data.m"
    ll_backend__global_data__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
#line 735 "global_data.m"
    ll_backend__global_data__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
#line 735 "global_data.m"
    ll_backend__global_data__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
#line 735 "global_data.m"
    ll_backend__global_data__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
#line 735 "global_data.m"
    ll_backend__global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
#line 735 "global_data.m"
    ll_backend__global_data__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
#line 735 "global_data.m"
    ll_backend__global_data__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_15_15, (MR_Integer) 0)));
#line 735 "global_data.m"
    ll_backend__global_data__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_15_15, (MR_Integer) 1)));
#line 735 "global_data.m"
    ll_backend__global_data__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_15_15, (MR_Integer) 2)));
#line 735 "global_data.m"
    ll_backend__global_data__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_15_15, (MR_Integer) 3)));
#line 735 "global_data.m"
    ll_backend__global_data__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_15_15, (MR_Integer) 4)));
#line 735 "global_data.m"
    {
#line 735 "global_data.m"
      ll_backend__global_data__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 735 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_16_16, 0) = ((MR_Box) (ll_backend__global_data__V_33_33));
#line 735 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_16_16, 1) = ((MR_Box) (ll_backend__global_data__Counter_9));
#line 735 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_16_16, 2) = ((MR_Box) (ll_backend__global_data__V_35_35));
#line 735 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_16_16, 3) = ((MR_Box) (ll_backend__global_data__V_36_36));
#line 735 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_16_16, 4) = ((MR_Box) (ll_backend__global_data__V_37_37));
#line 735 "global_data.m"
    }
#line 735 "global_data.m"
    {
#line 735 "global_data.m"
      MR_Word base;
#line 735 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 735 "global_data.m"
      *ll_backend__global_data__STATE_VARIABLE_GlobalData_11 = base;
#line 735 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__V_27_27));
#line 735 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__V_28_28));
#line 735 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__V_29_29));
#line 735 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__V_30_30));
#line 735 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__V_31_31));
#line 735 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__global_data__V_16_16));
#line 735 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__global_data__V_32_32));
#line 735 "global_data.m"
    }
#line 731 "global_data.m"
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
#line 691 "global_data.m"
  {
#line 691 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 691 "global_data.m"
    MR_Word ll_backend__global_data__Type_8;

#line 691 "global_data.m"
    {
#line 691 "global_data.m"
      ll_backend__global_data__natural_type_4_p_0(ll_backend__global_data__UnboxedFloat_5, ll_backend__global_data__ArgWidth_6, ll_backend__global_data__Rval_7, &ll_backend__global_data__Type_8);
    }
#line 691 "global_data.m"
    return ll_backend__global_data__Type_8;
#line 691 "global_data.m"
  }
#line 119 "global_data.m"
}

#line 590 "global_data.m"
static void MR_CALL 
ll_backend__global_data__get_static_cells_3_p_0_2(
#line 590 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 590 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 590 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 590 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_3,
#line 590 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_4)
#line 590 "global_data.m"
{
#line 590 "global_data.m"
  {
#line 590 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 590 "global_data.m"
    MR_Word ll_backend__global_data__conv2_STATE_VARIABLE_Arrays_12;

#line 590 "global_data.m"
    {
#line 590 "global_data.m"
      ll_backend__global_data__add_all_vector_static_cells_for_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3), &ll_backend__global_data__conv2_STATE_VARIABLE_Arrays_12);
    }
#line 590 "global_data.m"
    *ll_backend__global_data__wrapper_arg_4 = ((MR_Box) (ll_backend__global_data__conv2_STATE_VARIABLE_Arrays_12));
#line 590 "global_data.m"
  }
#line 590 "global_data.m"
}

#line 587 "global_data.m"
static void MR_CALL 
ll_backend__global_data__get_static_cells_3_p_0_1(
#line 587 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 587 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 587 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 587 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_3,
#line 587 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_4)
#line 587 "global_data.m"
{
#line 587 "global_data.m"
  {
#line 587 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 587 "global_data.m"
    MR_Word ll_backend__global_data__conv0_STATE_VARIABLE_Arrays_14;

#line 587 "global_data.m"
    {
#line 587 "global_data.m"
      ll_backend__global_data__add_scalar_static_cell_for_type_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Word) ll_backend__global_data__wrapper_arg_2), ((MR_Word) ll_backend__global_data__wrapper_arg_3), &ll_backend__global_data__conv0_STATE_VARIABLE_Arrays_14);
    }
#line 587 "global_data.m"
    *ll_backend__global_data__wrapper_arg_4 = ((MR_Box) (ll_backend__global_data__conv0_STATE_VARIABLE_Arrays_14));
#line 587 "global_data.m"
  }
#line 587 "global_data.m"
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
#line 585 "global_data.m"
  {
#line 585 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 585 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_32_32;
#line 585 "global_data.m"
    MR_Word ll_backend__global_data__TypeNumMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_4, (MR_Integer) 2)));
#line 585 "global_data.m"
    MR_Word ll_backend__global_data__RevScalarDatas_8;
#line 585 "global_data.m"
    MR_Word ll_backend__global_data__RevVectorDatas_9;
#line 585 "global_data.m"
    MR_Word ll_backend__global_data__V_10_10;
#line 585 "global_data.m"
    MR_Word ll_backend__global_data__V_13_13;
#line 585 "global_data.m"
    MR_Word ll_backend__global_data__V_14_14;
#line 585 "global_data.m"
    MR_Word ll_backend__global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_4, (MR_Integer) 3)));
#line 586 "global_data.m"
    MR_Word ll_backend__global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_4, (MR_Integer) 0)));
#line 586 "global_data.m"
    MR_Word ll_backend__global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_4, (MR_Integer) 1)));
#line 586 "global_data.m"
    MR_Word ll_backend__global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_4, (MR_Integer) 4)));
#line 587 "global_data.m"
    MR_Box ll_backend__global_data__conv1_RevScalarDatas_8;
#line 590 "global_data.m"
    MR_Word ll_backend__global_data__V_24_24;
#line 590 "global_data.m"
    MR_Word ll_backend__global_data__V_25_25;
#line 590 "global_data.m"
    MR_Word ll_backend__global_data__V_26_26;
#line 590 "global_data.m"
    MR_Word ll_backend__global_data__V_27_27;
#line 590 "global_data.m"
    MR_Box ll_backend__global_data__conv3_RevVectorDatas_9;

#line 587 "global_data.m"
    {
#line 587 "global_data.m"
      ll_backend__global_data__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 587 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_10_10, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_5[1]));
#line 587 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_10_10, 1) = ((MR_Box) (ll_backend__global_data__get_static_cells_3_p_0_1));
#line 587 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_10_10, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 587 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_10_10, 3) = ((MR_Box) (ll_backend__global_data__TypeNumMap_7));
#line 587 "global_data.m"
    }
#line 12632 "ll_backend.global_data.c"
    ll_backend__global_data__TypeCtorInfo_32_32 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;
#line 587 "global_data.m"
    {
#line 587 "global_data.m"
      mercury__map__foldl_4_p_0(ll_backend__global_data__TypeCtorInfo_32_32, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0, (MR_Word) &ll_backend__global_data_scalar_common_2[1], ll_backend__global_data__V_10_10, ll_backend__global_data__V_18_18, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ll_backend__global_data__conv1_RevScalarDatas_8);
    }
#line 587 "global_data.m"
    ll_backend__global_data__RevScalarDatas_8 = ((MR_Word) ll_backend__global_data__conv1_RevScalarDatas_8);
#line 589 "global_data.m"
    {
#line 589 "global_data.m"
      mercury__list__reverse_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_scalar_common_data_array_0, ll_backend__global_data__RevScalarDatas_8, ll_backend__global_data__ScalarDatas_5);
    }
#line 590 "global_data.m"
    {
#line 590 "global_data.m"
      ll_backend__global_data__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 590 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_13_13, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_5[2]));
#line 590 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_13_13, 1) = ((MR_Box) (ll_backend__global_data__get_static_cells_3_p_0_2));
#line 590 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_13_13, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 590 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_13_13, 3) = ((MR_Box) (ll_backend__global_data__TypeNumMap_7));
#line 590 "global_data.m"
    }
#line 590 "global_data.m"
    ll_backend__global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_4, (MR_Integer) 0)));
#line 590 "global_data.m"
    ll_backend__global_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_4, (MR_Integer) 1)));
#line 590 "global_data.m"
    ll_backend__global_data__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_4, (MR_Integer) 2)));
#line 590 "global_data.m"
    ll_backend__global_data__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_4, (MR_Integer) 3)));
#line 590 "global_data.m"
    ll_backend__global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_4, (MR_Integer) 4)));
#line 590 "global_data.m"
    {
#line 590 "global_data.m"
      mercury__map__foldl_4_p_0(ll_backend__global_data__TypeCtorInfo_32_32, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0, (MR_Word) &ll_backend__global_data_scalar_common_2[2], ll_backend__global_data__V_13_13, ll_backend__global_data__V_14_14, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &ll_backend__global_data__conv3_RevVectorDatas_9);
    }
#line 590 "global_data.m"
    ll_backend__global_data__RevVectorDatas_9 = ((MR_Word) ll_backend__global_data__conv3_RevVectorDatas_9);
#line 592 "global_data.m"
    {
#line 592 "global_data.m"
      mercury__list__reverse_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_vector_common_data_array_0, ll_backend__global_data__RevVectorDatas_9, ll_backend__global_data__VectorDatas_6);
#line 592 "global_data.m"
      return;
    }
#line 585 "global_data.m"
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
#line 464 "global_data.m"
  {
#line 464 "global_data.m"
    MR_bool ll_backend__global_data__succeeded = ((MR_tag((MR_Word) ll_backend__global_data__DataId_6)) == (MR_mktag((MR_Integer) 2)));
#line 464 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_21_21;
#line 464 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_22_22;
#line 464 "global_data.m"
    MR_Word ll_backend__global_data__TypeInfo_23_23;
#line 464 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_24_24;
#line 464 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_25_25;
#line 464 "global_data.m"
    MR_Word ll_backend__global_data__TypeNum_9;
#line 464 "global_data.m"
    MR_Word ll_backend__global_data__CellGroupMap_11;
#line 464 "global_data.m"
    MR_Word ll_backend__global_data__CellGroup_12;
#line 464 "global_data.m"
    MR_Word ll_backend__global_data__CellGroupMembers_13;
#line 464 "global_data.m"
    MR_Word ll_backend__global_data__Rvals_14;
#line 465 "global_data.m"
    MR_Integer ll_backend__global_data___CellNum_10;
#line 466 "global_data.m"
    MR_Word ll_backend__global_data__V_15_15;
#line 466 "global_data.m"
    MR_Word ll_backend__global_data__V_16_16;
#line 466 "global_data.m"
    MR_Word ll_backend__global_data__V_17_17;
#line 466 "global_data.m"
    MR_Word ll_backend__global_data__V_18_18;
#line 467 "global_data.m"
    MR_Box ll_backend__global_data__conv0_CellGroup_12;
#line 468 "global_data.m"
    MR_Word ll_backend__global_data__V_19_19;
#line 468 "global_data.m"
    MR_Word ll_backend__global_data__V_20_20;
#line 469 "global_data.m"
    MR_Box ll_backend__global_data__conv1_Rvals_14;
#line 470 "global_data.m"
    MR_Box ll_backend__global_data__conv2_Rval_8;

#line 465 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 465 "global_data.m"
      {
#line 465 "global_data.m"
        ll_backend__global_data__TypeNum_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__global_data__DataId_6, (MR_Integer) 0)));
#line 465 "global_data.m"
        ll_backend__global_data___CellNum_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__global_data__DataId_6, (MR_Integer) 1)));
#line 466 "global_data.m"
        ll_backend__global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_5, (MR_Integer) 0)));
#line 466 "global_data.m"
        ll_backend__global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_5, (MR_Integer) 1)));
#line 466 "global_data.m"
        ll_backend__global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_5, (MR_Integer) 2)));
#line 466 "global_data.m"
        ll_backend__global_data__CellGroupMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_5, (MR_Integer) 3)));
#line 466 "global_data.m"
        ll_backend__global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__Info_5, (MR_Integer) 4)));
#line 12765 "ll_backend.global_data.c"
        ll_backend__global_data__TypeCtorInfo_21_21 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;
#line 12767 "ll_backend.global_data.c"
        ll_backend__global_data__TypeCtorInfo_22_22 = (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0;
#line 467 "global_data.m"
        {
#line 467 "global_data.m"
          mercury__map__lookup_3_p_0(ll_backend__global_data__TypeCtorInfo_21_21, ll_backend__global_data__TypeCtorInfo_22_22, ll_backend__global_data__CellGroupMap_11, ((MR_Box) (ll_backend__global_data__TypeNum_9)), &ll_backend__global_data__conv0_CellGroup_12);
        }
#line 467 "global_data.m"
        ll_backend__global_data__CellGroup_12 = ((MR_Word) ll_backend__global_data__conv0_CellGroup_12);
#line 468 "global_data.m"
        ll_backend__global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__CellGroup_12, (MR_Integer) 0)));
#line 468 "global_data.m"
        ll_backend__global_data__CellGroupMembers_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__CellGroup_12, (MR_Integer) 1)));
#line 468 "global_data.m"
        ll_backend__global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__CellGroup_12, (MR_Integer) 2)));
#line 12782 "ll_backend.global_data.c"
        ll_backend__global_data__TypeInfo_23_23 = (MR_Word) &ll_backend__global_data_scalar_common_2[0];
#line 12784 "ll_backend.global_data.c"
        ll_backend__global_data__TypeCtorInfo_24_24 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0;
#line 469 "global_data.m"
        {
#line 469 "global_data.m"
          mercury__bimap__reverse_lookup_3_p_0(ll_backend__global_data__TypeInfo_23_23, ll_backend__global_data__TypeCtorInfo_24_24, ll_backend__global_data__CellGroupMembers_13, &ll_backend__global_data__conv1_Rvals_14, ((MR_Box) (ll_backend__global_data__DataId_6)));
        }
#line 469 "global_data.m"
        ll_backend__global_data__Rvals_14 = ((MR_Word) ll_backend__global_data__conv1_Rvals_14);
#line 12793 "ll_backend.global_data.c"
        ll_backend__global_data__TypeCtorInfo_25_25 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
#line 470 "global_data.m"
        {
#line 470 "global_data.m"
          mercury__list__det_index0_3_p_0(ll_backend__global_data__TypeCtorInfo_25_25, ll_backend__global_data__Rvals_14, ll_backend__global_data__Offset_7, &ll_backend__global_data__conv2_Rval_8);
        }
#line 470 "global_data.m"
        *ll_backend__global_data__Rval_8 = ((MR_Word) ll_backend__global_data__conv2_Rval_8);
#line 470 "global_data.m"
        ll_backend__global_data__succeeded = MR_TRUE;
#line 465 "global_data.m"
      }
#line 464 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 464 "global_data.m"
  }
#line 106 "global_data.m"
}

#line 540 "global_data.m"
static MR_Box MR_CALL 
ll_backend__global_data__add_vector_static_cell_5_p_0_3(
#line 540 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 540 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1)
#line 540 "global_data.m"
{
#line 540 "global_data.m"
  {
#line 540 "global_data.m"
    MR_Box ll_backend__global_data__wrapper_arg_2;
#line 540 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 540 "global_data.m"
    MR_Word ll_backend__global_data__conv0_HeadVar__3_3;

#line 540 "global_data.m"
    {
#line 540 "global_data.m"
      ll_backend__global_data__conv0_HeadVar__3_3 = ll_backend__global_data__pair_vector_element_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) ll_backend__global_data__wrapper_arg_1));
    }
#line 540 "global_data.m"
    ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__3_3));
#line 540 "global_data.m"
    return ll_backend__global_data__wrapper_arg_2;
#line 540 "global_data.m"
  }
#line 540 "global_data.m"
}

#line 532 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data__add_vector_static_cell_5_p_0_2(
#line 532 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg)
#line 532 "global_data.m"
{
#line 532 "global_data.m"
  {
#line 532 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 532 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;

#line 532 "global_data.m"
    {
#line 532 "global_data.m"
      return ll_backend__global_data__succeeded = ll_backend__global_data__IntroducedFrom__pred__add_vector_static_cell__532__1_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))));
    }
#line 532 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 532 "global_data.m"
  }
#line 532 "global_data.m"
}

#line 531 "global_data.m"
static MR_bool MR_CALL 
ll_backend__global_data__add_vector_static_cell_5_p_0_1(
#line 531 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg)
#line 531 "global_data.m"
{
#line 531 "global_data.m"
  {
#line 531 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 531 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;

#line 531 "global_data.m"
    {
#line 531 "global_data.m"
      return ll_backend__global_data__succeeded = ll_backend__global_data__IntroducedFrom__pred__add_vector_static_cell__531__1_1_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))));
    }
#line 531 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 531 "global_data.m"
  }
#line 531 "global_data.m"
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
#line 530 "global_data.m"
  {
#line 530 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 530 "global_data.m"
    MR_Word ll_backend__global_data__CellType_10;
#line 530 "global_data.m"
    MR_Word ll_backend__global_data__VectorCells_11;
#line 530 "global_data.m"
    MR_Word ll_backend__global_data__TypeNumMap0_13;
#line 530 "global_data.m"
    MR_Word ll_backend__global_data__CellGroupMap0_14;
#line 530 "global_data.m"
    MR_Word ll_backend__global_data__TypeNum_16;
#line 530 "global_data.m"
    MR_Word ll_backend__global_data__CellNumCounter0_21;
#line 530 "global_data.m"
    MR_Integer ll_backend__global_data__CellNum_22;
#line 530 "global_data.m"
    MR_Word ll_backend__global_data__CellNumCounter_23;
#line 530 "global_data.m"
    MR_Word ll_backend__global_data__CellMap0_24;
#line 530 "global_data.m"
    MR_Word ll_backend__global_data__VectorContents_25;
#line 530 "global_data.m"
    MR_Word ll_backend__global_data__CellMap_26;
#line 530 "global_data.m"
    MR_Word ll_backend__global_data__CellGroupMap_27;
#line 530 "global_data.m"
    MR_Word ll_backend__global_data__V_30_30;
#line 530 "global_data.m"
    MR_Word ll_backend__global_data__V_34_34;
#line 530 "global_data.m"
    MR_Word ll_backend__global_data__V_38_38;
#line 530 "global_data.m"
    MR_Word ll_backend__global_data__STATE_VARIABLE_CellGroup_40_40;
#line 530 "global_data.m"
    MR_Word ll_backend__global_data__STATE_VARIABLE_Info_42_42;
#line 530 "global_data.m"
    MR_Word ll_backend__global_data__STATE_VARIABLE_CellGroup_44_44;
#line 530 "global_data.m"
    MR_Word ll_backend__global_data__STATE_VARIABLE_CellGroup_45_45;
#line 542 "global_data.m"
    MR_Word ll_backend__global_data__V_47_47;
#line 542 "global_data.m"
    MR_Word ll_backend__global_data__V_48_48;
#line 542 "global_data.m"
    MR_Word ll_backend__global_data__V_49_49;
#line 551 "global_data.m"
    MR_Word ll_backend__global_data__TypeNumPrime_15;
#line 544 "global_data.m"
    MR_Box ll_backend__global_data__conv1_TypeNumPrime_15;
#line 562 "global_data.m"
    MR_Word ll_backend__global_data__V_69_69;
#line 564 "global_data.m"
    MR_Word ll_backend__global_data__V_70_70;
#line 569 "global_data.m"
    MR_Word ll_backend__global_data__V_73_73;
#line 569 "global_data.m"
    MR_Word ll_backend__global_data__V_74_74;
#line 571 "global_data.m"
    MR_Word ll_backend__global_data__V_75_75;
#line 571 "global_data.m"
    MR_Word ll_backend__global_data__V_76_76;
#line 571 "global_data.m"
    MR_Word ll_backend__global_data__V_77_77;
#line 571 "global_data.m"
    MR_Word ll_backend__global_data__V_78_78;
#line 571 "global_data.m"
    MR_Word ll_backend__global_data__V_79_79;

#line 531 "global_data.m"
    {
#line 531 "global_data.m"
      ll_backend__global_data__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 531 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_30_30, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_6[0]));
#line 531 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_30_30, 1) = ((MR_Box) (ll_backend__global_data__add_vector_static_cell_5_p_0_1));
#line 531 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 531 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_30_30, 3) = ((MR_Box) (ll_backend__global_data__LLDSTypes_6));
#line 531 "global_data.m"
    }
#line 531 "global_data.m"
    {
#line 531 "global_data.m"
      mercury__require__expect_4_p_0(ll_backend__global_data__V_30_30, (MR_String) "ll_backend.global_data", (MR_String) "predicate \140ll_backend.global_data.add_vector_static_cell\'/5", (MR_String) "no types");
    }
#line 532 "global_data.m"
    {
#line 532 "global_data.m"
      ll_backend__global_data__V_34_34 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 532 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_34_34, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_6[1]));
#line 532 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_34_34, 1) = ((MR_Box) (ll_backend__global_data__add_vector_static_cell_5_p_0_2));
#line 532 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_34_34, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 532 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_34_34, 3) = ((MR_Box) (ll_backend__global_data__VectorData_7));
#line 532 "global_data.m"
    }
#line 532 "global_data.m"
    {
#line 532 "global_data.m"
      mercury__require__expect_4_p_0(ll_backend__global_data__V_34_34, (MR_String) "ll_backend.global_data", (MR_String) "predicate \140ll_backend.global_data.add_vector_static_cell\'/5", (MR_String) "no data");
    }
#line 539 "global_data.m"
    {
#line 539 "global_data.m"
      ll_backend__global_data__CellType_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 539 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__CellType_10, 0) = ((MR_Box) (ll_backend__global_data__LLDSTypes_6));
#line 539 "global_data.m"
    }
#line 540 "global_data.m"
    {
#line 540 "global_data.m"
      ll_backend__global_data__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 540 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_38_38, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_7[0]));
#line 540 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_38_38, 1) = ((MR_Box) (ll_backend__global_data__add_vector_static_cell_5_p_0_3));
#line 540 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_38_38, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 540 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_38_38, 3) = ((MR_Box) (ll_backend__global_data__LLDSTypes_6));
#line 540 "global_data.m"
    }
#line 540 "global_data.m"
    {
#line 540 "global_data.m"
      ll_backend__global_data__VectorCells_11 = mercury__list__map_2_f_0((MR_Word) &ll_backend__global_data_scalar_common_2[0], (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_value_0, ll_backend__global_data__V_38_38, ll_backend__global_data__VectorData_7);
    }
#line 542 "global_data.m"
    ll_backend__global_data__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 0)));
#line 542 "global_data.m"
    ll_backend__global_data__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 1)));
#line 542 "global_data.m"
    ll_backend__global_data__TypeNumMap0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 2)));
#line 542 "global_data.m"
    ll_backend__global_data__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 3)));
#line 542 "global_data.m"
    ll_backend__global_data__CellGroupMap0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 4)));
#line 544 "global_data.m"
    {
#line 544 "global_data.m"
      ll_backend__global_data__succeeded = mercury__bimap__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, ll_backend__global_data__TypeNumMap0_13, ((MR_Box) (ll_backend__global_data__CellType_10)), &ll_backend__global_data__conv1_TypeNumPrime_15);
    }
#line 544 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 544 "global_data.m"
      {
#line 544 "global_data.m"
        ll_backend__global_data__TypeNumPrime_15 = ((MR_Word) ll_backend__global_data__conv1_TypeNumPrime_15);
#line 544 "global_data.m"
        ll_backend__global_data__succeeded = MR_TRUE;
#line 544 "global_data.m"
      }
#line 551 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 545 "global_data.m"
      {
#line 548 "global_data.m"
        MR_Word ll_backend__global_data__STATE_VARIABLE_CellGroup_39_39;
#line 546 "global_data.m"
        MR_Box ll_backend__global_data__conv2_STATE_VARIABLE_CellGroup_39_39;

#line 545 "global_data.m"
        ll_backend__global_data__TypeNum_16 = ll_backend__global_data__TypeNumPrime_15;
#line 546 "global_data.m"
        {
#line 546 "global_data.m"
          ll_backend__global_data__succeeded = mercury__map__search_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0, ll_backend__global_data__CellGroupMap0_14, ((MR_Box) (ll_backend__global_data__TypeNum_16)), &ll_backend__global_data__conv2_STATE_VARIABLE_CellGroup_39_39);
        }
#line 546 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 546 "global_data.m"
          {
#line 546 "global_data.m"
            ll_backend__global_data__STATE_VARIABLE_CellGroup_39_39 = ((MR_Word) ll_backend__global_data__conv2_STATE_VARIABLE_CellGroup_39_39);
#line 546 "global_data.m"
            ll_backend__global_data__succeeded = MR_TRUE;
#line 546 "global_data.m"
          }
#line 548 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 548 "global_data.m"
          ll_backend__global_data__STATE_VARIABLE_CellGroup_40_40 = ll_backend__global_data__STATE_VARIABLE_CellGroup_39_39;
#line 548 "global_data.m"
        else
#line 549 "global_data.m"
          {
#line 549 "global_data.m"
            ll_backend__global_data__STATE_VARIABLE_CellGroup_40_40 = ll_backend__global_data__init_vector_cell_group_0_f_0();
          }
#line 545 "global_data.m"
        ll_backend__global_data__STATE_VARIABLE_Info_42_42 = ll_backend__global_data__STATE_VARIABLE_Info_0_28;
#line 545 "global_data.m"
      }
#line 551 "global_data.m"
    else
#line 552 "global_data.m"
      {
#line 552 "global_data.m"
        MR_Word ll_backend__global_data__TypeNumCounter0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 1)));
#line 552 "global_data.m"
        MR_Integer ll_backend__global_data__TypeNum0_18;
#line 552 "global_data.m"
        MR_Word ll_backend__global_data__TypeNumCounter_19;
#line 552 "global_data.m"
        MR_Word ll_backend__global_data__TypeNumMap_20;
#line 552 "global_data.m"
        MR_Word ll_backend__global_data__STATE_VARIABLE_Info_41_41;
#line 552 "global_data.m"
        MR_Word ll_backend__global_data__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 0)));
#line 552 "global_data.m"
        MR_Word ll_backend__global_data__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 2)));
#line 552 "global_data.m"
        MR_Word ll_backend__global_data__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 3)));
#line 552 "global_data.m"
        MR_Word ll_backend__global_data__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 4)));
#line 555 "global_data.m"
        MR_Word ll_backend__global_data__V_59_59;
#line 555 "global_data.m"
        MR_Word ll_backend__global_data__V_61_61;
#line 555 "global_data.m"
        MR_Word ll_backend__global_data__V_62_62;
#line 555 "global_data.m"
        MR_Word ll_backend__global_data__V_63_63;
#line 555 "global_data.m"
        MR_Word ll_backend__global_data__V_60_60;
#line 558 "global_data.m"
        MR_Word ll_backend__global_data__V_64_64;
#line 558 "global_data.m"
        MR_Word ll_backend__global_data__V_65_65;
#line 558 "global_data.m"
        MR_Word ll_backend__global_data__V_67_67;
#line 558 "global_data.m"
        MR_Word ll_backend__global_data__V_68_68;
#line 558 "global_data.m"
        MR_Word ll_backend__global_data__V_66_66;

#line 553 "global_data.m"
        {
#line 553 "global_data.m"
          mercury__counter__allocate_3_p_0(&ll_backend__global_data__TypeNum0_18, ll_backend__global_data__TypeNumCounter0_17, &ll_backend__global_data__TypeNumCounter_19);
        }
#line 554 "global_data.m"
        ll_backend__global_data__TypeNum_16 = (MR_Word) ll_backend__global_data__TypeNum0_18;
#line 555 "global_data.m"
        ll_backend__global_data__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 0)));
#line 555 "global_data.m"
        ll_backend__global_data__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 1)));
#line 555 "global_data.m"
        ll_backend__global_data__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 2)));
#line 555 "global_data.m"
        ll_backend__global_data__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 3)));
#line 555 "global_data.m"
        ll_backend__global_data__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_28, (MR_Integer) 4)));
#line 555 "global_data.m"
        {
#line 555 "global_data.m"
          ll_backend__global_data__STATE_VARIABLE_Info_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 555 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_41_41, 0) = ((MR_Box) (ll_backend__global_data__V_59_59));
#line 555 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_41_41, 1) = ((MR_Box) (ll_backend__global_data__TypeNumCounter_19));
#line 555 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_41_41, 2) = ((MR_Box) (ll_backend__global_data__V_61_61));
#line 555 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_41_41, 3) = ((MR_Box) (ll_backend__global_data__V_62_62));
#line 555 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_41_41, 4) = ((MR_Box) (ll_backend__global_data__V_63_63));
#line 555 "global_data.m"
        }
#line 557 "global_data.m"
        {
#line 557 "global_data.m"
          mercury__bimap__det_insert_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, ((MR_Box) (ll_backend__global_data__CellType_10)), ((MR_Box) (ll_backend__global_data__TypeNum_16)), ll_backend__global_data__TypeNumMap0_13, &ll_backend__global_data__TypeNumMap_20);
        }
#line 558 "global_data.m"
        ll_backend__global_data__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_41_41, (MR_Integer) 0)));
#line 558 "global_data.m"
        ll_backend__global_data__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_41_41, (MR_Integer) 1)));
#line 558 "global_data.m"
        ll_backend__global_data__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_41_41, (MR_Integer) 2)));
#line 558 "global_data.m"
        ll_backend__global_data__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_41_41, (MR_Integer) 3)));
#line 558 "global_data.m"
        ll_backend__global_data__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_41_41, (MR_Integer) 4)));
#line 558 "global_data.m"
        {
#line 558 "global_data.m"
          ll_backend__global_data__STATE_VARIABLE_Info_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 558 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_42_42, 0) = ((MR_Box) (ll_backend__global_data__V_64_64));
#line 558 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_42_42, 1) = ((MR_Box) (ll_backend__global_data__V_65_65));
#line 558 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_42_42, 2) = ((MR_Box) (ll_backend__global_data__TypeNumMap_20));
#line 558 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_42_42, 3) = ((MR_Box) (ll_backend__global_data__V_67_67));
#line 558 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_42_42, 4) = ((MR_Box) (ll_backend__global_data__V_68_68));
#line 558 "global_data.m"
        }
#line 560 "global_data.m"
        {
#line 560 "global_data.m"
          ll_backend__global_data__STATE_VARIABLE_CellGroup_40_40 = ll_backend__global_data__init_vector_cell_group_0_f_0();
        }
#line 552 "global_data.m"
      }
#line 562 "global_data.m"
    ll_backend__global_data__CellNumCounter0_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_40_40, (MR_Integer) 0)));
#line 562 "global_data.m"
    ll_backend__global_data__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_40_40, (MR_Integer) 1)));
#line 563 "global_data.m"
    {
#line 563 "global_data.m"
      mercury__counter__allocate_3_p_0(&ll_backend__global_data__CellNum_22, ll_backend__global_data__CellNumCounter0_21, &ll_backend__global_data__CellNumCounter_23);
    }
#line 564 "global_data.m"
    ll_backend__global_data__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_40_40, (MR_Integer) 0)));
#line 564 "global_data.m"
    ll_backend__global_data__CellMap0_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_40_40, (MR_Integer) 1)));
#line 564 "global_data.m"
    {
#line 564 "global_data.m"
      ll_backend__global_data__STATE_VARIABLE_CellGroup_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 564 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_44_44, 0) = ((MR_Box) (ll_backend__global_data__CellNumCounter_23));
#line 564 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_44_44, 1) = ((MR_Box) (ll_backend__global_data__CellMap0_24));
#line 564 "global_data.m"
    }
#line 565 "global_data.m"
    {
#line 565 "global_data.m"
      MR_Word base;
#line 565 "global_data.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 565 "global_data.m"
      *ll_backend__global_data__DataId_8 = base;
#line 565 "global_data.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 565 "global_data.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__global_data__TypeNum_16));
#line 565 "global_data.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__global_data__CellNum_22));
#line 565 "global_data.m"
    }
#line 567 "global_data.m"
    ll_backend__global_data__VectorContents_25 = (MR_Word) ll_backend__global_data__VectorCells_11;
#line 568 "global_data.m"
    {
#line 568 "global_data.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0((MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_contents_0, ll_backend__global_data__CellNum_22, ((MR_Box) (ll_backend__global_data__VectorContents_25)), ll_backend__global_data__CellMap0_24, &ll_backend__global_data__CellMap_26);
    }
#line 569 "global_data.m"
    ll_backend__global_data__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_44_44, (MR_Integer) 0)));
#line 569 "global_data.m"
    ll_backend__global_data__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_44_44, (MR_Integer) 1)));
#line 569 "global_data.m"
    {
#line 569 "global_data.m"
      ll_backend__global_data__STATE_VARIABLE_CellGroup_45_45 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 569 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_45_45, 0) = ((MR_Box) (ll_backend__global_data__V_73_73));
#line 569 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_CellGroup_45_45, 1) = ((MR_Box) (ll_backend__global_data__CellMap_26));
#line 569 "global_data.m"
    }
#line 570 "global_data.m"
    {
#line 570 "global_data.m"
      mercury__map__set_4_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0, ((MR_Box) (ll_backend__global_data__TypeNum_16)), ((MR_Box) (ll_backend__global_data__STATE_VARIABLE_CellGroup_45_45)), ll_backend__global_data__CellGroupMap0_14, &ll_backend__global_data__CellGroupMap_27);
    }
#line 571 "global_data.m"
    ll_backend__global_data__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_42_42, (MR_Integer) 0)));
#line 571 "global_data.m"
    ll_backend__global_data__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_42_42, (MR_Integer) 1)));
#line 571 "global_data.m"
    ll_backend__global_data__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_42_42, (MR_Integer) 2)));
#line 571 "global_data.m"
    ll_backend__global_data__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_42_42, (MR_Integer) 3)));
#line 571 "global_data.m"
    ll_backend__global_data__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_42_42, (MR_Integer) 4)));
#line 571 "global_data.m"
    {
#line 571 "global_data.m"
      MR_Word base;
#line 571 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 571 "global_data.m"
      *ll_backend__global_data__STATE_VARIABLE_Info_29 = base;
#line 571 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__V_75_75));
#line 571 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__V_76_76));
#line 571 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__V_77_77));
#line 571 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__V_78_78));
#line 571 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__CellGroupMap_27));
#line 571 "global_data.m"
    }
#line 530 "global_data.m"
  }
#line 102 "global_data.m"
}

#line 476 "global_data.m"
static void MR_CALL 
ll_backend__global_data__find_general_llds_types_4_p_0_1(
#line 476 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 476 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 476 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2)
#line 476 "global_data.m"
{
#line 476 "global_data.m"
  {
#line 476 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 476 "global_data.m"
    MR_Word ll_backend__global_data__conv0_Type_8;

#line 476 "global_data.m"
    {
#line 476 "global_data.m"
      ll_backend__global_data__natural_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv0_Type_8);
    }
#line 476 "global_data.m"
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv0_Type_8));
#line 476 "global_data.m"
  }
#line 476 "global_data.m"
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
#line 474 "global_data.m"
  {
#line 474 "global_data.m"
    MR_bool ll_backend__global_data__succeeded = ((MR_tag((MR_Word) ll_backend__global_data__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 474 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_15_15;
#line 474 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_16_16;
#line 474 "global_data.m"
    MR_Word ll_backend__global_data__Vector_7;
#line 474 "global_data.m"
    MR_Word ll_backend__global_data__Vectors_8;
#line 474 "global_data.m"
    MR_Word ll_backend__global_data__ArgWidth_10;
#line 474 "global_data.m"
    MR_Word ll_backend__global_data__LLDSTypes0_11;
#line 474 "global_data.m"
    MR_Word ll_backend__global_data__V_12_12;

#line 474 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 474 "global_data.m"
      {
#line 474 "global_data.m"
        ll_backend__global_data__Vector_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 0)));
#line 474 "global_data.m"
        ll_backend__global_data__Vectors_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__HeadVar__3_3, (MR_Integer) 1)));
#line 475 "global_data.m"
        ll_backend__global_data__ArgWidth_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 13400 "ll_backend.global_data.c"
        ll_backend__global_data__TypeCtorInfo_15_15 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
#line 13402 "ll_backend.global_data.c"
        ll_backend__global_data__TypeCtorInfo_16_16 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_llds_type_0;
#line 476 "global_data.m"
        {
#line 476 "global_data.m"
          ll_backend__global_data__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 476 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__V_12_12, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_4[1]));
#line 476 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__V_12_12, 1) = ((MR_Box) (ll_backend__global_data__find_general_llds_types_4_p_0_1));
#line 476 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 476 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__V_12_12, 3) = ((MR_Box) (ll_backend__global_data__UnboxFloat_5));
#line 476 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__V_12_12, 4) = ((MR_Box) (ll_backend__global_data__ArgWidth_10));
#line 476 "global_data.m"
        }
#line 476 "global_data.m"
        {
#line 476 "global_data.m"
          mercury__list__map_3_p_0(ll_backend__global_data__TypeCtorInfo_15_15, ll_backend__global_data__TypeCtorInfo_16_16, ll_backend__global_data__V_12_12, ll_backend__global_data__Vector_7, &ll_backend__global_data__LLDSTypes0_11);
        }
#line 477 "global_data.m"
        {
#line 477 "global_data.m"
          return ll_backend__global_data__succeeded = ll_backend__global_data__find_general_llds_types_2_5_p_0(ll_backend__global_data__UnboxFloat_5, ll_backend__global_data__Types_6, ll_backend__global_data__Vectors_8, ll_backend__global_data__LLDSTypes0_11, ll_backend__global_data__LLDSTypes_9);
        }
#line 474 "global_data.m"
      }
#line 474 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 474 "global_data.m"
  }
#line 99 "global_data.m"
}

#line 277 "global_data.m"
static void MR_CALL 
ll_backend__global_data__global_data_get_all_alloc_sites_3_p_0_1(
#line 277 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 277 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 277 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_2,
#line 277 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_3,
#line 277 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_4,
#line 277 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_5)
#line 277 "global_data.m"
{
#line 277 "global_data.m"
  {
#line 277 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 277 "global_data.m"
    MR_Integer ll_backend__global_data__conv1_HeadVar__3_3;
#line 277 "global_data.m"
    MR_Word ll_backend__global_data__conv0_STATE_VARIABLE_Map_12;

#line 277 "global_data.m"
    {
#line 277 "global_data.m"
      ll_backend__global_data__make_alloc_id_map_5_p_0(((MR_Word) ll_backend__global_data__wrapper_arg_1), ((MR_Integer) ll_backend__global_data__wrapper_arg_2), &ll_backend__global_data__conv1_HeadVar__3_3, ((MR_Word) ll_backend__global_data__wrapper_arg_4), &ll_backend__global_data__conv0_STATE_VARIABLE_Map_12);
    }
#line 277 "global_data.m"
    *ll_backend__global_data__wrapper_arg_3 = ((MR_Box) (ll_backend__global_data__conv1_HeadVar__3_3));
#line 277 "global_data.m"
    *ll_backend__global_data__wrapper_arg_5 = ((MR_Box) (ll_backend__global_data__conv0_STATE_VARIABLE_Map_12));
#line 277 "global_data.m"
  }
#line 277 "global_data.m"
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
#line 274 "global_data.m"
  {
#line 274 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 274 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_18_18 = (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0;
#line 274 "global_data.m"
    MR_Word ll_backend__global_data__AllocSitesSet_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 6)));
#line 274 "global_data.m"
    MR_Word ll_backend__global_data__V_11_11;
#line 275 "global_data.m"
    MR_Word ll_backend__global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 0)));
#line 275 "global_data.m"
    MR_Word ll_backend__global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 1)));
#line 275 "global_data.m"
    MR_Word ll_backend__global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 2)));
#line 275 "global_data.m"
    MR_Integer ll_backend__global_data__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 3)));
#line 275 "global_data.m"
    MR_Word ll_backend__global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 4)));
#line 275 "global_data.m"
    MR_Word ll_backend__global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 5)));
#line 277 "global_data.m"
    MR_Integer ll_backend__global_data___Slot_8;
#line 277 "global_data.m"
    MR_Box ll_backend__global_data__conv3__Slot_8;
#line 277 "global_data.m"
    MR_Box ll_backend__global_data__conv2_AllocIdMap_6;

#line 276 "global_data.m"
    {
#line 276 "global_data.m"
      *ll_backend__global_data__AllocSites_5 = mercury__set_tree234__to_sorted_list_1_f_0(ll_backend__global_data__TypeCtorInfo_18_18, ll_backend__global_data__AllocSitesSet_7);
    }
#line 277 "global_data.m"
    {
#line 277 "global_data.m"
      ll_backend__global_data__V_11_11 = mercury__map__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_alloc_site_id_0, (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0);
    }
#line 277 "global_data.m"
    {
#line 277 "global_data.m"
      mercury__list__foldl2_6_p_0(ll_backend__global_data__TypeCtorInfo_18_18, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__global_data_scalar_common_1[0], (MR_Word) &ll_backend__global_data_scalar_common_1[11], *ll_backend__global_data__AllocSites_5, ((MR_Box) ((MR_Integer) 0)), &ll_backend__global_data__conv3__Slot_8, ((MR_Box) (ll_backend__global_data__V_11_11)), &ll_backend__global_data__conv2_AllocIdMap_6);
    }
#line 277 "global_data.m"
    ll_backend__global_data___Slot_8 = ((MR_Integer) ll_backend__global_data__conv3__Slot_8);
#line 277 "global_data.m"
    *ll_backend__global_data__AllocIdMap_6 = ((MR_Word) ll_backend__global_data__conv2_AllocIdMap_6);
#line 274 "global_data.m"
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
#line 269 "global_data.m"
  {
#line 269 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 269 "global_data.m"
    MR_Word ll_backend__global_data__AllocSites0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
#line 269 "global_data.m"
    MR_Word ll_backend__global_data__AllocSites_7;
#line 270 "global_data.m"
    MR_Word ll_backend__global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
#line 270 "global_data.m"
    MR_Word ll_backend__global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
#line 270 "global_data.m"
    MR_Word ll_backend__global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
#line 270 "global_data.m"
    MR_Integer ll_backend__global_data__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
#line 270 "global_data.m"
    MR_Word ll_backend__global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
#line 270 "global_data.m"
    MR_Word ll_backend__global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
#line 272 "global_data.m"
    MR_Word ll_backend__global_data__V_17_17;
#line 272 "global_data.m"
    MR_Word ll_backend__global_data__V_18_18;
#line 272 "global_data.m"
    MR_Word ll_backend__global_data__V_19_19;
#line 272 "global_data.m"
    MR_Integer ll_backend__global_data__V_20_20;
#line 272 "global_data.m"
    MR_Word ll_backend__global_data__V_21_21;
#line 272 "global_data.m"
    MR_Word ll_backend__global_data__V_22_22;
#line 272 "global_data.m"
    MR_Word ll_backend__global_data__V_23_23;

#line 271 "global_data.m"
    {
#line 271 "global_data.m"
      mercury__set_tree234__union_3_p_0((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0, ll_backend__global_data__NewAllocSites_4, ll_backend__global_data__AllocSites0_6, &ll_backend__global_data__AllocSites_7);
    }
#line 272 "global_data.m"
    ll_backend__global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
#line 272 "global_data.m"
    ll_backend__global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
#line 272 "global_data.m"
    ll_backend__global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
#line 272 "global_data.m"
    ll_backend__global_data__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
#line 272 "global_data.m"
    ll_backend__global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
#line 272 "global_data.m"
    ll_backend__global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
#line 272 "global_data.m"
    ll_backend__global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
#line 272 "global_data.m"
    {
#line 272 "global_data.m"
      MR_Word base;
#line 272 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 272 "global_data.m"
      *ll_backend__global_data__STATE_VARIABLE_GlobalData_9 = base;
#line 272 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__V_17_17));
#line 272 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__V_18_18));
#line 272 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__V_19_19));
#line 272 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__V_20_20));
#line 272 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__V_21_21));
#line 272 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__global_data__V_22_22));
#line 272 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__global_data__AllocSites_7));
#line 272 "global_data.m"
    }
#line 269 "global_data.m"
  }
#line 92 "global_data.m"
}

#line 365 "global_data.m"
static void MR_CALL 
ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0_1(
#line 365 "global_data.m"
  MR_Box ll_backend__global_data__closure_arg,
#line 365 "global_data.m"
  MR_Box ll_backend__global_data__wrapper_arg_1,
#line 365 "global_data.m"
  MR_Box * ll_backend__global_data__wrapper_arg_2)
#line 365 "global_data.m"
{
#line 365 "global_data.m"
  {
#line 365 "global_data.m"
    MR_Box ll_backend__global_data__closure = ll_backend__global_data__closure_arg;
#line 365 "global_data.m"
    MR_Word ll_backend__global_data__conv0_HeadVar__4_4;

#line 365 "global_data.m"
    {
#line 365 "global_data.m"
      ll_backend__global_data__associate_natural_type_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__global_data__wrapper_arg_1), &ll_backend__global_data__conv0_HeadVar__4_4);
    }
#line 365 "global_data.m"
    *ll_backend__global_data__wrapper_arg_2 = ((MR_Box) (ll_backend__global_data__conv0_HeadVar__4_4));
#line 365 "global_data.m"
  }
#line 365 "global_data.m"
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
#line 362 "global_data.m"
  {
#line 362 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 362 "global_data.m"
    MR_Word ll_backend__global_data__UnboxFloat_8;
#line 362 "global_data.m"
    MR_Word ll_backend__global_data__TypedArgs_10;
#line 362 "global_data.m"
    MR_Word ll_backend__global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_11, (MR_Integer) 0)));
#line 362 "global_data.m"
    MR_Word ll_backend__global_data__V_14_14;
#line 363 "global_data.m"
    MR_Word ll_backend__global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_11, (MR_Integer) 1)));
#line 363 "global_data.m"
    MR_Word ll_backend__global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_11, (MR_Integer) 2)));
#line 363 "global_data.m"
    MR_Word ll_backend__global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_11, (MR_Integer) 3)));
#line 363 "global_data.m"
    MR_Word ll_backend__global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_Info_0_11, (MR_Integer) 4)));
#line 363 "global_data.m"
    MR_Word ll_backend__global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_13_13, (MR_Integer) 0)));
#line 363 "global_data.m"
    MR_Word ll_backend__global_data__V_21_21;

#line 363 "global_data.m"
    ll_backend__global_data__UnboxFloat_8 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_13_13, (MR_Integer) 1)))) & (MR_Integer) 1);
#line 363 "global_data.m"
    ll_backend__global_data__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_13_13, (MR_Integer) 1)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 365 "global_data.m"
    {
#line 365 "global_data.m"
      ll_backend__global_data__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 365 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_14_14, 0) = ((MR_Box) (&ll_backend__global_data_scalar_common_4[0]));
#line 365 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_14_14, 1) = ((MR_Box) (ll_backend__global_data__add_scalar_static_cell_natural_types_4_p_0_1));
#line 365 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 365 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_14_14, 3) = ((MR_Box) (ll_backend__global_data__UnboxFloat_8));
#line 365 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__V_14_14, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 365 "global_data.m"
    }
#line 365 "global_data.m"
    {
#line 365 "global_data.m"
      mercury__list__map_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0, ll_backend__global_data__V_14_14, ll_backend__global_data__Args_5, &ll_backend__global_data__TypedArgs_10);
    }
#line 366 "global_data.m"
    {
#line 366 "global_data.m"
      ll_backend__global_data__add_scalar_static_cell_4_p_0(ll_backend__global_data__TypedArgs_10, ll_backend__global_data__DataId_6, ll_backend__global_data__STATE_VARIABLE_Info_0_11, ll_backend__global_data__STATE_VARIABLE_Info_12);
#line 366 "global_data.m"
      return;
    }
#line 362 "global_data.m"
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
#line 368 "global_data.m"
  {
#line 368 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 368 "global_data.m"
    MR_Word ll_backend__global_data__TypedArgs_8;
#line 368 "global_data.m"
    MR_Word ll_backend__global_data__CellType_11;
#line 368 "global_data.m"
    MR_Word ll_backend__global_data__CellTypeAndValue_12;
#line 644 "global_data.m"
    MR_Word ll_backend__global_data__TypeGroups_28;
#line 644 "global_data.m"
    MR_Word ll_backend__global_data__TypeAndArgGroups_29;
#line 635 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_20_38;
#line 635 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_21_39;
#line 635 "global_data.m"
    MR_Word ll_backend__global_data__FirstArg_25;
#line 635 "global_data.m"
    MR_Word ll_backend__global_data__FirstArgType_26;
#line 635 "global_data.m"
    MR_Word ll_backend__global_data__LaterTypedArgs_27;
#line 635 "global_data.m"
    MR_Integer ll_backend__global_data__OldLength_30;
#line 635 "global_data.m"
    MR_Integer ll_backend__global_data__NewLength_31;
#line 635 "global_data.m"
    MR_Word ll_backend__global_data__V_32_32;
#line 635 "global_data.m"
    MR_Word ll_backend__global_data__V_33_33;
#line 635 "global_data.m"
    MR_Word ll_backend__global_data__V_34_34;
#line 635 "global_data.m"
    MR_Integer ll_backend__global_data__V_35_35;
#line 635 "global_data.m"
    MR_Integer ll_backend__global_data__V_36_36;

#line 374 "global_data.m"
    if ((ll_backend__global_data__TypedArgs0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 373 "global_data.m"
      ll_backend__global_data__TypedArgs_8 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__global_data_scalar_common_2[10]);
#line 374 "global_data.m"
    else
#line 376 "global_data.m"
      ll_backend__global_data__TypedArgs_8 = ll_backend__global_data__TypedArgs0_5;
#line 635 "global_data.m"
    ll_backend__global_data__succeeded = ((MR_tag((MR_Word) ll_backend__global_data__TypedArgs_8)) == (MR_mktag((MR_Integer) 1)));
#line 635 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 635 "global_data.m"
      {
#line 635 "global_data.m"
        ll_backend__global_data__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__TypedArgs_8, (MR_Integer) 0)));
#line 635 "global_data.m"
        ll_backend__global_data__LaterTypedArgs_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__global_data__TypedArgs_8, (MR_Integer) 1)));
#line 635 "global_data.m"
        ll_backend__global_data__FirstArg_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_32_32, (MR_Integer) 0)));
#line 635 "global_data.m"
        ll_backend__global_data__FirstArgType_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__V_32_32, (MR_Integer) 1)));
#line 636 "global_data.m"
        ll_backend__global_data__V_34_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 636 "global_data.m"
        {
#line 636 "global_data.m"
          ll_backend__global_data__V_33_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 636 "global_data.m"
          MR_hl_field(MR_mktag(1), ll_backend__global_data__V_33_33, 0) = ((MR_Box) (ll_backend__global_data__FirstArg_25));
#line 636 "global_data.m"
          MR_hl_field(MR_mktag(1), ll_backend__global_data__V_33_33, 1) = ((MR_Box) (ll_backend__global_data__V_34_34));
#line 636 "global_data.m"
        }
#line 636 "global_data.m"
        {
#line 636 "global_data.m"
          ll_backend__global_data__succeeded = ll_backend__global_data__threshold_group_types_5_p_0(ll_backend__global_data__FirstArgType_26, ll_backend__global_data__V_33_33, ll_backend__global_data__LaterTypedArgs_27, &ll_backend__global_data__TypeGroups_28, &ll_backend__global_data__TypeAndArgGroups_29);
        }
#line 635 "global_data.m"
        if (ll_backend__global_data__succeeded)
#line 635 "global_data.m"
          {
#line 13837 "ll_backend.global_data.c"
            ll_backend__global_data__TypeCtorInfo_20_38 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_typed_rval_0;
#line 638 "global_data.m"
            {
#line 638 "global_data.m"
              ll_backend__global_data__OldLength_30 = mercury__list__length_1_f_0(ll_backend__global_data__TypeCtorInfo_20_38, ll_backend__global_data__TypedArgs_8);
            }
#line 13844 "ll_backend.global_data.c"
            ll_backend__global_data__TypeCtorInfo_21_39 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_arg_group_0;
#line 639 "global_data.m"
            {
#line 639 "global_data.m"
              ll_backend__global_data__NewLength_31 = mercury__list__length_1_f_0(ll_backend__global_data__TypeCtorInfo_21_39, ll_backend__global_data__TypeAndArgGroups_29);
            }
#line 640 "global_data.m"
            ll_backend__global_data__V_36_36 = (MR_Integer) 2;
#line 640 "global_data.m"
            ll_backend__global_data__V_35_35 = (ll_backend__global_data__NewLength_31 * ll_backend__global_data__V_36_36);
#line 640 "global_data.m"
            ll_backend__global_data__succeeded = (ll_backend__global_data__OldLength_30 >= ll_backend__global_data__V_35_35);
#line 635 "global_data.m"
          }
#line 635 "global_data.m"
      }
#line 644 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 642 "global_data.m"
      {
#line 642 "global_data.m"
        {
#line 642 "global_data.m"
          ll_backend__global_data__CellType_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 642 "global_data.m"
          MR_hl_field(MR_mktag(1), ll_backend__global_data__CellType_11, 0) = ((MR_Box) (ll_backend__global_data__TypeGroups_28));
#line 642 "global_data.m"
        }
#line 643 "global_data.m"
        {
#line 643 "global_data.m"
          ll_backend__global_data__CellTypeAndValue_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 643 "global_data.m"
          MR_hl_field(MR_mktag(1), ll_backend__global_data__CellTypeAndValue_12, 0) = ((MR_Box) (ll_backend__global_data__TypeAndArgGroups_29));
#line 643 "global_data.m"
        }
#line 642 "global_data.m"
      }
#line 644 "global_data.m"
    else
#line 645 "global_data.m"
      {
#line 645 "global_data.m"
        MR_Word ll_backend__global_data__V_37_37;

#line 645 "global_data.m"
        {
#line 645 "global_data.m"
          ll_backend__global_data__V_37_37 = ll_backend__llds__typed_rvals_project_types_1_f_0(ll_backend__global_data__TypedArgs_8);
        }
#line 645 "global_data.m"
        {
#line 645 "global_data.m"
          ll_backend__global_data__CellType_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 645 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__CellType_11, 0) = ((MR_Box) (ll_backend__global_data__V_37_37));
#line 645 "global_data.m"
        }
#line 646 "global_data.m"
        {
#line 646 "global_data.m"
          ll_backend__global_data__CellTypeAndValue_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 646 "global_data.m"
          MR_hl_field(MR_mktag(0), ll_backend__global_data__CellTypeAndValue_12, 0) = ((MR_Box) (ll_backend__global_data__TypedArgs_8));
#line 646 "global_data.m"
        }
#line 645 "global_data.m"
      }
#line 379 "global_data.m"
    {
#line 379 "global_data.m"
      ll_backend__global_data__do_add_scalar_static_cell_6_p_0(ll_backend__global_data__TypedArgs_8, ll_backend__global_data__CellType_11, ll_backend__global_data__CellTypeAndValue_12, ll_backend__global_data__DataId_6, ll_backend__global_data__STATE_VARIABLE_Info_0_13, ll_backend__global_data__STATE_VARIABLE_Info_14);
#line 379 "global_data.m"
      return;
    }
#line 368 "global_data.m"
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
#line 355 "global_data.m"
  {
#line 355 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 355 "global_data.m"
    MR_Word ll_backend__global_data__Info0_8;
#line 355 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_16_16;
#line 355 "global_data.m"
    MR_Word ll_backend__global_data__SubInfo0_9;
#line 355 "global_data.m"
    MR_Word ll_backend__global_data__V_10_10;
#line 355 "global_data.m"
    MR_Word ll_backend__global_data__V_12_12;
#line 355 "global_data.m"
    MR_Word ll_backend__global_data__V_13_13;
#line 355 "global_data.m"
    MR_Word ll_backend__global_data__V_14_14;

#line 356 "global_data.m"
    {
#line 356 "global_data.m"
      ll_backend__global_data__SubInfo0_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 356 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__SubInfo0_9, 0) = ((MR_Box) (ll_backend__global_data__BaseName_5));
#line 356 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__SubInfo0_9, 1) = ((MR_Box) ((ll_backend__global_data__UnboxFloat_6 | ((ll_backend__global_data__CommonData_7 << (MR_Integer) 1)))));
#line 356 "global_data.m"
    }
#line 357 "global_data.m"
    {
#line 357 "global_data.m"
      ll_backend__global_data__V_10_10 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
#line 13970 "ll_backend.global_data.c"
    ll_backend__global_data__TypeCtorInfo_16_16 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_type_num_0;
#line 357 "global_data.m"
    {
#line 357 "global_data.m"
      ll_backend__global_data__V_12_12 = mercury__bimap__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_common_cell_type_0, ll_backend__global_data__TypeCtorInfo_16_16);
    }
#line 358 "global_data.m"
    {
#line 358 "global_data.m"
      ll_backend__global_data__V_13_13 = mercury__map__init_0_f_0(ll_backend__global_data__TypeCtorInfo_16_16, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_scalar_cell_group_0);
    }
#line 358 "global_data.m"
    {
#line 358 "global_data.m"
      ll_backend__global_data__V_14_14 = mercury__map__init_0_f_0(ll_backend__global_data__TypeCtorInfo_16_16, (MR_Word) &ll_backend__global_data__ll_backend__global_data__type_ctor_info_vector_cell_group_0);
    }
#line 357 "global_data.m"
    {
#line 357 "global_data.m"
      ll_backend__global_data__Info0_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 357 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Info0_8, 0) = ((MR_Box) (ll_backend__global_data__SubInfo0_9));
#line 357 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Info0_8, 1) = ((MR_Box) (ll_backend__global_data__V_10_10));
#line 357 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Info0_8, 2) = ((MR_Box) (ll_backend__global_data__V_12_12));
#line 357 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Info0_8, 3) = ((MR_Box) (ll_backend__global_data__V_13_13));
#line 357 "global_data.m"
      MR_hl_field(MR_mktag(0), ll_backend__global_data__Info0_8, 4) = ((MR_Box) (ll_backend__global_data__V_14_14));
#line 357 "global_data.m"
    }
#line 355 "global_data.m"
    return ll_backend__global_data__Info0_8;
#line 355 "global_data.m"
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
#line 267 "global_data.m"
  {
#line 267 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 267 "global_data.m"
    MR_Word ll_backend__global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 0)));
#line 267 "global_data.m"
    MR_Word ll_backend__global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 1)));
#line 267 "global_data.m"
    MR_Word ll_backend__global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 2)));
#line 267 "global_data.m"
    MR_Integer ll_backend__global_data__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 3)));
#line 267 "global_data.m"
    MR_Word ll_backend__global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 4)));
#line 267 "global_data.m"
    MR_Word ll_backend__global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 6)));
#line 267 "global_data.m"
    MR_Word ll_backend__global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 5)));

#line 267 "global_data.m"
    {
#line 267 "global_data.m"
      MR_Word base;
#line 267 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 267 "global_data.m"
      *ll_backend__global_data__STATE_VARIABLE_GlobalData_7 = base;
#line 267 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__V_9_9));
#line 267 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__V_10_10));
#line 267 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__V_11_11));
#line 267 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__V_12_12));
#line 267 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__V_13_13));
#line 267 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__global_data__StaticCellInfo_4));
#line 267 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__global_data__V_15_15));
#line 267 "global_data.m"
    }
#line 267 "global_data.m"
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
#line 264 "global_data.m"
  {
#line 264 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 264 "global_data.m"
    MR_Word ll_backend__global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 0)));
#line 264 "global_data.m"
    MR_Word ll_backend__global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 1)));
#line 264 "global_data.m"
    MR_Word ll_backend__global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 2)));
#line 264 "global_data.m"
    MR_Integer ll_backend__global_data__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 3)));
#line 264 "global_data.m"
    MR_Word ll_backend__global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 4)));
#line 264 "global_data.m"
    MR_Word ll_backend__global_data__V_10_10;

#line 264 "global_data.m"
    *ll_backend__global_data__StaticCellInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 5)));
#line 264 "global_data.m"
    ll_backend__global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 6)));
#line 264 "global_data.m"
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
#line 259 "global_data.m"
  {
#line 259 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 259 "global_data.m"
    MR_Word ll_backend__global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
#line 259 "global_data.m"
    MR_Word ll_backend__global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
#line 259 "global_data.m"
    MR_Word ll_backend__global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
#line 259 "global_data.m"
    MR_Word ll_backend__global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
#line 259 "global_data.m"
    MR_Word ll_backend__global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
#line 260 "global_data.m"
    MR_Integer ll_backend__global_data__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
#line 260 "global_data.m"
    MR_Word ll_backend__global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));

#line 261 "global_data.m"
    {
#line 261 "global_data.m"
      MR_Word base;
#line 261 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 261 "global_data.m"
      *ll_backend__global_data__STATE_VARIABLE_GlobalData_9 = base;
#line 261 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__V_12_12));
#line 261 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__V_13_13));
#line 261 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__V_14_14));
#line 261 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__TableSize_6));
#line 261 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__RevTable_5));
#line 261 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__global_data__V_17_17));
#line 261 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__global_data__V_18_18));
#line 261 "global_data.m"
    }
#line 259 "global_data.m"
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
#line 255 "global_data.m"
  {
#line 255 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 255 "global_data.m"
    MR_Word ll_backend__global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 0)));
#line 255 "global_data.m"
    MR_Word ll_backend__global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 1)));
#line 255 "global_data.m"
    MR_Word ll_backend__global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 2)));
#line 255 "global_data.m"
    MR_Word ll_backend__global_data__V_11_11;
#line 255 "global_data.m"
    MR_Word ll_backend__global_data__V_12_12;

#line 255 "global_data.m"
    *ll_backend__global_data__TableSize_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 3)));
#line 255 "global_data.m"
    *ll_backend__global_data__RevTable_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 4)));
#line 255 "global_data.m"
    ll_backend__global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 5)));
#line 255 "global_data.m"
    ll_backend__global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 6)));
#line 255 "global_data.m"
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
#line 249 "global_data.m"
  {
#line 249 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 249 "global_data.m"
    MR_Word ll_backend__global_data__RevTable_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 4)));
#line 255 "global_data.m"
    MR_Integer ll_backend__global_data__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 3)));
#line 255 "global_data.m"
    MR_Word ll_backend__global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 0)));
#line 255 "global_data.m"
    MR_Word ll_backend__global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 1)));
#line 255 "global_data.m"
    MR_Word ll_backend__global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 2)));
#line 255 "global_data.m"
    MR_Word ll_backend__global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 5)));
#line 255 "global_data.m"
    MR_Word ll_backend__global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 6)));

#line 251 "global_data.m"
    {
#line 251 "global_data.m"
      *ll_backend__global_data__Table_4 = mercury__list__reverse_1_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, ll_backend__global_data__RevTable_5);
    }
#line 249 "global_data.m"
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
#line 247 "global_data.m"
  {
#line 247 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 247 "global_data.m"
    MR_Word ll_backend__global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 0)));
#line 247 "global_data.m"
    MR_Word ll_backend__global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 1)));
#line 247 "global_data.m"
    MR_Integer ll_backend__global_data__V_7_7;
#line 247 "global_data.m"
    MR_Word ll_backend__global_data__V_8_8;
#line 247 "global_data.m"
    MR_Word ll_backend__global_data__V_9_9;
#line 247 "global_data.m"
    MR_Word ll_backend__global_data__V_10_10;

#line 247 "global_data.m"
    *ll_backend__global_data__ClosureLayouts_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 2)));
#line 247 "global_data.m"
    ll_backend__global_data__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 3)));
#line 247 "global_data.m"
    ll_backend__global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 4)));
#line 247 "global_data.m"
    ll_backend__global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 5)));
#line 247 "global_data.m"
    ll_backend__global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 6)));
#line 247 "global_data.m"
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
#line 242 "global_data.m"
  {
#line 242 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 242 "global_data.m"
    MR_Word ll_backend__global_data__ProcLayoutMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 1)));
#line 243 "global_data.m"
    MR_Word ll_backend__global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 0)));
#line 243 "global_data.m"
    MR_Word ll_backend__global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 2)));
#line 243 "global_data.m"
    MR_Integer ll_backend__global_data__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 3)));
#line 243 "global_data.m"
    MR_Word ll_backend__global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 4)));
#line 243 "global_data.m"
    MR_Word ll_backend__global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 5)));
#line 243 "global_data.m"
    MR_Word ll_backend__global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 6)));

#line 244 "global_data.m"
    {
#line 244 "global_data.m"
      mercury__map__values_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_info_0, ll_backend__global_data__ProcLayoutMap_5, ll_backend__global_data__ProcLayouts_4);
#line 244 "global_data.m"
      return;
    }
#line 242 "global_data.m"
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
#line 238 "global_data.m"
  {
#line 238 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 238 "global_data.m"
    MR_Word ll_backend__global_data__ProcVarMap_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 0)));
#line 239 "global_data.m"
    MR_Word ll_backend__global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 1)));
#line 239 "global_data.m"
    MR_Word ll_backend__global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 2)));
#line 239 "global_data.m"
    MR_Integer ll_backend__global_data__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 3)));
#line 239 "global_data.m"
    MR_Word ll_backend__global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 4)));
#line 239 "global_data.m"
    MR_Word ll_backend__global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 5)));
#line 239 "global_data.m"
    MR_Word ll_backend__global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_3, (MR_Integer) 6)));

#line 240 "global_data.m"
    {
#line 240 "global_data.m"
      mercury__map__values_2_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_tabling_info_struct_0, ll_backend__global_data__ProcVarMap_5, ll_backend__global_data__ProcVars_4);
#line 240 "global_data.m"
      return;
    }
#line 238 "global_data.m"
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
#line 234 "global_data.m"
  {
#line 234 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 234 "global_data.m"
    MR_Word ll_backend__global_data__ProcLayoutMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 1)));
#line 235 "global_data.m"
    MR_Word ll_backend__global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 0)));
#line 235 "global_data.m"
    MR_Word ll_backend__global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 2)));
#line 235 "global_data.m"
    MR_Integer ll_backend__global_data__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 3)));
#line 235 "global_data.m"
    MR_Word ll_backend__global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 4)));
#line 235 "global_data.m"
    MR_Word ll_backend__global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 5)));
#line 235 "global_data.m"
    MR_Word ll_backend__global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 6)));
#line 236 "global_data.m"
    MR_Box ll_backend__global_data__conv0_ProcLayout_6;

#line 236 "global_data.m"
    {
#line 236 "global_data.m"
      mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_info_0, ll_backend__global_data__ProcLayoutMap_7, ((MR_Box) (ll_backend__global_data__PredProcId_5)), &ll_backend__global_data__conv0_ProcLayout_6);
    }
#line 236 "global_data.m"
    *ll_backend__global_data__ProcLayout_6 = ((MR_Word) ll_backend__global_data__conv0_ProcLayout_6);
#line 234 "global_data.m"
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
#line 230 "global_data.m"
  {
#line 230 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 230 "global_data.m"
    MR_Word ll_backend__global_data__ProcLayoutMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 1)));
#line 231 "global_data.m"
    MR_Word ll_backend__global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 0)));
#line 231 "global_data.m"
    MR_Word ll_backend__global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 2)));
#line 231 "global_data.m"
    MR_Integer ll_backend__global_data__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 3)));
#line 231 "global_data.m"
    MR_Word ll_backend__global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 4)));
#line 231 "global_data.m"
    MR_Word ll_backend__global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 5)));
#line 231 "global_data.m"
    MR_Word ll_backend__global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__GlobalData_4, (MR_Integer) 6)));
#line 232 "global_data.m"
    MR_Box ll_backend__global_data__conv0_ProcLayout_6;

#line 232 "global_data.m"
    {
#line 232 "global_data.m"
      ll_backend__global_data__succeeded = mercury__map__search_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_info_0, ll_backend__global_data__ProcLayoutMap_7, ((MR_Box) (ll_backend__global_data__PredProcId_5)), &ll_backend__global_data__conv0_ProcLayout_6);
    }
#line 232 "global_data.m"
    if (ll_backend__global_data__succeeded)
#line 232 "global_data.m"
      {
#line 232 "global_data.m"
        *ll_backend__global_data__ProcLayout_6 = ((MR_Word) ll_backend__global_data__conv0_ProcLayout_6);
#line 232 "global_data.m"
        ll_backend__global_data__succeeded = MR_TRUE;
#line 232 "global_data.m"
      }
#line 230 "global_data.m"
    return ll_backend__global_data__succeeded;
#line 230 "global_data.m"
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
#line 225 "global_data.m"
  {
#line 225 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 225 "global_data.m"
    MR_Word ll_backend__global_data__ClosureLayouts0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
#line 225 "global_data.m"
    MR_Word ll_backend__global_data__ClosureLayouts_7;
#line 226 "global_data.m"
    MR_Word ll_backend__global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
#line 226 "global_data.m"
    MR_Word ll_backend__global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
#line 226 "global_data.m"
    MR_Integer ll_backend__global_data__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
#line 226 "global_data.m"
    MR_Word ll_backend__global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
#line 226 "global_data.m"
    MR_Word ll_backend__global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
#line 226 "global_data.m"
    MR_Word ll_backend__global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
#line 228 "global_data.m"
    MR_Word ll_backend__global_data__V_17_17;
#line 228 "global_data.m"
    MR_Word ll_backend__global_data__V_18_18;
#line 228 "global_data.m"
    MR_Integer ll_backend__global_data__V_20_20;
#line 228 "global_data.m"
    MR_Word ll_backend__global_data__V_21_21;
#line 228 "global_data.m"
    MR_Word ll_backend__global_data__V_22_22;
#line 228 "global_data.m"
    MR_Word ll_backend__global_data__V_23_23;
#line 228 "global_data.m"
    MR_Word ll_backend__global_data__V_19_19;

#line 227 "global_data.m"
    {
#line 227 "global_data.m"
      mercury__list__append_3_p_1((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_closure_proc_id_data_0, ll_backend__global_data__NewClosureLayouts_4, ll_backend__global_data__ClosureLayouts0_6, &ll_backend__global_data__ClosureLayouts_7);
    }
#line 228 "global_data.m"
    ll_backend__global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
#line 228 "global_data.m"
    ll_backend__global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
#line 228 "global_data.m"
    ll_backend__global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
#line 228 "global_data.m"
    ll_backend__global_data__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
#line 228 "global_data.m"
    ll_backend__global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
#line 228 "global_data.m"
    ll_backend__global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
#line 228 "global_data.m"
    ll_backend__global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
#line 228 "global_data.m"
    {
#line 228 "global_data.m"
      MR_Word base;
#line 228 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 228 "global_data.m"
      *ll_backend__global_data__STATE_VARIABLE_GlobalData_9 = base;
#line 228 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__V_17_17));
#line 228 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__V_18_18));
#line 228 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__ClosureLayouts_7));
#line 228 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__V_20_20));
#line 228 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__V_21_21));
#line 228 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__global_data__V_22_22));
#line 228 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__global_data__V_23_23));
#line 228 "global_data.m"
    }
#line 225 "global_data.m"
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
#line 220 "global_data.m"
  {
#line 220 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 220 "global_data.m"
    MR_Word ll_backend__global_data__ProcLayoutMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
#line 220 "global_data.m"
    MR_Word ll_backend__global_data__ProcLayoutMap_9;
#line 221 "global_data.m"
    MR_Word ll_backend__global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
#line 221 "global_data.m"
    MR_Word ll_backend__global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
#line 221 "global_data.m"
    MR_Integer ll_backend__global_data__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
#line 221 "global_data.m"
    MR_Word ll_backend__global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
#line 221 "global_data.m"
    MR_Word ll_backend__global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
#line 221 "global_data.m"
    MR_Word ll_backend__global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
#line 223 "global_data.m"
    MR_Word ll_backend__global_data__V_19_19;
#line 223 "global_data.m"
    MR_Word ll_backend__global_data__V_21_21;
#line 223 "global_data.m"
    MR_Integer ll_backend__global_data__V_22_22;
#line 223 "global_data.m"
    MR_Word ll_backend__global_data__V_23_23;
#line 223 "global_data.m"
    MR_Word ll_backend__global_data__V_24_24;
#line 223 "global_data.m"
    MR_Word ll_backend__global_data__V_25_25;
#line 223 "global_data.m"
    MR_Word ll_backend__global_data__V_20_20;

#line 222 "global_data.m"
    {
#line 222 "global_data.m"
      mercury__map__det_update_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_info_0, ((MR_Box) (ll_backend__global_data__PredProcId_5)), ((MR_Box) (ll_backend__global_data__ProcLayout_6)), ll_backend__global_data__ProcLayoutMap0_8, &ll_backend__global_data__ProcLayoutMap_9);
    }
#line 223 "global_data.m"
    ll_backend__global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
#line 223 "global_data.m"
    ll_backend__global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
#line 223 "global_data.m"
    ll_backend__global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
#line 223 "global_data.m"
    ll_backend__global_data__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
#line 223 "global_data.m"
    ll_backend__global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
#line 223 "global_data.m"
    ll_backend__global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
#line 223 "global_data.m"
    ll_backend__global_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
#line 223 "global_data.m"
    {
#line 223 "global_data.m"
      MR_Word base;
#line 223 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 223 "global_data.m"
      *ll_backend__global_data__STATE_VARIABLE_GlobalData_11 = base;
#line 223 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__V_19_19));
#line 223 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__ProcLayoutMap_9));
#line 223 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__V_21_21));
#line 223 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__V_22_22));
#line 223 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__V_23_23));
#line 223 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__global_data__V_24_24));
#line 223 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__global_data__V_25_25));
#line 223 "global_data.m"
    }
#line 220 "global_data.m"
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
#line 215 "global_data.m"
  {
#line 215 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 215 "global_data.m"
    MR_Word ll_backend__global_data__ProcLayoutMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
#line 215 "global_data.m"
    MR_Word ll_backend__global_data__ProcLayoutMap_9;
#line 216 "global_data.m"
    MR_Word ll_backend__global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
#line 216 "global_data.m"
    MR_Word ll_backend__global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
#line 216 "global_data.m"
    MR_Integer ll_backend__global_data__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
#line 216 "global_data.m"
    MR_Word ll_backend__global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
#line 216 "global_data.m"
    MR_Word ll_backend__global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
#line 216 "global_data.m"
    MR_Word ll_backend__global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
#line 218 "global_data.m"
    MR_Word ll_backend__global_data__V_19_19;
#line 218 "global_data.m"
    MR_Word ll_backend__global_data__V_21_21;
#line 218 "global_data.m"
    MR_Integer ll_backend__global_data__V_22_22;
#line 218 "global_data.m"
    MR_Word ll_backend__global_data__V_23_23;
#line 218 "global_data.m"
    MR_Word ll_backend__global_data__V_24_24;
#line 218 "global_data.m"
    MR_Word ll_backend__global_data__V_25_25;
#line 218 "global_data.m"
    MR_Word ll_backend__global_data__V_20_20;

#line 217 "global_data.m"
    {
#line 217 "global_data.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_info_0, ((MR_Box) (ll_backend__global_data__PredProcId_5)), ((MR_Box) (ll_backend__global_data__ProcLayout_6)), ll_backend__global_data__ProcLayoutMap0_8, &ll_backend__global_data__ProcLayoutMap_9);
    }
#line 218 "global_data.m"
    ll_backend__global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
#line 218 "global_data.m"
    ll_backend__global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
#line 218 "global_data.m"
    ll_backend__global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
#line 218 "global_data.m"
    ll_backend__global_data__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
#line 218 "global_data.m"
    ll_backend__global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
#line 218 "global_data.m"
    ll_backend__global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
#line 218 "global_data.m"
    ll_backend__global_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
#line 218 "global_data.m"
    {
#line 218 "global_data.m"
      MR_Word base;
#line 218 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 218 "global_data.m"
      *ll_backend__global_data__STATE_VARIABLE_GlobalData_11 = base;
#line 218 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__V_19_19));
#line 218 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__ProcLayoutMap_9));
#line 218 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__V_21_21));
#line 218 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__V_22_22));
#line 218 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__V_23_23));
#line 218 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__global_data__V_24_24));
#line 218 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__global_data__V_25_25));
#line 218 "global_data.m"
    }
#line 215 "global_data.m"
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
#line 210 "global_data.m"
  {
#line 210 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 210 "global_data.m"
    MR_Word ll_backend__global_data__ProcVarMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
#line 210 "global_data.m"
    MR_Word ll_backend__global_data__ProcVarMap_9;
#line 211 "global_data.m"
    MR_Word ll_backend__global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
#line 211 "global_data.m"
    MR_Word ll_backend__global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
#line 211 "global_data.m"
    MR_Integer ll_backend__global_data__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
#line 211 "global_data.m"
    MR_Word ll_backend__global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
#line 211 "global_data.m"
    MR_Word ll_backend__global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
#line 211 "global_data.m"
    MR_Word ll_backend__global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
#line 213 "global_data.m"
    MR_Word ll_backend__global_data__V_20_20;
#line 213 "global_data.m"
    MR_Word ll_backend__global_data__V_21_21;
#line 213 "global_data.m"
    MR_Integer ll_backend__global_data__V_22_22;
#line 213 "global_data.m"
    MR_Word ll_backend__global_data__V_23_23;
#line 213 "global_data.m"
    MR_Word ll_backend__global_data__V_24_24;
#line 213 "global_data.m"
    MR_Word ll_backend__global_data__V_25_25;
#line 213 "global_data.m"
    MR_Word ll_backend__global_data__V_19_19;

#line 212 "global_data.m"
    {
#line 212 "global_data.m"
      mercury__map__det_insert_4_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_tabling_info_struct_0, ((MR_Box) (ll_backend__global_data__PredProcId_5)), ((MR_Box) (ll_backend__global_data__ProcVar_6)), ll_backend__global_data__ProcVarMap0_8, &ll_backend__global_data__ProcVarMap_9);
    }
#line 213 "global_data.m"
    ll_backend__global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
#line 213 "global_data.m"
    ll_backend__global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
#line 213 "global_data.m"
    ll_backend__global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
#line 213 "global_data.m"
    ll_backend__global_data__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
#line 213 "global_data.m"
    ll_backend__global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
#line 213 "global_data.m"
    ll_backend__global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
#line 213 "global_data.m"
    ll_backend__global_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
#line 213 "global_data.m"
    {
#line 213 "global_data.m"
      MR_Word base;
#line 213 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 213 "global_data.m"
      *ll_backend__global_data__STATE_VARIABLE_GlobalData_11 = base;
#line 213 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__ProcVarMap_9));
#line 213 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__V_20_20));
#line 213 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__global_data__V_21_21));
#line 213 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__V_22_22));
#line 213 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__V_23_23));
#line 213 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__global_data__V_24_24));
#line 213 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__global_data__V_25_25));
#line 213 "global_data.m"
    }
#line 210 "global_data.m"
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
#line 203 "global_data.m"
  {
#line 203 "global_data.m"
    MR_bool ll_backend__global_data__succeeded;
#line 203 "global_data.m"
    MR_Word ll_backend__global_data__TypeCtorInfo_13_13 = (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0;
#line 203 "global_data.m"
    MR_Word ll_backend__global_data__EmptyDataMap_9;
#line 203 "global_data.m"
    MR_Word ll_backend__global_data__EmptyLayoutMap_10;
#line 203 "global_data.m"
    MR_Word ll_backend__global_data__V_12_12;

#line 204 "global_data.m"
    {
#line 204 "global_data.m"
      mercury__map__init_1_p_0(ll_backend__global_data__TypeCtorInfo_13_13, (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_tabling_info_struct_0, &ll_backend__global_data__EmptyDataMap_9);
    }
#line 205 "global_data.m"
    {
#line 205 "global_data.m"
      mercury__map__init_1_p_0(ll_backend__global_data__TypeCtorInfo_13_13, (MR_Word) &ll_backend__continuation_info__ll_backend__continuation_info__type_ctor_info_proc_layout_info_0, &ll_backend__global_data__EmptyLayoutMap_10);
    }
#line 208 "global_data.m"
    {
#line 208 "global_data.m"
      ll_backend__global_data__V_12_12 = mercury__set_tree234__init_0_f_0((MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_alloc_site_info_0);
    }
#line 206 "global_data.m"
    {
#line 206 "global_data.m"
      MR_Word base;
#line 206 "global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 206 "global_data.m"
      *ll_backend__global_data__GlobalData_8 = base;
#line 206 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__global_data__EmptyDataMap_9));
#line 206 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__global_data__EmptyLayoutMap_10));
#line 206 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 206 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__global_data__TSStringTableSize_6));
#line 206 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__global_data__TSRevStringTable_7));
#line 206 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__global_data__StaticCellInfo_5));
#line 206 "global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__global_data__V_12_12));
#line 206 "global_data.m"
    }
#line 203 "global_data.m"
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
