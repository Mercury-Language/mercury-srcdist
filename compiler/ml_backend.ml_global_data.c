/*
** Automatically generated from `ml_global_data.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
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
#include "ml_backend.ml_type_gen.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_out.mih"
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




#line 152 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_floats_0_0;

#line 155 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_floats_0_1;

#line 158 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_value_ordered_have_unboxed_floats_0[2];

#line 161 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_name_ordered_have_unboxed_floats_0[2];

#line 164 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_have_unboxed_floats_0[2];

#line 167 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__bimap__ti_bimap_2ml_backend__mlds__type_ctor_info_mlds_alloc_id_0ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0;

#line 170 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_alloc_site_data_0_0[4];

#line 173 "ml_backend.ml_global_data.c"
static const MR_ConstString ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_alloc_site_data_0_0[4];

#line 176 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_alloc_site_data_0_0;

#line 179 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_alloc_site_data_0_0[1];

#line 182 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_alloc_site_data_0[1];

#line 185 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_alloc_site_data_0[1];

#line 188 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_alloc_site_data_0[1];

#line 191 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2backend_libs__rtti__type_ctor_info_rtti_id_0ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0;

#line 194 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0;

#line 197 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0;

#line 200 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0;

#line 203 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0;

#line 206 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0;

#line 209 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0;

#line 212 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_global_data_0_0[14];

#line 215 "ml_backend.ml_global_data.c"
static const MR_ConstString ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_global_data_0_0[14];

#line 218 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_global_data_0_0;

#line 221 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_global_data_0_0[1];

#line 224 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_global_data_0[1];

#line 227 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_global_data_0[1];

#line 230 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_global_data_0[1];

#line 233 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_rval_and_type_0_0[2];

#line 236 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_rval_and_type_0_0;

#line 239 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_rval_and_type_0_0[1];

#line 242 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_rval_and_type_0[1];

#line 245 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_rval_and_type_0[1];

#line 248 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_rval_and_type_0[1];

#line 251 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__bimap__ti_bimap_2ml_backend__mlds__type_ctor_info_mlds_initializer_0ml_backend__mlds__type_ctor_info_mlds_scalar_common_0;

#line 254 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_initializer_0;

#line 257 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_scalar_cell_group_0_0[5];

#line 260 "ml_backend.ml_global_data.c"
static const MR_ConstString ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_scalar_cell_group_0_0[5];

#line 263 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_scalar_cell_group_0_0;

#line 266 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_scalar_cell_group_0_0[1];

#line 269 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_scalar_cell_group_0[1];

#line 272 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_scalar_cell_group_0[1];

#line 275 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_scalar_cell_group_0[1];

#line 278 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_scalar_cell_type_0_0[2];

#line 281 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_scalar_cell_type_0_0;

#line 284 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_scalar_cell_type_0_0[1];

#line 287 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_scalar_cell_type_0[1];

#line 290 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_scalar_cell_type_0[1];

#line 293 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_scalar_cell_type_0[1];

#line 296 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_field_id_0;

#line 299 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_vector_cell_group_0_0[5];

#line 302 "ml_backend.ml_global_data.c"
static const MR_ConstString ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_vector_cell_group_0_0[5];

#line 305 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_vector_cell_group_0_0;

#line 308 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_vector_cell_group_0_0[1];

#line 311 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_vector_cell_group_0[1];

#line 314 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_vector_cell_group_0[1];

#line 317 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_vector_cell_group_0[1];

#line 320 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_use_common_cells_0_0;

#line 323 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_use_common_cells_0_1;

#line 326 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_value_ordered_use_common_cells_0[2];

#line 329 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_name_ordered_use_common_cells_0[2];

#line 332 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_use_common_cells_0[2];

#line 335 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____have_unboxed_floats_0_0_10001(
#line 338 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 340 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 343 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____have_unboxed_floats_0_0_10001(
#line 346 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 348 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 350 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 353 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_alloc_id_map_0_0_10001(
#line 356 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 358 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 361 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_alloc_id_map_0_0_10001(
#line 364 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 366 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 368 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 371 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_alloc_site_data_0_0_10001(
#line 374 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 376 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 379 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_alloc_site_data_0_0_10001(
#line 382 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 384 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 386 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 389 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_global_data_0_0_10001(
#line 392 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 394 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 397 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_global_data_0_0_10001(
#line 400 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 402 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 404 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 407 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_rtti_rval_type_map_0_0_10001(
#line 410 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 412 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 415 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_rtti_rval_type_map_0_0_10001(
#line 418 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 420 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 422 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 425 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_rval_and_type_0_0_10001(
#line 428 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 430 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 433 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_rval_and_type_0_0_10001(
#line 436 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 438 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 440 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 443 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_group_0_0_10001(
#line 446 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 448 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 451 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_group_0_0_10001(
#line 454 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 456 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 458 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 461 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_map_0_0_10001(
#line 464 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 466 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 469 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_map_0_0_10001(
#line 472 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 474 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 476 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 479 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_0_0_10001(
#line 482 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 484 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 487 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_0_0_10001(
#line 490 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 492 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 494 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 497 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_map_0_0_10001(
#line 500 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 502 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 505 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_map_0_0_10001(
#line 508 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 510 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 512 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 515 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_group_0_0_10001(
#line 518 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 520 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 523 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_group_0_0_10001(
#line 526 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 528 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 530 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 533 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_map_0_0_10001(
#line 536 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 538 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 541 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_map_0_0_10001(
#line 544 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 546 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 548 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 551 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_type_map_0_0_10001(
#line 554 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 556 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 559 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_type_map_0_0_10001(
#line 562 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 564 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 566 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 569 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____use_common_cells_0_0_10001(
#line 572 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 574 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 577 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____use_common_cells_0_0_10001(
#line 580 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 582 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 584 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 233 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_type_map_0_0(
#line 233 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 233 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 233 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3);

#line 233 "ml_global_data.m"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_type_map_0_0(
#line 233 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 233 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2);

#line 230 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_map_0_0(
#line 230 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 230 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 230 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3);

#line 230 "ml_global_data.m"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_map_0_0(
#line 230 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 230 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2);

#line 228 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_0_0(
#line 228 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 228 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 228 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3);

#line 228 "ml_global_data.m"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_0_0(
#line 228 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 228 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2);

#line 236 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_alloc_id_map_0_0(
#line 236 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 236 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 236 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3);

#line 236 "ml_global_data.m"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_alloc_id_map_0_0(
#line 236 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 236 "ml_global_data.m"
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

#line 528 "ml_global_data.m"
static MR_bool MR_CALL 
ml_backend__ml_global_data__ml_specialize_generic_array_rval_2_p_0(
#line 528 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13,
#line 528 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_Rval_14);

#line 513 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_specialize_generic_array_init_3_p_0(
#line 513 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Init0_4,
#line 513 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__Init_5,
#line 513 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__Type_6);

#line 471 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_gen_plain_static_defn_7_p_0(
#line 471 "ml_global_data.m"
  MR_String ml_backend__ml_global_data__ConstBaseName_8,
#line 471 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__ConstType_9,
#line 471 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Initializer_10,
#line 471 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Context_11,
#line 471 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__VarName_12,
#line 471 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25,
#line 471 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_26);

#line 413 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_gen_scalar_static_defn_6_p_0(
#line 413 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__MLDS_ModuleName_7,
#line 413 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__ConstType_8,
#line 413 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Initializer_9,
#line 413 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__Common_10,
#line 413 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34,
#line 413 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_35);

#line 322 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_global_data_set_rev_flat_cell_defns_3_p_0(
#line 322 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Defns_4,
#line 322 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6,
#line 322 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_7);

#line 503 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_gen_static_scalar_const_addr_8_p_0_1(
#line 503 "ml_global_data.m"
  MR_Box ml_backend__ml_global_data__closure_arg,
#line 503 "ml_global_data.m"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 503 "ml_global_data.m"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_2,
#line 503 "ml_global_data.m"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_3);

#line 503 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_gen_static_scalar_const_value_8_p_0_1(
#line 503 "ml_global_data.m"
  MR_Box ml_backend__ml_global_data__closure_arg,
#line 503 "ml_global_data.m"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 503 "ml_global_data.m"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_2,
#line 503 "ml_global_data.m"
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 892 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_floats_0_0 = {
  (MR_String) "have_unboxed_floats",
  (MR_Integer) 0
};

#line 898 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_floats_0_1 = {
  (MR_String) "do_not_have_unboxed_floats",
  (MR_Integer) 1
};

#line 904 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_value_ordered_have_unboxed_floats_0[2] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_floats_0_0,
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_floats_0_1
};

#line 910 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_name_ordered_have_unboxed_floats_0[2] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_floats_0_1,
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_floats_0_0
};

#line 916 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_have_unboxed_floats_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 922 "ml_backend.ml_global_data.c"
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

#line 939 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__bimap__ti_bimap_2ml_backend__mlds__type_ctor_info_mlds_alloc_id_0ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_alloc_id_0,
    (MR_TypeInfo) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0
  }
};

#line 948 "ml_backend.ml_global_data.c"
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

#line 965 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_alloc_site_data_0_0[4] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_entity_name_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 973 "ml_backend.ml_global_data.c"
static const MR_ConstString ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_alloc_site_data_0_0[4] = {
  (MR_String) "masd_proc_label",
  (MR_String) "masd_context",
  (MR_String) "masd_type",
  (MR_String) "masd_size"
};

#line 981 "ml_backend.ml_global_data.c"
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

#line 996 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_alloc_site_data_0_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_alloc_site_data_0_0
};

#line 1001 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_alloc_site_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_alloc_site_data_0_0
  }
};

#line 1010 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_alloc_site_data_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_alloc_site_data_0_0
};

#line 1015 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_alloc_site_data_0[1] = {
  (MR_Integer) 0
};

#line 1020 "ml_backend.ml_global_data.c"
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

#line 1037 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2backend_libs__rtti__type_ctor_info_rtti_id_0ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0,
    (MR_TypeInfo) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0
  }
};

#line 1046 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

#line 1054 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0,
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0
  }
};

#line 1063 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0,
    (MR_TypeInfo) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0
  }
};

#line 1072 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0
  }
};

#line 1080 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0,
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0
  }
};

#line 1089 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0,
    (MR_TypeInfo) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0
  }
};

#line 1098 "ml_backend.ml_global_data.c"
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

#line 1116 "ml_backend.ml_global_data.c"
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

#line 1134 "ml_backend.ml_global_data.c"
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

#line 1149 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_global_data_0_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_global_data_0_0
};

#line 1154 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_global_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_global_data_0_0
  }
};

#line 1163 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_global_data_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_global_data_0_0
};

#line 1168 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_global_data_0[1] = {
  (MR_Integer) 0
};

#line 1173 "ml_backend.ml_global_data.c"
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

#line 1190 "ml_backend.ml_global_data.c"
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

#line 1207 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_rval_and_type_0_0[2] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0
};

#line 1213 "ml_backend.ml_global_data.c"
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

#line 1228 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_rval_and_type_0_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_rval_and_type_0_0
};

#line 1233 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_rval_and_type_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_rval_and_type_0_0
  }
};

#line 1242 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_rval_and_type_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_rval_and_type_0_0
};

#line 1247 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_rval_and_type_0[1] = {
  (MR_Integer) 0
};

#line 1252 "ml_backend.ml_global_data.c"
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

#line 1269 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__bimap__ti_bimap_2ml_backend__mlds__type_ctor_info_mlds_initializer_0ml_backend__mlds__type_ctor_info_mlds_scalar_common_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0,
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0
  }
};

#line 1278 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_initializer_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0
  }
};

#line 1286 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_scalar_cell_group_0_0[5] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_initializer_array_size_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__bimap__ti_bimap_2ml_backend__mlds__type_ctor_info_mlds_initializer_0ml_backend__mlds__type_ctor_info_mlds_scalar_common_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_initializer_0
};

#line 1295 "ml_backend.ml_global_data.c"
static const MR_ConstString ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_scalar_cell_group_0_0[5] = {
  (MR_String) "mscg_type",
  (MR_String) "mscg_array_size",
  (MR_String) "mscg_counter",
  (MR_String) "mscg_members",
  (MR_String) "mscg_rows"
};

#line 1304 "ml_backend.ml_global_data.c"
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

#line 1319 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_scalar_cell_group_0_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_scalar_cell_group_0_0
};

#line 1324 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_scalar_cell_group_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_scalar_cell_group_0_0
  }
};

#line 1333 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_scalar_cell_group_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_scalar_cell_group_0_0
};

#line 1338 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_scalar_cell_group_0[1] = {
  (MR_Integer) 0
};

#line 1343 "ml_backend.ml_global_data.c"
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

#line 1360 "ml_backend.ml_global_data.c"
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

#line 1377 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_scalar_cell_type_0_0[2] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_initializer_array_size_0
};

#line 1383 "ml_backend.ml_global_data.c"
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

#line 1398 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_scalar_cell_type_0_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_scalar_cell_type_0_0
};

#line 1403 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_scalar_cell_type_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_scalar_cell_type_0_0
  }
};

#line 1412 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_scalar_cell_type_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_scalar_cell_type_0_0
};

#line 1417 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_scalar_cell_type_0[1] = {
  (MR_Integer) 0
};

#line 1422 "ml_backend.ml_global_data.c"
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

#line 1439 "ml_backend.ml_global_data.c"
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

#line 1456 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_field_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_id_0
  }
};

#line 1464 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_vector_cell_group_0_0[5] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_field_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_initializer_0
};

#line 1473 "ml_backend.ml_global_data.c"
static const MR_ConstString ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_vector_cell_group_0_0[5] = {
  (MR_String) "mvcg_type",
  (MR_String) "mvcg_type_defn",
  (MR_String) "mvcg_field_ids",
  (MR_String) "mvcg_next_row",
  (MR_String) "mvcg_rows"
};

#line 1482 "ml_backend.ml_global_data.c"
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

#line 1497 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_vector_cell_group_0_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_vector_cell_group_0_0
};

#line 1502 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_vector_cell_group_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_vector_cell_group_0_0
  }
};

#line 1511 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_vector_cell_group_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_vector_cell_group_0_0
};

#line 1516 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_vector_cell_group_0[1] = {
  (MR_Integer) 0
};

#line 1521 "ml_backend.ml_global_data.c"
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

#line 1538 "ml_backend.ml_global_data.c"
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

#line 1555 "ml_backend.ml_global_data.c"
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

#line 1572 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_use_common_cells_0_0 = {
  (MR_String) "do_not_use_common_cells",
  (MR_Integer) 0
};

#line 1578 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_use_common_cells_0_1 = {
  (MR_String) "use_common_cells",
  (MR_Integer) 1
};

#line 1584 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_value_ordered_use_common_cells_0[2] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_use_common_cells_0_0,
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_use_common_cells_0_1
};

#line 1590 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_name_ordered_use_common_cells_0[2] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_use_common_cells_0_0,
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_use_common_cells_0_1
};

#line 1596 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_use_common_cells_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1602 "ml_backend.ml_global_data.c"
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

#line 1619 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____have_unboxed_floats_0_0_10001(
#line 1622 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 1624 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 1626 "ml_backend.ml_global_data.c"
{
#line 1628 "ml_backend.ml_global_data.c"
  {
#line 1630 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 1633 "ml_backend.ml_global_data.c"
    {
#line 1635 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____have_unboxed_floats_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 1638 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 1640 "ml_backend.ml_global_data.c"
  }
#line 1642 "ml_backend.ml_global_data.c"
}

#line 1645 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____have_unboxed_floats_0_0_10001(
#line 1648 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 1650 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 1652 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 1654 "ml_backend.ml_global_data.c"
{
#line 1656 "ml_backend.ml_global_data.c"
  {
#line 1658 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 1661 "ml_backend.ml_global_data.c"
    {
#line 1663 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____have_unboxed_floats_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 1666 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 1668 "ml_backend.ml_global_data.c"
  }
#line 1670 "ml_backend.ml_global_data.c"
}

#line 1673 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_alloc_id_map_0_0_10001(
#line 1676 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 1678 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 1680 "ml_backend.ml_global_data.c"
{
#line 1682 "ml_backend.ml_global_data.c"
  {
#line 1684 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 1687 "ml_backend.ml_global_data.c"
    {
#line 1689 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_alloc_id_map_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 1692 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 1694 "ml_backend.ml_global_data.c"
  }
#line 1696 "ml_backend.ml_global_data.c"
}

#line 1699 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_alloc_id_map_0_0_10001(
#line 1702 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 1704 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 1706 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 1708 "ml_backend.ml_global_data.c"
{
#line 1710 "ml_backend.ml_global_data.c"
  {
#line 1712 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 1715 "ml_backend.ml_global_data.c"
    {
#line 1717 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_alloc_id_map_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 1720 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 1722 "ml_backend.ml_global_data.c"
  }
#line 1724 "ml_backend.ml_global_data.c"
}

#line 1727 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_alloc_site_data_0_0_10001(
#line 1730 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 1732 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 1734 "ml_backend.ml_global_data.c"
{
#line 1736 "ml_backend.ml_global_data.c"
  {
#line 1738 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 1741 "ml_backend.ml_global_data.c"
    {
#line 1743 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_alloc_site_data_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 1746 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 1748 "ml_backend.ml_global_data.c"
  }
#line 1750 "ml_backend.ml_global_data.c"
}

#line 1753 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_alloc_site_data_0_0_10001(
#line 1756 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 1758 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 1760 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 1762 "ml_backend.ml_global_data.c"
{
#line 1764 "ml_backend.ml_global_data.c"
  {
#line 1766 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 1769 "ml_backend.ml_global_data.c"
    {
#line 1771 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_alloc_site_data_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 1774 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 1776 "ml_backend.ml_global_data.c"
  }
#line 1778 "ml_backend.ml_global_data.c"
}

#line 1781 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_global_data_0_0_10001(
#line 1784 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 1786 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 1788 "ml_backend.ml_global_data.c"
{
#line 1790 "ml_backend.ml_global_data.c"
  {
#line 1792 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 1795 "ml_backend.ml_global_data.c"
    {
#line 1797 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_global_data_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 1800 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 1802 "ml_backend.ml_global_data.c"
  }
#line 1804 "ml_backend.ml_global_data.c"
}

#line 1807 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_global_data_0_0_10001(
#line 1810 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 1812 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 1814 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 1816 "ml_backend.ml_global_data.c"
{
#line 1818 "ml_backend.ml_global_data.c"
  {
#line 1820 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 1823 "ml_backend.ml_global_data.c"
    {
#line 1825 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_global_data_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 1828 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 1830 "ml_backend.ml_global_data.c"
  }
#line 1832 "ml_backend.ml_global_data.c"
}

#line 1835 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_rtti_rval_type_map_0_0_10001(
#line 1838 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 1840 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 1842 "ml_backend.ml_global_data.c"
{
#line 1844 "ml_backend.ml_global_data.c"
  {
#line 1846 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 1849 "ml_backend.ml_global_data.c"
    {
#line 1851 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_rtti_rval_type_map_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 1854 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 1856 "ml_backend.ml_global_data.c"
  }
#line 1858 "ml_backend.ml_global_data.c"
}

#line 1861 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_rtti_rval_type_map_0_0_10001(
#line 1864 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 1866 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 1868 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 1870 "ml_backend.ml_global_data.c"
{
#line 1872 "ml_backend.ml_global_data.c"
  {
#line 1874 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 1877 "ml_backend.ml_global_data.c"
    {
#line 1879 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_rtti_rval_type_map_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 1882 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 1884 "ml_backend.ml_global_data.c"
  }
#line 1886 "ml_backend.ml_global_data.c"
}

#line 1889 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_rval_and_type_0_0_10001(
#line 1892 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 1894 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 1896 "ml_backend.ml_global_data.c"
{
#line 1898 "ml_backend.ml_global_data.c"
  {
#line 1900 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 1903 "ml_backend.ml_global_data.c"
    {
#line 1905 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_rval_and_type_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 1908 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 1910 "ml_backend.ml_global_data.c"
  }
#line 1912 "ml_backend.ml_global_data.c"
}

#line 1915 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_rval_and_type_0_0_10001(
#line 1918 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 1920 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 1922 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 1924 "ml_backend.ml_global_data.c"
{
#line 1926 "ml_backend.ml_global_data.c"
  {
#line 1928 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 1931 "ml_backend.ml_global_data.c"
    {
#line 1933 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_rval_and_type_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 1936 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 1938 "ml_backend.ml_global_data.c"
  }
#line 1940 "ml_backend.ml_global_data.c"
}

#line 1943 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_group_0_0_10001(
#line 1946 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 1948 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 1950 "ml_backend.ml_global_data.c"
{
#line 1952 "ml_backend.ml_global_data.c"
  {
#line 1954 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 1957 "ml_backend.ml_global_data.c"
    {
#line 1959 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_scalar_cell_group_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 1962 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 1964 "ml_backend.ml_global_data.c"
  }
#line 1966 "ml_backend.ml_global_data.c"
}

#line 1969 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_group_0_0_10001(
#line 1972 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 1974 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 1976 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 1978 "ml_backend.ml_global_data.c"
{
#line 1980 "ml_backend.ml_global_data.c"
  {
#line 1982 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 1985 "ml_backend.ml_global_data.c"
    {
#line 1987 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_scalar_cell_group_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 1990 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 1992 "ml_backend.ml_global_data.c"
  }
#line 1994 "ml_backend.ml_global_data.c"
}

#line 1997 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_map_0_0_10001(
#line 2000 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 2002 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 2004 "ml_backend.ml_global_data.c"
{
#line 2006 "ml_backend.ml_global_data.c"
  {
#line 2008 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 2011 "ml_backend.ml_global_data.c"
    {
#line 2013 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_scalar_cell_map_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 2016 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 2018 "ml_backend.ml_global_data.c"
  }
#line 2020 "ml_backend.ml_global_data.c"
}

#line 2023 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_map_0_0_10001(
#line 2026 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 2028 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 2030 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 2032 "ml_backend.ml_global_data.c"
{
#line 2034 "ml_backend.ml_global_data.c"
  {
#line 2036 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 2039 "ml_backend.ml_global_data.c"
    {
#line 2041 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_scalar_cell_map_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 2044 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 2046 "ml_backend.ml_global_data.c"
  }
#line 2048 "ml_backend.ml_global_data.c"
}

#line 2051 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_0_0_10001(
#line 2054 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 2056 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 2058 "ml_backend.ml_global_data.c"
{
#line 2060 "ml_backend.ml_global_data.c"
  {
#line 2062 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 2065 "ml_backend.ml_global_data.c"
    {
#line 2067 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_scalar_cell_type_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 2070 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 2072 "ml_backend.ml_global_data.c"
  }
#line 2074 "ml_backend.ml_global_data.c"
}

#line 2077 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_0_0_10001(
#line 2080 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 2082 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 2084 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 2086 "ml_backend.ml_global_data.c"
{
#line 2088 "ml_backend.ml_global_data.c"
  {
#line 2090 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 2093 "ml_backend.ml_global_data.c"
    {
#line 2095 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_scalar_cell_type_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 2098 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 2100 "ml_backend.ml_global_data.c"
  }
#line 2102 "ml_backend.ml_global_data.c"
}

#line 2105 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_map_0_0_10001(
#line 2108 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 2110 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 2112 "ml_backend.ml_global_data.c"
{
#line 2114 "ml_backend.ml_global_data.c"
  {
#line 2116 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 2119 "ml_backend.ml_global_data.c"
    {
#line 2121 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_scalar_cell_type_map_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 2124 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 2126 "ml_backend.ml_global_data.c"
  }
#line 2128 "ml_backend.ml_global_data.c"
}

#line 2131 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_map_0_0_10001(
#line 2134 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 2136 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 2138 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 2140 "ml_backend.ml_global_data.c"
{
#line 2142 "ml_backend.ml_global_data.c"
  {
#line 2144 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 2147 "ml_backend.ml_global_data.c"
    {
#line 2149 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_scalar_cell_type_map_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 2152 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 2154 "ml_backend.ml_global_data.c"
  }
#line 2156 "ml_backend.ml_global_data.c"
}

#line 2159 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_group_0_0_10001(
#line 2162 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 2164 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 2166 "ml_backend.ml_global_data.c"
{
#line 2168 "ml_backend.ml_global_data.c"
  {
#line 2170 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 2173 "ml_backend.ml_global_data.c"
    {
#line 2175 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_vector_cell_group_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 2178 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 2180 "ml_backend.ml_global_data.c"
  }
#line 2182 "ml_backend.ml_global_data.c"
}

#line 2185 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_group_0_0_10001(
#line 2188 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 2190 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 2192 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 2194 "ml_backend.ml_global_data.c"
{
#line 2196 "ml_backend.ml_global_data.c"
  {
#line 2198 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 2201 "ml_backend.ml_global_data.c"
    {
#line 2203 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_vector_cell_group_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 2206 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 2208 "ml_backend.ml_global_data.c"
  }
#line 2210 "ml_backend.ml_global_data.c"
}

#line 2213 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_map_0_0_10001(
#line 2216 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 2218 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 2220 "ml_backend.ml_global_data.c"
{
#line 2222 "ml_backend.ml_global_data.c"
  {
#line 2224 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 2227 "ml_backend.ml_global_data.c"
    {
#line 2229 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_vector_cell_map_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 2232 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 2234 "ml_backend.ml_global_data.c"
  }
#line 2236 "ml_backend.ml_global_data.c"
}

#line 2239 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_map_0_0_10001(
#line 2242 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 2244 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 2246 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 2248 "ml_backend.ml_global_data.c"
{
#line 2250 "ml_backend.ml_global_data.c"
  {
#line 2252 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 2255 "ml_backend.ml_global_data.c"
    {
#line 2257 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_vector_cell_map_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 2260 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 2262 "ml_backend.ml_global_data.c"
  }
#line 2264 "ml_backend.ml_global_data.c"
}

#line 2267 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_type_map_0_0_10001(
#line 2270 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 2272 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 2274 "ml_backend.ml_global_data.c"
{
#line 2276 "ml_backend.ml_global_data.c"
  {
#line 2278 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 2281 "ml_backend.ml_global_data.c"
    {
#line 2283 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_vector_cell_type_map_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 2286 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 2288 "ml_backend.ml_global_data.c"
  }
#line 2290 "ml_backend.ml_global_data.c"
}

#line 2293 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_type_map_0_0_10001(
#line 2296 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 2298 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 2300 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 2302 "ml_backend.ml_global_data.c"
{
#line 2304 "ml_backend.ml_global_data.c"
  {
#line 2306 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 2309 "ml_backend.ml_global_data.c"
    {
#line 2311 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_vector_cell_type_map_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 2314 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 2316 "ml_backend.ml_global_data.c"
  }
#line 2318 "ml_backend.ml_global_data.c"
}

#line 2321 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____use_common_cells_0_0_10001(
#line 2324 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 2326 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 2328 "ml_backend.ml_global_data.c"
{
#line 2330 "ml_backend.ml_global_data.c"
  {
#line 2332 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 2335 "ml_backend.ml_global_data.c"
    {
#line 2337 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____use_common_cells_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 2340 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 2342 "ml_backend.ml_global_data.c"
  }
#line 2344 "ml_backend.ml_global_data.c"
}

#line 2347 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____use_common_cells_0_0_10001(
#line 2350 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 2352 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 2354 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 2356 "ml_backend.ml_global_data.c"
{
#line 2358 "ml_backend.ml_global_data.c"
  {
#line 2360 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 2363 "ml_backend.ml_global_data.c"
    {
#line 2365 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____use_common_cells_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 2368 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 2370 "ml_backend.ml_global_data.c"
  }
#line 2372 "ml_backend.ml_global_data.c"
}

#line 43 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data____Compare____use_common_cells_0_0(
#line 43 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 43 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 43 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
#line 43 "ml_global_data.m"
{
#line 43 "ml_global_data.m"
  {
#line 43 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 43 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__Cast_HeadVar1_4 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;
#line 43 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__Cast_HeadVar2_5 = (MR_Integer) ml_backend__ml_global_data__HeadVar__3_3;

#line 43 "ml_global_data.m"
    {
#line 43 "ml_global_data.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_global_data__HeadVar__1_1, ml_backend__ml_global_data__Cast_HeadVar1_4, ml_backend__ml_global_data__Cast_HeadVar2_5);
    }
#line 43 "ml_global_data.m"
  }
#line 43 "ml_global_data.m"
}

#line 43 "ml_global_data.m"
MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____use_common_cells_0_0(
#line 43 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_1,
#line 43 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
#line 43 "ml_global_data.m"
{
#line 2414 "ml_backend.ml_global_data.c"
  {
#line 2416 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__HeadVar__2_1 == ml_backend__ml_global_data__HeadVar__2_2);

#line 2419 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 2421 "ml_backend.ml_global_data.c"
  }
#line 43 "ml_global_data.m"
}

#line 233 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_type_map_0_0(
#line 233 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 233 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 233 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
#line 233 "ml_global_data.m"
{
#line 233 "ml_global_data.m"
  {
#line 233 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 233 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_4 = ml_backend__ml_global_data__HeadVar__2_2;
#line 233 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_5 = ml_backend__ml_global_data__HeadVar__3_3;

#line 233 "ml_global_data.m"
    {
#line 233 "ml_global_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[4], ml_backend__ml_global_data__HeadVar__1_1, ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_5)));
    }
#line 233 "ml_global_data.m"
  }
#line 233 "ml_global_data.m"
}

#line 233 "ml_global_data.m"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_type_map_0_0(
#line 233 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 233 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
#line 233 "ml_global_data.m"
{
#line 233 "ml_global_data.m"
  {
#line 233 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 233 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_3 = ml_backend__ml_global_data__HeadVar__1_1;
#line 233 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_4 = ml_backend__ml_global_data__HeadVar__2_2;

#line 233 "ml_global_data.m"
    {
#line 233 "ml_global_data.m"
      ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[4], ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_4)));
    }
#line 233 "ml_global_data.m"
    return ml_backend__ml_global_data__succeeded;
#line 233 "ml_global_data.m"
  }
#line 233 "ml_global_data.m"
}

#line 65 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_map_0_0(
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
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_4 = ml_backend__ml_global_data__HeadVar__2_2;
#line 65 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_5 = ml_backend__ml_global_data__HeadVar__3_3;

#line 65 "ml_global_data.m"
    {
#line 65 "ml_global_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[5], ml_backend__ml_global_data__HeadVar__1_1, ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_5)));
    }
#line 65 "ml_global_data.m"
  }
#line 65 "ml_global_data.m"
}

#line 65 "ml_global_data.m"
MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_map_0_0(
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
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_3 = ml_backend__ml_global_data__HeadVar__1_1;
#line 65 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_4 = ml_backend__ml_global_data__HeadVar__2_2;

#line 65 "ml_global_data.m"
    {
#line 65 "ml_global_data.m"
      ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[5], ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_4)));
    }
#line 65 "ml_global_data.m"
    return ml_backend__ml_global_data__succeeded;
#line 65 "ml_global_data.m"
  }
#line 65 "ml_global_data.m"
}

#line 68 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_group_0_0(
#line 68 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 68 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 68 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
#line 68 "ml_global_data.m"
{
#line 68 "ml_global_data.m"
  {
#line 68 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 68 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastX_18 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;
#line 68 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastY_19 = (MR_Integer) ml_backend__ml_global_data__HeadVar__3_3;

#line 68 "ml_global_data.m"
    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_18 == ml_backend__ml_global_data__CastY_19);
#line 68 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 2570 "ml_backend.ml_global_data.c"
      *ml_backend__ml_global_data__HeadVar__1_1 = (MR_Integer) 0;
#line 68 "ml_global_data.m"
    else
#line 68 "ml_global_data.m"
      {
#line 68 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 68 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 68 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 2)));
#line 68 "ml_global_data.m"
        MR_Integer ml_backend__ml_global_data__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 3)));
#line 68 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 4)));
#line 68 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 0)));
#line 68 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 1)));
#line 68 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 2)));
#line 68 "ml_global_data.m"
        MR_Integer ml_backend__ml_global_data__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 3)));
#line 68 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 4)));
#line 68 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_14_14;

#line 68 "ml_global_data.m"
        {
#line 68 "ml_global_data.m"
          ml_backend__mlds____Compare____mlds_type_0_0(&ml_backend__ml_global_data__V_14_14, ml_backend__ml_global_data__V_4_4, ml_backend__ml_global_data__V_9_9);
        }
#line 2604 "ml_backend.ml_global_data.c"
        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_14_14 == (MR_Integer) 0);
#line 68 "ml_global_data.m"
        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 68 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 68 "ml_global_data.m"
          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_14_14;
#line 68 "ml_global_data.m"
        else
#line 68 "ml_global_data.m"
          {
#line 68 "ml_global_data.m"
            MR_Word ml_backend__ml_global_data__V_15_15;

#line 68 "ml_global_data.m"
            {
#line 68 "ml_global_data.m"
              ml_backend__mlds____Compare____mlds_defn_0_0(&ml_backend__ml_global_data__V_15_15, ml_backend__ml_global_data__V_5_5, ml_backend__ml_global_data__V_10_10);
            }
#line 2624 "ml_backend.ml_global_data.c"
            ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_15_15 == (MR_Integer) 0);
#line 68 "ml_global_data.m"
            ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 68 "ml_global_data.m"
            if (ml_backend__ml_global_data__succeeded)
#line 68 "ml_global_data.m"
              *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_15_15;
#line 68 "ml_global_data.m"
            else
#line 68 "ml_global_data.m"
              {
#line 68 "ml_global_data.m"
                MR_Word ml_backend__ml_global_data__V_16_16;

#line 68 "ml_global_data.m"
                {
#line 68 "ml_global_data.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[3], &ml_backend__ml_global_data__V_16_16, ((MR_Box) (ml_backend__ml_global_data__V_6_6)), ((MR_Box) (ml_backend__ml_global_data__V_11_11)));
                }
#line 2644 "ml_backend.ml_global_data.c"
                ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_16_16 == (MR_Integer) 0);
#line 68 "ml_global_data.m"
                ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 68 "ml_global_data.m"
                if (ml_backend__ml_global_data__succeeded)
#line 68 "ml_global_data.m"
                  *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_16_16;
#line 68 "ml_global_data.m"
                else
#line 68 "ml_global_data.m"
                  {
#line 68 "ml_global_data.m"
                    MR_Word ml_backend__ml_global_data__V_17_17;

#line 68 "ml_global_data.m"
                    {
#line 68 "ml_global_data.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_global_data__V_17_17, ml_backend__ml_global_data__V_7_7, ml_backend__ml_global_data__V_12_12);
                    }
#line 2664 "ml_backend.ml_global_data.c"
                    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_17_17 == (MR_Integer) 0);
#line 68 "ml_global_data.m"
                    ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 68 "ml_global_data.m"
                    if (ml_backend__ml_global_data__succeeded)
#line 68 "ml_global_data.m"
                      *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_17_17;
#line 68 "ml_global_data.m"
                    else
#line 68 "ml_global_data.m"
                      {
#line 68 "ml_global_data.m"
                        {
#line 68 "ml_global_data.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[2], ml_backend__ml_global_data__HeadVar__1_1, ((MR_Box) (ml_backend__ml_global_data__V_8_8)), ((MR_Box) (ml_backend__ml_global_data__V_13_13)));
                        }
#line 68 "ml_global_data.m"
                      }
#line 68 "ml_global_data.m"
                  }
#line 68 "ml_global_data.m"
              }
#line 68 "ml_global_data.m"
          }
#line 68 "ml_global_data.m"
      }
#line 68 "ml_global_data.m"
  }
#line 68 "ml_global_data.m"
}

#line 68 "ml_global_data.m"
MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_group_0_0(
#line 68 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 68 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
#line 68 "ml_global_data.m"
{
#line 68 "ml_global_data.m"
  {
#line 68 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 68 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastX_13 = (MR_Integer) ml_backend__ml_global_data__HeadVar__1_1;
#line 68 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastY_14 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;

#line 68 "ml_global_data.m"
    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_13 == ml_backend__ml_global_data__CastY_14);
#line 68 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 68 "ml_global_data.m"
      ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 68 "ml_global_data.m"
    else
#line 68 "ml_global_data.m"
      {
#line 68 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeInfo_17_17;
#line 68 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeInfo_18_18;
#line 68 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 0)));
#line 68 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 1)));
#line 68 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 2)));
#line 68 "ml_global_data.m"
        MR_Integer ml_backend__ml_global_data__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 3)));
#line 68 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 4)));
#line 68 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 68 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 68 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 2)));
#line 68 "ml_global_data.m"
        MR_Integer ml_backend__ml_global_data__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 3)));
#line 68 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 4)));

#line 2749 "ml_backend.ml_global_data.c"
        {
#line 2751 "ml_backend.ml_global_data.c"
          ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ml_backend__ml_global_data__V_3_3, ml_backend__ml_global_data__V_8_8);
        }
#line 68 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 68 "ml_global_data.m"
          {
#line 2758 "ml_backend.ml_global_data.c"
            {
#line 2760 "ml_backend.ml_global_data.c"
              ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____mlds_defn_0_0(ml_backend__ml_global_data__V_4_4, ml_backend__ml_global_data__V_9_9);
            }
#line 68 "ml_global_data.m"
            if (ml_backend__ml_global_data__succeeded)
#line 68 "ml_global_data.m"
              {
#line 2767 "ml_backend.ml_global_data.c"
                ml_backend__ml_global_data__TypeInfo_17_17 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[3];
#line 2769 "ml_backend.ml_global_data.c"
                {
#line 2771 "ml_backend.ml_global_data.c"
                  ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_17_17, ((MR_Box) (ml_backend__ml_global_data__V_5_5)), ((MR_Box) (ml_backend__ml_global_data__V_10_10)));
                }
#line 68 "ml_global_data.m"
                if (ml_backend__ml_global_data__succeeded)
#line 68 "ml_global_data.m"
                  {
#line 2778 "ml_backend.ml_global_data.c"
                    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_6_6 == ml_backend__ml_global_data__V_11_11);
#line 68 "ml_global_data.m"
                    if (ml_backend__ml_global_data__succeeded)
#line 68 "ml_global_data.m"
                      {
#line 2784 "ml_backend.ml_global_data.c"
                        ml_backend__ml_global_data__TypeInfo_18_18 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[2];
#line 2786 "ml_backend.ml_global_data.c"
                        {
#line 2788 "ml_backend.ml_global_data.c"
                          ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_18_18, ((MR_Box) (ml_backend__ml_global_data__V_7_7)), ((MR_Box) (ml_backend__ml_global_data__V_12_12)));
                        }
#line 68 "ml_global_data.m"
                      }
#line 68 "ml_global_data.m"
                  }
#line 68 "ml_global_data.m"
              }
#line 68 "ml_global_data.m"
          }
#line 68 "ml_global_data.m"
      }
#line 68 "ml_global_data.m"
    return ml_backend__ml_global_data__succeeded;
#line 68 "ml_global_data.m"
  }
#line 68 "ml_global_data.m"
}

#line 230 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_map_0_0(
#line 230 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 230 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 230 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
#line 230 "ml_global_data.m"
{
#line 230 "ml_global_data.m"
  {
#line 230 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 230 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_4 = ml_backend__ml_global_data__HeadVar__2_2;
#line 230 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_5 = ml_backend__ml_global_data__HeadVar__3_3;

#line 230 "ml_global_data.m"
    {
#line 230 "ml_global_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[2], ml_backend__ml_global_data__HeadVar__1_1, ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_5)));
    }
#line 230 "ml_global_data.m"
  }
#line 230 "ml_global_data.m"
}

#line 230 "ml_global_data.m"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_map_0_0(
#line 230 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 230 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
#line 230 "ml_global_data.m"
{
#line 230 "ml_global_data.m"
  {
#line 230 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 230 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_3 = ml_backend__ml_global_data__HeadVar__1_1;
#line 230 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_4 = ml_backend__ml_global_data__HeadVar__2_2;

#line 230 "ml_global_data.m"
    {
#line 230 "ml_global_data.m"
      ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[2], ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_4)));
    }
#line 230 "ml_global_data.m"
    return ml_backend__ml_global_data__succeeded;
#line 230 "ml_global_data.m"
  }
#line 230 "ml_global_data.m"
}

#line 228 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_0_0(
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
    MR_Integer ml_backend__ml_global_data__CastX_9 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;
#line 228 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastY_10 = (MR_Integer) ml_backend__ml_global_data__HeadVar__3_3;

#line 228 "ml_global_data.m"
    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_9 == ml_backend__ml_global_data__CastY_10);
#line 228 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 2892 "ml_backend.ml_global_data.c"
      *ml_backend__ml_global_data__HeadVar__1_1 = (MR_Integer) 0;
#line 228 "ml_global_data.m"
    else
#line 228 "ml_global_data.m"
      {
#line 228 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 228 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 228 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 0)));
#line 228 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 1)));
#line 228 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_8_8;

#line 228 "ml_global_data.m"
        {
#line 228 "ml_global_data.m"
          ml_backend__mlds____Compare____mlds_type_0_0(&ml_backend__ml_global_data__V_8_8, ml_backend__ml_global_data__V_4_4, ml_backend__ml_global_data__V_6_6);
        }
#line 2914 "ml_backend.ml_global_data.c"
        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_8_8 == (MR_Integer) 0);
#line 228 "ml_global_data.m"
        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 228 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 228 "ml_global_data.m"
          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_8_8;
#line 228 "ml_global_data.m"
        else
#line 228 "ml_global_data.m"
          {
#line 228 "ml_global_data.m"
            ml_backend__mlds____Compare____initializer_array_size_0_0(ml_backend__ml_global_data__HeadVar__1_1, ml_backend__ml_global_data__V_5_5, ml_backend__ml_global_data__V_7_7);
          }
#line 228 "ml_global_data.m"
      }
#line 228 "ml_global_data.m"
  }
#line 228 "ml_global_data.m"
}

#line 228 "ml_global_data.m"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_0_0(
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
    MR_Integer ml_backend__ml_global_data__CastX_7 = (MR_Integer) ml_backend__ml_global_data__HeadVar__1_1;
#line 228 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastY_8 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;

#line 228 "ml_global_data.m"
    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_7 == ml_backend__ml_global_data__CastY_8);
#line 228 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 228 "ml_global_data.m"
      ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 228 "ml_global_data.m"
    else
#line 228 "ml_global_data.m"
      {
#line 228 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 0)));
#line 228 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 1)));
#line 228 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 228 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));

#line 2973 "ml_backend.ml_global_data.c"
        {
#line 2975 "ml_backend.ml_global_data.c"
          ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ml_backend__ml_global_data__V_3_3, ml_backend__ml_global_data__V_5_5);
        }
#line 228 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 2980 "ml_backend.ml_global_data.c"
          {
#line 2982 "ml_backend.ml_global_data.c"
            ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____initializer_array_size_0_0(ml_backend__ml_global_data__V_4_4, ml_backend__ml_global_data__V_6_6);
          }
#line 228 "ml_global_data.m"
      }
#line 228 "ml_global_data.m"
    return ml_backend__ml_global_data__succeeded;
#line 228 "ml_global_data.m"
  }
#line 228 "ml_global_data.m"
}

#line 51 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_map_0_0(
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
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_4 = ml_backend__ml_global_data__HeadVar__2_2;
#line 51 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_5 = ml_backend__ml_global_data__HeadVar__3_3;

#line 51 "ml_global_data.m"
    {
#line 51 "ml_global_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[3], ml_backend__ml_global_data__HeadVar__1_1, ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_5)));
    }
#line 51 "ml_global_data.m"
  }
#line 51 "ml_global_data.m"
}

#line 51 "ml_global_data.m"
MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_map_0_0(
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
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_3 = ml_backend__ml_global_data__HeadVar__1_1;
#line 51 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_4 = ml_backend__ml_global_data__HeadVar__2_2;

#line 51 "ml_global_data.m"
    {
#line 51 "ml_global_data.m"
      ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[3], ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_4)));
    }
#line 51 "ml_global_data.m"
    return ml_backend__ml_global_data__succeeded;
#line 51 "ml_global_data.m"
  }
#line 51 "ml_global_data.m"
}

#line 54 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_group_0_0(
#line 54 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 54 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 54 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
#line 54 "ml_global_data.m"
{
#line 54 "ml_global_data.m"
  {
#line 54 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 54 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastX_18 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;
#line 54 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastY_19 = (MR_Integer) ml_backend__ml_global_data__HeadVar__3_3;

#line 54 "ml_global_data.m"
    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_18 == ml_backend__ml_global_data__CastY_19);
#line 54 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 3078 "ml_backend.ml_global_data.c"
      *ml_backend__ml_global_data__HeadVar__1_1 = (MR_Integer) 0;
#line 54 "ml_global_data.m"
    else
#line 54 "ml_global_data.m"
      {
#line 54 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 54 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 54 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 2)));
#line 54 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 3)));
#line 54 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 4)));
#line 54 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 0)));
#line 54 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 1)));
#line 54 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 2)));
#line 54 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 3)));
#line 54 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 4)));
#line 54 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_14_14;

#line 54 "ml_global_data.m"
        {
#line 54 "ml_global_data.m"
          ml_backend__mlds____Compare____mlds_type_0_0(&ml_backend__ml_global_data__V_14_14, ml_backend__ml_global_data__V_4_4, ml_backend__ml_global_data__V_9_9);
        }
#line 3112 "ml_backend.ml_global_data.c"
        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_14_14 == (MR_Integer) 0);
#line 54 "ml_global_data.m"
        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 54 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 54 "ml_global_data.m"
          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_14_14;
#line 54 "ml_global_data.m"
        else
#line 54 "ml_global_data.m"
          {
#line 54 "ml_global_data.m"
            MR_Word ml_backend__ml_global_data__V_15_15;

#line 54 "ml_global_data.m"
            {
#line 54 "ml_global_data.m"
              ml_backend__mlds____Compare____initializer_array_size_0_0(&ml_backend__ml_global_data__V_15_15, ml_backend__ml_global_data__V_5_5, ml_backend__ml_global_data__V_10_10);
            }
#line 3132 "ml_backend.ml_global_data.c"
            ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_15_15 == (MR_Integer) 0);
#line 54 "ml_global_data.m"
            ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 54 "ml_global_data.m"
            if (ml_backend__ml_global_data__succeeded)
#line 54 "ml_global_data.m"
              *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_15_15;
#line 54 "ml_global_data.m"
            else
#line 54 "ml_global_data.m"
              {
#line 54 "ml_global_data.m"
                MR_Word ml_backend__ml_global_data__V_16_16;

#line 54 "ml_global_data.m"
                {
#line 54 "ml_global_data.m"
                  mercury__counter____Compare____counter_0_0(&ml_backend__ml_global_data__V_16_16, ml_backend__ml_global_data__V_6_6, ml_backend__ml_global_data__V_11_11);
                }
#line 3152 "ml_backend.ml_global_data.c"
                ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_16_16 == (MR_Integer) 0);
#line 54 "ml_global_data.m"
                ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 54 "ml_global_data.m"
                if (ml_backend__ml_global_data__succeeded)
#line 54 "ml_global_data.m"
                  *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_16_16;
#line 54 "ml_global_data.m"
                else
#line 54 "ml_global_data.m"
                  {
#line 54 "ml_global_data.m"
                    MR_Word ml_backend__ml_global_data__V_17_17;

#line 54 "ml_global_data.m"
                    {
#line 54 "ml_global_data.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[6], &ml_backend__ml_global_data__V_17_17, ((MR_Box) (ml_backend__ml_global_data__V_7_7)), ((MR_Box) (ml_backend__ml_global_data__V_12_12)));
                    }
#line 3172 "ml_backend.ml_global_data.c"
                    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_17_17 == (MR_Integer) 0);
#line 54 "ml_global_data.m"
                    ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 54 "ml_global_data.m"
                    if (ml_backend__ml_global_data__succeeded)
#line 54 "ml_global_data.m"
                      *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_17_17;
#line 54 "ml_global_data.m"
                    else
#line 54 "ml_global_data.m"
                      {
#line 54 "ml_global_data.m"
                        {
#line 54 "ml_global_data.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[2], ml_backend__ml_global_data__HeadVar__1_1, ((MR_Box) (ml_backend__ml_global_data__V_8_8)), ((MR_Box) (ml_backend__ml_global_data__V_13_13)));
                        }
#line 54 "ml_global_data.m"
                      }
#line 54 "ml_global_data.m"
                  }
#line 54 "ml_global_data.m"
              }
#line 54 "ml_global_data.m"
          }
#line 54 "ml_global_data.m"
      }
#line 54 "ml_global_data.m"
  }
#line 54 "ml_global_data.m"
}

#line 54 "ml_global_data.m"
MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_group_0_0(
#line 54 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 54 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
#line 54 "ml_global_data.m"
{
#line 54 "ml_global_data.m"
  {
#line 54 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 54 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastX_13 = (MR_Integer) ml_backend__ml_global_data__HeadVar__1_1;
#line 54 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastY_14 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;

#line 54 "ml_global_data.m"
    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_13 == ml_backend__ml_global_data__CastY_14);
#line 54 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 54 "ml_global_data.m"
      ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 54 "ml_global_data.m"
    else
#line 54 "ml_global_data.m"
      {
#line 54 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeInfo_18_18;
#line 54 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeInfo_19_19;
#line 54 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 0)));
#line 54 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 1)));
#line 54 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 2)));
#line 54 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 3)));
#line 54 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 4)));
#line 54 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 54 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 54 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 2)));
#line 54 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 3)));
#line 54 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 4)));

#line 3257 "ml_backend.ml_global_data.c"
        {
#line 3259 "ml_backend.ml_global_data.c"
          ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ml_backend__ml_global_data__V_3_3, ml_backend__ml_global_data__V_8_8);
        }
#line 54 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 54 "ml_global_data.m"
          {
#line 3266 "ml_backend.ml_global_data.c"
            {
#line 3268 "ml_backend.ml_global_data.c"
              ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____initializer_array_size_0_0(ml_backend__ml_global_data__V_4_4, ml_backend__ml_global_data__V_9_9);
            }
#line 54 "ml_global_data.m"
            if (ml_backend__ml_global_data__succeeded)
#line 54 "ml_global_data.m"
              {
#line 3275 "ml_backend.ml_global_data.c"
                {
#line 3277 "ml_backend.ml_global_data.c"
                  ml_backend__ml_global_data__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_global_data__V_5_5, ml_backend__ml_global_data__V_10_10);
                }
#line 54 "ml_global_data.m"
                if (ml_backend__ml_global_data__succeeded)
#line 54 "ml_global_data.m"
                  {
#line 3284 "ml_backend.ml_global_data.c"
                    ml_backend__ml_global_data__TypeInfo_18_18 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[6];
#line 3286 "ml_backend.ml_global_data.c"
                    {
#line 3288 "ml_backend.ml_global_data.c"
                      ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_18_18, ((MR_Box) (ml_backend__ml_global_data__V_6_6)), ((MR_Box) (ml_backend__ml_global_data__V_11_11)));
                    }
#line 54 "ml_global_data.m"
                    if (ml_backend__ml_global_data__succeeded)
#line 54 "ml_global_data.m"
                      {
#line 3295 "ml_backend.ml_global_data.c"
                        ml_backend__ml_global_data__TypeInfo_19_19 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[2];
#line 3297 "ml_backend.ml_global_data.c"
                        {
#line 3299 "ml_backend.ml_global_data.c"
                          ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_19_19, ((MR_Box) (ml_backend__ml_global_data__V_7_7)), ((MR_Box) (ml_backend__ml_global_data__V_12_12)));
                        }
#line 54 "ml_global_data.m"
                      }
#line 54 "ml_global_data.m"
                  }
#line 54 "ml_global_data.m"
              }
#line 54 "ml_global_data.m"
          }
#line 54 "ml_global_data.m"
      }
#line 54 "ml_global_data.m"
    return ml_backend__ml_global_data__succeeded;
#line 54 "ml_global_data.m"
  }
#line 54 "ml_global_data.m"
}

#line 134 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data____Compare____ml_rval_and_type_0_0(
#line 134 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 134 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 134 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
#line 134 "ml_global_data.m"
{
#line 134 "ml_global_data.m"
  {
#line 134 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 134 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastX_9 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;
#line 134 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastY_10 = (MR_Integer) ml_backend__ml_global_data__HeadVar__3_3;

#line 134 "ml_global_data.m"
    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_9 == ml_backend__ml_global_data__CastY_10);
#line 134 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 3343 "ml_backend.ml_global_data.c"
      *ml_backend__ml_global_data__HeadVar__1_1 = (MR_Integer) 0;
#line 134 "ml_global_data.m"
    else
#line 134 "ml_global_data.m"
      {
#line 134 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 134 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 134 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 0)));
#line 134 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 1)));
#line 134 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_8_8;

#line 134 "ml_global_data.m"
        {
#line 134 "ml_global_data.m"
          ml_backend__mlds____Compare____mlds_rval_0_0(&ml_backend__ml_global_data__V_8_8, ml_backend__ml_global_data__V_4_4, ml_backend__ml_global_data__V_6_6);
        }
#line 3365 "ml_backend.ml_global_data.c"
        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_8_8 == (MR_Integer) 0);
#line 134 "ml_global_data.m"
        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 134 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 134 "ml_global_data.m"
          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_8_8;
#line 134 "ml_global_data.m"
        else
#line 134 "ml_global_data.m"
          {
#line 134 "ml_global_data.m"
            ml_backend__mlds____Compare____mlds_type_0_0(ml_backend__ml_global_data__HeadVar__1_1, ml_backend__ml_global_data__V_5_5, ml_backend__ml_global_data__V_7_7);
          }
#line 134 "ml_global_data.m"
      }
#line 134 "ml_global_data.m"
  }
#line 134 "ml_global_data.m"
}

#line 134 "ml_global_data.m"
MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_rval_and_type_0_0(
#line 134 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 134 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
#line 134 "ml_global_data.m"
{
#line 134 "ml_global_data.m"
  {
#line 134 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 134 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastX_7 = (MR_Integer) ml_backend__ml_global_data__HeadVar__1_1;
#line 134 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastY_8 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;

#line 134 "ml_global_data.m"
    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_7 == ml_backend__ml_global_data__CastY_8);
#line 134 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 134 "ml_global_data.m"
      ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 134 "ml_global_data.m"
    else
#line 134 "ml_global_data.m"
      {
#line 134 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 0)));
#line 134 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 1)));
#line 134 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 134 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));

#line 3424 "ml_backend.ml_global_data.c"
        {
#line 3426 "ml_backend.ml_global_data.c"
          ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ml_backend__ml_global_data__V_3_3, ml_backend__ml_global_data__V_5_5);
        }
#line 134 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 3431 "ml_backend.ml_global_data.c"
          {
#line 3433 "ml_backend.ml_global_data.c"
            ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ml_backend__ml_global_data__V_4_4, ml_backend__ml_global_data__V_6_6);
          }
#line 134 "ml_global_data.m"
      }
#line 134 "ml_global_data.m"
    return ml_backend__ml_global_data__succeeded;
#line 134 "ml_global_data.m"
  }
#line 134 "ml_global_data.m"
}

#line 133 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data____Compare____ml_rtti_rval_type_map_0_0(
#line 133 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 133 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 133 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
#line 133 "ml_global_data.m"
{
#line 133 "ml_global_data.m"
  {
#line 133 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 133 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_4 = ml_backend__ml_global_data__HeadVar__2_2;
#line 133 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_5 = ml_backend__ml_global_data__HeadVar__3_3;

#line 133 "ml_global_data.m"
    {
#line 133 "ml_global_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[1], ml_backend__ml_global_data__HeadVar__1_1, ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_5)));
    }
#line 133 "ml_global_data.m"
  }
#line 133 "ml_global_data.m"
}

#line 133 "ml_global_data.m"
MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_rtti_rval_type_map_0_0(
#line 133 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 133 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
#line 133 "ml_global_data.m"
{
#line 133 "ml_global_data.m"
  {
#line 133 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 133 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_3 = ml_backend__ml_global_data__HeadVar__1_1;
#line 133 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_4 = ml_backend__ml_global_data__HeadVar__2_2;

#line 133 "ml_global_data.m"
    {
#line 133 "ml_global_data.m"
      ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[1], ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_4)));
    }
#line 133 "ml_global_data.m"
    return ml_backend__ml_global_data__succeeded;
#line 133 "ml_global_data.m"
  }
#line 133 "ml_global_data.m"
}

#line 239 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data____Compare____ml_global_data_0_0(
#line 239 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 239 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 239 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
#line 239 "ml_global_data.m"
{
#line 239 "ml_global_data.m"
  {
#line 239 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 239 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastX_45 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;
#line 239 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastY_46 = (MR_Integer) ml_backend__ml_global_data__HeadVar__3_3;

#line 239 "ml_global_data.m"
    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_45 == ml_backend__ml_global_data__CastY_46);
#line 239 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 3529 "ml_backend.ml_global_data.c"
      *ml_backend__ml_global_data__HeadVar__1_1 = (MR_Integer) 0;
#line 239 "ml_global_data.m"
    else
#line 239 "ml_global_data.m"
      {
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 2)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 3)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 4)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 5)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 6)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 7)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 8)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 9)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 10)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 11)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 12)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 13)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 0)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 1)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 2)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 3)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 4)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 5)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 6)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 7)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 8)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 9)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 10)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 11)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 12)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 13)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_32_32;

#line 239 "ml_global_data.m"
        {
#line 239 "ml_global_data.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[1], &ml_backend__ml_global_data__V_32_32, ((MR_Box) (ml_backend__ml_global_data__V_4_4)), ((MR_Box) (ml_backend__ml_global_data__V_18_18)));
        }
#line 3599 "ml_backend.ml_global_data.c"
        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_32_32 == (MR_Integer) 0);
#line 239 "ml_global_data.m"
        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 239 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 239 "ml_global_data.m"
          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_32_32;
#line 239 "ml_global_data.m"
        else
#line 239 "ml_global_data.m"
          {
#line 239 "ml_global_data.m"
            MR_Word ml_backend__ml_global_data__V_33_33;
#line 239 "ml_global_data.m"
            MR_Integer ml_backend__ml_global_data__V_61_61 = (MR_Integer) ml_backend__ml_global_data__V_5_5;
#line 239 "ml_global_data.m"
            MR_Integer ml_backend__ml_global_data__V_62_62 = (MR_Integer) ml_backend__ml_global_data__V_19_19;

#line 239 "ml_global_data.m"
            {
#line 239 "ml_global_data.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_global_data__V_33_33, ml_backend__ml_global_data__V_61_61, ml_backend__ml_global_data__V_62_62);
            }
#line 3623 "ml_backend.ml_global_data.c"
            ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_33_33 == (MR_Integer) 0);
#line 239 "ml_global_data.m"
            ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 239 "ml_global_data.m"
            if (ml_backend__ml_global_data__succeeded)
#line 239 "ml_global_data.m"
              *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_33_33;
#line 239 "ml_global_data.m"
            else
#line 239 "ml_global_data.m"
              {
#line 239 "ml_global_data.m"
                MR_Word ml_backend__ml_global_data__V_34_34;
#line 239 "ml_global_data.m"
                MR_Integer ml_backend__ml_global_data__V_63_63 = (MR_Integer) ml_backend__ml_global_data__V_6_6;
#line 239 "ml_global_data.m"
                MR_Integer ml_backend__ml_global_data__V_64_64 = (MR_Integer) ml_backend__ml_global_data__V_20_20;

#line 239 "ml_global_data.m"
                {
#line 239 "ml_global_data.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_global_data__V_34_34, ml_backend__ml_global_data__V_63_63, ml_backend__ml_global_data__V_64_64);
                }
#line 3647 "ml_backend.ml_global_data.c"
                ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_34_34 == (MR_Integer) 0);
#line 239 "ml_global_data.m"
                ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 239 "ml_global_data.m"
                if (ml_backend__ml_global_data__succeeded)
#line 239 "ml_global_data.m"
                  *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_34_34;
#line 239 "ml_global_data.m"
                else
#line 239 "ml_global_data.m"
                  {
#line 239 "ml_global_data.m"
                    MR_Word ml_backend__ml_global_data__V_35_35;

#line 239 "ml_global_data.m"
                    {
#line 239 "ml_global_data.m"
                      mercury__counter____Compare____counter_0_0(&ml_backend__ml_global_data__V_35_35, ml_backend__ml_global_data__V_7_7, ml_backend__ml_global_data__V_21_21);
                    }
#line 3667 "ml_backend.ml_global_data.c"
                    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_35_35 == (MR_Integer) 0);
#line 239 "ml_global_data.m"
                    ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 239 "ml_global_data.m"
                    if (ml_backend__ml_global_data__succeeded)
#line 239 "ml_global_data.m"
                      *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_35_35;
#line 239 "ml_global_data.m"
                    else
#line 239 "ml_global_data.m"
                      {
#line 239 "ml_global_data.m"
                        MR_Word ml_backend__ml_global_data__V_36_36;

#line 239 "ml_global_data.m"
                        {
#line 239 "ml_global_data.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[1], &ml_backend__ml_global_data__V_36_36, ((MR_Box) (ml_backend__ml_global_data__V_8_8)), ((MR_Box) (ml_backend__ml_global_data__V_22_22)));
                        }
#line 3687 "ml_backend.ml_global_data.c"
                        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_36_36 == (MR_Integer) 0);
#line 239 "ml_global_data.m"
                        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 239 "ml_global_data.m"
                        if (ml_backend__ml_global_data__succeeded)
#line 239 "ml_global_data.m"
                          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_36_36;
#line 239 "ml_global_data.m"
                        else
#line 239 "ml_global_data.m"
                          {
#line 239 "ml_global_data.m"
                            MR_Word ml_backend__ml_global_data__V_37_37;

#line 239 "ml_global_data.m"
                            {
#line 239 "ml_global_data.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[1], &ml_backend__ml_global_data__V_37_37, ((MR_Box) (ml_backend__ml_global_data__V_9_9)), ((MR_Box) (ml_backend__ml_global_data__V_23_23)));
                            }
#line 3707 "ml_backend.ml_global_data.c"
                            ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_37_37 == (MR_Integer) 0);
#line 239 "ml_global_data.m"
                            ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 239 "ml_global_data.m"
                            if (ml_backend__ml_global_data__succeeded)
#line 239 "ml_global_data.m"
                              *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_37_37;
#line 239 "ml_global_data.m"
                            else
#line 239 "ml_global_data.m"
                              {
#line 239 "ml_global_data.m"
                                MR_Word ml_backend__ml_global_data__V_38_38;

#line 239 "ml_global_data.m"
                                {
#line 239 "ml_global_data.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[1], &ml_backend__ml_global_data__V_38_38, ((MR_Box) (ml_backend__ml_global_data__V_10_10)), ((MR_Box) (ml_backend__ml_global_data__V_24_24)));
                                }
#line 3727 "ml_backend.ml_global_data.c"
                                ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_38_38 == (MR_Integer) 0);
#line 239 "ml_global_data.m"
                                ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 239 "ml_global_data.m"
                                if (ml_backend__ml_global_data__succeeded)
#line 239 "ml_global_data.m"
                                  *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_38_38;
#line 239 "ml_global_data.m"
                                else
#line 239 "ml_global_data.m"
                                  {
#line 239 "ml_global_data.m"
                                    MR_Word ml_backend__ml_global_data__V_39_39;

#line 239 "ml_global_data.m"
                                    {
#line 239 "ml_global_data.m"
                                      mercury__counter____Compare____counter_0_0(&ml_backend__ml_global_data__V_39_39, ml_backend__ml_global_data__V_11_11, ml_backend__ml_global_data__V_25_25);
                                    }
#line 3747 "ml_backend.ml_global_data.c"
                                    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_39_39 == (MR_Integer) 0);
#line 239 "ml_global_data.m"
                                    ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 239 "ml_global_data.m"
                                    if (ml_backend__ml_global_data__succeeded)
#line 239 "ml_global_data.m"
                                      *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_39_39;
#line 239 "ml_global_data.m"
                                    else
#line 239 "ml_global_data.m"
                                      {
#line 239 "ml_global_data.m"
                                        MR_Word ml_backend__ml_global_data__V_40_40;

#line 239 "ml_global_data.m"
                                        {
#line 239 "ml_global_data.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[2], &ml_backend__ml_global_data__V_40_40, ((MR_Box) (ml_backend__ml_global_data__V_12_12)), ((MR_Box) (ml_backend__ml_global_data__V_26_26)));
                                        }
#line 3767 "ml_backend.ml_global_data.c"
                                        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_40_40 == (MR_Integer) 0);
#line 239 "ml_global_data.m"
                                        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 239 "ml_global_data.m"
                                        if (ml_backend__ml_global_data__succeeded)
#line 239 "ml_global_data.m"
                                          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_40_40;
#line 239 "ml_global_data.m"
                                        else
#line 239 "ml_global_data.m"
                                          {
#line 239 "ml_global_data.m"
                                            MR_Word ml_backend__ml_global_data__V_41_41;

#line 239 "ml_global_data.m"
                                            {
#line 239 "ml_global_data.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[3], &ml_backend__ml_global_data__V_41_41, ((MR_Box) (ml_backend__ml_global_data__V_13_13)), ((MR_Box) (ml_backend__ml_global_data__V_27_27)));
                                            }
#line 3787 "ml_backend.ml_global_data.c"
                                            ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_41_41 == (MR_Integer) 0);
#line 239 "ml_global_data.m"
                                            ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 239 "ml_global_data.m"
                                            if (ml_backend__ml_global_data__succeeded)
#line 239 "ml_global_data.m"
                                              *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_41_41;
#line 239 "ml_global_data.m"
                                            else
#line 239 "ml_global_data.m"
                                              {
#line 239 "ml_global_data.m"
                                                MR_Word ml_backend__ml_global_data__V_42_42;

#line 239 "ml_global_data.m"
                                                {
#line 239 "ml_global_data.m"
                                                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[4], &ml_backend__ml_global_data__V_42_42, ((MR_Box) (ml_backend__ml_global_data__V_14_14)), ((MR_Box) (ml_backend__ml_global_data__V_28_28)));
                                                }
#line 3807 "ml_backend.ml_global_data.c"
                                                ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_42_42 == (MR_Integer) 0);
#line 239 "ml_global_data.m"
                                                ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 239 "ml_global_data.m"
                                                if (ml_backend__ml_global_data__succeeded)
#line 239 "ml_global_data.m"
                                                  *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_42_42;
#line 239 "ml_global_data.m"
                                                else
#line 239 "ml_global_data.m"
                                                  {
#line 239 "ml_global_data.m"
                                                    MR_Word ml_backend__ml_global_data__V_43_43;

#line 239 "ml_global_data.m"
                                                    {
#line 239 "ml_global_data.m"
                                                      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[5], &ml_backend__ml_global_data__V_43_43, ((MR_Box) (ml_backend__ml_global_data__V_15_15)), ((MR_Box) (ml_backend__ml_global_data__V_29_29)));
                                                    }
#line 3827 "ml_backend.ml_global_data.c"
                                                    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_43_43 == (MR_Integer) 0);
#line 239 "ml_global_data.m"
                                                    ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 239 "ml_global_data.m"
                                                    if (ml_backend__ml_global_data__succeeded)
#line 239 "ml_global_data.m"
                                                      *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_43_43;
#line 239 "ml_global_data.m"
                                                    else
#line 239 "ml_global_data.m"
                                                      {
#line 239 "ml_global_data.m"
                                                        MR_Word ml_backend__ml_global_data__V_44_44;

#line 239 "ml_global_data.m"
                                                        {
#line 239 "ml_global_data.m"
                                                          mercury__counter____Compare____counter_0_0(&ml_backend__ml_global_data__V_44_44, ml_backend__ml_global_data__V_16_16, ml_backend__ml_global_data__V_30_30);
                                                        }
#line 3847 "ml_backend.ml_global_data.c"
                                                        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_44_44 == (MR_Integer) 0);
#line 239 "ml_global_data.m"
                                                        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 239 "ml_global_data.m"
                                                        if (ml_backend__ml_global_data__succeeded)
#line 239 "ml_global_data.m"
                                                          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_44_44;
#line 239 "ml_global_data.m"
                                                        else
#line 239 "ml_global_data.m"
                                                          {
#line 239 "ml_global_data.m"
                                                            {
#line 239 "ml_global_data.m"
                                                              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[0], ml_backend__ml_global_data__HeadVar__1_1, ((MR_Box) (ml_backend__ml_global_data__V_17_17)), ((MR_Box) (ml_backend__ml_global_data__V_31_31)));
                                                            }
#line 239 "ml_global_data.m"
                                                          }
#line 239 "ml_global_data.m"
                                                      }
#line 239 "ml_global_data.m"
                                                  }
#line 239 "ml_global_data.m"
                                              }
#line 239 "ml_global_data.m"
                                          }
#line 239 "ml_global_data.m"
                                      }
#line 239 "ml_global_data.m"
                                  }
#line 239 "ml_global_data.m"
                              }
#line 239 "ml_global_data.m"
                          }
#line 239 "ml_global_data.m"
                      }
#line 239 "ml_global_data.m"
                  }
#line 239 "ml_global_data.m"
              }
#line 239 "ml_global_data.m"
          }
#line 239 "ml_global_data.m"
      }
#line 239 "ml_global_data.m"
  }
#line 239 "ml_global_data.m"
}

#line 239 "ml_global_data.m"
MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_global_data_0_0(
#line 239 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 239 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
#line 239 "ml_global_data.m"
{
#line 239 "ml_global_data.m"
  {
#line 239 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 239 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastX_31 = (MR_Integer) ml_backend__ml_global_data__HeadVar__1_1;
#line 239 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastY_32 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;

#line 239 "ml_global_data.m"
    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_31 == ml_backend__ml_global_data__CastY_32);
#line 239 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 239 "ml_global_data.m"
      ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 239 "ml_global_data.m"
    else
#line 239 "ml_global_data.m"
      {
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeInfo_35_35;
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeInfo_36_36;
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeInfo_37_37;
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeInfo_39_39;
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeInfo_40_40;
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeInfo_41_41;
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeInfo_42_42;
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeInfo_44_44;
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 0)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 1)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 2)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 3)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 4)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 5)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 6)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 7)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 8)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 9)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 10)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 11)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 12)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 13)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 2)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 3)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 4)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 5)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 6)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 7)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 8)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 9)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 10)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 11)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 12)));
#line 239 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 13)));

#line 3998 "ml_backend.ml_global_data.c"
        {
#line 4000 "ml_backend.ml_global_data.c"
          ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[1], ((MR_Box) (ml_backend__ml_global_data__V_3_3)), ((MR_Box) (ml_backend__ml_global_data__V_17_17)));
        }
#line 239 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 239 "ml_global_data.m"
          {
#line 4007 "ml_backend.ml_global_data.c"
            ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_4_4 == ml_backend__ml_global_data__V_18_18);
#line 239 "ml_global_data.m"
            if (ml_backend__ml_global_data__succeeded)
#line 239 "ml_global_data.m"
              {
#line 4013 "ml_backend.ml_global_data.c"
                ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_5_5 == ml_backend__ml_global_data__V_19_19);
#line 239 "ml_global_data.m"
                if (ml_backend__ml_global_data__succeeded)
#line 239 "ml_global_data.m"
                  {
#line 4019 "ml_backend.ml_global_data.c"
                    {
#line 4021 "ml_backend.ml_global_data.c"
                      ml_backend__ml_global_data__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_global_data__V_6_6, ml_backend__ml_global_data__V_20_20);
                    }
#line 239 "ml_global_data.m"
                    if (ml_backend__ml_global_data__succeeded)
#line 239 "ml_global_data.m"
                      {
#line 4028 "ml_backend.ml_global_data.c"
                        ml_backend__ml_global_data__TypeInfo_35_35 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[1];
#line 4030 "ml_backend.ml_global_data.c"
                        {
#line 4032 "ml_backend.ml_global_data.c"
                          ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_35_35, ((MR_Box) (ml_backend__ml_global_data__V_7_7)), ((MR_Box) (ml_backend__ml_global_data__V_21_21)));
                        }
#line 239 "ml_global_data.m"
                        if (ml_backend__ml_global_data__succeeded)
#line 239 "ml_global_data.m"
                          {
#line 4039 "ml_backend.ml_global_data.c"
                            ml_backend__ml_global_data__TypeInfo_36_36 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[1];
#line 4041 "ml_backend.ml_global_data.c"
                            {
#line 4043 "ml_backend.ml_global_data.c"
                              ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_36_36, ((MR_Box) (ml_backend__ml_global_data__V_8_8)), ((MR_Box) (ml_backend__ml_global_data__V_22_22)));
                            }
#line 239 "ml_global_data.m"
                            if (ml_backend__ml_global_data__succeeded)
#line 239 "ml_global_data.m"
                              {
#line 4050 "ml_backend.ml_global_data.c"
                                ml_backend__ml_global_data__TypeInfo_37_37 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[1];
#line 4052 "ml_backend.ml_global_data.c"
                                {
#line 4054 "ml_backend.ml_global_data.c"
                                  ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_37_37, ((MR_Box) (ml_backend__ml_global_data__V_9_9)), ((MR_Box) (ml_backend__ml_global_data__V_23_23)));
                                }
#line 239 "ml_global_data.m"
                                if (ml_backend__ml_global_data__succeeded)
#line 239 "ml_global_data.m"
                                  {
#line 4061 "ml_backend.ml_global_data.c"
                                    {
#line 4063 "ml_backend.ml_global_data.c"
                                      ml_backend__ml_global_data__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_global_data__V_10_10, ml_backend__ml_global_data__V_24_24);
                                    }
#line 239 "ml_global_data.m"
                                    if (ml_backend__ml_global_data__succeeded)
#line 239 "ml_global_data.m"
                                      {
#line 4070 "ml_backend.ml_global_data.c"
                                        ml_backend__ml_global_data__TypeInfo_39_39 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[2];
#line 4072 "ml_backend.ml_global_data.c"
                                        {
#line 4074 "ml_backend.ml_global_data.c"
                                          ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_39_39, ((MR_Box) (ml_backend__ml_global_data__V_11_11)), ((MR_Box) (ml_backend__ml_global_data__V_25_25)));
                                        }
#line 239 "ml_global_data.m"
                                        if (ml_backend__ml_global_data__succeeded)
#line 239 "ml_global_data.m"
                                          {
#line 4081 "ml_backend.ml_global_data.c"
                                            ml_backend__ml_global_data__TypeInfo_40_40 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[3];
#line 4083 "ml_backend.ml_global_data.c"
                                            {
#line 4085 "ml_backend.ml_global_data.c"
                                              ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_40_40, ((MR_Box) (ml_backend__ml_global_data__V_12_12)), ((MR_Box) (ml_backend__ml_global_data__V_26_26)));
                                            }
#line 239 "ml_global_data.m"
                                            if (ml_backend__ml_global_data__succeeded)
#line 239 "ml_global_data.m"
                                              {
#line 4092 "ml_backend.ml_global_data.c"
                                                ml_backend__ml_global_data__TypeInfo_41_41 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[4];
#line 4094 "ml_backend.ml_global_data.c"
                                                {
#line 4096 "ml_backend.ml_global_data.c"
                                                  ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_41_41, ((MR_Box) (ml_backend__ml_global_data__V_13_13)), ((MR_Box) (ml_backend__ml_global_data__V_27_27)));
                                                }
#line 239 "ml_global_data.m"
                                                if (ml_backend__ml_global_data__succeeded)
#line 239 "ml_global_data.m"
                                                  {
#line 4103 "ml_backend.ml_global_data.c"
                                                    ml_backend__ml_global_data__TypeInfo_42_42 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[5];
#line 4105 "ml_backend.ml_global_data.c"
                                                    {
#line 4107 "ml_backend.ml_global_data.c"
                                                      ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_42_42, ((MR_Box) (ml_backend__ml_global_data__V_14_14)), ((MR_Box) (ml_backend__ml_global_data__V_28_28)));
                                                    }
#line 239 "ml_global_data.m"
                                                    if (ml_backend__ml_global_data__succeeded)
#line 239 "ml_global_data.m"
                                                      {
#line 4114 "ml_backend.ml_global_data.c"
                                                        {
#line 4116 "ml_backend.ml_global_data.c"
                                                          ml_backend__ml_global_data__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_global_data__V_15_15, ml_backend__ml_global_data__V_29_29);
                                                        }
#line 239 "ml_global_data.m"
                                                        if (ml_backend__ml_global_data__succeeded)
#line 239 "ml_global_data.m"
                                                          {
#line 4123 "ml_backend.ml_global_data.c"
                                                            ml_backend__ml_global_data__TypeInfo_44_44 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[0];
#line 4125 "ml_backend.ml_global_data.c"
                                                            {
#line 4127 "ml_backend.ml_global_data.c"
                                                              ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_44_44, ((MR_Box) (ml_backend__ml_global_data__V_16_16)), ((MR_Box) (ml_backend__ml_global_data__V_30_30)));
                                                            }
#line 239 "ml_global_data.m"
                                                          }
#line 239 "ml_global_data.m"
                                                      }
#line 239 "ml_global_data.m"
                                                  }
#line 239 "ml_global_data.m"
                                              }
#line 239 "ml_global_data.m"
                                          }
#line 239 "ml_global_data.m"
                                      }
#line 239 "ml_global_data.m"
                                  }
#line 239 "ml_global_data.m"
                              }
#line 239 "ml_global_data.m"
                          }
#line 239 "ml_global_data.m"
                      }
#line 239 "ml_global_data.m"
                  }
#line 239 "ml_global_data.m"
              }
#line 239 "ml_global_data.m"
          }
#line 239 "ml_global_data.m"
      }
#line 239 "ml_global_data.m"
    return ml_backend__ml_global_data__succeeded;
#line 239 "ml_global_data.m"
  }
#line 239 "ml_global_data.m"
}

#line 78 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data____Compare____ml_alloc_site_data_0_0(
#line 78 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 78 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 78 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
#line 78 "ml_global_data.m"
{
#line 78 "ml_global_data.m"
  {
#line 78 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 78 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastX_15 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;
#line 78 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastY_16 = (MR_Integer) ml_backend__ml_global_data__HeadVar__3_3;

#line 78 "ml_global_data.m"
    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_15 == ml_backend__ml_global_data__CastY_16);
#line 78 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 4189 "ml_backend.ml_global_data.c"
      *ml_backend__ml_global_data__HeadVar__1_1 = (MR_Integer) 0;
#line 78 "ml_global_data.m"
    else
#line 78 "ml_global_data.m"
      {
#line 78 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 78 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 78 "ml_global_data.m"
        MR_String ml_backend__ml_global_data__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 2)));
#line 78 "ml_global_data.m"
        MR_Integer ml_backend__ml_global_data__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 3)));
#line 78 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 0)));
#line 78 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 1)));
#line 78 "ml_global_data.m"
        MR_String ml_backend__ml_global_data__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 2)));
#line 78 "ml_global_data.m"
        MR_Integer ml_backend__ml_global_data__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 3)));
#line 78 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_12_12;

#line 78 "ml_global_data.m"
        {
#line 78 "ml_global_data.m"
          ml_backend__mlds____Compare____mlds_entity_name_0_0(&ml_backend__ml_global_data__V_12_12, ml_backend__ml_global_data__V_4_4, ml_backend__ml_global_data__V_8_8);
        }
#line 4219 "ml_backend.ml_global_data.c"
        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_12_12 == (MR_Integer) 0);
#line 78 "ml_global_data.m"
        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 78 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 78 "ml_global_data.m"
          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_12_12;
#line 78 "ml_global_data.m"
        else
#line 78 "ml_global_data.m"
          {
#line 78 "ml_global_data.m"
            MR_Word ml_backend__ml_global_data__V_13_13;

#line 78 "ml_global_data.m"
            {
#line 78 "ml_global_data.m"
              mercury__term____Compare____context_0_0(&ml_backend__ml_global_data__V_13_13, ml_backend__ml_global_data__V_5_5, ml_backend__ml_global_data__V_9_9);
            }
#line 4239 "ml_backend.ml_global_data.c"
            ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_13_13 == (MR_Integer) 0);
#line 78 "ml_global_data.m"
            ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 78 "ml_global_data.m"
            if (ml_backend__ml_global_data__succeeded)
#line 78 "ml_global_data.m"
              *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_13_13;
#line 78 "ml_global_data.m"
            else
#line 78 "ml_global_data.m"
              {
#line 78 "ml_global_data.m"
                MR_Word ml_backend__ml_global_data__V_14_14;

#line 78 "ml_global_data.m"
                {
#line 78 "ml_global_data.m"
                  mercury__private_builtin__builtin_compare_string_3_p_0(&ml_backend__ml_global_data__V_14_14, ml_backend__ml_global_data__V_6_6, ml_backend__ml_global_data__V_10_10);
                }
#line 4259 "ml_backend.ml_global_data.c"
                ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_14_14 == (MR_Integer) 0);
#line 78 "ml_global_data.m"
                ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 78 "ml_global_data.m"
                if (ml_backend__ml_global_data__succeeded)
#line 78 "ml_global_data.m"
                  *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_14_14;
#line 78 "ml_global_data.m"
                else
#line 78 "ml_global_data.m"
                  {
#line 78 "ml_global_data.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_global_data__HeadVar__1_1, ml_backend__ml_global_data__V_7_7, ml_backend__ml_global_data__V_11_11);
                  }
#line 78 "ml_global_data.m"
              }
#line 78 "ml_global_data.m"
          }
#line 78 "ml_global_data.m"
      }
#line 78 "ml_global_data.m"
  }
#line 78 "ml_global_data.m"
}

#line 78 "ml_global_data.m"
MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_alloc_site_data_0_0(
#line 78 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 78 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
#line 78 "ml_global_data.m"
{
#line 78 "ml_global_data.m"
  {
#line 78 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 78 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastX_11 = (MR_Integer) ml_backend__ml_global_data__HeadVar__1_1;
#line 78 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastY_12 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;

#line 78 "ml_global_data.m"
    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_11 == ml_backend__ml_global_data__CastY_12);
#line 78 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 78 "ml_global_data.m"
      ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 78 "ml_global_data.m"
    else
#line 78 "ml_global_data.m"
      {
#line 78 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 0)));
#line 78 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 1)));
#line 78 "ml_global_data.m"
        MR_String ml_backend__ml_global_data__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 2)));
#line 78 "ml_global_data.m"
        MR_Integer ml_backend__ml_global_data__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 3)));
#line 78 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 78 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 78 "ml_global_data.m"
        MR_String ml_backend__ml_global_data__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 2)));
#line 78 "ml_global_data.m"
        MR_Integer ml_backend__ml_global_data__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 3)));

#line 4330 "ml_backend.ml_global_data.c"
        {
#line 4332 "ml_backend.ml_global_data.c"
          ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____mlds_entity_name_0_0(ml_backend__ml_global_data__V_3_3, ml_backend__ml_global_data__V_7_7);
        }
#line 78 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 78 "ml_global_data.m"
          {
#line 4339 "ml_backend.ml_global_data.c"
            {
#line 4341 "ml_backend.ml_global_data.c"
              ml_backend__ml_global_data__succeeded = mercury__term____Unify____context_0_0(ml_backend__ml_global_data__V_4_4, ml_backend__ml_global_data__V_8_8);
            }
#line 78 "ml_global_data.m"
            if (ml_backend__ml_global_data__succeeded)
#line 78 "ml_global_data.m"
              {
#line 4348 "ml_backend.ml_global_data.c"
                ml_backend__ml_global_data__succeeded = (strcmp(ml_backend__ml_global_data__V_5_5, ml_backend__ml_global_data__V_9_9) == 0);
#line 78 "ml_global_data.m"
                if (ml_backend__ml_global_data__succeeded)
#line 4352 "ml_backend.ml_global_data.c"
                  ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_6_6 == ml_backend__ml_global_data__V_10_10);
#line 78 "ml_global_data.m"
              }
#line 78 "ml_global_data.m"
          }
#line 78 "ml_global_data.m"
      }
#line 78 "ml_global_data.m"
    return ml_backend__ml_global_data__succeeded;
#line 78 "ml_global_data.m"
  }
#line 78 "ml_global_data.m"
}

#line 236 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_alloc_id_map_0_0(
#line 236 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 236 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 236 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
#line 236 "ml_global_data.m"
{
#line 236 "ml_global_data.m"
  {
#line 236 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 236 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_4 = ml_backend__ml_global_data__HeadVar__2_2;
#line 236 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_5 = ml_backend__ml_global_data__HeadVar__3_3;

#line 236 "ml_global_data.m"
    {
#line 236 "ml_global_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[0], ml_backend__ml_global_data__HeadVar__1_1, ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_5)));
    }
#line 236 "ml_global_data.m"
  }
#line 236 "ml_global_data.m"
}

#line 236 "ml_global_data.m"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_alloc_id_map_0_0(
#line 236 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 236 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
#line 236 "ml_global_data.m"
{
#line 236 "ml_global_data.m"
  {
#line 236 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 236 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_3 = ml_backend__ml_global_data__HeadVar__1_1;
#line 236 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_4 = ml_backend__ml_global_data__HeadVar__2_2;

#line 236 "ml_global_data.m"
    {
#line 236 "ml_global_data.m"
      ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[0], ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_4)));
    }
#line 236 "ml_global_data.m"
    return ml_backend__ml_global_data__succeeded;
#line 236 "ml_global_data.m"
  }
#line 236 "ml_global_data.m"
}

#line 47 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data____Compare____have_unboxed_floats_0_0(
#line 47 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 47 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 47 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
#line 47 "ml_global_data.m"
{
#line 47 "ml_global_data.m"
  {
#line 47 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 47 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__Cast_HeadVar1_4 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;
#line 47 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__Cast_HeadVar2_5 = (MR_Integer) ml_backend__ml_global_data__HeadVar__3_3;

#line 47 "ml_global_data.m"
    {
#line 47 "ml_global_data.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(ml_backend__ml_global_data__HeadVar__1_1, ml_backend__ml_global_data__Cast_HeadVar1_4, ml_backend__ml_global_data__Cast_HeadVar2_5);
    }
#line 47 "ml_global_data.m"
  }
#line 47 "ml_global_data.m"
}

#line 47 "ml_global_data.m"
MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____have_unboxed_floats_0_0(
#line 47 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_1,
#line 47 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
#line 47 "ml_global_data.m"
{
#line 4466 "ml_backend.ml_global_data.c"
  {
#line 4468 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__HeadVar__2_1 == ml_backend__ml_global_data__HeadVar__2_2);

#line 4471 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 4473 "ml_backend.ml_global_data.c"
  }
#line 47 "ml_global_data.m"
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
                ml_backend__ml_global_data__TypeStr_4 = parse_tree__prog_out__type_ctor_to_string_1_f_0(ml_backend__ml_global_data__TypeCtor_7);
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
                ml_backend__ml_global_data__TypeStr_4 = mercury__string__f_43_43_2_f_0((MR_String) "{}/", ml_backend__ml_global_data__V_35_35);
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

#line 528 "ml_global_data.m"
static MR_bool MR_CALL 
ml_backend__ml_global_data__ml_specialize_generic_array_rval_2_p_0(
#line 528 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13,
#line 528 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_Rval_14)
#line 528 "ml_global_data.m"
{
#line 533 "ml_global_data.m"
  while (MR_TRUE)
#line 533 "ml_global_data.m"
    {
#line 533 "ml_global_data.m"
      /* tailcall optimized into a loop */
#line 533 "ml_global_data.m"
      {
#line 533 "ml_global_data.m"
        MR_bool ml_backend__ml_global_data__succeeded;

#line 533 "ml_global_data.m"
#line 533 "ml_global_data.m"
        switch (MR_tag((MR_Word) ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13)) {
#line 533 "ml_global_data.m"
          default:
#line 533 "ml_global_data.m"
            ml_backend__ml_global_data__succeeded = MR_FALSE;
#line 533 "ml_global_data.m"
            break;
#line 533 "ml_global_data.m"
          case (MR_Integer) 3:
#line 533 "ml_global_data.m"
#line 533 "ml_global_data.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13, (MR_Integer) 0)))) {
#line 533 "ml_global_data.m"
              default:
#line 533 "ml_global_data.m"
                ml_backend__ml_global_data__succeeded = MR_FALSE;
#line 533 "ml_global_data.m"
                break;
#line 533 "ml_global_data.m"
              case (MR_Integer) 0:
#line 533 "ml_global_data.m"
                {
#line 533 "ml_global_data.m"
                  MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13, (MR_Integer) 1)));
#line 533 "ml_global_data.m"
                  MR_Float ml_backend__ml_global_data__V_4_4;

#line 533 "ml_global_data.m"
                  ml_backend__ml_global_data__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_global_data__V_21_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__V_21_21, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 533 "ml_global_data.m"
                  if (ml_backend__ml_global_data__succeeded)
#line 533 "ml_global_data.m"
                    {
#line 533 "ml_global_data.m"
                      ml_backend__ml_global_data__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__V_21_21, (MR_Integer) 1)));
#line 533 "ml_global_data.m"
                      *ml_backend__ml_global_data__STATE_VARIABLE_Rval_14 = ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13;
#line 533 "ml_global_data.m"
                      ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 533 "ml_global_data.m"
                    }
#line 533 "ml_global_data.m"
                }
#line 533 "ml_global_data.m"
                break;
#line 533 "ml_global_data.m"
              case (MR_Integer) 1:
#line 535 "ml_global_data.m"
                {
#line 535 "ml_global_data.m"
                  MR_Word ml_backend__ml_global_data__Op_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13, (MR_Integer) 1)));
#line 535 "ml_global_data.m"
                  MR_Word ml_backend__ml_global_data__SubRval_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13, (MR_Integer) 2)));
#line 535 "ml_global_data.m"
                  MR_Word ml_backend__ml_global_data__Type_7;

#line 538 "ml_global_data.m"
#line 538 "ml_global_data.m"
                  switch (MR_tag((MR_Word) ml_backend__ml_global_data__Op_5)) {
#line 538 "ml_global_data.m"
                    default:
#line 538 "ml_global_data.m"
                      ml_backend__ml_global_data__succeeded = MR_FALSE;
#line 538 "ml_global_data.m"
                      break;
#line 538 "ml_global_data.m"
                    case (MR_Integer) 0:
#line 537 "ml_global_data.m"
                      {
#line 537 "ml_global_data.m"
                        ml_backend__ml_global_data__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__Op_5, (MR_Integer) 0)));
#line 537 "ml_global_data.m"
                        ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 537 "ml_global_data.m"
                      }
#line 538 "ml_global_data.m"
                      break;
#line 538 "ml_global_data.m"
                    case (MR_Integer) 1:
#line 539 "ml_global_data.m"
                      {
#line 539 "ml_global_data.m"
                        ml_backend__ml_global_data__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__Op_5, (MR_Integer) 0)));
#line 539 "ml_global_data.m"
                        ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 539 "ml_global_data.m"
                      }
#line 538 "ml_global_data.m"
                      break;
#line 538 "ml_global_data.m"
                    case (MR_Integer) 2:
#line 541 "ml_global_data.m"
                      {
#line 541 "ml_global_data.m"
                        ml_backend__ml_global_data__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_global_data__Op_5, (MR_Integer) 0)));
#line 541 "ml_global_data.m"
                        ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 541 "ml_global_data.m"
                      }
#line 538 "ml_global_data.m"
                      break;
#line 538 "ml_global_data.m"
                  }
#line 535 "ml_global_data.m"
                  if (ml_backend__ml_global_data__succeeded)
#line 546 "ml_global_data.m"
                    {
#line 546 "ml_global_data.m"
                      if ((ml_backend__ml_global_data__Type_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 545 "ml_global_data.m"
                        {
#line 545 "ml_global_data.m"
                          *ml_backend__ml_global_data__STATE_VARIABLE_Rval_14 = ml_backend__ml_global_data__SubRval_6;
#line 545 "ml_global_data.m"
                          ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 545 "ml_global_data.m"
                        }
#line 546 "ml_global_data.m"
                      else
#line 546 "ml_global_data.m"
                      if (((MR_tag((MR_Word) ml_backend__ml_global_data__Type_7)) == (MR_mktag((MR_Integer) 2))))
#line 547 "ml_global_data.m"
                        {
#line 547 "ml_global_data.m"
                          MR_Word ml_backend__ml_global_data__CtorCat_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_global_data__Type_7, (MR_Integer) 1)));
#line 547 "ml_global_data.m"
                          MR_Word ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_global_data__Type_7, (MR_Integer) 0)));
#line 547 "ml_global_data.m"
                          MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_global_data__Type_7, (MR_Integer) 2)));

#line 551 "ml_global_data.m"
                          if (((MR_tag((MR_Word) ml_backend__ml_global_data__CtorCat_9)) == (MR_mktag((MR_Integer) 1))))
#line 549 "ml_global_data.m"
                            {
#line 549 "ml_global_data.m"
                              MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__CtorCat_9, (MR_Integer) 0)));

#line 549 "ml_global_data.m"
                              ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_18_18 == (MR_Integer) 1);
#line 549 "ml_global_data.m"
                              if (ml_backend__ml_global_data__succeeded)
#line 549 "ml_global_data.m"
                                {
#line 550 "ml_global_data.m"
                                  *ml_backend__ml_global_data__STATE_VARIABLE_Rval_14 = ml_backend__ml_global_data__SubRval_6;
#line 550 "ml_global_data.m"
                                  ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 549 "ml_global_data.m"
                                }
#line 549 "ml_global_data.m"
                            }
#line 551 "ml_global_data.m"
                          else
#line 551 "ml_global_data.m"
                          if (((((MR_tag((MR_Word) ml_backend__ml_global_data__CtorCat_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__CtorCat_9, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 552 "ml_global_data.m"
                            {
#line 552 "ml_global_data.m"
                              MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__CtorCat_9, (MR_Integer) 1)));

#line 552 "ml_global_data.m"
                              ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_16_16 == (MR_Integer) 1);
#line 552 "ml_global_data.m"
                              if (ml_backend__ml_global_data__succeeded)
#line 553 "ml_global_data.m"
                                {
#line 553 "ml_global_data.m"
                                  /* direct tailcall eliminated */
#line 553 "ml_global_data.m"
                                  {
#line 553 "ml_global_data.m"
                                    MR_Word ml_backend__ml_global_data__STATE_VARIABLE_Rval_0__tmp_copy_13 = ml_backend__ml_global_data__SubRval_6;

#line 553 "ml_global_data.m"
                                    ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13 = ml_backend__ml_global_data__STATE_VARIABLE_Rval_0__tmp_copy_13;
#line 553 "ml_global_data.m"
                                  }
#line 553 "ml_global_data.m"
                                  continue;
#line 553 "ml_global_data.m"
                                }
#line 552 "ml_global_data.m"
                            }
#line 551 "ml_global_data.m"
                          else
#line 551 "ml_global_data.m"
                            ml_backend__ml_global_data__succeeded = MR_FALSE;
#line 547 "ml_global_data.m"
                        }
#line 546 "ml_global_data.m"
                      else
#line 546 "ml_global_data.m"
                        ml_backend__ml_global_data__succeeded = MR_FALSE;
#line 546 "ml_global_data.m"
                    }
#line 535 "ml_global_data.m"
                }
#line 533 "ml_global_data.m"
                break;
#line 533 "ml_global_data.m"
              case (MR_Integer) 2:
#line 557 "ml_global_data.m"
                {
#line 557 "ml_global_data.m"
                  MR_Word ml_backend__ml_global_data__Op_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13, (MR_Integer) 1)));
#line 557 "ml_global_data.m"
                  MR_Word ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13, (MR_Integer) 2)));
#line 557 "ml_global_data.m"
                  MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13, (MR_Integer) 3)));

#line 605 "ml_global_data.m"
#line 605 "ml_global_data.m"
                  switch (MR_tag((MR_Word) ml_backend__ml_global_data__Op_22)) {
#line 605 "ml_global_data.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 605 "ml_global_data.m"
                    case (MR_Integer) 0:
#line 605 "ml_global_data.m"
#line 605 "ml_global_data.m"
                      switch (MR_unmkbody(ml_backend__ml_global_data__Op_22)) {
#line 605 "ml_global_data.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 605 "ml_global_data.m"
                        case (MR_Integer) 0:
#line 605 "ml_global_data.m"
                        case (MR_Integer) 1:
#line 605 "ml_global_data.m"
                        case (MR_Integer) 2:
#line 605 "ml_global_data.m"
                        case (MR_Integer) 3:
#line 605 "ml_global_data.m"
                        case (MR_Integer) 4:
#line 605 "ml_global_data.m"
                        case (MR_Integer) 5:
#line 605 "ml_global_data.m"
                        case (MR_Integer) 6:
#line 605 "ml_global_data.m"
                        case (MR_Integer) 7:
#line 605 "ml_global_data.m"
                        case (MR_Integer) 8:
#line 605 "ml_global_data.m"
                        case (MR_Integer) 9:
#line 605 "ml_global_data.m"
                        case (MR_Integer) 10:
#line 605 "ml_global_data.m"
                        case (MR_Integer) 11:
#line 605 "ml_global_data.m"
                        case (MR_Integer) 12:
#line 605 "ml_global_data.m"
                        case (MR_Integer) 13:
#line 605 "ml_global_data.m"
                        case (MR_Integer) 14:
#line 605 "ml_global_data.m"
                        case (MR_Integer) 15:
#line 605 "ml_global_data.m"
                        case (MR_Integer) 16:
#line 605 "ml_global_data.m"
                        case (MR_Integer) 17:
#line 605 "ml_global_data.m"
                        case (MR_Integer) 18:
#line 605 "ml_global_data.m"
                        case (MR_Integer) 19:
#line 605 "ml_global_data.m"
                        case (MR_Integer) 20:
#line 605 "ml_global_data.m"
                        case (MR_Integer) 21:
#line 605 "ml_global_data.m"
                        case (MR_Integer) 22:
#line 605 "ml_global_data.m"
                        case (MR_Integer) 23:
#line 605 "ml_global_data.m"
                        case (MR_Integer) 24:
#line 605 "ml_global_data.m"
                        case (MR_Integer) 25:
#line 605 "ml_global_data.m"
                        case (MR_Integer) 26:
#line 605 "ml_global_data.m"
                        case (MR_Integer) 27:
#line 605 "ml_global_data.m"
                        case (MR_Integer) 32:
#line 605 "ml_global_data.m"
                        case (MR_Integer) 33:
#line 605 "ml_global_data.m"
                        case (MR_Integer) 34:
#line 605 "ml_global_data.m"
                        case (MR_Integer) 35:
#line 605 "ml_global_data.m"
                        case (MR_Integer) 36:
#line 605 "ml_global_data.m"
                        case (MR_Integer) 37:
#line 605 "ml_global_data.m"
                        case (MR_Integer) 38:
#line 605 "ml_global_data.m"
                        case (MR_Integer) 40:
#line 605 "ml_global_data.m"
                        case (MR_Integer) 41:
#line 605 "ml_global_data.m"
                        case (MR_Integer) 42:
#line 606 "ml_global_data.m"
                          {
#line 558 "ml_global_data.m"
                            ml_backend__ml_global_data__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
#line 606 "ml_global_data.m"
                          }
#line 605 "ml_global_data.m"
                          break;
#line 605 "ml_global_data.m"
                        case (MR_Integer) 28:
#line 605 "ml_global_data.m"
                        case (MR_Integer) 29:
#line 605 "ml_global_data.m"
                        case (MR_Integer) 30:
#line 605 "ml_global_data.m"
                        case (MR_Integer) 31:
#line 605 "ml_global_data.m"
                        case (MR_Integer) 39:
#line 614 "ml_global_data.m"
                          {
#line 558 "ml_global_data.m"
                            ml_backend__ml_global_data__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
#line 614 "ml_global_data.m"
                          }
#line 605 "ml_global_data.m"
                          break;
#line 605 "ml_global_data.m"
                      }
#line 605 "ml_global_data.m"
                      break;
#line 605 "ml_global_data.m"
                    case (MR_Integer) 1:
#line 605 "ml_global_data.m"
                    case (MR_Integer) 2:
#line 606 "ml_global_data.m"
                      {
#line 558 "ml_global_data.m"
                        ml_backend__ml_global_data__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
#line 606 "ml_global_data.m"
                      }
#line 605 "ml_global_data.m"
                      break;
#line 605 "ml_global_data.m"
                  }
#line 557 "ml_global_data.m"
                  if (ml_backend__ml_global_data__succeeded)
#line 557 "ml_global_data.m"
                    {
#line 557 "ml_global_data.m"
                      *ml_backend__ml_global_data__STATE_VARIABLE_Rval_14 = ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13;
#line 557 "ml_global_data.m"
                      ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 557 "ml_global_data.m"
                    }
#line 557 "ml_global_data.m"
                }
#line 533 "ml_global_data.m"
                break;
#line 533 "ml_global_data.m"
            }
#line 533 "ml_global_data.m"
            break;
#line 533 "ml_global_data.m"
        }
#line 533 "ml_global_data.m"
        return ml_backend__ml_global_data__succeeded;
#line 533 "ml_global_data.m"
      }
#line 533 "ml_global_data.m"
      break;
#line 533 "ml_global_data.m"
    }
#line 528 "ml_global_data.m"
}

#line 513 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_specialize_generic_array_init_3_p_0(
#line 513 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Init0_4,
#line 513 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__Init_5,
#line 513 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__Type_6)
#line 513 "ml_global_data.m"
{
#line 517 "ml_global_data.m"
  {
#line 517 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded = ((MR_tag((MR_Word) ml_backend__ml_global_data__Init0_4)) == (MR_mktag((MR_Integer) 1)));
#line 517 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Rval_8;
#line 518 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Rval0_7;

#line 518 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 518 "ml_global_data.m"
      {
#line 518 "ml_global_data.m"
        ml_backend__ml_global_data__Rval0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__Init0_4, (MR_Integer) 0)));
#line 519 "ml_global_data.m"
        {
#line 519 "ml_global_data.m"
          ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data__ml_specialize_generic_array_rval_2_p_0(ml_backend__ml_global_data__Rval0_7, &ml_backend__ml_global_data__Rval_8);
        }
#line 518 "ml_global_data.m"
      }
#line 517 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 521 "ml_global_data.m"
      {
#line 521 "ml_global_data.m"
        {
#line 521 "ml_global_data.m"
          MR_Word base;
#line 521 "ml_global_data.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 521 "ml_global_data.m"
          *ml_backend__ml_global_data__Init_5 = base;
#line 521 "ml_global_data.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_global_data__Rval_8));
#line 521 "ml_global_data.m"
        }
#line 522 "ml_global_data.m"
        *ml_backend__ml_global_data__Type_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 521 "ml_global_data.m"
      }
#line 517 "ml_global_data.m"
    else
#line 524 "ml_global_data.m"
      {
#line 524 "ml_global_data.m"
        *ml_backend__ml_global_data__Init_5 = ml_backend__ml_global_data__Init0_4;
#line 525 "ml_global_data.m"
        *ml_backend__ml_global_data__Type_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 524 "ml_global_data.m"
      }
#line 517 "ml_global_data.m"
  }
#line 513 "ml_global_data.m"
}

#line 471 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_gen_plain_static_defn_7_p_0(
#line 471 "ml_global_data.m"
  MR_String ml_backend__ml_global_data__ConstBaseName_8,
#line 471 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__ConstType_9,
#line 471 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Initializer_10,
#line 471 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Context_11,
#line 471 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__VarName_12,
#line 471 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25,
#line 471 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_26)
#line 471 "ml_global_data.m"
{
#line 476 "ml_global_data.m"
  {
#line 476 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 476 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__ConstCounter0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 3)));
#line 476 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__ConstNum_15;
#line 476 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__ConstCounter_16;
#line 476 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__EntityName_17;
#line 476 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__EntityDefn_19;
#line 476 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__DeclFlags_20;
#line 476 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__MLDS_Context_21;
#line 476 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Defn_22;
#line 476 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevDefns0_23;
#line 476 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevDefns_24;
#line 476 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27;
#line 476 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_28_28;
#line 476 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_29_29;
#line 476 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_30_30;
#line 329 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 0)));
#line 329 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 1)));
#line 329 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 2)));
#line 329 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 4)));
#line 329 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 5)));
#line 329 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 6)));
#line 329 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 7)));
#line 329 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 8)));
#line 329 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 9)));
#line 329 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 10)));
#line 329 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 11)));
#line 329 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 12)));
#line 329 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 13)));
#line 341 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_52_52;
#line 341 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_53_53;
#line 341 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_54_54;
#line 341 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_56_56;
#line 341 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_57_57;
#line 341 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_58_58;
#line 341 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_59_59;
#line 341 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_60_60;
#line 341 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_61_61;
#line 341 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_62_62;
#line 341 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_63_63;
#line 341 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_64_64;
#line 341 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_65_65;
#line 341 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_55_55;
#line 331 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_67_67;
#line 331 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_68_68;
#line 331 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_69_69;
#line 331 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_70_70;
#line 331 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_71_71;
#line 331 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_72_72;
#line 331 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_73_73;
#line 331 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_74_74;
#line 331 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_75_75;
#line 331 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_76_76;
#line 331 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_77_77;
#line 331 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_78_78;
#line 331 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_79_79;

#line 478 "ml_global_data.m"
    {
#line 478 "ml_global_data.m"
      mercury__counter__allocate_3_p_0(&ml_backend__ml_global_data__ConstNum_15, ml_backend__ml_global_data__ConstCounter0_14, &ml_backend__ml_global_data__ConstCounter_16);
    }
#line 341 "ml_global_data.m"
    ml_backend__ml_global_data__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 0)));
#line 341 "ml_global_data.m"
    ml_backend__ml_global_data__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 1)));
#line 341 "ml_global_data.m"
    ml_backend__ml_global_data__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 2)));
#line 341 "ml_global_data.m"
    ml_backend__ml_global_data__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 3)));
#line 341 "ml_global_data.m"
    ml_backend__ml_global_data__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 4)));
#line 341 "ml_global_data.m"
    ml_backend__ml_global_data__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 5)));
#line 341 "ml_global_data.m"
    ml_backend__ml_global_data__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 6)));
#line 341 "ml_global_data.m"
    ml_backend__ml_global_data__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 7)));
#line 341 "ml_global_data.m"
    ml_backend__ml_global_data__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 8)));
#line 341 "ml_global_data.m"
    ml_backend__ml_global_data__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 9)));
#line 341 "ml_global_data.m"
    ml_backend__ml_global_data__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 10)));
#line 341 "ml_global_data.m"
    ml_backend__ml_global_data__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 11)));
#line 341 "ml_global_data.m"
    ml_backend__ml_global_data__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 12)));
#line 341 "ml_global_data.m"
    ml_backend__ml_global_data__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 13)));
#line 341 "ml_global_data.m"
    {
#line 341 "ml_global_data.m"
      ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 341 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 0) = ((MR_Box) (ml_backend__ml_global_data__V_52_52));
#line 341 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 1) = ((MR_Box) (ml_backend__ml_global_data__V_53_53));
#line 341 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 2) = ((MR_Box) (ml_backend__ml_global_data__V_54_54));
#line 341 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 3) = ((MR_Box) (ml_backend__ml_global_data__ConstCounter_16));
#line 341 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 4) = ((MR_Box) (ml_backend__ml_global_data__V_56_56));
#line 341 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 5) = ((MR_Box) (ml_backend__ml_global_data__V_57_57));
#line 341 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 6) = ((MR_Box) (ml_backend__ml_global_data__V_58_58));
#line 341 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 7) = ((MR_Box) (ml_backend__ml_global_data__V_59_59));
#line 341 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 8) = ((MR_Box) (ml_backend__ml_global_data__V_60_60));
#line 341 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 9) = ((MR_Box) (ml_backend__ml_global_data__V_61_61));
#line 341 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 10) = ((MR_Box) (ml_backend__ml_global_data__V_62_62));
#line 341 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 11) = ((MR_Box) (ml_backend__ml_global_data__V_63_63));
#line 341 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 12) = ((MR_Box) (ml_backend__ml_global_data__V_64_64));
#line 341 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 13) = ((MR_Box) (ml_backend__ml_global_data__V_65_65));
#line 341 "ml_global_data.m"
    }
#line 481 "ml_global_data.m"
    {
#line 481 "ml_global_data.m"
      ml_backend__ml_global_data__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 481 "ml_global_data.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__V_28_28, 0) = ((MR_Box) (ml_backend__ml_global_data__ConstNum_15));
#line 481 "ml_global_data.m"
    }
#line 481 "ml_global_data.m"
    {
#line 481 "ml_global_data.m"
      MR_Word base;
#line 481 "ml_global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 481 "ml_global_data.m"
      *ml_backend__ml_global_data__VarName_12 = base;
#line 481 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__ConstBaseName_8));
#line 481 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_28_28));
#line 481 "ml_global_data.m"
    }
#line 482 "ml_global_data.m"
    ml_backend__ml_global_data__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) *ml_backend__ml_global_data__VarName_12);
#line 482 "ml_global_data.m"
    {
#line 482 "ml_global_data.m"
      ml_backend__ml_global_data__EntityName_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 482 "ml_global_data.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__EntityName_17, 0) = ((MR_Box) (ml_backend__ml_global_data__V_29_29));
#line 482 "ml_global_data.m"
    }
#line 486 "ml_global_data.m"
    {
#line 486 "ml_global_data.m"
      ml_backend__ml_global_data__EntityDefn_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 486 "ml_global_data.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__EntityDefn_19, 0) = ((MR_Box) (ml_backend__ml_global_data__ConstType_9));
#line 486 "ml_global_data.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__EntityDefn_19, 1) = ((MR_Box) (ml_backend__ml_global_data__Initializer_10));
#line 486 "ml_global_data.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__EntityDefn_19, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 486 "ml_global_data.m"
    }
#line 487 "ml_global_data.m"
    {
#line 487 "ml_global_data.m"
      ml_backend__ml_global_data__V_30_30 = ml_backend__mlds__ml_static_const_decl_flags_0_f_0();
    }
#line 487 "ml_global_data.m"
    {
#line 487 "ml_global_data.m"
      ml_backend__ml_global_data__DeclFlags_20 = ml_backend__mlds__set_access_2_f_0(ml_backend__ml_global_data__V_30_30, (MR_Integer) 2);
    }
#line 488 "ml_global_data.m"
    {
#line 488 "ml_global_data.m"
      ml_backend__ml_global_data__MLDS_Context_21 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_global_data__Context_11);
    }
#line 489 "ml_global_data.m"
    {
#line 489 "ml_global_data.m"
      ml_backend__ml_global_data__Defn_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 489 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__Defn_22, 0) = ((MR_Box) (ml_backend__ml_global_data__EntityName_17));
#line 489 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__Defn_22, 1) = ((MR_Box) (ml_backend__ml_global_data__MLDS_Context_21));
#line 489 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__Defn_22, 2) = ((MR_Box) (ml_backend__ml_global_data__DeclFlags_20));
#line 489 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__Defn_22, 3) = ((MR_Box) (ml_backend__ml_global_data__EntityDefn_19));
#line 489 "ml_global_data.m"
    }
#line 331 "ml_global_data.m"
    ml_backend__ml_global_data__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 0)));
#line 331 "ml_global_data.m"
    ml_backend__ml_global_data__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 1)));
#line 331 "ml_global_data.m"
    ml_backend__ml_global_data__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 2)));
#line 331 "ml_global_data.m"
    ml_backend__ml_global_data__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 3)));
#line 331 "ml_global_data.m"
    ml_backend__ml_global_data__RevDefns0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 4)));
#line 331 "ml_global_data.m"
    ml_backend__ml_global_data__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 5)));
#line 331 "ml_global_data.m"
    ml_backend__ml_global_data__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 6)));
#line 331 "ml_global_data.m"
    ml_backend__ml_global_data__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 7)));
#line 331 "ml_global_data.m"
    ml_backend__ml_global_data__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 8)));
#line 331 "ml_global_data.m"
    ml_backend__ml_global_data__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 9)));
#line 331 "ml_global_data.m"
    ml_backend__ml_global_data__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 10)));
#line 331 "ml_global_data.m"
    ml_backend__ml_global_data__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 11)));
#line 331 "ml_global_data.m"
    ml_backend__ml_global_data__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 12)));
#line 331 "ml_global_data.m"
    ml_backend__ml_global_data__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 13)));
#line 492 "ml_global_data.m"
    {
#line 492 "ml_global_data.m"
      ml_backend__ml_global_data__RevDefns_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 492 "ml_global_data.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__RevDefns_24, 0) = ((MR_Box) (ml_backend__ml_global_data__Defn_22));
#line 492 "ml_global_data.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__RevDefns_24, 1) = ((MR_Box) (ml_backend__ml_global_data__RevDefns0_23));
#line 492 "ml_global_data.m"
    }
#line 493 "ml_global_data.m"
    {
#line 493 "ml_global_data.m"
      ml_backend__ml_global_data__ml_global_data_set_rev_flat_cell_defns_3_p_0(ml_backend__ml_global_data__RevDefns_24, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_26);
    }
#line 476 "ml_global_data.m"
  }
#line 471 "ml_global_data.m"
}

#line 413 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_gen_scalar_static_defn_6_p_0(
#line 413 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__MLDS_ModuleName_7,
#line 413 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__ConstType_8,
#line 413 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Initializer_9,
#line 413 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__Common_10,
#line 413 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34,
#line 413 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_35)
#line 413 "ml_global_data.m"
{
#line 418 "ml_global_data.m"
  {
#line 418 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 418 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_172_172;
#line 418 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__InitArraySize_12;
#line 418 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__CellType_13;
#line 418 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeNumMap0_15;
#line 418 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__CellGroupMap0_16;
#line 418 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeNum_18;
#line 418 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RowCounter0_23;
#line 418 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__RowNum_24;
#line 418 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RowCounter_25;
#line 418 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__MembersMap0_26;
#line 418 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__NewCommon_27;
#line 418 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__MaybeOldCommon_28;
#line 418 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__MembersMap_29;
#line 418 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37;
#line 418 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43;
#line 422 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_54_54;
#line 422 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_55_55;
#line 422 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_56_56;
#line 422 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_57_57;
#line 422 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_58_58;
#line 422 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_59_59;
#line 422 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_60_60;
#line 422 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_61_61;
#line 422 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_63_63;
#line 422 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_64_64;
#line 422 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_65_65;
#line 422 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_66_66;
#line 424 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__OldTypeNum_17;
#line 424 "ml_global_data.m"
    MR_Box ml_backend__ml_global_data__conv0_OldTypeNum_17;
#line 445 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_121_121;
#line 445 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_122_122;
#line 445 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_123_123;
#line 445 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_124_124;
#line 447 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_125_125;
#line 447 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_126_126;
#line 447 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_127_127;
#line 447 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_128_128;

#line 419 "ml_global_data.m"
    {
#line 419 "ml_global_data.m"
      ml_backend__ml_global_data__InitArraySize_12 = ml_backend__mlds__get_initializer_array_size_1_f_0(ml_backend__ml_global_data__Initializer_9);
    }
#line 420 "ml_global_data.m"
    {
#line 420 "ml_global_data.m"
      ml_backend__ml_global_data__CellType_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 420 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellType_13, 0) = ((MR_Box) (ml_backend__ml_global_data__ConstType_8));
#line 420 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellType_13, 1) = ((MR_Box) (ml_backend__ml_global_data__InitArraySize_12));
#line 420 "ml_global_data.m"
    }
#line 422 "ml_global_data.m"
    ml_backend__ml_global_data__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 0)));
#line 422 "ml_global_data.m"
    ml_backend__ml_global_data__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 1)));
#line 422 "ml_global_data.m"
    ml_backend__ml_global_data__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 2)));
#line 422 "ml_global_data.m"
    ml_backend__ml_global_data__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 3)));
#line 422 "ml_global_data.m"
    ml_backend__ml_global_data__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 4)));
#line 422 "ml_global_data.m"
    ml_backend__ml_global_data__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 5)));
#line 422 "ml_global_data.m"
    ml_backend__ml_global_data__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 6)));
#line 422 "ml_global_data.m"
    ml_backend__ml_global_data__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 7)));
#line 422 "ml_global_data.m"
    ml_backend__ml_global_data__TypeNumMap0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 8)));
#line 422 "ml_global_data.m"
    ml_backend__ml_global_data__CellGroupMap0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 9)));
#line 422 "ml_global_data.m"
    ml_backend__ml_global_data__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 10)));
#line 422 "ml_global_data.m"
    ml_backend__ml_global_data__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 11)));
#line 422 "ml_global_data.m"
    ml_backend__ml_global_data__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 12)));
#line 422 "ml_global_data.m"
    ml_backend__ml_global_data__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 13)));
#line 424 "ml_global_data.m"
    {
#line 424 "ml_global_data.m"
      ml_backend__ml_global_data__succeeded = mercury__map__search_3_p_0((MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0, ml_backend__ml_global_data__TypeNumMap0_15, ((MR_Box) (ml_backend__ml_global_data__CellType_13)), &ml_backend__ml_global_data__conv0_OldTypeNum_17);
    }
#line 424 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 424 "ml_global_data.m"
      {
#line 424 "ml_global_data.m"
        ml_backend__ml_global_data__OldTypeNum_17 = ((MR_Word) ml_backend__ml_global_data__conv0_OldTypeNum_17);
#line 424 "ml_global_data.m"
        ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 424 "ml_global_data.m"
      }
#line 424 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 425 "ml_global_data.m"
      {
#line 426 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_36_36;
#line 426 "ml_global_data.m"
        MR_Box ml_backend__ml_global_data__conv1_STATE_VARIABLE_CellGroup_36_36;

#line 425 "ml_global_data.m"
        ml_backend__ml_global_data__TypeNum_18 = ml_backend__ml_global_data__OldTypeNum_17;
#line 426 "ml_global_data.m"
        {
#line 426 "ml_global_data.m"
          ml_backend__ml_global_data__succeeded = mercury__map__search_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0, ml_backend__ml_global_data__CellGroupMap0_16, ((MR_Box) (ml_backend__ml_global_data__TypeNum_18)), &ml_backend__ml_global_data__conv1_STATE_VARIABLE_CellGroup_36_36);
        }
#line 426 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 426 "ml_global_data.m"
          {
#line 426 "ml_global_data.m"
            ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_36_36 = ((MR_Word) ml_backend__ml_global_data__conv1_STATE_VARIABLE_CellGroup_36_36);
#line 426 "ml_global_data.m"
            ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 426 "ml_global_data.m"
          }
#line 426 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 426 "ml_global_data.m"
          ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37 = ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_36_36;
#line 426 "ml_global_data.m"
        else
#line 429 "ml_global_data.m"
          {
#line 429 "ml_global_data.m"
            MR_Word ml_backend__ml_global_data__TypeCtorInfo_166_166;
#line 429 "ml_global_data.m"
            MR_Word ml_backend__ml_global_data__V_38_38;
#line 429 "ml_global_data.m"
            MR_Word ml_backend__ml_global_data__V_40_40;
#line 429 "ml_global_data.m"
            MR_Word ml_backend__ml_global_data__V_41_41;

#line 430 "ml_global_data.m"
            {
#line 430 "ml_global_data.m"
              ml_backend__ml_global_data__V_38_38 = mercury__counter__init_1_f_0((MR_Integer) 0);
            }
#line 5876 "ml_backend.ml_global_data.c"
            ml_backend__ml_global_data__TypeCtorInfo_166_166 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
#line 430 "ml_global_data.m"
            {
#line 430 "ml_global_data.m"
              ml_backend__ml_global_data__V_40_40 = mercury__bimap__init_0_f_0(ml_backend__ml_global_data__TypeCtorInfo_166_166, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0);
            }
#line 430 "ml_global_data.m"
            {
#line 430 "ml_global_data.m"
              ml_backend__ml_global_data__V_41_41 = mercury__cord__empty_0_f_0(ml_backend__ml_global_data__TypeCtorInfo_166_166);
            }
#line 429 "ml_global_data.m"
            {
#line 429 "ml_global_data.m"
              ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 429 "ml_global_data.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 0) = ((MR_Box) (ml_backend__ml_global_data__ConstType_8));
#line 429 "ml_global_data.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 1) = ((MR_Box) (ml_backend__ml_global_data__InitArraySize_12));
#line 429 "ml_global_data.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 2) = ((MR_Box) (ml_backend__ml_global_data__V_38_38));
#line 429 "ml_global_data.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 3) = ((MR_Box) (ml_backend__ml_global_data__V_40_40));
#line 429 "ml_global_data.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 4) = ((MR_Box) (ml_backend__ml_global_data__V_41_41));
#line 429 "ml_global_data.m"
            }
#line 429 "ml_global_data.m"
          }
#line 425 "ml_global_data.m"
        ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43 = ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34;
#line 425 "ml_global_data.m"
      }
#line 424 "ml_global_data.m"
    else
#line 433 "ml_global_data.m"
      {
#line 433 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeCtorInfo_170_170;
#line 433 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeNumCounter0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 7)));
#line 433 "ml_global_data.m"
        MR_Integer ml_backend__ml_global_data__TypeRawNum_20;
#line 433 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeNumCounter_21;
#line 433 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeNumMap_22;
#line 433 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42;
#line 433 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_45_45;
#line 433 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_47_47;
#line 433 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_48_48;
#line 433 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 0)));
#line 433 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 1)));
#line 433 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 2)));
#line 433 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 3)));
#line 433 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 4)));
#line 433 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 5)));
#line 433 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 6)));
#line 433 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 8)));
#line 433 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 9)));
#line 433 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 10)));
#line 433 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 11)));
#line 433 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 12)));
#line 433 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 13)));
#line 436 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_93_93;
#line 436 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_94_94;
#line 436 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_95_95;
#line 436 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_96_96;
#line 436 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_97_97;
#line 436 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_98_98;
#line 436 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_99_99;
#line 436 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_101_101;
#line 436 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_102_102;
#line 436 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_103_103;
#line 436 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_104_104;
#line 436 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_105_105;
#line 436 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_106_106;
#line 436 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_100_100;
#line 439 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_107_107;
#line 439 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_108_108;
#line 439 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_109_109;
#line 439 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_110_110;
#line 439 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_111_111;
#line 439 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_112_112;
#line 439 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_113_113;
#line 439 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_114_114;
#line 439 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_116_116;
#line 439 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_117_117;
#line 439 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_118_118;
#line 439 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_119_119;
#line 439 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_120_120;
#line 439 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_115_115;

#line 434 "ml_global_data.m"
        {
#line 434 "ml_global_data.m"
          mercury__counter__allocate_3_p_0(&ml_backend__ml_global_data__TypeRawNum_20, ml_backend__ml_global_data__TypeNumCounter0_19, &ml_backend__ml_global_data__TypeNumCounter_21);
        }
#line 435 "ml_global_data.m"
        ml_backend__ml_global_data__TypeNum_18 = (MR_Word) ml_backend__ml_global_data__TypeRawNum_20;
#line 436 "ml_global_data.m"
        ml_backend__ml_global_data__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 0)));
#line 436 "ml_global_data.m"
        ml_backend__ml_global_data__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 1)));
#line 436 "ml_global_data.m"
        ml_backend__ml_global_data__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 2)));
#line 436 "ml_global_data.m"
        ml_backend__ml_global_data__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 3)));
#line 436 "ml_global_data.m"
        ml_backend__ml_global_data__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 4)));
#line 436 "ml_global_data.m"
        ml_backend__ml_global_data__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 5)));
#line 436 "ml_global_data.m"
        ml_backend__ml_global_data__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 6)));
#line 436 "ml_global_data.m"
        ml_backend__ml_global_data__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 7)));
#line 436 "ml_global_data.m"
        ml_backend__ml_global_data__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 8)));
#line 436 "ml_global_data.m"
        ml_backend__ml_global_data__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 9)));
#line 436 "ml_global_data.m"
        ml_backend__ml_global_data__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 10)));
#line 436 "ml_global_data.m"
        ml_backend__ml_global_data__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 11)));
#line 436 "ml_global_data.m"
        ml_backend__ml_global_data__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 12)));
#line 436 "ml_global_data.m"
        ml_backend__ml_global_data__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 13)));
#line 436 "ml_global_data.m"
        {
#line 436 "ml_global_data.m"
          ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 436 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 0) = ((MR_Box) (ml_backend__ml_global_data__V_93_93));
#line 436 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 1) = ((MR_Box) (ml_backend__ml_global_data__V_94_94));
#line 436 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 2) = ((MR_Box) (ml_backend__ml_global_data__V_95_95));
#line 436 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 3) = ((MR_Box) (ml_backend__ml_global_data__V_96_96));
#line 436 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 4) = ((MR_Box) (ml_backend__ml_global_data__V_97_97));
#line 436 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 5) = ((MR_Box) (ml_backend__ml_global_data__V_98_98));
#line 436 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 6) = ((MR_Box) (ml_backend__ml_global_data__V_99_99));
#line 436 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 7) = ((MR_Box) (ml_backend__ml_global_data__TypeNumCounter_21));
#line 436 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 8) = ((MR_Box) (ml_backend__ml_global_data__V_101_101));
#line 436 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 9) = ((MR_Box) (ml_backend__ml_global_data__V_102_102));
#line 436 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 10) = ((MR_Box) (ml_backend__ml_global_data__V_103_103));
#line 436 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 11) = ((MR_Box) (ml_backend__ml_global_data__V_104_104));
#line 436 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 12) = ((MR_Box) (ml_backend__ml_global_data__V_105_105));
#line 436 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 13) = ((MR_Box) (ml_backend__ml_global_data__V_106_106));
#line 436 "ml_global_data.m"
        }
#line 438 "ml_global_data.m"
        {
#line 438 "ml_global_data.m"
          mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0, ((MR_Box) (ml_backend__ml_global_data__CellType_13)), ((MR_Box) (ml_backend__ml_global_data__TypeNum_18)), ml_backend__ml_global_data__TypeNumMap0_15, &ml_backend__ml_global_data__TypeNumMap_22);
        }
#line 439 "ml_global_data.m"
        ml_backend__ml_global_data__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 0)));
#line 439 "ml_global_data.m"
        ml_backend__ml_global_data__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 1)));
#line 439 "ml_global_data.m"
        ml_backend__ml_global_data__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 2)));
#line 439 "ml_global_data.m"
        ml_backend__ml_global_data__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 3)));
#line 439 "ml_global_data.m"
        ml_backend__ml_global_data__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 4)));
#line 439 "ml_global_data.m"
        ml_backend__ml_global_data__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 5)));
#line 439 "ml_global_data.m"
        ml_backend__ml_global_data__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 6)));
#line 439 "ml_global_data.m"
        ml_backend__ml_global_data__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 7)));
#line 439 "ml_global_data.m"
        ml_backend__ml_global_data__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 8)));
#line 439 "ml_global_data.m"
        ml_backend__ml_global_data__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 9)));
#line 439 "ml_global_data.m"
        ml_backend__ml_global_data__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 10)));
#line 439 "ml_global_data.m"
        ml_backend__ml_global_data__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 11)));
#line 439 "ml_global_data.m"
        ml_backend__ml_global_data__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 12)));
#line 439 "ml_global_data.m"
        ml_backend__ml_global_data__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 13)));
#line 439 "ml_global_data.m"
        {
#line 439 "ml_global_data.m"
          ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 439 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 0) = ((MR_Box) (ml_backend__ml_global_data__V_107_107));
#line 439 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 1) = ((MR_Box) (ml_backend__ml_global_data__V_108_108));
#line 439 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 2) = ((MR_Box) (ml_backend__ml_global_data__V_109_109));
#line 439 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 3) = ((MR_Box) (ml_backend__ml_global_data__V_110_110));
#line 439 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 4) = ((MR_Box) (ml_backend__ml_global_data__V_111_111));
#line 439 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 5) = ((MR_Box) (ml_backend__ml_global_data__V_112_112));
#line 439 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 6) = ((MR_Box) (ml_backend__ml_global_data__V_113_113));
#line 439 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 7) = ((MR_Box) (ml_backend__ml_global_data__V_114_114));
#line 439 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 8) = ((MR_Box) (ml_backend__ml_global_data__TypeNumMap_22));
#line 439 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 9) = ((MR_Box) (ml_backend__ml_global_data__V_116_116));
#line 439 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 10) = ((MR_Box) (ml_backend__ml_global_data__V_117_117));
#line 439 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 11) = ((MR_Box) (ml_backend__ml_global_data__V_118_118));
#line 439 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 12) = ((MR_Box) (ml_backend__ml_global_data__V_119_119));
#line 439 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 13) = ((MR_Box) (ml_backend__ml_global_data__V_120_120));
#line 439 "ml_global_data.m"
        }
#line 442 "ml_global_data.m"
        {
#line 442 "ml_global_data.m"
          ml_backend__ml_global_data__V_45_45 = mercury__counter__init_1_f_0((MR_Integer) 0);
        }
#line 6156 "ml_backend.ml_global_data.c"
        ml_backend__ml_global_data__TypeCtorInfo_170_170 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
#line 442 "ml_global_data.m"
        {
#line 442 "ml_global_data.m"
          ml_backend__ml_global_data__V_47_47 = mercury__bimap__init_0_f_0(ml_backend__ml_global_data__TypeCtorInfo_170_170, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0);
        }
#line 442 "ml_global_data.m"
        {
#line 442 "ml_global_data.m"
          ml_backend__ml_global_data__V_48_48 = mercury__cord__empty_0_f_0(ml_backend__ml_global_data__TypeCtorInfo_170_170);
        }
#line 441 "ml_global_data.m"
        {
#line 441 "ml_global_data.m"
          ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 441 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 0) = ((MR_Box) (ml_backend__ml_global_data__ConstType_8));
#line 441 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 1) = ((MR_Box) (ml_backend__ml_global_data__InitArraySize_12));
#line 441 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 2) = ((MR_Box) (ml_backend__ml_global_data__V_45_45));
#line 441 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 3) = ((MR_Box) (ml_backend__ml_global_data__V_47_47));
#line 441 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 4) = ((MR_Box) (ml_backend__ml_global_data__V_48_48));
#line 441 "ml_global_data.m"
        }
#line 433 "ml_global_data.m"
      }
#line 445 "ml_global_data.m"
    ml_backend__ml_global_data__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 0)));
#line 445 "ml_global_data.m"
    ml_backend__ml_global_data__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 1)));
#line 445 "ml_global_data.m"
    ml_backend__ml_global_data__RowCounter0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 2)));
#line 445 "ml_global_data.m"
    ml_backend__ml_global_data__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 3)));
#line 445 "ml_global_data.m"
    ml_backend__ml_global_data__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 4)));
#line 446 "ml_global_data.m"
    {
#line 446 "ml_global_data.m"
      mercury__counter__allocate_3_p_0(&ml_backend__ml_global_data__RowNum_24, ml_backend__ml_global_data__RowCounter0_23, &ml_backend__ml_global_data__RowCounter_25);
    }
#line 447 "ml_global_data.m"
    ml_backend__ml_global_data__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 0)));
#line 447 "ml_global_data.m"
    ml_backend__ml_global_data__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 1)));
#line 447 "ml_global_data.m"
    ml_backend__ml_global_data__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 2)));
#line 447 "ml_global_data.m"
    ml_backend__ml_global_data__MembersMap0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 3)));
#line 447 "ml_global_data.m"
    ml_backend__ml_global_data__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 4)));
#line 448 "ml_global_data.m"
    {
#line 448 "ml_global_data.m"
      ml_backend__ml_global_data__NewCommon_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 448 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__NewCommon_27, 0) = ((MR_Box) (ml_backend__ml_global_data__MLDS_ModuleName_7));
#line 448 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__NewCommon_27, 1) = ((MR_Box) (ml_backend__ml_global_data__ConstType_8));
#line 448 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__NewCommon_27, 2) = ((MR_Box) (ml_backend__ml_global_data__TypeNum_18));
#line 448 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__NewCommon_27, 3) = ((MR_Box) (ml_backend__ml_global_data__RowNum_24));
#line 448 "ml_global_data.m"
    }
#line 6225 "ml_backend.ml_global_data.c"
    ml_backend__ml_global_data__TypeCtorInfo_172_172 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
#line 450 "ml_global_data.m"
    {
#line 450 "ml_global_data.m"
      mercury__bimap__search_insert_5_p_0(ml_backend__ml_global_data__TypeCtorInfo_172_172, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0, ((MR_Box) (ml_backend__ml_global_data__Initializer_9)), ((MR_Box) (ml_backend__ml_global_data__NewCommon_27)), &ml_backend__ml_global_data__MaybeOldCommon_28, ml_backend__ml_global_data__MembersMap0_26, &ml_backend__ml_global_data__MembersMap_29);
    }
#line 456 "ml_global_data.m"
    if ((ml_backend__ml_global_data__MaybeOldCommon_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 457 "ml_global_data.m"
      {
#line 457 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__Rows0_31;
#line 457 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__Rows_32;
#line 457 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__CellGroupMap_33;
#line 457 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50;
#line 457 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53;
#line 457 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_129_129;
#line 457 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_130_130;
#line 457 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_133_133;
#line 459 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_131_131;
#line 459 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_132_132;
#line 464 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_143_143;
#line 464 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_144_144;
#line 464 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_145_145;
#line 464 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_146_146;
#line 464 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_147_147;
#line 467 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_148_148;
#line 467 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_149_149;
#line 467 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_150_150;
#line 467 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_151_151;
#line 467 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_152_152;
#line 467 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_153_153;
#line 467 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_154_154;
#line 467 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_155_155;
#line 467 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_156_156;
#line 467 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_158_158;
#line 467 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_159_159;
#line 467 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_160_160;
#line 467 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_161_161;
#line 467 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_157_157;

#line 458 "ml_global_data.m"
        *ml_backend__ml_global_data__Common_10 = ml_backend__ml_global_data__NewCommon_27;
#line 459 "ml_global_data.m"
        ml_backend__ml_global_data__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 0)));
#line 459 "ml_global_data.m"
        ml_backend__ml_global_data__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 1)));
#line 459 "ml_global_data.m"
        ml_backend__ml_global_data__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 2)));
#line 459 "ml_global_data.m"
        ml_backend__ml_global_data__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 3)));
#line 459 "ml_global_data.m"
        ml_backend__ml_global_data__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 4)));
#line 460 "ml_global_data.m"
        ml_backend__ml_global_data__Rows0_31 = ml_backend__ml_global_data__V_133_133;
#line 460 "ml_global_data.m"
        {
#line 460 "ml_global_data.m"
          ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 460 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, 0) = ((MR_Box) (ml_backend__ml_global_data__V_129_129));
#line 460 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, 1) = ((MR_Box) (ml_backend__ml_global_data__V_130_130));
#line 460 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, 2) = ((MR_Box) (ml_backend__ml_global_data__RowCounter_25));
#line 460 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, 3) = ((MR_Box) (ml_backend__ml_global_data__MembersMap_29));
#line 460 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, 4) = ((MR_Box) (ml_backend__ml_global_data__Rows0_31));
#line 460 "ml_global_data.m"
        }
#line 463 "ml_global_data.m"
        {
#line 463 "ml_global_data.m"
          ml_backend__ml_global_data__Rows_32 = mercury__cord__snoc_2_f_0(ml_backend__ml_global_data__TypeCtorInfo_172_172, ml_backend__ml_global_data__Rows0_31, ((MR_Box) (ml_backend__ml_global_data__Initializer_9)));
        }
#line 464 "ml_global_data.m"
        ml_backend__ml_global_data__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, (MR_Integer) 0)));
#line 464 "ml_global_data.m"
        ml_backend__ml_global_data__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, (MR_Integer) 1)));
#line 464 "ml_global_data.m"
        ml_backend__ml_global_data__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, (MR_Integer) 2)));
#line 464 "ml_global_data.m"
        ml_backend__ml_global_data__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, (MR_Integer) 3)));
#line 464 "ml_global_data.m"
        ml_backend__ml_global_data__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, (MR_Integer) 4)));
#line 464 "ml_global_data.m"
        {
#line 464 "ml_global_data.m"
          ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 464 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53, 0) = ((MR_Box) (ml_backend__ml_global_data__V_143_143));
#line 464 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53, 1) = ((MR_Box) (ml_backend__ml_global_data__V_144_144));
#line 464 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53, 2) = ((MR_Box) (ml_backend__ml_global_data__V_145_145));
#line 464 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53, 3) = ((MR_Box) (ml_backend__ml_global_data__V_146_146));
#line 464 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53, 4) = ((MR_Box) (ml_backend__ml_global_data__Rows_32));
#line 464 "ml_global_data.m"
        }
#line 466 "ml_global_data.m"
        {
#line 466 "ml_global_data.m"
          mercury__map__set_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0, ((MR_Box) (ml_backend__ml_global_data__TypeNum_18)), ((MR_Box) (ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53)), ml_backend__ml_global_data__CellGroupMap0_16, &ml_backend__ml_global_data__CellGroupMap_33);
        }
#line 467 "ml_global_data.m"
        ml_backend__ml_global_data__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 0)));
#line 467 "ml_global_data.m"
        ml_backend__ml_global_data__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 1)));
#line 467 "ml_global_data.m"
        ml_backend__ml_global_data__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 2)));
#line 467 "ml_global_data.m"
        ml_backend__ml_global_data__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 3)));
#line 467 "ml_global_data.m"
        ml_backend__ml_global_data__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 4)));
#line 467 "ml_global_data.m"
        ml_backend__ml_global_data__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 5)));
#line 467 "ml_global_data.m"
        ml_backend__ml_global_data__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 6)));
#line 467 "ml_global_data.m"
        ml_backend__ml_global_data__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 7)));
#line 467 "ml_global_data.m"
        ml_backend__ml_global_data__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 8)));
#line 467 "ml_global_data.m"
        ml_backend__ml_global_data__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 9)));
#line 467 "ml_global_data.m"
        ml_backend__ml_global_data__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 10)));
#line 467 "ml_global_data.m"
        ml_backend__ml_global_data__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 11)));
#line 467 "ml_global_data.m"
        ml_backend__ml_global_data__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 12)));
#line 467 "ml_global_data.m"
        ml_backend__ml_global_data__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 13)));
#line 467 "ml_global_data.m"
        {
#line 467 "ml_global_data.m"
          MR_Word base;
#line 467 "ml_global_data.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 467 "ml_global_data.m"
          *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_35 = base;
#line 467 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__V_148_148));
#line 467 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_149_149));
#line 467 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_150_150));
#line 467 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_151_151));
#line 467 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__V_152_152));
#line 467 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__V_153_153));
#line 467 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__V_154_154));
#line 467 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_155_155));
#line 467 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_156_156));
#line 467 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__CellGroupMap_33));
#line 467 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_158_158));
#line 467 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__V_159_159));
#line 467 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__V_160_160));
#line 467 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__V_161_161));
#line 467 "ml_global_data.m"
        }
#line 457 "ml_global_data.m"
      }
#line 456 "ml_global_data.m"
    else
#line 453 "ml_global_data.m"
      {
#line 453 "ml_global_data.m"
        *ml_backend__ml_global_data__Common_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__MaybeOldCommon_28, (MR_Integer) 0)));
#line 453 "ml_global_data.m"
        *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_35 = ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43;
#line 453 "ml_global_data.m"
      }
#line 418 "ml_global_data.m"
  }
#line 413 "ml_global_data.m"
}

#line 322 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_global_data_set_rev_flat_cell_defns_3_p_0(
#line 322 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Defns_4,
#line 322 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6,
#line 322 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_7)
#line 322 "ml_global_data.m"
{
#line 343 "ml_global_data.m"
  {
#line 343 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 343 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 0)));
#line 343 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 1)));
#line 343 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 2)));
#line 343 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 3)));
#line 343 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 5)));
#line 343 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 6)));
#line 343 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 7)));
#line 343 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 8)));
#line 343 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 9)));
#line 343 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 10)));
#line 343 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 11)));
#line 343 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 12)));
#line 343 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 13)));
#line 343 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 4)));

#line 343 "ml_global_data.m"
    {
#line 343 "ml_global_data.m"
      MR_Word base;
#line 343 "ml_global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 343 "ml_global_data.m"
      *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_7 = base;
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__V_9_9));
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_10_10));
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_11_11));
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_12_12));
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__Defns_4));
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__V_14_14));
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__V_15_15));
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_16_16));
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_17_17));
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__V_18_18));
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_19_19));
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__V_20_20));
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__V_21_21));
#line 343 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__V_22_22));
#line 343 "ml_global_data.m"
    }
#line 343 "ml_global_data.m"
  }
#line 322 "ml_global_data.m"
}

#line 207 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data__ml_gen_alloc_site_7_p_0(
#line 207 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__ProcLabel_8,
#line 207 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__MaybeConsId_9,
#line 207 "ml_global_data.m"
  MR_Integer ml_backend__ml_global_data__Size_10,
#line 207 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Context_11,
#line 207 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__AllocId_12,
#line 207 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23,
#line 207 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24)
#line 207 "ml_global_data.m"
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
#line 755 "ml_global_data.m"
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
#line 755 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 756 "ml_global_data.m"
      {
#line 756 "ml_global_data.m"
        *ml_backend__ml_global_data__AllocId_12 = ml_backend__ml_global_data__AllocId0_18;
#line 756 "ml_global_data.m"
        *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24 = ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23;
#line 756 "ml_global_data.m"
      }
#line 755 "ml_global_data.m"
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
#line 207 "ml_global_data.m"
}

#line 201 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data__ml_gen_static_vector_defn_6_p_0(
#line 201 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__MLDS_ModuleName_7,
#line 201 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__TypeNum_8,
#line 201 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__RowInitializers_9,
#line 201 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__Common_10,
#line 201 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_22,
#line 201 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_23)
#line 201 "ml_global_data.m"
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
#line 6987 "ml_backend.ml_global_data.c"
    ml_backend__ml_global_data__TypeCtorInfo_79_79 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0;
#line 6989 "ml_backend.ml_global_data.c"
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
#line 201 "ml_global_data.m"
}

#line 193 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data__ml_gen_static_vector_type_9_p_0(
#line 193 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__MLDS_ModuleName_10,
#line 193 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__MLDS_Context_11,
#line 193 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Target_12,
#line 193 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__ArgTypes_13,
#line 193 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__TypeNum_14,
#line 193 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__StructType_15,
#line 193 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__FieldIds_16,
#line 193 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46,
#line 193 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47)
#line 193 "ml_global_data.m"
{
#line 620 "ml_global_data.m"
  {
#line 620 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 620 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeNumMap0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 10)));
#line 620 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 7)));
#line 620 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 11)));
#line 621 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 0)));
#line 621 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 1)));
#line 621 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 2)));
#line 621 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 3)));
#line 621 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 4)));
#line 621 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 5)));
#line 621 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 6)));
#line 621 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 8)));
#line 621 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 9)));
#line 621 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 12)));
#line 621 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 13)));
#line 622 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__OldTypeNum_19;
#line 622 "ml_global_data.m"
    MR_Box ml_backend__ml_global_data__conv0_OldTypeNum_19;

#line 622 "ml_global_data.m"
    {
#line 622 "ml_global_data.m"
      ml_backend__ml_global_data__succeeded = mercury__map__search_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[0], (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0, ml_backend__ml_global_data__TypeNumMap0_18, ((MR_Box) (ml_backend__ml_global_data__ArgTypes_13)), &ml_backend__ml_global_data__conv0_OldTypeNum_19);
    }
#line 622 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 622 "ml_global_data.m"
      {
#line 622 "ml_global_data.m"
        ml_backend__ml_global_data__OldTypeNum_19 = ((MR_Word) ml_backend__ml_global_data__conv0_OldTypeNum_19);
#line 622 "ml_global_data.m"
        ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 622 "ml_global_data.m"
      }
#line 622 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 623 "ml_global_data.m"
      {
#line 623 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__CellGroup_21;
#line 625 "ml_global_data.m"
        MR_Box ml_backend__ml_global_data__conv1_CellGroup_21;
#line 626 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data___TypeDefn_22;
#line 626 "ml_global_data.m"
        MR_Integer ml_backend__ml_global_data__V_23_23;
#line 626 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_24_24;

#line 623 "ml_global_data.m"
        *ml_backend__ml_global_data__TypeNum_14 = ml_backend__ml_global_data__OldTypeNum_19;
#line 625 "ml_global_data.m"
        {
#line 625 "ml_global_data.m"
          mercury__map__lookup_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0, ml_backend__ml_global_data__V_97_97, ((MR_Box) (*ml_backend__ml_global_data__TypeNum_14)), &ml_backend__ml_global_data__conv1_CellGroup_21);
        }
#line 625 "ml_global_data.m"
        ml_backend__ml_global_data__CellGroup_21 = ((MR_Word) ml_backend__ml_global_data__conv1_CellGroup_21);
#line 626 "ml_global_data.m"
        *ml_backend__ml_global_data__StructType_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_21, (MR_Integer) 0)));
#line 626 "ml_global_data.m"
        ml_backend__ml_global_data___TypeDefn_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_21, (MR_Integer) 1)));
#line 626 "ml_global_data.m"
        *ml_backend__ml_global_data__FieldIds_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_21, (MR_Integer) 2)));
#line 626 "ml_global_data.m"
        ml_backend__ml_global_data__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_21, (MR_Integer) 3)));
#line 626 "ml_global_data.m"
        ml_backend__ml_global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellGroup_21, (MR_Integer) 4)));
#line 623 "ml_global_data.m"
        *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_47 = ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46;
#line 623 "ml_global_data.m"
      }
#line 622 "ml_global_data.m"
    else
#line 629 "ml_global_data.m"
      {
#line 629 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeCtorInfo_186_186;
#line 629 "ml_global_data.m"
        MR_Integer ml_backend__ml_global_data__TypeRawNum_26;
#line 629 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeNumCounter_27;
#line 629 "ml_global_data.m"
        MR_String ml_backend__ml_global_data__TypeRawNumStr_28;
#line 629 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeNumMap_29;
#line 629 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__FieldFlags_30;
#line 629 "ml_global_data.m"
        MR_String ml_backend__ml_global_data__FieldNamePrefix_31;
#line 629 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__FieldNames_32;
#line 629 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__FieldDefns_33;
#line 629 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__ClassKind_34;
#line 629 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__CtorDefns_35;
#line 629 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__ClassDefn_37;
#line 629 "ml_global_data.m"
        MR_String ml_backend__ml_global_data__StructTypeName_38;
#line 629 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__StructTypeEntityName_39;
#line 629 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__StructTypeEntityDefn_40;
#line 629 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__StructTypeFlags_41;
#line 629 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__StructTypeDefn_42;
#line 629 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__QualStructTypeName_43;
#line 629 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__MLDS_ClassModuleName_44;
#line 629 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__CellGroupMap0_45;
#line 629 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48;
#line 629 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49;
#line 629 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_83_83;
#line 629 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__CellGroupMap_85;
#line 629 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__CellGroup_86;
#line 633 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_126_126;
#line 633 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_127_127;
#line 633 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_128_128;
#line 633 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_129_129;
#line 633 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_130_130;
#line 633 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_131_131;
#line 633 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_132_132;
#line 633 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_134_134;
#line 633 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_135_135;
#line 633 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_136_136;
#line 633 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_137_137;
#line 633 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_138_138;
#line 633 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_139_139;
#line 633 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_133_133;
#line 636 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_140_140;
#line 636 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_141_141;
#line 636 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_142_142;
#line 636 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_143_143;
#line 636 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_144_144;
#line 636 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_145_145;
#line 636 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_146_146;
#line 636 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_147_147;
#line 636 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_148_148;
#line 636 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_149_149;
#line 636 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_151_151;
#line 636 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_152_152;
#line 636 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_153_153;
#line 636 "ml_global_data.m"
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

#line 630 "ml_global_data.m"
        {
#line 630 "ml_global_data.m"
          mercury__counter__allocate_3_p_0(&ml_backend__ml_global_data__TypeRawNum_26, ml_backend__ml_global_data__V_94_94, &ml_backend__ml_global_data__TypeNumCounter_27);
        }
#line 631 "ml_global_data.m"
        {
#line 631 "ml_global_data.m"
          ml_backend__ml_global_data__TypeRawNumStr_28 = mercury__string__int_to_string_1_f_0(ml_backend__ml_global_data__TypeRawNum_26);
        }
#line 632 "ml_global_data.m"
        *ml_backend__ml_global_data__TypeNum_14 = (MR_Word) ml_backend__ml_global_data__TypeRawNum_26;
#line 633 "ml_global_data.m"
        ml_backend__ml_global_data__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 0)));
#line 633 "ml_global_data.m"
        ml_backend__ml_global_data__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 1)));
#line 633 "ml_global_data.m"
        ml_backend__ml_global_data__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 2)));
#line 633 "ml_global_data.m"
        ml_backend__ml_global_data__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 3)));
#line 633 "ml_global_data.m"
        ml_backend__ml_global_data__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 4)));
#line 633 "ml_global_data.m"
        ml_backend__ml_global_data__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 5)));
#line 633 "ml_global_data.m"
        ml_backend__ml_global_data__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 6)));
#line 633 "ml_global_data.m"
        ml_backend__ml_global_data__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 7)));
#line 633 "ml_global_data.m"
        ml_backend__ml_global_data__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 8)));
#line 633 "ml_global_data.m"
        ml_backend__ml_global_data__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 9)));
#line 633 "ml_global_data.m"
        ml_backend__ml_global_data__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 10)));
#line 633 "ml_global_data.m"
        ml_backend__ml_global_data__V_137_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 11)));
#line 633 "ml_global_data.m"
        ml_backend__ml_global_data__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 12)));
#line 633 "ml_global_data.m"
        ml_backend__ml_global_data__V_139_139 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_46, (MR_Integer) 13)));
#line 633 "ml_global_data.m"
        {
#line 633 "ml_global_data.m"
          ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 633 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 0) = ((MR_Box) (ml_backend__ml_global_data__V_126_126));
#line 633 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 1) = ((MR_Box) (ml_backend__ml_global_data__V_127_127));
#line 633 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 2) = ((MR_Box) (ml_backend__ml_global_data__V_128_128));
#line 633 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 3) = ((MR_Box) (ml_backend__ml_global_data__V_129_129));
#line 633 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 4) = ((MR_Box) (ml_backend__ml_global_data__V_130_130));
#line 633 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 5) = ((MR_Box) (ml_backend__ml_global_data__V_131_131));
#line 633 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 6) = ((MR_Box) (ml_backend__ml_global_data__V_132_132));
#line 633 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 7) = ((MR_Box) (ml_backend__ml_global_data__TypeNumCounter_27));
#line 633 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 8) = ((MR_Box) (ml_backend__ml_global_data__V_134_134));
#line 633 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 9) = ((MR_Box) (ml_backend__ml_global_data__V_135_135));
#line 633 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 10) = ((MR_Box) (ml_backend__ml_global_data__V_136_136));
#line 633 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 11) = ((MR_Box) (ml_backend__ml_global_data__V_137_137));
#line 633 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 12) = ((MR_Box) (ml_backend__ml_global_data__V_138_138));
#line 633 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, 13) = ((MR_Box) (ml_backend__ml_global_data__V_139_139));
#line 633 "ml_global_data.m"
        }
#line 7514 "ml_backend.ml_global_data.c"
        ml_backend__ml_global_data__TypeCtorInfo_186_186 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0;
#line 635 "ml_global_data.m"
        {
#line 635 "ml_global_data.m"
          mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[0], ml_backend__ml_global_data__TypeCtorInfo_186_186, ((MR_Box) (ml_backend__ml_global_data__ArgTypes_13)), ((MR_Box) (*ml_backend__ml_global_data__TypeNum_14)), ml_backend__ml_global_data__TypeNumMap0_18, &ml_backend__ml_global_data__TypeNumMap_29);
        }
#line 636 "ml_global_data.m"
        ml_backend__ml_global_data__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 0)));
#line 636 "ml_global_data.m"
        ml_backend__ml_global_data__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 1)));
#line 636 "ml_global_data.m"
        ml_backend__ml_global_data__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 2)));
#line 636 "ml_global_data.m"
        ml_backend__ml_global_data__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 3)));
#line 636 "ml_global_data.m"
        ml_backend__ml_global_data__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 4)));
#line 636 "ml_global_data.m"
        ml_backend__ml_global_data__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 5)));
#line 636 "ml_global_data.m"
        ml_backend__ml_global_data__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 6)));
#line 636 "ml_global_data.m"
        ml_backend__ml_global_data__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 7)));
#line 636 "ml_global_data.m"
        ml_backend__ml_global_data__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 8)));
#line 636 "ml_global_data.m"
        ml_backend__ml_global_data__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 9)));
#line 636 "ml_global_data.m"
        ml_backend__ml_global_data__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 10)));
#line 636 "ml_global_data.m"
        ml_backend__ml_global_data__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 11)));
#line 636 "ml_global_data.m"
        ml_backend__ml_global_data__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 12)));
#line 636 "ml_global_data.m"
        ml_backend__ml_global_data__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_48_48, (MR_Integer) 13)));
#line 636 "ml_global_data.m"
        {
#line 636 "ml_global_data.m"
          ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 636 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 0) = ((MR_Box) (ml_backend__ml_global_data__V_140_140));
#line 636 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 1) = ((MR_Box) (ml_backend__ml_global_data__V_141_141));
#line 636 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 2) = ((MR_Box) (ml_backend__ml_global_data__V_142_142));
#line 636 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 3) = ((MR_Box) (ml_backend__ml_global_data__V_143_143));
#line 636 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 4) = ((MR_Box) (ml_backend__ml_global_data__V_144_144));
#line 636 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 5) = ((MR_Box) (ml_backend__ml_global_data__V_145_145));
#line 636 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 6) = ((MR_Box) (ml_backend__ml_global_data__V_146_146));
#line 636 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 7) = ((MR_Box) (ml_backend__ml_global_data__V_147_147));
#line 636 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 8) = ((MR_Box) (ml_backend__ml_global_data__V_148_148));
#line 636 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 9) = ((MR_Box) (ml_backend__ml_global_data__V_149_149));
#line 636 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 10) = ((MR_Box) (ml_backend__ml_global_data__TypeNumMap_29));
#line 636 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 11) = ((MR_Box) (ml_backend__ml_global_data__V_151_151));
#line 636 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 12) = ((MR_Box) (ml_backend__ml_global_data__V_152_152));
#line 636 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_49_49, 13) = ((MR_Box) (ml_backend__ml_global_data__V_153_153));
#line 636 "ml_global_data.m"
        }
#line 638 "ml_global_data.m"
        {
#line 638 "ml_global_data.m"
          ml_backend__ml_global_data__FieldFlags_30 = ml_backend__mlds__init_decl_flags_6_f_0((MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0, (MR_Integer) 0, (MR_Integer) 1, (MR_Integer) 0);
        }
#line 640 "ml_global_data.m"
        {
#line 640 "ml_global_data.m"
          ml_backend__ml_global_data__FieldNamePrefix_31 = mercury__string__f_43_43_2_f_0((MR_String) "vct_", ml_backend__ml_global_data__TypeRawNumStr_28);
        }
#line 641 "ml_global_data.m"
        {
#line 641 "ml_global_data.m"
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
#line 648 "ml_global_data.m"
#line 648 "ml_global_data.m"
        switch (ml_backend__ml_global_data__Target_12) {
#line 648 "ml_global_data.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 648 "ml_global_data.m"
          case (MR_Integer) 0:
#line 645 "ml_global_data.m"
            {
#line 646 "ml_global_data.m"
              ml_backend__ml_global_data__ClassKind_34 = (MR_Integer) 3;
#line 647 "ml_global_data.m"
              ml_backend__ml_global_data__CtorDefns_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 645 "ml_global_data.m"
            }
#line 648 "ml_global_data.m"
            break;
#line 648 "ml_global_data.m"
          case (MR_Integer) 1:
#line 655 "ml_global_data.m"
            {
#line 655 "ml_global_data.m"
              MR_Word ml_backend__ml_global_data__CtorDefn_36;

#line 654 "ml_global_data.m"
              ml_backend__ml_global_data__ClassKind_34 = (MR_Integer) 3;
#line 656 "ml_global_data.m"
              {
#line 656 "ml_global_data.m"
                ml_backend__ml_global_data__CtorDefn_36 = ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0(ml_backend__ml_global_data__Target_12, *ml_backend__ml_global_data__StructType_15, *ml_backend__ml_global_data__StructType_15, ml_backend__ml_global_data__MLDS_ModuleName_10, *ml_backend__ml_global_data__StructType_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_global_data__FieldDefns_33, ml_backend__ml_global_data__MLDS_Context_11);
              }
#line 659 "ml_global_data.m"
              {
#line 659 "ml_global_data.m"
                ml_backend__ml_global_data__CtorDefns_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 659 "ml_global_data.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__CtorDefns_35, 0) = ((MR_Box) (ml_backend__ml_global_data__CtorDefn_36));
#line 659 "ml_global_data.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__CtorDefns_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 659 "ml_global_data.m"
              }
#line 655 "ml_global_data.m"
            }
#line 648 "ml_global_data.m"
            break;
#line 648 "ml_global_data.m"
          case (MR_Integer) 3:
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
#line 648 "ml_global_data.m"
            break;
#line 648 "ml_global_data.m"
          case (MR_Integer) 2:
#line 655 "ml_global_data.m"
            {
#line 655 "ml_global_data.m"
              MR_Word ml_backend__ml_global_data__CtorDefn_189;

#line 651 "ml_global_data.m"
              ml_backend__ml_global_data__ClassKind_34 = (MR_Integer) 0;
#line 656 "ml_global_data.m"
              {
#line 656 "ml_global_data.m"
                ml_backend__ml_global_data__CtorDefn_189 = ml_backend__ml_type_gen__ml_gen_constructor_function_8_f_0(ml_backend__ml_global_data__Target_12, *ml_backend__ml_global_data__StructType_15, *ml_backend__ml_global_data__StructType_15, ml_backend__ml_global_data__MLDS_ModuleName_10, *ml_backend__ml_global_data__StructType_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ml_backend__ml_global_data__FieldDefns_33, ml_backend__ml_global_data__MLDS_Context_11);
              }
#line 659 "ml_global_data.m"
              {
#line 659 "ml_global_data.m"
                ml_backend__ml_global_data__CtorDefns_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 659 "ml_global_data.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__CtorDefns_35, 0) = ((MR_Box) (ml_backend__ml_global_data__CtorDefn_189));
#line 659 "ml_global_data.m"
                MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__CtorDefns_35, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 659 "ml_global_data.m"
              }
#line 655 "ml_global_data.m"
            }
#line 648 "ml_global_data.m"
            break;
#line 648 "ml_global_data.m"
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
#line 629 "ml_global_data.m"
      }
#line 620 "ml_global_data.m"
  }
#line 193 "ml_global_data.m"
}

#line 503 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_gen_static_scalar_const_addr_8_p_0_1(
#line 503 "ml_global_data.m"
  MR_Box ml_backend__ml_global_data__closure_arg,
#line 503 "ml_global_data.m"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 503 "ml_global_data.m"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_2,
#line 503 "ml_global_data.m"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_3)
#line 503 "ml_global_data.m"
{
#line 503 "ml_global_data.m"
  {
#line 503 "ml_global_data.m"
    MR_Box ml_backend__ml_global_data__closure = ml_backend__ml_global_data__closure_arg;
#line 503 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__conv1_Init_5;
#line 503 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__conv0_Type_6;

#line 503 "ml_global_data.m"
    {
#line 503 "ml_global_data.m"
      ml_backend__ml_global_data__ml_specialize_generic_array_init_3_p_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), &ml_backend__ml_global_data__conv1_Init_5, &ml_backend__ml_global_data__conv0_Type_6);
    }
#line 503 "ml_global_data.m"
    *ml_backend__ml_global_data__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_global_data__conv1_Init_5));
#line 503 "ml_global_data.m"
    *ml_backend__ml_global_data__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_global_data__conv0_Type_6));
#line 503 "ml_global_data.m"
  }
#line 503 "ml_global_data.m"
}

#line 183 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data__ml_gen_static_scalar_const_addr_8_p_0(
#line 183 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__MLDS_ModuleName_9,
#line 183 "ml_global_data.m"
  MR_String ml_backend__ml_global_data__ConstBaseName_10,
#line 183 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__ConstType0_11,
#line 183 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Initializer0_12,
#line 183 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Context_13,
#line 183 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__DataAddrRval_14,
#line 183 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24,
#line 183 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_25)
#line 183 "ml_global_data.m"
{
#line 393 "ml_global_data.m"
  {
#line 393 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_global_data__ConstType0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType0_11, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 393 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__ConstType_16;
#line 393 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Initializer_17;
#line 393 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__UseCommonCells_18;
#line 500 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Inits_49;
#line 500 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Types_50;
#line 501 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_18_57;
#line 501 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_19_58;
#line 501 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Inits0_48;
#line 501 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_51_51;
#line 501 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_52_52;
#line 501 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_53_53;
#line 396 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_31_31;
#line 396 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_32_32;
#line 396 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_33_33;
#line 396 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_34_34;
#line 396 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_35_35;
#line 396 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_36_36;
#line 396 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_37_37;
#line 396 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_38_38;
#line 396 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_39_39;
#line 396 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_40_40;
#line 396 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_41_41;
#line 396 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_42_42;
#line 396 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_43_43;

#line 501 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 501 "ml_global_data.m"
      {
#line 501 "ml_global_data.m"
        ml_backend__ml_global_data__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType0_11, (MR_Integer) 1)));
#line 501 "ml_global_data.m"
        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_51_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 501 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 501 "ml_global_data.m"
          {
#line 502 "ml_global_data.m"
            ml_backend__ml_global_data__succeeded = ((MR_tag((MR_Word) ml_backend__ml_global_data__Initializer0_12)) == (MR_mktag((MR_Integer) 3)));
#line 502 "ml_global_data.m"
            if (ml_backend__ml_global_data__succeeded)
#line 502 "ml_global_data.m"
              {
#line 502 "ml_global_data.m"
                ml_backend__ml_global_data__Inits0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__Initializer0_12, (MR_Integer) 0)));
#line 503 "ml_global_data.m"
                ml_backend__ml_global_data__V_52_52 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[8];
#line 8043 "ml_backend.ml_global_data.c"
                ml_backend__ml_global_data__TypeCtorInfo_18_57 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
#line 8045 "ml_backend.ml_global_data.c"
                ml_backend__ml_global_data__TypeCtorInfo_19_58 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0;
#line 503 "ml_global_data.m"
                {
#line 503 "ml_global_data.m"
                  mercury__list__map2_4_p_0(ml_backend__ml_global_data__TypeCtorInfo_18_57, ml_backend__ml_global_data__TypeCtorInfo_18_57, ml_backend__ml_global_data__TypeCtorInfo_19_58, ml_backend__ml_global_data__V_52_52, ml_backend__ml_global_data__Inits0_48, &ml_backend__ml_global_data__Inits_49, &ml_backend__ml_global_data__Types_50);
                }
#line 504 "ml_global_data.m"
                ml_backend__ml_global_data__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 504 "ml_global_data.m"
                {
#line 504 "ml_global_data.m"
                  ml_backend__ml_global_data__succeeded = mercury__list__member_2_p_0(ml_backend__ml_global_data__TypeCtorInfo_19_58, ((MR_Box) (ml_backend__ml_global_data__V_53_53)), ml_backend__ml_global_data__Types_50);
                }
#line 502 "ml_global_data.m"
              }
#line 501 "ml_global_data.m"
          }
#line 501 "ml_global_data.m"
      }
#line 500 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 506 "ml_global_data.m"
      {
#line 506 "ml_global_data.m"
        {
#line 506 "ml_global_data.m"
          ml_backend__ml_global_data__ConstType_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 506 "ml_global_data.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 506 "ml_global_data.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType_16, 1) = ((MR_Box) (ml_backend__ml_global_data__Types_50));
#line 506 "ml_global_data.m"
        }
#line 507 "ml_global_data.m"
        {
#line 507 "ml_global_data.m"
          ml_backend__ml_global_data__Initializer_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 507 "ml_global_data.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__Initializer_17, 0) = ((MR_Box) (ml_backend__ml_global_data__Inits_49));
#line 507 "ml_global_data.m"
        }
#line 506 "ml_global_data.m"
      }
#line 500 "ml_global_data.m"
    else
#line 509 "ml_global_data.m"
      {
#line 509 "ml_global_data.m"
        ml_backend__ml_global_data__ConstType_16 = ml_backend__ml_global_data__ConstType0_11;
#line 510 "ml_global_data.m"
        ml_backend__ml_global_data__Initializer_17 = ml_backend__ml_global_data__Initializer0_12;
#line 509 "ml_global_data.m"
      }
#line 396 "ml_global_data.m"
    ml_backend__ml_global_data__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 0)));
#line 396 "ml_global_data.m"
    ml_backend__ml_global_data__UseCommonCells_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 1)));
#line 396 "ml_global_data.m"
    ml_backend__ml_global_data__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 2)));
#line 396 "ml_global_data.m"
    ml_backend__ml_global_data__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 3)));
#line 396 "ml_global_data.m"
    ml_backend__ml_global_data__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 4)));
#line 396 "ml_global_data.m"
    ml_backend__ml_global_data__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 5)));
#line 396 "ml_global_data.m"
    ml_backend__ml_global_data__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 6)));
#line 396 "ml_global_data.m"
    ml_backend__ml_global_data__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 7)));
#line 396 "ml_global_data.m"
    ml_backend__ml_global_data__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 8)));
#line 396 "ml_global_data.m"
    ml_backend__ml_global_data__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 9)));
#line 396 "ml_global_data.m"
    ml_backend__ml_global_data__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 10)));
#line 396 "ml_global_data.m"
    ml_backend__ml_global_data__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 11)));
#line 396 "ml_global_data.m"
    ml_backend__ml_global_data__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 12)));
#line 396 "ml_global_data.m"
    ml_backend__ml_global_data__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 13)));
#line 404 "ml_global_data.m"
#line 404 "ml_global_data.m"
    switch (ml_backend__ml_global_data__UseCommonCells_18) {
#line 404 "ml_global_data.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 404 "ml_global_data.m"
      case (MR_Integer) 0:
#line 405 "ml_global_data.m"
        {
#line 405 "ml_global_data.m"
          MR_Word ml_backend__ml_global_data__VarName_22;
#line 405 "ml_global_data.m"
          MR_Word ml_backend__ml_global_data__DataName_23;
#line 405 "ml_global_data.m"
          MR_Word ml_backend__ml_global_data__V_27_27;
#line 405 "ml_global_data.m"
          MR_Word ml_backend__ml_global_data__DataAddr_30;

#line 406 "ml_global_data.m"
          {
#line 406 "ml_global_data.m"
            ml_backend__ml_global_data__ml_gen_plain_static_defn_7_p_0(ml_backend__ml_global_data__ConstBaseName_10, ml_backend__ml_global_data__ConstType_16, ml_backend__ml_global_data__Initializer_17, ml_backend__ml_global_data__Context_13, &ml_backend__ml_global_data__VarName_22, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_25);
          }
#line 408 "ml_global_data.m"
          ml_backend__ml_global_data__DataName_23 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_global_data__VarName_22);
#line 409 "ml_global_data.m"
          {
#line 409 "ml_global_data.m"
            ml_backend__ml_global_data__DataAddr_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 409 "ml_global_data.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__DataAddr_30, 0) = ((MR_Box) (ml_backend__ml_global_data__MLDS_ModuleName_9));
#line 409 "ml_global_data.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__DataAddr_30, 1) = ((MR_Box) (ml_backend__ml_global_data__DataName_23));
#line 409 "ml_global_data.m"
          }
#line 410 "ml_global_data.m"
          ml_backend__ml_global_data__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_global_data__DataAddr_30);
#line 410 "ml_global_data.m"
          {
#line 410 "ml_global_data.m"
            MR_Word base;
#line 410 "ml_global_data.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "ml_global_data.m"
            *ml_backend__ml_global_data__DataAddrRval_14 = base;
#line 410 "ml_global_data.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 410 "ml_global_data.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_27_27));
#line 410 "ml_global_data.m"
          }
#line 405 "ml_global_data.m"
        }
#line 404 "ml_global_data.m"
        break;
#line 404 "ml_global_data.m"
      case (MR_Integer) 1:
#line 398 "ml_global_data.m"
        {
#line 398 "ml_global_data.m"
          MR_Word ml_backend__ml_global_data__Common_19;
#line 398 "ml_global_data.m"
          MR_Word ml_backend__ml_global_data__CommonDataName_20;
#line 398 "ml_global_data.m"
          MR_Word ml_backend__ml_global_data__DataAddr_21;
#line 398 "ml_global_data.m"
          MR_Word ml_backend__ml_global_data__V_29_29;

#line 399 "ml_global_data.m"
          {
#line 399 "ml_global_data.m"
            ml_backend__ml_global_data__ml_gen_scalar_static_defn_6_p_0(ml_backend__ml_global_data__MLDS_ModuleName_9, ml_backend__ml_global_data__ConstType_16, ml_backend__ml_global_data__Initializer_17, &ml_backend__ml_global_data__Common_19, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_25);
          }
#line 401 "ml_global_data.m"
          {
#line 401 "ml_global_data.m"
            ml_backend__ml_global_data__CommonDataName_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 401 "ml_global_data.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_global_data__CommonDataName_20, 0) = ((MR_Box) (ml_backend__ml_global_data__Common_19));
#line 401 "ml_global_data.m"
          }
#line 402 "ml_global_data.m"
          {
#line 402 "ml_global_data.m"
            ml_backend__ml_global_data__DataAddr_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 402 "ml_global_data.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__DataAddr_21, 0) = ((MR_Box) (ml_backend__ml_global_data__MLDS_ModuleName_9));
#line 402 "ml_global_data.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__DataAddr_21, 1) = ((MR_Box) (ml_backend__ml_global_data__CommonDataName_20));
#line 402 "ml_global_data.m"
          }
#line 403 "ml_global_data.m"
          ml_backend__ml_global_data__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_global_data__DataAddr_21);
#line 403 "ml_global_data.m"
          {
#line 403 "ml_global_data.m"
            MR_Word base;
#line 403 "ml_global_data.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 403 "ml_global_data.m"
            *ml_backend__ml_global_data__DataAddrRval_14 = base;
#line 403 "ml_global_data.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 403 "ml_global_data.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_29_29));
#line 403 "ml_global_data.m"
          }
#line 398 "ml_global_data.m"
        }
#line 404 "ml_global_data.m"
        break;
#line 404 "ml_global_data.m"
    }
#line 393 "ml_global_data.m"
  }
#line 183 "ml_global_data.m"
}

#line 503 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_gen_static_scalar_const_value_8_p_0_1(
#line 503 "ml_global_data.m"
  MR_Box ml_backend__ml_global_data__closure_arg,
#line 503 "ml_global_data.m"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 503 "ml_global_data.m"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_2,
#line 503 "ml_global_data.m"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_3)
#line 503 "ml_global_data.m"
{
#line 503 "ml_global_data.m"
  {
#line 503 "ml_global_data.m"
    MR_Box ml_backend__ml_global_data__closure = ml_backend__ml_global_data__closure_arg;
#line 503 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__conv1_Init_5;
#line 503 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__conv0_Type_6;

#line 503 "ml_global_data.m"
    {
#line 503 "ml_global_data.m"
      ml_backend__ml_global_data__ml_specialize_generic_array_init_3_p_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), &ml_backend__ml_global_data__conv1_Init_5, &ml_backend__ml_global_data__conv0_Type_6);
    }
#line 503 "ml_global_data.m"
    *ml_backend__ml_global_data__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_global_data__conv1_Init_5));
#line 503 "ml_global_data.m"
    *ml_backend__ml_global_data__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_global_data__conv0_Type_6));
#line 503 "ml_global_data.m"
  }
#line 503 "ml_global_data.m"
}

#line 175 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data__ml_gen_static_scalar_const_value_8_p_0(
#line 175 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__MLDS_ModuleName_9,
#line 175 "ml_global_data.m"
  MR_String ml_backend__ml_global_data__ConstBaseName_10,
#line 175 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__ConstType0_11,
#line 175 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Initializer0_12,
#line 175 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Context_13,
#line 175 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__DataRval_14,
#line 175 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23,
#line 175 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24)
#line 175 "ml_global_data.m"
{
#line 374 "ml_global_data.m"
  {
#line 374 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_global_data__ConstType0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType0_11, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 374 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__ConstType_16;
#line 374 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Initializer_17;
#line 374 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__UseCommonCells_18;
#line 500 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Inits_46;
#line 500 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Types_47;
#line 501 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_18_54;
#line 501 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_19_55;
#line 501 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Inits0_45;
#line 501 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_48_48;
#line 501 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_49_49;
#line 501 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_50_50;
#line 377 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_28_28;
#line 377 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_29_29;
#line 377 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_30_30;
#line 377 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_31_31;
#line 377 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_32_32;
#line 377 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_33_33;
#line 377 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_34_34;
#line 377 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_35_35;
#line 377 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_36_36;
#line 377 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_37_37;
#line 377 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_38_38;
#line 377 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_39_39;
#line 377 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_40_40;

#line 501 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 501 "ml_global_data.m"
      {
#line 501 "ml_global_data.m"
        ml_backend__ml_global_data__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType0_11, (MR_Integer) 1)));
#line 501 "ml_global_data.m"
        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 501 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 501 "ml_global_data.m"
          {
#line 502 "ml_global_data.m"
            ml_backend__ml_global_data__succeeded = ((MR_tag((MR_Word) ml_backend__ml_global_data__Initializer0_12)) == (MR_mktag((MR_Integer) 3)));
#line 502 "ml_global_data.m"
            if (ml_backend__ml_global_data__succeeded)
#line 502 "ml_global_data.m"
              {
#line 502 "ml_global_data.m"
                ml_backend__ml_global_data__Inits0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__Initializer0_12, (MR_Integer) 0)));
#line 503 "ml_global_data.m"
                ml_backend__ml_global_data__V_49_49 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[7];
#line 8377 "ml_backend.ml_global_data.c"
                ml_backend__ml_global_data__TypeCtorInfo_18_54 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
#line 8379 "ml_backend.ml_global_data.c"
                ml_backend__ml_global_data__TypeCtorInfo_19_55 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0;
#line 503 "ml_global_data.m"
                {
#line 503 "ml_global_data.m"
                  mercury__list__map2_4_p_0(ml_backend__ml_global_data__TypeCtorInfo_18_54, ml_backend__ml_global_data__TypeCtorInfo_18_54, ml_backend__ml_global_data__TypeCtorInfo_19_55, ml_backend__ml_global_data__V_49_49, ml_backend__ml_global_data__Inits0_45, &ml_backend__ml_global_data__Inits_46, &ml_backend__ml_global_data__Types_47);
                }
#line 504 "ml_global_data.m"
                ml_backend__ml_global_data__V_50_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 504 "ml_global_data.m"
                {
#line 504 "ml_global_data.m"
                  ml_backend__ml_global_data__succeeded = mercury__list__member_2_p_0(ml_backend__ml_global_data__TypeCtorInfo_19_55, ((MR_Box) (ml_backend__ml_global_data__V_50_50)), ml_backend__ml_global_data__Types_47);
                }
#line 502 "ml_global_data.m"
              }
#line 501 "ml_global_data.m"
          }
#line 501 "ml_global_data.m"
      }
#line 500 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 506 "ml_global_data.m"
      {
#line 506 "ml_global_data.m"
        {
#line 506 "ml_global_data.m"
          ml_backend__ml_global_data__ConstType_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 506 "ml_global_data.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 506 "ml_global_data.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType_16, 1) = ((MR_Box) (ml_backend__ml_global_data__Types_47));
#line 506 "ml_global_data.m"
        }
#line 507 "ml_global_data.m"
        {
#line 507 "ml_global_data.m"
          ml_backend__ml_global_data__Initializer_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 507 "ml_global_data.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__Initializer_17, 0) = ((MR_Box) (ml_backend__ml_global_data__Inits_46));
#line 507 "ml_global_data.m"
        }
#line 506 "ml_global_data.m"
      }
#line 500 "ml_global_data.m"
    else
#line 509 "ml_global_data.m"
      {
#line 509 "ml_global_data.m"
        ml_backend__ml_global_data__ConstType_16 = ml_backend__ml_global_data__ConstType0_11;
#line 510 "ml_global_data.m"
        ml_backend__ml_global_data__Initializer_17 = ml_backend__ml_global_data__Initializer0_12;
#line 509 "ml_global_data.m"
      }
#line 377 "ml_global_data.m"
    ml_backend__ml_global_data__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 0)));
#line 377 "ml_global_data.m"
    ml_backend__ml_global_data__UseCommonCells_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 1)));
#line 377 "ml_global_data.m"
    ml_backend__ml_global_data__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 2)));
#line 377 "ml_global_data.m"
    ml_backend__ml_global_data__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 3)));
#line 377 "ml_global_data.m"
    ml_backend__ml_global_data__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 4)));
#line 377 "ml_global_data.m"
    ml_backend__ml_global_data__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 5)));
#line 377 "ml_global_data.m"
    ml_backend__ml_global_data__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 6)));
#line 377 "ml_global_data.m"
    ml_backend__ml_global_data__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 7)));
#line 377 "ml_global_data.m"
    ml_backend__ml_global_data__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 8)));
#line 377 "ml_global_data.m"
    ml_backend__ml_global_data__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 9)));
#line 377 "ml_global_data.m"
    ml_backend__ml_global_data__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 10)));
#line 377 "ml_global_data.m"
    ml_backend__ml_global_data__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 11)));
#line 377 "ml_global_data.m"
    ml_backend__ml_global_data__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 12)));
#line 377 "ml_global_data.m"
    ml_backend__ml_global_data__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 13)));
#line 383 "ml_global_data.m"
#line 383 "ml_global_data.m"
    switch (ml_backend__ml_global_data__UseCommonCells_18) {
#line 383 "ml_global_data.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 383 "ml_global_data.m"
      case (MR_Integer) 0:
#line 384 "ml_global_data.m"
        {
#line 384 "ml_global_data.m"
          MR_Word ml_backend__ml_global_data__VarName_20;
#line 384 "ml_global_data.m"
          MR_Word ml_backend__ml_global_data__QualVarName_21;
#line 384 "ml_global_data.m"
          MR_Word ml_backend__ml_global_data__DataVar_22;

#line 385 "ml_global_data.m"
          {
#line 385 "ml_global_data.m"
            ml_backend__ml_global_data__ml_gen_plain_static_defn_7_p_0(ml_backend__ml_global_data__ConstBaseName_10, ml_backend__ml_global_data__ConstType_16, ml_backend__ml_global_data__Initializer_17, ml_backend__ml_global_data__Context_13, &ml_backend__ml_global_data__VarName_20, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24);
          }
#line 387 "ml_global_data.m"
          {
#line 387 "ml_global_data.m"
            ml_backend__ml_global_data__QualVarName_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 387 "ml_global_data.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__QualVarName_21, 0) = ((MR_Box) (ml_backend__ml_global_data__MLDS_ModuleName_9));
#line 387 "ml_global_data.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__QualVarName_21, 1) = ((MR_Box) ((MR_Integer) 0));
#line 387 "ml_global_data.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__QualVarName_21, 2) = ((MR_Box) (ml_backend__ml_global_data__VarName_20));
#line 387 "ml_global_data.m"
          }
#line 388 "ml_global_data.m"
          {
#line 388 "ml_global_data.m"
            ml_backend__ml_global_data__DataVar_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "ml_global_data.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__DataVar_22, 0) = ((MR_Box) (ml_backend__ml_global_data__QualVarName_21));
#line 388 "ml_global_data.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__DataVar_22, 1) = ((MR_Box) (ml_backend__ml_global_data__ConstType_16));
#line 388 "ml_global_data.m"
          }
#line 389 "ml_global_data.m"
          {
#line 389 "ml_global_data.m"
            MR_Word base;
#line 389 "ml_global_data.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 389 "ml_global_data.m"
            *ml_backend__ml_global_data__DataRval_14 = base;
#line 389 "ml_global_data.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_global_data__DataVar_22));
#line 389 "ml_global_data.m"
          }
#line 384 "ml_global_data.m"
        }
#line 383 "ml_global_data.m"
        break;
#line 383 "ml_global_data.m"
      case (MR_Integer) 1:
#line 379 "ml_global_data.m"
        {
#line 379 "ml_global_data.m"
          MR_Word ml_backend__ml_global_data__Common_19;

#line 380 "ml_global_data.m"
          {
#line 380 "ml_global_data.m"
            ml_backend__ml_global_data__ml_gen_scalar_static_defn_6_p_0(ml_backend__ml_global_data__MLDS_ModuleName_9, ml_backend__ml_global_data__ConstType_16, ml_backend__ml_global_data__Initializer_17, &ml_backend__ml_global_data__Common_19, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24);
          }
#line 382 "ml_global_data.m"
          *ml_backend__ml_global_data__DataRval_14 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_global_data__Common_19);
#line 379 "ml_global_data.m"
        }
#line 383 "ml_global_data.m"
        break;
#line 383 "ml_global_data.m"
    }
#line 374 "ml_global_data.m"
  }
#line 175 "ml_global_data.m"
}

#line 168 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data__ml_global_data_add_maybe_nonflat_defns_3_p_0(
#line 168 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Defns_4,
#line 168 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8,
#line 168 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_9)
#line 168 "ml_global_data.m"
{
#line 366 "ml_global_data.m"
  {
#line 366 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 366 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_12_12 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 366 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevDefns0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
#line 366 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevDefns_7;
#line 366 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_10_10;
#line 335 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
#line 335 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
#line 335 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
#line 335 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
#line 335 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
#line 335 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
#line 335 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 7)));
#line 335 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 8)));
#line 335 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 9)));
#line 335 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 10)));
#line 335 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 11)));
#line 335 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 12)));
#line 335 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 13)));
#line 347 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_32_32;
#line 347 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_33_33;
#line 347 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_34_34;
#line 347 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_35_35;
#line 347 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_36_36;
#line 347 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_37_37;
#line 347 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_39_39;
#line 347 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_40_40;
#line 347 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_41_41;
#line 347 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_42_42;
#line 347 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_43_43;
#line 347 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_44_44;
#line 347 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_45_45;
#line 347 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_38_38;

#line 368 "ml_global_data.m"
    {
#line 368 "ml_global_data.m"
      ml_backend__ml_global_data__V_10_10 = mercury__list__reverse_1_f_0(ml_backend__ml_global_data__TypeCtorInfo_12_12, ml_backend__ml_global_data__Defns_4);
    }
#line 368 "ml_global_data.m"
    {
#line 368 "ml_global_data.m"
      ml_backend__ml_global_data__RevDefns_7 = mercury__list__f_43_43_2_f_0(ml_backend__ml_global_data__TypeCtorInfo_12_12, ml_backend__ml_global_data__V_10_10, ml_backend__ml_global_data__RevDefns0_6);
    }
#line 347 "ml_global_data.m"
    ml_backend__ml_global_data__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
#line 347 "ml_global_data.m"
    ml_backend__ml_global_data__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
#line 347 "ml_global_data.m"
    ml_backend__ml_global_data__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
#line 347 "ml_global_data.m"
    ml_backend__ml_global_data__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
#line 347 "ml_global_data.m"
    ml_backend__ml_global_data__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
#line 347 "ml_global_data.m"
    ml_backend__ml_global_data__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
#line 347 "ml_global_data.m"
    ml_backend__ml_global_data__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
#line 347 "ml_global_data.m"
    ml_backend__ml_global_data__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 7)));
#line 347 "ml_global_data.m"
    ml_backend__ml_global_data__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 8)));
#line 347 "ml_global_data.m"
    ml_backend__ml_global_data__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 9)));
#line 347 "ml_global_data.m"
    ml_backend__ml_global_data__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 10)));
#line 347 "ml_global_data.m"
    ml_backend__ml_global_data__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 11)));
#line 347 "ml_global_data.m"
    ml_backend__ml_global_data__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 12)));
#line 347 "ml_global_data.m"
    ml_backend__ml_global_data__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 13)));
#line 347 "ml_global_data.m"
    {
#line 347 "ml_global_data.m"
      MR_Word base;
#line 347 "ml_global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 347 "ml_global_data.m"
      *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_9 = base;
#line 347 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__V_32_32));
#line 347 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_33_33));
#line 347 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_34_34));
#line 347 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_35_35));
#line 347 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__V_36_36));
#line 347 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__V_37_37));
#line 347 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__RevDefns_7));
#line 347 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_39_39));
#line 347 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_40_40));
#line 347 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__V_41_41));
#line 347 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_42_42));
#line 347 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__V_43_43));
#line 347 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__V_44_44));
#line 347 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__V_45_45));
#line 347 "ml_global_data.m"
    }
#line 366 "ml_global_data.m"
  }
#line 168 "ml_global_data.m"
}

#line 166 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data__ml_global_data_add_flat_rtti_defns_3_p_0(
#line 166 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Defns_4,
#line 166 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8,
#line 166 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_9)
#line 166 "ml_global_data.m"
{
#line 361 "ml_global_data.m"
  {
#line 361 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 361 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_12_12 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 361 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevDefns0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
#line 361 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevDefns_7;
#line 361 "ml_global_data.m"
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
    MR_Word ml_backend__ml_global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
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
    MR_Word ml_backend__ml_global_data__V_38_38;
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
    MR_Word ml_backend__ml_global_data__V_37_37;

#line 363 "ml_global_data.m"
    {
#line 363 "ml_global_data.m"
      ml_backend__ml_global_data__V_10_10 = mercury__list__reverse_1_f_0(ml_backend__ml_global_data__TypeCtorInfo_12_12, ml_backend__ml_global_data__Defns_4);
    }
#line 363 "ml_global_data.m"
    {
#line 363 "ml_global_data.m"
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
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__RevDefns_7));
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__V_38_38));
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
#line 361 "ml_global_data.m"
  }
#line 166 "ml_global_data.m"
}

#line 164 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data__ml_global_data_add_flat_rtti_defn_3_p_0(
#line 164 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Defn_4,
#line 164 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8,
#line 164 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_9)
#line 164 "ml_global_data.m"
{
#line 356 "ml_global_data.m"
  {
#line 356 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 356 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevDefns0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
#line 356 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevDefns_7;
#line 356 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
#line 356 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
#line 356 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
#line 356 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
#line 356 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
#line 356 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
#line 356 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 7)));
#line 356 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 8)));
#line 356 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 9)));
#line 356 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 10)));
#line 356 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 11)));
#line 356 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 12)));
#line 356 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 13)));

#line 358 "ml_global_data.m"
    {
#line 358 "ml_global_data.m"
      ml_backend__ml_global_data__RevDefns_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 358 "ml_global_data.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__RevDefns_7, 0) = ((MR_Box) (ml_backend__ml_global_data__Defn_4));
#line 358 "ml_global_data.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__RevDefns_7, 1) = ((MR_Box) (ml_backend__ml_global_data__RevDefns0_6));
#line 358 "ml_global_data.m"
    }
#line 345 "ml_global_data.m"
    {
#line 345 "ml_global_data.m"
      MR_Word base;
#line 345 "ml_global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 345 "ml_global_data.m"
      *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_9 = base;
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__V_12_12));
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_13_13));
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_14_14));
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_15_15));
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__V_16_16));
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__RevDefns_7));
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__V_17_17));
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_18_18));
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_19_19));
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__V_20_20));
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_21_21));
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__V_22_22));
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__V_23_23));
#line 345 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__V_24_24));
#line 345 "ml_global_data.m"
    }
#line 356 "ml_global_data.m"
  }
#line 164 "ml_global_data.m"
}

#line 156 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data__ml_global_data_add_pdup_rtti_id_4_p_0(
#line 156 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__RttiId_5,
#line 156 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__RvalType_6,
#line 156 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10,
#line 156 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_11)
#line 156 "ml_global_data.m"
{
#line 351 "ml_global_data.m"
  {
#line 351 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 351 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__PDupRvalTypeMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
#line 351 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__PDupRvalTypeMap_9;
#line 327 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
#line 327 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
#line 327 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
#line 327 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
#line 327 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
#line 327 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
#line 327 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 7)));
#line 327 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 8)));
#line 327 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 9)));
#line 327 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 10)));
#line 327 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 11)));
#line 327 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 12)));
#line 327 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 13)));
#line 339 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_35_35;
#line 339 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_36_36;
#line 339 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_37_37;
#line 339 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_38_38;
#line 339 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_39_39;
#line 339 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_40_40;
#line 339 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_41_41;
#line 339 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_42_42;
#line 339 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_43_43;
#line 339 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_44_44;
#line 339 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_45_45;
#line 339 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_46_46;
#line 339 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_47_47;
#line 339 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_34_34;

#line 353 "ml_global_data.m"
    {
#line 353 "ml_global_data.m"
      mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0, ((MR_Box) (ml_backend__ml_global_data__RttiId_5)), ((MR_Box) (ml_backend__ml_global_data__RvalType_6)), ml_backend__ml_global_data__PDupRvalTypeMap0_8, &ml_backend__ml_global_data__PDupRvalTypeMap_9);
    }
#line 339 "ml_global_data.m"
    ml_backend__ml_global_data__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
#line 339 "ml_global_data.m"
    ml_backend__ml_global_data__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
#line 339 "ml_global_data.m"
    ml_backend__ml_global_data__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
#line 339 "ml_global_data.m"
    ml_backend__ml_global_data__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
#line 339 "ml_global_data.m"
    ml_backend__ml_global_data__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
#line 339 "ml_global_data.m"
    ml_backend__ml_global_data__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
#line 339 "ml_global_data.m"
    ml_backend__ml_global_data__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
#line 339 "ml_global_data.m"
    ml_backend__ml_global_data__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 7)));
#line 339 "ml_global_data.m"
    ml_backend__ml_global_data__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 8)));
#line 339 "ml_global_data.m"
    ml_backend__ml_global_data__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 9)));
#line 339 "ml_global_data.m"
    ml_backend__ml_global_data__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 10)));
#line 339 "ml_global_data.m"
    ml_backend__ml_global_data__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 11)));
#line 339 "ml_global_data.m"
    ml_backend__ml_global_data__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 12)));
#line 339 "ml_global_data.m"
    ml_backend__ml_global_data__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 13)));
#line 339 "ml_global_data.m"
    {
#line 339 "ml_global_data.m"
      MR_Word base;
#line 339 "ml_global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 339 "ml_global_data.m"
      *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_11 = base;
#line 339 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__PDupRvalTypeMap_9));
#line 339 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_35_35));
#line 339 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_36_36));
#line 339 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_37_37));
#line 339 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__V_38_38));
#line 339 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__V_39_39));
#line 339 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__V_40_40));
#line 339 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_41_41));
#line 339 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_42_42));
#line 339 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__V_43_43));
#line 339 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_44_44));
#line 339 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__V_45_45));
#line 339 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__V_46_46));
#line 339 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__V_47_47));
#line 339 "ml_global_data.m"
    }
#line 351 "ml_global_data.m"
  }
#line 156 "ml_global_data.m"
}

#line 150 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data__ml_global_data_set_rev_maybe_nonflat_defns_3_p_0(
#line 150 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Defns_4,
#line 150 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6,
#line 150 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_7)
#line 150 "ml_global_data.m"
{
#line 347 "ml_global_data.m"
  {
#line 347 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 347 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 0)));
#line 347 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 1)));
#line 347 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 2)));
#line 347 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 3)));
#line 347 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 4)));
#line 347 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 5)));
#line 347 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 7)));
#line 347 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 8)));
#line 347 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 9)));
#line 347 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 10)));
#line 347 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 11)));
#line 347 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 12)));
#line 347 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 13)));
#line 347 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 6)));

#line 347 "ml_global_data.m"
    {
#line 347 "ml_global_data.m"
      MR_Word base;
#line 347 "ml_global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 347 "ml_global_data.m"
      *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_7 = base;
#line 347 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__V_9_9));
#line 347 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_10_10));
#line 347 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_11_11));
#line 347 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_12_12));
#line 347 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__V_13_13));
#line 347 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__V_14_14));
#line 347 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__Defns_4));
#line 347 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_16_16));
#line 347 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_17_17));
#line 347 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__V_18_18));
#line 347 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_19_19));
#line 347 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__V_20_20));
#line 347 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__V_21_21));
#line 347 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__V_22_22));
#line 347 "ml_global_data.m"
    }
#line 347 "ml_global_data.m"
  }
#line 150 "ml_global_data.m"
}

#line 143 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data__ml_global_data_get_pdup_rval_type_map_2_p_0(
#line 143 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__GlobalData_3,
#line 143 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__2_2)
#line 143 "ml_global_data.m"
{
#line 327 "ml_global_data.m"
  {
#line 327 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 327 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_4_4;
#line 327 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_5_5;
#line 327 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_6_6;
#line 327 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_7_7;
#line 327 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_8_8;
#line 327 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_9_9;
#line 327 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_10_10;
#line 327 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_11_11;
#line 327 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_12_12;
#line 327 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_13_13;
#line 327 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_14_14;
#line 327 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_15_15;
#line 327 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_16_16;

#line 327 "ml_global_data.m"
    *ml_backend__ml_global_data__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 0)));
#line 327 "ml_global_data.m"
    ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 1)));
#line 327 "ml_global_data.m"
    ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 2)));
#line 327 "ml_global_data.m"
    ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 3)));
#line 327 "ml_global_data.m"
    ml_backend__ml_global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 4)));
#line 327 "ml_global_data.m"
    ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 5)));
#line 327 "ml_global_data.m"
    ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 6)));
#line 327 "ml_global_data.m"
    ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 7)));
#line 327 "ml_global_data.m"
    ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 8)));
#line 327 "ml_global_data.m"
    ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 9)));
#line 327 "ml_global_data.m"
    ml_backend__ml_global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 10)));
#line 327 "ml_global_data.m"
    ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 11)));
#line 327 "ml_global_data.m"
    ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 12)));
#line 327 "ml_global_data.m"
    ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 13)));
#line 327 "ml_global_data.m"
  }
#line 143 "ml_global_data.m"
}

#line 113 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data__ml_global_data_get_all_global_defns_5_p_0(
#line 113 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__GlobalData_6,
#line 113 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__ScalarCellGroupMap_7,
#line 113 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__VectorCellGroupMap_8,
#line 113 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__AllocIds_9,
#line 113 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__Defns_10)
#line 113 "ml_global_data.m"
{
#line 284 "ml_global_data.m"
  {
#line 284 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 284 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_29_29;
#line 284 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevFlatCellDefns_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 4)));
#line 284 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevFlatRttiDefns_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 5)));
#line 284 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevMaybeNonFlatDefns_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 6)));
#line 284 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__AllocIdMap_22;
#line 284 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_23_23;
#line 284 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_24_24;
#line 284 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_25_25;
#line 284 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_26_26;
#line 285 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___PDupRvalTypeMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 0)));
#line 285 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___UseCommonCells_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 1)));
#line 285 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___HaveUnboxedFloats_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 2)));
#line 285 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___ConstCounter_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 3)));
#line 285 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___TypeNumCounter_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 7)));
#line 285 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___ScalarTypeNumMap_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 8)));
#line 285 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___VectorTypeNumMap_20;
#line 285 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___AllocIdNumCounter_21;

#line 285 "ml_global_data.m"
    *ml_backend__ml_global_data__ScalarCellGroupMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 9)));
#line 285 "ml_global_data.m"
    ml_backend__ml_global_data___VectorTypeNumMap_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 10)));
#line 285 "ml_global_data.m"
    *ml_backend__ml_global_data__VectorCellGroupMap_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 11)));
#line 285 "ml_global_data.m"
    ml_backend__ml_global_data___AllocIdNumCounter_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 12)));
#line 285 "ml_global_data.m"
    ml_backend__ml_global_data__AllocIdMap_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 13)));
#line 292 "ml_global_data.m"
    {
#line 292 "ml_global_data.m"
      mercury__bimap__to_assoc_list_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_alloc_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0, ml_backend__ml_global_data__AllocIdMap_22, ml_backend__ml_global_data__AllocIds_9);
    }
#line 9343 "ml_backend.ml_global_data.c"
    ml_backend__ml_global_data__TypeCtorInfo_29_29 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 300 "ml_global_data.m"
    {
#line 300 "ml_global_data.m"
      ml_backend__ml_global_data__V_23_23 = mercury__list__reverse_1_f_0(ml_backend__ml_global_data__TypeCtorInfo_29_29, ml_backend__ml_global_data__RevFlatRttiDefns_16);
    }
#line 301 "ml_global_data.m"
    {
#line 301 "ml_global_data.m"
      ml_backend__ml_global_data__V_25_25 = mercury__list__reverse_1_f_0(ml_backend__ml_global_data__TypeCtorInfo_29_29, ml_backend__ml_global_data__RevMaybeNonFlatDefns_17);
    }
#line 302 "ml_global_data.m"
    {
#line 302 "ml_global_data.m"
      ml_backend__ml_global_data__V_26_26 = mercury__list__reverse_1_f_0(ml_backend__ml_global_data__TypeCtorInfo_29_29, ml_backend__ml_global_data__RevFlatCellDefns_15);
    }
#line 301 "ml_global_data.m"
    {
#line 301 "ml_global_data.m"
      ml_backend__ml_global_data__V_24_24 = mercury__list__f_43_43_2_f_0(ml_backend__ml_global_data__TypeCtorInfo_29_29, ml_backend__ml_global_data__V_25_25, ml_backend__ml_global_data__V_26_26);
    }
#line 300 "ml_global_data.m"
    {
#line 300 "ml_global_data.m"
      *ml_backend__ml_global_data__Defns_10 = mercury__list__f_43_43_2_f_0(ml_backend__ml_global_data__TypeCtorInfo_29_29, ml_backend__ml_global_data__V_23_23, ml_backend__ml_global_data__V_24_24);
    }
#line 284 "ml_global_data.m"
  }
#line 113 "ml_global_data.m"
}

#line 102 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data__ml_global_data_get_global_defns_6_p_0(
#line 102 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__GlobalData_7,
#line 102 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__ScalarCellGroupMap_8,
#line 102 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__VectorCellGroupMap_9,
#line 102 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__RevFlatCellDefns_10,
#line 102 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__RevFlatRttiDefns_11,
#line 102 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__RevMaybeNonFlatDefns_12)
#line 102 "ml_global_data.m"
{
#line 275 "ml_global_data.m"
  {
#line 275 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 275 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___PDupRvalTypeMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 0)));
#line 275 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___UseCommonCells_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 1)));
#line 275 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___HaveUnboxedFloats_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 2)));
#line 275 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___ConstCounter_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 3)));
#line 275 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___TypeNumCounter_17;
#line 275 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___ScalarTypeNumMap_18;
#line 275 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___VectorTypeNumMap_19;
#line 275 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___AllocIdNumCounter_20;
#line 275 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___AllocIdMap_21;

#line 275 "ml_global_data.m"
    *ml_backend__ml_global_data__RevFlatCellDefns_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 4)));
#line 275 "ml_global_data.m"
    *ml_backend__ml_global_data__RevFlatRttiDefns_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 5)));
#line 275 "ml_global_data.m"
    *ml_backend__ml_global_data__RevMaybeNonFlatDefns_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 6)));
#line 275 "ml_global_data.m"
    ml_backend__ml_global_data___TypeNumCounter_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 7)));
#line 275 "ml_global_data.m"
    ml_backend__ml_global_data___ScalarTypeNumMap_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 8)));
#line 275 "ml_global_data.m"
    *ml_backend__ml_global_data__ScalarCellGroupMap_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 9)));
#line 275 "ml_global_data.m"
    ml_backend__ml_global_data___VectorTypeNumMap_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 10)));
#line 275 "ml_global_data.m"
    *ml_backend__ml_global_data__VectorCellGroupMap_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 11)));
#line 275 "ml_global_data.m"
    ml_backend__ml_global_data___AllocIdNumCounter_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 12)));
#line 275 "ml_global_data.m"
    ml_backend__ml_global_data___AllocIdMap_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 13)));
#line 275 "ml_global_data.m"
  }
#line 102 "ml_global_data.m"
}

#line 92 "ml_global_data.m"
MR_Word MR_CALL 
ml_backend__ml_global_data__ml_global_data_have_unboxed_floats_1_f_0(
#line 92 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__GlobalData_3)
#line 92 "ml_global_data.m"
{
#line 269 "ml_global_data.m"
  {
#line 269 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 269 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 2)));
#line 269 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 0)));
#line 269 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 1)));
#line 269 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 3)));
#line 269 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 4)));
#line 269 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 5)));
#line 269 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 6)));
#line 269 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 7)));
#line 269 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 8)));
#line 269 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 9)));
#line 269 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 10)));
#line 269 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 11)));
#line 269 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 12)));
#line 269 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 13)));

#line 269 "ml_global_data.m"
    return ml_backend__ml_global_data__HeadVar__2_2;
#line 269 "ml_global_data.m"
  }
#line 92 "ml_global_data.m"
}

#line 89 "ml_global_data.m"
MR_Word MR_CALL 
ml_backend__ml_global_data__ml_global_data_init_2_f_0(
#line 89 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__UseCommonCells_4,
#line 89 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HaveUnboxedFloats_5)
#line 89 "ml_global_data.m"
{
#line 263 "ml_global_data.m"
  {
#line 263 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 263 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__GlobalData_6;
#line 263 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_25_25;
#line 263 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_28_28;
#line 263 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_7_7;
#line 263 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_8_8;
#line 263 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_13_13;
#line 263 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_15_15;
#line 263 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_16_16;
#line 263 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_17_17;
#line 263 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_18_18;
#line 263 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_19_19;
#line 263 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_21_21;

#line 264 "ml_global_data.m"
    {
#line 264 "ml_global_data.m"
      ml_backend__ml_global_data__V_7_7 = mercury__map__init_0_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0);
    }
#line 265 "ml_global_data.m"
    {
#line 265 "ml_global_data.m"
      ml_backend__ml_global_data__V_8_8 = mercury__counter__init_1_f_0((MR_Integer) 1);
    }
#line 266 "ml_global_data.m"
    {
#line 266 "ml_global_data.m"
      ml_backend__ml_global_data__V_13_13 = mercury__counter__init_1_f_0((MR_Integer) 1);
    }
#line 9540 "ml_backend.ml_global_data.c"
    ml_backend__ml_global_data__TypeCtorInfo_25_25 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0;
#line 266 "ml_global_data.m"
    {
#line 266 "ml_global_data.m"
      ml_backend__ml_global_data__V_15_15 = mercury__map__init_0_f_0((MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0, ml_backend__ml_global_data__TypeCtorInfo_25_25);
    }
#line 266 "ml_global_data.m"
    {
#line 266 "ml_global_data.m"
      ml_backend__ml_global_data__V_16_16 = mercury__map__init_0_f_0(ml_backend__ml_global_data__TypeCtorInfo_25_25, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0);
    }
#line 9552 "ml_backend.ml_global_data.c"
    ml_backend__ml_global_data__TypeCtorInfo_28_28 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0;
#line 266 "ml_global_data.m"
    {
#line 266 "ml_global_data.m"
      ml_backend__ml_global_data__V_17_17 = mercury__map__init_0_f_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[0], ml_backend__ml_global_data__TypeCtorInfo_28_28);
    }
#line 266 "ml_global_data.m"
    {
#line 266 "ml_global_data.m"
      ml_backend__ml_global_data__V_18_18 = mercury__map__init_0_f_0(ml_backend__ml_global_data__TypeCtorInfo_28_28, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0);
    }
#line 267 "ml_global_data.m"
    {
#line 267 "ml_global_data.m"
      ml_backend__ml_global_data__V_19_19 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
#line 267 "ml_global_data.m"
    {
#line 267 "ml_global_data.m"
      ml_backend__ml_global_data__V_21_21 = mercury__bimap__init_0_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_alloc_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0);
    }
#line 264 "ml_global_data.m"
    {
#line 264 "ml_global_data.m"
      ml_backend__ml_global_data__GlobalData_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 264 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 0) = ((MR_Box) (ml_backend__ml_global_data__V_7_7));
#line 264 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 1) = ((MR_Box) (ml_backend__ml_global_data__UseCommonCells_4));
#line 264 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 2) = ((MR_Box) (ml_backend__ml_global_data__HaveUnboxedFloats_5));
#line 264 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 3) = ((MR_Box) (ml_backend__ml_global_data__V_8_8));
#line 264 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 264 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 264 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 264 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 7) = ((MR_Box) (ml_backend__ml_global_data__V_13_13));
#line 264 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 8) = ((MR_Box) (ml_backend__ml_global_data__V_15_15));
#line 264 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 9) = ((MR_Box) (ml_backend__ml_global_data__V_16_16));
#line 264 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 10) = ((MR_Box) (ml_backend__ml_global_data__V_17_17));
#line 264 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 11) = ((MR_Box) (ml_backend__ml_global_data__V_18_18));
#line 264 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 12) = ((MR_Box) (ml_backend__ml_global_data__V_19_19));
#line 264 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 13) = ((MR_Box) (ml_backend__ml_global_data__V_21_21));
#line 264 "ml_global_data.m"
    }
#line 263 "ml_global_data.m"
    return ml_backend__ml_global_data__GlobalData_6;
#line 263 "ml_global_data.m"
  }
#line 89 "ml_global_data.m"
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
