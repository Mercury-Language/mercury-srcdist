/*
** Automatically generated from `ml_global_data.m'
** by the Mercury compiler,
** version rotd-2015-07-28
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
#include "integer.mih"
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
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 146 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_floats_0_0;

#line 149 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_floats_0_1;

#line 152 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_value_ordered_have_unboxed_floats_0[2];

#line 155 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_name_ordered_have_unboxed_floats_0[2];

#line 158 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_have_unboxed_floats_0[2];

#line 161 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__bimap__ti_bimap_2ml_backend__mlds__type_ctor_info_mlds_alloc_id_0ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0;

#line 164 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_alloc_site_data_0_0[4];

#line 167 "ml_backend.ml_global_data.c"
static const MR_ConstString ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_alloc_site_data_0_0[4];

#line 170 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_alloc_site_data_0_0;

#line 173 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_alloc_site_data_0_0[1];

#line 176 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_alloc_site_data_0[1];

#line 179 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_alloc_site_data_0[1];

#line 182 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_alloc_site_data_0[1];

#line 185 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2backend_libs__rtti__type_ctor_info_rtti_id_0ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0;

#line 188 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0;

#line 191 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0;

#line 194 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0;

#line 197 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0;

#line 200 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0;

#line 203 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0;

#line 206 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_global_data_0_0[14];

#line 209 "ml_backend.ml_global_data.c"
static const MR_ConstString ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_global_data_0_0[14];

#line 212 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_global_data_0_0;

#line 215 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_global_data_0_0[1];

#line 218 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_global_data_0[1];

#line 221 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_global_data_0[1];

#line 224 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_global_data_0[1];

#line 227 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_rval_and_type_0_0[2];

#line 230 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_rval_and_type_0_0;

#line 233 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_rval_and_type_0_0[1];

#line 236 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_rval_and_type_0[1];

#line 239 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_rval_and_type_0[1];

#line 242 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_rval_and_type_0[1];

#line 245 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__bimap__ti_bimap_2ml_backend__mlds__type_ctor_info_mlds_initializer_0ml_backend__mlds__type_ctor_info_mlds_scalar_common_0;

#line 248 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_initializer_0;

#line 251 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_scalar_cell_group_0_0[5];

#line 254 "ml_backend.ml_global_data.c"
static const MR_ConstString ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_scalar_cell_group_0_0[5];

#line 257 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_scalar_cell_group_0_0;

#line 260 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_scalar_cell_group_0_0[1];

#line 263 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_scalar_cell_group_0[1];

#line 266 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_scalar_cell_group_0[1];

#line 269 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_scalar_cell_group_0[1];

#line 272 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_scalar_cell_type_0_0[2];

#line 275 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_scalar_cell_type_0_0;

#line 278 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_scalar_cell_type_0_0[1];

#line 281 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_scalar_cell_type_0[1];

#line 284 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_scalar_cell_type_0[1];

#line 287 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_scalar_cell_type_0[1];

#line 290 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_field_id_0;

#line 293 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_vector_cell_group_0_0[5];

#line 296 "ml_backend.ml_global_data.c"
static const MR_ConstString ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_vector_cell_group_0_0[5];

#line 299 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_vector_cell_group_0_0;

#line 302 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_vector_cell_group_0_0[1];

#line 305 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_vector_cell_group_0[1];

#line 308 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_vector_cell_group_0[1];

#line 311 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_vector_cell_group_0[1];

#line 314 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_use_common_cells_0_0;

#line 317 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_use_common_cells_0_1;

#line 320 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_value_ordered_use_common_cells_0[2];

#line 323 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_name_ordered_use_common_cells_0[2];

#line 326 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_use_common_cells_0[2];

#line 329 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____have_unboxed_floats_0_0_10001(
#line 332 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 334 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 337 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____have_unboxed_floats_0_0_10001(
#line 340 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 342 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 344 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 347 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_alloc_id_map_0_0_10001(
#line 350 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 352 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 355 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_alloc_id_map_0_0_10001(
#line 358 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 360 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 362 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 365 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_alloc_site_data_0_0_10001(
#line 368 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 370 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 373 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_alloc_site_data_0_0_10001(
#line 376 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 378 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 380 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 383 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_global_data_0_0_10001(
#line 386 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 388 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 391 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_global_data_0_0_10001(
#line 394 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 396 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 398 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 401 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_rtti_rval_type_map_0_0_10001(
#line 404 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 406 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 409 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_rtti_rval_type_map_0_0_10001(
#line 412 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 414 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 416 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 419 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_rval_and_type_0_0_10001(
#line 422 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 424 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 427 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_rval_and_type_0_0_10001(
#line 430 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 432 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 434 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 437 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_group_0_0_10001(
#line 440 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 442 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 445 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_group_0_0_10001(
#line 448 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 450 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 452 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 455 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_map_0_0_10001(
#line 458 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 460 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 463 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_map_0_0_10001(
#line 466 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 468 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 470 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 473 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_0_0_10001(
#line 476 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 478 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 481 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_0_0_10001(
#line 484 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 486 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 488 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 491 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_map_0_0_10001(
#line 494 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 496 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 499 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_map_0_0_10001(
#line 502 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 504 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 506 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 509 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_group_0_0_10001(
#line 512 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 514 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 517 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_group_0_0_10001(
#line 520 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 522 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 524 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 527 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_map_0_0_10001(
#line 530 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 532 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 535 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_map_0_0_10001(
#line 538 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 540 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 542 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 545 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_type_map_0_0_10001(
#line 548 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 550 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 553 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_type_map_0_0_10001(
#line 556 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 558 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 560 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 563 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____use_common_cells_0_0_10001(
#line 566 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 568 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 571 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____use_common_cells_0_0_10001(
#line 574 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 576 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 578 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 231 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_type_map_0_0(
#line 231 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 231 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 231 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3);

#line 231 "ml_global_data.m"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_type_map_0_0(
#line 231 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 231 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2);

#line 228 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_map_0_0(
#line 228 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 228 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 228 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3);

#line 228 "ml_global_data.m"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_map_0_0(
#line 228 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 228 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2);

#line 226 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_0_0(
#line 226 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 226 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 226 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3);

#line 226 "ml_global_data.m"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_0_0(
#line 226 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 226 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2);

#line 234 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_alloc_id_map_0_0(
#line 234 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 234 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 234 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3);

#line 234 "ml_global_data.m"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_alloc_id_map_0_0(
#line 234 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 234 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2);

#line 766 "ml_global_data.m"
static MR_String MR_CALL 
ml_backend__ml_global_data__cons_id_to_alloc_site_string_1_f_0(
#line 766 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__ConsId_3);

#line 708 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__make_named_fields_4_p_0(
#line 708 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__MLDS_ModuleName_1,
#line 708 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__StructType_2,
#line 708 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3,
#line 708 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__4_4);

#line 693 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_gen_vector_cell_field_types_7_p_0(
#line 693 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__MLDS_Context_1,
#line 693 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Flags_2,
#line 693 "ml_global_data.m"
  MR_String ml_backend__ml_global_data__FieldNamePrefix_3,
#line 693 "ml_global_data.m"
  MR_Integer ml_backend__ml_global_data__FieldNum_4,
#line 693 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__5_5,
#line 693 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__6_6,
#line 693 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__7_7);

#line 526 "ml_global_data.m"
static MR_bool MR_CALL 
ml_backend__ml_global_data__ml_specialize_generic_array_rval_2_p_0(
#line 526 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13,
#line 526 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_Rval_14);

#line 511 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_specialize_generic_array_init_3_p_0(
#line 511 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Init0_4,
#line 511 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__Init_5,
#line 511 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__Type_6);

#line 469 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_gen_plain_static_defn_7_p_0(
#line 469 "ml_global_data.m"
  MR_String ml_backend__ml_global_data__ConstBaseName_8,
#line 469 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__ConstType_9,
#line 469 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Initializer_10,
#line 469 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Context_11,
#line 469 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__VarName_12,
#line 469 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25,
#line 469 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_26);

#line 411 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_gen_scalar_static_defn_6_p_0(
#line 411 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__MLDS_ModuleName_7,
#line 411 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__ConstType_8,
#line 411 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Initializer_9,
#line 411 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__Common_10,
#line 411 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34,
#line 411 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_35);

#line 320 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_global_data_set_rev_flat_cell_defns_3_p_0(
#line 320 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Defns_4,
#line 320 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6,
#line 320 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_7);

#line 501 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_gen_static_scalar_const_addr_8_p_0_1(
#line 501 "ml_global_data.m"
  MR_Box ml_backend__ml_global_data__closure_arg,
#line 501 "ml_global_data.m"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 501 "ml_global_data.m"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_2,
#line 501 "ml_global_data.m"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_3);

#line 501 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_gen_static_scalar_const_value_8_p_0_1(
#line 501 "ml_global_data.m"
  MR_Box ml_backend__ml_global_data__closure_arg,
#line 501 "ml_global_data.m"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 501 "ml_global_data.m"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_2,
#line 501 "ml_global_data.m"
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
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 888 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_floats_0_0 = {
  (MR_String) "have_unboxed_floats",
  (MR_Integer) 0
};

#line 894 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_floats_0_1 = {
  (MR_String) "do_not_have_unboxed_floats",
  (MR_Integer) 1
};

#line 900 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_value_ordered_have_unboxed_floats_0[2] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_floats_0_0,
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_floats_0_1
};

#line 906 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_name_ordered_have_unboxed_floats_0[2] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_floats_0_1,
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_floats_0_0
};

#line 912 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_have_unboxed_floats_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 918 "ml_backend.ml_global_data.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_have_unboxed_floats_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_global_data____Unify____have_unboxed_floats_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____have_unboxed_floats_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "have_unboxed_floats",
  {     ml_backend__ml_global_data__ml_backend__ml_global_data__enum_name_ordered_have_unboxed_floats_0 },
  {     ml_backend__ml_global_data__ml_backend__ml_global_data__enum_value_ordered_have_unboxed_floats_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_have_unboxed_floats_0
};

#line 935 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__bimap__ti_bimap_2ml_backend__mlds__type_ctor_info_mlds_alloc_id_0ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_alloc_id_0,
    (MR_TypeInfo) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0
  }
};

#line 944 "ml_backend.ml_global_data.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_id_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_global_data____Unify____ml_alloc_id_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____ml_alloc_id_map_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "ml_alloc_id_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ml_backend__ml_global_data__bimap__ti_bimap_2ml_backend__mlds__type_ctor_info_mlds_alloc_id_0ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 961 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_alloc_site_data_0_0[4] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_entity_name_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 969 "ml_backend.ml_global_data.c"
static const MR_ConstString ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_alloc_site_data_0_0[4] = {
  (MR_String) "masd_proc_label",
  (MR_String) "masd_context",
  (MR_String) "masd_type",
  (MR_String) "masd_size"
};

#line 977 "ml_backend.ml_global_data.c"
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

#line 992 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_alloc_site_data_0_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_alloc_site_data_0_0
};

#line 997 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_alloc_site_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_alloc_site_data_0_0
  }
};

#line 1006 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_alloc_site_data_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_alloc_site_data_0_0
};

#line 1011 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_alloc_site_data_0[1] = {
  (MR_Integer) 0
};

#line 1016 "ml_backend.ml_global_data.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_global_data____Unify____ml_alloc_site_data_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____ml_alloc_site_data_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "ml_alloc_site_data",
  {     ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_alloc_site_data_0 },
  {     ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_alloc_site_data_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_alloc_site_data_0
};

#line 1033 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2backend_libs__rtti__type_ctor_info_rtti_id_0ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0,
    (MR_TypeInfo) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0
  }
};

#line 1042 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

#line 1050 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0,
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0
  }
};

#line 1059 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0,
    (MR_TypeInfo) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0
  }
};

#line 1068 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0
  }
};

#line 1076 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0,
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0
  }
};

#line 1085 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0,
    (MR_TypeInfo) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0
  }
};

#line 1094 "ml_backend.ml_global_data.c"
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

#line 1112 "ml_backend.ml_global_data.c"
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

#line 1130 "ml_backend.ml_global_data.c"
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

#line 1145 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_global_data_0_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_global_data_0_0
};

#line 1150 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_global_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_global_data_0_0
  }
};

#line 1159 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_global_data_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_global_data_0_0
};

#line 1164 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_global_data_0[1] = {
  (MR_Integer) 0
};

#line 1169 "ml_backend.ml_global_data.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_global_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_global_data____Unify____ml_global_data_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____ml_global_data_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "ml_global_data",
  {     ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_global_data_0 },
  {     ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_global_data_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_global_data_0
};

#line 1186 "ml_backend.ml_global_data.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rtti_rval_type_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_global_data____Unify____ml_rtti_rval_type_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____ml_rtti_rval_type_map_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "ml_rtti_rval_type_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ml_backend__ml_global_data__tree234__ti_tree234_2backend_libs__rtti__type_ctor_info_rtti_id_0ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1203 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_rval_and_type_0_0[2] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0
};

#line 1209 "ml_backend.ml_global_data.c"
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

#line 1224 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_rval_and_type_0_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_rval_and_type_0_0
};

#line 1229 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_rval_and_type_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_rval_and_type_0_0
  }
};

#line 1238 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_rval_and_type_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_rval_and_type_0_0
};

#line 1243 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_rval_and_type_0[1] = {
  (MR_Integer) 0
};

#line 1248 "ml_backend.ml_global_data.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_global_data____Unify____ml_rval_and_type_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____ml_rval_and_type_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "ml_rval_and_type",
  {     ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_rval_and_type_0 },
  {     ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_rval_and_type_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_rval_and_type_0
};

#line 1265 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__bimap__ti_bimap_2ml_backend__mlds__type_ctor_info_mlds_initializer_0ml_backend__mlds__type_ctor_info_mlds_scalar_common_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0,
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0
  }
};

#line 1274 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_initializer_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0
  }
};

#line 1282 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_scalar_cell_group_0_0[5] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_initializer_array_size_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__bimap__ti_bimap_2ml_backend__mlds__type_ctor_info_mlds_initializer_0ml_backend__mlds__type_ctor_info_mlds_scalar_common_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_initializer_0
};

#line 1291 "ml_backend.ml_global_data.c"
static const MR_ConstString ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_scalar_cell_group_0_0[5] = {
  (MR_String) "mscg_type",
  (MR_String) "mscg_array_size",
  (MR_String) "mscg_counter",
  (MR_String) "mscg_members",
  (MR_String) "mscg_rows"
};

#line 1300 "ml_backend.ml_global_data.c"
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

#line 1315 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_scalar_cell_group_0_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_scalar_cell_group_0_0
};

#line 1320 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_scalar_cell_group_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_scalar_cell_group_0_0
  }
};

#line 1329 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_scalar_cell_group_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_scalar_cell_group_0_0
};

#line 1334 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_scalar_cell_group_0[1] = {
  (MR_Integer) 0
};

#line 1339 "ml_backend.ml_global_data.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_global_data____Unify____ml_scalar_cell_group_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____ml_scalar_cell_group_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "ml_scalar_cell_group",
  {     ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_scalar_cell_group_0 },
  {     ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_scalar_cell_group_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_scalar_cell_group_0
};

#line 1356 "ml_backend.ml_global_data.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_global_data____Unify____ml_scalar_cell_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____ml_scalar_cell_map_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "ml_scalar_cell_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1373 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_scalar_cell_type_0_0[2] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_initializer_array_size_0
};

#line 1379 "ml_backend.ml_global_data.c"
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

#line 1394 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_scalar_cell_type_0_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_scalar_cell_type_0_0
};

#line 1399 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_scalar_cell_type_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_scalar_cell_type_0_0
  }
};

#line 1408 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_scalar_cell_type_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_scalar_cell_type_0_0
};

#line 1413 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_scalar_cell_type_0[1] = {
  (MR_Integer) 0
};

#line 1418 "ml_backend.ml_global_data.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_global_data____Unify____ml_scalar_cell_type_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____ml_scalar_cell_type_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "ml_scalar_cell_type",
  {     ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_scalar_cell_type_0 },
  {     ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_scalar_cell_type_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_scalar_cell_type_0
};

#line 1435 "ml_backend.ml_global_data.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_global_data____Unify____ml_scalar_cell_type_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____ml_scalar_cell_type_map_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "ml_scalar_cell_type_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1452 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_field_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_id_0
  }
};

#line 1460 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_vector_cell_group_0_0[5] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_field_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_initializer_0
};

#line 1469 "ml_backend.ml_global_data.c"
static const MR_ConstString ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_vector_cell_group_0_0[5] = {
  (MR_String) "mvcg_type",
  (MR_String) "mvcg_type_defn",
  (MR_String) "mvcg_field_ids",
  (MR_String) "mvcg_next_row",
  (MR_String) "mvcg_rows"
};

#line 1478 "ml_backend.ml_global_data.c"
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

#line 1493 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_vector_cell_group_0_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_vector_cell_group_0_0
};

#line 1498 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_vector_cell_group_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_vector_cell_group_0_0
  }
};

#line 1507 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_vector_cell_group_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_vector_cell_group_0_0
};

#line 1512 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_vector_cell_group_0[1] = {
  (MR_Integer) 0
};

#line 1517 "ml_backend.ml_global_data.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ml_backend__ml_global_data____Unify____ml_vector_cell_group_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____ml_vector_cell_group_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "ml_vector_cell_group",
  {     ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_vector_cell_group_0 },
  {     ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_vector_cell_group_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_vector_cell_group_0
};

#line 1534 "ml_backend.ml_global_data.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_global_data____Unify____ml_vector_cell_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____ml_vector_cell_map_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "ml_vector_cell_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1551 "ml_backend.ml_global_data.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_type_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ml_backend__ml_global_data____Unify____ml_vector_cell_type_map_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____ml_vector_cell_type_map_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "ml_vector_cell_type_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ml_backend__ml_global_data__tree234__ti_tree234_2list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1568 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_use_common_cells_0_0 = {
  (MR_String) "do_not_use_common_cells",
  (MR_Integer) 0
};

#line 1574 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_use_common_cells_0_1 = {
  (MR_String) "use_common_cells",
  (MR_Integer) 1
};

#line 1580 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_value_ordered_use_common_cells_0[2] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_use_common_cells_0_0,
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_use_common_cells_0_1
};

#line 1586 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_name_ordered_use_common_cells_0[2] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_use_common_cells_0_0,
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_use_common_cells_0_1
};

#line 1592 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_use_common_cells_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1598 "ml_backend.ml_global_data.c"
const MR_TypeCtorInfo_Struct ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_use_common_cells_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ml_backend__ml_global_data____Unify____use_common_cells_0_0_10001)),
  ((MR_Box) (ml_backend__ml_global_data____Compare____use_common_cells_0_0_10001)),
  (MR_String) "ml_backend.ml_global_data",
  (MR_String) "use_common_cells",
  {     ml_backend__ml_global_data__ml_backend__ml_global_data__enum_name_ordered_use_common_cells_0 },
  {     ml_backend__ml_global_data__ml_backend__ml_global_data__enum_value_ordered_use_common_cells_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_use_common_cells_0
};

#line 1615 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____have_unboxed_floats_0_0_10001(
#line 1618 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 1620 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 1622 "ml_backend.ml_global_data.c"
{
#line 1624 "ml_backend.ml_global_data.c"
  {
#line 1626 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 1629 "ml_backend.ml_global_data.c"
    {
#line 1631 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____have_unboxed_floats_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 1634 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 1636 "ml_backend.ml_global_data.c"
  }
#line 1638 "ml_backend.ml_global_data.c"
}

#line 1641 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____have_unboxed_floats_0_0_10001(
#line 1644 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 1646 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 1648 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 1650 "ml_backend.ml_global_data.c"
{
#line 1652 "ml_backend.ml_global_data.c"
  {
#line 1654 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 1657 "ml_backend.ml_global_data.c"
    {
#line 1659 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____have_unboxed_floats_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 1662 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 1664 "ml_backend.ml_global_data.c"
  }
#line 1666 "ml_backend.ml_global_data.c"
}

#line 1669 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_alloc_id_map_0_0_10001(
#line 1672 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 1674 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 1676 "ml_backend.ml_global_data.c"
{
#line 1678 "ml_backend.ml_global_data.c"
  {
#line 1680 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 1683 "ml_backend.ml_global_data.c"
    {
#line 1685 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_alloc_id_map_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 1688 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 1690 "ml_backend.ml_global_data.c"
  }
#line 1692 "ml_backend.ml_global_data.c"
}

#line 1695 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_alloc_id_map_0_0_10001(
#line 1698 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 1700 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 1702 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 1704 "ml_backend.ml_global_data.c"
{
#line 1706 "ml_backend.ml_global_data.c"
  {
#line 1708 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 1711 "ml_backend.ml_global_data.c"
    {
#line 1713 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_alloc_id_map_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 1716 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 1718 "ml_backend.ml_global_data.c"
  }
#line 1720 "ml_backend.ml_global_data.c"
}

#line 1723 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_alloc_site_data_0_0_10001(
#line 1726 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 1728 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 1730 "ml_backend.ml_global_data.c"
{
#line 1732 "ml_backend.ml_global_data.c"
  {
#line 1734 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 1737 "ml_backend.ml_global_data.c"
    {
#line 1739 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_alloc_site_data_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 1742 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 1744 "ml_backend.ml_global_data.c"
  }
#line 1746 "ml_backend.ml_global_data.c"
}

#line 1749 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_alloc_site_data_0_0_10001(
#line 1752 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 1754 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 1756 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 1758 "ml_backend.ml_global_data.c"
{
#line 1760 "ml_backend.ml_global_data.c"
  {
#line 1762 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 1765 "ml_backend.ml_global_data.c"
    {
#line 1767 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_alloc_site_data_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 1770 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 1772 "ml_backend.ml_global_data.c"
  }
#line 1774 "ml_backend.ml_global_data.c"
}

#line 1777 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_global_data_0_0_10001(
#line 1780 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 1782 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 1784 "ml_backend.ml_global_data.c"
{
#line 1786 "ml_backend.ml_global_data.c"
  {
#line 1788 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 1791 "ml_backend.ml_global_data.c"
    {
#line 1793 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_global_data_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 1796 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 1798 "ml_backend.ml_global_data.c"
  }
#line 1800 "ml_backend.ml_global_data.c"
}

#line 1803 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_global_data_0_0_10001(
#line 1806 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 1808 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 1810 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 1812 "ml_backend.ml_global_data.c"
{
#line 1814 "ml_backend.ml_global_data.c"
  {
#line 1816 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 1819 "ml_backend.ml_global_data.c"
    {
#line 1821 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_global_data_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 1824 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 1826 "ml_backend.ml_global_data.c"
  }
#line 1828 "ml_backend.ml_global_data.c"
}

#line 1831 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_rtti_rval_type_map_0_0_10001(
#line 1834 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 1836 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 1838 "ml_backend.ml_global_data.c"
{
#line 1840 "ml_backend.ml_global_data.c"
  {
#line 1842 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 1845 "ml_backend.ml_global_data.c"
    {
#line 1847 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_rtti_rval_type_map_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 1850 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 1852 "ml_backend.ml_global_data.c"
  }
#line 1854 "ml_backend.ml_global_data.c"
}

#line 1857 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_rtti_rval_type_map_0_0_10001(
#line 1860 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 1862 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 1864 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 1866 "ml_backend.ml_global_data.c"
{
#line 1868 "ml_backend.ml_global_data.c"
  {
#line 1870 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 1873 "ml_backend.ml_global_data.c"
    {
#line 1875 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_rtti_rval_type_map_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 1878 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 1880 "ml_backend.ml_global_data.c"
  }
#line 1882 "ml_backend.ml_global_data.c"
}

#line 1885 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_rval_and_type_0_0_10001(
#line 1888 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 1890 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 1892 "ml_backend.ml_global_data.c"
{
#line 1894 "ml_backend.ml_global_data.c"
  {
#line 1896 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 1899 "ml_backend.ml_global_data.c"
    {
#line 1901 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_rval_and_type_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 1904 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 1906 "ml_backend.ml_global_data.c"
  }
#line 1908 "ml_backend.ml_global_data.c"
}

#line 1911 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_rval_and_type_0_0_10001(
#line 1914 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 1916 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 1918 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 1920 "ml_backend.ml_global_data.c"
{
#line 1922 "ml_backend.ml_global_data.c"
  {
#line 1924 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 1927 "ml_backend.ml_global_data.c"
    {
#line 1929 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_rval_and_type_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 1932 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 1934 "ml_backend.ml_global_data.c"
  }
#line 1936 "ml_backend.ml_global_data.c"
}

#line 1939 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_group_0_0_10001(
#line 1942 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 1944 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 1946 "ml_backend.ml_global_data.c"
{
#line 1948 "ml_backend.ml_global_data.c"
  {
#line 1950 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 1953 "ml_backend.ml_global_data.c"
    {
#line 1955 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_scalar_cell_group_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 1958 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 1960 "ml_backend.ml_global_data.c"
  }
#line 1962 "ml_backend.ml_global_data.c"
}

#line 1965 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_group_0_0_10001(
#line 1968 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 1970 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 1972 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 1974 "ml_backend.ml_global_data.c"
{
#line 1976 "ml_backend.ml_global_data.c"
  {
#line 1978 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 1981 "ml_backend.ml_global_data.c"
    {
#line 1983 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_scalar_cell_group_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 1986 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 1988 "ml_backend.ml_global_data.c"
  }
#line 1990 "ml_backend.ml_global_data.c"
}

#line 1993 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_map_0_0_10001(
#line 1996 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 1998 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 2000 "ml_backend.ml_global_data.c"
{
#line 2002 "ml_backend.ml_global_data.c"
  {
#line 2004 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 2007 "ml_backend.ml_global_data.c"
    {
#line 2009 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_scalar_cell_map_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 2012 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 2014 "ml_backend.ml_global_data.c"
  }
#line 2016 "ml_backend.ml_global_data.c"
}

#line 2019 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_map_0_0_10001(
#line 2022 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 2024 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 2026 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 2028 "ml_backend.ml_global_data.c"
{
#line 2030 "ml_backend.ml_global_data.c"
  {
#line 2032 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 2035 "ml_backend.ml_global_data.c"
    {
#line 2037 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_scalar_cell_map_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 2040 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 2042 "ml_backend.ml_global_data.c"
  }
#line 2044 "ml_backend.ml_global_data.c"
}

#line 2047 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_0_0_10001(
#line 2050 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 2052 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 2054 "ml_backend.ml_global_data.c"
{
#line 2056 "ml_backend.ml_global_data.c"
  {
#line 2058 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 2061 "ml_backend.ml_global_data.c"
    {
#line 2063 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_scalar_cell_type_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 2066 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 2068 "ml_backend.ml_global_data.c"
  }
#line 2070 "ml_backend.ml_global_data.c"
}

#line 2073 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_0_0_10001(
#line 2076 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 2078 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 2080 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 2082 "ml_backend.ml_global_data.c"
{
#line 2084 "ml_backend.ml_global_data.c"
  {
#line 2086 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 2089 "ml_backend.ml_global_data.c"
    {
#line 2091 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_scalar_cell_type_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 2094 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 2096 "ml_backend.ml_global_data.c"
  }
#line 2098 "ml_backend.ml_global_data.c"
}

#line 2101 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_map_0_0_10001(
#line 2104 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 2106 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 2108 "ml_backend.ml_global_data.c"
{
#line 2110 "ml_backend.ml_global_data.c"
  {
#line 2112 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 2115 "ml_backend.ml_global_data.c"
    {
#line 2117 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_scalar_cell_type_map_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 2120 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 2122 "ml_backend.ml_global_data.c"
  }
#line 2124 "ml_backend.ml_global_data.c"
}

#line 2127 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_map_0_0_10001(
#line 2130 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 2132 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 2134 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 2136 "ml_backend.ml_global_data.c"
{
#line 2138 "ml_backend.ml_global_data.c"
  {
#line 2140 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 2143 "ml_backend.ml_global_data.c"
    {
#line 2145 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_scalar_cell_type_map_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 2148 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 2150 "ml_backend.ml_global_data.c"
  }
#line 2152 "ml_backend.ml_global_data.c"
}

#line 2155 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_group_0_0_10001(
#line 2158 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 2160 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 2162 "ml_backend.ml_global_data.c"
{
#line 2164 "ml_backend.ml_global_data.c"
  {
#line 2166 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 2169 "ml_backend.ml_global_data.c"
    {
#line 2171 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_vector_cell_group_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 2174 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 2176 "ml_backend.ml_global_data.c"
  }
#line 2178 "ml_backend.ml_global_data.c"
}

#line 2181 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_group_0_0_10001(
#line 2184 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 2186 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 2188 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 2190 "ml_backend.ml_global_data.c"
{
#line 2192 "ml_backend.ml_global_data.c"
  {
#line 2194 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 2197 "ml_backend.ml_global_data.c"
    {
#line 2199 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_vector_cell_group_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 2202 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 2204 "ml_backend.ml_global_data.c"
  }
#line 2206 "ml_backend.ml_global_data.c"
}

#line 2209 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_map_0_0_10001(
#line 2212 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 2214 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 2216 "ml_backend.ml_global_data.c"
{
#line 2218 "ml_backend.ml_global_data.c"
  {
#line 2220 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 2223 "ml_backend.ml_global_data.c"
    {
#line 2225 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_vector_cell_map_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 2228 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 2230 "ml_backend.ml_global_data.c"
  }
#line 2232 "ml_backend.ml_global_data.c"
}

#line 2235 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_map_0_0_10001(
#line 2238 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 2240 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 2242 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 2244 "ml_backend.ml_global_data.c"
{
#line 2246 "ml_backend.ml_global_data.c"
  {
#line 2248 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 2251 "ml_backend.ml_global_data.c"
    {
#line 2253 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_vector_cell_map_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 2256 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 2258 "ml_backend.ml_global_data.c"
  }
#line 2260 "ml_backend.ml_global_data.c"
}

#line 2263 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_type_map_0_0_10001(
#line 2266 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 2268 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 2270 "ml_backend.ml_global_data.c"
{
#line 2272 "ml_backend.ml_global_data.c"
  {
#line 2274 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 2277 "ml_backend.ml_global_data.c"
    {
#line 2279 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_vector_cell_type_map_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 2282 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 2284 "ml_backend.ml_global_data.c"
  }
#line 2286 "ml_backend.ml_global_data.c"
}

#line 2289 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_type_map_0_0_10001(
#line 2292 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 2294 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 2296 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 2298 "ml_backend.ml_global_data.c"
{
#line 2300 "ml_backend.ml_global_data.c"
  {
#line 2302 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 2305 "ml_backend.ml_global_data.c"
    {
#line 2307 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_vector_cell_type_map_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 2310 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 2312 "ml_backend.ml_global_data.c"
  }
#line 2314 "ml_backend.ml_global_data.c"
}

#line 2317 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____use_common_cells_0_0_10001(
#line 2320 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 2322 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 2324 "ml_backend.ml_global_data.c"
{
#line 2326 "ml_backend.ml_global_data.c"
  {
#line 2328 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 2331 "ml_backend.ml_global_data.c"
    {
#line 2333 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____use_common_cells_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 2336 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 2338 "ml_backend.ml_global_data.c"
  }
#line 2340 "ml_backend.ml_global_data.c"
}

#line 2343 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____use_common_cells_0_0_10001(
#line 2346 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 2348 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 2350 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 2352 "ml_backend.ml_global_data.c"
{
#line 2354 "ml_backend.ml_global_data.c"
  {
#line 2356 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 2359 "ml_backend.ml_global_data.c"
    {
#line 2361 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____use_common_cells_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 2364 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 2366 "ml_backend.ml_global_data.c"
  }
#line 2368 "ml_backend.ml_global_data.c"
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
#line 2412 "ml_backend.ml_global_data.c"
  {
#line 2414 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__HeadVar__2_1 == ml_backend__ml_global_data__HeadVar__2_2);

#line 2417 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 2419 "ml_backend.ml_global_data.c"
  }
#line 40 "ml_global_data.m"
}

#line 231 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_type_map_0_0(
#line 231 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 231 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 231 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
#line 231 "ml_global_data.m"
{
#line 231 "ml_global_data.m"
  {
#line 231 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 231 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_4 = ml_backend__ml_global_data__HeadVar__2_2;
#line 231 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_5 = ml_backend__ml_global_data__HeadVar__3_3;

#line 231 "ml_global_data.m"
    {
#line 231 "ml_global_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[4], ml_backend__ml_global_data__HeadVar__1_1, ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_5)));
#line 231 "ml_global_data.m"
      return;
    }
#line 231 "ml_global_data.m"
  }
#line 231 "ml_global_data.m"
}

#line 231 "ml_global_data.m"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_type_map_0_0(
#line 231 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 231 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
#line 231 "ml_global_data.m"
{
#line 231 "ml_global_data.m"
  {
#line 231 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 231 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_3 = ml_backend__ml_global_data__HeadVar__1_1;
#line 231 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_4 = ml_backend__ml_global_data__HeadVar__2_2;

#line 231 "ml_global_data.m"
    {
#line 231 "ml_global_data.m"
      return ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[4], ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_4)));
    }
#line 231 "ml_global_data.m"
    return ml_backend__ml_global_data__succeeded;
#line 231 "ml_global_data.m"
  }
#line 231 "ml_global_data.m"
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
#line 2572 "ml_backend.ml_global_data.c"
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
#line 2606 "ml_backend.ml_global_data.c"
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
#line 2626 "ml_backend.ml_global_data.c"
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
#line 2646 "ml_backend.ml_global_data.c"
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
#line 2666 "ml_backend.ml_global_data.c"
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

#line 2753 "ml_backend.ml_global_data.c"
        {
#line 2755 "ml_backend.ml_global_data.c"
          ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ml_backend__ml_global_data__V_3_3, ml_backend__ml_global_data__V_8_8);
        }
#line 65 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 65 "ml_global_data.m"
          {
#line 2762 "ml_backend.ml_global_data.c"
            {
#line 2764 "ml_backend.ml_global_data.c"
              ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____mlds_defn_0_0(ml_backend__ml_global_data__V_4_4, ml_backend__ml_global_data__V_9_9);
            }
#line 65 "ml_global_data.m"
            if (ml_backend__ml_global_data__succeeded)
#line 65 "ml_global_data.m"
              {
#line 2771 "ml_backend.ml_global_data.c"
                ml_backend__ml_global_data__TypeInfo_17_17 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[3];
#line 2773 "ml_backend.ml_global_data.c"
                {
#line 2775 "ml_backend.ml_global_data.c"
                  ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_17_17, ((MR_Box) (ml_backend__ml_global_data__V_5_5)), ((MR_Box) (ml_backend__ml_global_data__V_10_10)));
                }
#line 65 "ml_global_data.m"
                if (ml_backend__ml_global_data__succeeded)
#line 65 "ml_global_data.m"
                  {
#line 2782 "ml_backend.ml_global_data.c"
                    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_6_6 == ml_backend__ml_global_data__V_11_11);
#line 65 "ml_global_data.m"
                    if (ml_backend__ml_global_data__succeeded)
#line 65 "ml_global_data.m"
                      {
#line 2788 "ml_backend.ml_global_data.c"
                        ml_backend__ml_global_data__TypeInfo_18_18 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[2];
#line 2790 "ml_backend.ml_global_data.c"
                        {
#line 2792 "ml_backend.ml_global_data.c"
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

#line 228 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_map_0_0(
#line 228 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 228 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 228 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
#line 228 "ml_global_data.m"
{
#line 228 "ml_global_data.m"
  {
#line 228 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 228 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_4 = ml_backend__ml_global_data__HeadVar__2_2;
#line 228 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_5 = ml_backend__ml_global_data__HeadVar__3_3;

#line 228 "ml_global_data.m"
    {
#line 228 "ml_global_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[2], ml_backend__ml_global_data__HeadVar__1_1, ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_5)));
#line 228 "ml_global_data.m"
      return;
    }
#line 228 "ml_global_data.m"
  }
#line 228 "ml_global_data.m"
}

#line 228 "ml_global_data.m"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_map_0_0(
#line 228 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 228 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
#line 228 "ml_global_data.m"
{
#line 228 "ml_global_data.m"
  {
#line 228 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 228 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_3 = ml_backend__ml_global_data__HeadVar__1_1;
#line 228 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_4 = ml_backend__ml_global_data__HeadVar__2_2;

#line 228 "ml_global_data.m"
    {
#line 228 "ml_global_data.m"
      return ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[2], ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_4)));
    }
#line 228 "ml_global_data.m"
    return ml_backend__ml_global_data__succeeded;
#line 228 "ml_global_data.m"
  }
#line 228 "ml_global_data.m"
}

#line 226 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_0_0(
#line 226 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 226 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 226 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
#line 226 "ml_global_data.m"
{
#line 226 "ml_global_data.m"
  {
#line 226 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 226 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastX_9 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;
#line 226 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastY_10 = (MR_Integer) ml_backend__ml_global_data__HeadVar__3_3;

#line 226 "ml_global_data.m"
    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_9 == ml_backend__ml_global_data__CastY_10);
#line 226 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 2898 "ml_backend.ml_global_data.c"
      *ml_backend__ml_global_data__HeadVar__1_1 = (MR_Integer) 0;
#line 226 "ml_global_data.m"
    else
#line 226 "ml_global_data.m"
      {
#line 226 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 226 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 226 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 0)));
#line 226 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 1)));
#line 226 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_8_8;

#line 226 "ml_global_data.m"
        {
#line 226 "ml_global_data.m"
          ml_backend__mlds____Compare____mlds_type_0_0(&ml_backend__ml_global_data__V_8_8, ml_backend__ml_global_data__V_4_4, ml_backend__ml_global_data__V_6_6);
        }
#line 2920 "ml_backend.ml_global_data.c"
        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_8_8 == (MR_Integer) 0);
#line 226 "ml_global_data.m"
        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 226 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 226 "ml_global_data.m"
          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_8_8;
#line 226 "ml_global_data.m"
        else
#line 226 "ml_global_data.m"
          {
#line 226 "ml_global_data.m"
            ml_backend__mlds____Compare____initializer_array_size_0_0(ml_backend__ml_global_data__HeadVar__1_1, ml_backend__ml_global_data__V_5_5, ml_backend__ml_global_data__V_7_7);
#line 226 "ml_global_data.m"
            return;
          }
#line 226 "ml_global_data.m"
      }
#line 226 "ml_global_data.m"
  }
#line 226 "ml_global_data.m"
}

#line 226 "ml_global_data.m"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_0_0(
#line 226 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 226 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
#line 226 "ml_global_data.m"
{
#line 226 "ml_global_data.m"
  {
#line 226 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 226 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastX_7 = (MR_Integer) ml_backend__ml_global_data__HeadVar__1_1;
#line 226 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastY_8 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;

#line 226 "ml_global_data.m"
    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_7 == ml_backend__ml_global_data__CastY_8);
#line 226 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 226 "ml_global_data.m"
      ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 226 "ml_global_data.m"
    else
#line 226 "ml_global_data.m"
      {
#line 226 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 0)));
#line 226 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 1)));
#line 226 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 226 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));

#line 2981 "ml_backend.ml_global_data.c"
        {
#line 2983 "ml_backend.ml_global_data.c"
          ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ml_backend__ml_global_data__V_3_3, ml_backend__ml_global_data__V_5_5);
        }
#line 226 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 2988 "ml_backend.ml_global_data.c"
          {
#line 2990 "ml_backend.ml_global_data.c"
            return ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____initializer_array_size_0_0(ml_backend__ml_global_data__V_4_4, ml_backend__ml_global_data__V_6_6);
          }
#line 226 "ml_global_data.m"
      }
#line 226 "ml_global_data.m"
    return ml_backend__ml_global_data__succeeded;
#line 226 "ml_global_data.m"
  }
#line 226 "ml_global_data.m"
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
#line 3088 "ml_backend.ml_global_data.c"
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
#line 3122 "ml_backend.ml_global_data.c"
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
#line 3142 "ml_backend.ml_global_data.c"
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
#line 3162 "ml_backend.ml_global_data.c"
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
#line 3182 "ml_backend.ml_global_data.c"
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

#line 3269 "ml_backend.ml_global_data.c"
        {
#line 3271 "ml_backend.ml_global_data.c"
          ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ml_backend__ml_global_data__V_3_3, ml_backend__ml_global_data__V_8_8);
        }
#line 51 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 51 "ml_global_data.m"
          {
#line 3278 "ml_backend.ml_global_data.c"
            {
#line 3280 "ml_backend.ml_global_data.c"
              ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____initializer_array_size_0_0(ml_backend__ml_global_data__V_4_4, ml_backend__ml_global_data__V_9_9);
            }
#line 51 "ml_global_data.m"
            if (ml_backend__ml_global_data__succeeded)
#line 51 "ml_global_data.m"
              {
#line 3287 "ml_backend.ml_global_data.c"
                {
#line 3289 "ml_backend.ml_global_data.c"
                  ml_backend__ml_global_data__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_global_data__V_5_5, ml_backend__ml_global_data__V_10_10);
                }
#line 51 "ml_global_data.m"
                if (ml_backend__ml_global_data__succeeded)
#line 51 "ml_global_data.m"
                  {
#line 3296 "ml_backend.ml_global_data.c"
                    ml_backend__ml_global_data__TypeInfo_18_18 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[6];
#line 3298 "ml_backend.ml_global_data.c"
                    {
#line 3300 "ml_backend.ml_global_data.c"
                      ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_18_18, ((MR_Box) (ml_backend__ml_global_data__V_6_6)), ((MR_Box) (ml_backend__ml_global_data__V_11_11)));
                    }
#line 51 "ml_global_data.m"
                    if (ml_backend__ml_global_data__succeeded)
#line 51 "ml_global_data.m"
                      {
#line 3307 "ml_backend.ml_global_data.c"
                        ml_backend__ml_global_data__TypeInfo_19_19 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[2];
#line 3309 "ml_backend.ml_global_data.c"
                        {
#line 3311 "ml_backend.ml_global_data.c"
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
#line 3355 "ml_backend.ml_global_data.c"
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
#line 3377 "ml_backend.ml_global_data.c"
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

#line 3438 "ml_backend.ml_global_data.c"
        {
#line 3440 "ml_backend.ml_global_data.c"
          ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ml_backend__ml_global_data__V_3_3, ml_backend__ml_global_data__V_5_5);
        }
#line 131 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 3445 "ml_backend.ml_global_data.c"
          {
#line 3447 "ml_backend.ml_global_data.c"
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

#line 237 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data____Compare____ml_global_data_0_0(
#line 237 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 237 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 237 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
#line 237 "ml_global_data.m"
{
#line 237 "ml_global_data.m"
  {
#line 237 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 237 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastX_45 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;
#line 237 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastY_46 = (MR_Integer) ml_backend__ml_global_data__HeadVar__3_3;

#line 237 "ml_global_data.m"
    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_45 == ml_backend__ml_global_data__CastY_46);
#line 237 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 3545 "ml_backend.ml_global_data.c"
      *ml_backend__ml_global_data__HeadVar__1_1 = (MR_Integer) 0;
#line 237 "ml_global_data.m"
    else
#line 237 "ml_global_data.m"
      {
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 2)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 3)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 4)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 5)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 6)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 7)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 8)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 9)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 10)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 11)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 12)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 13)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 0)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 1)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 2)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 3)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 4)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 5)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 6)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 7)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 8)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 9)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 10)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 11)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 12)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 13)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_32_32;

#line 237 "ml_global_data.m"
        {
#line 237 "ml_global_data.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[1], &ml_backend__ml_global_data__V_32_32, ((MR_Box) (ml_backend__ml_global_data__V_4_4)), ((MR_Box) (ml_backend__ml_global_data__V_18_18)));
        }
#line 3615 "ml_backend.ml_global_data.c"
        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_32_32 == (MR_Integer) 0);
#line 237 "ml_global_data.m"
        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 237 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 237 "ml_global_data.m"
          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_32_32;
#line 237 "ml_global_data.m"
        else
#line 237 "ml_global_data.m"
          {
#line 237 "ml_global_data.m"
            MR_Word ml_backend__ml_global_data__V_33_33;
#line 237 "ml_global_data.m"
            MR_Integer ml_backend__ml_global_data__V_61_61 = (MR_Integer) ml_backend__ml_global_data__V_5_5;
#line 237 "ml_global_data.m"
            MR_Integer ml_backend__ml_global_data__V_62_62 = (MR_Integer) ml_backend__ml_global_data__V_19_19;

#line 237 "ml_global_data.m"
            {
#line 237 "ml_global_data.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_global_data__V_33_33, ml_backend__ml_global_data__V_61_61, ml_backend__ml_global_data__V_62_62);
            }
#line 3639 "ml_backend.ml_global_data.c"
            ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_33_33 == (MR_Integer) 0);
#line 237 "ml_global_data.m"
            ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 237 "ml_global_data.m"
            if (ml_backend__ml_global_data__succeeded)
#line 237 "ml_global_data.m"
              *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_33_33;
#line 237 "ml_global_data.m"
            else
#line 237 "ml_global_data.m"
              {
#line 237 "ml_global_data.m"
                MR_Word ml_backend__ml_global_data__V_34_34;
#line 237 "ml_global_data.m"
                MR_Integer ml_backend__ml_global_data__V_63_63 = (MR_Integer) ml_backend__ml_global_data__V_6_6;
#line 237 "ml_global_data.m"
                MR_Integer ml_backend__ml_global_data__V_64_64 = (MR_Integer) ml_backend__ml_global_data__V_20_20;

#line 237 "ml_global_data.m"
                {
#line 237 "ml_global_data.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_global_data__V_34_34, ml_backend__ml_global_data__V_63_63, ml_backend__ml_global_data__V_64_64);
                }
#line 3663 "ml_backend.ml_global_data.c"
                ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_34_34 == (MR_Integer) 0);
#line 237 "ml_global_data.m"
                ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 237 "ml_global_data.m"
                if (ml_backend__ml_global_data__succeeded)
#line 237 "ml_global_data.m"
                  *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_34_34;
#line 237 "ml_global_data.m"
                else
#line 237 "ml_global_data.m"
                  {
#line 237 "ml_global_data.m"
                    MR_Word ml_backend__ml_global_data__V_35_35;

#line 237 "ml_global_data.m"
                    {
#line 237 "ml_global_data.m"
                      mercury__counter____Compare____counter_0_0(&ml_backend__ml_global_data__V_35_35, ml_backend__ml_global_data__V_7_7, ml_backend__ml_global_data__V_21_21);
                    }
#line 3683 "ml_backend.ml_global_data.c"
                    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_35_35 == (MR_Integer) 0);
#line 237 "ml_global_data.m"
                    ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 237 "ml_global_data.m"
                    if (ml_backend__ml_global_data__succeeded)
#line 237 "ml_global_data.m"
                      *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_35_35;
#line 237 "ml_global_data.m"
                    else
#line 237 "ml_global_data.m"
                      {
#line 237 "ml_global_data.m"
                        MR_Word ml_backend__ml_global_data__V_36_36;

#line 237 "ml_global_data.m"
                        {
#line 237 "ml_global_data.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[1], &ml_backend__ml_global_data__V_36_36, ((MR_Box) (ml_backend__ml_global_data__V_8_8)), ((MR_Box) (ml_backend__ml_global_data__V_22_22)));
                        }
#line 3703 "ml_backend.ml_global_data.c"
                        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_36_36 == (MR_Integer) 0);
#line 237 "ml_global_data.m"
                        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 237 "ml_global_data.m"
                        if (ml_backend__ml_global_data__succeeded)
#line 237 "ml_global_data.m"
                          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_36_36;
#line 237 "ml_global_data.m"
                        else
#line 237 "ml_global_data.m"
                          {
#line 237 "ml_global_data.m"
                            MR_Word ml_backend__ml_global_data__V_37_37;

#line 237 "ml_global_data.m"
                            {
#line 237 "ml_global_data.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[1], &ml_backend__ml_global_data__V_37_37, ((MR_Box) (ml_backend__ml_global_data__V_9_9)), ((MR_Box) (ml_backend__ml_global_data__V_23_23)));
                            }
#line 3723 "ml_backend.ml_global_data.c"
                            ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_37_37 == (MR_Integer) 0);
#line 237 "ml_global_data.m"
                            ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 237 "ml_global_data.m"
                            if (ml_backend__ml_global_data__succeeded)
#line 237 "ml_global_data.m"
                              *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_37_37;
#line 237 "ml_global_data.m"
                            else
#line 237 "ml_global_data.m"
                              {
#line 237 "ml_global_data.m"
                                MR_Word ml_backend__ml_global_data__V_38_38;

#line 237 "ml_global_data.m"
                                {
#line 237 "ml_global_data.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[1], &ml_backend__ml_global_data__V_38_38, ((MR_Box) (ml_backend__ml_global_data__V_10_10)), ((MR_Box) (ml_backend__ml_global_data__V_24_24)));
                                }
#line 3743 "ml_backend.ml_global_data.c"
                                ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_38_38 == (MR_Integer) 0);
#line 237 "ml_global_data.m"
                                ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 237 "ml_global_data.m"
                                if (ml_backend__ml_global_data__succeeded)
#line 237 "ml_global_data.m"
                                  *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_38_38;
#line 237 "ml_global_data.m"
                                else
#line 237 "ml_global_data.m"
                                  {
#line 237 "ml_global_data.m"
                                    MR_Word ml_backend__ml_global_data__V_39_39;

#line 237 "ml_global_data.m"
                                    {
#line 237 "ml_global_data.m"
                                      mercury__counter____Compare____counter_0_0(&ml_backend__ml_global_data__V_39_39, ml_backend__ml_global_data__V_11_11, ml_backend__ml_global_data__V_25_25);
                                    }
#line 3763 "ml_backend.ml_global_data.c"
                                    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_39_39 == (MR_Integer) 0);
#line 237 "ml_global_data.m"
                                    ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 237 "ml_global_data.m"
                                    if (ml_backend__ml_global_data__succeeded)
#line 237 "ml_global_data.m"
                                      *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_39_39;
#line 237 "ml_global_data.m"
                                    else
#line 237 "ml_global_data.m"
                                      {
#line 237 "ml_global_data.m"
                                        MR_Word ml_backend__ml_global_data__V_40_40;

#line 237 "ml_global_data.m"
                                        {
#line 237 "ml_global_data.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[2], &ml_backend__ml_global_data__V_40_40, ((MR_Box) (ml_backend__ml_global_data__V_12_12)), ((MR_Box) (ml_backend__ml_global_data__V_26_26)));
                                        }
#line 3783 "ml_backend.ml_global_data.c"
                                        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_40_40 == (MR_Integer) 0);
#line 237 "ml_global_data.m"
                                        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 237 "ml_global_data.m"
                                        if (ml_backend__ml_global_data__succeeded)
#line 237 "ml_global_data.m"
                                          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_40_40;
#line 237 "ml_global_data.m"
                                        else
#line 237 "ml_global_data.m"
                                          {
#line 237 "ml_global_data.m"
                                            MR_Word ml_backend__ml_global_data__V_41_41;

#line 237 "ml_global_data.m"
                                            {
#line 237 "ml_global_data.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[3], &ml_backend__ml_global_data__V_41_41, ((MR_Box) (ml_backend__ml_global_data__V_13_13)), ((MR_Box) (ml_backend__ml_global_data__V_27_27)));
                                            }
#line 3803 "ml_backend.ml_global_data.c"
                                            ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_41_41 == (MR_Integer) 0);
#line 237 "ml_global_data.m"
                                            ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 237 "ml_global_data.m"
                                            if (ml_backend__ml_global_data__succeeded)
#line 237 "ml_global_data.m"
                                              *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_41_41;
#line 237 "ml_global_data.m"
                                            else
#line 237 "ml_global_data.m"
                                              {
#line 237 "ml_global_data.m"
                                                MR_Word ml_backend__ml_global_data__V_42_42;

#line 237 "ml_global_data.m"
                                                {
#line 237 "ml_global_data.m"
                                                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[4], &ml_backend__ml_global_data__V_42_42, ((MR_Box) (ml_backend__ml_global_data__V_14_14)), ((MR_Box) (ml_backend__ml_global_data__V_28_28)));
                                                }
#line 3823 "ml_backend.ml_global_data.c"
                                                ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_42_42 == (MR_Integer) 0);
#line 237 "ml_global_data.m"
                                                ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 237 "ml_global_data.m"
                                                if (ml_backend__ml_global_data__succeeded)
#line 237 "ml_global_data.m"
                                                  *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_42_42;
#line 237 "ml_global_data.m"
                                                else
#line 237 "ml_global_data.m"
                                                  {
#line 237 "ml_global_data.m"
                                                    MR_Word ml_backend__ml_global_data__V_43_43;

#line 237 "ml_global_data.m"
                                                    {
#line 237 "ml_global_data.m"
                                                      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[5], &ml_backend__ml_global_data__V_43_43, ((MR_Box) (ml_backend__ml_global_data__V_15_15)), ((MR_Box) (ml_backend__ml_global_data__V_29_29)));
                                                    }
#line 3843 "ml_backend.ml_global_data.c"
                                                    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_43_43 == (MR_Integer) 0);
#line 237 "ml_global_data.m"
                                                    ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 237 "ml_global_data.m"
                                                    if (ml_backend__ml_global_data__succeeded)
#line 237 "ml_global_data.m"
                                                      *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_43_43;
#line 237 "ml_global_data.m"
                                                    else
#line 237 "ml_global_data.m"
                                                      {
#line 237 "ml_global_data.m"
                                                        MR_Word ml_backend__ml_global_data__V_44_44;

#line 237 "ml_global_data.m"
                                                        {
#line 237 "ml_global_data.m"
                                                          mercury__counter____Compare____counter_0_0(&ml_backend__ml_global_data__V_44_44, ml_backend__ml_global_data__V_16_16, ml_backend__ml_global_data__V_30_30);
                                                        }
#line 3863 "ml_backend.ml_global_data.c"
                                                        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_44_44 == (MR_Integer) 0);
#line 237 "ml_global_data.m"
                                                        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 237 "ml_global_data.m"
                                                        if (ml_backend__ml_global_data__succeeded)
#line 237 "ml_global_data.m"
                                                          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_44_44;
#line 237 "ml_global_data.m"
                                                        else
#line 237 "ml_global_data.m"
                                                          {
#line 237 "ml_global_data.m"
                                                            {
#line 237 "ml_global_data.m"
                                                              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[0], ml_backend__ml_global_data__HeadVar__1_1, ((MR_Box) (ml_backend__ml_global_data__V_17_17)), ((MR_Box) (ml_backend__ml_global_data__V_31_31)));
#line 237 "ml_global_data.m"
                                                              return;
                                                            }
#line 237 "ml_global_data.m"
                                                          }
#line 237 "ml_global_data.m"
                                                      }
#line 237 "ml_global_data.m"
                                                  }
#line 237 "ml_global_data.m"
                                              }
#line 237 "ml_global_data.m"
                                          }
#line 237 "ml_global_data.m"
                                      }
#line 237 "ml_global_data.m"
                                  }
#line 237 "ml_global_data.m"
                              }
#line 237 "ml_global_data.m"
                          }
#line 237 "ml_global_data.m"
                      }
#line 237 "ml_global_data.m"
                  }
#line 237 "ml_global_data.m"
              }
#line 237 "ml_global_data.m"
          }
#line 237 "ml_global_data.m"
      }
#line 237 "ml_global_data.m"
  }
#line 237 "ml_global_data.m"
}

#line 237 "ml_global_data.m"
MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_global_data_0_0(
#line 237 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 237 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
#line 237 "ml_global_data.m"
{
#line 237 "ml_global_data.m"
  {
#line 237 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 237 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastX_31 = (MR_Integer) ml_backend__ml_global_data__HeadVar__1_1;
#line 237 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastY_32 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;

#line 237 "ml_global_data.m"
    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_31 == ml_backend__ml_global_data__CastY_32);
#line 237 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 237 "ml_global_data.m"
      ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 237 "ml_global_data.m"
    else
#line 237 "ml_global_data.m"
      {
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeInfo_35_35;
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeInfo_36_36;
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeInfo_37_37;
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeInfo_39_39;
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeInfo_40_40;
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeInfo_41_41;
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeInfo_42_42;
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeInfo_44_44;
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 0)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 1)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 2)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 3)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 4)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 5)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 6)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 7)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 8)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 9)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 10)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 11)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 12)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 13)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 2)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 3)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 4)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 5)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 6)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 7)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 8)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 9)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 10)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 11)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 12)));
#line 237 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 13)));

#line 4016 "ml_backend.ml_global_data.c"
        {
#line 4018 "ml_backend.ml_global_data.c"
          ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[1], ((MR_Box) (ml_backend__ml_global_data__V_3_3)), ((MR_Box) (ml_backend__ml_global_data__V_17_17)));
        }
#line 237 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 237 "ml_global_data.m"
          {
#line 4025 "ml_backend.ml_global_data.c"
            ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_4_4 == ml_backend__ml_global_data__V_18_18);
#line 237 "ml_global_data.m"
            if (ml_backend__ml_global_data__succeeded)
#line 237 "ml_global_data.m"
              {
#line 4031 "ml_backend.ml_global_data.c"
                ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_5_5 == ml_backend__ml_global_data__V_19_19);
#line 237 "ml_global_data.m"
                if (ml_backend__ml_global_data__succeeded)
#line 237 "ml_global_data.m"
                  {
#line 4037 "ml_backend.ml_global_data.c"
                    {
#line 4039 "ml_backend.ml_global_data.c"
                      ml_backend__ml_global_data__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_global_data__V_6_6, ml_backend__ml_global_data__V_20_20);
                    }
#line 237 "ml_global_data.m"
                    if (ml_backend__ml_global_data__succeeded)
#line 237 "ml_global_data.m"
                      {
#line 4046 "ml_backend.ml_global_data.c"
                        ml_backend__ml_global_data__TypeInfo_35_35 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[1];
#line 4048 "ml_backend.ml_global_data.c"
                        {
#line 4050 "ml_backend.ml_global_data.c"
                          ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_35_35, ((MR_Box) (ml_backend__ml_global_data__V_7_7)), ((MR_Box) (ml_backend__ml_global_data__V_21_21)));
                        }
#line 237 "ml_global_data.m"
                        if (ml_backend__ml_global_data__succeeded)
#line 237 "ml_global_data.m"
                          {
#line 4057 "ml_backend.ml_global_data.c"
                            ml_backend__ml_global_data__TypeInfo_36_36 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[1];
#line 4059 "ml_backend.ml_global_data.c"
                            {
#line 4061 "ml_backend.ml_global_data.c"
                              ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_36_36, ((MR_Box) (ml_backend__ml_global_data__V_8_8)), ((MR_Box) (ml_backend__ml_global_data__V_22_22)));
                            }
#line 237 "ml_global_data.m"
                            if (ml_backend__ml_global_data__succeeded)
#line 237 "ml_global_data.m"
                              {
#line 4068 "ml_backend.ml_global_data.c"
                                ml_backend__ml_global_data__TypeInfo_37_37 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[1];
#line 4070 "ml_backend.ml_global_data.c"
                                {
#line 4072 "ml_backend.ml_global_data.c"
                                  ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_37_37, ((MR_Box) (ml_backend__ml_global_data__V_9_9)), ((MR_Box) (ml_backend__ml_global_data__V_23_23)));
                                }
#line 237 "ml_global_data.m"
                                if (ml_backend__ml_global_data__succeeded)
#line 237 "ml_global_data.m"
                                  {
#line 4079 "ml_backend.ml_global_data.c"
                                    {
#line 4081 "ml_backend.ml_global_data.c"
                                      ml_backend__ml_global_data__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_global_data__V_10_10, ml_backend__ml_global_data__V_24_24);
                                    }
#line 237 "ml_global_data.m"
                                    if (ml_backend__ml_global_data__succeeded)
#line 237 "ml_global_data.m"
                                      {
#line 4088 "ml_backend.ml_global_data.c"
                                        ml_backend__ml_global_data__TypeInfo_39_39 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[2];
#line 4090 "ml_backend.ml_global_data.c"
                                        {
#line 4092 "ml_backend.ml_global_data.c"
                                          ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_39_39, ((MR_Box) (ml_backend__ml_global_data__V_11_11)), ((MR_Box) (ml_backend__ml_global_data__V_25_25)));
                                        }
#line 237 "ml_global_data.m"
                                        if (ml_backend__ml_global_data__succeeded)
#line 237 "ml_global_data.m"
                                          {
#line 4099 "ml_backend.ml_global_data.c"
                                            ml_backend__ml_global_data__TypeInfo_40_40 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[3];
#line 4101 "ml_backend.ml_global_data.c"
                                            {
#line 4103 "ml_backend.ml_global_data.c"
                                              ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_40_40, ((MR_Box) (ml_backend__ml_global_data__V_12_12)), ((MR_Box) (ml_backend__ml_global_data__V_26_26)));
                                            }
#line 237 "ml_global_data.m"
                                            if (ml_backend__ml_global_data__succeeded)
#line 237 "ml_global_data.m"
                                              {
#line 4110 "ml_backend.ml_global_data.c"
                                                ml_backend__ml_global_data__TypeInfo_41_41 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[4];
#line 4112 "ml_backend.ml_global_data.c"
                                                {
#line 4114 "ml_backend.ml_global_data.c"
                                                  ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_41_41, ((MR_Box) (ml_backend__ml_global_data__V_13_13)), ((MR_Box) (ml_backend__ml_global_data__V_27_27)));
                                                }
#line 237 "ml_global_data.m"
                                                if (ml_backend__ml_global_data__succeeded)
#line 237 "ml_global_data.m"
                                                  {
#line 4121 "ml_backend.ml_global_data.c"
                                                    ml_backend__ml_global_data__TypeInfo_42_42 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[5];
#line 4123 "ml_backend.ml_global_data.c"
                                                    {
#line 4125 "ml_backend.ml_global_data.c"
                                                      ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_42_42, ((MR_Box) (ml_backend__ml_global_data__V_14_14)), ((MR_Box) (ml_backend__ml_global_data__V_28_28)));
                                                    }
#line 237 "ml_global_data.m"
                                                    if (ml_backend__ml_global_data__succeeded)
#line 237 "ml_global_data.m"
                                                      {
#line 4132 "ml_backend.ml_global_data.c"
                                                        {
#line 4134 "ml_backend.ml_global_data.c"
                                                          ml_backend__ml_global_data__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_global_data__V_15_15, ml_backend__ml_global_data__V_29_29);
                                                        }
#line 237 "ml_global_data.m"
                                                        if (ml_backend__ml_global_data__succeeded)
#line 237 "ml_global_data.m"
                                                          {
#line 4141 "ml_backend.ml_global_data.c"
                                                            ml_backend__ml_global_data__TypeInfo_44_44 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[0];
#line 4143 "ml_backend.ml_global_data.c"
                                                            {
#line 4145 "ml_backend.ml_global_data.c"
                                                              return ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_44_44, ((MR_Box) (ml_backend__ml_global_data__V_16_16)), ((MR_Box) (ml_backend__ml_global_data__V_30_30)));
                                                            }
#line 237 "ml_global_data.m"
                                                          }
#line 237 "ml_global_data.m"
                                                      }
#line 237 "ml_global_data.m"
                                                  }
#line 237 "ml_global_data.m"
                                              }
#line 237 "ml_global_data.m"
                                          }
#line 237 "ml_global_data.m"
                                      }
#line 237 "ml_global_data.m"
                                  }
#line 237 "ml_global_data.m"
                              }
#line 237 "ml_global_data.m"
                          }
#line 237 "ml_global_data.m"
                      }
#line 237 "ml_global_data.m"
                  }
#line 237 "ml_global_data.m"
              }
#line 237 "ml_global_data.m"
          }
#line 237 "ml_global_data.m"
      }
#line 237 "ml_global_data.m"
    return ml_backend__ml_global_data__succeeded;
#line 237 "ml_global_data.m"
  }
#line 237 "ml_global_data.m"
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
#line 4207 "ml_backend.ml_global_data.c"
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
#line 4237 "ml_backend.ml_global_data.c"
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
#line 4257 "ml_backend.ml_global_data.c"
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
#line 4277 "ml_backend.ml_global_data.c"
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

#line 4350 "ml_backend.ml_global_data.c"
        {
#line 4352 "ml_backend.ml_global_data.c"
          ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____mlds_entity_name_0_0(ml_backend__ml_global_data__V_3_3, ml_backend__ml_global_data__V_7_7);
        }
#line 75 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 75 "ml_global_data.m"
          {
#line 4359 "ml_backend.ml_global_data.c"
            {
#line 4361 "ml_backend.ml_global_data.c"
              ml_backend__ml_global_data__succeeded = mercury__term____Unify____context_0_0(ml_backend__ml_global_data__V_4_4, ml_backend__ml_global_data__V_8_8);
            }
#line 75 "ml_global_data.m"
            if (ml_backend__ml_global_data__succeeded)
#line 75 "ml_global_data.m"
              {
#line 4368 "ml_backend.ml_global_data.c"
                ml_backend__ml_global_data__succeeded = (strcmp(ml_backend__ml_global_data__V_5_5, ml_backend__ml_global_data__V_9_9) == 0);
#line 75 "ml_global_data.m"
                if (ml_backend__ml_global_data__succeeded)
#line 4372 "ml_backend.ml_global_data.c"
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

#line 234 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_alloc_id_map_0_0(
#line 234 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 234 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 234 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
#line 234 "ml_global_data.m"
{
#line 234 "ml_global_data.m"
  {
#line 234 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 234 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_4 = ml_backend__ml_global_data__HeadVar__2_2;
#line 234 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_5 = ml_backend__ml_global_data__HeadVar__3_3;

#line 234 "ml_global_data.m"
    {
#line 234 "ml_global_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[0], ml_backend__ml_global_data__HeadVar__1_1, ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_5)));
#line 234 "ml_global_data.m"
      return;
    }
#line 234 "ml_global_data.m"
  }
#line 234 "ml_global_data.m"
}

#line 234 "ml_global_data.m"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_alloc_id_map_0_0(
#line 234 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 234 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
#line 234 "ml_global_data.m"
{
#line 234 "ml_global_data.m"
  {
#line 234 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 234 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_3 = ml_backend__ml_global_data__HeadVar__1_1;
#line 234 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_4 = ml_backend__ml_global_data__HeadVar__2_2;

#line 234 "ml_global_data.m"
    {
#line 234 "ml_global_data.m"
      return ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[0], ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_4)));
    }
#line 234 "ml_global_data.m"
    return ml_backend__ml_global_data__succeeded;
#line 234 "ml_global_data.m"
  }
#line 234 "ml_global_data.m"
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
#line 4490 "ml_backend.ml_global_data.c"
  {
#line 4492 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__HeadVar__2_1 == ml_backend__ml_global_data__HeadVar__2_2);

#line 4495 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 4497 "ml_backend.ml_global_data.c"
  }
#line 44 "ml_global_data.m"
}

#line 766 "ml_global_data.m"
static MR_String MR_CALL 
ml_backend__ml_global_data__cons_id_to_alloc_site_string_1_f_0(
#line 766 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__ConsId_3)
#line 766 "ml_global_data.m"
{
#line 770 "ml_global_data.m"
  {
#line 770 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 770 "ml_global_data.m"
    MR_String ml_backend__ml_global_data__TypeStr_4;

#line 770 "ml_global_data.m"
#line 770 "ml_global_data.m"
    switch (MR_tag((MR_Word) ml_backend__ml_global_data__ConsId_3)) {
#line 770 "ml_global_data.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 770 "ml_global_data.m"
      case (MR_Integer) 0:
#line 783 "ml_global_data.m"
        ml_backend__ml_global_data__TypeStr_4 = (MR_String) "typeclass_info";
#line 770 "ml_global_data.m"
        break;
#line 770 "ml_global_data.m"
      case (MR_Integer) 1:
#line 780 "ml_global_data.m"
        ml_backend__ml_global_data__TypeStr_4 = (MR_String) "private_builtin.type_info/0";
#line 770 "ml_global_data.m"
        break;
#line 770 "ml_global_data.m"
      case (MR_Integer) 2:
#line 804 "ml_global_data.m"
        {
#line 805 "ml_global_data.m"
          {
#line 805 "ml_global_data.m"
            mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_global_data", (MR_String) "function \140ml_backend.ml_global_data.cons_id_to_alloc_site_string\'/1", (MR_String) "unexpected cons_id");
          }
#line 804 "ml_global_data.m"
        }
#line 770 "ml_global_data.m"
        break;
#line 770 "ml_global_data.m"
      case (MR_Integer) 3:
#line 770 "ml_global_data.m"
#line 770 "ml_global_data.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConsId_3, (MR_Integer) 0)))) {
#line 770 "ml_global_data.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 770 "ml_global_data.m"
          case (MR_Integer) 0:
#line 770 "ml_global_data.m"
          case (MR_Integer) 1:
#line 770 "ml_global_data.m"
          case (MR_Integer) 5:
#line 770 "ml_global_data.m"
          case (MR_Integer) 6:
#line 770 "ml_global_data.m"
          case (MR_Integer) 7:
#line 770 "ml_global_data.m"
          case (MR_Integer) 8:
#line 770 "ml_global_data.m"
          case (MR_Integer) 9:
#line 770 "ml_global_data.m"
          case (MR_Integer) 10:
#line 770 "ml_global_data.m"
          case (MR_Integer) 11:
#line 804 "ml_global_data.m"
            {
#line 805 "ml_global_data.m"
              {
#line 805 "ml_global_data.m"
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_global_data", (MR_String) "function \140ml_backend.ml_global_data.cons_id_to_alloc_site_string\'/1", (MR_String) "unexpected cons_id");
              }
#line 804 "ml_global_data.m"
            }
#line 770 "ml_global_data.m"
            break;
#line 770 "ml_global_data.m"
          case (MR_Integer) 2:
#line 770 "ml_global_data.m"
            {
#line 770 "ml_global_data.m"
              MR_Word ml_backend__ml_global_data__TypeCtor_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConsId_3, (MR_Integer) 3)));
#line 770 "ml_global_data.m"
              MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConsId_3, (MR_Integer) 1)));
#line 770 "ml_global_data.m"
              MR_Integer ml_backend__ml_global_data__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConsId_3, (MR_Integer) 2)));

#line 771 "ml_global_data.m"
              {
#line 771 "ml_global_data.m"
                return ml_backend__ml_global_data__TypeStr_4 = parse_tree__prog_out__type_ctor_to_string_1_f_0(ml_backend__ml_global_data__TypeCtor_7);
              }
#line 770 "ml_global_data.m"
            }
#line 770 "ml_global_data.m"
            break;
#line 770 "ml_global_data.m"
          case (MR_Integer) 3:
#line 773 "ml_global_data.m"
            {
#line 773 "ml_global_data.m"
              MR_Integer ml_backend__ml_global_data__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConsId_3, (MR_Integer) 1)));
#line 773 "ml_global_data.m"
              MR_String ml_backend__ml_global_data__V_35_35;

#line 774 "ml_global_data.m"
              {
#line 774 "ml_global_data.m"
                ml_backend__ml_global_data__V_35_35 = mercury__string__from_int_1_f_0(ml_backend__ml_global_data__Arity_8);
              }
#line 774 "ml_global_data.m"
              {
#line 774 "ml_global_data.m"
                return ml_backend__ml_global_data__TypeStr_4 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", ml_backend__ml_global_data__V_35_35);
              }
#line 773 "ml_global_data.m"
            }
#line 770 "ml_global_data.m"
            break;
#line 770 "ml_global_data.m"
          case (MR_Integer) 4:
#line 777 "ml_global_data.m"
            ml_backend__ml_global_data__TypeStr_4 = (MR_String) "closure";
#line 770 "ml_global_data.m"
            break;
#line 770 "ml_global_data.m"
          case (MR_Integer) 12:
#line 786 "ml_global_data.m"
            ml_backend__ml_global_data__TypeStr_4 = (MR_String) "type_info_const";
#line 770 "ml_global_data.m"
            break;
#line 770 "ml_global_data.m"
          case (MR_Integer) 13:
#line 789 "ml_global_data.m"
            ml_backend__ml_global_data__TypeStr_4 = (MR_String) "typeclass_info_const";
#line 770 "ml_global_data.m"
            break;
#line 770 "ml_global_data.m"
          case (MR_Integer) 14:
#line 792 "ml_global_data.m"
            ml_backend__ml_global_data__TypeStr_4 = (MR_String) "ground_term_const";
#line 770 "ml_global_data.m"
            break;
#line 770 "ml_global_data.m"
        }
#line 770 "ml_global_data.m"
        break;
#line 770 "ml_global_data.m"
    }
#line 770 "ml_global_data.m"
    return ml_backend__ml_global_data__TypeStr_4;
#line 770 "ml_global_data.m"
  }
#line 766 "ml_global_data.m"
}

#line 708 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__make_named_fields_4_p_0(
#line 708 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__MLDS_ModuleName_1,
#line 708 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__StructType_2,
#line 708 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3,
#line 708 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__4_4)
#line 708 "ml_global_data.m"
{
#line 711 "ml_global_data.m"
  {
#line 711 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 711 "ml_global_data.m"
    if ((ml_backend__ml_global_data__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 711 "ml_global_data.m"
      *ml_backend__ml_global_data__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 711 "ml_global_data.m"
    else
#line 713 "ml_global_data.m"
      {
#line 713 "ml_global_data.m"
        MR_String ml_backend__ml_global_data__RawFieldName_9 = ((MR_String) (MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 0)));
#line 713 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__RawFieldNames_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 1)));
#line 713 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__FieldName_11;
#line 713 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__FieldNames_12;
#line 713 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__QualName_13;

#line 714 "ml_global_data.m"
        {
#line 714 "ml_global_data.m"
          ml_backend__ml_global_data__QualName_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 714 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__QualName_13, 0) = ((MR_Box) (ml_backend__ml_global_data__MLDS_ModuleName_1));
#line 714 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__QualName_13, 1) = ((MR_Box) ((MR_Integer) 0));
#line 714 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__QualName_13, 2) = ((MR_Box) (ml_backend__ml_global_data__RawFieldName_9));
#line 714 "ml_global_data.m"
        }
#line 715 "ml_global_data.m"
        {
#line 715 "ml_global_data.m"
          ml_backend__ml_global_data__FieldName_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 715 "ml_global_data.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__FieldName_11, 0) = ((MR_Box) (ml_backend__ml_global_data__QualName_13));
#line 715 "ml_global_data.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__FieldName_11, 1) = ((MR_Box) (ml_backend__ml_global_data__StructType_2));
#line 715 "ml_global_data.m"
        }
#line 716 "ml_global_data.m"
        {
#line 716 "ml_global_data.m"
          ml_backend__ml_global_data__make_named_fields_4_p_0(ml_backend__ml_global_data__MLDS_ModuleName_1, ml_backend__ml_global_data__StructType_2, ml_backend__ml_global_data__RawFieldNames_10, &ml_backend__ml_global_data__FieldNames_12);
        }
#line 713 "ml_global_data.m"
        {
#line 713 "ml_global_data.m"
          MR_Word base;
#line 713 "ml_global_data.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 713 "ml_global_data.m"
          *ml_backend__ml_global_data__HeadVar__4_4 = base;
#line 713 "ml_global_data.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_global_data__FieldName_11));
#line 713 "ml_global_data.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_global_data__FieldNames_12));
#line 713 "ml_global_data.m"
        }
#line 713 "ml_global_data.m"
      }
#line 711 "ml_global_data.m"
  }
#line 708 "ml_global_data.m"
}

#line 693 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_gen_vector_cell_field_types_7_p_0(
#line 693 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__MLDS_Context_1,
#line 693 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Flags_2,
#line 693 "ml_global_data.m"
  MR_String ml_backend__ml_global_data__FieldNamePrefix_3,
#line 693 "ml_global_data.m"
  MR_Integer ml_backend__ml_global_data__FieldNum_4,
#line 693 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__5_5,
#line 693 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__6_6,
#line 693 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__7_7)
#line 693 "ml_global_data.m"
{
#line 697 "ml_global_data.m"
  {
#line 697 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 697 "ml_global_data.m"
    if ((ml_backend__ml_global_data__HeadVar__5_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 697 "ml_global_data.m"
      {
#line 697 "ml_global_data.m"
        *ml_backend__ml_global_data__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 697 "ml_global_data.m"
        *ml_backend__ml_global_data__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 697 "ml_global_data.m"
      }
#line 697 "ml_global_data.m"
    else
#line 700 "ml_global_data.m"
      {
#line 700 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__Type_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__HeadVar__5_5, (MR_Integer) 0)));
#line 700 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__Types_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__HeadVar__5_5, (MR_Integer) 1)));
#line 700 "ml_global_data.m"
        MR_String ml_backend__ml_global_data__RawFieldName_18;
#line 700 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__RawFieldNames_19;
#line 700 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__FieldDefn_20;
#line 700 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__FieldDefns_21;
#line 700 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__FieldName_22;
#line 700 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__FieldEntityDefn_23;
#line 700 "ml_global_data.m"
        MR_String ml_backend__ml_global_data__V_24_24;
#line 700 "ml_global_data.m"
        MR_String ml_backend__ml_global_data__V_26_26;
#line 700 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_27_27;
#line 700 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_28_28;
#line 700 "ml_global_data.m"
        MR_Integer ml_backend__ml_global_data__V_32_32;

#line 701 "ml_global_data.m"
        {
#line 701 "ml_global_data.m"
          ml_backend__ml_global_data__V_26_26 = mercury__string__int_to_string_1_f_0(ml_backend__ml_global_data__FieldNum_4);
        }
#line 701 "ml_global_data.m"
        {
#line 701 "ml_global_data.m"
          ml_backend__ml_global_data__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) "_f_", ml_backend__ml_global_data__V_26_26);
        }
#line 701 "ml_global_data.m"
        {
#line 701 "ml_global_data.m"
          ml_backend__ml_global_data__RawFieldName_18 = mercury__string__f_43_43_2_f_0(ml_backend__ml_global_data__FieldNamePrefix_3, ml_backend__ml_global_data__V_24_24);
        }
#line 702 "ml_global_data.m"
        {
#line 702 "ml_global_data.m"
          ml_backend__ml_global_data__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 702 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__V_28_28, 0) = ((MR_Box) (ml_backend__ml_global_data__RawFieldName_18));
#line 702 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__V_28_28, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 702 "ml_global_data.m"
        }
#line 702 "ml_global_data.m"
        ml_backend__ml_global_data__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_global_data__V_28_28);
#line 702 "ml_global_data.m"
        {
#line 702 "ml_global_data.m"
          ml_backend__ml_global_data__FieldName_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 702 "ml_global_data.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__FieldName_22, 0) = ((MR_Box) (ml_backend__ml_global_data__V_27_27));
#line 702 "ml_global_data.m"
        }
#line 703 "ml_global_data.m"
        {
#line 703 "ml_global_data.m"
          ml_backend__ml_global_data__FieldEntityDefn_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 703 "ml_global_data.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__FieldEntityDefn_23, 0) = ((MR_Box) (ml_backend__ml_global_data__Type_16));
#line 703 "ml_global_data.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__FieldEntityDefn_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 703 "ml_global_data.m"
          MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__FieldEntityDefn_23, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 703 "ml_global_data.m"
        }
#line 704 "ml_global_data.m"
        {
#line 704 "ml_global_data.m"
          ml_backend__ml_global_data__FieldDefn_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 704 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__FieldDefn_20, 0) = ((MR_Box) (ml_backend__ml_global_data__FieldName_22));
#line 704 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__FieldDefn_20, 1) = ((MR_Box) (ml_backend__ml_global_data__MLDS_Context_1));
#line 704 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__FieldDefn_20, 2) = ((MR_Box) (ml_backend__ml_global_data__Flags_2));
#line 704 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__FieldDefn_20, 3) = ((MR_Box) (ml_backend__ml_global_data__FieldEntityDefn_23));
#line 704 "ml_global_data.m"
        }
#line 706 "ml_global_data.m"
        ml_backend__ml_global_data__V_32_32 = (ml_backend__ml_global_data__FieldNum_4 + (MR_Integer) 1);
#line 705 "ml_global_data.m"
        {
#line 705 "ml_global_data.m"
          ml_backend__ml_global_data__ml_gen_vector_cell_field_types_7_p_0(ml_backend__ml_global_data__MLDS_Context_1, ml_backend__ml_global_data__Flags_2, ml_backend__ml_global_data__FieldNamePrefix_3, ml_backend__ml_global_data__V_32_32, ml_backend__ml_global_data__Types_17, &ml_backend__ml_global_data__RawFieldNames_19, &ml_backend__ml_global_data__FieldDefns_21);
        }
#line 699 "ml_global_data.m"
        {
#line 699 "ml_global_data.m"
          MR_Word base;
#line 699 "ml_global_data.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 699 "ml_global_data.m"
          *ml_backend__ml_global_data__HeadVar__6_6 = base;
#line 699 "ml_global_data.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_global_data__RawFieldName_18));
#line 699 "ml_global_data.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_global_data__RawFieldNames_19));
#line 699 "ml_global_data.m"
        }
#line 700 "ml_global_data.m"
        {
#line 700 "ml_global_data.m"
          MR_Word base;
#line 700 "ml_global_data.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 700 "ml_global_data.m"
          *ml_backend__ml_global_data__HeadVar__7_7 = base;
#line 700 "ml_global_data.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_global_data__FieldDefn_20));
#line 700 "ml_global_data.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ml_backend__ml_global_data__FieldDefns_21));
#line 700 "ml_global_data.m"
        }
#line 700 "ml_global_data.m"
      }
#line 697 "ml_global_data.m"
  }
#line 693 "ml_global_data.m"
}

#line 526 "ml_global_data.m"
static MR_bool MR_CALL 
ml_backend__ml_global_data__ml_specialize_generic_array_rval_2_p_0(
#line 526 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13,
#line 526 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_Rval_14)
#line 526 "ml_global_data.m"
{
#line 531 "ml_global_data.m"
  while (MR_TRUE)
#line 531 "ml_global_data.m"
    {
#line 531 "ml_global_data.m"
      /* tailcall optimized into a loop */
#line 531 "ml_global_data.m"
      {
#line 531 "ml_global_data.m"
        MR_bool ml_backend__ml_global_data__succeeded;

#line 531 "ml_global_data.m"
#line 531 "ml_global_data.m"
        switch (MR_tag((MR_Word) ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13)) {
#line 531 "ml_global_data.m"
          default:
#line 531 "ml_global_data.m"
            ml_backend__ml_global_data__succeeded = MR_FALSE;
#line 531 "ml_global_data.m"
            break;
#line 531 "ml_global_data.m"
          case (MR_Integer) 3:
#line 531 "ml_global_data.m"
#line 531 "ml_global_data.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13, (MR_Integer) 0)))) {
#line 531 "ml_global_data.m"
              default:
#line 531 "ml_global_data.m"
                ml_backend__ml_global_data__succeeded = MR_FALSE;
#line 531 "ml_global_data.m"
                break;
#line 531 "ml_global_data.m"
              case (MR_Integer) 0:
#line 531 "ml_global_data.m"
                {
#line 531 "ml_global_data.m"
                  MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13, (MR_Integer) 1)));
#line 531 "ml_global_data.m"
                  MR_Float ml_backend__ml_global_data__V_4_4;

#line 531 "ml_global_data.m"
                  ml_backend__ml_global_data__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_global_data__V_21_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__V_21_21, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 531 "ml_global_data.m"
                  if (ml_backend__ml_global_data__succeeded)
#line 531 "ml_global_data.m"
                    {
#line 531 "ml_global_data.m"
                      ml_backend__ml_global_data__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__V_21_21, (MR_Integer) 1)));
#line 531 "ml_global_data.m"
                      *ml_backend__ml_global_data__STATE_VARIABLE_Rval_14 = ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13;
#line 531 "ml_global_data.m"
                      ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 531 "ml_global_data.m"
                    }
#line 531 "ml_global_data.m"
                }
#line 531 "ml_global_data.m"
                break;
#line 531 "ml_global_data.m"
              case (MR_Integer) 1:
#line 533 "ml_global_data.m"
                {
#line 533 "ml_global_data.m"
                  MR_Word ml_backend__ml_global_data__Op_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13, (MR_Integer) 1)));
#line 533 "ml_global_data.m"
                  MR_Word ml_backend__ml_global_data__SubRval_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13, (MR_Integer) 2)));
#line 533 "ml_global_data.m"
                  MR_Word ml_backend__ml_global_data__Type_7;

#line 536 "ml_global_data.m"
#line 536 "ml_global_data.m"
                  switch (MR_tag((MR_Word) ml_backend__ml_global_data__Op_5)) {
#line 536 "ml_global_data.m"
                    default:
#line 536 "ml_global_data.m"
                      ml_backend__ml_global_data__succeeded = MR_FALSE;
#line 536 "ml_global_data.m"
                      break;
#line 536 "ml_global_data.m"
                    case (MR_Integer) 0:
#line 535 "ml_global_data.m"
                      {
#line 535 "ml_global_data.m"
                        ml_backend__ml_global_data__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__Op_5, (MR_Integer) 0)));
#line 535 "ml_global_data.m"
                        ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 535 "ml_global_data.m"
                      }
#line 536 "ml_global_data.m"
                      break;
#line 536 "ml_global_data.m"
                    case (MR_Integer) 1:
#line 537 "ml_global_data.m"
                      {
#line 537 "ml_global_data.m"
                        ml_backend__ml_global_data__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__Op_5, (MR_Integer) 0)));
#line 537 "ml_global_data.m"
                        ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 537 "ml_global_data.m"
                      }
#line 536 "ml_global_data.m"
                      break;
#line 536 "ml_global_data.m"
                    case (MR_Integer) 2:
#line 539 "ml_global_data.m"
                      {
#line 539 "ml_global_data.m"
                        ml_backend__ml_global_data__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_global_data__Op_5, (MR_Integer) 0)));
#line 539 "ml_global_data.m"
                        ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 539 "ml_global_data.m"
                      }
#line 536 "ml_global_data.m"
                      break;
#line 536 "ml_global_data.m"
                  }
#line 533 "ml_global_data.m"
                  if (ml_backend__ml_global_data__succeeded)
#line 544 "ml_global_data.m"
                    {
#line 544 "ml_global_data.m"
                      if ((ml_backend__ml_global_data__Type_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 543 "ml_global_data.m"
                        {
#line 543 "ml_global_data.m"
                          *ml_backend__ml_global_data__STATE_VARIABLE_Rval_14 = ml_backend__ml_global_data__SubRval_6;
#line 543 "ml_global_data.m"
                          ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 543 "ml_global_data.m"
                        }
#line 544 "ml_global_data.m"
                      else
#line 544 "ml_global_data.m"
                      if (((MR_tag((MR_Word) ml_backend__ml_global_data__Type_7)) == (MR_mktag((MR_Integer) 2))))
#line 545 "ml_global_data.m"
                        {
#line 545 "ml_global_data.m"
                          MR_Word ml_backend__ml_global_data__CtorCat_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_global_data__Type_7, (MR_Integer) 1)));
#line 545 "ml_global_data.m"
                          MR_Word ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_global_data__Type_7, (MR_Integer) 0)));
#line 545 "ml_global_data.m"
                          MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_global_data__Type_7, (MR_Integer) 2)));

#line 549 "ml_global_data.m"
                          if (((MR_tag((MR_Word) ml_backend__ml_global_data__CtorCat_9)) == (MR_mktag((MR_Integer) 1))))
#line 547 "ml_global_data.m"
                            {
#line 547 "ml_global_data.m"
                              MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__CtorCat_9, (MR_Integer) 0)));

#line 547 "ml_global_data.m"
                              ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_18_18 == (MR_Integer) 1);
#line 547 "ml_global_data.m"
                              if (ml_backend__ml_global_data__succeeded)
#line 547 "ml_global_data.m"
                                {
#line 548 "ml_global_data.m"
                                  *ml_backend__ml_global_data__STATE_VARIABLE_Rval_14 = ml_backend__ml_global_data__SubRval_6;
#line 548 "ml_global_data.m"
                                  ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 547 "ml_global_data.m"
                                }
#line 547 "ml_global_data.m"
                            }
#line 549 "ml_global_data.m"
                          else
#line 549 "ml_global_data.m"
                          if (((((MR_tag((MR_Word) ml_backend__ml_global_data__CtorCat_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__CtorCat_9, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 550 "ml_global_data.m"
                            {
#line 550 "ml_global_data.m"
                              MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__CtorCat_9, (MR_Integer) 1)));

#line 550 "ml_global_data.m"
                              ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_16_16 == (MR_Integer) 1);
#line 550 "ml_global_data.m"
                              if (ml_backend__ml_global_data__succeeded)
#line 551 "ml_global_data.m"
                                {
#line 551 "ml_global_data.m"
                                  /* direct tailcall eliminated */
#line 551 "ml_global_data.m"
                                  {
#line 551 "ml_global_data.m"
                                    MR_Word ml_backend__ml_global_data__STATE_VARIABLE_Rval_0__tmp_copy_13 = ml_backend__ml_global_data__SubRval_6;

#line 551 "ml_global_data.m"
                                    ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13 = ml_backend__ml_global_data__STATE_VARIABLE_Rval_0__tmp_copy_13;
#line 551 "ml_global_data.m"
                                  }
#line 551 "ml_global_data.m"
                                  continue;
#line 551 "ml_global_data.m"
                                }
#line 550 "ml_global_data.m"
                            }
#line 549 "ml_global_data.m"
                          else
#line 549 "ml_global_data.m"
                            ml_backend__ml_global_data__succeeded = MR_FALSE;
#line 545 "ml_global_data.m"
                        }
#line 544 "ml_global_data.m"
                      else
#line 544 "ml_global_data.m"
                        ml_backend__ml_global_data__succeeded = MR_FALSE;
#line 544 "ml_global_data.m"
                    }
#line 533 "ml_global_data.m"
                }
#line 531 "ml_global_data.m"
                break;
#line 531 "ml_global_data.m"
              case (MR_Integer) 2:
#line 555 "ml_global_data.m"
                {
#line 555 "ml_global_data.m"
                  MR_Word ml_backend__ml_global_data__Op_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13, (MR_Integer) 1)));
#line 555 "ml_global_data.m"
                  MR_Word ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13, (MR_Integer) 2)));
#line 555 "ml_global_data.m"
                  MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13, (MR_Integer) 3)));

#line 603 "ml_global_data.m"
#line 603 "ml_global_data.m"
                  switch (MR_tag((MR_Word) ml_backend__ml_global_data__Op_22)) {
#line 603 "ml_global_data.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 603 "ml_global_data.m"
                    case (MR_Integer) 0:
#line 603 "ml_global_data.m"
#line 603 "ml_global_data.m"
                      switch (MR_unmkbody(ml_backend__ml_global_data__Op_22)) {
#line 603 "ml_global_data.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 603 "ml_global_data.m"
                        case (MR_Integer) 0:
#line 603 "ml_global_data.m"
                        case (MR_Integer) 1:
#line 603 "ml_global_data.m"
                        case (MR_Integer) 2:
#line 603 "ml_global_data.m"
                        case (MR_Integer) 3:
#line 603 "ml_global_data.m"
                        case (MR_Integer) 4:
#line 603 "ml_global_data.m"
                        case (MR_Integer) 5:
#line 603 "ml_global_data.m"
                        case (MR_Integer) 6:
#line 603 "ml_global_data.m"
                        case (MR_Integer) 7:
#line 603 "ml_global_data.m"
                        case (MR_Integer) 8:
#line 603 "ml_global_data.m"
                        case (MR_Integer) 9:
#line 603 "ml_global_data.m"
                        case (MR_Integer) 10:
#line 603 "ml_global_data.m"
                        case (MR_Integer) 11:
#line 603 "ml_global_data.m"
                        case (MR_Integer) 12:
#line 603 "ml_global_data.m"
                        case (MR_Integer) 13:
#line 603 "ml_global_data.m"
                        case (MR_Integer) 14:
#line 603 "ml_global_data.m"
                        case (MR_Integer) 15:
#line 603 "ml_global_data.m"
                        case (MR_Integer) 16:
#line 603 "ml_global_data.m"
                        case (MR_Integer) 17:
#line 603 "ml_global_data.m"
                        case (MR_Integer) 18:
#line 603 "ml_global_data.m"
                        case (MR_Integer) 19:
#line 603 "ml_global_data.m"
                        case (MR_Integer) 20:
#line 603 "ml_global_data.m"
                        case (MR_Integer) 21:
#line 603 "ml_global_data.m"
                        case (MR_Integer) 22:
#line 603 "ml_global_data.m"
                        case (MR_Integer) 23:
#line 603 "ml_global_data.m"
                        case (MR_Integer) 24:
#line 603 "ml_global_data.m"
                        case (MR_Integer) 25:
#line 603 "ml_global_data.m"
                        case (MR_Integer) 26:
#line 603 "ml_global_data.m"
                        case (MR_Integer) 27:
#line 603 "ml_global_data.m"
                        case (MR_Integer) 32:
#line 603 "ml_global_data.m"
                        case (MR_Integer) 33:
#line 603 "ml_global_data.m"
                        case (MR_Integer) 34:
#line 603 "ml_global_data.m"
                        case (MR_Integer) 35:
#line 603 "ml_global_data.m"
                        case (MR_Integer) 36:
#line 603 "ml_global_data.m"
                        case (MR_Integer) 37:
#line 603 "ml_global_data.m"
                        case (MR_Integer) 38:
#line 603 "ml_global_data.m"
                        case (MR_Integer) 40:
#line 603 "ml_global_data.m"
                        case (MR_Integer) 41:
#line 603 "ml_global_data.m"
                        case (MR_Integer) 42:
#line 604 "ml_global_data.m"
                          {
#line 556 "ml_global_data.m"
                            ml_backend__ml_global_data__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
#line 604 "ml_global_data.m"
                          }
#line 603 "ml_global_data.m"
                          break;
#line 603 "ml_global_data.m"
                        case (MR_Integer) 28:
#line 603 "ml_global_data.m"
                        case (MR_Integer) 29:
#line 603 "ml_global_data.m"
                        case (MR_Integer) 30:
#line 603 "ml_global_data.m"
                        case (MR_Integer) 31:
#line 603 "ml_global_data.m"
                        case (MR_Integer) 39:
#line 612 "ml_global_data.m"
                          {
#line 556 "ml_global_data.m"
                            ml_backend__ml_global_data__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
#line 612 "ml_global_data.m"
                          }
#line 603 "ml_global_data.m"
                          break;
#line 603 "ml_global_data.m"
                      }
#line 603 "ml_global_data.m"
                      break;
#line 603 "ml_global_data.m"
                    case (MR_Integer) 1:
#line 603 "ml_global_data.m"
                    case (MR_Integer) 2:
#line 604 "ml_global_data.m"
                      {
#line 556 "ml_global_data.m"
                        ml_backend__ml_global_data__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
#line 604 "ml_global_data.m"
                      }
#line 603 "ml_global_data.m"
                      break;
#line 603 "ml_global_data.m"
                  }
#line 555 "ml_global_data.m"
                  if (ml_backend__ml_global_data__succeeded)
#line 555 "ml_global_data.m"
                    {
#line 555 "ml_global_data.m"
                      *ml_backend__ml_global_data__STATE_VARIABLE_Rval_14 = ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13;
#line 555 "ml_global_data.m"
                      ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 555 "ml_global_data.m"
                    }
#line 555 "ml_global_data.m"
                }
#line 531 "ml_global_data.m"
                break;
#line 531 "ml_global_data.m"
            }
#line 531 "ml_global_data.m"
            break;
#line 531 "ml_global_data.m"
        }
#line 531 "ml_global_data.m"
        return ml_backend__ml_global_data__succeeded;
#line 531 "ml_global_data.m"
      }
#line 531 "ml_global_data.m"
      break;
#line 531 "ml_global_data.m"
    }
#line 526 "ml_global_data.m"
}

#line 511 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_specialize_generic_array_init_3_p_0(
#line 511 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Init0_4,
#line 511 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__Init_5,
#line 511 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__Type_6)
#line 511 "ml_global_data.m"
{
#line 521 "ml_global_data.m"
  {
#line 521 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded = ((MR_tag((MR_Word) ml_backend__ml_global_data__Init0_4)) == (MR_mktag((MR_Integer) 1)));
#line 521 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Rval_8;
#line 516 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Rval0_7;

#line 516 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 516 "ml_global_data.m"
      {
#line 516 "ml_global_data.m"
        ml_backend__ml_global_data__Rval0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__Init0_4, (MR_Integer) 0)));
#line 517 "ml_global_data.m"
        {
#line 517 "ml_global_data.m"
          ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data__ml_specialize_generic_array_rval_2_p_0(ml_backend__ml_global_data__Rval0_7, &ml_backend__ml_global_data__Rval_8);
        }
#line 516 "ml_global_data.m"
      }
#line 521 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 519 "ml_global_data.m"
      {
#line 519 "ml_global_data.m"
        {
#line 519 "ml_global_data.m"
          MR_Word base;
#line 519 "ml_global_data.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 519 "ml_global_data.m"
          *ml_backend__ml_global_data__Init_5 = base;
#line 519 "ml_global_data.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_global_data__Rval_8));
#line 519 "ml_global_data.m"
        }
#line 520 "ml_global_data.m"
        *ml_backend__ml_global_data__Type_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 519 "ml_global_data.m"
      }
#line 521 "ml_global_data.m"
    else
#line 522 "ml_global_data.m"
      {
#line 522 "ml_global_data.m"
        *ml_backend__ml_global_data__Init_5 = ml_backend__ml_global_data__Init0_4;
#line 523 "ml_global_data.m"
        *ml_backend__ml_global_data__Type_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 522 "ml_global_data.m"
      }
#line 521 "ml_global_data.m"
  }
#line 511 "ml_global_data.m"
}

#line 469 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_gen_plain_static_defn_7_p_0(
#line 469 "ml_global_data.m"
  MR_String ml_backend__ml_global_data__ConstBaseName_8,
#line 469 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__ConstType_9,
#line 469 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Initializer_10,
#line 469 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Context_11,
#line 469 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__VarName_12,
#line 469 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25,
#line 469 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_26)
#line 469 "ml_global_data.m"
{
#line 474 "ml_global_data.m"
  {
#line 474 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 474 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__ConstCounter0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 3)));
#line 474 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__ConstNum_15;
#line 474 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__ConstCounter_16;
#line 474 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__EntityName_17;
#line 474 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__EntityDefn_19;
#line 474 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__DeclFlags_20;
#line 474 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__MLDS_Context_21;
#line 474 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Defn_22;
#line 474 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevDefns0_23;
#line 474 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevDefns_24;
#line 474 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27;
#line 474 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_28_28;
#line 474 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_29_29;
#line 474 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_30_30;
#line 327 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 0)));
#line 327 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 1)));
#line 327 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 2)));
#line 327 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 4)));
#line 327 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 5)));
#line 327 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 6)));
#line 327 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 7)));
#line 327 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 8)));
#line 327 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 9)));
#line 327 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 10)));
#line 327 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 11)));
#line 327 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 12)));
#line 327 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 13)));
#line 339 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_52_52;
#line 339 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_53_53;
#line 339 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_54_54;
#line 339 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_56_56;
#line 339 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_57_57;
#line 339 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_58_58;
#line 339 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_59_59;
#line 339 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_60_60;
#line 339 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_61_61;
#line 339 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_62_62;
#line 339 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_63_63;
#line 339 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_64_64;
#line 339 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_65_65;
#line 339 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_55_55;
#line 329 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_67_67;
#line 329 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_68_68;
#line 329 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_69_69;
#line 329 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_70_70;
#line 329 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_71_71;
#line 329 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_72_72;
#line 329 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_73_73;
#line 329 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_74_74;
#line 329 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_75_75;
#line 329 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_76_76;
#line 329 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_77_77;
#line 329 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_78_78;
#line 329 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_79_79;

#line 476 "ml_global_data.m"
    {
#line 476 "ml_global_data.m"
      mercury__counter__allocate_3_p_0(&ml_backend__ml_global_data__ConstNum_15, ml_backend__ml_global_data__ConstCounter0_14, &ml_backend__ml_global_data__ConstCounter_16);
    }
#line 339 "ml_global_data.m"
    ml_backend__ml_global_data__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 0)));
#line 339 "ml_global_data.m"
    ml_backend__ml_global_data__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 1)));
#line 339 "ml_global_data.m"
    ml_backend__ml_global_data__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 2)));
#line 339 "ml_global_data.m"
    ml_backend__ml_global_data__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 3)));
#line 339 "ml_global_data.m"
    ml_backend__ml_global_data__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 4)));
#line 339 "ml_global_data.m"
    ml_backend__ml_global_data__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 5)));
#line 339 "ml_global_data.m"
    ml_backend__ml_global_data__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 6)));
#line 339 "ml_global_data.m"
    ml_backend__ml_global_data__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 7)));
#line 339 "ml_global_data.m"
    ml_backend__ml_global_data__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 8)));
#line 339 "ml_global_data.m"
    ml_backend__ml_global_data__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 9)));
#line 339 "ml_global_data.m"
    ml_backend__ml_global_data__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 10)));
#line 339 "ml_global_data.m"
    ml_backend__ml_global_data__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 11)));
#line 339 "ml_global_data.m"
    ml_backend__ml_global_data__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 12)));
#line 339 "ml_global_data.m"
    ml_backend__ml_global_data__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 13)));
#line 339 "ml_global_data.m"
    {
#line 339 "ml_global_data.m"
      ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 339 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 0) = ((MR_Box) (ml_backend__ml_global_data__V_52_52));
#line 339 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 1) = ((MR_Box) (ml_backend__ml_global_data__V_53_53));
#line 339 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 2) = ((MR_Box) (ml_backend__ml_global_data__V_54_54));
#line 339 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 3) = ((MR_Box) (ml_backend__ml_global_data__ConstCounter_16));
#line 339 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 4) = ((MR_Box) (ml_backend__ml_global_data__V_56_56));
#line 339 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 5) = ((MR_Box) (ml_backend__ml_global_data__V_57_57));
#line 339 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 6) = ((MR_Box) (ml_backend__ml_global_data__V_58_58));
#line 339 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 7) = ((MR_Box) (ml_backend__ml_global_data__V_59_59));
#line 339 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 8) = ((MR_Box) (ml_backend__ml_global_data__V_60_60));
#line 339 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 9) = ((MR_Box) (ml_backend__ml_global_data__V_61_61));
#line 339 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 10) = ((MR_Box) (ml_backend__ml_global_data__V_62_62));
#line 339 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 11) = ((MR_Box) (ml_backend__ml_global_data__V_63_63));
#line 339 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 12) = ((MR_Box) (ml_backend__ml_global_data__V_64_64));
#line 339 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 13) = ((MR_Box) (ml_backend__ml_global_data__V_65_65));
#line 339 "ml_global_data.m"
    }
#line 479 "ml_global_data.m"
    {
#line 479 "ml_global_data.m"
      ml_backend__ml_global_data__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 479 "ml_global_data.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__V_28_28, 0) = ((MR_Box) (ml_backend__ml_global_data__ConstNum_15));
#line 479 "ml_global_data.m"
    }
#line 479 "ml_global_data.m"
    {
#line 479 "ml_global_data.m"
      MR_Word base;
#line 479 "ml_global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 479 "ml_global_data.m"
      *ml_backend__ml_global_data__VarName_12 = base;
#line 479 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__ConstBaseName_8));
#line 479 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_28_28));
#line 479 "ml_global_data.m"
    }
#line 480 "ml_global_data.m"
    ml_backend__ml_global_data__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) *ml_backend__ml_global_data__VarName_12);
#line 480 "ml_global_data.m"
    {
#line 480 "ml_global_data.m"
      ml_backend__ml_global_data__EntityName_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 480 "ml_global_data.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__EntityName_17, 0) = ((MR_Box) (ml_backend__ml_global_data__V_29_29));
#line 480 "ml_global_data.m"
    }
#line 484 "ml_global_data.m"
    {
#line 484 "ml_global_data.m"
      ml_backend__ml_global_data__EntityDefn_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 484 "ml_global_data.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__EntityDefn_19, 0) = ((MR_Box) (ml_backend__ml_global_data__ConstType_9));
#line 484 "ml_global_data.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__EntityDefn_19, 1) = ((MR_Box) (ml_backend__ml_global_data__Initializer_10));
#line 484 "ml_global_data.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__EntityDefn_19, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 484 "ml_global_data.m"
    }
#line 485 "ml_global_data.m"
    {
#line 485 "ml_global_data.m"
      ml_backend__ml_global_data__V_30_30 = ml_backend__mlds__ml_static_const_decl_flags_0_f_0();
    }
#line 485 "ml_global_data.m"
    {
#line 485 "ml_global_data.m"
      ml_backend__ml_global_data__DeclFlags_20 = ml_backend__mlds__set_access_2_f_0(ml_backend__ml_global_data__V_30_30, (MR_Integer) 2);
    }
#line 486 "ml_global_data.m"
    {
#line 486 "ml_global_data.m"
      ml_backend__ml_global_data__MLDS_Context_21 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_global_data__Context_11);
    }
#line 487 "ml_global_data.m"
    {
#line 487 "ml_global_data.m"
      ml_backend__ml_global_data__Defn_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 487 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__Defn_22, 0) = ((MR_Box) (ml_backend__ml_global_data__EntityName_17));
#line 487 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__Defn_22, 1) = ((MR_Box) (ml_backend__ml_global_data__MLDS_Context_21));
#line 487 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__Defn_22, 2) = ((MR_Box) (ml_backend__ml_global_data__DeclFlags_20));
#line 487 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__Defn_22, 3) = ((MR_Box) (ml_backend__ml_global_data__EntityDefn_19));
#line 487 "ml_global_data.m"
    }
#line 329 "ml_global_data.m"
    ml_backend__ml_global_data__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 0)));
#line 329 "ml_global_data.m"
    ml_backend__ml_global_data__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 1)));
#line 329 "ml_global_data.m"
    ml_backend__ml_global_data__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 2)));
#line 329 "ml_global_data.m"
    ml_backend__ml_global_data__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 3)));
#line 329 "ml_global_data.m"
    ml_backend__ml_global_data__RevDefns0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 4)));
#line 329 "ml_global_data.m"
    ml_backend__ml_global_data__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 5)));
#line 329 "ml_global_data.m"
    ml_backend__ml_global_data__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 6)));
#line 329 "ml_global_data.m"
    ml_backend__ml_global_data__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 7)));
#line 329 "ml_global_data.m"
    ml_backend__ml_global_data__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 8)));
#line 329 "ml_global_data.m"
    ml_backend__ml_global_data__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 9)));
#line 329 "ml_global_data.m"
    ml_backend__ml_global_data__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 10)));
#line 329 "ml_global_data.m"
    ml_backend__ml_global_data__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 11)));
#line 329 "ml_global_data.m"
    ml_backend__ml_global_data__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 12)));
#line 329 "ml_global_data.m"
    ml_backend__ml_global_data__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 13)));
#line 490 "ml_global_data.m"
    {
#line 490 "ml_global_data.m"
      ml_backend__ml_global_data__RevDefns_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 490 "ml_global_data.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__RevDefns_24, 0) = ((MR_Box) (ml_backend__ml_global_data__Defn_22));
#line 490 "ml_global_data.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__RevDefns_24, 1) = ((MR_Box) (ml_backend__ml_global_data__RevDefns0_23));
#line 490 "ml_global_data.m"
    }
#line 491 "ml_global_data.m"
    {
#line 491 "ml_global_data.m"
      ml_backend__ml_global_data__ml_global_data_set_rev_flat_cell_defns_3_p_0(ml_backend__ml_global_data__RevDefns_24, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_26);
#line 491 "ml_global_data.m"
      return;
    }
#line 474 "ml_global_data.m"
  }
#line 469 "ml_global_data.m"
}

#line 411 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_gen_scalar_static_defn_6_p_0(
#line 411 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__MLDS_ModuleName_7,
#line 411 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__ConstType_8,
#line 411 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Initializer_9,
#line 411 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__Common_10,
#line 411 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34,
#line 411 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_35)
#line 411 "ml_global_data.m"
{
#line 416 "ml_global_data.m"
  {
#line 416 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 416 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_172_172;
#line 416 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__InitArraySize_12;
#line 416 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__CellType_13;
#line 416 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeNumMap0_15;
#line 416 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__CellGroupMap0_16;
#line 416 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeNum_18;
#line 416 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RowCounter0_23;
#line 416 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__RowNum_24;
#line 416 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RowCounter_25;
#line 416 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__MembersMap0_26;
#line 416 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__NewCommon_27;
#line 416 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__MaybeOldCommon_28;
#line 416 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__MembersMap_29;
#line 416 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37;
#line 416 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43;
#line 420 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_54_54;
#line 420 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_55_55;
#line 420 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_56_56;
#line 420 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_57_57;
#line 420 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_58_58;
#line 420 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_59_59;
#line 420 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_60_60;
#line 420 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_61_61;
#line 420 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_63_63;
#line 420 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_64_64;
#line 420 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_65_65;
#line 420 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_66_66;
#line 430 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__OldTypeNum_17;
#line 422 "ml_global_data.m"
    MR_Box ml_backend__ml_global_data__conv0_OldTypeNum_17;
#line 443 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_121_121;
#line 443 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_122_122;
#line 443 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_123_123;
#line 443 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_124_124;
#line 445 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_125_125;
#line 445 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_126_126;
#line 445 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_127_127;
#line 445 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_128_128;

#line 417 "ml_global_data.m"
    {
#line 417 "ml_global_data.m"
      ml_backend__ml_global_data__InitArraySize_12 = ml_backend__mlds__get_initializer_array_size_1_f_0(ml_backend__ml_global_data__Initializer_9);
    }
#line 418 "ml_global_data.m"
    {
#line 418 "ml_global_data.m"
      ml_backend__ml_global_data__CellType_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 418 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellType_13, 0) = ((MR_Box) (ml_backend__ml_global_data__ConstType_8));
#line 418 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellType_13, 1) = ((MR_Box) (ml_backend__ml_global_data__InitArraySize_12));
#line 418 "ml_global_data.m"
    }
#line 420 "ml_global_data.m"
    ml_backend__ml_global_data__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 0)));
#line 420 "ml_global_data.m"
    ml_backend__ml_global_data__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 1)));
#line 420 "ml_global_data.m"
    ml_backend__ml_global_data__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 2)));
#line 420 "ml_global_data.m"
    ml_backend__ml_global_data__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 3)));
#line 420 "ml_global_data.m"
    ml_backend__ml_global_data__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 4)));
#line 420 "ml_global_data.m"
    ml_backend__ml_global_data__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 5)));
#line 420 "ml_global_data.m"
    ml_backend__ml_global_data__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 6)));
#line 420 "ml_global_data.m"
    ml_backend__ml_global_data__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 7)));
#line 420 "ml_global_data.m"
    ml_backend__ml_global_data__TypeNumMap0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 8)));
#line 420 "ml_global_data.m"
    ml_backend__ml_global_data__CellGroupMap0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 9)));
#line 420 "ml_global_data.m"
    ml_backend__ml_global_data__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 10)));
#line 420 "ml_global_data.m"
    ml_backend__ml_global_data__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 11)));
#line 420 "ml_global_data.m"
    ml_backend__ml_global_data__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 12)));
#line 420 "ml_global_data.m"
    ml_backend__ml_global_data__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 13)));
#line 422 "ml_global_data.m"
    {
#line 422 "ml_global_data.m"
      ml_backend__ml_global_data__succeeded = mercury__map__search_3_p_0((MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0, ml_backend__ml_global_data__TypeNumMap0_15, ((MR_Box) (ml_backend__ml_global_data__CellType_13)), &ml_backend__ml_global_data__conv0_OldTypeNum_17);
    }
#line 422 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 422 "ml_global_data.m"
      {
#line 422 "ml_global_data.m"
        ml_backend__ml_global_data__OldTypeNum_17 = ((MR_Word) ml_backend__ml_global_data__conv0_OldTypeNum_17);
#line 422 "ml_global_data.m"
        ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 422 "ml_global_data.m"
      }
#line 430 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 423 "ml_global_data.m"
      {
#line 426 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_36_36;
#line 424 "ml_global_data.m"
        MR_Box ml_backend__ml_global_data__conv1_STATE_VARIABLE_CellGroup_36_36;

#line 423 "ml_global_data.m"
        ml_backend__ml_global_data__TypeNum_18 = ml_backend__ml_global_data__OldTypeNum_17;
#line 424 "ml_global_data.m"
        {
#line 424 "ml_global_data.m"
          ml_backend__ml_global_data__succeeded = mercury__map__search_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0, ml_backend__ml_global_data__CellGroupMap0_16, ((MR_Box) (ml_backend__ml_global_data__TypeNum_18)), &ml_backend__ml_global_data__conv1_STATE_VARIABLE_CellGroup_36_36);
        }
#line 424 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 424 "ml_global_data.m"
          {
#line 424 "ml_global_data.m"
            ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_36_36 = ((MR_Word) ml_backend__ml_global_data__conv1_STATE_VARIABLE_CellGroup_36_36);
#line 424 "ml_global_data.m"
            ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 424 "ml_global_data.m"
          }
#line 426 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 426 "ml_global_data.m"
          ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37 = ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_36_36;
#line 426 "ml_global_data.m"
        else
#line 427 "ml_global_data.m"
          {
#line 427 "ml_global_data.m"
            MR_Word ml_backend__ml_global_data__TypeCtorInfo_166_166;
#line 427 "ml_global_data.m"
            MR_Word ml_backend__ml_global_data__V_38_38;
#line 427 "ml_global_data.m"
            MR_Word ml_backend__ml_global_data__V_40_40;
#line 427 "ml_global_data.m"
            MR_Word ml_backend__ml_global_data__V_41_41;

#line 428 "ml_global_data.m"
            {
#line 428 "ml_global_data.m"
              ml_backend__ml_global_data__V_38_38 = mercury__counter__init_1_f_0((MR_Integer) 0);
            }
#line 5902 "ml_backend.ml_global_data.c"
            ml_backend__ml_global_data__TypeCtorInfo_166_166 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
#line 428 "ml_global_data.m"
            {
#line 428 "ml_global_data.m"
              ml_backend__ml_global_data__V_40_40 = mercury__bimap__init_0_f_0(ml_backend__ml_global_data__TypeCtorInfo_166_166, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0);
            }
#line 428 "ml_global_data.m"
            {
#line 428 "ml_global_data.m"
              ml_backend__ml_global_data__V_41_41 = mercury__cord__empty_0_f_0(ml_backend__ml_global_data__TypeCtorInfo_166_166);
            }
#line 427 "ml_global_data.m"
            {
#line 427 "ml_global_data.m"
              ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 427 "ml_global_data.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 0) = ((MR_Box) (ml_backend__ml_global_data__ConstType_8));
#line 427 "ml_global_data.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 1) = ((MR_Box) (ml_backend__ml_global_data__InitArraySize_12));
#line 427 "ml_global_data.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 2) = ((MR_Box) (ml_backend__ml_global_data__V_38_38));
#line 427 "ml_global_data.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 3) = ((MR_Box) (ml_backend__ml_global_data__V_40_40));
#line 427 "ml_global_data.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 4) = ((MR_Box) (ml_backend__ml_global_data__V_41_41));
#line 427 "ml_global_data.m"
            }
#line 427 "ml_global_data.m"
          }
#line 423 "ml_global_data.m"
        ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43 = ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34;
#line 423 "ml_global_data.m"
      }
#line 430 "ml_global_data.m"
    else
#line 431 "ml_global_data.m"
      {
#line 431 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeCtorInfo_170_170;
#line 431 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeNumCounter0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 7)));
#line 431 "ml_global_data.m"
        MR_Integer ml_backend__ml_global_data__TypeRawNum_20;
#line 431 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeNumCounter_21;
#line 431 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeNumMap_22;
#line 431 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42;
#line 431 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_45_45;
#line 431 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_47_47;
#line 431 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_48_48;
#line 431 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 0)));
#line 431 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 1)));
#line 431 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 2)));
#line 431 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 3)));
#line 431 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 4)));
#line 431 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 5)));
#line 431 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 6)));
#line 431 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 8)));
#line 431 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 9)));
#line 431 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 10)));
#line 431 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 11)));
#line 431 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 12)));
#line 431 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 13)));
#line 434 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_93_93;
#line 434 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_94_94;
#line 434 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_95_95;
#line 434 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_96_96;
#line 434 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_97_97;
#line 434 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_98_98;
#line 434 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_99_99;
#line 434 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_101_101;
#line 434 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_102_102;
#line 434 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_103_103;
#line 434 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_104_104;
#line 434 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_105_105;
#line 434 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_106_106;
#line 434 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_100_100;
#line 437 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_107_107;
#line 437 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_108_108;
#line 437 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_109_109;
#line 437 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_110_110;
#line 437 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_111_111;
#line 437 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_112_112;
#line 437 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_113_113;
#line 437 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_114_114;
#line 437 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_116_116;
#line 437 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_117_117;
#line 437 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_118_118;
#line 437 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_119_119;
#line 437 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_120_120;
#line 437 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_115_115;

#line 432 "ml_global_data.m"
        {
#line 432 "ml_global_data.m"
          mercury__counter__allocate_3_p_0(&ml_backend__ml_global_data__TypeRawNum_20, ml_backend__ml_global_data__TypeNumCounter0_19, &ml_backend__ml_global_data__TypeNumCounter_21);
        }
#line 433 "ml_global_data.m"
        ml_backend__ml_global_data__TypeNum_18 = (MR_Word) ml_backend__ml_global_data__TypeRawNum_20;
#line 434 "ml_global_data.m"
        ml_backend__ml_global_data__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 0)));
#line 434 "ml_global_data.m"
        ml_backend__ml_global_data__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 1)));
#line 434 "ml_global_data.m"
        ml_backend__ml_global_data__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 2)));
#line 434 "ml_global_data.m"
        ml_backend__ml_global_data__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 3)));
#line 434 "ml_global_data.m"
        ml_backend__ml_global_data__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 4)));
#line 434 "ml_global_data.m"
        ml_backend__ml_global_data__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 5)));
#line 434 "ml_global_data.m"
        ml_backend__ml_global_data__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 6)));
#line 434 "ml_global_data.m"
        ml_backend__ml_global_data__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 7)));
#line 434 "ml_global_data.m"
        ml_backend__ml_global_data__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 8)));
#line 434 "ml_global_data.m"
        ml_backend__ml_global_data__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 9)));
#line 434 "ml_global_data.m"
        ml_backend__ml_global_data__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 10)));
#line 434 "ml_global_data.m"
        ml_backend__ml_global_data__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 11)));
#line 434 "ml_global_data.m"
        ml_backend__ml_global_data__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 12)));
#line 434 "ml_global_data.m"
        ml_backend__ml_global_data__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 13)));
#line 434 "ml_global_data.m"
        {
#line 434 "ml_global_data.m"
          ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 434 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 0) = ((MR_Box) (ml_backend__ml_global_data__V_93_93));
#line 434 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 1) = ((MR_Box) (ml_backend__ml_global_data__V_94_94));
#line 434 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 2) = ((MR_Box) (ml_backend__ml_global_data__V_95_95));
#line 434 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 3) = ((MR_Box) (ml_backend__ml_global_data__V_96_96));
#line 434 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 4) = ((MR_Box) (ml_backend__ml_global_data__V_97_97));
#line 434 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 5) = ((MR_Box) (ml_backend__ml_global_data__V_98_98));
#line 434 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 6) = ((MR_Box) (ml_backend__ml_global_data__V_99_99));
#line 434 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 7) = ((MR_Box) (ml_backend__ml_global_data__TypeNumCounter_21));
#line 434 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 8) = ((MR_Box) (ml_backend__ml_global_data__V_101_101));
#line 434 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 9) = ((MR_Box) (ml_backend__ml_global_data__V_102_102));
#line 434 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 10) = ((MR_Box) (ml_backend__ml_global_data__V_103_103));
#line 434 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 11) = ((MR_Box) (ml_backend__ml_global_data__V_104_104));
#line 434 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 12) = ((MR_Box) (ml_backend__ml_global_data__V_105_105));
#line 434 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 13) = ((MR_Box) (ml_backend__ml_global_data__V_106_106));
#line 434 "ml_global_data.m"
        }
#line 436 "ml_global_data.m"
        {
#line 436 "ml_global_data.m"
          mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0, ((MR_Box) (ml_backend__ml_global_data__CellType_13)), ((MR_Box) (ml_backend__ml_global_data__TypeNum_18)), ml_backend__ml_global_data__TypeNumMap0_15, &ml_backend__ml_global_data__TypeNumMap_22);
        }
#line 437 "ml_global_data.m"
        ml_backend__ml_global_data__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 0)));
#line 437 "ml_global_data.m"
        ml_backend__ml_global_data__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 1)));
#line 437 "ml_global_data.m"
        ml_backend__ml_global_data__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 2)));
#line 437 "ml_global_data.m"
        ml_backend__ml_global_data__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 3)));
#line 437 "ml_global_data.m"
        ml_backend__ml_global_data__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 4)));
#line 437 "ml_global_data.m"
        ml_backend__ml_global_data__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 5)));
#line 437 "ml_global_data.m"
        ml_backend__ml_global_data__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 6)));
#line 437 "ml_global_data.m"
        ml_backend__ml_global_data__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 7)));
#line 437 "ml_global_data.m"
        ml_backend__ml_global_data__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 8)));
#line 437 "ml_global_data.m"
        ml_backend__ml_global_data__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 9)));
#line 437 "ml_global_data.m"
        ml_backend__ml_global_data__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 10)));
#line 437 "ml_global_data.m"
        ml_backend__ml_global_data__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 11)));
#line 437 "ml_global_data.m"
        ml_backend__ml_global_data__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 12)));
#line 437 "ml_global_data.m"
        ml_backend__ml_global_data__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 13)));
#line 437 "ml_global_data.m"
        {
#line 437 "ml_global_data.m"
          ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 437 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 0) = ((MR_Box) (ml_backend__ml_global_data__V_107_107));
#line 437 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 1) = ((MR_Box) (ml_backend__ml_global_data__V_108_108));
#line 437 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 2) = ((MR_Box) (ml_backend__ml_global_data__V_109_109));
#line 437 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 3) = ((MR_Box) (ml_backend__ml_global_data__V_110_110));
#line 437 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 4) = ((MR_Box) (ml_backend__ml_global_data__V_111_111));
#line 437 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 5) = ((MR_Box) (ml_backend__ml_global_data__V_112_112));
#line 437 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 6) = ((MR_Box) (ml_backend__ml_global_data__V_113_113));
#line 437 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 7) = ((MR_Box) (ml_backend__ml_global_data__V_114_114));
#line 437 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 8) = ((MR_Box) (ml_backend__ml_global_data__TypeNumMap_22));
#line 437 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 9) = ((MR_Box) (ml_backend__ml_global_data__V_116_116));
#line 437 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 10) = ((MR_Box) (ml_backend__ml_global_data__V_117_117));
#line 437 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 11) = ((MR_Box) (ml_backend__ml_global_data__V_118_118));
#line 437 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 12) = ((MR_Box) (ml_backend__ml_global_data__V_119_119));
#line 437 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 13) = ((MR_Box) (ml_backend__ml_global_data__V_120_120));
#line 437 "ml_global_data.m"
        }
#line 440 "ml_global_data.m"
        {
#line 440 "ml_global_data.m"
          ml_backend__ml_global_data__V_45_45 = mercury__counter__init_1_f_0((MR_Integer) 0);
        }
#line 6182 "ml_backend.ml_global_data.c"
        ml_backend__ml_global_data__TypeCtorInfo_170_170 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
#line 440 "ml_global_data.m"
        {
#line 440 "ml_global_data.m"
          ml_backend__ml_global_data__V_47_47 = mercury__bimap__init_0_f_0(ml_backend__ml_global_data__TypeCtorInfo_170_170, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0);
        }
#line 440 "ml_global_data.m"
        {
#line 440 "ml_global_data.m"
          ml_backend__ml_global_data__V_48_48 = mercury__cord__empty_0_f_0(ml_backend__ml_global_data__TypeCtorInfo_170_170);
        }
#line 439 "ml_global_data.m"
        {
#line 439 "ml_global_data.m"
          ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 439 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 0) = ((MR_Box) (ml_backend__ml_global_data__ConstType_8));
#line 439 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 1) = ((MR_Box) (ml_backend__ml_global_data__InitArraySize_12));
#line 439 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 2) = ((MR_Box) (ml_backend__ml_global_data__V_45_45));
#line 439 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 3) = ((MR_Box) (ml_backend__ml_global_data__V_47_47));
#line 439 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 4) = ((MR_Box) (ml_backend__ml_global_data__V_48_48));
#line 439 "ml_global_data.m"
        }
#line 431 "ml_global_data.m"
      }
#line 443 "ml_global_data.m"
    ml_backend__ml_global_data__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 0)));
#line 443 "ml_global_data.m"
    ml_backend__ml_global_data__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 1)));
#line 443 "ml_global_data.m"
    ml_backend__ml_global_data__RowCounter0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 2)));
#line 443 "ml_global_data.m"
    ml_backend__ml_global_data__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 3)));
#line 443 "ml_global_data.m"
    ml_backend__ml_global_data__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 4)));
#line 444 "ml_global_data.m"
    {
#line 444 "ml_global_data.m"
      mercury__counter__allocate_3_p_0(&ml_backend__ml_global_data__RowNum_24, ml_backend__ml_global_data__RowCounter0_23, &ml_backend__ml_global_data__RowCounter_25);
    }
#line 445 "ml_global_data.m"
    ml_backend__ml_global_data__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 0)));
#line 445 "ml_global_data.m"
    ml_backend__ml_global_data__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 1)));
#line 445 "ml_global_data.m"
    ml_backend__ml_global_data__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 2)));
#line 445 "ml_global_data.m"
    ml_backend__ml_global_data__MembersMap0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 3)));
#line 445 "ml_global_data.m"
    ml_backend__ml_global_data__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 4)));
#line 446 "ml_global_data.m"
    {
#line 446 "ml_global_data.m"
      ml_backend__ml_global_data__NewCommon_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 446 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__NewCommon_27, 0) = ((MR_Box) (ml_backend__ml_global_data__MLDS_ModuleName_7));
#line 446 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__NewCommon_27, 1) = ((MR_Box) (ml_backend__ml_global_data__ConstType_8));
#line 446 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__NewCommon_27, 2) = ((MR_Box) (ml_backend__ml_global_data__TypeNum_18));
#line 446 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__NewCommon_27, 3) = ((MR_Box) (ml_backend__ml_global_data__RowNum_24));
#line 446 "ml_global_data.m"
    }
#line 6251 "ml_backend.ml_global_data.c"
    ml_backend__ml_global_data__TypeCtorInfo_172_172 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
#line 448 "ml_global_data.m"
    {
#line 448 "ml_global_data.m"
      mercury__bimap__search_insert_5_p_0(ml_backend__ml_global_data__TypeCtorInfo_172_172, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0, ((MR_Box) (ml_backend__ml_global_data__Initializer_9)), ((MR_Box) (ml_backend__ml_global_data__NewCommon_27)), &ml_backend__ml_global_data__MaybeOldCommon_28, ml_backend__ml_global_data__MembersMap0_26, &ml_backend__ml_global_data__MembersMap_29);
    }
#line 454 "ml_global_data.m"
    if ((ml_backend__ml_global_data__MaybeOldCommon_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 455 "ml_global_data.m"
      {
#line 455 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__Rows0_31;
#line 455 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__Rows_32;
#line 455 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__CellGroupMap_33;
#line 455 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50;
#line 455 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53;
#line 455 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_129_129;
#line 455 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_130_130;
#line 455 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_133_133;
#line 457 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_131_131;
#line 457 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_132_132;
#line 462 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_143_143;
#line 462 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_144_144;
#line 462 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_145_145;
#line 462 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_146_146;
#line 462 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_147_147;
#line 465 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_148_148;
#line 465 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_149_149;
#line 465 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_150_150;
#line 465 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_151_151;
#line 465 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_152_152;
#line 465 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_153_153;
#line 465 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_154_154;
#line 465 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_155_155;
#line 465 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_156_156;
#line 465 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_158_158;
#line 465 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_159_159;
#line 465 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_160_160;
#line 465 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_161_161;
#line 465 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_157_157;

#line 456 "ml_global_data.m"
        *ml_backend__ml_global_data__Common_10 = ml_backend__ml_global_data__NewCommon_27;
#line 457 "ml_global_data.m"
        ml_backend__ml_global_data__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 0)));
#line 457 "ml_global_data.m"
        ml_backend__ml_global_data__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 1)));
#line 457 "ml_global_data.m"
        ml_backend__ml_global_data__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 2)));
#line 457 "ml_global_data.m"
        ml_backend__ml_global_data__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 3)));
#line 457 "ml_global_data.m"
        ml_backend__ml_global_data__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 4)));
#line 458 "ml_global_data.m"
        ml_backend__ml_global_data__Rows0_31 = ml_backend__ml_global_data__V_133_133;
#line 458 "ml_global_data.m"
        {
#line 458 "ml_global_data.m"
          ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 458 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, 0) = ((MR_Box) (ml_backend__ml_global_data__V_129_129));
#line 458 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, 1) = ((MR_Box) (ml_backend__ml_global_data__V_130_130));
#line 458 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, 2) = ((MR_Box) (ml_backend__ml_global_data__RowCounter_25));
#line 458 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, 3) = ((MR_Box) (ml_backend__ml_global_data__MembersMap_29));
#line 458 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, 4) = ((MR_Box) (ml_backend__ml_global_data__Rows0_31));
#line 458 "ml_global_data.m"
        }
#line 461 "ml_global_data.m"
        {
#line 461 "ml_global_data.m"
          ml_backend__ml_global_data__Rows_32 = mercury__cord__snoc_2_f_0(ml_backend__ml_global_data__TypeCtorInfo_172_172, ml_backend__ml_global_data__Rows0_31, ((MR_Box) (ml_backend__ml_global_data__Initializer_9)));
        }
#line 462 "ml_global_data.m"
        ml_backend__ml_global_data__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, (MR_Integer) 0)));
#line 462 "ml_global_data.m"
        ml_backend__ml_global_data__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, (MR_Integer) 1)));
#line 462 "ml_global_data.m"
        ml_backend__ml_global_data__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, (MR_Integer) 2)));
#line 462 "ml_global_data.m"
        ml_backend__ml_global_data__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, (MR_Integer) 3)));
#line 462 "ml_global_data.m"
        ml_backend__ml_global_data__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, (MR_Integer) 4)));
#line 462 "ml_global_data.m"
        {
#line 462 "ml_global_data.m"
          ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 462 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53, 0) = ((MR_Box) (ml_backend__ml_global_data__V_143_143));
#line 462 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53, 1) = ((MR_Box) (ml_backend__ml_global_data__V_144_144));
#line 462 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53, 2) = ((MR_Box) (ml_backend__ml_global_data__V_145_145));
#line 462 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53, 3) = ((MR_Box) (ml_backend__ml_global_data__V_146_146));
#line 462 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53, 4) = ((MR_Box) (ml_backend__ml_global_data__Rows_32));
#line 462 "ml_global_data.m"
        }
#line 464 "ml_global_data.m"
        {
#line 464 "ml_global_data.m"
          mercury__map__set_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0, ((MR_Box) (ml_backend__ml_global_data__TypeNum_18)), ((MR_Box) (ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53)), ml_backend__ml_global_data__CellGroupMap0_16, &ml_backend__ml_global_data__CellGroupMap_33);
        }
#line 465 "ml_global_data.m"
        ml_backend__ml_global_data__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 0)));
#line 465 "ml_global_data.m"
        ml_backend__ml_global_data__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 1)));
#line 465 "ml_global_data.m"
        ml_backend__ml_global_data__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 2)));
#line 465 "ml_global_data.m"
        ml_backend__ml_global_data__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 3)));
#line 465 "ml_global_data.m"
        ml_backend__ml_global_data__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 4)));
#line 465 "ml_global_data.m"
        ml_backend__ml_global_data__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 5)));
#line 465 "ml_global_data.m"
        ml_backend__ml_global_data__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 6)));
#line 465 "ml_global_data.m"
        ml_backend__ml_global_data__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 7)));
#line 465 "ml_global_data.m"
        ml_backend__ml_global_data__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 8)));
#line 465 "ml_global_data.m"
        ml_backend__ml_global_data__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 9)));
#line 465 "ml_global_data.m"
        ml_backend__ml_global_data__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 10)));
#line 465 "ml_global_data.m"
        ml_backend__ml_global_data__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 11)));
#line 465 "ml_global_data.m"
        ml_backend__ml_global_data__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 12)));
#line 465 "ml_global_data.m"
        ml_backend__ml_global_data__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 13)));
#line 465 "ml_global_data.m"
        {
#line 465 "ml_global_data.m"
          MR_Word base;
#line 465 "ml_global_data.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 465 "ml_global_data.m"
          *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_35 = base;
#line 465 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__V_148_148));
#line 465 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_149_149));
#line 465 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_150_150));
#line 465 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_151_151));
#line 465 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__V_152_152));
#line 465 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__V_153_153));
#line 465 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__V_154_154));
#line 465 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_155_155));
#line 465 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_156_156));
#line 465 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__CellGroupMap_33));
#line 465 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_158_158));
#line 465 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__V_159_159));
#line 465 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__V_160_160));
#line 465 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__V_161_161));
#line 465 "ml_global_data.m"
        }
#line 455 "ml_global_data.m"
      }
#line 454 "ml_global_data.m"
    else
#line 451 "ml_global_data.m"
      {
#line 451 "ml_global_data.m"
        *ml_backend__ml_global_data__Common_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__MaybeOldCommon_28, (MR_Integer) 0)));
#line 451 "ml_global_data.m"
        *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_35 = ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43;
#line 451 "ml_global_data.m"
      }
#line 416 "ml_global_data.m"
  }
#line 411 "ml_global_data.m"
}

#line 320 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_global_data_set_rev_flat_cell_defns_3_p_0(
#line 320 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Defns_4,
#line 320 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6,
#line 320 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_7)
#line 320 "ml_global_data.m"
{
#line 341 "ml_global_data.m"
  {
#line 341 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 341 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 0)));
#line 341 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 1)));
#line 341 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 2)));
#line 341 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 3)));
#line 341 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 5)));
#line 341 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 6)));
#line 341 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 7)));
#line 341 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 8)));
#line 341 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 9)));
#line 341 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 10)));
#line 341 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 11)));
#line 341 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 12)));
#line 341 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 13)));
#line 341 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 4)));

#line 341 "ml_global_data.m"
    {
#line 341 "ml_global_data.m"
      MR_Word base;
#line 341 "ml_global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 341 "ml_global_data.m"
      *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_7 = base;
#line 341 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__V_9_9));
#line 341 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_10_10));
#line 341 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_11_11));
#line 341 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_12_12));
#line 341 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__Defns_4));
#line 341 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__V_14_14));
#line 341 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__V_15_15));
#line 341 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_16_16));
#line 341 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_17_17));
#line 341 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__V_18_18));
#line 341 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_19_19));
#line 341 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__V_20_20));
#line 341 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__V_21_21));
#line 341 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__V_22_22));
#line 341 "ml_global_data.m"
    }
#line 341 "ml_global_data.m"
  }
#line 320 "ml_global_data.m"
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
#line 745 "ml_global_data.m"
  {
#line 745 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 745 "ml_global_data.m"
    MR_String ml_backend__ml_global_data__TypeStr_15;
#line 745 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__AllocData_16;
#line 745 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Map0_17;
#line 754 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_27_27;
#line 754 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_28_28;
#line 754 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_29_29;
#line 754 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_30_30;
#line 754 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_31_31;
#line 754 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_32_32;
#line 754 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_33_33;
#line 754 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_34_34;
#line 754 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_35_35;
#line 754 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_36_36;
#line 754 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_37_37;
#line 754 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_38_38;
#line 754 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_39_39;
#line 757 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__AllocId0_18;
#line 755 "ml_global_data.m"
    MR_Box ml_backend__ml_global_data__conv0_AllocId0_18;

#line 749 "ml_global_data.m"
    if ((ml_backend__ml_global_data__MaybeConsId_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 751 "ml_global_data.m"
      ml_backend__ml_global_data__TypeStr_15 = (MR_String) "unknown";
#line 749 "ml_global_data.m"
    else
#line 747 "ml_global_data.m"
      {
#line 747 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__ConsId_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__MaybeConsId_9, (MR_Integer) 0)));

#line 748 "ml_global_data.m"
        {
#line 748 "ml_global_data.m"
          ml_backend__ml_global_data__TypeStr_15 = ml_backend__ml_global_data__cons_id_to_alloc_site_string_1_f_0(ml_backend__ml_global_data__ConsId_14);
        }
#line 747 "ml_global_data.m"
      }
#line 753 "ml_global_data.m"
    {
#line 753 "ml_global_data.m"
      ml_backend__ml_global_data__AllocData_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 753 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__AllocData_16, 0) = ((MR_Box) (ml_backend__ml_global_data__ProcLabel_8));
#line 753 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__AllocData_16, 1) = ((MR_Box) (ml_backend__ml_global_data__Context_11));
#line 753 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__AllocData_16, 2) = ((MR_Box) (ml_backend__ml_global_data__TypeStr_15));
#line 753 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__AllocData_16, 3) = ((MR_Box) (ml_backend__ml_global_data__Size_10));
#line 753 "ml_global_data.m"
    }
#line 754 "ml_global_data.m"
    ml_backend__ml_global_data__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 0)));
#line 754 "ml_global_data.m"
    ml_backend__ml_global_data__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 1)));
#line 754 "ml_global_data.m"
    ml_backend__ml_global_data__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 2)));
#line 754 "ml_global_data.m"
    ml_backend__ml_global_data__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 3)));
#line 754 "ml_global_data.m"
    ml_backend__ml_global_data__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 4)));
#line 754 "ml_global_data.m"
    ml_backend__ml_global_data__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 5)));
#line 754 "ml_global_data.m"
    ml_backend__ml_global_data__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 6)));
#line 754 "ml_global_data.m"
    ml_backend__ml_global_data__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 7)));
#line 754 "ml_global_data.m"
    ml_backend__ml_global_data__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 8)));
#line 754 "ml_global_data.m"
    ml_backend__ml_global_data__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 9)));
#line 754 "ml_global_data.m"
    ml_backend__ml_global_data__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 10)));
#line 754 "ml_global_data.m"
    ml_backend__ml_global_data__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 11)));
#line 754 "ml_global_data.m"
    ml_backend__ml_global_data__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 12)));
#line 754 "ml_global_data.m"
    ml_backend__ml_global_data__Map0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 13)));
#line 755 "ml_global_data.m"
    {
#line 755 "ml_global_data.m"
      ml_backend__ml_global_data__succeeded = mercury__bimap__search_3_p_1((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_alloc_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0, ml_backend__ml_global_data__Map0_17, &ml_backend__ml_global_data__conv0_AllocId0_18, ((MR_Box) (ml_backend__ml_global_data__AllocData_16)));
    }
#line 755 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 755 "ml_global_data.m"
      {
#line 755 "ml_global_data.m"
        ml_backend__ml_global_data__AllocId0_18 = ((MR_Word) ml_backend__ml_global_data__conv0_AllocId0_18);
#line 755 "ml_global_data.m"
        ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 755 "ml_global_data.m"
      }
#line 757 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 756 "ml_global_data.m"
      {
#line 756 "ml_global_data.m"
        *ml_backend__ml_global_data__AllocId_12 = ml_backend__ml_global_data__AllocId0_18;
#line 756 "ml_global_data.m"
        *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24 = ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23;
#line 756 "ml_global_data.m"
      }
#line 757 "ml_global_data.m"
    else
#line 758 "ml_global_data.m"
      {
#line 758 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__Counter0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 12)));
#line 758 "ml_global_data.m"
        MR_Integer ml_backend__ml_global_data__AllocIdNum_20;
#line 758 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__Counter_21;
#line 758 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__Map_22;
#line 758 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_53_53;
#line 758 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_54_54;
#line 758 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_55_55;
#line 758 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_56_56;
#line 758 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_57_57;
#line 758 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_58_58;
#line 758 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_59_59;
#line 758 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_60_60;
#line 758 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_61_61;
#line 758 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_62_62;
#line 758 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_63_63;
#line 758 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_64_64;
#line 758 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 0)));
#line 758 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 1)));
#line 758 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 2)));
#line 758 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 3)));
#line 758 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 4)));
#line 758 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 5)));
#line 758 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 6)));
#line 758 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 7)));
#line 758 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 8)));
#line 758 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 9)));
#line 758 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 10)));
#line 758 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 11)));
#line 758 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 13)));
#line 762 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_65_65;
#line 762 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_66_66;

#line 759 "ml_global_data.m"
        {
#line 759 "ml_global_data.m"
          mercury__counter__allocate_3_p_0(&ml_backend__ml_global_data__AllocIdNum_20, ml_backend__ml_global_data__Counter0_19, &ml_backend__ml_global_data__Counter_21);
        }
#line 760 "ml_global_data.m"
        *ml_backend__ml_global_data__AllocId_12 = (MR_Word) ml_backend__ml_global_data__AllocIdNum_20;
#line 761 "ml_global_data.m"
        {
#line 761 "ml_global_data.m"
          mercury__bimap__det_insert_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_alloc_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0, ((MR_Box) (*ml_backend__ml_global_data__AllocId_12)), ((MR_Box) (ml_backend__ml_global_data__AllocData_16)), ml_backend__ml_global_data__Map0_17, &ml_backend__ml_global_data__Map_22);
        }
#line 762 "ml_global_data.m"
        ml_backend__ml_global_data__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 0)));
#line 762 "ml_global_data.m"
        ml_backend__ml_global_data__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 1)));
#line 762 "ml_global_data.m"
        ml_backend__ml_global_data__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 2)));
#line 762 "ml_global_data.m"
        ml_backend__ml_global_data__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 3)));
#line 762 "ml_global_data.m"
        ml_backend__ml_global_data__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 4)));
#line 762 "ml_global_data.m"
        ml_backend__ml_global_data__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 5)));
#line 762 "ml_global_data.m"
        ml_backend__ml_global_data__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 6)));
#line 762 "ml_global_data.m"
        ml_backend__ml_global_data__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 7)));
#line 762 "ml_global_data.m"
        ml_backend__ml_global_data__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 8)));
#line 762 "ml_global_data.m"
        ml_backend__ml_global_data__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 9)));
#line 762 "ml_global_data.m"
        ml_backend__ml_global_data__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 10)));
#line 762 "ml_global_data.m"
        ml_backend__ml_global_data__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 11)));
#line 762 "ml_global_data.m"
        ml_backend__ml_global_data__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 12)));
#line 762 "ml_global_data.m"
        ml_backend__ml_global_data__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 13)));
#line 763 "ml_global_data.m"
        {
#line 763 "ml_global_data.m"
          MR_Word base;
#line 763 "ml_global_data.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 763 "ml_global_data.m"
          *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24 = base;
#line 763 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__V_53_53));
#line 763 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_54_54));
#line 763 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_55_55));
#line 763 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_56_56));
#line 763 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__V_57_57));
#line 763 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__V_58_58));
#line 763 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__V_59_59));
#line 763 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_60_60));
#line 763 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_61_61));
#line 763 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__V_62_62));
#line 763 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_63_63));
#line 763 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__V_64_64));
#line 763 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__Counter_21));
#line 763 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__Map_22));
#line 763 "ml_global_data.m"
        }
#line 758 "ml_global_data.m"
      }
#line 745 "ml_global_data.m"
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
#line 721 "ml_global_data.m"
  {
#line 721 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 721 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_78_78 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
#line 721 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_79_79;
#line 721 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_80_80;
#line 721 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__NumRows_13;
#line 721 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__CellGroupMap0_14;
#line 721 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__StartRowNum_16;
#line 721 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__NextRow_17;
#line 721 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__StructType_18;
#line 721 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Rows0_19;
#line 721 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Rows_20;
#line 721 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__CellGroupMap_21;
#line 721 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_24_24;
#line 721 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25;
#line 721 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_26_26;
#line 721 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_27_27;
#line 721 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_42_42;
#line 721 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_43_43;
#line 721 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_44_44;
#line 721 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_45_45;
#line 722 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_29_29;
#line 722 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_30_30;
#line 722 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_31_31;
#line 722 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_32_32;
#line 722 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_33_33;
#line 722 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_34_34;
#line 722 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_35_35;
#line 722 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_36_36;
#line 722 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_37_37;
#line 722 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_38_38;
#line 722 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_39_39;
#line 722 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_40_40;
#line 722 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_41_41;
#line 723 "ml_global_data.m"
    MR_Box ml_backend__ml_global_data__conv0_STATE_VARIABLE_CellGroup_24_24;
#line 736 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_59_59;
#line 736 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_60_60;
#line 736 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_61_61;
#line 736 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__V_62_62;
#line 736 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_63_63;
#line 739 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_64_64;
#line 739 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_65_65;
#line 739 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_66_66;
#line 739 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_67_67;
#line 739 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_68_68;
#line 739 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_69_69;
#line 739 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_70_70;
#line 739 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_71_71;
#line 739 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_72_72;
#line 739 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_73_73;
#line 739 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_74_74;
#line 739 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_76_76;
#line 739 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_77_77;
#line 739 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_75_75;

#line 721 "ml_global_data.m"
    {
#line 721 "ml_global_data.m"
      mercury__list__length_2_p_0(ml_backend__ml_global_data__TypeCtorInfo_78_78, ml_backend__ml_global_data__RowInitializers_9, &ml_backend__ml_global_data__NumRows_13);
    }
#line 722 "ml_global_data.m"
    ml_backend__ml_global_data__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 0)));
#line 722 "ml_global_data.m"
    ml_backend__ml_global_data__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 1)));
#line 722 "ml_global_data.m"
    ml_backend__ml_global_data__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 2)));
#line 722 "ml_global_data.m"
    ml_backend__ml_global_data__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 3)));
#line 722 "ml_global_data.m"
    ml_backend__ml_global_data__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 4)));
#line 722 "ml_global_data.m"
    ml_backend__ml_global_data__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 5)));
#line 722 "ml_global_data.m"
    ml_backend__ml_global_data__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 6)));
#line 722 "ml_global_data.m"
    ml_backend__ml_global_data__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 7)));
#line 722 "ml_global_data.m"
    ml_backend__ml_global_data__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 8)));
#line 722 "ml_global_data.m"
    ml_backend__ml_global_data__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 9)));
#line 722 "ml_global_data.m"
    ml_backend__ml_global_data__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 10)));
#line 722 "ml_global_data.m"
    ml_backend__ml_global_data__CellGroupMap0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 11)));
#line 722 "ml_global_data.m"
    ml_backend__ml_global_data__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 12)));
#line 722 "ml_global_data.m"
    ml_backend__ml_global_data__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 13)));
#line 7013 "ml_backend.ml_global_data.c"
    ml_backend__ml_global_data__TypeCtorInfo_79_79 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0;
#line 7015 "ml_backend.ml_global_data.c"
    ml_backend__ml_global_data__TypeCtorInfo_80_80 = (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0;
#line 723 "ml_global_data.m"
    {
#line 723 "ml_global_data.m"
      mercury__map__lookup_3_p_0(ml_backend__ml_global_data__TypeCtorInfo_79_79, ml_backend__ml_global_data__TypeCtorInfo_80_80, ml_backend__ml_global_data__CellGroupMap0_14, ((MR_Box) (ml_backend__ml_global_data__TypeNum_8)), &ml_backend__ml_global_data__conv0_STATE_VARIABLE_CellGroup_24_24);
    }
#line 723 "ml_global_data.m"
    ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_24_24 = ((MR_Word) ml_backend__ml_global_data__conv0_STATE_VARIABLE_CellGroup_24_24);
#line 725 "ml_global_data.m"
    ml_backend__ml_global_data__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_24_24, (MR_Integer) 0)));
#line 725 "ml_global_data.m"
    ml_backend__ml_global_data__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_24_24, (MR_Integer) 1)));
#line 725 "ml_global_data.m"
    ml_backend__ml_global_data__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_24_24, (MR_Integer) 2)));
#line 725 "ml_global_data.m"
    ml_backend__ml_global_data__StartRowNum_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_24_24, (MR_Integer) 3)));
#line 725 "ml_global_data.m"
    ml_backend__ml_global_data__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_24_24, (MR_Integer) 4)));
#line 727 "ml_global_data.m"
    ml_backend__ml_global_data__NextRow_17 = (ml_backend__ml_global_data__StartRowNum_16 + ml_backend__ml_global_data__NumRows_13);
#line 728 "ml_global_data.m"
    ml_backend__ml_global_data__StructType_18 = ml_backend__ml_global_data__V_42_42;
#line 728 "ml_global_data.m"
    ml_backend__ml_global_data__Rows0_19 = ml_backend__ml_global_data__V_45_45;
#line 728 "ml_global_data.m"
    {
#line 728 "ml_global_data.m"
      ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 728 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25, 0) = ((MR_Box) (ml_backend__ml_global_data__StructType_18));
#line 728 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25, 1) = ((MR_Box) (ml_backend__ml_global_data__V_43_43));
#line 728 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25, 2) = ((MR_Box) (ml_backend__ml_global_data__V_44_44));
#line 728 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25, 3) = ((MR_Box) (ml_backend__ml_global_data__NextRow_17));
#line 728 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25, 4) = ((MR_Box) (ml_backend__ml_global_data__Rows0_19));
#line 728 "ml_global_data.m"
    }
#line 731 "ml_global_data.m"
    {
#line 731 "ml_global_data.m"
      MR_Word base;
#line 731 "ml_global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 731 "ml_global_data.m"
      *ml_backend__ml_global_data__Common_10 = base;
#line 731 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__MLDS_ModuleName_7));
#line 731 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__StructType_18));
#line 731 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__TypeNum_8));
#line 731 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__StartRowNum_16));
#line 731 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__NumRows_13));
#line 731 "ml_global_data.m"
    }
#line 735 "ml_global_data.m"
    {
#line 735 "ml_global_data.m"
      ml_backend__ml_global_data__V_26_26 = mercury__cord__from_list_1_f_0(ml_backend__ml_global_data__TypeCtorInfo_78_78, ml_backend__ml_global_data__RowInitializers_9);
    }
#line 735 "ml_global_data.m"
    {
#line 735 "ml_global_data.m"
      ml_backend__ml_global_data__Rows_20 = mercury__cord__f_43_43_2_f_0(ml_backend__ml_global_data__TypeCtorInfo_78_78, ml_backend__ml_global_data__Rows0_19, ml_backend__ml_global_data__V_26_26);
    }
#line 736 "ml_global_data.m"
    ml_backend__ml_global_data__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25, (MR_Integer) 0)));
#line 736 "ml_global_data.m"
    ml_backend__ml_global_data__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25, (MR_Integer) 1)));
#line 736 "ml_global_data.m"
    ml_backend__ml_global_data__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25, (MR_Integer) 2)));
#line 736 "ml_global_data.m"
    ml_backend__ml_global_data__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25, (MR_Integer) 3)));
#line 736 "ml_global_data.m"
    ml_backend__ml_global_data__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_25_25, (MR_Integer) 4)));
#line 736 "ml_global_data.m"
    {
#line 736 "ml_global_data.m"
      ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 736 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_27_27, 0) = ((MR_Box) (ml_backend__ml_global_data__V_59_59));
#line 736 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_27_27, 1) = ((MR_Box) (ml_backend__ml_global_data__V_60_60));
#line 736 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_27_27, 2) = ((MR_Box) (ml_backend__ml_global_data__V_61_61));
#line 736 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_27_27, 3) = ((MR_Box) (ml_backend__ml_global_data__V_62_62));
#line 736 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_27_27, 4) = ((MR_Box) (ml_backend__ml_global_data__Rows_20));
#line 736 "ml_global_data.m"
    }
#line 738 "ml_global_data.m"
    {
#line 738 "ml_global_data.m"
      mercury__map__det_update_4_p_0(ml_backend__ml_global_data__TypeCtorInfo_79_79, ml_backend__ml_global_data__TypeCtorInfo_80_80, ((MR_Box) (ml_backend__ml_global_data__TypeNum_8)), ((MR_Box) (ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_27_27)), ml_backend__ml_global_data__CellGroupMap0_14, &ml_backend__ml_global_data__CellGroupMap_21);
    }
#line 739 "ml_global_data.m"
    ml_backend__ml_global_data__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 0)));
#line 739 "ml_global_data.m"
    ml_backend__ml_global_data__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 1)));
#line 739 "ml_global_data.m"
    ml_backend__ml_global_data__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 2)));
#line 739 "ml_global_data.m"
    ml_backend__ml_global_data__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 3)));
#line 739 "ml_global_data.m"
    ml_backend__ml_global_data__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 4)));
#line 739 "ml_global_data.m"
    ml_backend__ml_global_data__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 5)));
#line 739 "ml_global_data.m"
    ml_backend__ml_global_data__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 6)));
#line 739 "ml_global_data.m"
    ml_backend__ml_global_data__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 7)));
#line 739 "ml_global_data.m"
    ml_backend__ml_global_data__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 8)));
#line 739 "ml_global_data.m"
    ml_backend__ml_global_data__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 9)));
#line 739 "ml_global_data.m"
    ml_backend__ml_global_data__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 10)));
#line 739 "ml_global_data.m"
    ml_backend__ml_global_data__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 11)));
#line 739 "ml_global_data.m"
    ml_backend__ml_global_data__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 12)));
#line 739 "ml_global_data.m"
    ml_backend__ml_global_data__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22, (MR_Integer) 13)));
#line 739 "ml_global_data.m"
    {
#line 739 "ml_global_data.m"
      MR_Word base;
#line 739 "ml_global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 739 "ml_global_data.m"
      *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_23 = base;
#line 739 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__V_64_64));
#line 739 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_65_65));
#line 739 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_66_66));
#line 739 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_67_67));
#line 739 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__V_68_68));
#line 739 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__V_69_69));
#line 739 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__V_70_70));
#line 739 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_71_71));
#line 739 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_72_72));
#line 739 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__V_73_73));
#line 739 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_74_74));
#line 739 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__CellGroupMap_21));
#line 739 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__V_76_76));
#line 739 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__V_77_77));
#line 739 "ml_global_data.m"
    }
#line 721 "ml_global_data.m"
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
#line 618 "ml_global_data.m"
  {
#line 618 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 618 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeNumMap0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 10)));
#line 618 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 7)));
#line 618 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 11)));
#line 619 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 0)));
#line 619 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 1)));
#line 619 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 2)));
#line 619 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 3)));
#line 619 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 4)));
#line 619 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 5)));
#line 619 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 6)));
#line 619 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 8)));
#line 619 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 9)));
#line 619 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 12)));
#line 619 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 13)));
#line 626 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__OldTypeNum_19;
#line 620 "ml_global_data.m"
    MR_Box ml_backend__ml_global_data__conv0_OldTypeNum_19;

#line 620 "ml_global_data.m"
    {
#line 620 "ml_global_data.m"
      ml_backend__ml_global_data__succeeded = mercury__map__search_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[0], (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0, ml_backend__ml_global_data__TypeNumMap0_18, ((MR_Box) (ml_backend__ml_global_data__ArgTypes_13)), &ml_backend__ml_global_data__conv0_OldTypeNum_19);
    }
#line 620 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 620 "ml_global_data.m"
      {
#line 620 "ml_global_data.m"
        ml_backend__ml_global_data__OldTypeNum_19 = ((MR_Word) ml_backend__ml_global_data__conv0_OldTypeNum_19);
#line 620 "ml_global_data.m"
        ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 620 "ml_global_data.m"
      }
#line 626 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 621 "ml_global_data.m"
      {
#line 621 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__CellGroup_21;
#line 623 "ml_global_data.m"
        MR_Box ml_backend__ml_global_data__conv1_CellGroup_21;
#line 624 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data___TypeDefn_22;
#line 624 "ml_global_data.m"
        MR_Integer ml_backend__ml_global_data__V_23_23;
#line 624 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_24_24;

#line 621 "ml_global_data.m"
        *ml_backend__ml_global_data__TypeNum_14 = ml_backend__ml_global_data__OldTypeNum_19;
#line 623 "ml_global_data.m"
        {
#line 623 "ml_global_data.m"
          mercury__map__lookup_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0, ml_backend__ml_global_data__V_97_97, ((MR_Box) (*ml_backend__ml_global_data__TypeNum_14)), &ml_backend__ml_global_data__conv1_CellGroup_21);
        }
#line 623 "ml_global_data.m"
        ml_backend__ml_global_data__CellGroup_21 = ((MR_Word) ml_backend__ml_global_data__conv1_CellGroup_21);
#line 624 "ml_global_data.m"
        *ml_backend__ml_global_data__StructType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_21, (MR_Integer) 0)));
#line 624 "ml_global_data.m"
        ml_backend__ml_global_data___TypeDefn_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_21, (MR_Integer) 1)));
#line 624 "ml_global_data.m"
        *ml_backend__ml_global_data__FieldIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_21, (MR_Integer) 2)));
#line 624 "ml_global_data.m"
        ml_backend__ml_global_data__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_21, (MR_Integer) 3)));
#line 624 "ml_global_data.m"
        ml_backend__ml_global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_21, (MR_Integer) 4)));
#line 621 "ml_global_data.m"
        *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47 = ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46;
#line 621 "ml_global_data.m"
      }
#line 626 "ml_global_data.m"
    else
#line 627 "ml_global_data.m"
      {
#line 627 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeCtorInfo_186_186;
#line 627 "ml_global_data.m"
        MR_Integer ml_backend__ml_global_data__TypeRawNum_26;
#line 627 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeNumCounter_27;
#line 627 "ml_global_data.m"
        MR_String ml_backend__ml_global_data__TypeRawNumStr_28;
#line 627 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeNumMap_29;
#line 627 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__FieldFlags_30;
#line 627 "ml_global_data.m"
        MR_String ml_backend__ml_global_data__FieldNamePrefix_31;
#line 627 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__FieldNames_32;
#line 627 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__FieldDefns_33;
#line 627 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__ClassKind_34;
#line 627 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__CtorDefns_35;
#line 627 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__ClassDefn_37;
#line 627 "ml_global_data.m"
        MR_String ml_backend__ml_global_data__StructTypeName_38;
#line 627 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__StructTypeEntityName_39;
#line 627 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__StructTypeEntityDefn_40;
#line 627 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__StructTypeFlags_41;
#line 627 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__StructTypeDefn_42;
#line 627 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__QualStructTypeName_43;
#line 627 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__MLDS_ClassModuleName_44;
#line 627 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__CellGroupMap0_45;
#line 627 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48;
#line 627 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49;
#line 627 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_83_83;
#line 627 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__CellGroupMap_85;
#line 627 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__CellGroup_86;
#line 631 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_126_126;
#line 631 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_127_127;
#line 631 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_128_128;
#line 631 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_129_129;
#line 631 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_130_130;
#line 631 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_131_131;
#line 631 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_132_132;
#line 631 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_134_134;
#line 631 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_135_135;
#line 631 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_136_136;
#line 631 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_137_137;
#line 631 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_138_138;
#line 631 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_139_139;
#line 631 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_133_133;
#line 634 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_140_140;
#line 634 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_141_141;
#line 634 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_142_142;
#line 634 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_143_143;
#line 634 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_144_144;
#line 634 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_145_145;
#line 634 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_146_146;
#line 634 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_147_147;
#line 634 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_148_148;
#line 634 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_149_149;
#line 634 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_151_151;
#line 634 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_152_152;
#line 634 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_153_153;
#line 634 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_150_150;
#line 688 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_154_154;
#line 688 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_155_155;
#line 688 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_156_156;
#line 688 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_157_157;
#line 688 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_158_158;
#line 688 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_159_159;
#line 688 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_160_160;
#line 688 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_161_161;
#line 688 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_162_162;
#line 688 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_163_163;
#line 688 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_164_164;
#line 688 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_165_165;
#line 688 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_166_166;
#line 690 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_167_167;
#line 690 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_168_168;
#line 690 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_169_169;
#line 690 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_170_170;
#line 690 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_171_171;
#line 690 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_172_172;
#line 690 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_173_173;
#line 690 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_174_174;
#line 690 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_175_175;
#line 690 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_176_176;
#line 690 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_177_177;
#line 690 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_179_179;
#line 690 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_180_180;
#line 690 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_178_178;

#line 628 "ml_global_data.m"
        {
#line 628 "ml_global_data.m"
          mercury__counter__allocate_3_p_0(&ml_backend__ml_global_data__TypeRawNum_26, ml_backend__ml_global_data__V_94_94, &ml_backend__ml_global_data__TypeNumCounter_27);
        }
#line 629 "ml_global_data.m"
        {
#line 629 "ml_global_data.m"
          ml_backend__ml_global_data__TypeRawNumStr_28 = mercury__string__int_to_string_1_f_0(ml_backend__ml_global_data__TypeRawNum_26);
        }
#line 630 "ml_global_data.m"
        *ml_backend__ml_global_data__TypeNum_14 = (MR_Word) ml_backend__ml_global_data__TypeRawNum_26;
#line 631 "ml_global_data.m"
        ml_backend__ml_global_data__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 0)));
#line 631 "ml_global_data.m"
        ml_backend__ml_global_data__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 1)));
#line 631 "ml_global_data.m"
        ml_backend__ml_global_data__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 2)));
#line 631 "ml_global_data.m"
        ml_backend__ml_global_data__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 3)));
#line 631 "ml_global_data.m"
        ml_backend__ml_global_data__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 4)));
#line 631 "ml_global_data.m"
        ml_backend__ml_global_data__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 5)));
#line 631 "ml_global_data.m"
        ml_backend__ml_global_data__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 6)));
#line 631 "ml_global_data.m"
        ml_backend__ml_global_data__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 7)));
#line 631 "ml_global_data.m"
        ml_backend__ml_global_data__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 8)));
#line 631 "ml_global_data.m"
        ml_backend__ml_global_data__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 9)));
#line 631 "ml_global_data.m"
        ml_backend__ml_global_data__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 10)));
#line 631 "ml_global_data.m"
        ml_backend__ml_global_data__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 11)));
#line 631 "ml_global_data.m"
        ml_backend__ml_global_data__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 12)));
#line 631 "ml_global_data.m"
        ml_backend__ml_global_data__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 13)));
#line 631 "ml_global_data.m"
        {
#line 631 "ml_global_data.m"
          ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 631 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 0) = ((MR_Box) (ml_backend__ml_global_data__V_126_126));
#line 631 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 1) = ((MR_Box) (ml_backend__ml_global_data__V_127_127));
#line 631 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 2) = ((MR_Box) (ml_backend__ml_global_data__V_128_128));
#line 631 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 3) = ((MR_Box) (ml_backend__ml_global_data__V_129_129));
#line 631 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 4) = ((MR_Box) (ml_backend__ml_global_data__V_130_130));
#line 631 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 5) = ((MR_Box) (ml_backend__ml_global_data__V_131_131));
#line 631 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 6) = ((MR_Box) (ml_backend__ml_global_data__V_132_132));
#line 631 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 7) = ((MR_Box) (ml_backend__ml_global_data__TypeNumCounter_27));
#line 631 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 8) = ((MR_Box) (ml_backend__ml_global_data__V_134_134));
#line 631 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 9) = ((MR_Box) (ml_backend__ml_global_data__V_135_135));
#line 631 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 10) = ((MR_Box) (ml_backend__ml_global_data__V_136_136));
#line 631 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 11) = ((MR_Box) (ml_backend__ml_global_data__V_137_137));
#line 631 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 12) = ((MR_Box) (ml_backend__ml_global_data__V_138_138));
#line 631 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 13) = ((MR_Box) (ml_backend__ml_global_data__V_139_139));
#line 631 "ml_global_data.m"
        }
#line 7540 "ml_backend.ml_global_data.c"
        ml_backend__ml_global_data__TypeCtorInfo_186_186 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0;
#line 633 "ml_global_data.m"
        {
#line 633 "ml_global_data.m"
          mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[0], ml_backend__ml_global_data__TypeCtorInfo_186_186, ((MR_Box) (ml_backend__ml_global_data__ArgTypes_13)), ((MR_Box) (*ml_backend__ml_global_data__TypeNum_14)), ml_backend__ml_global_data__TypeNumMap0_18, &ml_backend__ml_global_data__TypeNumMap_29);
        }
#line 634 "ml_global_data.m"
        ml_backend__ml_global_data__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 0)));
#line 634 "ml_global_data.m"
        ml_backend__ml_global_data__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 1)));
#line 634 "ml_global_data.m"
        ml_backend__ml_global_data__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 2)));
#line 634 "ml_global_data.m"
        ml_backend__ml_global_data__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 3)));
#line 634 "ml_global_data.m"
        ml_backend__ml_global_data__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 4)));
#line 634 "ml_global_data.m"
        ml_backend__ml_global_data__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 5)));
#line 634 "ml_global_data.m"
        ml_backend__ml_global_data__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 6)));
#line 634 "ml_global_data.m"
        ml_backend__ml_global_data__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 7)));
#line 634 "ml_global_data.m"
        ml_backend__ml_global_data__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 8)));
#line 634 "ml_global_data.m"
        ml_backend__ml_global_data__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 9)));
#line 634 "ml_global_data.m"
        ml_backend__ml_global_data__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 10)));
#line 634 "ml_global_data.m"
        ml_backend__ml_global_data__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 11)));
#line 634 "ml_global_data.m"
        ml_backend__ml_global_data__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 12)));
#line 634 "ml_global_data.m"
        ml_backend__ml_global_data__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 13)));
#line 634 "ml_global_data.m"
        {
#line 634 "ml_global_data.m"
          ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 634 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 0) = ((MR_Box) (ml_backend__ml_global_data__V_140_140));
#line 634 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 1) = ((MR_Box) (ml_backend__ml_global_data__V_141_141));
#line 634 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 2) = ((MR_Box) (ml_backend__ml_global_data__V_142_142));
#line 634 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 3) = ((MR_Box) (ml_backend__ml_global_data__V_143_143));
#line 634 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 4) = ((MR_Box) (ml_backend__ml_global_data__V_144_144));
#line 634 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 5) = ((MR_Box) (ml_backend__ml_global_data__V_145_145));
#line 634 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 6) = ((MR_Box) (ml_backend__ml_global_data__V_146_146));
#line 634 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 7) = ((MR_Box) (ml_backend__ml_global_data__V_147_147));
#line 634 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 8) = ((MR_Box) (ml_backend__ml_global_data__V_148_148));
#line 634 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 9) = ((MR_Box) (ml_backend__ml_global_data__V_149_149));
#line 634 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 10) = ((MR_Box) (ml_backend__ml_global_data__TypeNumMap_29));
#line 634 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 11) = ((MR_Box) (ml_backend__ml_global_data__V_151_151));
#line 634 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 12) = ((MR_Box) (ml_backend__ml_global_data__V_152_152));
#line 634 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 13) = ((MR_Box) (ml_backend__ml_global_data__V_153_153));
#line 634 "ml_global_data.m"
        }
#line 636 "ml_global_data.m"
        {
#line 636 "ml_global_data.m"
          ml_backend__ml_global_data__FieldFlags_30 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0);
        }
#line 638 "ml_global_data.m"
        {
#line 638 "ml_global_data.m"
          ml_backend__ml_global_data__FieldNamePrefix_31 = mercury__string__f_43_43_2_f_0((MR_String) "vct_", ml_backend__ml_global_data__TypeRawNumStr_28);
        }
#line 639 "ml_global_data.m"
        {
#line 639 "ml_global_data.m"
          ml_backend__ml_global_data__ml_gen_vector_cell_field_types_7_p_0(ml_backend__ml_global_data__MLDS_Context_11, ml_backend__ml_global_data__FieldFlags_30, ml_backend__ml_global_data__FieldNamePrefix_31, (MR_Integer) 0, ml_backend__ml_global_data__ArgTypes_13, &ml_backend__ml_global_data__FieldNames_32, &ml_backend__ml_global_data__FieldDefns_33);
        }
#line 667 "ml_global_data.m"
        {
#line 667 "ml_global_data.m"
          ml_backend__ml_global_data__StructTypeName_38 = mercury__string__f_43_43_2_f_0((MR_String) "vector_common_type_", ml_backend__ml_global_data__TypeRawNumStr_28);
        }
#line 668 "ml_global_data.m"
        {
#line 668 "ml_global_data.m"
          ml_backend__ml_global_data__StructTypeEntityName_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 668 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__StructTypeEntityName_39, 0) = ((MR_Box) (ml_backend__ml_global_data__StructTypeName_38));
#line 668 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__StructTypeEntityName_39, 1) = ((MR_Box) ((MR_Integer) 0));
#line 668 "ml_global_data.m"
        }
#line 672 "ml_global_data.m"
        {
#line 672 "ml_global_data.m"
          ml_backend__ml_global_data__StructTypeFlags_41 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 2, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0);
        }
#line 677 "ml_global_data.m"
        {
#line 677 "ml_global_data.m"
          ml_backend__ml_global_data__QualStructTypeName_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 677 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__QualStructTypeName_43, 0) = ((MR_Box) (ml_backend__ml_global_data__MLDS_ModuleName_10));
#line 677 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__QualStructTypeName_43, 1) = ((MR_Box) ((MR_Integer) 0));
#line 677 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__QualStructTypeName_43, 2) = ((MR_Box) (ml_backend__ml_global_data__StructTypeName_38));
#line 677 "ml_global_data.m"
        }
#line 678 "ml_global_data.m"
        {
#line 678 "ml_global_data.m"
          MR_Word base;
#line 678 "ml_global_data.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 678 "ml_global_data.m"
          *ml_backend__ml_global_data__StructType_15 = base;
#line 678 "ml_global_data.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 678 "ml_global_data.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_global_data__QualStructTypeName_43));
#line 678 "ml_global_data.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) ((MR_Integer) 0));
#line 678 "ml_global_data.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) ((MR_Integer) 3));
#line 678 "ml_global_data.m"
        }
#line 646 "ml_global_data.m"
#line 646 "ml_global_data.m"
        switch (ml_backend__ml_global_data__Target_12) {
#line 646 "ml_global_data.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 646 "ml_global_data.m"
          case (MR_Integer) 0:
#line 643 "ml_global_data.m"
            {
#line 644 "ml_global_data.m"
              ml_backend__ml_global_data__ClassKind_34 = (MR_Integer) 3;
#line 645 "ml_global_data.m"
              ml_backend__ml_global_data__CtorDefns_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 643 "ml_global_data.m"
            }
#line 646 "ml_global_data.m"
            break;
#line 646 "ml_global_data.m"
          case (MR_Integer) 2:
#line 653 "ml_global_data.m"
            {
#line 653 "ml_global_data.m"
              MR_Word ml_backend__ml_global_data__CtorDefn_36;

#line 652 "ml_global_data.m"
              ml_backend__ml_global_data__ClassKind_34 = (MR_Integer) 3;
#line 654 "ml_global_data.m"
              {
#line 654 "ml_global_data.m"
                ml_backend__ml_global_data__CtorDefn_36 = ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0(ml_backend__ml_global_data__Target_12, *ml_backend__ml_global_data__StructType_15, *ml_backend__ml_global_data__StructType_15, ml_backend__ml_global_data__MLDS_ModuleName_10, *ml_backend__ml_global_data__StructType_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_global_data__FieldDefns_33, ml_backend__ml_global_data__MLDS_Context_11);
              }
#line 657 "ml_global_data.m"
              {
#line 657 "ml_global_data.m"
                ml_backend__ml_global_data__CtorDefns_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 657 "ml_global_data.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__CtorDefns_35, 0) = ((MR_Box) (ml_backend__ml_global_data__CtorDefn_36));
#line 657 "ml_global_data.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__CtorDefns_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 657 "ml_global_data.m"
              }
#line 653 "ml_global_data.m"
            }
#line 646 "ml_global_data.m"
            break;
#line 646 "ml_global_data.m"
          case (MR_Integer) 4:
#line 646 "ml_global_data.m"
          case (MR_Integer) 1:
#line 661 "ml_global_data.m"
            {
#line 662 "ml_global_data.m"
              {
#line 662 "ml_global_data.m"
                mercury__require__unexpected_3_p_0((MR_String) "ml_backend.ml_global_data", (MR_String) "predicate \140ml_backend.ml_global_data.ml_gen_static_vector_type\'/9", (MR_String) "unsupported target language");
#line 662 "ml_global_data.m"
                return;
              }
#line 661 "ml_global_data.m"
            }
#line 646 "ml_global_data.m"
            break;
#line 646 "ml_global_data.m"
          case (MR_Integer) 3:
#line 653 "ml_global_data.m"
            {
#line 653 "ml_global_data.m"
              MR_Word ml_backend__ml_global_data__CtorDefn_189;

#line 649 "ml_global_data.m"
              ml_backend__ml_global_data__ClassKind_34 = (MR_Integer) 0;
#line 654 "ml_global_data.m"
              {
#line 654 "ml_global_data.m"
                ml_backend__ml_global_data__CtorDefn_189 = ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0(ml_backend__ml_global_data__Target_12, *ml_backend__ml_global_data__StructType_15, *ml_backend__ml_global_data__StructType_15, ml_backend__ml_global_data__MLDS_ModuleName_10, *ml_backend__ml_global_data__StructType_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_global_data__FieldDefns_33, ml_backend__ml_global_data__MLDS_Context_11);
              }
#line 657 "ml_global_data.m"
              {
#line 657 "ml_global_data.m"
                ml_backend__ml_global_data__CtorDefns_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 657 "ml_global_data.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__CtorDefns_35, 0) = ((MR_Box) (ml_backend__ml_global_data__CtorDefn_189));
#line 657 "ml_global_data.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__CtorDefns_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 657 "ml_global_data.m"
              }
#line 653 "ml_global_data.m"
            }
#line 646 "ml_global_data.m"
            break;
#line 646 "ml_global_data.m"
        }
#line 665 "ml_global_data.m"
        {
#line 665 "ml_global_data.m"
          ml_backend__ml_global_data__ClassDefn_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 665 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__ClassDefn_37, 0) = ((MR_Box) (ml_backend__ml_global_data__ClassKind_34));
#line 665 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__ClassDefn_37, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 665 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__ClassDefn_37, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 665 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__ClassDefn_37, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 665 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__ClassDefn_37, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 665 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__ClassDefn_37, 5) = ((MR_Box) (ml_backend__ml_global_data__CtorDefns_35));
#line 665 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__ClassDefn_37, 6) = ((MR_Box) (ml_backend__ml_global_data__FieldDefns_33));
#line 665 "ml_global_data.m"
        }
#line 669 "ml_global_data.m"
        ml_backend__ml_global_data__StructTypeEntityDefn_40 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_global_data__ClassDefn_37);
#line 674 "ml_global_data.m"
        {
#line 674 "ml_global_data.m"
          ml_backend__ml_global_data__StructTypeDefn_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 674 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__StructTypeDefn_42, 0) = ((MR_Box) (ml_backend__ml_global_data__StructTypeEntityName_39));
#line 674 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__StructTypeDefn_42, 1) = ((MR_Box) (ml_backend__ml_global_data__MLDS_Context_11));
#line 674 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__StructTypeDefn_42, 2) = ((MR_Box) (ml_backend__ml_global_data__StructTypeFlags_41));
#line 674 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__StructTypeDefn_42, 3) = ((MR_Box) (ml_backend__ml_global_data__StructTypeEntityDefn_40));
#line 674 "ml_global_data.m"
        }
#line 680 "ml_global_data.m"
        {
#line 680 "ml_global_data.m"
          ml_backend__ml_global_data__MLDS_ClassModuleName_44 = ml_backend__mlds__mlds_append_class_qualifier_5_f_0(ml_backend__ml_global_data__Target_12, ml_backend__ml_global_data__MLDS_ModuleName_10, (MR_Integer) 0, ml_backend__ml_global_data__StructTypeName_38, (MR_Integer) 0);
        }
#line 682 "ml_global_data.m"
        {
#line 682 "ml_global_data.m"
          ml_backend__ml_global_data__make_named_fields_4_p_0(ml_backend__ml_global_data__MLDS_ClassModuleName_44, *ml_backend__ml_global_data__StructType_15, ml_backend__ml_global_data__FieldNames_32, ml_backend__ml_global_data__FieldIds_16);
        }
#line 686 "ml_global_data.m"
        {
#line 686 "ml_global_data.m"
          ml_backend__ml_global_data__V_83_83 = mercury__cord__empty_0_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0);
        }
#line 685 "ml_global_data.m"
        {
#line 685 "ml_global_data.m"
          ml_backend__ml_global_data__CellGroup_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 685 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_86, 0) = ((MR_Box) (*ml_backend__ml_global_data__StructType_15));
#line 685 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_86, 1) = ((MR_Box) (ml_backend__ml_global_data__StructTypeDefn_42));
#line 685 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_86, 2) = ((MR_Box) (*ml_backend__ml_global_data__FieldIds_16));
#line 685 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_86, 3) = ((MR_Box) ((MR_Integer) 0));
#line 685 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_86, 4) = ((MR_Box) (ml_backend__ml_global_data__V_83_83));
#line 685 "ml_global_data.m"
        }
#line 688 "ml_global_data.m"
        ml_backend__ml_global_data__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 0)));
#line 688 "ml_global_data.m"
        ml_backend__ml_global_data__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 1)));
#line 688 "ml_global_data.m"
        ml_backend__ml_global_data__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 2)));
#line 688 "ml_global_data.m"
        ml_backend__ml_global_data__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 3)));
#line 688 "ml_global_data.m"
        ml_backend__ml_global_data__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 4)));
#line 688 "ml_global_data.m"
        ml_backend__ml_global_data__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 5)));
#line 688 "ml_global_data.m"
        ml_backend__ml_global_data__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 6)));
#line 688 "ml_global_data.m"
        ml_backend__ml_global_data__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 7)));
#line 688 "ml_global_data.m"
        ml_backend__ml_global_data__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 8)));
#line 688 "ml_global_data.m"
        ml_backend__ml_global_data__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 9)));
#line 688 "ml_global_data.m"
        ml_backend__ml_global_data__V_164_164 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 10)));
#line 688 "ml_global_data.m"
        ml_backend__ml_global_data__CellGroupMap0_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 11)));
#line 688 "ml_global_data.m"
        ml_backend__ml_global_data__V_165_165 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 12)));
#line 688 "ml_global_data.m"
        ml_backend__ml_global_data__V_166_166 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 13)));
#line 689 "ml_global_data.m"
        {
#line 689 "ml_global_data.m"
          mercury__map__det_insert_4_p_0(ml_backend__ml_global_data__TypeCtorInfo_186_186, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0, ((MR_Box) (*ml_backend__ml_global_data__TypeNum_14)), ((MR_Box) (ml_backend__ml_global_data__CellGroup_86)), ml_backend__ml_global_data__CellGroupMap0_45, &ml_backend__ml_global_data__CellGroupMap_85);
        }
#line 690 "ml_global_data.m"
        ml_backend__ml_global_data__V_167_167 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 0)));
#line 690 "ml_global_data.m"
        ml_backend__ml_global_data__V_168_168 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 1)));
#line 690 "ml_global_data.m"
        ml_backend__ml_global_data__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 2)));
#line 690 "ml_global_data.m"
        ml_backend__ml_global_data__V_170_170 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 3)));
#line 690 "ml_global_data.m"
        ml_backend__ml_global_data__V_171_171 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 4)));
#line 690 "ml_global_data.m"
        ml_backend__ml_global_data__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 5)));
#line 690 "ml_global_data.m"
        ml_backend__ml_global_data__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 6)));
#line 690 "ml_global_data.m"
        ml_backend__ml_global_data__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 7)));
#line 690 "ml_global_data.m"
        ml_backend__ml_global_data__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 8)));
#line 690 "ml_global_data.m"
        ml_backend__ml_global_data__V_176_176 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 9)));
#line 690 "ml_global_data.m"
        ml_backend__ml_global_data__V_177_177 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 10)));
#line 690 "ml_global_data.m"
        ml_backend__ml_global_data__V_178_178 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 11)));
#line 690 "ml_global_data.m"
        ml_backend__ml_global_data__V_179_179 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 12)));
#line 690 "ml_global_data.m"
        ml_backend__ml_global_data__V_180_180 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, (MR_Integer) 13)));
#line 690 "ml_global_data.m"
        {
#line 690 "ml_global_data.m"
          MR_Word base;
#line 690 "ml_global_data.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 690 "ml_global_data.m"
          *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47 = base;
#line 690 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__V_167_167));
#line 690 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_168_168));
#line 690 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_169_169));
#line 690 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_170_170));
#line 690 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__V_171_171));
#line 690 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__V_172_172));
#line 690 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__V_173_173));
#line 690 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_174_174));
#line 690 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_175_175));
#line 690 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__V_176_176));
#line 690 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_177_177));
#line 690 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__CellGroupMap_85));
#line 690 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__V_179_179));
#line 690 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__V_180_180));
#line 690 "ml_global_data.m"
        }
#line 627 "ml_global_data.m"
      }
#line 618 "ml_global_data.m"
  }
#line 190 "ml_global_data.m"
}

#line 501 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_gen_static_scalar_const_addr_8_p_0_1(
#line 501 "ml_global_data.m"
  MR_Box ml_backend__ml_global_data__closure_arg,
#line 501 "ml_global_data.m"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 501 "ml_global_data.m"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_2,
#line 501 "ml_global_data.m"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_3)
#line 501 "ml_global_data.m"
{
#line 501 "ml_global_data.m"
  {
#line 501 "ml_global_data.m"
    MR_Box ml_backend__ml_global_data__closure = ml_backend__ml_global_data__closure_arg;
#line 501 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__conv1_Init_5;
#line 501 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__conv0_Type_6;

#line 501 "ml_global_data.m"
    {
#line 501 "ml_global_data.m"
      ml_backend__ml_global_data__ml_specialize_generic_array_init_3_p_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), &ml_backend__ml_global_data__conv1_Init_5, &ml_backend__ml_global_data__conv0_Type_6);
    }
#line 501 "ml_global_data.m"
    *ml_backend__ml_global_data__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_global_data__conv1_Init_5));
#line 501 "ml_global_data.m"
    *ml_backend__ml_global_data__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_global_data__conv0_Type_6));
#line 501 "ml_global_data.m"
  }
#line 501 "ml_global_data.m"
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
#line 391 "ml_global_data.m"
  {
#line 391 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_global_data__ConstType0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType0_11, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 391 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__ConstType_16;
#line 391 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Initializer_17;
#line 391 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__UseCommonCells_18;
#line 506 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Inits_49;
#line 506 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Types_50;
#line 499 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_18_57;
#line 499 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_19_58;
#line 499 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Inits0_48;
#line 499 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_51_51;
#line 499 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_52_52;
#line 499 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_53_53;
#line 394 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_31_31;
#line 394 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_32_32;
#line 394 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_33_33;
#line 394 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_34_34;
#line 394 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_35_35;
#line 394 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_36_36;
#line 394 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_37_37;
#line 394 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_38_38;
#line 394 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_39_39;
#line 394 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_40_40;
#line 394 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_41_41;
#line 394 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_42_42;
#line 394 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_43_43;

#line 499 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 499 "ml_global_data.m"
      {
#line 499 "ml_global_data.m"
        ml_backend__ml_global_data__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType0_11, (MR_Integer) 1)));
#line 499 "ml_global_data.m"
        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_51_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 499 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 499 "ml_global_data.m"
          {
#line 500 "ml_global_data.m"
            ml_backend__ml_global_data__succeeded = ((MR_tag((MR_Word) ml_backend__ml_global_data__Initializer0_12)) == (MR_mktag((MR_Integer) 3)));
#line 500 "ml_global_data.m"
            if (ml_backend__ml_global_data__succeeded)
#line 500 "ml_global_data.m"
              {
#line 500 "ml_global_data.m"
                ml_backend__ml_global_data__Inits0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__Initializer0_12, (MR_Integer) 0)));
#line 501 "ml_global_data.m"
                ml_backend__ml_global_data__V_52_52 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[8];
#line 8071 "ml_backend.ml_global_data.c"
                ml_backend__ml_global_data__TypeCtorInfo_18_57 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
#line 8073 "ml_backend.ml_global_data.c"
                ml_backend__ml_global_data__TypeCtorInfo_19_58 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0;
#line 501 "ml_global_data.m"
                {
#line 501 "ml_global_data.m"
                  mercury__list__map2_4_p_0(ml_backend__ml_global_data__TypeCtorInfo_18_57, ml_backend__ml_global_data__TypeCtorInfo_18_57, ml_backend__ml_global_data__TypeCtorInfo_19_58, ml_backend__ml_global_data__V_52_52, ml_backend__ml_global_data__Inits0_48, &ml_backend__ml_global_data__Inits_49, &ml_backend__ml_global_data__Types_50);
                }
#line 502 "ml_global_data.m"
                ml_backend__ml_global_data__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 502 "ml_global_data.m"
                {
#line 502 "ml_global_data.m"
                  ml_backend__ml_global_data__succeeded = mercury__list__member_2_p_0(ml_backend__ml_global_data__TypeCtorInfo_19_58, ((MR_Box) (ml_backend__ml_global_data__V_53_53)), ml_backend__ml_global_data__Types_50);
                }
#line 500 "ml_global_data.m"
              }
#line 499 "ml_global_data.m"
          }
#line 499 "ml_global_data.m"
      }
#line 506 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 504 "ml_global_data.m"
      {
#line 504 "ml_global_data.m"
        {
#line 504 "ml_global_data.m"
          ml_backend__ml_global_data__ConstType_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 504 "ml_global_data.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 504 "ml_global_data.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType_16, 1) = ((MR_Box) (ml_backend__ml_global_data__Types_50));
#line 504 "ml_global_data.m"
        }
#line 505 "ml_global_data.m"
        {
#line 505 "ml_global_data.m"
          ml_backend__ml_global_data__Initializer_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 505 "ml_global_data.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__Initializer_17, 0) = ((MR_Box) (ml_backend__ml_global_data__Inits_49));
#line 505 "ml_global_data.m"
        }
#line 504 "ml_global_data.m"
      }
#line 506 "ml_global_data.m"
    else
#line 507 "ml_global_data.m"
      {
#line 507 "ml_global_data.m"
        ml_backend__ml_global_data__ConstType_16 = ml_backend__ml_global_data__ConstType0_11;
#line 508 "ml_global_data.m"
        ml_backend__ml_global_data__Initializer_17 = ml_backend__ml_global_data__Initializer0_12;
#line 507 "ml_global_data.m"
      }
#line 394 "ml_global_data.m"
    ml_backend__ml_global_data__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 0)));
#line 394 "ml_global_data.m"
    ml_backend__ml_global_data__UseCommonCells_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 1)));
#line 394 "ml_global_data.m"
    ml_backend__ml_global_data__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 2)));
#line 394 "ml_global_data.m"
    ml_backend__ml_global_data__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 3)));
#line 394 "ml_global_data.m"
    ml_backend__ml_global_data__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 4)));
#line 394 "ml_global_data.m"
    ml_backend__ml_global_data__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 5)));
#line 394 "ml_global_data.m"
    ml_backend__ml_global_data__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 6)));
#line 394 "ml_global_data.m"
    ml_backend__ml_global_data__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 7)));
#line 394 "ml_global_data.m"
    ml_backend__ml_global_data__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 8)));
#line 394 "ml_global_data.m"
    ml_backend__ml_global_data__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 9)));
#line 394 "ml_global_data.m"
    ml_backend__ml_global_data__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 10)));
#line 394 "ml_global_data.m"
    ml_backend__ml_global_data__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 11)));
#line 394 "ml_global_data.m"
    ml_backend__ml_global_data__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 12)));
#line 394 "ml_global_data.m"
    ml_backend__ml_global_data__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 13)));
#line 402 "ml_global_data.m"
#line 402 "ml_global_data.m"
    switch (ml_backend__ml_global_data__UseCommonCells_18) {
#line 402 "ml_global_data.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 402 "ml_global_data.m"
      case (MR_Integer) 0:
#line 403 "ml_global_data.m"
        {
#line 403 "ml_global_data.m"
          MR_Word ml_backend__ml_global_data__VarName_22;
#line 403 "ml_global_data.m"
          MR_Word ml_backend__ml_global_data__DataName_23;
#line 403 "ml_global_data.m"
          MR_Word ml_backend__ml_global_data__V_27_27;
#line 403 "ml_global_data.m"
          MR_Word ml_backend__ml_global_data__DataAddr_30;

#line 404 "ml_global_data.m"
          {
#line 404 "ml_global_data.m"
            ml_backend__ml_global_data__ml_gen_plain_static_defn_7_p_0(ml_backend__ml_global_data__ConstBaseName_10, ml_backend__ml_global_data__ConstType_16, ml_backend__ml_global_data__Initializer_17, ml_backend__ml_global_data__Context_13, &ml_backend__ml_global_data__VarName_22, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_25);
          }
#line 406 "ml_global_data.m"
          ml_backend__ml_global_data__DataName_23 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_global_data__VarName_22);
#line 407 "ml_global_data.m"
          {
#line 407 "ml_global_data.m"
            ml_backend__ml_global_data__DataAddr_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 407 "ml_global_data.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__DataAddr_30, 0) = ((MR_Box) (ml_backend__ml_global_data__MLDS_ModuleName_9));
#line 407 "ml_global_data.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__DataAddr_30, 1) = ((MR_Box) (ml_backend__ml_global_data__DataName_23));
#line 407 "ml_global_data.m"
          }
#line 408 "ml_global_data.m"
          ml_backend__ml_global_data__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_global_data__DataAddr_30);
#line 408 "ml_global_data.m"
          {
#line 408 "ml_global_data.m"
            MR_Word base;
#line 408 "ml_global_data.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 408 "ml_global_data.m"
            *ml_backend__ml_global_data__DataAddrRval_14 = base;
#line 408 "ml_global_data.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 408 "ml_global_data.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_27_27));
#line 408 "ml_global_data.m"
          }
#line 403 "ml_global_data.m"
        }
#line 402 "ml_global_data.m"
        break;
#line 402 "ml_global_data.m"
      case (MR_Integer) 1:
#line 396 "ml_global_data.m"
        {
#line 396 "ml_global_data.m"
          MR_Word ml_backend__ml_global_data__Common_19;
#line 396 "ml_global_data.m"
          MR_Word ml_backend__ml_global_data__CommonDataName_20;
#line 396 "ml_global_data.m"
          MR_Word ml_backend__ml_global_data__DataAddr_21;
#line 396 "ml_global_data.m"
          MR_Word ml_backend__ml_global_data__V_29_29;

#line 397 "ml_global_data.m"
          {
#line 397 "ml_global_data.m"
            ml_backend__ml_global_data__ml_gen_scalar_static_defn_6_p_0(ml_backend__ml_global_data__MLDS_ModuleName_9, ml_backend__ml_global_data__ConstType_16, ml_backend__ml_global_data__Initializer_17, &ml_backend__ml_global_data__Common_19, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_25);
          }
#line 399 "ml_global_data.m"
          {
#line 399 "ml_global_data.m"
            ml_backend__ml_global_data__CommonDataName_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 399 "ml_global_data.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_global_data__CommonDataName_20, 0) = ((MR_Box) (ml_backend__ml_global_data__Common_19));
#line 399 "ml_global_data.m"
          }
#line 400 "ml_global_data.m"
          {
#line 400 "ml_global_data.m"
            ml_backend__ml_global_data__DataAddr_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 400 "ml_global_data.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__DataAddr_21, 0) = ((MR_Box) (ml_backend__ml_global_data__MLDS_ModuleName_9));
#line 400 "ml_global_data.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__DataAddr_21, 1) = ((MR_Box) (ml_backend__ml_global_data__CommonDataName_20));
#line 400 "ml_global_data.m"
          }
#line 401 "ml_global_data.m"
          ml_backend__ml_global_data__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_global_data__DataAddr_21);
#line 401 "ml_global_data.m"
          {
#line 401 "ml_global_data.m"
            MR_Word base;
#line 401 "ml_global_data.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 401 "ml_global_data.m"
            *ml_backend__ml_global_data__DataAddrRval_14 = base;
#line 401 "ml_global_data.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 401 "ml_global_data.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_29_29));
#line 401 "ml_global_data.m"
          }
#line 396 "ml_global_data.m"
        }
#line 402 "ml_global_data.m"
        break;
#line 402 "ml_global_data.m"
    }
#line 391 "ml_global_data.m"
  }
#line 180 "ml_global_data.m"
}

#line 501 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_gen_static_scalar_const_value_8_p_0_1(
#line 501 "ml_global_data.m"
  MR_Box ml_backend__ml_global_data__closure_arg,
#line 501 "ml_global_data.m"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 501 "ml_global_data.m"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_2,
#line 501 "ml_global_data.m"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_3)
#line 501 "ml_global_data.m"
{
#line 501 "ml_global_data.m"
  {
#line 501 "ml_global_data.m"
    MR_Box ml_backend__ml_global_data__closure = ml_backend__ml_global_data__closure_arg;
#line 501 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__conv1_Init_5;
#line 501 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__conv0_Type_6;

#line 501 "ml_global_data.m"
    {
#line 501 "ml_global_data.m"
      ml_backend__ml_global_data__ml_specialize_generic_array_init_3_p_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), &ml_backend__ml_global_data__conv1_Init_5, &ml_backend__ml_global_data__conv0_Type_6);
    }
#line 501 "ml_global_data.m"
    *ml_backend__ml_global_data__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_global_data__conv1_Init_5));
#line 501 "ml_global_data.m"
    *ml_backend__ml_global_data__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_global_data__conv0_Type_6));
#line 501 "ml_global_data.m"
  }
#line 501 "ml_global_data.m"
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
#line 372 "ml_global_data.m"
  {
#line 372 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_global_data__ConstType0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType0_11, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 372 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__ConstType_16;
#line 372 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Initializer_17;
#line 372 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__UseCommonCells_18;
#line 506 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Inits_46;
#line 506 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Types_47;
#line 499 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_18_54;
#line 499 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_19_55;
#line 499 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Inits0_45;
#line 499 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_48_48;
#line 499 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_49_49;
#line 499 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_50_50;
#line 375 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_28_28;
#line 375 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_29_29;
#line 375 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_30_30;
#line 375 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_31_31;
#line 375 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_32_32;
#line 375 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_33_33;
#line 375 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_34_34;
#line 375 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_35_35;
#line 375 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_36_36;
#line 375 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_37_37;
#line 375 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_38_38;
#line 375 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_39_39;
#line 375 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_40_40;

#line 499 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 499 "ml_global_data.m"
      {
#line 499 "ml_global_data.m"
        ml_backend__ml_global_data__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType0_11, (MR_Integer) 1)));
#line 499 "ml_global_data.m"
        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 499 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 499 "ml_global_data.m"
          {
#line 500 "ml_global_data.m"
            ml_backend__ml_global_data__succeeded = ((MR_tag((MR_Word) ml_backend__ml_global_data__Initializer0_12)) == (MR_mktag((MR_Integer) 3)));
#line 500 "ml_global_data.m"
            if (ml_backend__ml_global_data__succeeded)
#line 500 "ml_global_data.m"
              {
#line 500 "ml_global_data.m"
                ml_backend__ml_global_data__Inits0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__Initializer0_12, (MR_Integer) 0)));
#line 501 "ml_global_data.m"
                ml_backend__ml_global_data__V_49_49 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[7];
#line 8405 "ml_backend.ml_global_data.c"
                ml_backend__ml_global_data__TypeCtorInfo_18_54 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
#line 8407 "ml_backend.ml_global_data.c"
                ml_backend__ml_global_data__TypeCtorInfo_19_55 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0;
#line 501 "ml_global_data.m"
                {
#line 501 "ml_global_data.m"
                  mercury__list__map2_4_p_0(ml_backend__ml_global_data__TypeCtorInfo_18_54, ml_backend__ml_global_data__TypeCtorInfo_18_54, ml_backend__ml_global_data__TypeCtorInfo_19_55, ml_backend__ml_global_data__V_49_49, ml_backend__ml_global_data__Inits0_45, &ml_backend__ml_global_data__Inits_46, &ml_backend__ml_global_data__Types_47);
                }
#line 502 "ml_global_data.m"
                ml_backend__ml_global_data__V_50_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 502 "ml_global_data.m"
                {
#line 502 "ml_global_data.m"
                  ml_backend__ml_global_data__succeeded = mercury__list__member_2_p_0(ml_backend__ml_global_data__TypeCtorInfo_19_55, ((MR_Box) (ml_backend__ml_global_data__V_50_50)), ml_backend__ml_global_data__Types_47);
                }
#line 500 "ml_global_data.m"
              }
#line 499 "ml_global_data.m"
          }
#line 499 "ml_global_data.m"
      }
#line 506 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 504 "ml_global_data.m"
      {
#line 504 "ml_global_data.m"
        {
#line 504 "ml_global_data.m"
          ml_backend__ml_global_data__ConstType_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 504 "ml_global_data.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 504 "ml_global_data.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType_16, 1) = ((MR_Box) (ml_backend__ml_global_data__Types_47));
#line 504 "ml_global_data.m"
        }
#line 505 "ml_global_data.m"
        {
#line 505 "ml_global_data.m"
          ml_backend__ml_global_data__Initializer_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 505 "ml_global_data.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__Initializer_17, 0) = ((MR_Box) (ml_backend__ml_global_data__Inits_46));
#line 505 "ml_global_data.m"
        }
#line 504 "ml_global_data.m"
      }
#line 506 "ml_global_data.m"
    else
#line 507 "ml_global_data.m"
      {
#line 507 "ml_global_data.m"
        ml_backend__ml_global_data__ConstType_16 = ml_backend__ml_global_data__ConstType0_11;
#line 508 "ml_global_data.m"
        ml_backend__ml_global_data__Initializer_17 = ml_backend__ml_global_data__Initializer0_12;
#line 507 "ml_global_data.m"
      }
#line 375 "ml_global_data.m"
    ml_backend__ml_global_data__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 0)));
#line 375 "ml_global_data.m"
    ml_backend__ml_global_data__UseCommonCells_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 1)));
#line 375 "ml_global_data.m"
    ml_backend__ml_global_data__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 2)));
#line 375 "ml_global_data.m"
    ml_backend__ml_global_data__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 3)));
#line 375 "ml_global_data.m"
    ml_backend__ml_global_data__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 4)));
#line 375 "ml_global_data.m"
    ml_backend__ml_global_data__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 5)));
#line 375 "ml_global_data.m"
    ml_backend__ml_global_data__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 6)));
#line 375 "ml_global_data.m"
    ml_backend__ml_global_data__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 7)));
#line 375 "ml_global_data.m"
    ml_backend__ml_global_data__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 8)));
#line 375 "ml_global_data.m"
    ml_backend__ml_global_data__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 9)));
#line 375 "ml_global_data.m"
    ml_backend__ml_global_data__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 10)));
#line 375 "ml_global_data.m"
    ml_backend__ml_global_data__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 11)));
#line 375 "ml_global_data.m"
    ml_backend__ml_global_data__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 12)));
#line 375 "ml_global_data.m"
    ml_backend__ml_global_data__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 13)));
#line 381 "ml_global_data.m"
#line 381 "ml_global_data.m"
    switch (ml_backend__ml_global_data__UseCommonCells_18) {
#line 381 "ml_global_data.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 381 "ml_global_data.m"
      case (MR_Integer) 0:
#line 382 "ml_global_data.m"
        {
#line 382 "ml_global_data.m"
          MR_Word ml_backend__ml_global_data__VarName_20;
#line 382 "ml_global_data.m"
          MR_Word ml_backend__ml_global_data__QualVarName_21;
#line 382 "ml_global_data.m"
          MR_Word ml_backend__ml_global_data__DataVar_22;

#line 383 "ml_global_data.m"
          {
#line 383 "ml_global_data.m"
            ml_backend__ml_global_data__ml_gen_plain_static_defn_7_p_0(ml_backend__ml_global_data__ConstBaseName_10, ml_backend__ml_global_data__ConstType_16, ml_backend__ml_global_data__Initializer_17, ml_backend__ml_global_data__Context_13, &ml_backend__ml_global_data__VarName_20, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24);
          }
#line 385 "ml_global_data.m"
          {
#line 385 "ml_global_data.m"
            ml_backend__ml_global_data__QualVarName_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 385 "ml_global_data.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__QualVarName_21, 0) = ((MR_Box) (ml_backend__ml_global_data__MLDS_ModuleName_9));
#line 385 "ml_global_data.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__QualVarName_21, 1) = ((MR_Box) ((MR_Integer) 0));
#line 385 "ml_global_data.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__QualVarName_21, 2) = ((MR_Box) (ml_backend__ml_global_data__VarName_20));
#line 385 "ml_global_data.m"
          }
#line 386 "ml_global_data.m"
          {
#line 386 "ml_global_data.m"
            ml_backend__ml_global_data__DataVar_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 386 "ml_global_data.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__DataVar_22, 0) = ((MR_Box) (ml_backend__ml_global_data__QualVarName_21));
#line 386 "ml_global_data.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__DataVar_22, 1) = ((MR_Box) (ml_backend__ml_global_data__ConstType_16));
#line 386 "ml_global_data.m"
          }
#line 387 "ml_global_data.m"
          {
#line 387 "ml_global_data.m"
            MR_Word base;
#line 387 "ml_global_data.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 387 "ml_global_data.m"
            *ml_backend__ml_global_data__DataRval_14 = base;
#line 387 "ml_global_data.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_global_data__DataVar_22));
#line 387 "ml_global_data.m"
          }
#line 382 "ml_global_data.m"
        }
#line 381 "ml_global_data.m"
        break;
#line 381 "ml_global_data.m"
      case (MR_Integer) 1:
#line 377 "ml_global_data.m"
        {
#line 377 "ml_global_data.m"
          MR_Word ml_backend__ml_global_data__Common_19;

#line 378 "ml_global_data.m"
          {
#line 378 "ml_global_data.m"
            ml_backend__ml_global_data__ml_gen_scalar_static_defn_6_p_0(ml_backend__ml_global_data__MLDS_ModuleName_9, ml_backend__ml_global_data__ConstType_16, ml_backend__ml_global_data__Initializer_17, &ml_backend__ml_global_data__Common_19, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24);
          }
#line 380 "ml_global_data.m"
          *ml_backend__ml_global_data__DataRval_14 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_global_data__Common_19);
#line 377 "ml_global_data.m"
        }
#line 381 "ml_global_data.m"
        break;
#line 381 "ml_global_data.m"
    }
#line 372 "ml_global_data.m"
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
#line 364 "ml_global_data.m"
  {
#line 364 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 364 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_12_12 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 364 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevDefns0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
#line 364 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevDefns_7;
#line 364 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_10_10;
#line 333 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
#line 333 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
#line 333 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
#line 333 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
#line 333 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
#line 333 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
#line 333 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 7)));
#line 333 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 8)));
#line 333 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 9)));
#line 333 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 10)));
#line 333 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 11)));
#line 333 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 12)));
#line 333 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 13)));
#line 345 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_32_32;
#line 345 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_33_33;
#line 345 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_34_34;
#line 345 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_35_35;
#line 345 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_36_36;
#line 345 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_37_37;
#line 345 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_39_39;
#line 345 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_40_40;
#line 345 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_41_41;
#line 345 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_42_42;
#line 345 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_43_43;
#line 345 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_44_44;
#line 345 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_45_45;
#line 345 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_38_38;

#line 366 "ml_global_data.m"
    {
#line 366 "ml_global_data.m"
      ml_backend__ml_global_data__V_10_10 = mercury__list__reverse_1_f_0(ml_backend__ml_global_data__TypeCtorInfo_12_12, ml_backend__ml_global_data__Defns_4);
    }
#line 366 "ml_global_data.m"
    {
#line 366 "ml_global_data.m"
      ml_backend__ml_global_data__RevDefns_7 = mercury__list__f_43_43_2_f_0(ml_backend__ml_global_data__TypeCtorInfo_12_12, ml_backend__ml_global_data__V_10_10, ml_backend__ml_global_data__RevDefns0_6);
    }
#line 345 "ml_global_data.m"
    ml_backend__ml_global_data__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
#line 345 "ml_global_data.m"
    ml_backend__ml_global_data__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
#line 345 "ml_global_data.m"
    ml_backend__ml_global_data__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
#line 345 "ml_global_data.m"
    ml_backend__ml_global_data__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
#line 345 "ml_global_data.m"
    ml_backend__ml_global_data__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
#line 345 "ml_global_data.m"
    ml_backend__ml_global_data__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
#line 345 "ml_global_data.m"
    ml_backend__ml_global_data__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
#line 345 "ml_global_data.m"
    ml_backend__ml_global_data__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 7)));
#line 345 "ml_global_data.m"
    ml_backend__ml_global_data__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 8)));
#line 345 "ml_global_data.m"
    ml_backend__ml_global_data__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 9)));
#line 345 "ml_global_data.m"
    ml_backend__ml_global_data__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 10)));
#line 345 "ml_global_data.m"
    ml_backend__ml_global_data__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 11)));
#line 345 "ml_global_data.m"
    ml_backend__ml_global_data__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 12)));
#line 345 "ml_global_data.m"
    ml_backend__ml_global_data__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 13)));
#line 345 "ml_global_data.m"
    {
#line 345 "ml_global_data.m"
      MR_Word base;
#line 345 "ml_global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 345 "ml_global_data.m"
      *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_9 = base;
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__V_32_32));
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_33_33));
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_34_34));
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_35_35));
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__V_36_36));
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__V_37_37));
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__RevDefns_7));
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_39_39));
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_40_40));
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__V_41_41));
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_42_42));
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__V_43_43));
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__V_44_44));
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__V_45_45));
#line 345 "ml_global_data.m"
    }
#line 364 "ml_global_data.m"
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
#line 359 "ml_global_data.m"
  {
#line 359 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 359 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_12_12 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 359 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevDefns0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
#line 359 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevDefns_7;
#line 359 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_10_10;
#line 331 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
#line 331 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
#line 331 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
#line 331 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
#line 331 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
#line 331 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
#line 331 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 7)));
#line 331 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 8)));
#line 331 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 9)));
#line 331 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 10)));
#line 331 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 11)));
#line 331 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 12)));
#line 331 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 13)));
#line 343 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_32_32;
#line 343 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_33_33;
#line 343 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_34_34;
#line 343 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_35_35;
#line 343 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_36_36;
#line 343 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_38_38;
#line 343 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_39_39;
#line 343 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_40_40;
#line 343 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_41_41;
#line 343 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_42_42;
#line 343 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_43_43;
#line 343 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_44_44;
#line 343 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_45_45;
#line 343 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_37_37;

#line 361 "ml_global_data.m"
    {
#line 361 "ml_global_data.m"
      ml_backend__ml_global_data__V_10_10 = mercury__list__reverse_1_f_0(ml_backend__ml_global_data__TypeCtorInfo_12_12, ml_backend__ml_global_data__Defns_4);
    }
#line 361 "ml_global_data.m"
    {
#line 361 "ml_global_data.m"
      ml_backend__ml_global_data__RevDefns_7 = mercury__list__f_43_43_2_f_0(ml_backend__ml_global_data__TypeCtorInfo_12_12, ml_backend__ml_global_data__V_10_10, ml_backend__ml_global_data__RevDefns0_6);
    }
#line 343 "ml_global_data.m"
    ml_backend__ml_global_data__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
#line 343 "ml_global_data.m"
    ml_backend__ml_global_data__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
#line 343 "ml_global_data.m"
    ml_backend__ml_global_data__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
#line 343 "ml_global_data.m"
    ml_backend__ml_global_data__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
#line 343 "ml_global_data.m"
    ml_backend__ml_global_data__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
#line 343 "ml_global_data.m"
    ml_backend__ml_global_data__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
#line 343 "ml_global_data.m"
    ml_backend__ml_global_data__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
#line 343 "ml_global_data.m"
    ml_backend__ml_global_data__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 7)));
#line 343 "ml_global_data.m"
    ml_backend__ml_global_data__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 8)));
#line 343 "ml_global_data.m"
    ml_backend__ml_global_data__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 9)));
#line 343 "ml_global_data.m"
    ml_backend__ml_global_data__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 10)));
#line 343 "ml_global_data.m"
    ml_backend__ml_global_data__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 11)));
#line 343 "ml_global_data.m"
    ml_backend__ml_global_data__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 12)));
#line 343 "ml_global_data.m"
    ml_backend__ml_global_data__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 13)));
#line 343 "ml_global_data.m"
    {
#line 343 "ml_global_data.m"
      MR_Word base;
#line 343 "ml_global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 343 "ml_global_data.m"
      *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_9 = base;
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__V_32_32));
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_33_33));
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_34_34));
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_35_35));
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__V_36_36));
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__RevDefns_7));
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__V_38_38));
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_39_39));
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_40_40));
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__V_41_41));
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_42_42));
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__V_43_43));
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__V_44_44));
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__V_45_45));
#line 343 "ml_global_data.m"
    }
#line 359 "ml_global_data.m"
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
#line 354 "ml_global_data.m"
  {
#line 354 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 354 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevDefns0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
#line 354 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevDefns_7;
#line 354 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
#line 354 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
#line 354 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
#line 354 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
#line 354 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
#line 354 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
#line 354 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 7)));
#line 354 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 8)));
#line 354 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 9)));
#line 354 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 10)));
#line 354 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 11)));
#line 354 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 12)));
#line 354 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 13)));

#line 356 "ml_global_data.m"
    {
#line 356 "ml_global_data.m"
      ml_backend__ml_global_data__RevDefns_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 356 "ml_global_data.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__RevDefns_7, 0) = ((MR_Box) (ml_backend__ml_global_data__Defn_4));
#line 356 "ml_global_data.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__RevDefns_7, 1) = ((MR_Box) (ml_backend__ml_global_data__RevDefns0_6));
#line 356 "ml_global_data.m"
    }
#line 343 "ml_global_data.m"
    {
#line 343 "ml_global_data.m"
      MR_Word base;
#line 343 "ml_global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 343 "ml_global_data.m"
      *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_9 = base;
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__V_12_12));
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_13_13));
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_14_14));
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_15_15));
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__V_16_16));
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__RevDefns_7));
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__V_17_17));
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_18_18));
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_19_19));
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__V_20_20));
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_21_21));
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__V_22_22));
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__V_23_23));
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__V_24_24));
#line 343 "ml_global_data.m"
    }
#line 354 "ml_global_data.m"
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
#line 349 "ml_global_data.m"
  {
#line 349 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 349 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__PDupRvalTypeMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
#line 349 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__PDupRvalTypeMap_9;
#line 325 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
#line 325 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
#line 325 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
#line 325 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
#line 325 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
#line 325 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
#line 325 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 7)));
#line 325 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 8)));
#line 325 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 9)));
#line 325 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 10)));
#line 325 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 11)));
#line 325 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 12)));
#line 325 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 13)));
#line 337 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_35_35;
#line 337 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_36_36;
#line 337 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_37_37;
#line 337 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_38_38;
#line 337 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_39_39;
#line 337 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_40_40;
#line 337 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_41_41;
#line 337 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_42_42;
#line 337 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_43_43;
#line 337 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_44_44;
#line 337 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_45_45;
#line 337 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_46_46;
#line 337 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_47_47;
#line 337 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_34_34;

#line 351 "ml_global_data.m"
    {
#line 351 "ml_global_data.m"
      mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0, ((MR_Box) (ml_backend__ml_global_data__RttiId_5)), ((MR_Box) (ml_backend__ml_global_data__RvalType_6)), ml_backend__ml_global_data__PDupRvalTypeMap0_8, &ml_backend__ml_global_data__PDupRvalTypeMap_9);
    }
#line 337 "ml_global_data.m"
    ml_backend__ml_global_data__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
#line 337 "ml_global_data.m"
    ml_backend__ml_global_data__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
#line 337 "ml_global_data.m"
    ml_backend__ml_global_data__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
#line 337 "ml_global_data.m"
    ml_backend__ml_global_data__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
#line 337 "ml_global_data.m"
    ml_backend__ml_global_data__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
#line 337 "ml_global_data.m"
    ml_backend__ml_global_data__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
#line 337 "ml_global_data.m"
    ml_backend__ml_global_data__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
#line 337 "ml_global_data.m"
    ml_backend__ml_global_data__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 7)));
#line 337 "ml_global_data.m"
    ml_backend__ml_global_data__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 8)));
#line 337 "ml_global_data.m"
    ml_backend__ml_global_data__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 9)));
#line 337 "ml_global_data.m"
    ml_backend__ml_global_data__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 10)));
#line 337 "ml_global_data.m"
    ml_backend__ml_global_data__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 11)));
#line 337 "ml_global_data.m"
    ml_backend__ml_global_data__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 12)));
#line 337 "ml_global_data.m"
    ml_backend__ml_global_data__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 13)));
#line 337 "ml_global_data.m"
    {
#line 337 "ml_global_data.m"
      MR_Word base;
#line 337 "ml_global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 337 "ml_global_data.m"
      *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_11 = base;
#line 337 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__PDupRvalTypeMap_9));
#line 337 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_35_35));
#line 337 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_36_36));
#line 337 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_37_37));
#line 337 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__V_38_38));
#line 337 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__V_39_39));
#line 337 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__V_40_40));
#line 337 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_41_41));
#line 337 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_42_42));
#line 337 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__V_43_43));
#line 337 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_44_44));
#line 337 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__V_45_45));
#line 337 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__V_46_46));
#line 337 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__V_47_47));
#line 337 "ml_global_data.m"
    }
#line 349 "ml_global_data.m"
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
#line 345 "ml_global_data.m"
  {
#line 345 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 345 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 0)));
#line 345 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 1)));
#line 345 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 2)));
#line 345 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 3)));
#line 345 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 4)));
#line 345 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 5)));
#line 345 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 7)));
#line 345 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 8)));
#line 345 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 9)));
#line 345 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 10)));
#line 345 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 11)));
#line 345 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 12)));
#line 345 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 13)));
#line 345 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 6)));

#line 345 "ml_global_data.m"
    {
#line 345 "ml_global_data.m"
      MR_Word base;
#line 345 "ml_global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 345 "ml_global_data.m"
      *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_7 = base;
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__V_9_9));
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_10_10));
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_11_11));
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_12_12));
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__V_13_13));
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__V_14_14));
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__Defns_4));
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_16_16));
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_17_17));
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__V_18_18));
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_19_19));
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__V_20_20));
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__V_21_21));
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__V_22_22));
#line 345 "ml_global_data.m"
    }
#line 345 "ml_global_data.m"
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
#line 325 "ml_global_data.m"
  {
#line 325 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 325 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_4_4;
#line 325 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_5_5;
#line 325 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_6_6;
#line 325 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_7_7;
#line 325 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_8_8;
#line 325 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_9_9;
#line 325 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_10_10;
#line 325 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_11_11;
#line 325 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_12_12;
#line 325 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_13_13;
#line 325 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_14_14;
#line 325 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_15_15;
#line 325 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_16_16;

#line 325 "ml_global_data.m"
    *ml_backend__ml_global_data__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 0)));
#line 325 "ml_global_data.m"
    ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 1)));
#line 325 "ml_global_data.m"
    ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 2)));
#line 325 "ml_global_data.m"
    ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 3)));
#line 325 "ml_global_data.m"
    ml_backend__ml_global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 4)));
#line 325 "ml_global_data.m"
    ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 5)));
#line 325 "ml_global_data.m"
    ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 6)));
#line 325 "ml_global_data.m"
    ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 7)));
#line 325 "ml_global_data.m"
    ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 8)));
#line 325 "ml_global_data.m"
    ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 9)));
#line 325 "ml_global_data.m"
    ml_backend__ml_global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 10)));
#line 325 "ml_global_data.m"
    ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 11)));
#line 325 "ml_global_data.m"
    ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 12)));
#line 325 "ml_global_data.m"
    ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 13)));
#line 325 "ml_global_data.m"
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
#line 282 "ml_global_data.m"
  {
#line 282 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 282 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_29_29;
#line 282 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevFlatCellDefns_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 4)));
#line 282 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevFlatRttiDefns_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 5)));
#line 282 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevMaybeNonFlatDefns_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 6)));
#line 282 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__AllocIdMap_22;
#line 282 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_23_23;
#line 282 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_24_24;
#line 282 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_25_25;
#line 282 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_26_26;
#line 283 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___PDupRvalTypeMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 0)));
#line 283 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___UseCommonCells_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 1)));
#line 283 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___HaveUnboxedFloats_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 2)));
#line 283 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___ConstCounter_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 3)));
#line 283 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___TypeNumCounter_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 7)));
#line 283 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___ScalarTypeNumMap_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 8)));
#line 283 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___VectorTypeNumMap_20;
#line 283 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___AllocIdNumCounter_21;

#line 283 "ml_global_data.m"
    *ml_backend__ml_global_data__ScalarCellGroupMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 9)));
#line 283 "ml_global_data.m"
    ml_backend__ml_global_data___VectorTypeNumMap_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 10)));
#line 283 "ml_global_data.m"
    *ml_backend__ml_global_data__VectorCellGroupMap_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 11)));
#line 283 "ml_global_data.m"
    ml_backend__ml_global_data___AllocIdNumCounter_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 12)));
#line 283 "ml_global_data.m"
    ml_backend__ml_global_data__AllocIdMap_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 13)));
#line 290 "ml_global_data.m"
    {
#line 290 "ml_global_data.m"
      mercury__bimap__to_assoc_list_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_alloc_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0, ml_backend__ml_global_data__AllocIdMap_22, ml_backend__ml_global_data__AllocIds_9);
    }
#line 9371 "ml_backend.ml_global_data.c"
    ml_backend__ml_global_data__TypeCtorInfo_29_29 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 298 "ml_global_data.m"
    {
#line 298 "ml_global_data.m"
      ml_backend__ml_global_data__V_23_23 = mercury__list__reverse_1_f_0(ml_backend__ml_global_data__TypeCtorInfo_29_29, ml_backend__ml_global_data__RevFlatRttiDefns_16);
    }
#line 299 "ml_global_data.m"
    {
#line 299 "ml_global_data.m"
      ml_backend__ml_global_data__V_25_25 = mercury__list__reverse_1_f_0(ml_backend__ml_global_data__TypeCtorInfo_29_29, ml_backend__ml_global_data__RevMaybeNonFlatDefns_17);
    }
#line 300 "ml_global_data.m"
    {
#line 300 "ml_global_data.m"
      ml_backend__ml_global_data__V_26_26 = mercury__list__reverse_1_f_0(ml_backend__ml_global_data__TypeCtorInfo_29_29, ml_backend__ml_global_data__RevFlatCellDefns_15);
    }
#line 299 "ml_global_data.m"
    {
#line 299 "ml_global_data.m"
      ml_backend__ml_global_data__V_24_24 = mercury__list__f_43_43_2_f_0(ml_backend__ml_global_data__TypeCtorInfo_29_29, ml_backend__ml_global_data__V_25_25, ml_backend__ml_global_data__V_26_26);
    }
#line 298 "ml_global_data.m"
    {
#line 298 "ml_global_data.m"
      *ml_backend__ml_global_data__Defns_10 = mercury__list__f_43_43_2_f_0(ml_backend__ml_global_data__TypeCtorInfo_29_29, ml_backend__ml_global_data__V_23_23, ml_backend__ml_global_data__V_24_24);
    }
#line 282 "ml_global_data.m"
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
#line 273 "ml_global_data.m"
  {
#line 273 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 273 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___PDupRvalTypeMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 0)));
#line 273 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___UseCommonCells_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 1)));
#line 273 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___HaveUnboxedFloats_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 2)));
#line 273 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___ConstCounter_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 3)));
#line 273 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___TypeNumCounter_17;
#line 273 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___ScalarTypeNumMap_18;
#line 273 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___VectorTypeNumMap_19;
#line 273 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___AllocIdNumCounter_20;
#line 273 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___AllocIdMap_21;

#line 273 "ml_global_data.m"
    *ml_backend__ml_global_data__RevFlatCellDefns_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 4)));
#line 273 "ml_global_data.m"
    *ml_backend__ml_global_data__RevFlatRttiDefns_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 5)));
#line 273 "ml_global_data.m"
    *ml_backend__ml_global_data__RevMaybeNonFlatDefns_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 6)));
#line 273 "ml_global_data.m"
    ml_backend__ml_global_data___TypeNumCounter_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 7)));
#line 273 "ml_global_data.m"
    ml_backend__ml_global_data___ScalarTypeNumMap_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 8)));
#line 273 "ml_global_data.m"
    *ml_backend__ml_global_data__ScalarCellGroupMap_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 9)));
#line 273 "ml_global_data.m"
    ml_backend__ml_global_data___VectorTypeNumMap_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 10)));
#line 273 "ml_global_data.m"
    *ml_backend__ml_global_data__VectorCellGroupMap_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 11)));
#line 273 "ml_global_data.m"
    ml_backend__ml_global_data___AllocIdNumCounter_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 12)));
#line 273 "ml_global_data.m"
    ml_backend__ml_global_data___AllocIdMap_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 13)));
#line 273 "ml_global_data.m"
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
#line 267 "ml_global_data.m"
  {
#line 267 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 267 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 2)));
#line 267 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 0)));
#line 267 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 1)));
#line 267 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 3)));
#line 267 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 4)));
#line 267 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 5)));
#line 267 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 6)));
#line 267 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 7)));
#line 267 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 8)));
#line 267 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 9)));
#line 267 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 10)));
#line 267 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 11)));
#line 267 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 12)));
#line 267 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 13)));

#line 267 "ml_global_data.m"
    return ml_backend__ml_global_data__HeadVar__2_2;
#line 267 "ml_global_data.m"
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
#line 261 "ml_global_data.m"
  {
#line 261 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 261 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__GlobalData_6;
#line 261 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_25_25;
#line 261 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_28_28;
#line 261 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_7_7;
#line 261 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_8_8;
#line 261 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_13_13;
#line 261 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_15_15;
#line 261 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_16_16;
#line 261 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_17_17;
#line 261 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_18_18;
#line 261 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_19_19;
#line 261 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_21_21;

#line 262 "ml_global_data.m"
    {
#line 262 "ml_global_data.m"
      ml_backend__ml_global_data__V_7_7 = mercury__map__init_0_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0);
    }
#line 263 "ml_global_data.m"
    {
#line 263 "ml_global_data.m"
      ml_backend__ml_global_data__V_8_8 = mercury__counter__init_1_f_0((MR_Integer) 1);
    }
#line 264 "ml_global_data.m"
    {
#line 264 "ml_global_data.m"
      ml_backend__ml_global_data__V_13_13 = mercury__counter__init_1_f_0((MR_Integer) 1);
    }
#line 9568 "ml_backend.ml_global_data.c"
    ml_backend__ml_global_data__TypeCtorInfo_25_25 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0;
#line 264 "ml_global_data.m"
    {
#line 264 "ml_global_data.m"
      ml_backend__ml_global_data__V_15_15 = mercury__map__init_0_f_0((MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0, ml_backend__ml_global_data__TypeCtorInfo_25_25);
    }
#line 264 "ml_global_data.m"
    {
#line 264 "ml_global_data.m"
      ml_backend__ml_global_data__V_16_16 = mercury__map__init_0_f_0(ml_backend__ml_global_data__TypeCtorInfo_25_25, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0);
    }
#line 9580 "ml_backend.ml_global_data.c"
    ml_backend__ml_global_data__TypeCtorInfo_28_28 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0;
#line 264 "ml_global_data.m"
    {
#line 264 "ml_global_data.m"
      ml_backend__ml_global_data__V_17_17 = mercury__map__init_0_f_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[0], ml_backend__ml_global_data__TypeCtorInfo_28_28);
    }
#line 264 "ml_global_data.m"
    {
#line 264 "ml_global_data.m"
      ml_backend__ml_global_data__V_18_18 = mercury__map__init_0_f_0(ml_backend__ml_global_data__TypeCtorInfo_28_28, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0);
    }
#line 265 "ml_global_data.m"
    {
#line 265 "ml_global_data.m"
      ml_backend__ml_global_data__V_19_19 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
#line 265 "ml_global_data.m"
    {
#line 265 "ml_global_data.m"
      ml_backend__ml_global_data__V_21_21 = mercury__bimap__init_0_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_alloc_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0);
    }
#line 262 "ml_global_data.m"
    {
#line 262 "ml_global_data.m"
      ml_backend__ml_global_data__GlobalData_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 262 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 0) = ((MR_Box) (ml_backend__ml_global_data__V_7_7));
#line 262 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 1) = ((MR_Box) (ml_backend__ml_global_data__UseCommonCells_4));
#line 262 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 2) = ((MR_Box) (ml_backend__ml_global_data__HaveUnboxedFloats_5));
#line 262 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 3) = ((MR_Box) (ml_backend__ml_global_data__V_8_8));
#line 262 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 262 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 262 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 262 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 7) = ((MR_Box) (ml_backend__ml_global_data__V_13_13));
#line 262 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 8) = ((MR_Box) (ml_backend__ml_global_data__V_15_15));
#line 262 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 9) = ((MR_Box) (ml_backend__ml_global_data__V_16_16));
#line 262 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 10) = ((MR_Box) (ml_backend__ml_global_data__V_17_17));
#line 262 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 11) = ((MR_Box) (ml_backend__ml_global_data__V_18_18));
#line 262 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 12) = ((MR_Box) (ml_backend__ml_global_data__V_19_19));
#line 262 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 13) = ((MR_Box) (ml_backend__ml_global_data__V_21_21));
#line 262 "ml_global_data.m"
    }
#line 261 "ml_global_data.m"
    return ml_backend__ml_global_data__GlobalData_6;
#line 261 "ml_global_data.m"
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
