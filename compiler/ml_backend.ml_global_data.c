/*
** Automatically generated from `ml_global_data.m'
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


/* :- module ml_backend.ml_global_data. */
/* :- implementation. */

/*
INIT mercury__ml_backend__ml_global_data__init
ENDINIT
*/

#include "ml_backend.ml_global_data.mih"


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
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
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
#include "backend_libs.foreign.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_out.mih"
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
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
#include "mdbcomp.trace_counts.mih"
#include "ml_backend.ml_type_gen.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.mercury_to_mercury.mih"
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
#include "hlds.hlds_out.hlds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 147 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_floats_0_0;

#line 150 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_floats_0_1;

#line 153 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_value_ordered_have_unboxed_floats_0[2];

#line 156 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_name_ordered_have_unboxed_floats_0[2];

#line 159 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_have_unboxed_floats_0[2];

#line 162 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__bimap__ti_bimap_2ml_backend__mlds__type_ctor_info_mlds_alloc_id_0ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0;

#line 165 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_alloc_site_data_0_0[4];

#line 168 "ml_backend.ml_global_data.c"
static const MR_ConstString ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_alloc_site_data_0_0[4];

#line 171 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_alloc_site_data_0_0;

#line 174 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_alloc_site_data_0_0[1];

#line 177 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_alloc_site_data_0[1];

#line 180 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_alloc_site_data_0[1];

#line 183 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_alloc_site_data_0[1];

#line 186 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2backend_libs__rtti__type_ctor_info_rtti_id_0ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0;

#line 189 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0;

#line 192 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0;

#line 195 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0;

#line 198 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0;

#line 201 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0;

#line 204 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0;

#line 207 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_global_data_0_0[14];

#line 210 "ml_backend.ml_global_data.c"
static const MR_ConstString ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_global_data_0_0[14];

#line 213 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_global_data_0_0;

#line 216 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_global_data_0_0[1];

#line 219 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_global_data_0[1];

#line 222 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_global_data_0[1];

#line 225 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_global_data_0[1];

#line 228 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_rval_and_type_0_0[2];

#line 231 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_rval_and_type_0_0;

#line 234 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_rval_and_type_0_0[1];

#line 237 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_rval_and_type_0[1];

#line 240 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_rval_and_type_0[1];

#line 243 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_rval_and_type_0[1];

#line 246 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__bimap__ti_bimap_2ml_backend__mlds__type_ctor_info_mlds_initializer_0ml_backend__mlds__type_ctor_info_mlds_scalar_common_0;

#line 249 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_initializer_0;

#line 252 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_scalar_cell_group_0_0[5];

#line 255 "ml_backend.ml_global_data.c"
static const MR_ConstString ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_scalar_cell_group_0_0[5];

#line 258 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_scalar_cell_group_0_0;

#line 261 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_scalar_cell_group_0_0[1];

#line 264 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_scalar_cell_group_0[1];

#line 267 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_scalar_cell_group_0[1];

#line 270 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_scalar_cell_group_0[1];

#line 273 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_scalar_cell_type_0_0[2];

#line 276 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_scalar_cell_type_0_0;

#line 279 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_scalar_cell_type_0_0[1];

#line 282 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_scalar_cell_type_0[1];

#line 285 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_scalar_cell_type_0[1];

#line 288 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_scalar_cell_type_0[1];

#line 291 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_field_id_0;

#line 294 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_vector_cell_group_0_0[5];

#line 297 "ml_backend.ml_global_data.c"
static const MR_ConstString ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_vector_cell_group_0_0[5];

#line 300 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_vector_cell_group_0_0;

#line 303 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_vector_cell_group_0_0[1];

#line 306 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_vector_cell_group_0[1];

#line 309 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_vector_cell_group_0[1];

#line 312 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_vector_cell_group_0[1];

#line 315 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_use_common_cells_0_0;

#line 318 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_use_common_cells_0_1;

#line 321 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_value_ordered_use_common_cells_0[2];

#line 324 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_name_ordered_use_common_cells_0[2];

#line 327 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_use_common_cells_0[2];

#line 330 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____have_unboxed_floats_0_0_10001(
#line 333 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 335 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 338 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____have_unboxed_floats_0_0_10001(
#line 341 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 343 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 345 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 348 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_alloc_id_map_0_0_10001(
#line 351 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 353 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 356 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_alloc_id_map_0_0_10001(
#line 359 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 361 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 363 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 366 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_alloc_site_data_0_0_10001(
#line 369 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 371 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 374 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_alloc_site_data_0_0_10001(
#line 377 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 379 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 381 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 384 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_global_data_0_0_10001(
#line 387 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 389 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 392 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_global_data_0_0_10001(
#line 395 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 397 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 399 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 402 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_rtti_rval_type_map_0_0_10001(
#line 405 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 407 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 410 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_rtti_rval_type_map_0_0_10001(
#line 413 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 415 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 417 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 420 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_rval_and_type_0_0_10001(
#line 423 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 425 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 428 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_rval_and_type_0_0_10001(
#line 431 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 433 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 435 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 438 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_group_0_0_10001(
#line 441 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 443 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 446 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_group_0_0_10001(
#line 449 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 451 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 453 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 456 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_map_0_0_10001(
#line 459 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 461 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 464 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_map_0_0_10001(
#line 467 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 469 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 471 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 474 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_0_0_10001(
#line 477 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 479 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 482 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_0_0_10001(
#line 485 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 487 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 489 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 492 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_map_0_0_10001(
#line 495 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 497 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 500 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_map_0_0_10001(
#line 503 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 505 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 507 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 510 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_group_0_0_10001(
#line 513 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 515 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 518 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_group_0_0_10001(
#line 521 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 523 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 525 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 528 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_map_0_0_10001(
#line 531 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 533 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 536 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_map_0_0_10001(
#line 539 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 541 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 543 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 546 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_type_map_0_0_10001(
#line 549 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 551 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 554 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_type_map_0_0_10001(
#line 557 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 559 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 561 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 564 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____use_common_cells_0_0_10001(
#line 567 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 569 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 572 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____use_common_cells_0_0_10001(
#line 575 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 577 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 579 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 232 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_type_map_0_0(
#line 232 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 232 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 232 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3);

#line 232 "ml_global_data.m"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_type_map_0_0(
#line 232 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 232 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2);

#line 229 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_map_0_0(
#line 229 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 229 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 229 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3);

#line 229 "ml_global_data.m"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_map_0_0(
#line 229 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 229 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2);

#line 227 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_0_0(
#line 227 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 227 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 227 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3);

#line 227 "ml_global_data.m"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_0_0(
#line 227 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 227 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2);

#line 235 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_alloc_id_map_0_0(
#line 235 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 235 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 235 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3);

#line 235 "ml_global_data.m"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_alloc_id_map_0_0(
#line 235 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 235 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2);

#line 765 "ml_global_data.m"
static MR_String MR_CALL 
ml_backend__ml_global_data__cons_id_to_alloc_site_string_1_f_0(
#line 765 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__ConsId_3);

#line 707 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__make_named_fields_4_p_0(
#line 707 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__MLDS_ModuleName_1,
#line 707 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__StructType_2,
#line 707 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3,
#line 707 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__4_4);

#line 692 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_gen_vector_cell_field_types_7_p_0(
#line 692 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__MLDS_Context_1,
#line 692 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Flags_2,
#line 692 "ml_global_data.m"
  MR_String ml_backend__ml_global_data__FieldNamePrefix_3,
#line 692 "ml_global_data.m"
  MR_Integer ml_backend__ml_global_data__FieldNum_4,
#line 692 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__5_5,
#line 692 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__6_6,
#line 692 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__7_7);

#line 527 "ml_global_data.m"
static MR_bool MR_CALL 
ml_backend__ml_global_data__ml_specialize_generic_array_rval_2_p_0(
#line 527 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13,
#line 527 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_Rval_14);

#line 512 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_specialize_generic_array_init_3_p_0(
#line 512 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Init0_4,
#line 512 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__Init_5,
#line 512 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__Type_6);

#line 470 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_gen_plain_static_defn_7_p_0(
#line 470 "ml_global_data.m"
  MR_String ml_backend__ml_global_data__ConstBaseName_8,
#line 470 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__ConstType_9,
#line 470 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Initializer_10,
#line 470 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Context_11,
#line 470 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__VarName_12,
#line 470 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25,
#line 470 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_26);

#line 412 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_gen_scalar_static_defn_6_p_0(
#line 412 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__MLDS_ModuleName_7,
#line 412 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__ConstType_8,
#line 412 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Initializer_9,
#line 412 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__Common_10,
#line 412 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34,
#line 412 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_35);

#line 321 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_global_data_set_rev_flat_cell_defns_3_p_0(
#line 321 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Defns_4,
#line 321 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6,
#line 321 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_7);

#line 502 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_gen_static_scalar_const_addr_8_p_0_1(
#line 502 "ml_global_data.m"
  MR_Box ml_backend__ml_global_data__closure_arg,
#line 502 "ml_global_data.m"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 502 "ml_global_data.m"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_2,
#line 502 "ml_global_data.m"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_3);

#line 502 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_gen_static_scalar_const_value_8_p_0_1(
#line 502 "ml_global_data.m"
  MR_Box ml_backend__ml_global_data__closure_arg,
#line 502 "ml_global_data.m"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 502 "ml_global_data.m"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_2,
#line 502 "ml_global_data.m"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_3);


static /* final */ const MR_Box ml_backend__ml_global_data_scalar_common_1[4][2];

static /* final */ const MR_Box ml_backend__ml_global_data_scalar_common_2[9][3];

static /* final */ const MR_Box ml_backend__ml_global_data_scalar_common_3[1][6];




static /* final */ const MR_Box ml_backend__ml_global_data_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_id_0))
  },
};

static /* final */ const MR_Box ml_backend__ml_global_data_scalar_common_2[9][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__bimap__bimap__type_ctor_info_bimap_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_alloc_id_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__ml_global_data_scalar_common_1[0])),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__bimap__bimap__type_ctor_info_bimap_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0))
  },
  /* row 7 */
  {
    ((MR_Box) (&ml_backend__ml_global_data_scalar_common_3[0])),
    ((MR_Box) (ml_backend__ml_global_data__ml_gen_static_scalar_const_value_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&ml_backend__ml_global_data_scalar_common_3[0])),
    ((MR_Box) (ml_backend__ml_global_data__ml_gen_static_scalar_const_addr_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ml_backend__ml_global_data_scalar_common_3[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 895 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_floats_0_0 = {
  (MR_String) "have_unboxed_floats",
  (MR_Integer) 0
};

#line 901 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_floats_0_1 = {
  (MR_String) "do_not_have_unboxed_floats",
  (MR_Integer) 1
};

#line 907 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_value_ordered_have_unboxed_floats_0[2] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_floats_0_0,
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_floats_0_1
};

#line 913 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_name_ordered_have_unboxed_floats_0[2] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_floats_0_1,
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_floats_0_0
};

#line 919 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_have_unboxed_floats_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 925 "ml_backend.ml_global_data.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_have_unboxed_floats_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_global_data____Unify____have_unboxed_floats_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____have_unboxed_floats_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "have_unboxed_floats",
  {
    ml_backend__ml_global_data__ml_backend__ml_global_data__enum_name_ordered_have_unboxed_floats_0
  },
  {
    ml_backend__ml_global_data__ml_backend__ml_global_data__enum_value_ordered_have_unboxed_floats_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_have_unboxed_floats_0
};

#line 946 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__bimap__ti_bimap_2ml_backend__mlds__type_ctor_info_mlds_alloc_id_0ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_alloc_id_0,
    (MR_TypeInfo) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0
  }
};

#line 955 "ml_backend.ml_global_data.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_id_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_global_data____Unify____ml_alloc_id_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____ml_alloc_id_map_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "ml_alloc_id_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_global_data__bimap__ti_bimap_2ml_backend__mlds__type_ctor_info_mlds_alloc_id_0ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 976 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_alloc_site_data_0_0[4] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_entity_name_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 984 "ml_backend.ml_global_data.c"
static const MR_ConstString ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_alloc_site_data_0_0[4] = {
  (MR_String) "masd_proc_label",
  (MR_String) "masd_context",
  (MR_String) "masd_type",
  (MR_String) "masd_size"
};

#line 992 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_alloc_site_data_0_0 = {
  (MR_String) "ml_alloc_site_data",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_alloc_site_data_0_0,
  ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_alloc_site_data_0_0,
  NULL,
  NULL
};

#line 1007 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_alloc_site_data_0_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_alloc_site_data_0_0
};

#line 1012 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_alloc_site_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_alloc_site_data_0_0
  }
};

#line 1021 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_alloc_site_data_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_alloc_site_data_0_0
};

#line 1026 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_alloc_site_data_0[1] = {
  (MR_Integer) 0
};

#line 1031 "ml_backend.ml_global_data.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_global_data____Unify____ml_alloc_site_data_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____ml_alloc_site_data_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "ml_alloc_site_data",
  {
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_alloc_site_data_0
  },
  {
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_alloc_site_data_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_alloc_site_data_0
};

#line 1052 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2backend_libs__rtti__type_ctor_info_rtti_id_0ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0,
    (MR_TypeInfo) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0
  }
};

#line 1061 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

#line 1069 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0,
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0
  }
};

#line 1078 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0,
    (MR_TypeInfo) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0
  }
};

#line 1087 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0
  }
};

#line 1095 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0,
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0
  }
};

#line 1104 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0,
    (MR_TypeInfo) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0
  }
};

#line 1113 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_global_data_0_0[14] = {
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__tree234__ti_tree234_2backend_libs__rtti__type_ctor_info_rtti_id_0ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_use_common_cells_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_have_unboxed_floats_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__tree234__ti_tree234_2list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__bimap__ti_bimap_2ml_backend__mlds__type_ctor_info_mlds_alloc_id_0ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0
};

#line 1131 "ml_backend.ml_global_data.c"
static const MR_ConstString ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_global_data_0_0[14] = {
  (MR_String) "mgd_pdup_rval_type_map",
  (MR_String) "mgd_use_common_cells",
  (MR_String) "mgd_have_unboxed_floats",
  (MR_String) "mgd_const_counter",
  (MR_String) "mgd_rev_flat_cell_defns",
  (MR_String) "mgd_rev_flat_rtti_defns",
  (MR_String) "mgd_rev_maybe_nonflat_defns",
  (MR_String) "mgd_cell_type_counter",
  (MR_String) "mgd_scalar_type_num_map",
  (MR_String) "mgd_scalar_cell_group_map",
  (MR_String) "mgd_vector_type_num_map",
  (MR_String) "mgd_vector_cell_group_map",
  (MR_String) "mgd_alloc_id_counter",
  (MR_String) "mgd_alloc_id_map"
};

#line 1149 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_global_data_0_0 = {
  (MR_String) "ml_global_data",
  (MR_Integer) 14,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_global_data_0_0,
  ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_global_data_0_0,
  NULL,
  NULL
};

#line 1164 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_global_data_0_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_global_data_0_0
};

#line 1169 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_global_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_global_data_0_0
  }
};

#line 1178 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_global_data_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_global_data_0_0
};

#line 1183 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_global_data_0[1] = {
  (MR_Integer) 0
};

#line 1188 "ml_backend.ml_global_data.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_global_data____Unify____ml_global_data_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____ml_global_data_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "ml_global_data",
  {
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_global_data_0
  },
  {
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_global_data_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_global_data_0
};

#line 1209 "ml_backend.ml_global_data.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rtti_rval_type_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_global_data____Unify____ml_rtti_rval_type_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____ml_rtti_rval_type_map_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "ml_rtti_rval_type_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_global_data__tree234__ti_tree234_2backend_libs__rtti__type_ctor_info_rtti_id_0ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1230 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_rval_and_type_0_0[2] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0
};

#line 1236 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_rval_and_type_0_0 = {
  (MR_String) "ml_rval_and_type",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_rval_and_type_0_0,
  NULL,
  NULL,
  NULL
};

#line 1251 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_rval_and_type_0_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_rval_and_type_0_0
};

#line 1256 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_rval_and_type_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_rval_and_type_0_0
  }
};

#line 1265 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_rval_and_type_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_rval_and_type_0_0
};

#line 1270 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_rval_and_type_0[1] = {
  (MR_Integer) 0
};

#line 1275 "ml_backend.ml_global_data.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_global_data____Unify____ml_rval_and_type_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____ml_rval_and_type_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "ml_rval_and_type",
  {
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_rval_and_type_0
  },
  {
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_rval_and_type_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_rval_and_type_0
};

#line 1296 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__bimap__ti_bimap_2ml_backend__mlds__type_ctor_info_mlds_initializer_0ml_backend__mlds__type_ctor_info_mlds_scalar_common_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0,
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0
  }
};

#line 1305 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_initializer_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0
  }
};

#line 1313 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_scalar_cell_group_0_0[5] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_initializer_array_size_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__bimap__ti_bimap_2ml_backend__mlds__type_ctor_info_mlds_initializer_0ml_backend__mlds__type_ctor_info_mlds_scalar_common_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_initializer_0
};

#line 1322 "ml_backend.ml_global_data.c"
static const MR_ConstString ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_scalar_cell_group_0_0[5] = {
  (MR_String) "mscg_type",
  (MR_String) "mscg_array_size",
  (MR_String) "mscg_counter",
  (MR_String) "mscg_members",
  (MR_String) "mscg_rows"
};

#line 1331 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_scalar_cell_group_0_0 = {
  (MR_String) "ml_scalar_cell_group",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_scalar_cell_group_0_0,
  ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_scalar_cell_group_0_0,
  NULL,
  NULL
};

#line 1346 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_scalar_cell_group_0_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_scalar_cell_group_0_0
};

#line 1351 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_scalar_cell_group_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_scalar_cell_group_0_0
  }
};

#line 1360 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_scalar_cell_group_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_scalar_cell_group_0_0
};

#line 1365 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_scalar_cell_group_0[1] = {
  (MR_Integer) 0
};

#line 1370 "ml_backend.ml_global_data.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_global_data____Unify____ml_scalar_cell_group_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____ml_scalar_cell_group_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "ml_scalar_cell_group",
  {
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_scalar_cell_group_0
  },
  {
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_scalar_cell_group_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_scalar_cell_group_0
};

#line 1391 "ml_backend.ml_global_data.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_global_data____Unify____ml_scalar_cell_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____ml_scalar_cell_map_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "ml_scalar_cell_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1412 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_scalar_cell_type_0_0[2] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_initializer_array_size_0
};

#line 1418 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_scalar_cell_type_0_0 = {
  (MR_String) "ml_scalar_cell_type",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_scalar_cell_type_0_0,
  NULL,
  NULL,
  NULL
};

#line 1433 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_scalar_cell_type_0_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_scalar_cell_type_0_0
};

#line 1438 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_scalar_cell_type_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_scalar_cell_type_0_0
  }
};

#line 1447 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_scalar_cell_type_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_scalar_cell_type_0_0
};

#line 1452 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_scalar_cell_type_0[1] = {
  (MR_Integer) 0
};

#line 1457 "ml_backend.ml_global_data.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_global_data____Unify____ml_scalar_cell_type_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____ml_scalar_cell_type_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "ml_scalar_cell_type",
  {
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_scalar_cell_type_0
  },
  {
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_scalar_cell_type_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_scalar_cell_type_0
};

#line 1478 "ml_backend.ml_global_data.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_global_data____Unify____ml_scalar_cell_type_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____ml_scalar_cell_type_map_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "ml_scalar_cell_type_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1499 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_field_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_id_0
  }
};

#line 1507 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_vector_cell_group_0_0[5] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_field_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_initializer_0
};

#line 1516 "ml_backend.ml_global_data.c"
static const MR_ConstString ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_vector_cell_group_0_0[5] = {
  (MR_String) "mvcg_type",
  (MR_String) "mvcg_type_defn",
  (MR_String) "mvcg_field_ids",
  (MR_String) "mvcg_next_row",
  (MR_String) "mvcg_rows"
};

#line 1525 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_vector_cell_group_0_0 = {
  (MR_String) "ml_vector_cell_group",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_vector_cell_group_0_0,
  ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_vector_cell_group_0_0,
  NULL,
  NULL
};

#line 1540 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_vector_cell_group_0_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_vector_cell_group_0_0
};

#line 1545 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_vector_cell_group_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_vector_cell_group_0_0
  }
};

#line 1554 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_vector_cell_group_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_vector_cell_group_0_0
};

#line 1559 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_vector_cell_group_0[1] = {
  (MR_Integer) 0
};

#line 1564 "ml_backend.ml_global_data.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_global_data____Unify____ml_vector_cell_group_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____ml_vector_cell_group_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "ml_vector_cell_group",
  {
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_vector_cell_group_0
  },
  {
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_vector_cell_group_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_vector_cell_group_0
};

#line 1585 "ml_backend.ml_global_data.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_global_data____Unify____ml_vector_cell_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____ml_vector_cell_map_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "ml_vector_cell_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1606 "ml_backend.ml_global_data.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_type_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_global_data____Unify____ml_vector_cell_type_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____ml_vector_cell_type_map_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "ml_vector_cell_type_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &ml_backend__ml_global_data__tree234__ti_tree234_2list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1627 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_use_common_cells_0_0 = {
  (MR_String) "do_not_use_common_cells",
  (MR_Integer) 0
};

#line 1633 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_use_common_cells_0_1 = {
  (MR_String) "use_common_cells",
  (MR_Integer) 1
};

#line 1639 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_value_ordered_use_common_cells_0[2] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_use_common_cells_0_0,
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_use_common_cells_0_1
};

#line 1645 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_name_ordered_use_common_cells_0[2] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_use_common_cells_0_0,
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_use_common_cells_0_1
};

#line 1651 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_use_common_cells_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1657 "ml_backend.ml_global_data.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_use_common_cells_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_global_data____Unify____use_common_cells_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____use_common_cells_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "use_common_cells",
  {
    ml_backend__ml_global_data__ml_backend__ml_global_data__enum_name_ordered_use_common_cells_0
  },
  {
    ml_backend__ml_global_data__ml_backend__ml_global_data__enum_value_ordered_use_common_cells_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_use_common_cells_0
};

#line 1678 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____have_unboxed_floats_0_0_10001(
#line 1681 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 1683 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 1685 "ml_backend.ml_global_data.c"
{
#line 1687 "ml_backend.ml_global_data.c"
  {
#line 1689 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 1692 "ml_backend.ml_global_data.c"
    {
#line 1694 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____have_unboxed_floats_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 1697 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 1699 "ml_backend.ml_global_data.c"
  }
#line 1701 "ml_backend.ml_global_data.c"
}

#line 1704 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____have_unboxed_floats_0_0_10001(
#line 1707 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 1709 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 1711 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 1713 "ml_backend.ml_global_data.c"
{
#line 1715 "ml_backend.ml_global_data.c"
  {
#line 1717 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 1720 "ml_backend.ml_global_data.c"
    {
#line 1722 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____have_unboxed_floats_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 1725 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 1727 "ml_backend.ml_global_data.c"
  }
#line 1729 "ml_backend.ml_global_data.c"
}

#line 1732 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_alloc_id_map_0_0_10001(
#line 1735 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 1737 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 1739 "ml_backend.ml_global_data.c"
{
#line 1741 "ml_backend.ml_global_data.c"
  {
#line 1743 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 1746 "ml_backend.ml_global_data.c"
    {
#line 1748 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_alloc_id_map_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 1751 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 1753 "ml_backend.ml_global_data.c"
  }
#line 1755 "ml_backend.ml_global_data.c"
}

#line 1758 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_alloc_id_map_0_0_10001(
#line 1761 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 1763 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 1765 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 1767 "ml_backend.ml_global_data.c"
{
#line 1769 "ml_backend.ml_global_data.c"
  {
#line 1771 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 1774 "ml_backend.ml_global_data.c"
    {
#line 1776 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_alloc_id_map_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 1779 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 1781 "ml_backend.ml_global_data.c"
  }
#line 1783 "ml_backend.ml_global_data.c"
}

#line 1786 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_alloc_site_data_0_0_10001(
#line 1789 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 1791 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 1793 "ml_backend.ml_global_data.c"
{
#line 1795 "ml_backend.ml_global_data.c"
  {
#line 1797 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 1800 "ml_backend.ml_global_data.c"
    {
#line 1802 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_alloc_site_data_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 1805 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 1807 "ml_backend.ml_global_data.c"
  }
#line 1809 "ml_backend.ml_global_data.c"
}

#line 1812 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_alloc_site_data_0_0_10001(
#line 1815 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 1817 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 1819 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 1821 "ml_backend.ml_global_data.c"
{
#line 1823 "ml_backend.ml_global_data.c"
  {
#line 1825 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 1828 "ml_backend.ml_global_data.c"
    {
#line 1830 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_alloc_site_data_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 1833 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 1835 "ml_backend.ml_global_data.c"
  }
#line 1837 "ml_backend.ml_global_data.c"
}

#line 1840 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_global_data_0_0_10001(
#line 1843 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 1845 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 1847 "ml_backend.ml_global_data.c"
{
#line 1849 "ml_backend.ml_global_data.c"
  {
#line 1851 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 1854 "ml_backend.ml_global_data.c"
    {
#line 1856 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_global_data_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 1859 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 1861 "ml_backend.ml_global_data.c"
  }
#line 1863 "ml_backend.ml_global_data.c"
}

#line 1866 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_global_data_0_0_10001(
#line 1869 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 1871 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 1873 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 1875 "ml_backend.ml_global_data.c"
{
#line 1877 "ml_backend.ml_global_data.c"
  {
#line 1879 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 1882 "ml_backend.ml_global_data.c"
    {
#line 1884 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_global_data_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 1887 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 1889 "ml_backend.ml_global_data.c"
  }
#line 1891 "ml_backend.ml_global_data.c"
}

#line 1894 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_rtti_rval_type_map_0_0_10001(
#line 1897 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 1899 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 1901 "ml_backend.ml_global_data.c"
{
#line 1903 "ml_backend.ml_global_data.c"
  {
#line 1905 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 1908 "ml_backend.ml_global_data.c"
    {
#line 1910 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_rtti_rval_type_map_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 1913 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 1915 "ml_backend.ml_global_data.c"
  }
#line 1917 "ml_backend.ml_global_data.c"
}

#line 1920 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_rtti_rval_type_map_0_0_10001(
#line 1923 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 1925 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 1927 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 1929 "ml_backend.ml_global_data.c"
{
#line 1931 "ml_backend.ml_global_data.c"
  {
#line 1933 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 1936 "ml_backend.ml_global_data.c"
    {
#line 1938 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_rtti_rval_type_map_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 1941 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 1943 "ml_backend.ml_global_data.c"
  }
#line 1945 "ml_backend.ml_global_data.c"
}

#line 1948 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_rval_and_type_0_0_10001(
#line 1951 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 1953 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 1955 "ml_backend.ml_global_data.c"
{
#line 1957 "ml_backend.ml_global_data.c"
  {
#line 1959 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 1962 "ml_backend.ml_global_data.c"
    {
#line 1964 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_rval_and_type_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 1967 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 1969 "ml_backend.ml_global_data.c"
  }
#line 1971 "ml_backend.ml_global_data.c"
}

#line 1974 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_rval_and_type_0_0_10001(
#line 1977 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 1979 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 1981 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 1983 "ml_backend.ml_global_data.c"
{
#line 1985 "ml_backend.ml_global_data.c"
  {
#line 1987 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 1990 "ml_backend.ml_global_data.c"
    {
#line 1992 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_rval_and_type_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 1995 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 1997 "ml_backend.ml_global_data.c"
  }
#line 1999 "ml_backend.ml_global_data.c"
}

#line 2002 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_group_0_0_10001(
#line 2005 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 2007 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 2009 "ml_backend.ml_global_data.c"
{
#line 2011 "ml_backend.ml_global_data.c"
  {
#line 2013 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 2016 "ml_backend.ml_global_data.c"
    {
#line 2018 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_scalar_cell_group_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 2021 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 2023 "ml_backend.ml_global_data.c"
  }
#line 2025 "ml_backend.ml_global_data.c"
}

#line 2028 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_group_0_0_10001(
#line 2031 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 2033 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 2035 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 2037 "ml_backend.ml_global_data.c"
{
#line 2039 "ml_backend.ml_global_data.c"
  {
#line 2041 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 2044 "ml_backend.ml_global_data.c"
    {
#line 2046 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_scalar_cell_group_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 2049 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 2051 "ml_backend.ml_global_data.c"
  }
#line 2053 "ml_backend.ml_global_data.c"
}

#line 2056 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_map_0_0_10001(
#line 2059 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 2061 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 2063 "ml_backend.ml_global_data.c"
{
#line 2065 "ml_backend.ml_global_data.c"
  {
#line 2067 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 2070 "ml_backend.ml_global_data.c"
    {
#line 2072 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_scalar_cell_map_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 2075 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 2077 "ml_backend.ml_global_data.c"
  }
#line 2079 "ml_backend.ml_global_data.c"
}

#line 2082 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_map_0_0_10001(
#line 2085 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 2087 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 2089 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 2091 "ml_backend.ml_global_data.c"
{
#line 2093 "ml_backend.ml_global_data.c"
  {
#line 2095 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 2098 "ml_backend.ml_global_data.c"
    {
#line 2100 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_scalar_cell_map_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 2103 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 2105 "ml_backend.ml_global_data.c"
  }
#line 2107 "ml_backend.ml_global_data.c"
}

#line 2110 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_0_0_10001(
#line 2113 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 2115 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 2117 "ml_backend.ml_global_data.c"
{
#line 2119 "ml_backend.ml_global_data.c"
  {
#line 2121 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 2124 "ml_backend.ml_global_data.c"
    {
#line 2126 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_scalar_cell_type_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 2129 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 2131 "ml_backend.ml_global_data.c"
  }
#line 2133 "ml_backend.ml_global_data.c"
}

#line 2136 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_0_0_10001(
#line 2139 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 2141 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 2143 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 2145 "ml_backend.ml_global_data.c"
{
#line 2147 "ml_backend.ml_global_data.c"
  {
#line 2149 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 2152 "ml_backend.ml_global_data.c"
    {
#line 2154 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_scalar_cell_type_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 2157 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 2159 "ml_backend.ml_global_data.c"
  }
#line 2161 "ml_backend.ml_global_data.c"
}

#line 2164 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_map_0_0_10001(
#line 2167 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 2169 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 2171 "ml_backend.ml_global_data.c"
{
#line 2173 "ml_backend.ml_global_data.c"
  {
#line 2175 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 2178 "ml_backend.ml_global_data.c"
    {
#line 2180 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_scalar_cell_type_map_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 2183 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 2185 "ml_backend.ml_global_data.c"
  }
#line 2187 "ml_backend.ml_global_data.c"
}

#line 2190 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_map_0_0_10001(
#line 2193 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 2195 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 2197 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 2199 "ml_backend.ml_global_data.c"
{
#line 2201 "ml_backend.ml_global_data.c"
  {
#line 2203 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 2206 "ml_backend.ml_global_data.c"
    {
#line 2208 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_scalar_cell_type_map_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 2211 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 2213 "ml_backend.ml_global_data.c"
  }
#line 2215 "ml_backend.ml_global_data.c"
}

#line 2218 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_group_0_0_10001(
#line 2221 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 2223 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 2225 "ml_backend.ml_global_data.c"
{
#line 2227 "ml_backend.ml_global_data.c"
  {
#line 2229 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 2232 "ml_backend.ml_global_data.c"
    {
#line 2234 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_vector_cell_group_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 2237 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 2239 "ml_backend.ml_global_data.c"
  }
#line 2241 "ml_backend.ml_global_data.c"
}

#line 2244 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_group_0_0_10001(
#line 2247 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 2249 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 2251 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 2253 "ml_backend.ml_global_data.c"
{
#line 2255 "ml_backend.ml_global_data.c"
  {
#line 2257 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 2260 "ml_backend.ml_global_data.c"
    {
#line 2262 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_vector_cell_group_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 2265 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 2267 "ml_backend.ml_global_data.c"
  }
#line 2269 "ml_backend.ml_global_data.c"
}

#line 2272 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_map_0_0_10001(
#line 2275 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 2277 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 2279 "ml_backend.ml_global_data.c"
{
#line 2281 "ml_backend.ml_global_data.c"
  {
#line 2283 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 2286 "ml_backend.ml_global_data.c"
    {
#line 2288 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_vector_cell_map_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 2291 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 2293 "ml_backend.ml_global_data.c"
  }
#line 2295 "ml_backend.ml_global_data.c"
}

#line 2298 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_map_0_0_10001(
#line 2301 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 2303 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 2305 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 2307 "ml_backend.ml_global_data.c"
{
#line 2309 "ml_backend.ml_global_data.c"
  {
#line 2311 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 2314 "ml_backend.ml_global_data.c"
    {
#line 2316 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_vector_cell_map_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 2319 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 2321 "ml_backend.ml_global_data.c"
  }
#line 2323 "ml_backend.ml_global_data.c"
}

#line 2326 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_type_map_0_0_10001(
#line 2329 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 2331 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 2333 "ml_backend.ml_global_data.c"
{
#line 2335 "ml_backend.ml_global_data.c"
  {
#line 2337 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 2340 "ml_backend.ml_global_data.c"
    {
#line 2342 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_vector_cell_type_map_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 2345 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 2347 "ml_backend.ml_global_data.c"
  }
#line 2349 "ml_backend.ml_global_data.c"
}

#line 2352 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_type_map_0_0_10001(
#line 2355 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 2357 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 2359 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 2361 "ml_backend.ml_global_data.c"
{
#line 2363 "ml_backend.ml_global_data.c"
  {
#line 2365 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 2368 "ml_backend.ml_global_data.c"
    {
#line 2370 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_vector_cell_type_map_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 2373 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 2375 "ml_backend.ml_global_data.c"
  }
#line 2377 "ml_backend.ml_global_data.c"
}

#line 2380 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____use_common_cells_0_0_10001(
#line 2383 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 2385 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 2387 "ml_backend.ml_global_data.c"
{
#line 2389 "ml_backend.ml_global_data.c"
  {
#line 2391 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 2394 "ml_backend.ml_global_data.c"
    {
#line 2396 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____use_common_cells_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 2399 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 2401 "ml_backend.ml_global_data.c"
  }
#line 2403 "ml_backend.ml_global_data.c"
}

#line 2406 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____use_common_cells_0_0_10001(
#line 2409 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 2411 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 2413 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 2415 "ml_backend.ml_global_data.c"
{
#line 2417 "ml_backend.ml_global_data.c"
  {
#line 2419 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 2422 "ml_backend.ml_global_data.c"
    {
#line 2424 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____use_common_cells_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 2427 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 2429 "ml_backend.ml_global_data.c"
  }
#line 2431 "ml_backend.ml_global_data.c"
}

#line 40 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data____Compare____use_common_cells_0_0(
#line 40 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 40 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 40 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
#line 40 "ml_global_data.m"
{
#line 40 "ml_global_data.m"
  {
#line 40 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 40 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__Cast_HeadVar1_4 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;
#line 40 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__Cast_HeadVar2_5 = (MR_Integer) ml_backend__ml_global_data__HeadVar__3_3;

#line 40 "ml_global_data.m"
    {
#line 40 "ml_global_data.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_global_data__HeadVar__1_1, ml_backend__ml_global_data__Cast_HeadVar1_4, ml_backend__ml_global_data__Cast_HeadVar2_5);
#line 40 "ml_global_data.m"
      return;
    }
#line 40 "ml_global_data.m"
  }
#line 40 "ml_global_data.m"
}

#line 40 "ml_global_data.m"
MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____use_common_cells_0_0(
#line 40 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_1,
#line 40 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
#line 40 "ml_global_data.m"
{
#line 2475 "ml_backend.ml_global_data.c"
  {
#line 2477 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__HeadVar__2_1 == ml_backend__ml_global_data__HeadVar__2_2);

#line 2480 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 2482 "ml_backend.ml_global_data.c"
  }
#line 40 "ml_global_data.m"
}

#line 232 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_type_map_0_0(
#line 232 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 232 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 232 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
#line 232 "ml_global_data.m"
{
#line 232 "ml_global_data.m"
  {
#line 232 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 232 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_4 = ml_backend__ml_global_data__HeadVar__2_2;
#line 232 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_5 = ml_backend__ml_global_data__HeadVar__3_3;

#line 232 "ml_global_data.m"
    {
#line 232 "ml_global_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[4], ml_backend__ml_global_data__HeadVar__1_1, ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_5)));
#line 232 "ml_global_data.m"
      return;
    }
#line 232 "ml_global_data.m"
  }
#line 232 "ml_global_data.m"
}

#line 232 "ml_global_data.m"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_type_map_0_0(
#line 232 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 232 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
#line 232 "ml_global_data.m"
{
#line 232 "ml_global_data.m"
  {
#line 232 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 232 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_3 = ml_backend__ml_global_data__HeadVar__1_1;
#line 232 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_4 = ml_backend__ml_global_data__HeadVar__2_2;

#line 232 "ml_global_data.m"
    {
#line 232 "ml_global_data.m"
      return ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[4], ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_4)));
    }
#line 232 "ml_global_data.m"
    return ml_backend__ml_global_data__succeeded;
#line 232 "ml_global_data.m"
  }
#line 232 "ml_global_data.m"
}

#line 62 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_map_0_0(
#line 62 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 62 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 62 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
#line 62 "ml_global_data.m"
{
#line 62 "ml_global_data.m"
  {
#line 62 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 62 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_4 = ml_backend__ml_global_data__HeadVar__2_2;
#line 62 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_5 = ml_backend__ml_global_data__HeadVar__3_3;

#line 62 "ml_global_data.m"
    {
#line 62 "ml_global_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[5], ml_backend__ml_global_data__HeadVar__1_1, ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_5)));
#line 62 "ml_global_data.m"
      return;
    }
#line 62 "ml_global_data.m"
  }
#line 62 "ml_global_data.m"
}

#line 62 "ml_global_data.m"
MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_map_0_0(
#line 62 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 62 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
#line 62 "ml_global_data.m"
{
#line 62 "ml_global_data.m"
  {
#line 62 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 62 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_3 = ml_backend__ml_global_data__HeadVar__1_1;
#line 62 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_4 = ml_backend__ml_global_data__HeadVar__2_2;

#line 62 "ml_global_data.m"
    {
#line 62 "ml_global_data.m"
      return ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[5], ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_4)));
    }
#line 62 "ml_global_data.m"
    return ml_backend__ml_global_data__succeeded;
#line 62 "ml_global_data.m"
  }
#line 62 "ml_global_data.m"
}

#line 65 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_group_0_0(
#line 65 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 65 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 65 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
#line 65 "ml_global_data.m"
{
#line 65 "ml_global_data.m"
  {
#line 65 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 65 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastX_18 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;
#line 65 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastY_19 = (MR_Integer) ml_backend__ml_global_data__HeadVar__3_3;

#line 65 "ml_global_data.m"
    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_18 == ml_backend__ml_global_data__CastY_19);
#line 65 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 2635 "ml_backend.ml_global_data.c"
      *ml_backend__ml_global_data__HeadVar__1_1 = (MR_Integer) 0;
#line 65 "ml_global_data.m"
    else
#line 65 "ml_global_data.m"
      {
#line 65 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 65 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 65 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 2)));
#line 65 "ml_global_data.m"
        MR_Integer ml_backend__ml_global_data__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 3)));
#line 65 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 4)));
#line 65 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 0)));
#line 65 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 1)));
#line 65 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 2)));
#line 65 "ml_global_data.m"
        MR_Integer ml_backend__ml_global_data__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 3)));
#line 65 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 4)));
#line 65 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_14_14;

#line 65 "ml_global_data.m"
        {
#line 65 "ml_global_data.m"
          ml_backend__mlds____Compare____mlds_type_0_0(&ml_backend__ml_global_data__V_14_14, ml_backend__ml_global_data__V_4_4, ml_backend__ml_global_data__V_9_9);
        }
#line 2669 "ml_backend.ml_global_data.c"
        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_14_14 == (MR_Integer) 0);
#line 65 "ml_global_data.m"
        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 65 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 65 "ml_global_data.m"
          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_14_14;
#line 65 "ml_global_data.m"
        else
#line 65 "ml_global_data.m"
          {
#line 65 "ml_global_data.m"
            MR_Word ml_backend__ml_global_data__V_15_15;

#line 65 "ml_global_data.m"
            {
#line 65 "ml_global_data.m"
              ml_backend__mlds____Compare____mlds_defn_0_0(&ml_backend__ml_global_data__V_15_15, ml_backend__ml_global_data__V_5_5, ml_backend__ml_global_data__V_10_10);
            }
#line 2689 "ml_backend.ml_global_data.c"
            ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_15_15 == (MR_Integer) 0);
#line 65 "ml_global_data.m"
            ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 65 "ml_global_data.m"
            if (ml_backend__ml_global_data__succeeded)
#line 65 "ml_global_data.m"
              *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_15_15;
#line 65 "ml_global_data.m"
            else
#line 65 "ml_global_data.m"
              {
#line 65 "ml_global_data.m"
                MR_Word ml_backend__ml_global_data__V_16_16;

#line 65 "ml_global_data.m"
                {
#line 65 "ml_global_data.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[3], &ml_backend__ml_global_data__V_16_16, ((MR_Box) (ml_backend__ml_global_data__V_6_6)), ((MR_Box) (ml_backend__ml_global_data__V_11_11)));
                }
#line 2709 "ml_backend.ml_global_data.c"
                ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_16_16 == (MR_Integer) 0);
#line 65 "ml_global_data.m"
                ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 65 "ml_global_data.m"
                if (ml_backend__ml_global_data__succeeded)
#line 65 "ml_global_data.m"
                  *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_16_16;
#line 65 "ml_global_data.m"
                else
#line 65 "ml_global_data.m"
                  {
#line 65 "ml_global_data.m"
                    MR_Word ml_backend__ml_global_data__V_17_17;

#line 65 "ml_global_data.m"
                    {
#line 65 "ml_global_data.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_global_data__V_17_17, ml_backend__ml_global_data__V_7_7, ml_backend__ml_global_data__V_12_12);
                    }
#line 2729 "ml_backend.ml_global_data.c"
                    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_17_17 == (MR_Integer) 0);
#line 65 "ml_global_data.m"
                    ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 65 "ml_global_data.m"
                    if (ml_backend__ml_global_data__succeeded)
#line 65 "ml_global_data.m"
                      *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_17_17;
#line 65 "ml_global_data.m"
                    else
#line 65 "ml_global_data.m"
                      {
#line 65 "ml_global_data.m"
                        {
#line 65 "ml_global_data.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[2], ml_backend__ml_global_data__HeadVar__1_1, ((MR_Box) (ml_backend__ml_global_data__V_8_8)), ((MR_Box) (ml_backend__ml_global_data__V_13_13)));
#line 65 "ml_global_data.m"
                          return;
                        }
#line 65 "ml_global_data.m"
                      }
#line 65 "ml_global_data.m"
                  }
#line 65 "ml_global_data.m"
              }
#line 65 "ml_global_data.m"
          }
#line 65 "ml_global_data.m"
      }
#line 65 "ml_global_data.m"
  }
#line 65 "ml_global_data.m"
}

#line 65 "ml_global_data.m"
MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_group_0_0(
#line 65 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 65 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
#line 65 "ml_global_data.m"
{
#line 65 "ml_global_data.m"
  {
#line 65 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 65 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastX_13 = (MR_Integer) ml_backend__ml_global_data__HeadVar__1_1;
#line 65 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastY_14 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;

#line 65 "ml_global_data.m"
    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_13 == ml_backend__ml_global_data__CastY_14);
#line 65 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 65 "ml_global_data.m"
      ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 65 "ml_global_data.m"
    else
#line 65 "ml_global_data.m"
      {
#line 65 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeInfo_17_17;
#line 65 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeInfo_18_18;
#line 65 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 0)));
#line 65 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 1)));
#line 65 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 2)));
#line 65 "ml_global_data.m"
        MR_Integer ml_backend__ml_global_data__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 3)));
#line 65 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 4)));
#line 65 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 65 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 65 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 2)));
#line 65 "ml_global_data.m"
        MR_Integer ml_backend__ml_global_data__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 3)));
#line 65 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 4)));

#line 2816 "ml_backend.ml_global_data.c"
        {
#line 2818 "ml_backend.ml_global_data.c"
          ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ml_backend__ml_global_data__V_3_3, ml_backend__ml_global_data__V_8_8);
        }
#line 65 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 65 "ml_global_data.m"
          {
#line 2825 "ml_backend.ml_global_data.c"
            {
#line 2827 "ml_backend.ml_global_data.c"
              ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____mlds_defn_0_0(ml_backend__ml_global_data__V_4_4, ml_backend__ml_global_data__V_9_9);
            }
#line 65 "ml_global_data.m"
            if (ml_backend__ml_global_data__succeeded)
#line 65 "ml_global_data.m"
              {
#line 2834 "ml_backend.ml_global_data.c"
                ml_backend__ml_global_data__TypeInfo_17_17 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[3];
#line 2836 "ml_backend.ml_global_data.c"
                {
#line 2838 "ml_backend.ml_global_data.c"
                  ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_17_17, ((MR_Box) (ml_backend__ml_global_data__V_5_5)), ((MR_Box) (ml_backend__ml_global_data__V_10_10)));
                }
#line 65 "ml_global_data.m"
                if (ml_backend__ml_global_data__succeeded)
#line 65 "ml_global_data.m"
                  {
#line 2845 "ml_backend.ml_global_data.c"
                    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_6_6 == ml_backend__ml_global_data__V_11_11);
#line 65 "ml_global_data.m"
                    if (ml_backend__ml_global_data__succeeded)
#line 65 "ml_global_data.m"
                      {
#line 2851 "ml_backend.ml_global_data.c"
                        ml_backend__ml_global_data__TypeInfo_18_18 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[2];
#line 2853 "ml_backend.ml_global_data.c"
                        {
#line 2855 "ml_backend.ml_global_data.c"
                          return ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_18_18, ((MR_Box) (ml_backend__ml_global_data__V_7_7)), ((MR_Box) (ml_backend__ml_global_data__V_12_12)));
                        }
#line 65 "ml_global_data.m"
                      }
#line 65 "ml_global_data.m"
                  }
#line 65 "ml_global_data.m"
              }
#line 65 "ml_global_data.m"
          }
#line 65 "ml_global_data.m"
      }
#line 65 "ml_global_data.m"
    return ml_backend__ml_global_data__succeeded;
#line 65 "ml_global_data.m"
  }
#line 65 "ml_global_data.m"
}

#line 229 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_map_0_0(
#line 229 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 229 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 229 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
#line 229 "ml_global_data.m"
{
#line 229 "ml_global_data.m"
  {
#line 229 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 229 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_4 = ml_backend__ml_global_data__HeadVar__2_2;
#line 229 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_5 = ml_backend__ml_global_data__HeadVar__3_3;

#line 229 "ml_global_data.m"
    {
#line 229 "ml_global_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[2], ml_backend__ml_global_data__HeadVar__1_1, ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_5)));
#line 229 "ml_global_data.m"
      return;
    }
#line 229 "ml_global_data.m"
  }
#line 229 "ml_global_data.m"
}

#line 229 "ml_global_data.m"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_map_0_0(
#line 229 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 229 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
#line 229 "ml_global_data.m"
{
#line 229 "ml_global_data.m"
  {
#line 229 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 229 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_3 = ml_backend__ml_global_data__HeadVar__1_1;
#line 229 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_4 = ml_backend__ml_global_data__HeadVar__2_2;

#line 229 "ml_global_data.m"
    {
#line 229 "ml_global_data.m"
      return ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[2], ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_4)));
    }
#line 229 "ml_global_data.m"
    return ml_backend__ml_global_data__succeeded;
#line 229 "ml_global_data.m"
  }
#line 229 "ml_global_data.m"
}

#line 227 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_0_0(
#line 227 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 227 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 227 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
#line 227 "ml_global_data.m"
{
#line 227 "ml_global_data.m"
  {
#line 227 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 227 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastX_9 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;
#line 227 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastY_10 = (MR_Integer) ml_backend__ml_global_data__HeadVar__3_3;

#line 227 "ml_global_data.m"
    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_9 == ml_backend__ml_global_data__CastY_10);
#line 227 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 2961 "ml_backend.ml_global_data.c"
      *ml_backend__ml_global_data__HeadVar__1_1 = (MR_Integer) 0;
#line 227 "ml_global_data.m"
    else
#line 227 "ml_global_data.m"
      {
#line 227 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 227 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 227 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 0)));
#line 227 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 1)));
#line 227 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_8_8;

#line 227 "ml_global_data.m"
        {
#line 227 "ml_global_data.m"
          ml_backend__mlds____Compare____mlds_type_0_0(&ml_backend__ml_global_data__V_8_8, ml_backend__ml_global_data__V_4_4, ml_backend__ml_global_data__V_6_6);
        }
#line 2983 "ml_backend.ml_global_data.c"
        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_8_8 == (MR_Integer) 0);
#line 227 "ml_global_data.m"
        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 227 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 227 "ml_global_data.m"
          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_8_8;
#line 227 "ml_global_data.m"
        else
#line 227 "ml_global_data.m"
          {
#line 227 "ml_global_data.m"
            ml_backend__mlds____Compare____initializer_array_size_0_0(ml_backend__ml_global_data__HeadVar__1_1, ml_backend__ml_global_data__V_5_5, ml_backend__ml_global_data__V_7_7);
#line 227 "ml_global_data.m"
            return;
          }
#line 227 "ml_global_data.m"
      }
#line 227 "ml_global_data.m"
  }
#line 227 "ml_global_data.m"
}

#line 227 "ml_global_data.m"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_0_0(
#line 227 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 227 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
#line 227 "ml_global_data.m"
{
#line 227 "ml_global_data.m"
  {
#line 227 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 227 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastX_7 = (MR_Integer) ml_backend__ml_global_data__HeadVar__1_1;
#line 227 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastY_8 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;

#line 227 "ml_global_data.m"
    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_7 == ml_backend__ml_global_data__CastY_8);
#line 227 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 227 "ml_global_data.m"
      ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 227 "ml_global_data.m"
    else
#line 227 "ml_global_data.m"
      {
#line 227 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 0)));
#line 227 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 1)));
#line 227 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 227 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));

#line 3044 "ml_backend.ml_global_data.c"
        {
#line 3046 "ml_backend.ml_global_data.c"
          ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ml_backend__ml_global_data__V_3_3, ml_backend__ml_global_data__V_5_5);
        }
#line 227 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 3051 "ml_backend.ml_global_data.c"
          {
#line 3053 "ml_backend.ml_global_data.c"
            return ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____initializer_array_size_0_0(ml_backend__ml_global_data__V_4_4, ml_backend__ml_global_data__V_6_6);
          }
#line 227 "ml_global_data.m"
      }
#line 227 "ml_global_data.m"
    return ml_backend__ml_global_data__succeeded;
#line 227 "ml_global_data.m"
  }
#line 227 "ml_global_data.m"
}

#line 48 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_map_0_0(
#line 48 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 48 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 48 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
#line 48 "ml_global_data.m"
{
#line 48 "ml_global_data.m"
  {
#line 48 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 48 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_4 = ml_backend__ml_global_data__HeadVar__2_2;
#line 48 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_5 = ml_backend__ml_global_data__HeadVar__3_3;

#line 48 "ml_global_data.m"
    {
#line 48 "ml_global_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[3], ml_backend__ml_global_data__HeadVar__1_1, ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_5)));
#line 48 "ml_global_data.m"
      return;
    }
#line 48 "ml_global_data.m"
  }
#line 48 "ml_global_data.m"
}

#line 48 "ml_global_data.m"
MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_map_0_0(
#line 48 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 48 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
#line 48 "ml_global_data.m"
{
#line 48 "ml_global_data.m"
  {
#line 48 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 48 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_3 = ml_backend__ml_global_data__HeadVar__1_1;
#line 48 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_4 = ml_backend__ml_global_data__HeadVar__2_2;

#line 48 "ml_global_data.m"
    {
#line 48 "ml_global_data.m"
      return ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[3], ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_4)));
    }
#line 48 "ml_global_data.m"
    return ml_backend__ml_global_data__succeeded;
#line 48 "ml_global_data.m"
  }
#line 48 "ml_global_data.m"
}

#line 51 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_group_0_0(
#line 51 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 51 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 51 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
#line 51 "ml_global_data.m"
{
#line 51 "ml_global_data.m"
  {
#line 51 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 51 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastX_18 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;
#line 51 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastY_19 = (MR_Integer) ml_backend__ml_global_data__HeadVar__3_3;

#line 51 "ml_global_data.m"
    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_18 == ml_backend__ml_global_data__CastY_19);
#line 51 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 3151 "ml_backend.ml_global_data.c"
      *ml_backend__ml_global_data__HeadVar__1_1 = (MR_Integer) 0;
#line 51 "ml_global_data.m"
    else
#line 51 "ml_global_data.m"
      {
#line 51 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 51 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 51 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 2)));
#line 51 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 3)));
#line 51 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 4)));
#line 51 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 0)));
#line 51 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 1)));
#line 51 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 2)));
#line 51 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 3)));
#line 51 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 4)));
#line 51 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_14_14;

#line 51 "ml_global_data.m"
        {
#line 51 "ml_global_data.m"
          ml_backend__mlds____Compare____mlds_type_0_0(&ml_backend__ml_global_data__V_14_14, ml_backend__ml_global_data__V_4_4, ml_backend__ml_global_data__V_9_9);
        }
#line 3185 "ml_backend.ml_global_data.c"
        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_14_14 == (MR_Integer) 0);
#line 51 "ml_global_data.m"
        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 51 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 51 "ml_global_data.m"
          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_14_14;
#line 51 "ml_global_data.m"
        else
#line 51 "ml_global_data.m"
          {
#line 51 "ml_global_data.m"
            MR_Word ml_backend__ml_global_data__V_15_15;

#line 51 "ml_global_data.m"
            {
#line 51 "ml_global_data.m"
              ml_backend__mlds____Compare____initializer_array_size_0_0(&ml_backend__ml_global_data__V_15_15, ml_backend__ml_global_data__V_5_5, ml_backend__ml_global_data__V_10_10);
            }
#line 3205 "ml_backend.ml_global_data.c"
            ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_15_15 == (MR_Integer) 0);
#line 51 "ml_global_data.m"
            ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 51 "ml_global_data.m"
            if (ml_backend__ml_global_data__succeeded)
#line 51 "ml_global_data.m"
              *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_15_15;
#line 51 "ml_global_data.m"
            else
#line 51 "ml_global_data.m"
              {
#line 51 "ml_global_data.m"
                MR_Word ml_backend__ml_global_data__V_16_16;

#line 51 "ml_global_data.m"
                {
#line 51 "ml_global_data.m"
                  mercury__counter____Compare____counter_0_0(&ml_backend__ml_global_data__V_16_16, ml_backend__ml_global_data__V_6_6, ml_backend__ml_global_data__V_11_11);
                }
#line 3225 "ml_backend.ml_global_data.c"
                ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_16_16 == (MR_Integer) 0);
#line 51 "ml_global_data.m"
                ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 51 "ml_global_data.m"
                if (ml_backend__ml_global_data__succeeded)
#line 51 "ml_global_data.m"
                  *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_16_16;
#line 51 "ml_global_data.m"
                else
#line 51 "ml_global_data.m"
                  {
#line 51 "ml_global_data.m"
                    MR_Word ml_backend__ml_global_data__V_17_17;

#line 51 "ml_global_data.m"
                    {
#line 51 "ml_global_data.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[6], &ml_backend__ml_global_data__V_17_17, ((MR_Box) (ml_backend__ml_global_data__V_7_7)), ((MR_Box) (ml_backend__ml_global_data__V_12_12)));
                    }
#line 3245 "ml_backend.ml_global_data.c"
                    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_17_17 == (MR_Integer) 0);
#line 51 "ml_global_data.m"
                    ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 51 "ml_global_data.m"
                    if (ml_backend__ml_global_data__succeeded)
#line 51 "ml_global_data.m"
                      *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_17_17;
#line 51 "ml_global_data.m"
                    else
#line 51 "ml_global_data.m"
                      {
#line 51 "ml_global_data.m"
                        {
#line 51 "ml_global_data.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[2], ml_backend__ml_global_data__HeadVar__1_1, ((MR_Box) (ml_backend__ml_global_data__V_8_8)), ((MR_Box) (ml_backend__ml_global_data__V_13_13)));
#line 51 "ml_global_data.m"
                          return;
                        }
#line 51 "ml_global_data.m"
                      }
#line 51 "ml_global_data.m"
                  }
#line 51 "ml_global_data.m"
              }
#line 51 "ml_global_data.m"
          }
#line 51 "ml_global_data.m"
      }
#line 51 "ml_global_data.m"
  }
#line 51 "ml_global_data.m"
}

#line 51 "ml_global_data.m"
MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_group_0_0(
#line 51 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 51 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
#line 51 "ml_global_data.m"
{
#line 51 "ml_global_data.m"
  {
#line 51 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 51 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastX_13 = (MR_Integer) ml_backend__ml_global_data__HeadVar__1_1;
#line 51 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastY_14 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;

#line 51 "ml_global_data.m"
    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_13 == ml_backend__ml_global_data__CastY_14);
#line 51 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 51 "ml_global_data.m"
      ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 51 "ml_global_data.m"
    else
#line 51 "ml_global_data.m"
      {
#line 51 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeInfo_18_18;
#line 51 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeInfo_19_19;
#line 51 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 0)));
#line 51 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 1)));
#line 51 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 2)));
#line 51 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 3)));
#line 51 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 4)));
#line 51 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 51 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 51 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 2)));
#line 51 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 3)));
#line 51 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 4)));

#line 3332 "ml_backend.ml_global_data.c"
        {
#line 3334 "ml_backend.ml_global_data.c"
          ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ml_backend__ml_global_data__V_3_3, ml_backend__ml_global_data__V_8_8);
        }
#line 51 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 51 "ml_global_data.m"
          {
#line 3341 "ml_backend.ml_global_data.c"
            {
#line 3343 "ml_backend.ml_global_data.c"
              ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____initializer_array_size_0_0(ml_backend__ml_global_data__V_4_4, ml_backend__ml_global_data__V_9_9);
            }
#line 51 "ml_global_data.m"
            if (ml_backend__ml_global_data__succeeded)
#line 51 "ml_global_data.m"
              {
#line 3350 "ml_backend.ml_global_data.c"
                {
#line 3352 "ml_backend.ml_global_data.c"
                  ml_backend__ml_global_data__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_global_data__V_5_5, ml_backend__ml_global_data__V_10_10);
                }
#line 51 "ml_global_data.m"
                if (ml_backend__ml_global_data__succeeded)
#line 51 "ml_global_data.m"
                  {
#line 3359 "ml_backend.ml_global_data.c"
                    ml_backend__ml_global_data__TypeInfo_18_18 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[6];
#line 3361 "ml_backend.ml_global_data.c"
                    {
#line 3363 "ml_backend.ml_global_data.c"
                      ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_18_18, ((MR_Box) (ml_backend__ml_global_data__V_6_6)), ((MR_Box) (ml_backend__ml_global_data__V_11_11)));
                    }
#line 51 "ml_global_data.m"
                    if (ml_backend__ml_global_data__succeeded)
#line 51 "ml_global_data.m"
                      {
#line 3370 "ml_backend.ml_global_data.c"
                        ml_backend__ml_global_data__TypeInfo_19_19 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[2];
#line 3372 "ml_backend.ml_global_data.c"
                        {
#line 3374 "ml_backend.ml_global_data.c"
                          return ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_19_19, ((MR_Box) (ml_backend__ml_global_data__V_7_7)), ((MR_Box) (ml_backend__ml_global_data__V_12_12)));
                        }
#line 51 "ml_global_data.m"
                      }
#line 51 "ml_global_data.m"
                  }
#line 51 "ml_global_data.m"
              }
#line 51 "ml_global_data.m"
          }
#line 51 "ml_global_data.m"
      }
#line 51 "ml_global_data.m"
    return ml_backend__ml_global_data__succeeded;
#line 51 "ml_global_data.m"
  }
#line 51 "ml_global_data.m"
}

#line 131 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data____Compare____ml_rval_and_type_0_0(
#line 131 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 131 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 131 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
#line 131 "ml_global_data.m"
{
#line 131 "ml_global_data.m"
  {
#line 131 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 131 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastX_9 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;
#line 131 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastY_10 = (MR_Integer) ml_backend__ml_global_data__HeadVar__3_3;

#line 131 "ml_global_data.m"
    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_9 == ml_backend__ml_global_data__CastY_10);
#line 131 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 3418 "ml_backend.ml_global_data.c"
      *ml_backend__ml_global_data__HeadVar__1_1 = (MR_Integer) 0;
#line 131 "ml_global_data.m"
    else
#line 131 "ml_global_data.m"
      {
#line 131 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 131 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 131 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 0)));
#line 131 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 1)));
#line 131 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_8_8;

#line 131 "ml_global_data.m"
        {
#line 131 "ml_global_data.m"
          ml_backend__mlds____Compare____mlds_rval_0_0(&ml_backend__ml_global_data__V_8_8, ml_backend__ml_global_data__V_4_4, ml_backend__ml_global_data__V_6_6);
        }
#line 3440 "ml_backend.ml_global_data.c"
        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_8_8 == (MR_Integer) 0);
#line 131 "ml_global_data.m"
        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 131 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 131 "ml_global_data.m"
          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_8_8;
#line 131 "ml_global_data.m"
        else
#line 131 "ml_global_data.m"
          {
#line 131 "ml_global_data.m"
            ml_backend__mlds____Compare____mlds_type_0_0(ml_backend__ml_global_data__HeadVar__1_1, ml_backend__ml_global_data__V_5_5, ml_backend__ml_global_data__V_7_7);
#line 131 "ml_global_data.m"
            return;
          }
#line 131 "ml_global_data.m"
      }
#line 131 "ml_global_data.m"
  }
#line 131 "ml_global_data.m"
}

#line 131 "ml_global_data.m"
MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_rval_and_type_0_0(
#line 131 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 131 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
#line 131 "ml_global_data.m"
{
#line 131 "ml_global_data.m"
  {
#line 131 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 131 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastX_7 = (MR_Integer) ml_backend__ml_global_data__HeadVar__1_1;
#line 131 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastY_8 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;

#line 131 "ml_global_data.m"
    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_7 == ml_backend__ml_global_data__CastY_8);
#line 131 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 131 "ml_global_data.m"
      ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 131 "ml_global_data.m"
    else
#line 131 "ml_global_data.m"
      {
#line 131 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 0)));
#line 131 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 1)));
#line 131 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 131 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));

#line 3501 "ml_backend.ml_global_data.c"
        {
#line 3503 "ml_backend.ml_global_data.c"
          ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ml_backend__ml_global_data__V_3_3, ml_backend__ml_global_data__V_5_5);
        }
#line 131 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 3508 "ml_backend.ml_global_data.c"
          {
#line 3510 "ml_backend.ml_global_data.c"
            return ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ml_backend__ml_global_data__V_4_4, ml_backend__ml_global_data__V_6_6);
          }
#line 131 "ml_global_data.m"
      }
#line 131 "ml_global_data.m"
    return ml_backend__ml_global_data__succeeded;
#line 131 "ml_global_data.m"
  }
#line 131 "ml_global_data.m"
}

#line 130 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data____Compare____ml_rtti_rval_type_map_0_0(
#line 130 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 130 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 130 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
#line 130 "ml_global_data.m"
{
#line 130 "ml_global_data.m"
  {
#line 130 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 130 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_4 = ml_backend__ml_global_data__HeadVar__2_2;
#line 130 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_5 = ml_backend__ml_global_data__HeadVar__3_3;

#line 130 "ml_global_data.m"
    {
#line 130 "ml_global_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[1], ml_backend__ml_global_data__HeadVar__1_1, ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_5)));
#line 130 "ml_global_data.m"
      return;
    }
#line 130 "ml_global_data.m"
  }
#line 130 "ml_global_data.m"
}

#line 130 "ml_global_data.m"
MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_rtti_rval_type_map_0_0(
#line 130 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 130 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
#line 130 "ml_global_data.m"
{
#line 130 "ml_global_data.m"
  {
#line 130 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 130 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_3 = ml_backend__ml_global_data__HeadVar__1_1;
#line 130 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_4 = ml_backend__ml_global_data__HeadVar__2_2;

#line 130 "ml_global_data.m"
    {
#line 130 "ml_global_data.m"
      return ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[1], ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_4)));
    }
#line 130 "ml_global_data.m"
    return ml_backend__ml_global_data__succeeded;
#line 130 "ml_global_data.m"
  }
#line 130 "ml_global_data.m"
}

#line 238 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data____Compare____ml_global_data_0_0(
#line 238 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 238 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 238 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
#line 238 "ml_global_data.m"
{
#line 238 "ml_global_data.m"
  {
#line 238 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 238 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastX_45 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;
#line 238 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastY_46 = (MR_Integer) ml_backend__ml_global_data__HeadVar__3_3;

#line 238 "ml_global_data.m"
    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_45 == ml_backend__ml_global_data__CastY_46);
#line 238 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 3608 "ml_backend.ml_global_data.c"
      *ml_backend__ml_global_data__HeadVar__1_1 = (MR_Integer) 0;
#line 238 "ml_global_data.m"
    else
#line 238 "ml_global_data.m"
      {
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 2)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 3)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 4)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 5)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 6)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 7)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 8)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 9)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 10)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 11)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 12)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 13)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 0)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 1)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 2)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 3)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 4)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 5)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 6)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 7)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 8)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 9)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 10)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 11)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 12)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 13)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_32_32;

#line 238 "ml_global_data.m"
        {
#line 238 "ml_global_data.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[1], &ml_backend__ml_global_data__V_32_32, ((MR_Box) (ml_backend__ml_global_data__V_4_4)), ((MR_Box) (ml_backend__ml_global_data__V_18_18)));
        }
#line 3678 "ml_backend.ml_global_data.c"
        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_32_32 == (MR_Integer) 0);
#line 238 "ml_global_data.m"
        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 238 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 238 "ml_global_data.m"
          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_32_32;
#line 238 "ml_global_data.m"
        else
#line 238 "ml_global_data.m"
          {
#line 238 "ml_global_data.m"
            MR_Word ml_backend__ml_global_data__V_33_33;
#line 238 "ml_global_data.m"
            MR_Integer ml_backend__ml_global_data__V_61_61 = (MR_Integer) ml_backend__ml_global_data__V_5_5;
#line 238 "ml_global_data.m"
            MR_Integer ml_backend__ml_global_data__V_62_62 = (MR_Integer) ml_backend__ml_global_data__V_19_19;

#line 238 "ml_global_data.m"
            {
#line 238 "ml_global_data.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_global_data__V_33_33, ml_backend__ml_global_data__V_61_61, ml_backend__ml_global_data__V_62_62);
            }
#line 3702 "ml_backend.ml_global_data.c"
            ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_33_33 == (MR_Integer) 0);
#line 238 "ml_global_data.m"
            ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 238 "ml_global_data.m"
            if (ml_backend__ml_global_data__succeeded)
#line 238 "ml_global_data.m"
              *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_33_33;
#line 238 "ml_global_data.m"
            else
#line 238 "ml_global_data.m"
              {
#line 238 "ml_global_data.m"
                MR_Word ml_backend__ml_global_data__V_34_34;
#line 238 "ml_global_data.m"
                MR_Integer ml_backend__ml_global_data__V_63_63 = (MR_Integer) ml_backend__ml_global_data__V_6_6;
#line 238 "ml_global_data.m"
                MR_Integer ml_backend__ml_global_data__V_64_64 = (MR_Integer) ml_backend__ml_global_data__V_20_20;

#line 238 "ml_global_data.m"
                {
#line 238 "ml_global_data.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_global_data__V_34_34, ml_backend__ml_global_data__V_63_63, ml_backend__ml_global_data__V_64_64);
                }
#line 3726 "ml_backend.ml_global_data.c"
                ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_34_34 == (MR_Integer) 0);
#line 238 "ml_global_data.m"
                ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 238 "ml_global_data.m"
                if (ml_backend__ml_global_data__succeeded)
#line 238 "ml_global_data.m"
                  *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_34_34;
#line 238 "ml_global_data.m"
                else
#line 238 "ml_global_data.m"
                  {
#line 238 "ml_global_data.m"
                    MR_Word ml_backend__ml_global_data__V_35_35;

#line 238 "ml_global_data.m"
                    {
#line 238 "ml_global_data.m"
                      mercury__counter____Compare____counter_0_0(&ml_backend__ml_global_data__V_35_35, ml_backend__ml_global_data__V_7_7, ml_backend__ml_global_data__V_21_21);
                    }
#line 3746 "ml_backend.ml_global_data.c"
                    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_35_35 == (MR_Integer) 0);
#line 238 "ml_global_data.m"
                    ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 238 "ml_global_data.m"
                    if (ml_backend__ml_global_data__succeeded)
#line 238 "ml_global_data.m"
                      *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_35_35;
#line 238 "ml_global_data.m"
                    else
#line 238 "ml_global_data.m"
                      {
#line 238 "ml_global_data.m"
                        MR_Word ml_backend__ml_global_data__V_36_36;

#line 238 "ml_global_data.m"
                        {
#line 238 "ml_global_data.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[1], &ml_backend__ml_global_data__V_36_36, ((MR_Box) (ml_backend__ml_global_data__V_8_8)), ((MR_Box) (ml_backend__ml_global_data__V_22_22)));
                        }
#line 3766 "ml_backend.ml_global_data.c"
                        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_36_36 == (MR_Integer) 0);
#line 238 "ml_global_data.m"
                        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 238 "ml_global_data.m"
                        if (ml_backend__ml_global_data__succeeded)
#line 238 "ml_global_data.m"
                          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_36_36;
#line 238 "ml_global_data.m"
                        else
#line 238 "ml_global_data.m"
                          {
#line 238 "ml_global_data.m"
                            MR_Word ml_backend__ml_global_data__V_37_37;

#line 238 "ml_global_data.m"
                            {
#line 238 "ml_global_data.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[1], &ml_backend__ml_global_data__V_37_37, ((MR_Box) (ml_backend__ml_global_data__V_9_9)), ((MR_Box) (ml_backend__ml_global_data__V_23_23)));
                            }
#line 3786 "ml_backend.ml_global_data.c"
                            ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_37_37 == (MR_Integer) 0);
#line 238 "ml_global_data.m"
                            ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 238 "ml_global_data.m"
                            if (ml_backend__ml_global_data__succeeded)
#line 238 "ml_global_data.m"
                              *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_37_37;
#line 238 "ml_global_data.m"
                            else
#line 238 "ml_global_data.m"
                              {
#line 238 "ml_global_data.m"
                                MR_Word ml_backend__ml_global_data__V_38_38;

#line 238 "ml_global_data.m"
                                {
#line 238 "ml_global_data.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[1], &ml_backend__ml_global_data__V_38_38, ((MR_Box) (ml_backend__ml_global_data__V_10_10)), ((MR_Box) (ml_backend__ml_global_data__V_24_24)));
                                }
#line 3806 "ml_backend.ml_global_data.c"
                                ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_38_38 == (MR_Integer) 0);
#line 238 "ml_global_data.m"
                                ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 238 "ml_global_data.m"
                                if (ml_backend__ml_global_data__succeeded)
#line 238 "ml_global_data.m"
                                  *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_38_38;
#line 238 "ml_global_data.m"
                                else
#line 238 "ml_global_data.m"
                                  {
#line 238 "ml_global_data.m"
                                    MR_Word ml_backend__ml_global_data__V_39_39;

#line 238 "ml_global_data.m"
                                    {
#line 238 "ml_global_data.m"
                                      mercury__counter____Compare____counter_0_0(&ml_backend__ml_global_data__V_39_39, ml_backend__ml_global_data__V_11_11, ml_backend__ml_global_data__V_25_25);
                                    }
#line 3826 "ml_backend.ml_global_data.c"
                                    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_39_39 == (MR_Integer) 0);
#line 238 "ml_global_data.m"
                                    ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 238 "ml_global_data.m"
                                    if (ml_backend__ml_global_data__succeeded)
#line 238 "ml_global_data.m"
                                      *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_39_39;
#line 238 "ml_global_data.m"
                                    else
#line 238 "ml_global_data.m"
                                      {
#line 238 "ml_global_data.m"
                                        MR_Word ml_backend__ml_global_data__V_40_40;

#line 238 "ml_global_data.m"
                                        {
#line 238 "ml_global_data.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[2], &ml_backend__ml_global_data__V_40_40, ((MR_Box) (ml_backend__ml_global_data__V_12_12)), ((MR_Box) (ml_backend__ml_global_data__V_26_26)));
                                        }
#line 3846 "ml_backend.ml_global_data.c"
                                        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_40_40 == (MR_Integer) 0);
#line 238 "ml_global_data.m"
                                        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 238 "ml_global_data.m"
                                        if (ml_backend__ml_global_data__succeeded)
#line 238 "ml_global_data.m"
                                          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_40_40;
#line 238 "ml_global_data.m"
                                        else
#line 238 "ml_global_data.m"
                                          {
#line 238 "ml_global_data.m"
                                            MR_Word ml_backend__ml_global_data__V_41_41;

#line 238 "ml_global_data.m"
                                            {
#line 238 "ml_global_data.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[3], &ml_backend__ml_global_data__V_41_41, ((MR_Box) (ml_backend__ml_global_data__V_13_13)), ((MR_Box) (ml_backend__ml_global_data__V_27_27)));
                                            }
#line 3866 "ml_backend.ml_global_data.c"
                                            ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_41_41 == (MR_Integer) 0);
#line 238 "ml_global_data.m"
                                            ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 238 "ml_global_data.m"
                                            if (ml_backend__ml_global_data__succeeded)
#line 238 "ml_global_data.m"
                                              *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_41_41;
#line 238 "ml_global_data.m"
                                            else
#line 238 "ml_global_data.m"
                                              {
#line 238 "ml_global_data.m"
                                                MR_Word ml_backend__ml_global_data__V_42_42;

#line 238 "ml_global_data.m"
                                                {
#line 238 "ml_global_data.m"
                                                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[4], &ml_backend__ml_global_data__V_42_42, ((MR_Box) (ml_backend__ml_global_data__V_14_14)), ((MR_Box) (ml_backend__ml_global_data__V_28_28)));
                                                }
#line 3886 "ml_backend.ml_global_data.c"
                                                ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_42_42 == (MR_Integer) 0);
#line 238 "ml_global_data.m"
                                                ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 238 "ml_global_data.m"
                                                if (ml_backend__ml_global_data__succeeded)
#line 238 "ml_global_data.m"
                                                  *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_42_42;
#line 238 "ml_global_data.m"
                                                else
#line 238 "ml_global_data.m"
                                                  {
#line 238 "ml_global_data.m"
                                                    MR_Word ml_backend__ml_global_data__V_43_43;

#line 238 "ml_global_data.m"
                                                    {
#line 238 "ml_global_data.m"
                                                      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[5], &ml_backend__ml_global_data__V_43_43, ((MR_Box) (ml_backend__ml_global_data__V_15_15)), ((MR_Box) (ml_backend__ml_global_data__V_29_29)));
                                                    }
#line 3906 "ml_backend.ml_global_data.c"
                                                    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_43_43 == (MR_Integer) 0);
#line 238 "ml_global_data.m"
                                                    ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 238 "ml_global_data.m"
                                                    if (ml_backend__ml_global_data__succeeded)
#line 238 "ml_global_data.m"
                                                      *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_43_43;
#line 238 "ml_global_data.m"
                                                    else
#line 238 "ml_global_data.m"
                                                      {
#line 238 "ml_global_data.m"
                                                        MR_Word ml_backend__ml_global_data__V_44_44;

#line 238 "ml_global_data.m"
                                                        {
#line 238 "ml_global_data.m"
                                                          mercury__counter____Compare____counter_0_0(&ml_backend__ml_global_data__V_44_44, ml_backend__ml_global_data__V_16_16, ml_backend__ml_global_data__V_30_30);
                                                        }
#line 3926 "ml_backend.ml_global_data.c"
                                                        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_44_44 == (MR_Integer) 0);
#line 238 "ml_global_data.m"
                                                        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 238 "ml_global_data.m"
                                                        if (ml_backend__ml_global_data__succeeded)
#line 238 "ml_global_data.m"
                                                          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_44_44;
#line 238 "ml_global_data.m"
                                                        else
#line 238 "ml_global_data.m"
                                                          {
#line 238 "ml_global_data.m"
                                                            {
#line 238 "ml_global_data.m"
                                                              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[0], ml_backend__ml_global_data__HeadVar__1_1, ((MR_Box) (ml_backend__ml_global_data__V_17_17)), ((MR_Box) (ml_backend__ml_global_data__V_31_31)));
#line 238 "ml_global_data.m"
                                                              return;
                                                            }
#line 238 "ml_global_data.m"
                                                          }
#line 238 "ml_global_data.m"
                                                      }
#line 238 "ml_global_data.m"
                                                  }
#line 238 "ml_global_data.m"
                                              }
#line 238 "ml_global_data.m"
                                          }
#line 238 "ml_global_data.m"
                                      }
#line 238 "ml_global_data.m"
                                  }
#line 238 "ml_global_data.m"
                              }
#line 238 "ml_global_data.m"
                          }
#line 238 "ml_global_data.m"
                      }
#line 238 "ml_global_data.m"
                  }
#line 238 "ml_global_data.m"
              }
#line 238 "ml_global_data.m"
          }
#line 238 "ml_global_data.m"
      }
#line 238 "ml_global_data.m"
  }
#line 238 "ml_global_data.m"
}

#line 238 "ml_global_data.m"
MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_global_data_0_0(
#line 238 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 238 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
#line 238 "ml_global_data.m"
{
#line 238 "ml_global_data.m"
  {
#line 238 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 238 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastX_31 = (MR_Integer) ml_backend__ml_global_data__HeadVar__1_1;
#line 238 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastY_32 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;

#line 238 "ml_global_data.m"
    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_31 == ml_backend__ml_global_data__CastY_32);
#line 238 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 238 "ml_global_data.m"
      ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 238 "ml_global_data.m"
    else
#line 238 "ml_global_data.m"
      {
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeInfo_35_35;
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeInfo_36_36;
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeInfo_37_37;
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeInfo_39_39;
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeInfo_40_40;
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeInfo_41_41;
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeInfo_42_42;
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeInfo_44_44;
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 0)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 1)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 2)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 3)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 4)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 5)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 6)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 7)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 8)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 9)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 10)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 11)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 12)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 13)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 2)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 3)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 4)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 5)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 6)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 7)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 8)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 9)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 10)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 11)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 12)));
#line 238 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 13)));

#line 4079 "ml_backend.ml_global_data.c"
        {
#line 4081 "ml_backend.ml_global_data.c"
          ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[1], ((MR_Box) (ml_backend__ml_global_data__V_3_3)), ((MR_Box) (ml_backend__ml_global_data__V_17_17)));
        }
#line 238 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 238 "ml_global_data.m"
          {
#line 4088 "ml_backend.ml_global_data.c"
            ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_4_4 == ml_backend__ml_global_data__V_18_18);
#line 238 "ml_global_data.m"
            if (ml_backend__ml_global_data__succeeded)
#line 238 "ml_global_data.m"
              {
#line 4094 "ml_backend.ml_global_data.c"
                ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_5_5 == ml_backend__ml_global_data__V_19_19);
#line 238 "ml_global_data.m"
                if (ml_backend__ml_global_data__succeeded)
#line 238 "ml_global_data.m"
                  {
#line 4100 "ml_backend.ml_global_data.c"
                    {
#line 4102 "ml_backend.ml_global_data.c"
                      ml_backend__ml_global_data__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_global_data__V_6_6, ml_backend__ml_global_data__V_20_20);
                    }
#line 238 "ml_global_data.m"
                    if (ml_backend__ml_global_data__succeeded)
#line 238 "ml_global_data.m"
                      {
#line 4109 "ml_backend.ml_global_data.c"
                        ml_backend__ml_global_data__TypeInfo_35_35 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[1];
#line 4111 "ml_backend.ml_global_data.c"
                        {
#line 4113 "ml_backend.ml_global_data.c"
                          ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_35_35, ((MR_Box) (ml_backend__ml_global_data__V_7_7)), ((MR_Box) (ml_backend__ml_global_data__V_21_21)));
                        }
#line 238 "ml_global_data.m"
                        if (ml_backend__ml_global_data__succeeded)
#line 238 "ml_global_data.m"
                          {
#line 4120 "ml_backend.ml_global_data.c"
                            ml_backend__ml_global_data__TypeInfo_36_36 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[1];
#line 4122 "ml_backend.ml_global_data.c"
                            {
#line 4124 "ml_backend.ml_global_data.c"
                              ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_36_36, ((MR_Box) (ml_backend__ml_global_data__V_8_8)), ((MR_Box) (ml_backend__ml_global_data__V_22_22)));
                            }
#line 238 "ml_global_data.m"
                            if (ml_backend__ml_global_data__succeeded)
#line 238 "ml_global_data.m"
                              {
#line 4131 "ml_backend.ml_global_data.c"
                                ml_backend__ml_global_data__TypeInfo_37_37 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[1];
#line 4133 "ml_backend.ml_global_data.c"
                                {
#line 4135 "ml_backend.ml_global_data.c"
                                  ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_37_37, ((MR_Box) (ml_backend__ml_global_data__V_9_9)), ((MR_Box) (ml_backend__ml_global_data__V_23_23)));
                                }
#line 238 "ml_global_data.m"
                                if (ml_backend__ml_global_data__succeeded)
#line 238 "ml_global_data.m"
                                  {
#line 4142 "ml_backend.ml_global_data.c"
                                    {
#line 4144 "ml_backend.ml_global_data.c"
                                      ml_backend__ml_global_data__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_global_data__V_10_10, ml_backend__ml_global_data__V_24_24);
                                    }
#line 238 "ml_global_data.m"
                                    if (ml_backend__ml_global_data__succeeded)
#line 238 "ml_global_data.m"
                                      {
#line 4151 "ml_backend.ml_global_data.c"
                                        ml_backend__ml_global_data__TypeInfo_39_39 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[2];
#line 4153 "ml_backend.ml_global_data.c"
                                        {
#line 4155 "ml_backend.ml_global_data.c"
                                          ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_39_39, ((MR_Box) (ml_backend__ml_global_data__V_11_11)), ((MR_Box) (ml_backend__ml_global_data__V_25_25)));
                                        }
#line 238 "ml_global_data.m"
                                        if (ml_backend__ml_global_data__succeeded)
#line 238 "ml_global_data.m"
                                          {
#line 4162 "ml_backend.ml_global_data.c"
                                            ml_backend__ml_global_data__TypeInfo_40_40 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[3];
#line 4164 "ml_backend.ml_global_data.c"
                                            {
#line 4166 "ml_backend.ml_global_data.c"
                                              ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_40_40, ((MR_Box) (ml_backend__ml_global_data__V_12_12)), ((MR_Box) (ml_backend__ml_global_data__V_26_26)));
                                            }
#line 238 "ml_global_data.m"
                                            if (ml_backend__ml_global_data__succeeded)
#line 238 "ml_global_data.m"
                                              {
#line 4173 "ml_backend.ml_global_data.c"
                                                ml_backend__ml_global_data__TypeInfo_41_41 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[4];
#line 4175 "ml_backend.ml_global_data.c"
                                                {
#line 4177 "ml_backend.ml_global_data.c"
                                                  ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_41_41, ((MR_Box) (ml_backend__ml_global_data__V_13_13)), ((MR_Box) (ml_backend__ml_global_data__V_27_27)));
                                                }
#line 238 "ml_global_data.m"
                                                if (ml_backend__ml_global_data__succeeded)
#line 238 "ml_global_data.m"
                                                  {
#line 4184 "ml_backend.ml_global_data.c"
                                                    ml_backend__ml_global_data__TypeInfo_42_42 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[5];
#line 4186 "ml_backend.ml_global_data.c"
                                                    {
#line 4188 "ml_backend.ml_global_data.c"
                                                      ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_42_42, ((MR_Box) (ml_backend__ml_global_data__V_14_14)), ((MR_Box) (ml_backend__ml_global_data__V_28_28)));
                                                    }
#line 238 "ml_global_data.m"
                                                    if (ml_backend__ml_global_data__succeeded)
#line 238 "ml_global_data.m"
                                                      {
#line 4195 "ml_backend.ml_global_data.c"
                                                        {
#line 4197 "ml_backend.ml_global_data.c"
                                                          ml_backend__ml_global_data__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_global_data__V_15_15, ml_backend__ml_global_data__V_29_29);
                                                        }
#line 238 "ml_global_data.m"
                                                        if (ml_backend__ml_global_data__succeeded)
#line 238 "ml_global_data.m"
                                                          {
#line 4204 "ml_backend.ml_global_data.c"
                                                            ml_backend__ml_global_data__TypeInfo_44_44 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[0];
#line 4206 "ml_backend.ml_global_data.c"
                                                            {
#line 4208 "ml_backend.ml_global_data.c"
                                                              return ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_44_44, ((MR_Box) (ml_backend__ml_global_data__V_16_16)), ((MR_Box) (ml_backend__ml_global_data__V_30_30)));
                                                            }
#line 238 "ml_global_data.m"
                                                          }
#line 238 "ml_global_data.m"
                                                      }
#line 238 "ml_global_data.m"
                                                  }
#line 238 "ml_global_data.m"
                                              }
#line 238 "ml_global_data.m"
                                          }
#line 238 "ml_global_data.m"
                                      }
#line 238 "ml_global_data.m"
                                  }
#line 238 "ml_global_data.m"
                              }
#line 238 "ml_global_data.m"
                          }
#line 238 "ml_global_data.m"
                      }
#line 238 "ml_global_data.m"
                  }
#line 238 "ml_global_data.m"
              }
#line 238 "ml_global_data.m"
          }
#line 238 "ml_global_data.m"
      }
#line 238 "ml_global_data.m"
    return ml_backend__ml_global_data__succeeded;
#line 238 "ml_global_data.m"
  }
#line 238 "ml_global_data.m"
}

#line 75 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data____Compare____ml_alloc_site_data_0_0(
#line 75 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 75 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 75 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
#line 75 "ml_global_data.m"
{
#line 75 "ml_global_data.m"
  {
#line 75 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 75 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastX_15 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;
#line 75 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastY_16 = (MR_Integer) ml_backend__ml_global_data__HeadVar__3_3;

#line 75 "ml_global_data.m"
    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_15 == ml_backend__ml_global_data__CastY_16);
#line 75 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 4270 "ml_backend.ml_global_data.c"
      *ml_backend__ml_global_data__HeadVar__1_1 = (MR_Integer) 0;
#line 75 "ml_global_data.m"
    else
#line 75 "ml_global_data.m"
      {
#line 75 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 75 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "ml_global_data.m"
        MR_String ml_backend__ml_global_data__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 2)));
#line 75 "ml_global_data.m"
        MR_Integer ml_backend__ml_global_data__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 3)));
#line 75 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 0)));
#line 75 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 1)));
#line 75 "ml_global_data.m"
        MR_String ml_backend__ml_global_data__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 2)));
#line 75 "ml_global_data.m"
        MR_Integer ml_backend__ml_global_data__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 3)));
#line 75 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_12_12;

#line 75 "ml_global_data.m"
        {
#line 75 "ml_global_data.m"
          ml_backend__mlds____Compare____mlds_entity_name_0_0(&ml_backend__ml_global_data__V_12_12, ml_backend__ml_global_data__V_4_4, ml_backend__ml_global_data__V_8_8);
        }
#line 4300 "ml_backend.ml_global_data.c"
        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_12_12 == (MR_Integer) 0);
#line 75 "ml_global_data.m"
        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 75 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 75 "ml_global_data.m"
          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_12_12;
#line 75 "ml_global_data.m"
        else
#line 75 "ml_global_data.m"
          {
#line 75 "ml_global_data.m"
            MR_Word ml_backend__ml_global_data__V_13_13;

#line 75 "ml_global_data.m"
            {
#line 75 "ml_global_data.m"
              mercury__term____Compare____context_0_0(&ml_backend__ml_global_data__V_13_13, ml_backend__ml_global_data__V_5_5, ml_backend__ml_global_data__V_9_9);
            }
#line 4320 "ml_backend.ml_global_data.c"
            ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_13_13 == (MR_Integer) 0);
#line 75 "ml_global_data.m"
            ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 75 "ml_global_data.m"
            if (ml_backend__ml_global_data__succeeded)
#line 75 "ml_global_data.m"
              *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_13_13;
#line 75 "ml_global_data.m"
            else
#line 75 "ml_global_data.m"
              {
#line 75 "ml_global_data.m"
                MR_Word ml_backend__ml_global_data__V_14_14;

#line 75 "ml_global_data.m"
                {
#line 75 "ml_global_data.m"
                  mercury__private_builtin__builtin_compare_string_3_p_0(&ml_backend__ml_global_data__V_14_14, ml_backend__ml_global_data__V_6_6, ml_backend__ml_global_data__V_10_10);
                }
#line 4340 "ml_backend.ml_global_data.c"
                ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_14_14 == (MR_Integer) 0);
#line 75 "ml_global_data.m"
                ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 75 "ml_global_data.m"
                if (ml_backend__ml_global_data__succeeded)
#line 75 "ml_global_data.m"
                  *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_14_14;
#line 75 "ml_global_data.m"
                else
#line 75 "ml_global_data.m"
                  {
#line 75 "ml_global_data.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_global_data__HeadVar__1_1, ml_backend__ml_global_data__V_7_7, ml_backend__ml_global_data__V_11_11);
#line 75 "ml_global_data.m"
                    return;
                  }
#line 75 "ml_global_data.m"
              }
#line 75 "ml_global_data.m"
          }
#line 75 "ml_global_data.m"
      }
#line 75 "ml_global_data.m"
  }
#line 75 "ml_global_data.m"
}

#line 75 "ml_global_data.m"
MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_alloc_site_data_0_0(
#line 75 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 75 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
#line 75 "ml_global_data.m"
{
#line 75 "ml_global_data.m"
  {
#line 75 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 75 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastX_11 = (MR_Integer) ml_backend__ml_global_data__HeadVar__1_1;
#line 75 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastY_12 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;

#line 75 "ml_global_data.m"
    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_11 == ml_backend__ml_global_data__CastY_12);
#line 75 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 75 "ml_global_data.m"
      ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 75 "ml_global_data.m"
    else
#line 75 "ml_global_data.m"
      {
#line 75 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 0)));
#line 75 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 1)));
#line 75 "ml_global_data.m"
        MR_String ml_backend__ml_global_data__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 2)));
#line 75 "ml_global_data.m"
        MR_Integer ml_backend__ml_global_data__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 3)));
#line 75 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 75 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 75 "ml_global_data.m"
        MR_String ml_backend__ml_global_data__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 2)));
#line 75 "ml_global_data.m"
        MR_Integer ml_backend__ml_global_data__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 3)));

#line 4413 "ml_backend.ml_global_data.c"
        {
#line 4415 "ml_backend.ml_global_data.c"
          ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____mlds_entity_name_0_0(ml_backend__ml_global_data__V_3_3, ml_backend__ml_global_data__V_7_7);
        }
#line 75 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 75 "ml_global_data.m"
          {
#line 4422 "ml_backend.ml_global_data.c"
            {
#line 4424 "ml_backend.ml_global_data.c"
              ml_backend__ml_global_data__succeeded = mercury__term____Unify____context_0_0(ml_backend__ml_global_data__V_4_4, ml_backend__ml_global_data__V_8_8);
            }
#line 75 "ml_global_data.m"
            if (ml_backend__ml_global_data__succeeded)
#line 75 "ml_global_data.m"
              {
#line 4431 "ml_backend.ml_global_data.c"
                ml_backend__ml_global_data__succeeded = (strcmp(ml_backend__ml_global_data__V_5_5, ml_backend__ml_global_data__V_9_9) == 0);
#line 75 "ml_global_data.m"
                if (ml_backend__ml_global_data__succeeded)
#line 4435 "ml_backend.ml_global_data.c"
                  ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_6_6 == ml_backend__ml_global_data__V_10_10);
#line 75 "ml_global_data.m"
              }
#line 75 "ml_global_data.m"
          }
#line 75 "ml_global_data.m"
      }
#line 75 "ml_global_data.m"
    return ml_backend__ml_global_data__succeeded;
#line 75 "ml_global_data.m"
  }
#line 75 "ml_global_data.m"
}

#line 235 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_alloc_id_map_0_0(
#line 235 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 235 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 235 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
#line 235 "ml_global_data.m"
{
#line 235 "ml_global_data.m"
  {
#line 235 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 235 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_4 = ml_backend__ml_global_data__HeadVar__2_2;
#line 235 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_5 = ml_backend__ml_global_data__HeadVar__3_3;

#line 235 "ml_global_data.m"
    {
#line 235 "ml_global_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[0], ml_backend__ml_global_data__HeadVar__1_1, ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_5)));
#line 235 "ml_global_data.m"
      return;
    }
#line 235 "ml_global_data.m"
  }
#line 235 "ml_global_data.m"
}

#line 235 "ml_global_data.m"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_alloc_id_map_0_0(
#line 235 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 235 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
#line 235 "ml_global_data.m"
{
#line 235 "ml_global_data.m"
  {
#line 235 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 235 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_3 = ml_backend__ml_global_data__HeadVar__1_1;
#line 235 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_4 = ml_backend__ml_global_data__HeadVar__2_2;

#line 235 "ml_global_data.m"
    {
#line 235 "ml_global_data.m"
      return ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[0], ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_4)));
    }
#line 235 "ml_global_data.m"
    return ml_backend__ml_global_data__succeeded;
#line 235 "ml_global_data.m"
  }
#line 235 "ml_global_data.m"
}

#line 44 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data____Compare____have_unboxed_floats_0_0(
#line 44 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 44 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 44 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
#line 44 "ml_global_data.m"
{
#line 44 "ml_global_data.m"
  {
#line 44 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 44 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__Cast_HeadVar1_4 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;
#line 44 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__Cast_HeadVar2_5 = (MR_Integer) ml_backend__ml_global_data__HeadVar__3_3;

#line 44 "ml_global_data.m"
    {
#line 44 "ml_global_data.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_global_data__HeadVar__1_1, ml_backend__ml_global_data__Cast_HeadVar1_4, ml_backend__ml_global_data__Cast_HeadVar2_5);
#line 44 "ml_global_data.m"
      return;
    }
#line 44 "ml_global_data.m"
  }
#line 44 "ml_global_data.m"
}

#line 44 "ml_global_data.m"
MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____have_unboxed_floats_0_0(
#line 44 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_1,
#line 44 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
#line 44 "ml_global_data.m"
{
#line 4553 "ml_backend.ml_global_data.c"
  {
#line 4555 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__HeadVar__2_1 == ml_backend__ml_global_data__HeadVar__2_2);

#line 4558 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 4560 "ml_backend.ml_global_data.c"
  }
#line 44 "ml_global_data.m"
}

#line 765 "ml_global_data.m"
static MR_String MR_CALL 
ml_backend__ml_global_data__cons_id_to_alloc_site_string_1_f_0(
#line 765 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__ConsId_3)
#line 765 "ml_global_data.m"
{
#line 769 "ml_global_data.m"
  {
#line 769 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 769 "ml_global_data.m"
    MR_String ml_backend__ml_global_data__TypeStr_4;

#line 769 "ml_global_data.m"
    if ((ml_backend__ml_global_data__ConsId_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 782 "ml_global_data.m"
      ml_backend__ml_global_data__TypeStr_4 = (MR_String) "typeclass_info";
#line 769 "ml_global_data.m"
    else
#line 769 "ml_global_data.m"
      if (((MR_tag((MR_Word) ml_backend__ml_global_data__ConsId_3)) == (MR_mktag((MR_Integer) 1))))
#line 779 "ml_global_data.m"
        ml_backend__ml_global_data__TypeStr_4 = (MR_String) "private_builtin.type_info/0";
#line 769 "ml_global_data.m"
      else
#line 769 "ml_global_data.m"
        if (((((MR_tag((MR_Word) ml_backend__ml_global_data__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 776 "ml_global_data.m"
          ml_backend__ml_global_data__TypeStr_4 = (MR_String) "closure";
#line 769 "ml_global_data.m"
        else
#line 769 "ml_global_data.m"
          if (((((MR_tag((MR_Word) ml_backend__ml_global_data__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 769 "ml_global_data.m"
            {
#line 769 "ml_global_data.m"
              MR_Word ml_backend__ml_global_data__TypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConsId_3, (MR_Integer) 3)));
#line 769 "ml_global_data.m"
              MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConsId_3, (MR_Integer) 1)));
#line 769 "ml_global_data.m"
              MR_Integer ml_backend__ml_global_data__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConsId_3, (MR_Integer) 2)));

#line 770 "ml_global_data.m"
              {
#line 770 "ml_global_data.m"
                return ml_backend__ml_global_data__TypeStr_4 = hlds__hlds_out__hlds_out_util__type_ctor_to_string_1_f_0(ml_backend__ml_global_data__TypeCtor_7);
              }
#line 769 "ml_global_data.m"
            }
#line 769 "ml_global_data.m"
          else
#line 769 "ml_global_data.m"
            if (((((MR_tag((MR_Word) ml_backend__ml_global_data__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 791 "ml_global_data.m"
              ml_backend__ml_global_data__TypeStr_4 = (MR_String) "ground_term_const";
#line 769 "ml_global_data.m"
            else
#line 769 "ml_global_data.m"
              if (((((MR_tag((MR_Word) ml_backend__ml_global_data__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 772 "ml_global_data.m"
                {
#line 772 "ml_global_data.m"
                  MR_Integer ml_backend__ml_global_data__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConsId_3, (MR_Integer) 1)));
#line 772 "ml_global_data.m"
                  MR_String ml_backend__ml_global_data__V_35_35;

#line 773 "ml_global_data.m"
                  {
#line 773 "ml_global_data.m"
                    ml_backend__ml_global_data__V_35_35 = mercury__string__from_int_1_f_0(ml_backend__ml_global_data__Arity_8);
                  }
#line 773 "ml_global_data.m"
                  {
#line 773 "ml_global_data.m"
                    return ml_backend__ml_global_data__TypeStr_4 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", ml_backend__ml_global_data__V_35_35);
                  }
#line 772 "ml_global_data.m"
                }
#line 769 "ml_global_data.m"
              else
#line 769 "ml_global_data.m"
                if (((((MR_tag((MR_Word) ml_backend__ml_global_data__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 785 "ml_global_data.m"
                  ml_backend__ml_global_data__TypeStr_4 = (MR_String) "type_info_const";
#line 769 "ml_global_data.m"
                else
#line 769 "ml_global_data.m"
                  if (((((MR_tag((MR_Word) ml_backend__ml_global_data__ConsId_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConsId_3, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 788 "ml_global_data.m"
                    ml_backend__ml_global_data__TypeStr_4 = (MR_String) "typeclass_info_const";
#line 769 "ml_global_data.m"
                  else
#line 803 "ml_global_data.m"
                    {
#line 804 "ml_global_data.m"
                      {
#line 804 "ml_global_data.m"
                        mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_global_data", (MR_String) "function \140ml_backend.ml_global_data.cons_id_to_alloc_site_string\'/1", (MR_String) "unexpected cons_id");
                      }
#line 803 "ml_global_data.m"
                    }
#line 769 "ml_global_data.m"
    return ml_backend__ml_global_data__TypeStr_4;
#line 769 "ml_global_data.m"
  }
#line 765 "ml_global_data.m"
}

#line 707 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__make_named_fields_4_p_0(
#line 707 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__MLDS_ModuleName_1,
#line 707 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__StructType_2,
#line 707 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3,
#line 707 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__4_4)
#line 707 "ml_global_data.m"
{
#line 710 "ml_global_data.m"
  {
#line 710 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 710 "ml_global_data.m"
    if ((ml_backend__ml_global_data__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 710 "ml_global_data.m"
      *ml_backend__ml_global_data__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 710 "ml_global_data.m"
    else
#line 712 "ml_global_data.m"
      {
#line 712 "ml_global_data.m"
        MR_String ml_backend__ml_global_data__RawFieldName_9 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 0)));
#line 712 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__RawFieldNames_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 1)));
#line 712 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__FieldName_11;
#line 712 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__FieldNames_12;
#line 712 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__QualName_13;

#line 713 "ml_global_data.m"
        {
#line 713 "ml_global_data.m"
          ml_backend__ml_global_data__QualName_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 713 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__QualName_13, 0) = ((MR_Box) (ml_backend__ml_global_data__MLDS_ModuleName_1));
#line 713 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__QualName_13, 1) = ((MR_Box) ((MR_Integer) 0));
#line 713 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__QualName_13, 2) = ((MR_Box) (ml_backend__ml_global_data__RawFieldName_9));
#line 713 "ml_global_data.m"
        }
#line 714 "ml_global_data.m"
        {
#line 714 "ml_global_data.m"
          ml_backend__ml_global_data__FieldName_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 714 "ml_global_data.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__FieldName_11, 0) = ((MR_Box) (ml_backend__ml_global_data__QualName_13));
#line 714 "ml_global_data.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__FieldName_11, 1) = ((MR_Box) (ml_backend__ml_global_data__StructType_2));
#line 714 "ml_global_data.m"
        }
#line 715 "ml_global_data.m"
        {
#line 715 "ml_global_data.m"
          ml_backend__ml_global_data__make_named_fields_4_p_0(ml_backend__ml_global_data__MLDS_ModuleName_1, ml_backend__ml_global_data__StructType_2, ml_backend__ml_global_data__RawFieldNames_10, &ml_backend__ml_global_data__FieldNames_12);
        }
#line 712 "ml_global_data.m"
        {
#line 712 "ml_global_data.m"
          MR_Word base;
#line 712 "ml_global_data.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 712 "ml_global_data.m"
          *ml_backend__ml_global_data__HeadVar__4_4 = base;
#line 712 "ml_global_data.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_global_data__FieldName_11));
#line 712 "ml_global_data.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_global_data__FieldNames_12));
#line 712 "ml_global_data.m"
        }
#line 712 "ml_global_data.m"
      }
#line 710 "ml_global_data.m"
  }
#line 707 "ml_global_data.m"
}

#line 692 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_gen_vector_cell_field_types_7_p_0(
#line 692 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__MLDS_Context_1,
#line 692 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Flags_2,
#line 692 "ml_global_data.m"
  MR_String ml_backend__ml_global_data__FieldNamePrefix_3,
#line 692 "ml_global_data.m"
  MR_Integer ml_backend__ml_global_data__FieldNum_4,
#line 692 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__5_5,
#line 692 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__6_6,
#line 692 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__7_7)
#line 692 "ml_global_data.m"
{
#line 696 "ml_global_data.m"
  {
#line 696 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 696 "ml_global_data.m"
    if ((ml_backend__ml_global_data__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 696 "ml_global_data.m"
      {
#line 696 "ml_global_data.m"
        *ml_backend__ml_global_data__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 696 "ml_global_data.m"
        *ml_backend__ml_global_data__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 696 "ml_global_data.m"
      }
#line 696 "ml_global_data.m"
    else
#line 699 "ml_global_data.m"
      {
#line 699 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__Type_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__HeadVar__5_5, (MR_Integer) 0)));
#line 699 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__Types_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__HeadVar__5_5, (MR_Integer) 1)));
#line 699 "ml_global_data.m"
        MR_String ml_backend__ml_global_data__RawFieldName_18;
#line 699 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__RawFieldNames_19;
#line 699 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__FieldDefn_20;
#line 699 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__FieldDefns_21;
#line 699 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__FieldName_22;
#line 699 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__FieldEntityDefn_23;
#line 699 "ml_global_data.m"
        MR_String ml_backend__ml_global_data__V_24_24;
#line 699 "ml_global_data.m"
        MR_String ml_backend__ml_global_data__V_26_26;
#line 699 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_27_27;
#line 699 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_28_28;
#line 699 "ml_global_data.m"
        MR_Integer ml_backend__ml_global_data__V_32_32;

#line 700 "ml_global_data.m"
        {
#line 700 "ml_global_data.m"
          ml_backend__ml_global_data__V_26_26 = mercury__string__int_to_string_1_f_0(ml_backend__ml_global_data__FieldNum_4);
        }
#line 700 "ml_global_data.m"
        {
#line 700 "ml_global_data.m"
          ml_backend__ml_global_data__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) "_f_", ml_backend__ml_global_data__V_26_26);
        }
#line 700 "ml_global_data.m"
        {
#line 700 "ml_global_data.m"
          ml_backend__ml_global_data__RawFieldName_18 = mercury__string__f_43_43_2_f_0(ml_backend__ml_global_data__FieldNamePrefix_3, ml_backend__ml_global_data__V_24_24);
        }
#line 701 "ml_global_data.m"
        {
#line 701 "ml_global_data.m"
          ml_backend__ml_global_data__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 701 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__V_28_28, 0) = ((MR_Box) (ml_backend__ml_global_data__RawFieldName_18));
#line 701 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 701 "ml_global_data.m"
        }
#line 701 "ml_global_data.m"
        ml_backend__ml_global_data__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_global_data__V_28_28);
#line 701 "ml_global_data.m"
        {
#line 701 "ml_global_data.m"
          ml_backend__ml_global_data__FieldName_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 701 "ml_global_data.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__FieldName_22, 0) = ((MR_Box) (ml_backend__ml_global_data__V_27_27));
#line 701 "ml_global_data.m"
        }
#line 702 "ml_global_data.m"
        {
#line 702 "ml_global_data.m"
          ml_backend__ml_global_data__FieldEntityDefn_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 702 "ml_global_data.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__FieldEntityDefn_23, 0) = ((MR_Box) (ml_backend__ml_global_data__Type_16));
#line 702 "ml_global_data.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__FieldEntityDefn_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 702 "ml_global_data.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__FieldEntityDefn_23, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 702 "ml_global_data.m"
        }
#line 703 "ml_global_data.m"
        {
#line 703 "ml_global_data.m"
          ml_backend__ml_global_data__FieldDefn_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 703 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__FieldDefn_20, 0) = ((MR_Box) (ml_backend__ml_global_data__FieldName_22));
#line 703 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__FieldDefn_20, 1) = ((MR_Box) (ml_backend__ml_global_data__MLDS_Context_1));
#line 703 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__FieldDefn_20, 2) = ((MR_Box) (ml_backend__ml_global_data__Flags_2));
#line 703 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__FieldDefn_20, 3) = ((MR_Box) (ml_backend__ml_global_data__FieldEntityDefn_23));
#line 703 "ml_global_data.m"
        }
#line 705 "ml_global_data.m"
        ml_backend__ml_global_data__V_32_32 = (ml_backend__ml_global_data__FieldNum_4 + (MR_Integer) 1);
#line 704 "ml_global_data.m"
        {
#line 704 "ml_global_data.m"
          ml_backend__ml_global_data__ml_gen_vector_cell_field_types_7_p_0(ml_backend__ml_global_data__MLDS_Context_1, ml_backend__ml_global_data__Flags_2, ml_backend__ml_global_data__FieldNamePrefix_3, ml_backend__ml_global_data__V_32_32, ml_backend__ml_global_data__Types_17, &ml_backend__ml_global_data__RawFieldNames_19, &ml_backend__ml_global_data__FieldDefns_21);
        }
#line 698 "ml_global_data.m"
        {
#line 698 "ml_global_data.m"
          MR_Word base;
#line 698 "ml_global_data.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 698 "ml_global_data.m"
          *ml_backend__ml_global_data__HeadVar__6_6 = base;
#line 698 "ml_global_data.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_global_data__RawFieldName_18));
#line 698 "ml_global_data.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_global_data__RawFieldNames_19));
#line 698 "ml_global_data.m"
        }
#line 699 "ml_global_data.m"
        {
#line 699 "ml_global_data.m"
          MR_Word base;
#line 699 "ml_global_data.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "ml_global_data.m"
          *ml_backend__ml_global_data__HeadVar__7_7 = base;
#line 699 "ml_global_data.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_global_data__FieldDefn_20));
#line 699 "ml_global_data.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_global_data__FieldDefns_21));
#line 699 "ml_global_data.m"
        }
#line 699 "ml_global_data.m"
      }
#line 696 "ml_global_data.m"
  }
#line 692 "ml_global_data.m"
}

#line 527 "ml_global_data.m"
static MR_bool MR_CALL 
ml_backend__ml_global_data__ml_specialize_generic_array_rval_2_p_0(
#line 527 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13,
#line 527 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_Rval_14)
#line 527 "ml_global_data.m"
{
#line 532 "ml_global_data.m"
  while (MR_TRUE)
#line 532 "ml_global_data.m"
    {
#line 532 "ml_global_data.m"
      /* tailcall optimized into a loop */
#line 532 "ml_global_data.m"
      {
#line 532 "ml_global_data.m"
        MR_bool ml_backend__ml_global_data__succeeded;

#line 532 "ml_global_data.m"
        if (((((MR_tag((MR_Word) ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 556 "ml_global_data.m"
          {
#line 556 "ml_global_data.m"
            MR_Word ml_backend__ml_global_data__Op_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13, (MR_Integer) 1)));
#line 556 "ml_global_data.m"
            MR_Word ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13, (MR_Integer) 2)));
#line 556 "ml_global_data.m"
            MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13, (MR_Integer) 3)));

#line 602 "ml_global_data.m"
            if ((((((((((ml_backend__ml_global_data__Op_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 30))))) || ((ml_backend__ml_global_data__Op_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 38))))))) || ((ml_backend__ml_global_data__Op_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 28))))))) || ((ml_backend__ml_global_data__Op_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 27))))))) || ((ml_backend__ml_global_data__Op_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 29)))))))
#line 611 "ml_global_data.m"
              {
#line 557 "ml_global_data.m"
                ml_backend__ml_global_data__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
#line 611 "ml_global_data.m"
              }
#line 602 "ml_global_data.m"
            else
#line 603 "ml_global_data.m"
              {
#line 557 "ml_global_data.m"
                ml_backend__ml_global_data__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
#line 603 "ml_global_data.m"
              }
#line 556 "ml_global_data.m"
            if (ml_backend__ml_global_data__succeeded)
#line 556 "ml_global_data.m"
              {
#line 557 "ml_global_data.m"
                *ml_backend__ml_global_data__STATE_VARIABLE_Rval_14 = ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13;
#line 557 "ml_global_data.m"
                ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 556 "ml_global_data.m"
              }
#line 556 "ml_global_data.m"
          }
#line 532 "ml_global_data.m"
        else
#line 532 "ml_global_data.m"
          if (((((MR_tag((MR_Word) ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 532 "ml_global_data.m"
            {
#line 532 "ml_global_data.m"
              MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13, (MR_Integer) 1)));
#line 532 "ml_global_data.m"
              MR_Float ml_backend__ml_global_data__V_4_4;

#line 532 "ml_global_data.m"
              ml_backend__ml_global_data__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_global_data__V_21_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__V_21_21, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 532 "ml_global_data.m"
              if (ml_backend__ml_global_data__succeeded)
#line 532 "ml_global_data.m"
                {
#line 532 "ml_global_data.m"
                  ml_backend__ml_global_data__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__V_21_21, (MR_Integer) 1)));
#line 532 "ml_global_data.m"
                  *ml_backend__ml_global_data__STATE_VARIABLE_Rval_14 = ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13;
#line 532 "ml_global_data.m"
                  ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 532 "ml_global_data.m"
                }
#line 532 "ml_global_data.m"
            }
#line 532 "ml_global_data.m"
          else
#line 532 "ml_global_data.m"
            if (((((MR_tag((MR_Word) ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 534 "ml_global_data.m"
              {
#line 534 "ml_global_data.m"
                MR_Word ml_backend__ml_global_data__Op_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13, (MR_Integer) 1)));
#line 534 "ml_global_data.m"
                MR_Word ml_backend__ml_global_data__SubRval_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13, (MR_Integer) 2)));
#line 534 "ml_global_data.m"
                MR_Word ml_backend__ml_global_data__Type_7;

#line 537 "ml_global_data.m"
                if (((MR_tag((MR_Word) ml_backend__ml_global_data__Op_5)) == (MR_mktag((MR_Integer) 0))))
#line 536 "ml_global_data.m"
                  {
#line 536 "ml_global_data.m"
                    ml_backend__ml_global_data__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__Op_5, (MR_Integer) 0)));
#line 536 "ml_global_data.m"
                    ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 536 "ml_global_data.m"
                  }
#line 537 "ml_global_data.m"
                else
#line 537 "ml_global_data.m"
                  if (((MR_tag((MR_Word) ml_backend__ml_global_data__Op_5)) == (MR_mktag((MR_Integer) 2))))
#line 540 "ml_global_data.m"
                    {
#line 540 "ml_global_data.m"
                      ml_backend__ml_global_data__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_global_data__Op_5, (MR_Integer) 0)));
#line 540 "ml_global_data.m"
                      ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 540 "ml_global_data.m"
                    }
#line 537 "ml_global_data.m"
                  else
#line 537 "ml_global_data.m"
                    if (((MR_tag((MR_Word) ml_backend__ml_global_data__Op_5)) == (MR_mktag((MR_Integer) 1))))
#line 538 "ml_global_data.m"
                      {
#line 538 "ml_global_data.m"
                        ml_backend__ml_global_data__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__Op_5, (MR_Integer) 0)));
#line 538 "ml_global_data.m"
                        ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 538 "ml_global_data.m"
                      }
#line 537 "ml_global_data.m"
                    else
#line 537 "ml_global_data.m"
                      ml_backend__ml_global_data__succeeded = MR_FALSE;
#line 534 "ml_global_data.m"
                if (ml_backend__ml_global_data__succeeded)
#line 545 "ml_global_data.m"
                  {
#line 545 "ml_global_data.m"
                    if ((ml_backend__ml_global_data__Type_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 544 "ml_global_data.m"
                      {
#line 544 "ml_global_data.m"
                        *ml_backend__ml_global_data__STATE_VARIABLE_Rval_14 = ml_backend__ml_global_data__SubRval_6;
#line 544 "ml_global_data.m"
                        ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 544 "ml_global_data.m"
                      }
#line 545 "ml_global_data.m"
                    else
#line 545 "ml_global_data.m"
                      if (((MR_tag((MR_Word) ml_backend__ml_global_data__Type_7)) == (MR_mktag((MR_Integer) 2))))
#line 546 "ml_global_data.m"
                        {
#line 546 "ml_global_data.m"
                          MR_Word ml_backend__ml_global_data__CtorCat_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_global_data__Type_7, (MR_Integer) 1)));
#line 546 "ml_global_data.m"
                          MR_Word ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_global_data__Type_7, (MR_Integer) 0)));
#line 546 "ml_global_data.m"
                          MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_global_data__Type_7, (MR_Integer) 2)));

#line 550 "ml_global_data.m"
                          if (((MR_tag((MR_Word) ml_backend__ml_global_data__CtorCat_9)) == (MR_mktag((MR_Integer) 1))))
#line 548 "ml_global_data.m"
                            {
#line 548 "ml_global_data.m"
                              MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__CtorCat_9, (MR_Integer) 0)));

#line 548 "ml_global_data.m"
                              ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_18_18 == (MR_Integer) 1);
#line 548 "ml_global_data.m"
                              if (ml_backend__ml_global_data__succeeded)
#line 548 "ml_global_data.m"
                                {
#line 549 "ml_global_data.m"
                                  *ml_backend__ml_global_data__STATE_VARIABLE_Rval_14 = ml_backend__ml_global_data__SubRval_6;
#line 549 "ml_global_data.m"
                                  ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 548 "ml_global_data.m"
                                }
#line 548 "ml_global_data.m"
                            }
#line 550 "ml_global_data.m"
                          else
#line 550 "ml_global_data.m"
                            if (((((MR_tag((MR_Word) ml_backend__ml_global_data__CtorCat_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__CtorCat_9, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 551 "ml_global_data.m"
                              {
#line 551 "ml_global_data.m"
                                MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__CtorCat_9, (MR_Integer) 1)));

#line 551 "ml_global_data.m"
                                ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_16_16 == (MR_Integer) 1);
#line 551 "ml_global_data.m"
                                if (ml_backend__ml_global_data__succeeded)
#line 552 "ml_global_data.m"
                                  {
#line 552 "ml_global_data.m"
                                    /* direct tailcall eliminated */
#line 552 "ml_global_data.m"
                                    {
#line 552 "ml_global_data.m"
                                      MR_Word ml_backend__ml_global_data__STATE_VARIABLE_Rval_0__tmp_copy_13 = ml_backend__ml_global_data__SubRval_6;

#line 552 "ml_global_data.m"
                                      ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13 = ml_backend__ml_global_data__STATE_VARIABLE_Rval_0__tmp_copy_13;
#line 552 "ml_global_data.m"
                                    }
#line 552 "ml_global_data.m"
                                    continue;
#line 552 "ml_global_data.m"
                                  }
#line 551 "ml_global_data.m"
                              }
#line 550 "ml_global_data.m"
                            else
#line 550 "ml_global_data.m"
                              ml_backend__ml_global_data__succeeded = MR_FALSE;
#line 546 "ml_global_data.m"
                        }
#line 545 "ml_global_data.m"
                      else
#line 545 "ml_global_data.m"
                        ml_backend__ml_global_data__succeeded = MR_FALSE;
#line 545 "ml_global_data.m"
                  }
#line 534 "ml_global_data.m"
              }
#line 532 "ml_global_data.m"
            else
#line 532 "ml_global_data.m"
              ml_backend__ml_global_data__succeeded = MR_FALSE;
#line 532 "ml_global_data.m"
        return ml_backend__ml_global_data__succeeded;
#line 532 "ml_global_data.m"
      }
#line 532 "ml_global_data.m"
      break;
#line 532 "ml_global_data.m"
    }
#line 527 "ml_global_data.m"
}

#line 512 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_specialize_generic_array_init_3_p_0(
#line 512 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Init0_4,
#line 512 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__Init_5,
#line 512 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__Type_6)
#line 512 "ml_global_data.m"
{
#line 522 "ml_global_data.m"
  {
#line 522 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded = ((MR_tag((MR_Word) ml_backend__ml_global_data__Init0_4)) == (MR_mktag((MR_Integer) 1)));
#line 522 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Rval_8;
#line 517 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Rval0_7;

#line 517 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 517 "ml_global_data.m"
      {
#line 517 "ml_global_data.m"
        ml_backend__ml_global_data__Rval0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__Init0_4, (MR_Integer) 0)));
#line 518 "ml_global_data.m"
        {
#line 518 "ml_global_data.m"
          ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data__ml_specialize_generic_array_rval_2_p_0(ml_backend__ml_global_data__Rval0_7, &ml_backend__ml_global_data__Rval_8);
        }
#line 517 "ml_global_data.m"
      }
#line 522 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 520 "ml_global_data.m"
      {
#line 520 "ml_global_data.m"
        {
#line 520 "ml_global_data.m"
          MR_Word base;
#line 520 "ml_global_data.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 520 "ml_global_data.m"
          *ml_backend__ml_global_data__Init_5 = base;
#line 520 "ml_global_data.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_global_data__Rval_8));
#line 520 "ml_global_data.m"
        }
#line 521 "ml_global_data.m"
        *ml_backend__ml_global_data__Type_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 520 "ml_global_data.m"
      }
#line 522 "ml_global_data.m"
    else
#line 523 "ml_global_data.m"
      {
#line 523 "ml_global_data.m"
        *ml_backend__ml_global_data__Init_5 = ml_backend__ml_global_data__Init0_4;
#line 524 "ml_global_data.m"
        *ml_backend__ml_global_data__Type_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 523 "ml_global_data.m"
      }
#line 522 "ml_global_data.m"
  }
#line 512 "ml_global_data.m"
}

#line 470 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_gen_plain_static_defn_7_p_0(
#line 470 "ml_global_data.m"
  MR_String ml_backend__ml_global_data__ConstBaseName_8,
#line 470 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__ConstType_9,
#line 470 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Initializer_10,
#line 470 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Context_11,
#line 470 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__VarName_12,
#line 470 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25,
#line 470 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_26)
#line 470 "ml_global_data.m"
{
#line 475 "ml_global_data.m"
  {
#line 475 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 475 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__ConstCounter0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 3)));
#line 475 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__ConstNum_15;
#line 475 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__ConstCounter_16;
#line 475 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__EntityName_17;
#line 475 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__EntityDefn_19;
#line 475 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__DeclFlags_20;
#line 475 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__MLDS_Context_21;
#line 475 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Defn_22;
#line 475 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevDefns0_23;
#line 475 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevDefns_24;
#line 475 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27;
#line 475 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_28_28;
#line 475 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_29_29;
#line 475 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_30_30;
#line 328 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 0)));
#line 328 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 1)));
#line 328 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 2)));
#line 328 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 4)));
#line 328 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 5)));
#line 328 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 6)));
#line 328 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 7)));
#line 328 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 8)));
#line 328 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 9)));
#line 328 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 10)));
#line 328 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 11)));
#line 328 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 12)));
#line 328 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 13)));
#line 340 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_52_52;
#line 340 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_53_53;
#line 340 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_54_54;
#line 340 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_56_56;
#line 340 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_57_57;
#line 340 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_58_58;
#line 340 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_59_59;
#line 340 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_60_60;
#line 340 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_61_61;
#line 340 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_62_62;
#line 340 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_63_63;
#line 340 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_64_64;
#line 340 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_65_65;
#line 340 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_55_55;
#line 330 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_67_67;
#line 330 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_68_68;
#line 330 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_69_69;
#line 330 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_70_70;
#line 330 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_71_71;
#line 330 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_72_72;
#line 330 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_73_73;
#line 330 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_74_74;
#line 330 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_75_75;
#line 330 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_76_76;
#line 330 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_77_77;
#line 330 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_78_78;
#line 330 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_79_79;

#line 477 "ml_global_data.m"
    {
#line 477 "ml_global_data.m"
      mercury__counter__allocate_3_p_0(&ml_backend__ml_global_data__ConstNum_15, ml_backend__ml_global_data__ConstCounter0_14, &ml_backend__ml_global_data__ConstCounter_16);
    }
#line 340 "ml_global_data.m"
    ml_backend__ml_global_data__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 0)));
#line 340 "ml_global_data.m"
    ml_backend__ml_global_data__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 1)));
#line 340 "ml_global_data.m"
    ml_backend__ml_global_data__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 2)));
#line 340 "ml_global_data.m"
    ml_backend__ml_global_data__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 3)));
#line 340 "ml_global_data.m"
    ml_backend__ml_global_data__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 4)));
#line 340 "ml_global_data.m"
    ml_backend__ml_global_data__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 5)));
#line 340 "ml_global_data.m"
    ml_backend__ml_global_data__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 6)));
#line 340 "ml_global_data.m"
    ml_backend__ml_global_data__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 7)));
#line 340 "ml_global_data.m"
    ml_backend__ml_global_data__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 8)));
#line 340 "ml_global_data.m"
    ml_backend__ml_global_data__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 9)));
#line 340 "ml_global_data.m"
    ml_backend__ml_global_data__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 10)));
#line 340 "ml_global_data.m"
    ml_backend__ml_global_data__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 11)));
#line 340 "ml_global_data.m"
    ml_backend__ml_global_data__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 12)));
#line 340 "ml_global_data.m"
    ml_backend__ml_global_data__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 13)));
#line 340 "ml_global_data.m"
    {
#line 340 "ml_global_data.m"
      ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 340 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 0) = ((MR_Box) (ml_backend__ml_global_data__V_52_52));
#line 340 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 1) = ((MR_Box) (ml_backend__ml_global_data__V_53_53));
#line 340 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 2) = ((MR_Box) (ml_backend__ml_global_data__V_54_54));
#line 340 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 3) = ((MR_Box) (ml_backend__ml_global_data__ConstCounter_16));
#line 340 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 4) = ((MR_Box) (ml_backend__ml_global_data__V_56_56));
#line 340 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 5) = ((MR_Box) (ml_backend__ml_global_data__V_57_57));
#line 340 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 6) = ((MR_Box) (ml_backend__ml_global_data__V_58_58));
#line 340 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 7) = ((MR_Box) (ml_backend__ml_global_data__V_59_59));
#line 340 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 8) = ((MR_Box) (ml_backend__ml_global_data__V_60_60));
#line 340 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 9) = ((MR_Box) (ml_backend__ml_global_data__V_61_61));
#line 340 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 10) = ((MR_Box) (ml_backend__ml_global_data__V_62_62));
#line 340 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 11) = ((MR_Box) (ml_backend__ml_global_data__V_63_63));
#line 340 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 12) = ((MR_Box) (ml_backend__ml_global_data__V_64_64));
#line 340 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 13) = ((MR_Box) (ml_backend__ml_global_data__V_65_65));
#line 340 "ml_global_data.m"
    }
#line 480 "ml_global_data.m"
    {
#line 480 "ml_global_data.m"
      ml_backend__ml_global_data__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 480 "ml_global_data.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__V_28_28, 0) = ((MR_Box) (ml_backend__ml_global_data__ConstNum_15));
#line 480 "ml_global_data.m"
    }
#line 480 "ml_global_data.m"
    {
#line 480 "ml_global_data.m"
      MR_Word base;
#line 480 "ml_global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 480 "ml_global_data.m"
      *ml_backend__ml_global_data__VarName_12 = base;
#line 480 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__ConstBaseName_8));
#line 480 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_28_28));
#line 480 "ml_global_data.m"
    }
#line 481 "ml_global_data.m"
    ml_backend__ml_global_data__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) *ml_backend__ml_global_data__VarName_12);
#line 481 "ml_global_data.m"
    {
#line 481 "ml_global_data.m"
      ml_backend__ml_global_data__EntityName_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 481 "ml_global_data.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__EntityName_17, 0) = ((MR_Box) (ml_backend__ml_global_data__V_29_29));
#line 481 "ml_global_data.m"
    }
#line 485 "ml_global_data.m"
    {
#line 485 "ml_global_data.m"
      ml_backend__ml_global_data__EntityDefn_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 485 "ml_global_data.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__EntityDefn_19, 0) = ((MR_Box) (ml_backend__ml_global_data__ConstType_9));
#line 485 "ml_global_data.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__EntityDefn_19, 1) = ((MR_Box) (ml_backend__ml_global_data__Initializer_10));
#line 485 "ml_global_data.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__EntityDefn_19, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 485 "ml_global_data.m"
    }
#line 486 "ml_global_data.m"
    {
#line 486 "ml_global_data.m"
      ml_backend__ml_global_data__V_30_30 = ml_backend__mlds__ml_static_const_decl_flags_0_f_0();
    }
#line 486 "ml_global_data.m"
    {
#line 486 "ml_global_data.m"
      ml_backend__ml_global_data__DeclFlags_20 = ml_backend__mlds__set_access_2_f_0(ml_backend__ml_global_data__V_30_30, (MR_Integer) 2);
    }
#line 487 "ml_global_data.m"
    {
#line 487 "ml_global_data.m"
      ml_backend__ml_global_data__MLDS_Context_21 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_global_data__Context_11);
    }
#line 488 "ml_global_data.m"
    {
#line 488 "ml_global_data.m"
      ml_backend__ml_global_data__Defn_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 488 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__Defn_22, 0) = ((MR_Box) (ml_backend__ml_global_data__EntityName_17));
#line 488 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__Defn_22, 1) = ((MR_Box) (ml_backend__ml_global_data__MLDS_Context_21));
#line 488 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__Defn_22, 2) = ((MR_Box) (ml_backend__ml_global_data__DeclFlags_20));
#line 488 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__Defn_22, 3) = ((MR_Box) (ml_backend__ml_global_data__EntityDefn_19));
#line 488 "ml_global_data.m"
    }
#line 330 "ml_global_data.m"
    ml_backend__ml_global_data__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 0)));
#line 330 "ml_global_data.m"
    ml_backend__ml_global_data__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 1)));
#line 330 "ml_global_data.m"
    ml_backend__ml_global_data__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 2)));
#line 330 "ml_global_data.m"
    ml_backend__ml_global_data__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 3)));
#line 330 "ml_global_data.m"
    ml_backend__ml_global_data__RevDefns0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 4)));
#line 330 "ml_global_data.m"
    ml_backend__ml_global_data__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 5)));
#line 330 "ml_global_data.m"
    ml_backend__ml_global_data__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 6)));
#line 330 "ml_global_data.m"
    ml_backend__ml_global_data__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 7)));
#line 330 "ml_global_data.m"
    ml_backend__ml_global_data__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 8)));
#line 330 "ml_global_data.m"
    ml_backend__ml_global_data__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 9)));
#line 330 "ml_global_data.m"
    ml_backend__ml_global_data__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 10)));
#line 330 "ml_global_data.m"
    ml_backend__ml_global_data__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 11)));
#line 330 "ml_global_data.m"
    ml_backend__ml_global_data__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 12)));
#line 330 "ml_global_data.m"
    ml_backend__ml_global_data__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 13)));
#line 491 "ml_global_data.m"
    {
#line 491 "ml_global_data.m"
      ml_backend__ml_global_data__RevDefns_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 491 "ml_global_data.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__RevDefns_24, 0) = ((MR_Box) (ml_backend__ml_global_data__Defn_22));
#line 491 "ml_global_data.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__RevDefns_24, 1) = ((MR_Box) (ml_backend__ml_global_data__RevDefns0_23));
#line 491 "ml_global_data.m"
    }
#line 492 "ml_global_data.m"
    {
#line 492 "ml_global_data.m"
      ml_backend__ml_global_data__ml_global_data_set_rev_flat_cell_defns_3_p_0(ml_backend__ml_global_data__RevDefns_24, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_26);
#line 492 "ml_global_data.m"
      return;
    }
#line 475 "ml_global_data.m"
  }
#line 470 "ml_global_data.m"
}

#line 412 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_gen_scalar_static_defn_6_p_0(
#line 412 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__MLDS_ModuleName_7,
#line 412 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__ConstType_8,
#line 412 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Initializer_9,
#line 412 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__Common_10,
#line 412 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34,
#line 412 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_35)
#line 412 "ml_global_data.m"
{
#line 417 "ml_global_data.m"
  {
#line 417 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 417 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_172_172;
#line 417 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__InitArraySize_12;
#line 417 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__CellType_13;
#line 417 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeNumMap0_15;
#line 417 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__CellGroupMap0_16;
#line 417 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeNum_18;
#line 417 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RowCounter0_23;
#line 417 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__RowNum_24;
#line 417 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RowCounter_25;
#line 417 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__MembersMap0_26;
#line 417 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__NewCommon_27;
#line 417 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__MaybeOldCommon_28;
#line 417 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__MembersMap_29;
#line 417 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37;
#line 417 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43;
#line 421 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_54_54;
#line 421 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_55_55;
#line 421 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_56_56;
#line 421 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_57_57;
#line 421 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_58_58;
#line 421 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_59_59;
#line 421 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_60_60;
#line 421 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_61_61;
#line 421 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_63_63;
#line 421 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_64_64;
#line 421 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_65_65;
#line 421 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_66_66;
#line 431 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__OldTypeNum_17;
#line 423 "ml_global_data.m"
    MR_Box ml_backend__ml_global_data__conv0_OldTypeNum_17;
#line 444 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_121_121;
#line 444 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_122_122;
#line 444 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_123_123;
#line 444 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_124_124;
#line 446 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_125_125;
#line 446 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_126_126;
#line 446 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_127_127;
#line 446 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_128_128;

#line 418 "ml_global_data.m"
    {
#line 418 "ml_global_data.m"
      ml_backend__ml_global_data__InitArraySize_12 = ml_backend__mlds__get_initializer_array_size_1_f_0(ml_backend__ml_global_data__Initializer_9);
    }
#line 419 "ml_global_data.m"
    {
#line 419 "ml_global_data.m"
      ml_backend__ml_global_data__CellType_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 419 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellType_13, 0) = ((MR_Box) (ml_backend__ml_global_data__ConstType_8));
#line 419 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellType_13, 1) = ((MR_Box) (ml_backend__ml_global_data__InitArraySize_12));
#line 419 "ml_global_data.m"
    }
#line 421 "ml_global_data.m"
    ml_backend__ml_global_data__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 0)));
#line 421 "ml_global_data.m"
    ml_backend__ml_global_data__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 1)));
#line 421 "ml_global_data.m"
    ml_backend__ml_global_data__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 2)));
#line 421 "ml_global_data.m"
    ml_backend__ml_global_data__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 3)));
#line 421 "ml_global_data.m"
    ml_backend__ml_global_data__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 4)));
#line 421 "ml_global_data.m"
    ml_backend__ml_global_data__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 5)));
#line 421 "ml_global_data.m"
    ml_backend__ml_global_data__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 6)));
#line 421 "ml_global_data.m"
    ml_backend__ml_global_data__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 7)));
#line 421 "ml_global_data.m"
    ml_backend__ml_global_data__TypeNumMap0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 8)));
#line 421 "ml_global_data.m"
    ml_backend__ml_global_data__CellGroupMap0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 9)));
#line 421 "ml_global_data.m"
    ml_backend__ml_global_data__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 10)));
#line 421 "ml_global_data.m"
    ml_backend__ml_global_data__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 11)));
#line 421 "ml_global_data.m"
    ml_backend__ml_global_data__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 12)));
#line 421 "ml_global_data.m"
    ml_backend__ml_global_data__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 13)));
#line 423 "ml_global_data.m"
    {
#line 423 "ml_global_data.m"
      ml_backend__ml_global_data__succeeded = mercury__map__search_3_p_0((MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0, ml_backend__ml_global_data__TypeNumMap0_15, ((MR_Box) (ml_backend__ml_global_data__CellType_13)), &ml_backend__ml_global_data__conv0_OldTypeNum_17);
    }
#line 423 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 423 "ml_global_data.m"
      {
#line 423 "ml_global_data.m"
        ml_backend__ml_global_data__OldTypeNum_17 = ((MR_Word) ml_backend__ml_global_data__conv0_OldTypeNum_17);
#line 423 "ml_global_data.m"
        ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 423 "ml_global_data.m"
      }
#line 431 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 424 "ml_global_data.m"
      {
#line 427 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_36_36;
#line 425 "ml_global_data.m"
        MR_Box ml_backend__ml_global_data__conv1_STATE_VARIABLE_CellGroup_36_36;

#line 424 "ml_global_data.m"
        ml_backend__ml_global_data__TypeNum_18 = ml_backend__ml_global_data__OldTypeNum_17;
#line 425 "ml_global_data.m"
        {
#line 425 "ml_global_data.m"
          ml_backend__ml_global_data__succeeded = mercury__map__search_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0, ml_backend__ml_global_data__CellGroupMap0_16, ((MR_Box) (ml_backend__ml_global_data__TypeNum_18)), &ml_backend__ml_global_data__conv1_STATE_VARIABLE_CellGroup_36_36);
        }
#line 425 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 425 "ml_global_data.m"
          {
#line 425 "ml_global_data.m"
            ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_36_36 = ((MR_Word) ml_backend__ml_global_data__conv1_STATE_VARIABLE_CellGroup_36_36);
#line 425 "ml_global_data.m"
            ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 425 "ml_global_data.m"
          }
#line 427 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 425 "ml_global_data.m"
          ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37 = ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_36_36;
#line 427 "ml_global_data.m"
        else
#line 428 "ml_global_data.m"
          {
#line 428 "ml_global_data.m"
            MR_Word ml_backend__ml_global_data__TypeCtorInfo_166_166;
#line 428 "ml_global_data.m"
            MR_Word ml_backend__ml_global_data__V_38_38;
#line 428 "ml_global_data.m"
            MR_Word ml_backend__ml_global_data__V_40_40;
#line 428 "ml_global_data.m"
            MR_Word ml_backend__ml_global_data__V_41_41;

#line 429 "ml_global_data.m"
            {
#line 429 "ml_global_data.m"
              ml_backend__ml_global_data__V_38_38 = mercury__counter__init_1_f_0((MR_Integer) 0);
            }
#line 5765 "ml_backend.ml_global_data.c"
            ml_backend__ml_global_data__TypeCtorInfo_166_166 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
#line 429 "ml_global_data.m"
            {
#line 429 "ml_global_data.m"
              ml_backend__ml_global_data__V_40_40 = mercury__bimap__init_0_f_0(ml_backend__ml_global_data__TypeCtorInfo_166_166, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0);
            }
#line 429 "ml_global_data.m"
            {
#line 429 "ml_global_data.m"
              ml_backend__ml_global_data__V_41_41 = mercury__cord__empty_0_f_0(ml_backend__ml_global_data__TypeCtorInfo_166_166);
            }
#line 428 "ml_global_data.m"
            {
#line 428 "ml_global_data.m"
              ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 428 "ml_global_data.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 0) = ((MR_Box) (ml_backend__ml_global_data__ConstType_8));
#line 428 "ml_global_data.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 1) = ((MR_Box) (ml_backend__ml_global_data__InitArraySize_12));
#line 428 "ml_global_data.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 2) = ((MR_Box) (ml_backend__ml_global_data__V_38_38));
#line 428 "ml_global_data.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 3) = ((MR_Box) (ml_backend__ml_global_data__V_40_40));
#line 428 "ml_global_data.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 4) = ((MR_Box) (ml_backend__ml_global_data__V_41_41));
#line 428 "ml_global_data.m"
            }
#line 428 "ml_global_data.m"
          }
#line 429 "ml_global_data.m"
        ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43 = ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34;
#line 424 "ml_global_data.m"
      }
#line 431 "ml_global_data.m"
    else
#line 432 "ml_global_data.m"
      {
#line 432 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeCtorInfo_170_170;
#line 432 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeNumCounter0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 7)));
#line 432 "ml_global_data.m"
        MR_Integer ml_backend__ml_global_data__TypeRawNum_20;
#line 432 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeNumCounter_21;
#line 432 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeNumMap_22;
#line 432 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42;
#line 432 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_45_45;
#line 432 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_47_47;
#line 432 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_48_48;
#line 432 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 0)));
#line 432 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 1)));
#line 432 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 2)));
#line 432 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 3)));
#line 432 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 4)));
#line 432 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 5)));
#line 432 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 6)));
#line 432 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 8)));
#line 432 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 9)));
#line 432 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 10)));
#line 432 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 11)));
#line 432 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 12)));
#line 432 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 13)));
#line 435 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_93_93;
#line 435 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_94_94;
#line 435 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_95_95;
#line 435 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_96_96;
#line 435 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_97_97;
#line 435 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_98_98;
#line 435 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_99_99;
#line 435 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_101_101;
#line 435 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_102_102;
#line 435 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_103_103;
#line 435 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_104_104;
#line 435 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_105_105;
#line 435 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_106_106;
#line 435 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_100_100;
#line 438 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_107_107;
#line 438 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_108_108;
#line 438 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_109_109;
#line 438 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_110_110;
#line 438 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_111_111;
#line 438 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_112_112;
#line 438 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_113_113;
#line 438 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_114_114;
#line 438 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_116_116;
#line 438 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_117_117;
#line 438 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_118_118;
#line 438 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_119_119;
#line 438 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_120_120;
#line 438 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_115_115;

#line 433 "ml_global_data.m"
        {
#line 433 "ml_global_data.m"
          mercury__counter__allocate_3_p_0(&ml_backend__ml_global_data__TypeRawNum_20, ml_backend__ml_global_data__TypeNumCounter0_19, &ml_backend__ml_global_data__TypeNumCounter_21);
        }
#line 434 "ml_global_data.m"
        ml_backend__ml_global_data__TypeNum_18 = (MR_Word) ml_backend__ml_global_data__TypeRawNum_20;
#line 435 "ml_global_data.m"
        ml_backend__ml_global_data__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 0)));
#line 435 "ml_global_data.m"
        ml_backend__ml_global_data__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 1)));
#line 435 "ml_global_data.m"
        ml_backend__ml_global_data__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 2)));
#line 435 "ml_global_data.m"
        ml_backend__ml_global_data__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 3)));
#line 435 "ml_global_data.m"
        ml_backend__ml_global_data__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 4)));
#line 435 "ml_global_data.m"
        ml_backend__ml_global_data__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 5)));
#line 435 "ml_global_data.m"
        ml_backend__ml_global_data__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 6)));
#line 435 "ml_global_data.m"
        ml_backend__ml_global_data__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 7)));
#line 435 "ml_global_data.m"
        ml_backend__ml_global_data__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 8)));
#line 435 "ml_global_data.m"
        ml_backend__ml_global_data__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 9)));
#line 435 "ml_global_data.m"
        ml_backend__ml_global_data__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 10)));
#line 435 "ml_global_data.m"
        ml_backend__ml_global_data__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 11)));
#line 435 "ml_global_data.m"
        ml_backend__ml_global_data__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 12)));
#line 435 "ml_global_data.m"
        ml_backend__ml_global_data__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 13)));
#line 435 "ml_global_data.m"
        {
#line 435 "ml_global_data.m"
          ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 435 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 0) = ((MR_Box) (ml_backend__ml_global_data__V_93_93));
#line 435 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 1) = ((MR_Box) (ml_backend__ml_global_data__V_94_94));
#line 435 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 2) = ((MR_Box) (ml_backend__ml_global_data__V_95_95));
#line 435 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 3) = ((MR_Box) (ml_backend__ml_global_data__V_96_96));
#line 435 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 4) = ((MR_Box) (ml_backend__ml_global_data__V_97_97));
#line 435 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 5) = ((MR_Box) (ml_backend__ml_global_data__V_98_98));
#line 435 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 6) = ((MR_Box) (ml_backend__ml_global_data__V_99_99));
#line 435 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 7) = ((MR_Box) (ml_backend__ml_global_data__TypeNumCounter_21));
#line 435 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 8) = ((MR_Box) (ml_backend__ml_global_data__V_101_101));
#line 435 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 9) = ((MR_Box) (ml_backend__ml_global_data__V_102_102));
#line 435 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 10) = ((MR_Box) (ml_backend__ml_global_data__V_103_103));
#line 435 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 11) = ((MR_Box) (ml_backend__ml_global_data__V_104_104));
#line 435 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 12) = ((MR_Box) (ml_backend__ml_global_data__V_105_105));
#line 435 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 13) = ((MR_Box) (ml_backend__ml_global_data__V_106_106));
#line 435 "ml_global_data.m"
        }
#line 437 "ml_global_data.m"
        {
#line 437 "ml_global_data.m"
          mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0, ((MR_Box) (ml_backend__ml_global_data__CellType_13)), ((MR_Box) (ml_backend__ml_global_data__TypeNum_18)), ml_backend__ml_global_data__TypeNumMap0_15, &ml_backend__ml_global_data__TypeNumMap_22);
        }
#line 438 "ml_global_data.m"
        ml_backend__ml_global_data__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 0)));
#line 438 "ml_global_data.m"
        ml_backend__ml_global_data__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 1)));
#line 438 "ml_global_data.m"
        ml_backend__ml_global_data__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 2)));
#line 438 "ml_global_data.m"
        ml_backend__ml_global_data__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 3)));
#line 438 "ml_global_data.m"
        ml_backend__ml_global_data__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 4)));
#line 438 "ml_global_data.m"
        ml_backend__ml_global_data__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 5)));
#line 438 "ml_global_data.m"
        ml_backend__ml_global_data__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 6)));
#line 438 "ml_global_data.m"
        ml_backend__ml_global_data__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 7)));
#line 438 "ml_global_data.m"
        ml_backend__ml_global_data__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 8)));
#line 438 "ml_global_data.m"
        ml_backend__ml_global_data__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 9)));
#line 438 "ml_global_data.m"
        ml_backend__ml_global_data__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 10)));
#line 438 "ml_global_data.m"
        ml_backend__ml_global_data__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 11)));
#line 438 "ml_global_data.m"
        ml_backend__ml_global_data__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 12)));
#line 438 "ml_global_data.m"
        ml_backend__ml_global_data__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 13)));
#line 438 "ml_global_data.m"
        {
#line 438 "ml_global_data.m"
          ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 438 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 0) = ((MR_Box) (ml_backend__ml_global_data__V_107_107));
#line 438 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 1) = ((MR_Box) (ml_backend__ml_global_data__V_108_108));
#line 438 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 2) = ((MR_Box) (ml_backend__ml_global_data__V_109_109));
#line 438 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 3) = ((MR_Box) (ml_backend__ml_global_data__V_110_110));
#line 438 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 4) = ((MR_Box) (ml_backend__ml_global_data__V_111_111));
#line 438 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 5) = ((MR_Box) (ml_backend__ml_global_data__V_112_112));
#line 438 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 6) = ((MR_Box) (ml_backend__ml_global_data__V_113_113));
#line 438 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 7) = ((MR_Box) (ml_backend__ml_global_data__V_114_114));
#line 438 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 8) = ((MR_Box) (ml_backend__ml_global_data__TypeNumMap_22));
#line 438 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 9) = ((MR_Box) (ml_backend__ml_global_data__V_116_116));
#line 438 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 10) = ((MR_Box) (ml_backend__ml_global_data__V_117_117));
#line 438 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 11) = ((MR_Box) (ml_backend__ml_global_data__V_118_118));
#line 438 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 12) = ((MR_Box) (ml_backend__ml_global_data__V_119_119));
#line 438 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 13) = ((MR_Box) (ml_backend__ml_global_data__V_120_120));
#line 438 "ml_global_data.m"
        }
#line 441 "ml_global_data.m"
        {
#line 441 "ml_global_data.m"
          ml_backend__ml_global_data__V_45_45 = mercury__counter__init_1_f_0((MR_Integer) 0);
        }
#line 6045 "ml_backend.ml_global_data.c"
        ml_backend__ml_global_data__TypeCtorInfo_170_170 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
#line 441 "ml_global_data.m"
        {
#line 441 "ml_global_data.m"
          ml_backend__ml_global_data__V_47_47 = mercury__bimap__init_0_f_0(ml_backend__ml_global_data__TypeCtorInfo_170_170, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0);
        }
#line 441 "ml_global_data.m"
        {
#line 441 "ml_global_data.m"
          ml_backend__ml_global_data__V_48_48 = mercury__cord__empty_0_f_0(ml_backend__ml_global_data__TypeCtorInfo_170_170);
        }
#line 440 "ml_global_data.m"
        {
#line 440 "ml_global_data.m"
          ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 440 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 0) = ((MR_Box) (ml_backend__ml_global_data__ConstType_8));
#line 440 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 1) = ((MR_Box) (ml_backend__ml_global_data__InitArraySize_12));
#line 440 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 2) = ((MR_Box) (ml_backend__ml_global_data__V_45_45));
#line 440 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 3) = ((MR_Box) (ml_backend__ml_global_data__V_47_47));
#line 440 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 4) = ((MR_Box) (ml_backend__ml_global_data__V_48_48));
#line 440 "ml_global_data.m"
        }
#line 432 "ml_global_data.m"
      }
#line 444 "ml_global_data.m"
    ml_backend__ml_global_data__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 0)));
#line 444 "ml_global_data.m"
    ml_backend__ml_global_data__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 1)));
#line 444 "ml_global_data.m"
    ml_backend__ml_global_data__RowCounter0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 2)));
#line 444 "ml_global_data.m"
    ml_backend__ml_global_data__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 3)));
#line 444 "ml_global_data.m"
    ml_backend__ml_global_data__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 4)));
#line 445 "ml_global_data.m"
    {
#line 445 "ml_global_data.m"
      mercury__counter__allocate_3_p_0(&ml_backend__ml_global_data__RowNum_24, ml_backend__ml_global_data__RowCounter0_23, &ml_backend__ml_global_data__RowCounter_25);
    }
#line 446 "ml_global_data.m"
    ml_backend__ml_global_data__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 0)));
#line 446 "ml_global_data.m"
    ml_backend__ml_global_data__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 1)));
#line 446 "ml_global_data.m"
    ml_backend__ml_global_data__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 2)));
#line 446 "ml_global_data.m"
    ml_backend__ml_global_data__MembersMap0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 3)));
#line 446 "ml_global_data.m"
    ml_backend__ml_global_data__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 4)));
#line 447 "ml_global_data.m"
    {
#line 447 "ml_global_data.m"
      ml_backend__ml_global_data__NewCommon_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 447 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__NewCommon_27, 0) = ((MR_Box) (ml_backend__ml_global_data__MLDS_ModuleName_7));
#line 447 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__NewCommon_27, 1) = ((MR_Box) (ml_backend__ml_global_data__ConstType_8));
#line 447 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__NewCommon_27, 2) = ((MR_Box) (ml_backend__ml_global_data__TypeNum_18));
#line 447 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__NewCommon_27, 3) = ((MR_Box) (ml_backend__ml_global_data__RowNum_24));
#line 447 "ml_global_data.m"
    }
#line 6114 "ml_backend.ml_global_data.c"
    ml_backend__ml_global_data__TypeCtorInfo_172_172 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
#line 449 "ml_global_data.m"
    {
#line 449 "ml_global_data.m"
      mercury__bimap__search_insert_5_p_0(ml_backend__ml_global_data__TypeCtorInfo_172_172, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0, ((MR_Box) (ml_backend__ml_global_data__Initializer_9)), ((MR_Box) (ml_backend__ml_global_data__NewCommon_27)), &ml_backend__ml_global_data__MaybeOldCommon_28, ml_backend__ml_global_data__MembersMap0_26, &ml_backend__ml_global_data__MembersMap_29);
    }
#line 455 "ml_global_data.m"
    if ((ml_backend__ml_global_data__MaybeOldCommon_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 456 "ml_global_data.m"
      {
#line 456 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__Rows0_31;
#line 456 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__Rows_32;
#line 456 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__CellGroupMap_33;
#line 456 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50;
#line 456 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53;
#line 456 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_129_129;
#line 456 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_130_130;
#line 456 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_133_133;
#line 458 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_131_131;
#line 458 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_132_132;
#line 463 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_143_143;
#line 463 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_144_144;
#line 463 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_145_145;
#line 463 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_146_146;
#line 463 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_147_147;
#line 466 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_148_148;
#line 466 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_149_149;
#line 466 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_150_150;
#line 466 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_151_151;
#line 466 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_152_152;
#line 466 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_153_153;
#line 466 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_154_154;
#line 466 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_155_155;
#line 466 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_156_156;
#line 466 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_158_158;
#line 466 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_159_159;
#line 466 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_160_160;
#line 466 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_161_161;
#line 466 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_157_157;

#line 457 "ml_global_data.m"
        *ml_backend__ml_global_data__Common_10 = ml_backend__ml_global_data__NewCommon_27;
#line 458 "ml_global_data.m"
        ml_backend__ml_global_data__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 0)));
#line 458 "ml_global_data.m"
        ml_backend__ml_global_data__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 1)));
#line 458 "ml_global_data.m"
        ml_backend__ml_global_data__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 2)));
#line 458 "ml_global_data.m"
        ml_backend__ml_global_data__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 3)));
#line 458 "ml_global_data.m"
        ml_backend__ml_global_data__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 4)));
#line 459 "ml_global_data.m"
        ml_backend__ml_global_data__Rows0_31 = ml_backend__ml_global_data__V_133_133;
#line 459 "ml_global_data.m"
        {
#line 459 "ml_global_data.m"
          ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 459 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, 0) = ((MR_Box) (ml_backend__ml_global_data__V_129_129));
#line 459 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, 1) = ((MR_Box) (ml_backend__ml_global_data__V_130_130));
#line 459 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, 2) = ((MR_Box) (ml_backend__ml_global_data__RowCounter_25));
#line 459 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, 3) = ((MR_Box) (ml_backend__ml_global_data__MembersMap_29));
#line 459 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, 4) = ((MR_Box) (ml_backend__ml_global_data__Rows0_31));
#line 459 "ml_global_data.m"
        }
#line 462 "ml_global_data.m"
        {
#line 462 "ml_global_data.m"
          ml_backend__ml_global_data__Rows_32 = mercury__cord__snoc_2_f_0(ml_backend__ml_global_data__TypeCtorInfo_172_172, ml_backend__ml_global_data__Rows0_31, ((MR_Box) (ml_backend__ml_global_data__Initializer_9)));
        }
#line 463 "ml_global_data.m"
        ml_backend__ml_global_data__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, (MR_Integer) 0)));
#line 463 "ml_global_data.m"
        ml_backend__ml_global_data__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, (MR_Integer) 1)));
#line 463 "ml_global_data.m"
        ml_backend__ml_global_data__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, (MR_Integer) 2)));
#line 463 "ml_global_data.m"
        ml_backend__ml_global_data__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, (MR_Integer) 3)));
#line 463 "ml_global_data.m"
        ml_backend__ml_global_data__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, (MR_Integer) 4)));
#line 463 "ml_global_data.m"
        {
#line 463 "ml_global_data.m"
          ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 463 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53, 0) = ((MR_Box) (ml_backend__ml_global_data__V_143_143));
#line 463 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53, 1) = ((MR_Box) (ml_backend__ml_global_data__V_144_144));
#line 463 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53, 2) = ((MR_Box) (ml_backend__ml_global_data__V_145_145));
#line 463 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53, 3) = ((MR_Box) (ml_backend__ml_global_data__V_146_146));
#line 463 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53, 4) = ((MR_Box) (ml_backend__ml_global_data__Rows_32));
#line 463 "ml_global_data.m"
        }
#line 465 "ml_global_data.m"
        {
#line 465 "ml_global_data.m"
          mercury__map__set_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0, ((MR_Box) (ml_backend__ml_global_data__TypeNum_18)), ((MR_Box) (ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53)), ml_backend__ml_global_data__CellGroupMap0_16, &ml_backend__ml_global_data__CellGroupMap_33);
        }
#line 466 "ml_global_data.m"
        ml_backend__ml_global_data__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 0)));
#line 466 "ml_global_data.m"
        ml_backend__ml_global_data__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 1)));
#line 466 "ml_global_data.m"
        ml_backend__ml_global_data__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 2)));
#line 466 "ml_global_data.m"
        ml_backend__ml_global_data__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 3)));
#line 466 "ml_global_data.m"
        ml_backend__ml_global_data__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 4)));
#line 466 "ml_global_data.m"
        ml_backend__ml_global_data__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 5)));
#line 466 "ml_global_data.m"
        ml_backend__ml_global_data__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 6)));
#line 466 "ml_global_data.m"
        ml_backend__ml_global_data__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 7)));
#line 466 "ml_global_data.m"
        ml_backend__ml_global_data__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 8)));
#line 466 "ml_global_data.m"
        ml_backend__ml_global_data__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 9)));
#line 466 "ml_global_data.m"
        ml_backend__ml_global_data__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 10)));
#line 466 "ml_global_data.m"
        ml_backend__ml_global_data__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 11)));
#line 466 "ml_global_data.m"
        ml_backend__ml_global_data__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 12)));
#line 466 "ml_global_data.m"
        ml_backend__ml_global_data__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 13)));
#line 466 "ml_global_data.m"
        {
#line 466 "ml_global_data.m"
          MR_Word base;
#line 466 "ml_global_data.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 466 "ml_global_data.m"
          *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_35 = base;
#line 466 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__V_148_148));
#line 466 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_149_149));
#line 466 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_150_150));
#line 466 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_151_151));
#line 466 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__V_152_152));
#line 466 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__V_153_153));
#line 466 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__V_154_154));
#line 466 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_155_155));
#line 466 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_156_156));
#line 466 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__CellGroupMap_33));
#line 466 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_158_158));
#line 466 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__V_159_159));
#line 466 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__V_160_160));
#line 466 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__V_161_161));
#line 466 "ml_global_data.m"
        }
#line 456 "ml_global_data.m"
      }
#line 455 "ml_global_data.m"
    else
#line 452 "ml_global_data.m"
      {
#line 452 "ml_global_data.m"
        *ml_backend__ml_global_data__Common_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__MaybeOldCommon_28, (MR_Integer) 0)));
#line 454 "ml_global_data.m"
        *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_35 = ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43;
#line 452 "ml_global_data.m"
      }
#line 417 "ml_global_data.m"
  }
#line 412 "ml_global_data.m"
}

#line 321 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_global_data_set_rev_flat_cell_defns_3_p_0(
#line 321 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Defns_4,
#line 321 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6,
#line 321 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_7)
#line 321 "ml_global_data.m"
{
#line 342 "ml_global_data.m"
  {
#line 342 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 342 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 0)));
#line 342 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 1)));
#line 342 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 2)));
#line 342 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 3)));
#line 342 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 5)));
#line 342 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 6)));
#line 342 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 7)));
#line 342 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 8)));
#line 342 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 9)));
#line 342 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 10)));
#line 342 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 11)));
#line 342 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 12)));
#line 342 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 13)));
#line 342 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 4)));

#line 342 "ml_global_data.m"
    {
#line 342 "ml_global_data.m"
      MR_Word base;
#line 342 "ml_global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 342 "ml_global_data.m"
      *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_7 = base;
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__V_9_9));
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_10_10));
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_11_11));
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_12_12));
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__Defns_4));
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__V_14_14));
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__V_15_15));
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_16_16));
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_17_17));
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__V_18_18));
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_19_19));
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__V_20_20));
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__V_21_21));
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__V_22_22));
#line 342 "ml_global_data.m"
    }
#line 342 "ml_global_data.m"
  }
#line 321 "ml_global_data.m"
}

#line 204 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data__ml_gen_alloc_site_7_p_0(
#line 204 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__ProcLabel_8,
#line 204 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__MaybeConsId_9,
#line 204 "ml_global_data.m"
  MR_Integer ml_backend__ml_global_data__Size_10,
#line 204 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Context_11,
#line 204 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__AllocId_12,
#line 204 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23,
#line 204 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24)
#line 204 "ml_global_data.m"
{
#line 744 "ml_global_data.m"
  {
#line 744 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 744 "ml_global_data.m"
    MR_String ml_backend__ml_global_data__TypeStr_15;
#line 744 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__AllocData_16;
#line 744 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Map0_17;
#line 753 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_27_27;
#line 753 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_28_28;
#line 753 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_29_29;
#line 753 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_30_30;
#line 753 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_31_31;
#line 753 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_32_32;
#line 753 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_33_33;
#line 753 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_34_34;
#line 753 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_35_35;
#line 753 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_36_36;
#line 753 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_37_37;
#line 753 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_38_38;
#line 753 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_39_39;
#line 756 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__AllocId0_18;
#line 754 "ml_global_data.m"
    MR_Box ml_backend__ml_global_data__conv0_AllocId0_18;

#line 748 "ml_global_data.m"
    if ((ml_backend__ml_global_data__MaybeConsId_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 750 "ml_global_data.m"
      ml_backend__ml_global_data__TypeStr_15 = (MR_String) "unknown";
#line 748 "ml_global_data.m"
    else
#line 746 "ml_global_data.m"
      {
#line 746 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__ConsId_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__MaybeConsId_9, (MR_Integer) 0)));

#line 747 "ml_global_data.m"
        {
#line 747 "ml_global_data.m"
          ml_backend__ml_global_data__TypeStr_15 = ml_backend__ml_global_data__cons_id_to_alloc_site_string_1_f_0(ml_backend__ml_global_data__ConsId_14);
        }
#line 746 "ml_global_data.m"
      }
#line 752 "ml_global_data.m"
    {
#line 752 "ml_global_data.m"
      ml_backend__ml_global_data__AllocData_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 752 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__AllocData_16, 0) = ((MR_Box) (ml_backend__ml_global_data__ProcLabel_8));
#line 752 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__AllocData_16, 1) = ((MR_Box) (ml_backend__ml_global_data__Context_11));
#line 752 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__AllocData_16, 2) = ((MR_Box) (ml_backend__ml_global_data__TypeStr_15));
#line 752 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__AllocData_16, 3) = ((MR_Box) (ml_backend__ml_global_data__Size_10));
#line 752 "ml_global_data.m"
    }
#line 753 "ml_global_data.m"
    ml_backend__ml_global_data__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 0)));
#line 753 "ml_global_data.m"
    ml_backend__ml_global_data__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 1)));
#line 753 "ml_global_data.m"
    ml_backend__ml_global_data__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 2)));
#line 753 "ml_global_data.m"
    ml_backend__ml_global_data__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 3)));
#line 753 "ml_global_data.m"
    ml_backend__ml_global_data__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 4)));
#line 753 "ml_global_data.m"
    ml_backend__ml_global_data__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 5)));
#line 753 "ml_global_data.m"
    ml_backend__ml_global_data__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 6)));
#line 753 "ml_global_data.m"
    ml_backend__ml_global_data__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 7)));
#line 753 "ml_global_data.m"
    ml_backend__ml_global_data__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 8)));
#line 753 "ml_global_data.m"
    ml_backend__ml_global_data__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 9)));
#line 753 "ml_global_data.m"
    ml_backend__ml_global_data__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 10)));
#line 753 "ml_global_data.m"
    ml_backend__ml_global_data__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 11)));
#line 753 "ml_global_data.m"
    ml_backend__ml_global_data__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 12)));
#line 753 "ml_global_data.m"
    ml_backend__ml_global_data__Map0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 13)));
#line 754 "ml_global_data.m"
    {
#line 754 "ml_global_data.m"
      ml_backend__ml_global_data__succeeded = mercury__bimap__search_3_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_alloc_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0, ml_backend__ml_global_data__Map0_17, &ml_backend__ml_global_data__conv0_AllocId0_18, ((MR_Box) (ml_backend__ml_global_data__AllocData_16)));
    }
#line 754 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 754 "ml_global_data.m"
      {
#line 754 "ml_global_data.m"
        ml_backend__ml_global_data__AllocId0_18 = ((MR_Word) ml_backend__ml_global_data__conv0_AllocId0_18);
#line 754 "ml_global_data.m"
        ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 754 "ml_global_data.m"
      }
#line 756 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 755 "ml_global_data.m"
      {
#line 755 "ml_global_data.m"
        *ml_backend__ml_global_data__AllocId_12 = ml_backend__ml_global_data__AllocId0_18;
#line 755 "ml_global_data.m"
        *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24 = ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23;
#line 755 "ml_global_data.m"
      }
#line 756 "ml_global_data.m"
    else
#line 757 "ml_global_data.m"
      {
#line 757 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__Counter0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 12)));
#line 757 "ml_global_data.m"
        MR_Integer ml_backend__ml_global_data__AllocIdNum_20;
#line 757 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__Counter_21;
#line 757 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__Map_22;
#line 757 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_53_53;
#line 757 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_54_54;
#line 757 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_55_55;
#line 757 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_56_56;
#line 757 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_57_57;
#line 757 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_58_58;
#line 757 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_59_59;
#line 757 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_60_60;
#line 757 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_61_61;
#line 757 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_62_62;
#line 757 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_63_63;
#line 757 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_64_64;
#line 757 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 0)));
#line 757 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 1)));
#line 757 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 2)));
#line 757 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 3)));
#line 757 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 4)));
#line 757 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 5)));
#line 757 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 6)));
#line 757 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 7)));
#line 757 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 8)));
#line 757 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 9)));
#line 757 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 10)));
#line 757 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 11)));
#line 757 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 13)));
#line 761 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_65_65;
#line 761 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_66_66;

#line 758 "ml_global_data.m"
        {
#line 758 "ml_global_data.m"
          mercury__counter__allocate_3_p_0(&ml_backend__ml_global_data__AllocIdNum_20, ml_backend__ml_global_data__Counter0_19, &ml_backend__ml_global_data__Counter_21);
        }
#line 759 "ml_global_data.m"
        *ml_backend__ml_global_data__AllocId_12 = (MR_Word) ml_backend__ml_global_data__AllocIdNum_20;
#line 760 "ml_global_data.m"
        {
#line 760 "ml_global_data.m"
          mercury__bimap__det_insert_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_alloc_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0, ((MR_Box) (*ml_backend__ml_global_data__AllocId_12)), ((MR_Box) (ml_backend__ml_global_data__AllocData_16)), ml_backend__ml_global_data__Map0_17, &ml_backend__ml_global_data__Map_22);
        }
#line 761 "ml_global_data.m"
        ml_backend__ml_global_data__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 0)));
#line 761 "ml_global_data.m"
        ml_backend__ml_global_data__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 1)));
#line 761 "ml_global_data.m"
        ml_backend__ml_global_data__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 2)));
#line 761 "ml_global_data.m"
        ml_backend__ml_global_data__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 3)));
#line 761 "ml_global_data.m"
        ml_backend__ml_global_data__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 4)));
#line 761 "ml_global_data.m"
        ml_backend__ml_global_data__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 5)));
#line 761 "ml_global_data.m"
        ml_backend__ml_global_data__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 6)));
#line 761 "ml_global_data.m"
        ml_backend__ml_global_data__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 7)));
#line 761 "ml_global_data.m"
        ml_backend__ml_global_data__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 8)));
#line 761 "ml_global_data.m"
        ml_backend__ml_global_data__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 9)));
#line 761 "ml_global_data.m"
        ml_backend__ml_global_data__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 10)));
#line 761 "ml_global_data.m"
        ml_backend__ml_global_data__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 11)));
#line 761 "ml_global_data.m"
        ml_backend__ml_global_data__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 12)));
#line 761 "ml_global_data.m"
        ml_backend__ml_global_data__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 13)));
#line 762 "ml_global_data.m"
        {
#line 762 "ml_global_data.m"
          MR_Word base;
#line 762 "ml_global_data.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 762 "ml_global_data.m"
          *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24 = base;
#line 762 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__V_53_53));
#line 762 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_54_54));
#line 762 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_55_55));
#line 762 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_56_56));
#line 762 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__V_57_57));
#line 762 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__V_58_58));
#line 762 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__V_59_59));
#line 762 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_60_60));
#line 762 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_61_61));
#line 762 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__V_62_62));
#line 762 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_63_63));
#line 762 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__V_64_64));
#line 762 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__Counter_21));
#line 762 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__Map_22));
#line 762 "ml_global_data.m"
        }
#line 757 "ml_global_data.m"
      }
#line 744 "ml_global_data.m"
  }
#line 204 "ml_global_data.m"
}

#line 198 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(
#line 198 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__MLDS_ModuleName_7,
#line 198 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__TypeNum_8,
#line 198 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__RowInitializers_9,
#line 198 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__Common_10,
#line 198 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22,
#line 198 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_23)
#line 198 "ml_global_data.m"
{
#line 720 "ml_global_data.m"
  {
#line 720 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 720 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_78_78 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
#line 720 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_79_79;
#line 720 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_80_80;
#line 720 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__NumRows_13;
#line 720 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__CellGroupMap0_14;
#line 720 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__StartRowNum_16;
#line 720 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__NextRow_17;
#line 720 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__StructType_18;
#line 720 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Rows0_19;
#line 720 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Rows_20;
#line 720 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__CellGroupMap_21;
#line 720 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_24_24;
#line 720 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25;
#line 720 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_26_26;
#line 720 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_27_27;
#line 720 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_42_42;
#line 720 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_43_43;
#line 720 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_44_44;
#line 720 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_45_45;
#line 721 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_29_29;
#line 721 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_30_30;
#line 721 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_31_31;
#line 721 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_32_32;
#line 721 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_33_33;
#line 721 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_34_34;
#line 721 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_35_35;
#line 721 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_36_36;
#line 721 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_37_37;
#line 721 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_38_38;
#line 721 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_39_39;
#line 721 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_40_40;
#line 721 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_41_41;
#line 722 "ml_global_data.m"
    MR_Box ml_backend__ml_global_data__conv0_STATE_VARIABLE_CellGroup_24_24;
#line 735 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_59_59;
#line 735 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_60_60;
#line 735 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_61_61;
#line 735 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__V_62_62;
#line 735 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_63_63;
#line 738 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_64_64;
#line 738 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_65_65;
#line 738 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_66_66;
#line 738 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_67_67;
#line 738 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_68_68;
#line 738 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_69_69;
#line 738 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_70_70;
#line 738 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_71_71;
#line 738 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_72_72;
#line 738 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_73_73;
#line 738 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_74_74;
#line 738 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_76_76;
#line 738 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_77_77;
#line 738 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_75_75;

#line 720 "ml_global_data.m"
    {
#line 720 "ml_global_data.m"
      mercury__list__length_2_p_0(ml_backend__ml_global_data__TypeCtorInfo_78_78, ml_backend__ml_global_data__RowInitializers_9, &ml_backend__ml_global_data__NumRows_13);
    }
#line 721 "ml_global_data.m"
    ml_backend__ml_global_data__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 0)));
#line 721 "ml_global_data.m"
    ml_backend__ml_global_data__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 1)));
#line 721 "ml_global_data.m"
    ml_backend__ml_global_data__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 2)));
#line 721 "ml_global_data.m"
    ml_backend__ml_global_data__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 3)));
#line 721 "ml_global_data.m"
    ml_backend__ml_global_data__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 4)));
#line 721 "ml_global_data.m"
    ml_backend__ml_global_data__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 5)));
#line 721 "ml_global_data.m"
    ml_backend__ml_global_data__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 6)));
#line 721 "ml_global_data.m"
    ml_backend__ml_global_data__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 7)));
#line 721 "ml_global_data.m"
    ml_backend__ml_global_data__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 8)));
#line 721 "ml_global_data.m"
    ml_backend__ml_global_data__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 9)));
#line 721 "ml_global_data.m"
    ml_backend__ml_global_data__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 10)));
#line 721 "ml_global_data.m"
    ml_backend__ml_global_data__CellGroupMap0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 11)));
#line 721 "ml_global_data.m"
    ml_backend__ml_global_data__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 12)));
#line 721 "ml_global_data.m"
    ml_backend__ml_global_data__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 13)));
#line 6876 "ml_backend.ml_global_data.c"
    ml_backend__ml_global_data__TypeCtorInfo_79_79 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0;
#line 6878 "ml_backend.ml_global_data.c"
    ml_backend__ml_global_data__TypeCtorInfo_80_80 = (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0;
#line 722 "ml_global_data.m"
    {
#line 722 "ml_global_data.m"
      mercury__map__lookup_3_p_0(ml_backend__ml_global_data__TypeCtorInfo_79_79, ml_backend__ml_global_data__TypeCtorInfo_80_80, ml_backend__ml_global_data__CellGroupMap0_14, ((MR_Box) (ml_backend__ml_global_data__TypeNum_8)), &ml_backend__ml_global_data__conv0_STATE_VARIABLE_CellGroup_24_24);
    }
#line 722 "ml_global_data.m"
    ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_24_24 = ((MR_Word) ml_backend__ml_global_data__conv0_STATE_VARIABLE_CellGroup_24_24);
#line 724 "ml_global_data.m"
    ml_backend__ml_global_data__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_24_24, (MR_Integer) 0)));
#line 724 "ml_global_data.m"
    ml_backend__ml_global_data__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_24_24, (MR_Integer) 1)));
#line 724 "ml_global_data.m"
    ml_backend__ml_global_data__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_24_24, (MR_Integer) 2)));
#line 724 "ml_global_data.m"
    ml_backend__ml_global_data__StartRowNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_24_24, (MR_Integer) 3)));
#line 724 "ml_global_data.m"
    ml_backend__ml_global_data__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_24_24, (MR_Integer) 4)));
#line 726 "ml_global_data.m"
    ml_backend__ml_global_data__NextRow_17 = (ml_backend__ml_global_data__StartRowNum_16 + ml_backend__ml_global_data__NumRows_13);
#line 727 "ml_global_data.m"
    ml_backend__ml_global_data__StructType_18 = ml_backend__ml_global_data__V_42_42;
#line 727 "ml_global_data.m"
    ml_backend__ml_global_data__Rows0_19 = ml_backend__ml_global_data__V_45_45;
#line 727 "ml_global_data.m"
    {
#line 727 "ml_global_data.m"
      ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 727 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25, 0) = ((MR_Box) (ml_backend__ml_global_data__StructType_18));
#line 727 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25, 1) = ((MR_Box) (ml_backend__ml_global_data__V_43_43));
#line 727 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25, 2) = ((MR_Box) (ml_backend__ml_global_data__V_44_44));
#line 727 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25, 3) = ((MR_Box) (ml_backend__ml_global_data__NextRow_17));
#line 727 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25, 4) = ((MR_Box) (ml_backend__ml_global_data__Rows0_19));
#line 727 "ml_global_data.m"
    }
#line 730 "ml_global_data.m"
    {
#line 730 "ml_global_data.m"
      MR_Word base;
#line 730 "ml_global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 730 "ml_global_data.m"
      *ml_backend__ml_global_data__Common_10 = base;
#line 730 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__MLDS_ModuleName_7));
#line 730 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__StructType_18));
#line 730 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__TypeNum_8));
#line 730 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__StartRowNum_16));
#line 730 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__NumRows_13));
#line 730 "ml_global_data.m"
    }
#line 734 "ml_global_data.m"
    {
#line 734 "ml_global_data.m"
      ml_backend__ml_global_data__V_26_26 = mercury__cord__from_list_1_f_0(ml_backend__ml_global_data__TypeCtorInfo_78_78, ml_backend__ml_global_data__RowInitializers_9);
    }
#line 734 "ml_global_data.m"
    {
#line 734 "ml_global_data.m"
      ml_backend__ml_global_data__Rows_20 = mercury__cord__f_43_43_2_f_0(ml_backend__ml_global_data__TypeCtorInfo_78_78, ml_backend__ml_global_data__Rows0_19, ml_backend__ml_global_data__V_26_26);
    }
#line 735 "ml_global_data.m"
    ml_backend__ml_global_data__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25, (MR_Integer) 0)));
#line 735 "ml_global_data.m"
    ml_backend__ml_global_data__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25, (MR_Integer) 1)));
#line 735 "ml_global_data.m"
    ml_backend__ml_global_data__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25, (MR_Integer) 2)));
#line 735 "ml_global_data.m"
    ml_backend__ml_global_data__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25, (MR_Integer) 3)));
#line 735 "ml_global_data.m"
    ml_backend__ml_global_data__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25, (MR_Integer) 4)));
#line 735 "ml_global_data.m"
    {
#line 735 "ml_global_data.m"
      ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 735 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_27_27, 0) = ((MR_Box) (ml_backend__ml_global_data__V_59_59));
#line 735 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_27_27, 1) = ((MR_Box) (ml_backend__ml_global_data__V_60_60));
#line 735 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_27_27, 2) = ((MR_Box) (ml_backend__ml_global_data__V_61_61));
#line 735 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_27_27, 3) = ((MR_Box) (ml_backend__ml_global_data__V_62_62));
#line 735 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_27_27, 4) = ((MR_Box) (ml_backend__ml_global_data__Rows_20));
#line 735 "ml_global_data.m"
    }
#line 737 "ml_global_data.m"
    {
#line 737 "ml_global_data.m"
      mercury__map__det_update_4_p_0(ml_backend__ml_global_data__TypeCtorInfo_79_79, ml_backend__ml_global_data__TypeCtorInfo_80_80, ((MR_Box) (ml_backend__ml_global_data__TypeNum_8)), ((MR_Box) (ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_27_27)), ml_backend__ml_global_data__CellGroupMap0_14, &ml_backend__ml_global_data__CellGroupMap_21);
    }
#line 738 "ml_global_data.m"
    ml_backend__ml_global_data__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 0)));
#line 738 "ml_global_data.m"
    ml_backend__ml_global_data__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 1)));
#line 738 "ml_global_data.m"
    ml_backend__ml_global_data__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 2)));
#line 738 "ml_global_data.m"
    ml_backend__ml_global_data__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 3)));
#line 738 "ml_global_data.m"
    ml_backend__ml_global_data__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 4)));
#line 738 "ml_global_data.m"
    ml_backend__ml_global_data__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 5)));
#line 738 "ml_global_data.m"
    ml_backend__ml_global_data__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 6)));
#line 738 "ml_global_data.m"
    ml_backend__ml_global_data__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 7)));
#line 738 "ml_global_data.m"
    ml_backend__ml_global_data__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 8)));
#line 738 "ml_global_data.m"
    ml_backend__ml_global_data__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 9)));
#line 738 "ml_global_data.m"
    ml_backend__ml_global_data__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 10)));
#line 738 "ml_global_data.m"
    ml_backend__ml_global_data__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 11)));
#line 738 "ml_global_data.m"
    ml_backend__ml_global_data__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 12)));
#line 738 "ml_global_data.m"
    ml_backend__ml_global_data__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 13)));
#line 738 "ml_global_data.m"
    {
#line 738 "ml_global_data.m"
      MR_Word base;
#line 738 "ml_global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 738 "ml_global_data.m"
      *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_23 = base;
#line 738 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__V_64_64));
#line 738 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_65_65));
#line 738 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_66_66));
#line 738 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_67_67));
#line 738 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__V_68_68));
#line 738 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__V_69_69));
#line 738 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__V_70_70));
#line 738 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_71_71));
#line 738 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_72_72));
#line 738 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__V_73_73));
#line 738 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_74_74));
#line 738 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__CellGroupMap_21));
#line 738 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__V_76_76));
#line 738 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__V_77_77));
#line 738 "ml_global_data.m"
    }
#line 720 "ml_global_data.m"
  }
#line 198 "ml_global_data.m"
}

#line 190 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(
#line 190 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__MLDS_ModuleName_10,
#line 190 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__MLDS_Context_11,
#line 190 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Target_12,
#line 190 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__ArgTypes_13,
#line 190 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__TypeNum_14,
#line 190 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__StructType_15,
#line 190 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__FieldIds_16,
#line 190 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46,
#line 190 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47)
#line 190 "ml_global_data.m"
{
#line 617 "ml_global_data.m"
  {
#line 617 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 617 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeNumMap0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 10)));
#line 617 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 7)));
#line 617 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 11)));
#line 618 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 0)));
#line 618 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 1)));
#line 618 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 2)));
#line 618 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 3)));
#line 618 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 4)));
#line 618 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 5)));
#line 618 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 6)));
#line 618 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 8)));
#line 618 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 9)));
#line 618 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 12)));
#line 618 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 13)));
#line 625 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__OldTypeNum_19;
#line 619 "ml_global_data.m"
    MR_Box ml_backend__ml_global_data__conv0_OldTypeNum_19;

#line 619 "ml_global_data.m"
    {
#line 619 "ml_global_data.m"
      ml_backend__ml_global_data__succeeded = mercury__map__search_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[0], (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0, ml_backend__ml_global_data__TypeNumMap0_18, ((MR_Box) (ml_backend__ml_global_data__ArgTypes_13)), &ml_backend__ml_global_data__conv0_OldTypeNum_19);
    }
#line 619 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 619 "ml_global_data.m"
      {
#line 619 "ml_global_data.m"
        ml_backend__ml_global_data__OldTypeNum_19 = ((MR_Word) ml_backend__ml_global_data__conv0_OldTypeNum_19);
#line 619 "ml_global_data.m"
        ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 619 "ml_global_data.m"
      }
#line 625 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 620 "ml_global_data.m"
      {
#line 620 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__CellGroup_21;
#line 622 "ml_global_data.m"
        MR_Box ml_backend__ml_global_data__conv1_CellGroup_21;
#line 623 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data___TypeDefn_22;
#line 623 "ml_global_data.m"
        MR_Integer ml_backend__ml_global_data__V_23_23;
#line 623 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_24_24;

#line 620 "ml_global_data.m"
        *ml_backend__ml_global_data__TypeNum_14 = ml_backend__ml_global_data__OldTypeNum_19;
#line 622 "ml_global_data.m"
        {
#line 622 "ml_global_data.m"
          mercury__map__lookup_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0, ml_backend__ml_global_data__V_97_97, ((MR_Box) (*ml_backend__ml_global_data__TypeNum_14)), &ml_backend__ml_global_data__conv1_CellGroup_21);
        }
#line 622 "ml_global_data.m"
        ml_backend__ml_global_data__CellGroup_21 = ((MR_Word) ml_backend__ml_global_data__conv1_CellGroup_21);
#line 623 "ml_global_data.m"
        *ml_backend__ml_global_data__StructType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_21, (MR_Integer) 0)));
#line 623 "ml_global_data.m"
        ml_backend__ml_global_data___TypeDefn_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_21, (MR_Integer) 1)));
#line 623 "ml_global_data.m"
        *ml_backend__ml_global_data__FieldIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_21, (MR_Integer) 2)));
#line 623 "ml_global_data.m"
        ml_backend__ml_global_data__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_21, (MR_Integer) 3)));
#line 623 "ml_global_data.m"
        ml_backend__ml_global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_21, (MR_Integer) 4)));
#line 623 "ml_global_data.m"
        *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47 = ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46;
#line 620 "ml_global_data.m"
      }
#line 625 "ml_global_data.m"
    else
#line 626 "ml_global_data.m"
      {
#line 626 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeCtorInfo_186_186;
#line 626 "ml_global_data.m"
        MR_Integer ml_backend__ml_global_data__TypeRawNum_26;
#line 626 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeNumCounter_27;
#line 626 "ml_global_data.m"
        MR_String ml_backend__ml_global_data__TypeRawNumStr_28;
#line 626 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeNumMap_29;
#line 626 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__FieldFlags_30;
#line 626 "ml_global_data.m"
        MR_String ml_backend__ml_global_data__FieldNamePrefix_31;
#line 626 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__FieldNames_32;
#line 626 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__FieldDefns_33;
#line 626 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__ClassKind_34;
#line 626 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__CtorDefns_35;
#line 626 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__ClassDefn_37;
#line 626 "ml_global_data.m"
        MR_String ml_backend__ml_global_data__StructTypeName_38;
#line 626 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__StructTypeEntityName_39;
#line 626 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__StructTypeEntityDefn_40;
#line 626 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__StructTypeFlags_41;
#line 626 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__StructTypeDefn_42;
#line 626 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__QualStructTypeName_43;
#line 626 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__MLDS_ClassModuleName_44;
#line 626 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__CellGroupMap0_45;
#line 626 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48;
#line 626 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49;
#line 626 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_83_83;
#line 626 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__CellGroupMap_85;
#line 626 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__CellGroup_86;
#line 630 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_126_126;
#line 630 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_127_127;
#line 630 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_128_128;
#line 630 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_129_129;
#line 630 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_130_130;
#line 630 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_131_131;
#line 630 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_132_132;
#line 630 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_134_134;
#line 630 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_135_135;
#line 630 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_136_136;
#line 630 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_137_137;
#line 630 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_138_138;
#line 630 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_139_139;
#line 630 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_133_133;
#line 633 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_140_140;
#line 633 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_141_141;
#line 633 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_142_142;
#line 633 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_143_143;
#line 633 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_144_144;
#line 633 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_145_145;
#line 633 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_146_146;
#line 633 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_147_147;
#line 633 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_148_148;
#line 633 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_149_149;
#line 633 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_151_151;
#line 633 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_152_152;
#line 633 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_153_153;
#line 633 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_150_150;
#line 687 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_154_154;
#line 687 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_155_155;
#line 687 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_156_156;
#line 687 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_157_157;
#line 687 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_158_158;
#line 687 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_159_159;
#line 687 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_160_160;
#line 687 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_161_161;
#line 687 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_162_162;
#line 687 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_163_163;
#line 687 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_164_164;
#line 687 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_165_165;
#line 687 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_166_166;
#line 689 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_167_167;
#line 689 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_168_168;
#line 689 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_169_169;
#line 689 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_170_170;
#line 689 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_171_171;
#line 689 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_172_172;
#line 689 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_173_173;
#line 689 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_174_174;
#line 689 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_175_175;
#line 689 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_176_176;
#line 689 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_177_177;
#line 689 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_179_179;
#line 689 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_180_180;
#line 689 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_178_178;

#line 627 "ml_global_data.m"
        {
#line 627 "ml_global_data.m"
          mercury__counter__allocate_3_p_0(&ml_backend__ml_global_data__TypeRawNum_26, ml_backend__ml_global_data__V_94_94, &ml_backend__ml_global_data__TypeNumCounter_27);
        }
#line 628 "ml_global_data.m"
        {
#line 628 "ml_global_data.m"
          ml_backend__ml_global_data__TypeRawNumStr_28 = mercury__string__int_to_string_1_f_0(ml_backend__ml_global_data__TypeRawNum_26);
        }
#line 629 "ml_global_data.m"
        *ml_backend__ml_global_data__TypeNum_14 = (MR_Word) ml_backend__ml_global_data__TypeRawNum_26;
#line 630 "ml_global_data.m"
        ml_backend__ml_global_data__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 0)));
#line 630 "ml_global_data.m"
        ml_backend__ml_global_data__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 1)));
#line 630 "ml_global_data.m"
        ml_backend__ml_global_data__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 2)));
#line 630 "ml_global_data.m"
        ml_backend__ml_global_data__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 3)));
#line 630 "ml_global_data.m"
        ml_backend__ml_global_data__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 4)));
#line 630 "ml_global_data.m"
        ml_backend__ml_global_data__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 5)));
#line 630 "ml_global_data.m"
        ml_backend__ml_global_data__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 6)));
#line 630 "ml_global_data.m"
        ml_backend__ml_global_data__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 7)));
#line 630 "ml_global_data.m"
        ml_backend__ml_global_data__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 8)));
#line 630 "ml_global_data.m"
        ml_backend__ml_global_data__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 9)));
#line 630 "ml_global_data.m"
        ml_backend__ml_global_data__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 10)));
#line 630 "ml_global_data.m"
        ml_backend__ml_global_data__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 11)));
#line 630 "ml_global_data.m"
        ml_backend__ml_global_data__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 12)));
#line 630 "ml_global_data.m"
        ml_backend__ml_global_data__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 13)));
#line 630 "ml_global_data.m"
        {
#line 630 "ml_global_data.m"
          ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 630 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 0) = ((MR_Box) (ml_backend__ml_global_data__V_126_126));
#line 630 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 1) = ((MR_Box) (ml_backend__ml_global_data__V_127_127));
#line 630 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 2) = ((MR_Box) (ml_backend__ml_global_data__V_128_128));
#line 630 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 3) = ((MR_Box) (ml_backend__ml_global_data__V_129_129));
#line 630 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 4) = ((MR_Box) (ml_backend__ml_global_data__V_130_130));
#line 630 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 5) = ((MR_Box) (ml_backend__ml_global_data__V_131_131));
#line 630 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 6) = ((MR_Box) (ml_backend__ml_global_data__V_132_132));
#line 630 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 7) = ((MR_Box) (ml_backend__ml_global_data__TypeNumCounter_27));
#line 630 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 8) = ((MR_Box) (ml_backend__ml_global_data__V_134_134));
#line 630 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 9) = ((MR_Box) (ml_backend__ml_global_data__V_135_135));
#line 630 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 10) = ((MR_Box) (ml_backend__ml_global_data__V_136_136));
#line 630 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 11) = ((MR_Box) (ml_backend__ml_global_data__V_137_137));
#line 630 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 12) = ((MR_Box) (ml_backend__ml_global_data__V_138_138));
#line 630 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 13) = ((MR_Box) (ml_backend__ml_global_data__V_139_139));
#line 630 "ml_global_data.m"
        }
#line 7403 "ml_backend.ml_global_data.c"
        ml_backend__ml_global_data__TypeCtorInfo_186_186 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0;
#line 632 "ml_global_data.m"
        {
#line 632 "ml_global_data.m"
          mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[0], ml_backend__ml_global_data__TypeCtorInfo_186_186, ((MR_Box) (ml_backend__ml_global_data__ArgTypes_13)), ((MR_Box) (*ml_backend__ml_global_data__TypeNum_14)), ml_backend__ml_global_data__TypeNumMap0_18, &ml_backend__ml_global_data__TypeNumMap_29);
        }
#line 633 "ml_global_data.m"
        ml_backend__ml_global_data__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 0)));
#line 633 "ml_global_data.m"
        ml_backend__ml_global_data__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 1)));
#line 633 "ml_global_data.m"
        ml_backend__ml_global_data__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 2)));
#line 633 "ml_global_data.m"
        ml_backend__ml_global_data__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 3)));
#line 633 "ml_global_data.m"
        ml_backend__ml_global_data__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 4)));
#line 633 "ml_global_data.m"
        ml_backend__ml_global_data__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 5)));
#line 633 "ml_global_data.m"
        ml_backend__ml_global_data__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 6)));
#line 633 "ml_global_data.m"
        ml_backend__ml_global_data__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 7)));
#line 633 "ml_global_data.m"
        ml_backend__ml_global_data__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 8)));
#line 633 "ml_global_data.m"
        ml_backend__ml_global_data__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 9)));
#line 633 "ml_global_data.m"
        ml_backend__ml_global_data__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 10)));
#line 633 "ml_global_data.m"
        ml_backend__ml_global_data__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 11)));
#line 633 "ml_global_data.m"
        ml_backend__ml_global_data__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 12)));
#line 633 "ml_global_data.m"
        ml_backend__ml_global_data__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 13)));
#line 633 "ml_global_data.m"
        {
#line 633 "ml_global_data.m"
          ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 633 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 0) = ((MR_Box) (ml_backend__ml_global_data__V_140_140));
#line 633 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 1) = ((MR_Box) (ml_backend__ml_global_data__V_141_141));
#line 633 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 2) = ((MR_Box) (ml_backend__ml_global_data__V_142_142));
#line 633 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 3) = ((MR_Box) (ml_backend__ml_global_data__V_143_143));
#line 633 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 4) = ((MR_Box) (ml_backend__ml_global_data__V_144_144));
#line 633 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 5) = ((MR_Box) (ml_backend__ml_global_data__V_145_145));
#line 633 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 6) = ((MR_Box) (ml_backend__ml_global_data__V_146_146));
#line 633 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 7) = ((MR_Box) (ml_backend__ml_global_data__V_147_147));
#line 633 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 8) = ((MR_Box) (ml_backend__ml_global_data__V_148_148));
#line 633 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 9) = ((MR_Box) (ml_backend__ml_global_data__V_149_149));
#line 633 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 10) = ((MR_Box) (ml_backend__ml_global_data__TypeNumMap_29));
#line 633 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 11) = ((MR_Box) (ml_backend__ml_global_data__V_151_151));
#line 633 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 12) = ((MR_Box) (ml_backend__ml_global_data__V_152_152));
#line 633 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 13) = ((MR_Box) (ml_backend__ml_global_data__V_153_153));
#line 633 "ml_global_data.m"
        }
#line 635 "ml_global_data.m"
        {
#line 635 "ml_global_data.m"
          ml_backend__ml_global_data__FieldFlags_30 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0);
        }
#line 637 "ml_global_data.m"
        {
#line 637 "ml_global_data.m"
          ml_backend__ml_global_data__FieldNamePrefix_31 = mercury__string__f_43_43_2_f_0((MR_String) "vct_", ml_backend__ml_global_data__TypeRawNumStr_28);
        }
#line 638 "ml_global_data.m"
        {
#line 638 "ml_global_data.m"
          ml_backend__ml_global_data__ml_gen_vector_cell_field_types_7_p_0(ml_backend__ml_global_data__MLDS_Context_11, ml_backend__ml_global_data__FieldFlags_30, ml_backend__ml_global_data__FieldNamePrefix_31, (MR_Integer) 0, ml_backend__ml_global_data__ArgTypes_13, &ml_backend__ml_global_data__FieldNames_32, &ml_backend__ml_global_data__FieldDefns_33);
        }
#line 666 "ml_global_data.m"
        {
#line 666 "ml_global_data.m"
          ml_backend__ml_global_data__StructTypeName_38 = mercury__string__f_43_43_2_f_0((MR_String) "vector_common_type_", ml_backend__ml_global_data__TypeRawNumStr_28);
        }
#line 667 "ml_global_data.m"
        {
#line 667 "ml_global_data.m"
          ml_backend__ml_global_data__StructTypeEntityName_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 667 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__StructTypeEntityName_39, 0) = ((MR_Box) (ml_backend__ml_global_data__StructTypeName_38));
#line 667 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__StructTypeEntityName_39, 1) = ((MR_Box) ((MR_Integer) 0));
#line 667 "ml_global_data.m"
        }
#line 671 "ml_global_data.m"
        {
#line 671 "ml_global_data.m"
          ml_backend__ml_global_data__StructTypeFlags_41 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 2, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0);
        }
#line 676 "ml_global_data.m"
        {
#line 676 "ml_global_data.m"
          ml_backend__ml_global_data__QualStructTypeName_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 676 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__QualStructTypeName_43, 0) = ((MR_Box) (ml_backend__ml_global_data__MLDS_ModuleName_10));
#line 676 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__QualStructTypeName_43, 1) = ((MR_Box) ((MR_Integer) 0));
#line 676 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__QualStructTypeName_43, 2) = ((MR_Box) (ml_backend__ml_global_data__StructTypeName_38));
#line 676 "ml_global_data.m"
        }
#line 677 "ml_global_data.m"
        {
#line 677 "ml_global_data.m"
          MR_Word base;
#line 677 "ml_global_data.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 677 "ml_global_data.m"
          *ml_backend__ml_global_data__StructType_15 = base;
#line 677 "ml_global_data.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 677 "ml_global_data.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_global_data__QualStructTypeName_43));
#line 677 "ml_global_data.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 0));
#line 677 "ml_global_data.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) ((MR_Integer) 3));
#line 677 "ml_global_data.m"
        }
#line 645 "ml_global_data.m"
        if ((ml_backend__ml_global_data__Target_12 == (MR_Integer) 0))
#line 642 "ml_global_data.m"
          {
#line 643 "ml_global_data.m"
            ml_backend__ml_global_data__ClassKind_34 = (MR_Integer) 3;
#line 644 "ml_global_data.m"
            ml_backend__ml_global_data__CtorDefns_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 642 "ml_global_data.m"
          }
#line 645 "ml_global_data.m"
        else
#line 645 "ml_global_data.m"
          if ((ml_backend__ml_global_data__Target_12 == (MR_Integer) 2))
#line 652 "ml_global_data.m"
            {
#line 652 "ml_global_data.m"
              MR_Word ml_backend__ml_global_data__CtorDefn_36;

#line 651 "ml_global_data.m"
              ml_backend__ml_global_data__ClassKind_34 = (MR_Integer) 3;
#line 653 "ml_global_data.m"
              {
#line 653 "ml_global_data.m"
                ml_backend__ml_global_data__CtorDefn_36 = ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0(ml_backend__ml_global_data__Target_12, *ml_backend__ml_global_data__StructType_15, *ml_backend__ml_global_data__StructType_15, ml_backend__ml_global_data__MLDS_ModuleName_10, *ml_backend__ml_global_data__StructType_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_global_data__FieldDefns_33, ml_backend__ml_global_data__MLDS_Context_11);
              }
#line 656 "ml_global_data.m"
              {
#line 656 "ml_global_data.m"
                ml_backend__ml_global_data__CtorDefns_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 656 "ml_global_data.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__CtorDefns_35, 0) = ((MR_Box) (ml_backend__ml_global_data__CtorDefn_36));
#line 656 "ml_global_data.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__CtorDefns_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 656 "ml_global_data.m"
              }
#line 652 "ml_global_data.m"
            }
#line 645 "ml_global_data.m"
          else
#line 645 "ml_global_data.m"
            if ((ml_backend__ml_global_data__Target_12 == (MR_Integer) 3))
#line 652 "ml_global_data.m"
              {
#line 652 "ml_global_data.m"
                MR_Word ml_backend__ml_global_data__CtorDefn_189;

#line 648 "ml_global_data.m"
                ml_backend__ml_global_data__ClassKind_34 = (MR_Integer) 0;
#line 653 "ml_global_data.m"
                {
#line 653 "ml_global_data.m"
                  ml_backend__ml_global_data__CtorDefn_189 = ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0(ml_backend__ml_global_data__Target_12, *ml_backend__ml_global_data__StructType_15, *ml_backend__ml_global_data__StructType_15, ml_backend__ml_global_data__MLDS_ModuleName_10, *ml_backend__ml_global_data__StructType_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_global_data__FieldDefns_33, ml_backend__ml_global_data__MLDS_Context_11);
                }
#line 656 "ml_global_data.m"
                {
#line 656 "ml_global_data.m"
                  ml_backend__ml_global_data__CtorDefns_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 656 "ml_global_data.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__CtorDefns_35, 0) = ((MR_Box) (ml_backend__ml_global_data__CtorDefn_189));
#line 656 "ml_global_data.m"
                  MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__CtorDefns_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 656 "ml_global_data.m"
                }
#line 652 "ml_global_data.m"
              }
#line 645 "ml_global_data.m"
            else
#line 660 "ml_global_data.m"
              {
#line 661 "ml_global_data.m"
                {
#line 661 "ml_global_data.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_global_data", (MR_String) "predicate \140ml_backend.ml_global_data.ml_gen_static_vector_type\'/9", (MR_String) "unsupported target language");
#line 661 "ml_global_data.m"
                  return;
                }
#line 660 "ml_global_data.m"
              }
#line 664 "ml_global_data.m"
        {
#line 664 "ml_global_data.m"
          ml_backend__ml_global_data__ClassDefn_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 664 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__ClassDefn_37, 0) = ((MR_Box) (ml_backend__ml_global_data__ClassKind_34));
#line 664 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__ClassDefn_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 664 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__ClassDefn_37, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 664 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__ClassDefn_37, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 664 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__ClassDefn_37, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 664 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__ClassDefn_37, 5) = ((MR_Box) (ml_backend__ml_global_data__CtorDefns_35));
#line 664 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__ClassDefn_37, 6) = ((MR_Box) (ml_backend__ml_global_data__FieldDefns_33));
#line 664 "ml_global_data.m"
        }
#line 668 "ml_global_data.m"
        ml_backend__ml_global_data__StructTypeEntityDefn_40 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_global_data__ClassDefn_37);
#line 673 "ml_global_data.m"
        {
#line 673 "ml_global_data.m"
          ml_backend__ml_global_data__StructTypeDefn_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 673 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__StructTypeDefn_42, 0) = ((MR_Box) (ml_backend__ml_global_data__StructTypeEntityName_39));
#line 673 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__StructTypeDefn_42, 1) = ((MR_Box) (ml_backend__ml_global_data__MLDS_Context_11));
#line 673 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__StructTypeDefn_42, 2) = ((MR_Box) (ml_backend__ml_global_data__StructTypeFlags_41));
#line 673 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__StructTypeDefn_42, 3) = ((MR_Box) (ml_backend__ml_global_data__StructTypeEntityDefn_40));
#line 673 "ml_global_data.m"
        }
#line 679 "ml_global_data.m"
        {
#line 679 "ml_global_data.m"
          ml_backend__ml_global_data__MLDS_ClassModuleName_44 = ml_backend__mlds__mlds_append_class_qualifier_5_f_0(ml_backend__ml_global_data__Target_12, ml_backend__ml_global_data__MLDS_ModuleName_10, (MR_Integer) 0, ml_backend__ml_global_data__StructTypeName_38, (MR_Integer) 0);
        }
#line 681 "ml_global_data.m"
        {
#line 681 "ml_global_data.m"
          ml_backend__ml_global_data__make_named_fields_4_p_0(ml_backend__ml_global_data__MLDS_ClassModuleName_44, *ml_backend__ml_global_data__StructType_15, ml_backend__ml_global_data__FieldNames_32, ml_backend__ml_global_data__FieldIds_16);
        }
#line 685 "ml_global_data.m"
        {
#line 685 "ml_global_data.m"
          ml_backend__ml_global_data__V_83_83 = mercury__cord__empty_0_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0);
        }
#line 684 "ml_global_data.m"
        {
#line 684 "ml_global_data.m"
          ml_backend__ml_global_data__CellGroup_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 684 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_86, 0) = ((MR_Box) (*ml_backend__ml_global_data__StructType_15));
#line 684 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_86, 1) = ((MR_Box) (ml_backend__ml_global_data__StructTypeDefn_42));
#line 684 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_86, 2) = ((MR_Box) (*ml_backend__ml_global_data__FieldIds_16));
#line 684 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_86, 3) = ((MR_Box) ((MR_Integer) 0));
#line 684 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_86, 4) = ((MR_Box) (ml_backend__ml_global_data__V_83_83));
#line 684 "ml_global_data.m"
        }
#line 687 "ml_global_data.m"
        ml_backend__ml_global_data__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 0)));
#line 687 "ml_global_data.m"
        ml_backend__ml_global_data__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 1)));
#line 687 "ml_global_data.m"
        ml_backend__ml_global_data__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 2)));
#line 687 "ml_global_data.m"
        ml_backend__ml_global_data__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 3)));
#line 687 "ml_global_data.m"
        ml_backend__ml_global_data__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 4)));
#line 687 "ml_global_data.m"
        ml_backend__ml_global_data__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 5)));
#line 687 "ml_global_data.m"
        ml_backend__ml_global_data__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 6)));
#line 687 "ml_global_data.m"
        ml_backend__ml_global_data__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 7)));
#line 687 "ml_global_data.m"
        ml_backend__ml_global_data__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 8)));
#line 687 "ml_global_data.m"
        ml_backend__ml_global_data__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 9)));
#line 687 "ml_global_data.m"
        ml_backend__ml_global_data__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 10)));
#line 687 "ml_global_data.m"
        ml_backend__ml_global_data__CellGroupMap0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 11)));
#line 687 "ml_global_data.m"
        ml_backend__ml_global_data__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 12)));
#line 687 "ml_global_data.m"
        ml_backend__ml_global_data__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 13)));
#line 688 "ml_global_data.m"
        {
#line 688 "ml_global_data.m"
          mercury__map__det_insert_4_p_0(ml_backend__ml_global_data__TypeCtorInfo_186_186, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0, ((MR_Box) (*ml_backend__ml_global_data__TypeNum_14)), ((MR_Box) (ml_backend__ml_global_data__CellGroup_86)), ml_backend__ml_global_data__CellGroupMap0_45, &ml_backend__ml_global_data__CellGroupMap_85);
        }
#line 689 "ml_global_data.m"
        ml_backend__ml_global_data__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 0)));
#line 689 "ml_global_data.m"
        ml_backend__ml_global_data__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 1)));
#line 689 "ml_global_data.m"
        ml_backend__ml_global_data__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 2)));
#line 689 "ml_global_data.m"
        ml_backend__ml_global_data__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 3)));
#line 689 "ml_global_data.m"
        ml_backend__ml_global_data__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 4)));
#line 689 "ml_global_data.m"
        ml_backend__ml_global_data__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 5)));
#line 689 "ml_global_data.m"
        ml_backend__ml_global_data__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 6)));
#line 689 "ml_global_data.m"
        ml_backend__ml_global_data__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 7)));
#line 689 "ml_global_data.m"
        ml_backend__ml_global_data__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 8)));
#line 689 "ml_global_data.m"
        ml_backend__ml_global_data__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 9)));
#line 689 "ml_global_data.m"
        ml_backend__ml_global_data__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 10)));
#line 689 "ml_global_data.m"
        ml_backend__ml_global_data__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 11)));
#line 689 "ml_global_data.m"
        ml_backend__ml_global_data__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 12)));
#line 689 "ml_global_data.m"
        ml_backend__ml_global_data__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 13)));
#line 689 "ml_global_data.m"
        {
#line 689 "ml_global_data.m"
          MR_Word base;
#line 689 "ml_global_data.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 689 "ml_global_data.m"
          *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47 = base;
#line 689 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__V_167_167));
#line 689 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_168_168));
#line 689 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_169_169));
#line 689 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_170_170));
#line 689 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__V_171_171));
#line 689 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__V_172_172));
#line 689 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__V_173_173));
#line 689 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_174_174));
#line 689 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_175_175));
#line 689 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__V_176_176));
#line 689 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_177_177));
#line 689 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__CellGroupMap_85));
#line 689 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__V_179_179));
#line 689 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__V_180_180));
#line 689 "ml_global_data.m"
        }
#line 626 "ml_global_data.m"
      }
#line 617 "ml_global_data.m"
  }
#line 190 "ml_global_data.m"
}

#line 502 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_gen_static_scalar_const_addr_8_p_0_1(
#line 502 "ml_global_data.m"
  MR_Box ml_backend__ml_global_data__closure_arg,
#line 502 "ml_global_data.m"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 502 "ml_global_data.m"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_2,
#line 502 "ml_global_data.m"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_3)
#line 502 "ml_global_data.m"
{
#line 502 "ml_global_data.m"
  {
#line 502 "ml_global_data.m"
    MR_Box ml_backend__ml_global_data__closure = ml_backend__ml_global_data__closure_arg;
#line 502 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__conv1_Init_5;
#line 502 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__conv0_Type_6;

#line 502 "ml_global_data.m"
    {
#line 502 "ml_global_data.m"
      ml_backend__ml_global_data__ml_specialize_generic_array_init_3_p_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), &ml_backend__ml_global_data__conv1_Init_5, &ml_backend__ml_global_data__conv0_Type_6);
    }
#line 502 "ml_global_data.m"
    *ml_backend__ml_global_data__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_global_data__conv1_Init_5));
#line 502 "ml_global_data.m"
    *ml_backend__ml_global_data__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_global_data__conv0_Type_6));
#line 502 "ml_global_data.m"
  }
#line 502 "ml_global_data.m"
}

#line 180 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data__ml_gen_static_scalar_const_addr_8_p_0(
#line 180 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__MLDS_ModuleName_9,
#line 180 "ml_global_data.m"
  MR_String ml_backend__ml_global_data__ConstBaseName_10,
#line 180 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__ConstType0_11,
#line 180 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Initializer0_12,
#line 180 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Context_13,
#line 180 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__DataAddrRval_14,
#line 180 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24,
#line 180 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_25)
#line 180 "ml_global_data.m"
{
#line 392 "ml_global_data.m"
  {
#line 392 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_global_data__ConstType0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType0_11, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 392 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__ConstType_16;
#line 392 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Initializer_17;
#line 392 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__UseCommonCells_18;
#line 507 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Inits_49;
#line 507 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Types_50;
#line 500 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_18_57;
#line 500 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_19_58;
#line 500 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Inits0_48;
#line 500 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_51_51;
#line 500 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_52_52;
#line 500 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_53_53;
#line 395 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_31_31;
#line 395 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_32_32;
#line 395 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_33_33;
#line 395 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_34_34;
#line 395 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_35_35;
#line 395 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_36_36;
#line 395 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_37_37;
#line 395 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_38_38;
#line 395 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_39_39;
#line 395 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_40_40;
#line 395 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_41_41;
#line 395 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_42_42;
#line 395 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_43_43;

#line 500 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 500 "ml_global_data.m"
      {
#line 500 "ml_global_data.m"
        ml_backend__ml_global_data__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType0_11, (MR_Integer) 1)));
#line 500 "ml_global_data.m"
        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_51_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 500 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 500 "ml_global_data.m"
          {
#line 501 "ml_global_data.m"
            ml_backend__ml_global_data__succeeded = ((MR_tag((MR_Word) ml_backend__ml_global_data__Initializer0_12)) == (MR_mktag((MR_Integer) 3)));
#line 501 "ml_global_data.m"
            if (ml_backend__ml_global_data__succeeded)
#line 501 "ml_global_data.m"
              {
#line 501 "ml_global_data.m"
                ml_backend__ml_global_data__Inits0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__Initializer0_12, (MR_Integer) 0)));
#line 502 "ml_global_data.m"
                ml_backend__ml_global_data__V_52_52 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[8];
#line 7921 "ml_backend.ml_global_data.c"
                ml_backend__ml_global_data__TypeCtorInfo_18_57 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
#line 7923 "ml_backend.ml_global_data.c"
                ml_backend__ml_global_data__TypeCtorInfo_19_58 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0;
#line 502 "ml_global_data.m"
                {
#line 502 "ml_global_data.m"
                  mercury__list__map2_4_p_0(ml_backend__ml_global_data__TypeCtorInfo_18_57, ml_backend__ml_global_data__TypeCtorInfo_18_57, ml_backend__ml_global_data__TypeCtorInfo_19_58, ml_backend__ml_global_data__V_52_52, ml_backend__ml_global_data__Inits0_48, &ml_backend__ml_global_data__Inits_49, &ml_backend__ml_global_data__Types_50);
                }
#line 503 "ml_global_data.m"
                ml_backend__ml_global_data__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 503 "ml_global_data.m"
                {
#line 503 "ml_global_data.m"
                  ml_backend__ml_global_data__succeeded = mercury__list__member_2_p_0(ml_backend__ml_global_data__TypeCtorInfo_19_58, ((MR_Box) (ml_backend__ml_global_data__V_53_53)), ml_backend__ml_global_data__Types_50);
                }
#line 501 "ml_global_data.m"
              }
#line 500 "ml_global_data.m"
          }
#line 500 "ml_global_data.m"
      }
#line 507 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 505 "ml_global_data.m"
      {
#line 505 "ml_global_data.m"
        {
#line 505 "ml_global_data.m"
          ml_backend__ml_global_data__ConstType_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 505 "ml_global_data.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 505 "ml_global_data.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType_16, 1) = ((MR_Box) (ml_backend__ml_global_data__Types_50));
#line 505 "ml_global_data.m"
        }
#line 506 "ml_global_data.m"
        {
#line 506 "ml_global_data.m"
          ml_backend__ml_global_data__Initializer_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 506 "ml_global_data.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__Initializer_17, 0) = ((MR_Box) (ml_backend__ml_global_data__Inits_49));
#line 506 "ml_global_data.m"
        }
#line 505 "ml_global_data.m"
      }
#line 507 "ml_global_data.m"
    else
#line 508 "ml_global_data.m"
      {
#line 508 "ml_global_data.m"
        ml_backend__ml_global_data__ConstType_16 = ml_backend__ml_global_data__ConstType0_11;
#line 509 "ml_global_data.m"
        ml_backend__ml_global_data__Initializer_17 = ml_backend__ml_global_data__Initializer0_12;
#line 508 "ml_global_data.m"
      }
#line 395 "ml_global_data.m"
    ml_backend__ml_global_data__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 0)));
#line 395 "ml_global_data.m"
    ml_backend__ml_global_data__UseCommonCells_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 1)));
#line 395 "ml_global_data.m"
    ml_backend__ml_global_data__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 2)));
#line 395 "ml_global_data.m"
    ml_backend__ml_global_data__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 3)));
#line 395 "ml_global_data.m"
    ml_backend__ml_global_data__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 4)));
#line 395 "ml_global_data.m"
    ml_backend__ml_global_data__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 5)));
#line 395 "ml_global_data.m"
    ml_backend__ml_global_data__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 6)));
#line 395 "ml_global_data.m"
    ml_backend__ml_global_data__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 7)));
#line 395 "ml_global_data.m"
    ml_backend__ml_global_data__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 8)));
#line 395 "ml_global_data.m"
    ml_backend__ml_global_data__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 9)));
#line 395 "ml_global_data.m"
    ml_backend__ml_global_data__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 10)));
#line 395 "ml_global_data.m"
    ml_backend__ml_global_data__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 11)));
#line 395 "ml_global_data.m"
    ml_backend__ml_global_data__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 12)));
#line 395 "ml_global_data.m"
    ml_backend__ml_global_data__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 13)));
#line 403 "ml_global_data.m"
    if ((ml_backend__ml_global_data__UseCommonCells_18 == (MR_Integer) 0))
#line 404 "ml_global_data.m"
      {
#line 404 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__VarName_22;
#line 404 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__DataName_23;
#line 404 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_27_27;
#line 404 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__DataAddr_30;

#line 405 "ml_global_data.m"
        {
#line 405 "ml_global_data.m"
          ml_backend__ml_global_data__ml_gen_plain_static_defn_7_p_0(ml_backend__ml_global_data__ConstBaseName_10, ml_backend__ml_global_data__ConstType_16, ml_backend__ml_global_data__Initializer_17, ml_backend__ml_global_data__Context_13, &ml_backend__ml_global_data__VarName_22, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_25);
        }
#line 407 "ml_global_data.m"
        ml_backend__ml_global_data__DataName_23 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_global_data__VarName_22);
#line 408 "ml_global_data.m"
        {
#line 408 "ml_global_data.m"
          ml_backend__ml_global_data__DataAddr_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 408 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__DataAddr_30, 0) = ((MR_Box) (ml_backend__ml_global_data__MLDS_ModuleName_9));
#line 408 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__DataAddr_30, 1) = ((MR_Box) (ml_backend__ml_global_data__DataName_23));
#line 408 "ml_global_data.m"
        }
#line 409 "ml_global_data.m"
        ml_backend__ml_global_data__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_global_data__DataAddr_30);
#line 409 "ml_global_data.m"
        {
#line 409 "ml_global_data.m"
          MR_Word base;
#line 409 "ml_global_data.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 409 "ml_global_data.m"
          *ml_backend__ml_global_data__DataAddrRval_14 = base;
#line 409 "ml_global_data.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 409 "ml_global_data.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_27_27));
#line 409 "ml_global_data.m"
        }
#line 404 "ml_global_data.m"
      }
#line 403 "ml_global_data.m"
    else
#line 397 "ml_global_data.m"
      {
#line 397 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__Common_19;
#line 397 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__CommonDataName_20;
#line 397 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__DataAddr_21;
#line 397 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_29_29;

#line 398 "ml_global_data.m"
        {
#line 398 "ml_global_data.m"
          ml_backend__ml_global_data__ml_gen_scalar_static_defn_6_p_0(ml_backend__ml_global_data__MLDS_ModuleName_9, ml_backend__ml_global_data__ConstType_16, ml_backend__ml_global_data__Initializer_17, &ml_backend__ml_global_data__Common_19, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_25);
        }
#line 400 "ml_global_data.m"
        {
#line 400 "ml_global_data.m"
          ml_backend__ml_global_data__CommonDataName_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 400 "ml_global_data.m"
          MR_hl_field(MR_mktag(2), ml_backend__ml_global_data__CommonDataName_20, 0) = ((MR_Box) (ml_backend__ml_global_data__Common_19));
#line 400 "ml_global_data.m"
        }
#line 401 "ml_global_data.m"
        {
#line 401 "ml_global_data.m"
          ml_backend__ml_global_data__DataAddr_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 401 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__DataAddr_21, 0) = ((MR_Box) (ml_backend__ml_global_data__MLDS_ModuleName_9));
#line 401 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__DataAddr_21, 1) = ((MR_Box) (ml_backend__ml_global_data__CommonDataName_20));
#line 401 "ml_global_data.m"
        }
#line 402 "ml_global_data.m"
        ml_backend__ml_global_data__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_global_data__DataAddr_21);
#line 402 "ml_global_data.m"
        {
#line 402 "ml_global_data.m"
          MR_Word base;
#line 402 "ml_global_data.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 402 "ml_global_data.m"
          *ml_backend__ml_global_data__DataAddrRval_14 = base;
#line 402 "ml_global_data.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 402 "ml_global_data.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_29_29));
#line 402 "ml_global_data.m"
        }
#line 397 "ml_global_data.m"
      }
#line 392 "ml_global_data.m"
  }
#line 180 "ml_global_data.m"
}

#line 502 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_gen_static_scalar_const_value_8_p_0_1(
#line 502 "ml_global_data.m"
  MR_Box ml_backend__ml_global_data__closure_arg,
#line 502 "ml_global_data.m"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 502 "ml_global_data.m"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_2,
#line 502 "ml_global_data.m"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_3)
#line 502 "ml_global_data.m"
{
#line 502 "ml_global_data.m"
  {
#line 502 "ml_global_data.m"
    MR_Box ml_backend__ml_global_data__closure = ml_backend__ml_global_data__closure_arg;
#line 502 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__conv1_Init_5;
#line 502 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__conv0_Type_6;

#line 502 "ml_global_data.m"
    {
#line 502 "ml_global_data.m"
      ml_backend__ml_global_data__ml_specialize_generic_array_init_3_p_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), &ml_backend__ml_global_data__conv1_Init_5, &ml_backend__ml_global_data__conv0_Type_6);
    }
#line 502 "ml_global_data.m"
    *ml_backend__ml_global_data__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_global_data__conv1_Init_5));
#line 502 "ml_global_data.m"
    *ml_backend__ml_global_data__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_global_data__conv0_Type_6));
#line 502 "ml_global_data.m"
  }
#line 502 "ml_global_data.m"
}

#line 172 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data__ml_gen_static_scalar_const_value_8_p_0(
#line 172 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__MLDS_ModuleName_9,
#line 172 "ml_global_data.m"
  MR_String ml_backend__ml_global_data__ConstBaseName_10,
#line 172 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__ConstType0_11,
#line 172 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Initializer0_12,
#line 172 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Context_13,
#line 172 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__DataRval_14,
#line 172 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23,
#line 172 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24)
#line 172 "ml_global_data.m"
{
#line 373 "ml_global_data.m"
  {
#line 373 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_global_data__ConstType0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType0_11, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 373 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__ConstType_16;
#line 373 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Initializer_17;
#line 373 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__UseCommonCells_18;
#line 507 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Inits_46;
#line 507 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Types_47;
#line 500 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_18_54;
#line 500 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_19_55;
#line 500 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Inits0_45;
#line 500 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_48_48;
#line 500 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_49_49;
#line 500 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_50_50;
#line 376 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_28_28;
#line 376 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_29_29;
#line 376 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_30_30;
#line 376 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_31_31;
#line 376 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_32_32;
#line 376 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_33_33;
#line 376 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_34_34;
#line 376 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_35_35;
#line 376 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_36_36;
#line 376 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_37_37;
#line 376 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_38_38;
#line 376 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_39_39;
#line 376 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_40_40;

#line 500 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 500 "ml_global_data.m"
      {
#line 500 "ml_global_data.m"
        ml_backend__ml_global_data__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType0_11, (MR_Integer) 1)));
#line 500 "ml_global_data.m"
        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 500 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 500 "ml_global_data.m"
          {
#line 501 "ml_global_data.m"
            ml_backend__ml_global_data__succeeded = ((MR_tag((MR_Word) ml_backend__ml_global_data__Initializer0_12)) == (MR_mktag((MR_Integer) 3)));
#line 501 "ml_global_data.m"
            if (ml_backend__ml_global_data__succeeded)
#line 501 "ml_global_data.m"
              {
#line 501 "ml_global_data.m"
                ml_backend__ml_global_data__Inits0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__Initializer0_12, (MR_Integer) 0)));
#line 502 "ml_global_data.m"
                ml_backend__ml_global_data__V_49_49 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[7];
#line 8244 "ml_backend.ml_global_data.c"
                ml_backend__ml_global_data__TypeCtorInfo_18_54 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
#line 8246 "ml_backend.ml_global_data.c"
                ml_backend__ml_global_data__TypeCtorInfo_19_55 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0;
#line 502 "ml_global_data.m"
                {
#line 502 "ml_global_data.m"
                  mercury__list__map2_4_p_0(ml_backend__ml_global_data__TypeCtorInfo_18_54, ml_backend__ml_global_data__TypeCtorInfo_18_54, ml_backend__ml_global_data__TypeCtorInfo_19_55, ml_backend__ml_global_data__V_49_49, ml_backend__ml_global_data__Inits0_45, &ml_backend__ml_global_data__Inits_46, &ml_backend__ml_global_data__Types_47);
                }
#line 503 "ml_global_data.m"
                ml_backend__ml_global_data__V_50_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 503 "ml_global_data.m"
                {
#line 503 "ml_global_data.m"
                  ml_backend__ml_global_data__succeeded = mercury__list__member_2_p_0(ml_backend__ml_global_data__TypeCtorInfo_19_55, ((MR_Box) (ml_backend__ml_global_data__V_50_50)), ml_backend__ml_global_data__Types_47);
                }
#line 501 "ml_global_data.m"
              }
#line 500 "ml_global_data.m"
          }
#line 500 "ml_global_data.m"
      }
#line 507 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 505 "ml_global_data.m"
      {
#line 505 "ml_global_data.m"
        {
#line 505 "ml_global_data.m"
          ml_backend__ml_global_data__ConstType_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 505 "ml_global_data.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 505 "ml_global_data.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType_16, 1) = ((MR_Box) (ml_backend__ml_global_data__Types_47));
#line 505 "ml_global_data.m"
        }
#line 506 "ml_global_data.m"
        {
#line 506 "ml_global_data.m"
          ml_backend__ml_global_data__Initializer_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 506 "ml_global_data.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__Initializer_17, 0) = ((MR_Box) (ml_backend__ml_global_data__Inits_46));
#line 506 "ml_global_data.m"
        }
#line 505 "ml_global_data.m"
      }
#line 507 "ml_global_data.m"
    else
#line 508 "ml_global_data.m"
      {
#line 508 "ml_global_data.m"
        ml_backend__ml_global_data__ConstType_16 = ml_backend__ml_global_data__ConstType0_11;
#line 509 "ml_global_data.m"
        ml_backend__ml_global_data__Initializer_17 = ml_backend__ml_global_data__Initializer0_12;
#line 508 "ml_global_data.m"
      }
#line 376 "ml_global_data.m"
    ml_backend__ml_global_data__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 0)));
#line 376 "ml_global_data.m"
    ml_backend__ml_global_data__UseCommonCells_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 1)));
#line 376 "ml_global_data.m"
    ml_backend__ml_global_data__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 2)));
#line 376 "ml_global_data.m"
    ml_backend__ml_global_data__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 3)));
#line 376 "ml_global_data.m"
    ml_backend__ml_global_data__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 4)));
#line 376 "ml_global_data.m"
    ml_backend__ml_global_data__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 5)));
#line 376 "ml_global_data.m"
    ml_backend__ml_global_data__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 6)));
#line 376 "ml_global_data.m"
    ml_backend__ml_global_data__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 7)));
#line 376 "ml_global_data.m"
    ml_backend__ml_global_data__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 8)));
#line 376 "ml_global_data.m"
    ml_backend__ml_global_data__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 9)));
#line 376 "ml_global_data.m"
    ml_backend__ml_global_data__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 10)));
#line 376 "ml_global_data.m"
    ml_backend__ml_global_data__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 11)));
#line 376 "ml_global_data.m"
    ml_backend__ml_global_data__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 12)));
#line 376 "ml_global_data.m"
    ml_backend__ml_global_data__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 13)));
#line 382 "ml_global_data.m"
    if ((ml_backend__ml_global_data__UseCommonCells_18 == (MR_Integer) 0))
#line 383 "ml_global_data.m"
      {
#line 383 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__VarName_20;
#line 383 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__QualVarName_21;
#line 383 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__DataVar_22;

#line 384 "ml_global_data.m"
        {
#line 384 "ml_global_data.m"
          ml_backend__ml_global_data__ml_gen_plain_static_defn_7_p_0(ml_backend__ml_global_data__ConstBaseName_10, ml_backend__ml_global_data__ConstType_16, ml_backend__ml_global_data__Initializer_17, ml_backend__ml_global_data__Context_13, &ml_backend__ml_global_data__VarName_20, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24);
        }
#line 386 "ml_global_data.m"
        {
#line 386 "ml_global_data.m"
          ml_backend__ml_global_data__QualVarName_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 386 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__QualVarName_21, 0) = ((MR_Box) (ml_backend__ml_global_data__MLDS_ModuleName_9));
#line 386 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__QualVarName_21, 1) = ((MR_Box) ((MR_Integer) 0));
#line 386 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__QualVarName_21, 2) = ((MR_Box) (ml_backend__ml_global_data__VarName_20));
#line 386 "ml_global_data.m"
        }
#line 387 "ml_global_data.m"
        {
#line 387 "ml_global_data.m"
          ml_backend__ml_global_data__DataVar_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 387 "ml_global_data.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__DataVar_22, 0) = ((MR_Box) (ml_backend__ml_global_data__QualVarName_21));
#line 387 "ml_global_data.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__DataVar_22, 1) = ((MR_Box) (ml_backend__ml_global_data__ConstType_16));
#line 387 "ml_global_data.m"
        }
#line 388 "ml_global_data.m"
        {
#line 388 "ml_global_data.m"
          MR_Word base;
#line 388 "ml_global_data.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 388 "ml_global_data.m"
          *ml_backend__ml_global_data__DataRval_14 = base;
#line 388 "ml_global_data.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_global_data__DataVar_22));
#line 388 "ml_global_data.m"
        }
#line 383 "ml_global_data.m"
      }
#line 382 "ml_global_data.m"
    else
#line 378 "ml_global_data.m"
      {
#line 378 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__Common_19;

#line 379 "ml_global_data.m"
        {
#line 379 "ml_global_data.m"
          ml_backend__ml_global_data__ml_gen_scalar_static_defn_6_p_0(ml_backend__ml_global_data__MLDS_ModuleName_9, ml_backend__ml_global_data__ConstType_16, ml_backend__ml_global_data__Initializer_17, &ml_backend__ml_global_data__Common_19, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24);
        }
#line 381 "ml_global_data.m"
        *ml_backend__ml_global_data__DataRval_14 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_global_data__Common_19);
#line 378 "ml_global_data.m"
      }
#line 373 "ml_global_data.m"
  }
#line 172 "ml_global_data.m"
}

#line 165 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data__ml_global_data_add_maybe_nonflat_defns_3_p_0(
#line 165 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Defns_4,
#line 165 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8,
#line 165 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_9)
#line 165 "ml_global_data.m"
{
#line 365 "ml_global_data.m"
  {
#line 365 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 365 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_12_12 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 365 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevDefns0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
#line 365 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevDefns_7;
#line 365 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_10_10;
#line 334 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
#line 334 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
#line 334 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
#line 334 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
#line 334 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
#line 334 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
#line 334 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 7)));
#line 334 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 8)));
#line 334 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 9)));
#line 334 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 10)));
#line 334 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 11)));
#line 334 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 12)));
#line 334 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 13)));
#line 346 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_32_32;
#line 346 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_33_33;
#line 346 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_34_34;
#line 346 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_35_35;
#line 346 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_36_36;
#line 346 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_37_37;
#line 346 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_39_39;
#line 346 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_40_40;
#line 346 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_41_41;
#line 346 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_42_42;
#line 346 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_43_43;
#line 346 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_44_44;
#line 346 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_45_45;
#line 346 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_38_38;

#line 367 "ml_global_data.m"
    {
#line 367 "ml_global_data.m"
      ml_backend__ml_global_data__V_10_10 = mercury__list__reverse_1_f_0(ml_backend__ml_global_data__TypeCtorInfo_12_12, ml_backend__ml_global_data__Defns_4);
    }
#line 367 "ml_global_data.m"
    {
#line 367 "ml_global_data.m"
      ml_backend__ml_global_data__RevDefns_7 = mercury__list__f_43_43_2_f_0(ml_backend__ml_global_data__TypeCtorInfo_12_12, ml_backend__ml_global_data__V_10_10, ml_backend__ml_global_data__RevDefns0_6);
    }
#line 346 "ml_global_data.m"
    ml_backend__ml_global_data__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
#line 346 "ml_global_data.m"
    ml_backend__ml_global_data__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
#line 346 "ml_global_data.m"
    ml_backend__ml_global_data__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
#line 346 "ml_global_data.m"
    ml_backend__ml_global_data__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
#line 346 "ml_global_data.m"
    ml_backend__ml_global_data__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
#line 346 "ml_global_data.m"
    ml_backend__ml_global_data__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
#line 346 "ml_global_data.m"
    ml_backend__ml_global_data__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
#line 346 "ml_global_data.m"
    ml_backend__ml_global_data__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 7)));
#line 346 "ml_global_data.m"
    ml_backend__ml_global_data__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 8)));
#line 346 "ml_global_data.m"
    ml_backend__ml_global_data__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 9)));
#line 346 "ml_global_data.m"
    ml_backend__ml_global_data__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 10)));
#line 346 "ml_global_data.m"
    ml_backend__ml_global_data__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 11)));
#line 346 "ml_global_data.m"
    ml_backend__ml_global_data__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 12)));
#line 346 "ml_global_data.m"
    ml_backend__ml_global_data__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 13)));
#line 346 "ml_global_data.m"
    {
#line 346 "ml_global_data.m"
      MR_Word base;
#line 346 "ml_global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 346 "ml_global_data.m"
      *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_9 = base;
#line 346 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__V_32_32));
#line 346 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_33_33));
#line 346 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_34_34));
#line 346 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_35_35));
#line 346 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__V_36_36));
#line 346 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__V_37_37));
#line 346 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__RevDefns_7));
#line 346 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_39_39));
#line 346 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_40_40));
#line 346 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__V_41_41));
#line 346 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_42_42));
#line 346 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__V_43_43));
#line 346 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__V_44_44));
#line 346 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__V_45_45));
#line 346 "ml_global_data.m"
    }
#line 365 "ml_global_data.m"
  }
#line 165 "ml_global_data.m"
}

#line 163 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data__ml_global_data_add_flat_rtti_defns_3_p_0(
#line 163 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Defns_4,
#line 163 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8,
#line 163 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_9)
#line 163 "ml_global_data.m"
{
#line 360 "ml_global_data.m"
  {
#line 360 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 360 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_12_12 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 360 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevDefns0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
#line 360 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevDefns_7;
#line 360 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_10_10;
#line 332 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
#line 332 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
#line 332 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
#line 332 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
#line 332 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
#line 332 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
#line 332 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 7)));
#line 332 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 8)));
#line 332 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 9)));
#line 332 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 10)));
#line 332 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 11)));
#line 332 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 12)));
#line 332 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 13)));
#line 344 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_32_32;
#line 344 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_33_33;
#line 344 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_34_34;
#line 344 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_35_35;
#line 344 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_36_36;
#line 344 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_38_38;
#line 344 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_39_39;
#line 344 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_40_40;
#line 344 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_41_41;
#line 344 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_42_42;
#line 344 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_43_43;
#line 344 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_44_44;
#line 344 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_45_45;
#line 344 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_37_37;

#line 362 "ml_global_data.m"
    {
#line 362 "ml_global_data.m"
      ml_backend__ml_global_data__V_10_10 = mercury__list__reverse_1_f_0(ml_backend__ml_global_data__TypeCtorInfo_12_12, ml_backend__ml_global_data__Defns_4);
    }
#line 362 "ml_global_data.m"
    {
#line 362 "ml_global_data.m"
      ml_backend__ml_global_data__RevDefns_7 = mercury__list__f_43_43_2_f_0(ml_backend__ml_global_data__TypeCtorInfo_12_12, ml_backend__ml_global_data__V_10_10, ml_backend__ml_global_data__RevDefns0_6);
    }
#line 344 "ml_global_data.m"
    ml_backend__ml_global_data__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
#line 344 "ml_global_data.m"
    ml_backend__ml_global_data__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
#line 344 "ml_global_data.m"
    ml_backend__ml_global_data__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
#line 344 "ml_global_data.m"
    ml_backend__ml_global_data__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
#line 344 "ml_global_data.m"
    ml_backend__ml_global_data__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
#line 344 "ml_global_data.m"
    ml_backend__ml_global_data__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
#line 344 "ml_global_data.m"
    ml_backend__ml_global_data__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
#line 344 "ml_global_data.m"
    ml_backend__ml_global_data__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 7)));
#line 344 "ml_global_data.m"
    ml_backend__ml_global_data__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 8)));
#line 344 "ml_global_data.m"
    ml_backend__ml_global_data__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 9)));
#line 344 "ml_global_data.m"
    ml_backend__ml_global_data__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 10)));
#line 344 "ml_global_data.m"
    ml_backend__ml_global_data__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 11)));
#line 344 "ml_global_data.m"
    ml_backend__ml_global_data__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 12)));
#line 344 "ml_global_data.m"
    ml_backend__ml_global_data__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 13)));
#line 344 "ml_global_data.m"
    {
#line 344 "ml_global_data.m"
      MR_Word base;
#line 344 "ml_global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 344 "ml_global_data.m"
      *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_9 = base;
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__V_32_32));
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_33_33));
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_34_34));
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_35_35));
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__V_36_36));
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__RevDefns_7));
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__V_38_38));
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_39_39));
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_40_40));
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__V_41_41));
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_42_42));
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__V_43_43));
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__V_44_44));
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__V_45_45));
#line 344 "ml_global_data.m"
    }
#line 360 "ml_global_data.m"
  }
#line 163 "ml_global_data.m"
}

#line 161 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data__ml_global_data_add_flat_rtti_defn_3_p_0(
#line 161 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Defn_4,
#line 161 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8,
#line 161 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_9)
#line 161 "ml_global_data.m"
{
#line 355 "ml_global_data.m"
  {
#line 355 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 355 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevDefns0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
#line 355 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevDefns_7;
#line 355 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
#line 355 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
#line 355 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
#line 355 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
#line 355 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
#line 355 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
#line 355 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 7)));
#line 355 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 8)));
#line 355 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 9)));
#line 355 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 10)));
#line 355 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 11)));
#line 355 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 12)));
#line 355 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 13)));

#line 357 "ml_global_data.m"
    {
#line 357 "ml_global_data.m"
      ml_backend__ml_global_data__RevDefns_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 357 "ml_global_data.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__RevDefns_7, 0) = ((MR_Box) (ml_backend__ml_global_data__Defn_4));
#line 357 "ml_global_data.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__RevDefns_7, 1) = ((MR_Box) (ml_backend__ml_global_data__RevDefns0_6));
#line 357 "ml_global_data.m"
    }
#line 344 "ml_global_data.m"
    {
#line 344 "ml_global_data.m"
      MR_Word base;
#line 344 "ml_global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 344 "ml_global_data.m"
      *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_9 = base;
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__V_12_12));
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_13_13));
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_14_14));
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_15_15));
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__V_16_16));
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__RevDefns_7));
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__V_17_17));
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_18_18));
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_19_19));
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__V_20_20));
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_21_21));
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__V_22_22));
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__V_23_23));
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__V_24_24));
#line 344 "ml_global_data.m"
    }
#line 355 "ml_global_data.m"
  }
#line 161 "ml_global_data.m"
}

#line 153 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data__ml_global_data_add_pdup_rtti_id_4_p_0(
#line 153 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__RttiId_5,
#line 153 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__RvalType_6,
#line 153 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10,
#line 153 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_11)
#line 153 "ml_global_data.m"
{
#line 350 "ml_global_data.m"
  {
#line 350 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 350 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__PDupRvalTypeMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
#line 350 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__PDupRvalTypeMap_9;
#line 326 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
#line 326 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
#line 326 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
#line 326 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
#line 326 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
#line 326 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
#line 326 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 7)));
#line 326 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 8)));
#line 326 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 9)));
#line 326 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 10)));
#line 326 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 11)));
#line 326 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 12)));
#line 326 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 13)));
#line 338 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_35_35;
#line 338 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_36_36;
#line 338 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_37_37;
#line 338 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_38_38;
#line 338 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_39_39;
#line 338 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_40_40;
#line 338 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_41_41;
#line 338 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_42_42;
#line 338 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_43_43;
#line 338 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_44_44;
#line 338 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_45_45;
#line 338 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_46_46;
#line 338 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_47_47;
#line 338 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_34_34;

#line 352 "ml_global_data.m"
    {
#line 352 "ml_global_data.m"
      mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0, ((MR_Box) (ml_backend__ml_global_data__RttiId_5)), ((MR_Box) (ml_backend__ml_global_data__RvalType_6)), ml_backend__ml_global_data__PDupRvalTypeMap0_8, &ml_backend__ml_global_data__PDupRvalTypeMap_9);
    }
#line 338 "ml_global_data.m"
    ml_backend__ml_global_data__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
#line 338 "ml_global_data.m"
    ml_backend__ml_global_data__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
#line 338 "ml_global_data.m"
    ml_backend__ml_global_data__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
#line 338 "ml_global_data.m"
    ml_backend__ml_global_data__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
#line 338 "ml_global_data.m"
    ml_backend__ml_global_data__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
#line 338 "ml_global_data.m"
    ml_backend__ml_global_data__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
#line 338 "ml_global_data.m"
    ml_backend__ml_global_data__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
#line 338 "ml_global_data.m"
    ml_backend__ml_global_data__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 7)));
#line 338 "ml_global_data.m"
    ml_backend__ml_global_data__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 8)));
#line 338 "ml_global_data.m"
    ml_backend__ml_global_data__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 9)));
#line 338 "ml_global_data.m"
    ml_backend__ml_global_data__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 10)));
#line 338 "ml_global_data.m"
    ml_backend__ml_global_data__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 11)));
#line 338 "ml_global_data.m"
    ml_backend__ml_global_data__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 12)));
#line 338 "ml_global_data.m"
    ml_backend__ml_global_data__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 13)));
#line 338 "ml_global_data.m"
    {
#line 338 "ml_global_data.m"
      MR_Word base;
#line 338 "ml_global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 338 "ml_global_data.m"
      *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_11 = base;
#line 338 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__PDupRvalTypeMap_9));
#line 338 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_35_35));
#line 338 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_36_36));
#line 338 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_37_37));
#line 338 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__V_38_38));
#line 338 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__V_39_39));
#line 338 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__V_40_40));
#line 338 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_41_41));
#line 338 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_42_42));
#line 338 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__V_43_43));
#line 338 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_44_44));
#line 338 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__V_45_45));
#line 338 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__V_46_46));
#line 338 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__V_47_47));
#line 338 "ml_global_data.m"
    }
#line 350 "ml_global_data.m"
  }
#line 153 "ml_global_data.m"
}

#line 147 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data__ml_global_data_set_rev_maybe_nonflat_defns_3_p_0(
#line 147 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Defns_4,
#line 147 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6,
#line 147 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_7)
#line 147 "ml_global_data.m"
{
#line 346 "ml_global_data.m"
  {
#line 346 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 346 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 0)));
#line 346 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 1)));
#line 346 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 2)));
#line 346 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 3)));
#line 346 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 4)));
#line 346 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 5)));
#line 346 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 7)));
#line 346 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 8)));
#line 346 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 9)));
#line 346 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 10)));
#line 346 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 11)));
#line 346 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 12)));
#line 346 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 13)));
#line 346 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 6)));

#line 346 "ml_global_data.m"
    {
#line 346 "ml_global_data.m"
      MR_Word base;
#line 346 "ml_global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 346 "ml_global_data.m"
      *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_7 = base;
#line 346 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__V_9_9));
#line 346 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_10_10));
#line 346 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_11_11));
#line 346 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_12_12));
#line 346 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__V_13_13));
#line 346 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__V_14_14));
#line 346 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__Defns_4));
#line 346 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_16_16));
#line 346 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_17_17));
#line 346 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__V_18_18));
#line 346 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_19_19));
#line 346 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__V_20_20));
#line 346 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__V_21_21));
#line 346 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__V_22_22));
#line 346 "ml_global_data.m"
    }
#line 346 "ml_global_data.m"
  }
#line 147 "ml_global_data.m"
}

#line 140 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_p_0(
#line 140 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__GlobalData_3,
#line 140 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__2_2)
#line 140 "ml_global_data.m"
{
#line 326 "ml_global_data.m"
  {
#line 326 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 326 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_4_4;
#line 326 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_5_5;
#line 326 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_6_6;
#line 326 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_7_7;
#line 326 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_8_8;
#line 326 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_9_9;
#line 326 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_10_10;
#line 326 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_11_11;
#line 326 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_12_12;
#line 326 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_13_13;
#line 326 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_14_14;
#line 326 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_15_15;
#line 326 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_16_16;

#line 326 "ml_global_data.m"
    *ml_backend__ml_global_data__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 0)));
#line 326 "ml_global_data.m"
    ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 1)));
#line 326 "ml_global_data.m"
    ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 2)));
#line 326 "ml_global_data.m"
    ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 3)));
#line 326 "ml_global_data.m"
    ml_backend__ml_global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 4)));
#line 326 "ml_global_data.m"
    ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 5)));
#line 326 "ml_global_data.m"
    ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 6)));
#line 326 "ml_global_data.m"
    ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 7)));
#line 326 "ml_global_data.m"
    ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 8)));
#line 326 "ml_global_data.m"
    ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 9)));
#line 326 "ml_global_data.m"
    ml_backend__ml_global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 10)));
#line 326 "ml_global_data.m"
    ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 11)));
#line 326 "ml_global_data.m"
    ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 12)));
#line 326 "ml_global_data.m"
    ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 13)));
#line 326 "ml_global_data.m"
  }
#line 140 "ml_global_data.m"
}

#line 110 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data__ml_global_data_get_all_global_defns_5_p_0(
#line 110 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__GlobalData_6,
#line 110 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__ScalarCellGroupMap_7,
#line 110 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__VectorCellGroupMap_8,
#line 110 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__AllocIds_9,
#line 110 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__Defns_10)
#line 110 "ml_global_data.m"
{
#line 283 "ml_global_data.m"
  {
#line 283 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 283 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_29_29;
#line 283 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevFlatCellDefns_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 4)));
#line 283 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevFlatRttiDefns_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 5)));
#line 283 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevMaybeNonFlatDefns_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 6)));
#line 283 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__AllocIdMap_22;
#line 283 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_23_23;
#line 283 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_24_24;
#line 283 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_25_25;
#line 283 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_26_26;
#line 284 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___PDupRvalTypeMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 0)));
#line 284 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___UseCommonCells_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 1)));
#line 284 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___HaveUnboxedFloats_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 2)));
#line 284 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___ConstCounter_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 3)));
#line 284 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___TypeNumCounter_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 7)));
#line 284 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___ScalarTypeNumMap_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 8)));
#line 284 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___VectorTypeNumMap_20;
#line 284 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___AllocIdNumCounter_21;

#line 284 "ml_global_data.m"
    *ml_backend__ml_global_data__ScalarCellGroupMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 9)));
#line 284 "ml_global_data.m"
    ml_backend__ml_global_data___VectorTypeNumMap_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 10)));
#line 284 "ml_global_data.m"
    *ml_backend__ml_global_data__VectorCellGroupMap_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 11)));
#line 284 "ml_global_data.m"
    ml_backend__ml_global_data___AllocIdNumCounter_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 12)));
#line 284 "ml_global_data.m"
    ml_backend__ml_global_data__AllocIdMap_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 13)));
#line 291 "ml_global_data.m"
    {
#line 291 "ml_global_data.m"
      mercury__bimap__to_assoc_list_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_alloc_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0, ml_backend__ml_global_data__AllocIdMap_22, ml_backend__ml_global_data__AllocIds_9);
    }
#line 9199 "ml_backend.ml_global_data.c"
    ml_backend__ml_global_data__TypeCtorInfo_29_29 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 299 "ml_global_data.m"
    {
#line 299 "ml_global_data.m"
      ml_backend__ml_global_data__V_23_23 = mercury__list__reverse_1_f_0(ml_backend__ml_global_data__TypeCtorInfo_29_29, ml_backend__ml_global_data__RevFlatRttiDefns_16);
    }
#line 300 "ml_global_data.m"
    {
#line 300 "ml_global_data.m"
      ml_backend__ml_global_data__V_25_25 = mercury__list__reverse_1_f_0(ml_backend__ml_global_data__TypeCtorInfo_29_29, ml_backend__ml_global_data__RevMaybeNonFlatDefns_17);
    }
#line 301 "ml_global_data.m"
    {
#line 301 "ml_global_data.m"
      ml_backend__ml_global_data__V_26_26 = mercury__list__reverse_1_f_0(ml_backend__ml_global_data__TypeCtorInfo_29_29, ml_backend__ml_global_data__RevFlatCellDefns_15);
    }
#line 300 "ml_global_data.m"
    {
#line 300 "ml_global_data.m"
      ml_backend__ml_global_data__V_24_24 = mercury__list__f_43_43_2_f_0(ml_backend__ml_global_data__TypeCtorInfo_29_29, ml_backend__ml_global_data__V_25_25, ml_backend__ml_global_data__V_26_26);
    }
#line 299 "ml_global_data.m"
    {
#line 299 "ml_global_data.m"
      *ml_backend__ml_global_data__Defns_10 = mercury__list__f_43_43_2_f_0(ml_backend__ml_global_data__TypeCtorInfo_29_29, ml_backend__ml_global_data__V_23_23, ml_backend__ml_global_data__V_24_24);
    }
#line 283 "ml_global_data.m"
  }
#line 110 "ml_global_data.m"
}

#line 99 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data__ml_global_data_get_global_defns_6_p_0(
#line 99 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__GlobalData_7,
#line 99 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__ScalarCellGroupMap_8,
#line 99 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__VectorCellGroupMap_9,
#line 99 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__RevFlatCellDefns_10,
#line 99 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__RevFlatRttiDefns_11,
#line 99 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__RevMaybeNonFlatDefns_12)
#line 99 "ml_global_data.m"
{
#line 274 "ml_global_data.m"
  {
#line 274 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 274 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___PDupRvalTypeMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 0)));
#line 274 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___UseCommonCells_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 1)));
#line 274 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___HaveUnboxedFloats_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 2)));
#line 274 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___ConstCounter_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 3)));
#line 274 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___TypeNumCounter_17;
#line 274 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___ScalarTypeNumMap_18;
#line 274 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___VectorTypeNumMap_19;
#line 274 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___AllocIdNumCounter_20;
#line 274 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___AllocIdMap_21;

#line 274 "ml_global_data.m"
    *ml_backend__ml_global_data__RevFlatCellDefns_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 4)));
#line 274 "ml_global_data.m"
    *ml_backend__ml_global_data__RevFlatRttiDefns_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 5)));
#line 274 "ml_global_data.m"
    *ml_backend__ml_global_data__RevMaybeNonFlatDefns_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 6)));
#line 274 "ml_global_data.m"
    ml_backend__ml_global_data___TypeNumCounter_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 7)));
#line 274 "ml_global_data.m"
    ml_backend__ml_global_data___ScalarTypeNumMap_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 8)));
#line 274 "ml_global_data.m"
    *ml_backend__ml_global_data__ScalarCellGroupMap_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 9)));
#line 274 "ml_global_data.m"
    ml_backend__ml_global_data___VectorTypeNumMap_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 10)));
#line 274 "ml_global_data.m"
    *ml_backend__ml_global_data__VectorCellGroupMap_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 11)));
#line 274 "ml_global_data.m"
    ml_backend__ml_global_data___AllocIdNumCounter_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 12)));
#line 274 "ml_global_data.m"
    ml_backend__ml_global_data___AllocIdMap_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 13)));
#line 274 "ml_global_data.m"
  }
#line 99 "ml_global_data.m"
}

#line 89 "ml_global_data.m"
MR_Word MR_CALL 
ml_backend__ml_global_data__ml_global_data_have_unboxed_floats_1_f_0(
#line 89 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__GlobalData_3)
#line 89 "ml_global_data.m"
{
#line 268 "ml_global_data.m"
  {
#line 268 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 268 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 2)));
#line 268 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 0)));
#line 268 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 1)));
#line 268 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 3)));
#line 268 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 4)));
#line 268 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 5)));
#line 268 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 6)));
#line 268 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 7)));
#line 268 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 8)));
#line 268 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 9)));
#line 268 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 10)));
#line 268 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 11)));
#line 268 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 12)));
#line 268 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 13)));

#line 268 "ml_global_data.m"
    return ml_backend__ml_global_data__HeadVar__2_2;
#line 268 "ml_global_data.m"
  }
#line 89 "ml_global_data.m"
}

#line 86 "ml_global_data.m"
MR_Word MR_CALL 
ml_backend__ml_global_data__ml_global_data_init_2_f_0(
#line 86 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__UseCommonCells_4,
#line 86 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HaveUnboxedFloats_5)
#line 86 "ml_global_data.m"
{
#line 262 "ml_global_data.m"
  {
#line 262 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 262 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__GlobalData_6;
#line 262 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_25_25;
#line 262 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_28_28;
#line 262 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_7_7;
#line 262 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_8_8;
#line 262 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_13_13;
#line 262 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_15_15;
#line 262 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_16_16;
#line 262 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_17_17;
#line 262 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_18_18;
#line 262 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_19_19;
#line 262 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_21_21;

#line 263 "ml_global_data.m"
    {
#line 263 "ml_global_data.m"
      ml_backend__ml_global_data__V_7_7 = mercury__map__init_0_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0);
    }
#line 264 "ml_global_data.m"
    {
#line 264 "ml_global_data.m"
      ml_backend__ml_global_data__V_8_8 = mercury__counter__init_1_f_0((MR_Integer) 1);
    }
#line 265 "ml_global_data.m"
    {
#line 265 "ml_global_data.m"
      ml_backend__ml_global_data__V_13_13 = mercury__counter__init_1_f_0((MR_Integer) 1);
    }
#line 9396 "ml_backend.ml_global_data.c"
    ml_backend__ml_global_data__TypeCtorInfo_25_25 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0;
#line 265 "ml_global_data.m"
    {
#line 265 "ml_global_data.m"
      ml_backend__ml_global_data__V_15_15 = mercury__map__init_0_f_0((MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0, ml_backend__ml_global_data__TypeCtorInfo_25_25);
    }
#line 265 "ml_global_data.m"
    {
#line 265 "ml_global_data.m"
      ml_backend__ml_global_data__V_16_16 = mercury__map__init_0_f_0(ml_backend__ml_global_data__TypeCtorInfo_25_25, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0);
    }
#line 9408 "ml_backend.ml_global_data.c"
    ml_backend__ml_global_data__TypeCtorInfo_28_28 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0;
#line 265 "ml_global_data.m"
    {
#line 265 "ml_global_data.m"
      ml_backend__ml_global_data__V_17_17 = mercury__map__init_0_f_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[0], ml_backend__ml_global_data__TypeCtorInfo_28_28);
    }
#line 265 "ml_global_data.m"
    {
#line 265 "ml_global_data.m"
      ml_backend__ml_global_data__V_18_18 = mercury__map__init_0_f_0(ml_backend__ml_global_data__TypeCtorInfo_28_28, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0);
    }
#line 266 "ml_global_data.m"
    {
#line 266 "ml_global_data.m"
      ml_backend__ml_global_data__V_19_19 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
#line 266 "ml_global_data.m"
    {
#line 266 "ml_global_data.m"
      ml_backend__ml_global_data__V_21_21 = mercury__bimap__init_0_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_alloc_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0);
    }
#line 263 "ml_global_data.m"
    {
#line 263 "ml_global_data.m"
      ml_backend__ml_global_data__GlobalData_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 263 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 0) = ((MR_Box) (ml_backend__ml_global_data__V_7_7));
#line 263 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 1) = ((MR_Box) (ml_backend__ml_global_data__UseCommonCells_4));
#line 263 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 2) = ((MR_Box) (ml_backend__ml_global_data__HaveUnboxedFloats_5));
#line 263 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 3) = ((MR_Box) (ml_backend__ml_global_data__V_8_8));
#line 263 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 263 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 263 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 263 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 7) = ((MR_Box) (ml_backend__ml_global_data__V_13_13));
#line 263 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 8) = ((MR_Box) (ml_backend__ml_global_data__V_15_15));
#line 263 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 9) = ((MR_Box) (ml_backend__ml_global_data__V_16_16));
#line 263 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 10) = ((MR_Box) (ml_backend__ml_global_data__V_17_17));
#line 263 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 11) = ((MR_Box) (ml_backend__ml_global_data__V_18_18));
#line 263 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 12) = ((MR_Box) (ml_backend__ml_global_data__V_19_19));
#line 263 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 13) = ((MR_Box) (ml_backend__ml_global_data__V_21_21));
#line 263 "ml_global_data.m"
    }
#line 262 "ml_global_data.m"
    return ml_backend__ml_global_data__GlobalData_6;
#line 262 "ml_global_data.m"
  }
#line 86 "ml_global_data.m"
}

void mercury__ml_backend__ml_global_data__init(void)
{
}

void mercury__ml_backend__ml_global_data__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_have_unboxed_floats_0);
	MR_register_type_ctor_info(&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_id_map_0);
	MR_register_type_ctor_info(&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0);
	MR_register_type_ctor_info(&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0);
	MR_register_type_ctor_info(&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rtti_rval_type_map_0);
	MR_register_type_ctor_info(&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0);
	MR_register_type_ctor_info(&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0);
	MR_register_type_ctor_info(&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_map_0);
	MR_register_type_ctor_info(&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0);
	MR_register_type_ctor_info(&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_map_0);
	MR_register_type_ctor_info(&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0);
	MR_register_type_ctor_info(&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_map_0);
	MR_register_type_ctor_info(&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_type_map_0);
	MR_register_type_ctor_info(&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_use_common_cells_0);
}

void mercury__ml_backend__ml_global_data__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ml_backend.ml_global_data. */
