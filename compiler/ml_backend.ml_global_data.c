/*
** Automatically generated from `ml_global_data.m'
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
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
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
#include "parse_tree.file_kind.mih"
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




#line 149 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_floats_0_0;

#line 152 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_floats_0_1;

#line 155 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_value_ordered_have_unboxed_floats_0[2];

#line 158 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_name_ordered_have_unboxed_floats_0[2];

#line 161 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_have_unboxed_floats_0[2];

#line 164 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__bimap__ti_bimap_2ml_backend__mlds__type_ctor_info_mlds_alloc_id_0ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0;

#line 167 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_alloc_site_data_0_0[4];

#line 170 "ml_backend.ml_global_data.c"
static const MR_ConstString ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_alloc_site_data_0_0[4];

#line 173 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_alloc_site_data_0_0;

#line 176 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_alloc_site_data_0_0[1];

#line 179 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_alloc_site_data_0[1];

#line 182 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_alloc_site_data_0[1];

#line 185 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_alloc_site_data_0[1];

#line 188 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2backend_libs__rtti__type_ctor_info_rtti_id_0ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0;

#line 191 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0;

#line 194 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0;

#line 197 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0;

#line 200 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0;

#line 203 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0;

#line 206 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0;

#line 209 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_global_data_0_0[14];

#line 212 "ml_backend.ml_global_data.c"
static const MR_ConstString ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_global_data_0_0[14];

#line 215 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_global_data_0_0;

#line 218 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_global_data_0_0[1];

#line 221 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_global_data_0[1];

#line 224 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_global_data_0[1];

#line 227 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_global_data_0[1];

#line 230 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_rval_and_type_0_0[2];

#line 233 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_rval_and_type_0_0;

#line 236 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_rval_and_type_0_0[1];

#line 239 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_rval_and_type_0[1];

#line 242 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_rval_and_type_0[1];

#line 245 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_rval_and_type_0[1];

#line 248 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__bimap__ti_bimap_2ml_backend__mlds__type_ctor_info_mlds_initializer_0ml_backend__mlds__type_ctor_info_mlds_scalar_common_0;

#line 251 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_initializer_0;

#line 254 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_scalar_cell_group_0_0[5];

#line 257 "ml_backend.ml_global_data.c"
static const MR_ConstString ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_scalar_cell_group_0_0[5];

#line 260 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_scalar_cell_group_0_0;

#line 263 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_scalar_cell_group_0_0[1];

#line 266 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_scalar_cell_group_0[1];

#line 269 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_scalar_cell_group_0[1];

#line 272 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_scalar_cell_group_0[1];

#line 275 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_scalar_cell_type_0_0[2];

#line 278 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_scalar_cell_type_0_0;

#line 281 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_scalar_cell_type_0_0[1];

#line 284 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_scalar_cell_type_0[1];

#line 287 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_scalar_cell_type_0[1];

#line 290 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_scalar_cell_type_0[1];

#line 293 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_field_id_0;

#line 296 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_vector_cell_group_0_0[5];

#line 299 "ml_backend.ml_global_data.c"
static const MR_ConstString ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_vector_cell_group_0_0[5];

#line 302 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_vector_cell_group_0_0;

#line 305 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_vector_cell_group_0_0[1];

#line 308 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_vector_cell_group_0[1];

#line 311 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_vector_cell_group_0[1];

#line 314 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_vector_cell_group_0[1];

#line 317 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_use_common_cells_0_0;

#line 320 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_use_common_cells_0_1;

#line 323 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_value_ordered_use_common_cells_0[2];

#line 326 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_name_ordered_use_common_cells_0[2];

#line 329 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_use_common_cells_0[2];

#line 332 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____have_unboxed_floats_0_0_10001(
#line 335 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 337 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 340 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____have_unboxed_floats_0_0_10001(
#line 343 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 345 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 347 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 350 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_alloc_id_map_0_0_10001(
#line 353 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 355 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 358 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_alloc_id_map_0_0_10001(
#line 361 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 363 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 365 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 368 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_alloc_site_data_0_0_10001(
#line 371 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 373 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 376 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_alloc_site_data_0_0_10001(
#line 379 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 381 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 383 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 386 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_global_data_0_0_10001(
#line 389 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 391 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 394 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_global_data_0_0_10001(
#line 397 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 399 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 401 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 404 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_rtti_rval_type_map_0_0_10001(
#line 407 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 409 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 412 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_rtti_rval_type_map_0_0_10001(
#line 415 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 417 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 419 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 422 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_rval_and_type_0_0_10001(
#line 425 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 427 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 430 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_rval_and_type_0_0_10001(
#line 433 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 435 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 437 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 440 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_group_0_0_10001(
#line 443 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 445 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 448 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_group_0_0_10001(
#line 451 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 453 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 455 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 458 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_map_0_0_10001(
#line 461 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 463 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 466 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_map_0_0_10001(
#line 469 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 471 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 473 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 476 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_0_0_10001(
#line 479 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 481 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 484 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_0_0_10001(
#line 487 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 489 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 491 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 494 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_map_0_0_10001(
#line 497 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 499 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 502 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_map_0_0_10001(
#line 505 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 507 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 509 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 512 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_group_0_0_10001(
#line 515 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 517 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 520 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_group_0_0_10001(
#line 523 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 525 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 527 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 530 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_map_0_0_10001(
#line 533 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 535 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 538 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_map_0_0_10001(
#line 541 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 543 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 545 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 548 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_type_map_0_0_10001(
#line 551 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 553 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 556 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_type_map_0_0_10001(
#line 559 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 561 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 563 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 566 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____use_common_cells_0_0_10001(
#line 569 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 571 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2);

#line 574 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____use_common_cells_0_0_10001(
#line 577 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 579 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 581 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3);

#line 230 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_type_map_0_0(
#line 230 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 230 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 230 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3);

#line 230 "ml_global_data.m"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_type_map_0_0(
#line 230 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 230 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2);

#line 227 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_map_0_0(
#line 227 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 227 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 227 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3);

#line 227 "ml_global_data.m"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_map_0_0(
#line 227 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 227 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2);

#line 225 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_0_0(
#line 225 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 225 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 225 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3);

#line 225 "ml_global_data.m"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_0_0(
#line 225 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 225 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2);

#line 233 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_alloc_id_map_0_0(
#line 233 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 233 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 233 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3);

#line 233 "ml_global_data.m"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_alloc_id_map_0_0(
#line 233 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 233 "ml_global_data.m"
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

#line 525 "ml_global_data.m"
static MR_bool MR_CALL 
ml_backend__ml_global_data__ml_specialize_generic_array_rval_2_p_0(
#line 525 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13,
#line 525 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_Rval_14);

#line 510 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_specialize_generic_array_init_3_p_0(
#line 510 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Init0_4,
#line 510 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__Init_5,
#line 510 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__Type_6);

#line 468 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_gen_plain_static_defn_7_p_0(
#line 468 "ml_global_data.m"
  MR_String ml_backend__ml_global_data__ConstBaseName_8,
#line 468 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__ConstType_9,
#line 468 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Initializer_10,
#line 468 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Context_11,
#line 468 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__VarName_12,
#line 468 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25,
#line 468 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_26);

#line 410 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_gen_scalar_static_defn_6_p_0(
#line 410 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__MLDS_ModuleName_7,
#line 410 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__ConstType_8,
#line 410 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Initializer_9,
#line 410 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__Common_10,
#line 410 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34,
#line 410 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_35);

#line 319 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_global_data_set_rev_flat_cell_defns_3_p_0(
#line 319 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Defns_4,
#line 319 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6,
#line 319 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_7);

#line 500 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_gen_static_scalar_const_addr_8_p_0_1(
#line 500 "ml_global_data.m"
  MR_Box ml_backend__ml_global_data__closure_arg,
#line 500 "ml_global_data.m"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 500 "ml_global_data.m"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_2,
#line 500 "ml_global_data.m"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_3);

#line 500 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_gen_static_scalar_const_value_8_p_0_1(
#line 500 "ml_global_data.m"
  MR_Box ml_backend__ml_global_data__closure_arg,
#line 500 "ml_global_data.m"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 500 "ml_global_data.m"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_2,
#line 500 "ml_global_data.m"
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



#line 889 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_floats_0_0 = {
  (MR_String) "have_unboxed_floats",
  (MR_Integer) 0
};

#line 895 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_floats_0_1 = {
  (MR_String) "do_not_have_unboxed_floats",
  (MR_Integer) 1
};

#line 901 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_value_ordered_have_unboxed_floats_0[2] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_floats_0_0,
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_floats_0_1
};

#line 907 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_name_ordered_have_unboxed_floats_0[2] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_floats_0_1,
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_have_unboxed_floats_0_0
};

#line 913 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_have_unboxed_floats_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 919 "ml_backend.ml_global_data.c"
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

#line 936 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__bimap__ti_bimap_2ml_backend__mlds__type_ctor_info_mlds_alloc_id_0ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_alloc_id_0,
    (MR_TypeInfo) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0
  }
};

#line 945 "ml_backend.ml_global_data.c"
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

#line 962 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_alloc_site_data_0_0[4] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_entity_name_0,
  (MR_PseudoTypeInfo) &mercury__term__term__type_ctor_info_context_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 970 "ml_backend.ml_global_data.c"
static const MR_ConstString ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_alloc_site_data_0_0[4] = {
  (MR_String) "masd_proc_label",
  (MR_String) "masd_context",
  (MR_String) "masd_type",
  (MR_String) "masd_size"
};

#line 978 "ml_backend.ml_global_data.c"
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

#line 993 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_alloc_site_data_0_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_alloc_site_data_0_0
};

#line 998 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_alloc_site_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_alloc_site_data_0_0
  }
};

#line 1007 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_alloc_site_data_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_alloc_site_data_0_0
};

#line 1012 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_alloc_site_data_0[1] = {
  (MR_Integer) 0
};

#line 1017 "ml_backend.ml_global_data.c"
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

#line 1034 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2backend_libs__rtti__type_ctor_info_rtti_id_0ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0,
    (MR_TypeInfo) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0
  }
};

#line 1043 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0
  }
};

#line 1051 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0,
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0
  }
};

#line 1060 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0,
    (MR_TypeInfo) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0
  }
};

#line 1069 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0
  }
};

#line 1077 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_type_0,
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0
  }
};

#line 1086 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__tree234__ti_tree234_2ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0,
    (MR_TypeInfo) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0
  }
};

#line 1095 "ml_backend.ml_global_data.c"
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

#line 1113 "ml_backend.ml_global_data.c"
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

#line 1131 "ml_backend.ml_global_data.c"
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

#line 1146 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_global_data_0_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_global_data_0_0
};

#line 1151 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_global_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_global_data_0_0
  }
};

#line 1160 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_global_data_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_global_data_0_0
};

#line 1165 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_global_data_0[1] = {
  (MR_Integer) 0
};

#line 1170 "ml_backend.ml_global_data.c"
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

#line 1187 "ml_backend.ml_global_data.c"
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

#line 1204 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_rval_and_type_0_0[2] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_rval_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0
};

#line 1210 "ml_backend.ml_global_data.c"
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

#line 1225 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_rval_and_type_0_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_rval_and_type_0_0
};

#line 1230 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_rval_and_type_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_rval_and_type_0_0
  }
};

#line 1239 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_rval_and_type_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_rval_and_type_0_0
};

#line 1244 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_rval_and_type_0[1] = {
  (MR_Integer) 0
};

#line 1249 "ml_backend.ml_global_data.c"
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

#line 1266 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct2 ml_backend__ml_global_data__bimap__ti_bimap_2ml_backend__mlds__type_ctor_info_mlds_initializer_0ml_backend__mlds__type_ctor_info_mlds_scalar_common_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0,
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0
  }
};

#line 1275 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_initializer_0 = {
  &mercury__cord__cord__type_ctor_info_cord_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0
  }
};

#line 1283 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_scalar_cell_group_0_0[5] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_initializer_array_size_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__bimap__ti_bimap_2ml_backend__mlds__type_ctor_info_mlds_initializer_0ml_backend__mlds__type_ctor_info_mlds_scalar_common_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_initializer_0
};

#line 1292 "ml_backend.ml_global_data.c"
static const MR_ConstString ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_scalar_cell_group_0_0[5] = {
  (MR_String) "mscg_type",
  (MR_String) "mscg_array_size",
  (MR_String) "mscg_counter",
  (MR_String) "mscg_members",
  (MR_String) "mscg_rows"
};

#line 1301 "ml_backend.ml_global_data.c"
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

#line 1316 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_scalar_cell_group_0_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_scalar_cell_group_0_0
};

#line 1321 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_scalar_cell_group_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_scalar_cell_group_0_0
  }
};

#line 1330 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_scalar_cell_group_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_scalar_cell_group_0_0
};

#line 1335 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_scalar_cell_group_0[1] = {
  (MR_Integer) 0
};

#line 1340 "ml_backend.ml_global_data.c"
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

#line 1357 "ml_backend.ml_global_data.c"
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

#line 1374 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_scalar_cell_type_0_0[2] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_initializer_array_size_0
};

#line 1380 "ml_backend.ml_global_data.c"
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

#line 1395 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_scalar_cell_type_0_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_scalar_cell_type_0_0
};

#line 1400 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_scalar_cell_type_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_scalar_cell_type_0_0
  }
};

#line 1409 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_scalar_cell_type_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_scalar_cell_type_0_0
};

#line 1414 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_scalar_cell_type_0[1] = {
  (MR_Integer) 0
};

#line 1419 "ml_backend.ml_global_data.c"
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

#line 1436 "ml_backend.ml_global_data.c"
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

#line 1453 "ml_backend.ml_global_data.c"
static const MR_FA_TypeInfo_Struct1 ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_field_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_field_id_0
  }
};

#line 1461 "ml_backend.ml_global_data.c"
static const MR_PseudoTypeInfo ml_backend__ml_global_data__ml_backend__ml_global_data__field_types_ml_vector_cell_group_0_0[5] = {
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0,
  (MR_PseudoTypeInfo) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__list__ti_list_1ml_backend__mlds__type_ctor_info_mlds_field_id_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &ml_backend__ml_global_data__cord__ti_cord_1ml_backend__mlds__type_ctor_info_mlds_initializer_0
};

#line 1470 "ml_backend.ml_global_data.c"
static const MR_ConstString ml_backend__ml_global_data__ml_backend__ml_global_data__field_names_ml_vector_cell_group_0_0[5] = {
  (MR_String) "mvcg_type",
  (MR_String) "mvcg_type_defn",
  (MR_String) "mvcg_field_ids",
  (MR_String) "mvcg_next_row",
  (MR_String) "mvcg_rows"
};

#line 1479 "ml_backend.ml_global_data.c"
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

#line 1494 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_vector_cell_group_0_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_vector_cell_group_0_0
};

#line 1499 "ml_backend.ml_global_data.c"
static const MR_DuPtagLayout ml_backend__ml_global_data__ml_backend__ml_global_data__du_ptag_ordered_ml_vector_cell_group_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ml_backend__ml_global_data__ml_backend__ml_global_data__du_stag_ordered_ml_vector_cell_group_0_0
  }
};

#line 1508 "ml_backend.ml_global_data.c"
static const MR_DuFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__du_name_ordered_ml_vector_cell_group_0[1] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__du_functor_desc_ml_vector_cell_group_0_0
};

#line 1513 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_ml_vector_cell_group_0[1] = {
  (MR_Integer) 0
};

#line 1518 "ml_backend.ml_global_data.c"
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

#line 1535 "ml_backend.ml_global_data.c"
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

#line 1552 "ml_backend.ml_global_data.c"
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

#line 1569 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_use_common_cells_0_0 = {
  (MR_String) "do_not_use_common_cells",
  (MR_Integer) 0
};

#line 1575 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDesc ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_use_common_cells_0_1 = {
  (MR_String) "use_common_cells",
  (MR_Integer) 1
};

#line 1581 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_value_ordered_use_common_cells_0[2] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_use_common_cells_0_0,
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_use_common_cells_0_1
};

#line 1587 "ml_backend.ml_global_data.c"
static const MR_EnumFunctorDescPtr ml_backend__ml_global_data__ml_backend__ml_global_data__enum_name_ordered_use_common_cells_0[2] = {
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_use_common_cells_0_0,
  &ml_backend__ml_global_data__ml_backend__ml_global_data__enum_functor_desc_use_common_cells_0_1
};

#line 1593 "ml_backend.ml_global_data.c"
static const MR_Integer ml_backend__ml_global_data__ml_backend__ml_global_data__functor_number_map_use_common_cells_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1599 "ml_backend.ml_global_data.c"
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

#line 1616 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____have_unboxed_floats_0_0_10001(
#line 1619 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 1621 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 1623 "ml_backend.ml_global_data.c"
{
#line 1625 "ml_backend.ml_global_data.c"
  {
#line 1627 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 1630 "ml_backend.ml_global_data.c"
    {
#line 1632 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____have_unboxed_floats_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 1635 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 1637 "ml_backend.ml_global_data.c"
  }
#line 1639 "ml_backend.ml_global_data.c"
}

#line 1642 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____have_unboxed_floats_0_0_10001(
#line 1645 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 1647 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 1649 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 1651 "ml_backend.ml_global_data.c"
{
#line 1653 "ml_backend.ml_global_data.c"
  {
#line 1655 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 1658 "ml_backend.ml_global_data.c"
    {
#line 1660 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____have_unboxed_floats_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 1663 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 1665 "ml_backend.ml_global_data.c"
  }
#line 1667 "ml_backend.ml_global_data.c"
}

#line 1670 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_alloc_id_map_0_0_10001(
#line 1673 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 1675 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 1677 "ml_backend.ml_global_data.c"
{
#line 1679 "ml_backend.ml_global_data.c"
  {
#line 1681 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 1684 "ml_backend.ml_global_data.c"
    {
#line 1686 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_alloc_id_map_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 1689 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 1691 "ml_backend.ml_global_data.c"
  }
#line 1693 "ml_backend.ml_global_data.c"
}

#line 1696 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_alloc_id_map_0_0_10001(
#line 1699 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 1701 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 1703 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 1705 "ml_backend.ml_global_data.c"
{
#line 1707 "ml_backend.ml_global_data.c"
  {
#line 1709 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 1712 "ml_backend.ml_global_data.c"
    {
#line 1714 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_alloc_id_map_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 1717 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 1719 "ml_backend.ml_global_data.c"
  }
#line 1721 "ml_backend.ml_global_data.c"
}

#line 1724 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_alloc_site_data_0_0_10001(
#line 1727 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 1729 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 1731 "ml_backend.ml_global_data.c"
{
#line 1733 "ml_backend.ml_global_data.c"
  {
#line 1735 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 1738 "ml_backend.ml_global_data.c"
    {
#line 1740 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_alloc_site_data_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 1743 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 1745 "ml_backend.ml_global_data.c"
  }
#line 1747 "ml_backend.ml_global_data.c"
}

#line 1750 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_alloc_site_data_0_0_10001(
#line 1753 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 1755 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 1757 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 1759 "ml_backend.ml_global_data.c"
{
#line 1761 "ml_backend.ml_global_data.c"
  {
#line 1763 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 1766 "ml_backend.ml_global_data.c"
    {
#line 1768 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_alloc_site_data_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 1771 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 1773 "ml_backend.ml_global_data.c"
  }
#line 1775 "ml_backend.ml_global_data.c"
}

#line 1778 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_global_data_0_0_10001(
#line 1781 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 1783 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 1785 "ml_backend.ml_global_data.c"
{
#line 1787 "ml_backend.ml_global_data.c"
  {
#line 1789 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 1792 "ml_backend.ml_global_data.c"
    {
#line 1794 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_global_data_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 1797 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 1799 "ml_backend.ml_global_data.c"
  }
#line 1801 "ml_backend.ml_global_data.c"
}

#line 1804 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_global_data_0_0_10001(
#line 1807 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 1809 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 1811 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 1813 "ml_backend.ml_global_data.c"
{
#line 1815 "ml_backend.ml_global_data.c"
  {
#line 1817 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 1820 "ml_backend.ml_global_data.c"
    {
#line 1822 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_global_data_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 1825 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 1827 "ml_backend.ml_global_data.c"
  }
#line 1829 "ml_backend.ml_global_data.c"
}

#line 1832 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_rtti_rval_type_map_0_0_10001(
#line 1835 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 1837 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 1839 "ml_backend.ml_global_data.c"
{
#line 1841 "ml_backend.ml_global_data.c"
  {
#line 1843 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 1846 "ml_backend.ml_global_data.c"
    {
#line 1848 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_rtti_rval_type_map_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 1851 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 1853 "ml_backend.ml_global_data.c"
  }
#line 1855 "ml_backend.ml_global_data.c"
}

#line 1858 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_rtti_rval_type_map_0_0_10001(
#line 1861 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 1863 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 1865 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 1867 "ml_backend.ml_global_data.c"
{
#line 1869 "ml_backend.ml_global_data.c"
  {
#line 1871 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 1874 "ml_backend.ml_global_data.c"
    {
#line 1876 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_rtti_rval_type_map_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 1879 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 1881 "ml_backend.ml_global_data.c"
  }
#line 1883 "ml_backend.ml_global_data.c"
}

#line 1886 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_rval_and_type_0_0_10001(
#line 1889 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 1891 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 1893 "ml_backend.ml_global_data.c"
{
#line 1895 "ml_backend.ml_global_data.c"
  {
#line 1897 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 1900 "ml_backend.ml_global_data.c"
    {
#line 1902 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_rval_and_type_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 1905 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 1907 "ml_backend.ml_global_data.c"
  }
#line 1909 "ml_backend.ml_global_data.c"
}

#line 1912 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_rval_and_type_0_0_10001(
#line 1915 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 1917 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 1919 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 1921 "ml_backend.ml_global_data.c"
{
#line 1923 "ml_backend.ml_global_data.c"
  {
#line 1925 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 1928 "ml_backend.ml_global_data.c"
    {
#line 1930 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_rval_and_type_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 1933 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 1935 "ml_backend.ml_global_data.c"
  }
#line 1937 "ml_backend.ml_global_data.c"
}

#line 1940 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_group_0_0_10001(
#line 1943 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 1945 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 1947 "ml_backend.ml_global_data.c"
{
#line 1949 "ml_backend.ml_global_data.c"
  {
#line 1951 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 1954 "ml_backend.ml_global_data.c"
    {
#line 1956 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_scalar_cell_group_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 1959 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 1961 "ml_backend.ml_global_data.c"
  }
#line 1963 "ml_backend.ml_global_data.c"
}

#line 1966 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_group_0_0_10001(
#line 1969 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 1971 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 1973 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 1975 "ml_backend.ml_global_data.c"
{
#line 1977 "ml_backend.ml_global_data.c"
  {
#line 1979 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 1982 "ml_backend.ml_global_data.c"
    {
#line 1984 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_scalar_cell_group_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 1987 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 1989 "ml_backend.ml_global_data.c"
  }
#line 1991 "ml_backend.ml_global_data.c"
}

#line 1994 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_map_0_0_10001(
#line 1997 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 1999 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 2001 "ml_backend.ml_global_data.c"
{
#line 2003 "ml_backend.ml_global_data.c"
  {
#line 2005 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 2008 "ml_backend.ml_global_data.c"
    {
#line 2010 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_scalar_cell_map_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 2013 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 2015 "ml_backend.ml_global_data.c"
  }
#line 2017 "ml_backend.ml_global_data.c"
}

#line 2020 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_map_0_0_10001(
#line 2023 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 2025 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 2027 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 2029 "ml_backend.ml_global_data.c"
{
#line 2031 "ml_backend.ml_global_data.c"
  {
#line 2033 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 2036 "ml_backend.ml_global_data.c"
    {
#line 2038 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_scalar_cell_map_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 2041 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 2043 "ml_backend.ml_global_data.c"
  }
#line 2045 "ml_backend.ml_global_data.c"
}

#line 2048 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_0_0_10001(
#line 2051 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 2053 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 2055 "ml_backend.ml_global_data.c"
{
#line 2057 "ml_backend.ml_global_data.c"
  {
#line 2059 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 2062 "ml_backend.ml_global_data.c"
    {
#line 2064 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_scalar_cell_type_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 2067 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 2069 "ml_backend.ml_global_data.c"
  }
#line 2071 "ml_backend.ml_global_data.c"
}

#line 2074 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_0_0_10001(
#line 2077 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 2079 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 2081 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 2083 "ml_backend.ml_global_data.c"
{
#line 2085 "ml_backend.ml_global_data.c"
  {
#line 2087 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 2090 "ml_backend.ml_global_data.c"
    {
#line 2092 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_scalar_cell_type_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 2095 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 2097 "ml_backend.ml_global_data.c"
  }
#line 2099 "ml_backend.ml_global_data.c"
}

#line 2102 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_map_0_0_10001(
#line 2105 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 2107 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 2109 "ml_backend.ml_global_data.c"
{
#line 2111 "ml_backend.ml_global_data.c"
  {
#line 2113 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 2116 "ml_backend.ml_global_data.c"
    {
#line 2118 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_scalar_cell_type_map_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 2121 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 2123 "ml_backend.ml_global_data.c"
  }
#line 2125 "ml_backend.ml_global_data.c"
}

#line 2128 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_map_0_0_10001(
#line 2131 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 2133 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 2135 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 2137 "ml_backend.ml_global_data.c"
{
#line 2139 "ml_backend.ml_global_data.c"
  {
#line 2141 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 2144 "ml_backend.ml_global_data.c"
    {
#line 2146 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_scalar_cell_type_map_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 2149 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 2151 "ml_backend.ml_global_data.c"
  }
#line 2153 "ml_backend.ml_global_data.c"
}

#line 2156 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_group_0_0_10001(
#line 2159 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 2161 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 2163 "ml_backend.ml_global_data.c"
{
#line 2165 "ml_backend.ml_global_data.c"
  {
#line 2167 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 2170 "ml_backend.ml_global_data.c"
    {
#line 2172 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_vector_cell_group_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 2175 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 2177 "ml_backend.ml_global_data.c"
  }
#line 2179 "ml_backend.ml_global_data.c"
}

#line 2182 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_group_0_0_10001(
#line 2185 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 2187 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 2189 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 2191 "ml_backend.ml_global_data.c"
{
#line 2193 "ml_backend.ml_global_data.c"
  {
#line 2195 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 2198 "ml_backend.ml_global_data.c"
    {
#line 2200 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_vector_cell_group_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 2203 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 2205 "ml_backend.ml_global_data.c"
  }
#line 2207 "ml_backend.ml_global_data.c"
}

#line 2210 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_map_0_0_10001(
#line 2213 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 2215 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 2217 "ml_backend.ml_global_data.c"
{
#line 2219 "ml_backend.ml_global_data.c"
  {
#line 2221 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 2224 "ml_backend.ml_global_data.c"
    {
#line 2226 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_vector_cell_map_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 2229 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 2231 "ml_backend.ml_global_data.c"
  }
#line 2233 "ml_backend.ml_global_data.c"
}

#line 2236 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_map_0_0_10001(
#line 2239 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 2241 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 2243 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 2245 "ml_backend.ml_global_data.c"
{
#line 2247 "ml_backend.ml_global_data.c"
  {
#line 2249 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 2252 "ml_backend.ml_global_data.c"
    {
#line 2254 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_vector_cell_map_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 2257 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 2259 "ml_backend.ml_global_data.c"
  }
#line 2261 "ml_backend.ml_global_data.c"
}

#line 2264 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_type_map_0_0_10001(
#line 2267 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 2269 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 2271 "ml_backend.ml_global_data.c"
{
#line 2273 "ml_backend.ml_global_data.c"
  {
#line 2275 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 2278 "ml_backend.ml_global_data.c"
    {
#line 2280 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____ml_vector_cell_type_map_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 2283 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 2285 "ml_backend.ml_global_data.c"
  }
#line 2287 "ml_backend.ml_global_data.c"
}

#line 2290 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_type_map_0_0_10001(
#line 2293 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 2295 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 2297 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 2299 "ml_backend.ml_global_data.c"
{
#line 2301 "ml_backend.ml_global_data.c"
  {
#line 2303 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 2306 "ml_backend.ml_global_data.c"
    {
#line 2308 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____ml_vector_cell_type_map_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 2311 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 2313 "ml_backend.ml_global_data.c"
  }
#line 2315 "ml_backend.ml_global_data.c"
}

#line 2318 "ml_backend.ml_global_data.c"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____use_common_cells_0_0_10001(
#line 2321 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 2323 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2)
#line 2325 "ml_backend.ml_global_data.c"
{
#line 2327 "ml_backend.ml_global_data.c"
  {
#line 2329 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded;

#line 2332 "ml_backend.ml_global_data.c"
    {
#line 2334 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data____Unify____use_common_cells_0_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2));
    }
#line 2337 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 2339 "ml_backend.ml_global_data.c"
  }
#line 2341 "ml_backend.ml_global_data.c"
}

#line 2344 "ml_backend.ml_global_data.c"
static void MR_CALL 
ml_backend__ml_global_data____Compare____use_common_cells_0_0_10001(
#line 2347 "ml_backend.ml_global_data.c"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_1,
#line 2349 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_2,
#line 2351 "ml_backend.ml_global_data.c"
  MR_Box ml_backend__ml_global_data__wrapper_arg_3)
#line 2353 "ml_backend.ml_global_data.c"
{
#line 2355 "ml_backend.ml_global_data.c"
  {
#line 2357 "ml_backend.ml_global_data.c"
    MR_Word ml_backend__ml_global_data__conv0_HeadVar__1_1;

#line 2360 "ml_backend.ml_global_data.c"
    {
#line 2362 "ml_backend.ml_global_data.c"
      ml_backend__ml_global_data____Compare____use_common_cells_0_0(&ml_backend__ml_global_data__conv0_HeadVar__1_1, ((MR_Word) ml_backend__ml_global_data__wrapper_arg_2), ((MR_Word) ml_backend__ml_global_data__wrapper_arg_3));
    }
#line 2365 "ml_backend.ml_global_data.c"
    *ml_backend__ml_global_data__wrapper_arg_1 = ((MR_Box) (ml_backend__ml_global_data__conv0_HeadVar__1_1));
#line 2367 "ml_backend.ml_global_data.c"
  }
#line 2369 "ml_backend.ml_global_data.c"
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
#line 2413 "ml_backend.ml_global_data.c"
  {
#line 2415 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__HeadVar__2_1 == ml_backend__ml_global_data__HeadVar__2_2);

#line 2418 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 2420 "ml_backend.ml_global_data.c"
  }
#line 40 "ml_global_data.m"
}

#line 230 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_vector_cell_type_map_0_0(
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
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[4], ml_backend__ml_global_data__HeadVar__1_1, ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_5)));
#line 230 "ml_global_data.m"
      return;
    }
#line 230 "ml_global_data.m"
  }
#line 230 "ml_global_data.m"
}

#line 230 "ml_global_data.m"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_vector_cell_type_map_0_0(
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
      return ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[4], ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_4)));
    }
#line 230 "ml_global_data.m"
    return ml_backend__ml_global_data__succeeded;
#line 230 "ml_global_data.m"
  }
#line 230 "ml_global_data.m"
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
#line 2573 "ml_backend.ml_global_data.c"
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
#line 2607 "ml_backend.ml_global_data.c"
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
#line 2627 "ml_backend.ml_global_data.c"
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
#line 2647 "ml_backend.ml_global_data.c"
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
#line 2667 "ml_backend.ml_global_data.c"
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

#line 2754 "ml_backend.ml_global_data.c"
        {
#line 2756 "ml_backend.ml_global_data.c"
          ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ml_backend__ml_global_data__V_3_3, ml_backend__ml_global_data__V_8_8);
        }
#line 65 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 65 "ml_global_data.m"
          {
#line 2763 "ml_backend.ml_global_data.c"
            {
#line 2765 "ml_backend.ml_global_data.c"
              ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____mlds_defn_0_0(ml_backend__ml_global_data__V_4_4, ml_backend__ml_global_data__V_9_9);
            }
#line 65 "ml_global_data.m"
            if (ml_backend__ml_global_data__succeeded)
#line 65 "ml_global_data.m"
              {
#line 2772 "ml_backend.ml_global_data.c"
                ml_backend__ml_global_data__TypeInfo_17_17 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[3];
#line 2774 "ml_backend.ml_global_data.c"
                {
#line 2776 "ml_backend.ml_global_data.c"
                  ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_17_17, ((MR_Box) (ml_backend__ml_global_data__V_5_5)), ((MR_Box) (ml_backend__ml_global_data__V_10_10)));
                }
#line 65 "ml_global_data.m"
                if (ml_backend__ml_global_data__succeeded)
#line 65 "ml_global_data.m"
                  {
#line 2783 "ml_backend.ml_global_data.c"
                    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_6_6 == ml_backend__ml_global_data__V_11_11);
#line 65 "ml_global_data.m"
                    if (ml_backend__ml_global_data__succeeded)
#line 65 "ml_global_data.m"
                      {
#line 2789 "ml_backend.ml_global_data.c"
                        ml_backend__ml_global_data__TypeInfo_18_18 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[2];
#line 2791 "ml_backend.ml_global_data.c"
                        {
#line 2793 "ml_backend.ml_global_data.c"
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

#line 227 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_map_0_0(
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
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_4 = ml_backend__ml_global_data__HeadVar__2_2;
#line 227 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_5 = ml_backend__ml_global_data__HeadVar__3_3;

#line 227 "ml_global_data.m"
    {
#line 227 "ml_global_data.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[2], ml_backend__ml_global_data__HeadVar__1_1, ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_5)));
#line 227 "ml_global_data.m"
      return;
    }
#line 227 "ml_global_data.m"
  }
#line 227 "ml_global_data.m"
}

#line 227 "ml_global_data.m"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_map_0_0(
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
    MR_Word ml_backend__ml_global_data__Cast_HeadVar1_3 = ml_backend__ml_global_data__HeadVar__1_1;
#line 227 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Cast_HeadVar2_4 = ml_backend__ml_global_data__HeadVar__2_2;

#line 227 "ml_global_data.m"
    {
#line 227 "ml_global_data.m"
      return ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[2], ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_4)));
    }
#line 227 "ml_global_data.m"
    return ml_backend__ml_global_data__succeeded;
#line 227 "ml_global_data.m"
  }
#line 227 "ml_global_data.m"
}

#line 225 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_scalar_cell_type_0_0(
#line 225 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__HeadVar__1_1,
#line 225 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2,
#line 225 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__3_3)
#line 225 "ml_global_data.m"
{
#line 225 "ml_global_data.m"
  {
#line 225 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 225 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastX_9 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;
#line 225 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastY_10 = (MR_Integer) ml_backend__ml_global_data__HeadVar__3_3;

#line 225 "ml_global_data.m"
    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_9 == ml_backend__ml_global_data__CastY_10);
#line 225 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 2899 "ml_backend.ml_global_data.c"
      *ml_backend__ml_global_data__HeadVar__1_1 = (MR_Integer) 0;
#line 225 "ml_global_data.m"
    else
#line 225 "ml_global_data.m"
      {
#line 225 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 225 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 225 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 0)));
#line 225 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 1)));
#line 225 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_8_8;

#line 225 "ml_global_data.m"
        {
#line 225 "ml_global_data.m"
          ml_backend__mlds____Compare____mlds_type_0_0(&ml_backend__ml_global_data__V_8_8, ml_backend__ml_global_data__V_4_4, ml_backend__ml_global_data__V_6_6);
        }
#line 2921 "ml_backend.ml_global_data.c"
        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_8_8 == (MR_Integer) 0);
#line 225 "ml_global_data.m"
        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 225 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 225 "ml_global_data.m"
          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_8_8;
#line 225 "ml_global_data.m"
        else
#line 225 "ml_global_data.m"
          {
#line 225 "ml_global_data.m"
            ml_backend__mlds____Compare____initializer_array_size_0_0(ml_backend__ml_global_data__HeadVar__1_1, ml_backend__ml_global_data__V_5_5, ml_backend__ml_global_data__V_7_7);
#line 225 "ml_global_data.m"
            return;
          }
#line 225 "ml_global_data.m"
      }
#line 225 "ml_global_data.m"
  }
#line 225 "ml_global_data.m"
}

#line 225 "ml_global_data.m"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_scalar_cell_type_0_0(
#line 225 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__1_1,
#line 225 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__HeadVar__2_2)
#line 225 "ml_global_data.m"
{
#line 225 "ml_global_data.m"
  {
#line 225 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 225 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastX_7 = (MR_Integer) ml_backend__ml_global_data__HeadVar__1_1;
#line 225 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastY_8 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;

#line 225 "ml_global_data.m"
    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_7 == ml_backend__ml_global_data__CastY_8);
#line 225 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 225 "ml_global_data.m"
      ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 225 "ml_global_data.m"
    else
#line 225 "ml_global_data.m"
      {
#line 225 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 0)));
#line 225 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 1)));
#line 225 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 225 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));

#line 2982 "ml_backend.ml_global_data.c"
        {
#line 2984 "ml_backend.ml_global_data.c"
          ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ml_backend__ml_global_data__V_3_3, ml_backend__ml_global_data__V_5_5);
        }
#line 225 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 2989 "ml_backend.ml_global_data.c"
          {
#line 2991 "ml_backend.ml_global_data.c"
            return ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____initializer_array_size_0_0(ml_backend__ml_global_data__V_4_4, ml_backend__ml_global_data__V_6_6);
          }
#line 225 "ml_global_data.m"
      }
#line 225 "ml_global_data.m"
    return ml_backend__ml_global_data__succeeded;
#line 225 "ml_global_data.m"
  }
#line 225 "ml_global_data.m"
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
#line 3089 "ml_backend.ml_global_data.c"
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
#line 3123 "ml_backend.ml_global_data.c"
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
#line 3143 "ml_backend.ml_global_data.c"
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
#line 3163 "ml_backend.ml_global_data.c"
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
#line 3183 "ml_backend.ml_global_data.c"
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

#line 3270 "ml_backend.ml_global_data.c"
        {
#line 3272 "ml_backend.ml_global_data.c"
          ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____mlds_type_0_0(ml_backend__ml_global_data__V_3_3, ml_backend__ml_global_data__V_8_8);
        }
#line 51 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 51 "ml_global_data.m"
          {
#line 3279 "ml_backend.ml_global_data.c"
            {
#line 3281 "ml_backend.ml_global_data.c"
              ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____initializer_array_size_0_0(ml_backend__ml_global_data__V_4_4, ml_backend__ml_global_data__V_9_9);
            }
#line 51 "ml_global_data.m"
            if (ml_backend__ml_global_data__succeeded)
#line 51 "ml_global_data.m"
              {
#line 3288 "ml_backend.ml_global_data.c"
                {
#line 3290 "ml_backend.ml_global_data.c"
                  ml_backend__ml_global_data__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_global_data__V_5_5, ml_backend__ml_global_data__V_10_10);
                }
#line 51 "ml_global_data.m"
                if (ml_backend__ml_global_data__succeeded)
#line 51 "ml_global_data.m"
                  {
#line 3297 "ml_backend.ml_global_data.c"
                    ml_backend__ml_global_data__TypeInfo_18_18 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[6];
#line 3299 "ml_backend.ml_global_data.c"
                    {
#line 3301 "ml_backend.ml_global_data.c"
                      ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_18_18, ((MR_Box) (ml_backend__ml_global_data__V_6_6)), ((MR_Box) (ml_backend__ml_global_data__V_11_11)));
                    }
#line 51 "ml_global_data.m"
                    if (ml_backend__ml_global_data__succeeded)
#line 51 "ml_global_data.m"
                      {
#line 3308 "ml_backend.ml_global_data.c"
                        ml_backend__ml_global_data__TypeInfo_19_19 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[2];
#line 3310 "ml_backend.ml_global_data.c"
                        {
#line 3312 "ml_backend.ml_global_data.c"
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
#line 3356 "ml_backend.ml_global_data.c"
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
#line 3378 "ml_backend.ml_global_data.c"
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

#line 3439 "ml_backend.ml_global_data.c"
        {
#line 3441 "ml_backend.ml_global_data.c"
          ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____mlds_rval_0_0(ml_backend__ml_global_data__V_3_3, ml_backend__ml_global_data__V_5_5);
        }
#line 131 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 3446 "ml_backend.ml_global_data.c"
          {
#line 3448 "ml_backend.ml_global_data.c"
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

#line 236 "ml_global_data.m"
void MR_CALL 
ml_backend__ml_global_data____Compare____ml_global_data_0_0(
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
    MR_Integer ml_backend__ml_global_data__CastX_45 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;
#line 236 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastY_46 = (MR_Integer) ml_backend__ml_global_data__HeadVar__3_3;

#line 236 "ml_global_data.m"
    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_45 == ml_backend__ml_global_data__CastY_46);
#line 236 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 3546 "ml_backend.ml_global_data.c"
      *ml_backend__ml_global_data__HeadVar__1_1 = (MR_Integer) 0;
#line 236 "ml_global_data.m"
    else
#line 236 "ml_global_data.m"
      {
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 2)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 3)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 4)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 5)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 6)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 7)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 8)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 9)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 10)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 11)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 12)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 13)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 0)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 1)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 2)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 3)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 4)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 5)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 6)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 7)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 8)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 9)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 10)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 11)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 12)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__3_3, (MR_Integer) 13)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_32_32;

#line 236 "ml_global_data.m"
        {
#line 236 "ml_global_data.m"
          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[1], &ml_backend__ml_global_data__V_32_32, ((MR_Box) (ml_backend__ml_global_data__V_4_4)), ((MR_Box) (ml_backend__ml_global_data__V_18_18)));
        }
#line 3616 "ml_backend.ml_global_data.c"
        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_32_32 == (MR_Integer) 0);
#line 236 "ml_global_data.m"
        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 236 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 236 "ml_global_data.m"
          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_32_32;
#line 236 "ml_global_data.m"
        else
#line 236 "ml_global_data.m"
          {
#line 236 "ml_global_data.m"
            MR_Word ml_backend__ml_global_data__V_33_33;
#line 236 "ml_global_data.m"
            MR_Integer ml_backend__ml_global_data__V_61_61 = (MR_Integer) ml_backend__ml_global_data__V_5_5;
#line 236 "ml_global_data.m"
            MR_Integer ml_backend__ml_global_data__V_62_62 = (MR_Integer) ml_backend__ml_global_data__V_19_19;

#line 236 "ml_global_data.m"
            {
#line 236 "ml_global_data.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_global_data__V_33_33, ml_backend__ml_global_data__V_61_61, ml_backend__ml_global_data__V_62_62);
            }
#line 3640 "ml_backend.ml_global_data.c"
            ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_33_33 == (MR_Integer) 0);
#line 236 "ml_global_data.m"
            ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 236 "ml_global_data.m"
            if (ml_backend__ml_global_data__succeeded)
#line 236 "ml_global_data.m"
              *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_33_33;
#line 236 "ml_global_data.m"
            else
#line 236 "ml_global_data.m"
              {
#line 236 "ml_global_data.m"
                MR_Word ml_backend__ml_global_data__V_34_34;
#line 236 "ml_global_data.m"
                MR_Integer ml_backend__ml_global_data__V_63_63 = (MR_Integer) ml_backend__ml_global_data__V_6_6;
#line 236 "ml_global_data.m"
                MR_Integer ml_backend__ml_global_data__V_64_64 = (MR_Integer) ml_backend__ml_global_data__V_20_20;

#line 236 "ml_global_data.m"
                {
#line 236 "ml_global_data.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&ml_backend__ml_global_data__V_34_34, ml_backend__ml_global_data__V_63_63, ml_backend__ml_global_data__V_64_64);
                }
#line 3664 "ml_backend.ml_global_data.c"
                ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_34_34 == (MR_Integer) 0);
#line 236 "ml_global_data.m"
                ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 236 "ml_global_data.m"
                if (ml_backend__ml_global_data__succeeded)
#line 236 "ml_global_data.m"
                  *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_34_34;
#line 236 "ml_global_data.m"
                else
#line 236 "ml_global_data.m"
                  {
#line 236 "ml_global_data.m"
                    MR_Word ml_backend__ml_global_data__V_35_35;

#line 236 "ml_global_data.m"
                    {
#line 236 "ml_global_data.m"
                      mercury__counter____Compare____counter_0_0(&ml_backend__ml_global_data__V_35_35, ml_backend__ml_global_data__V_7_7, ml_backend__ml_global_data__V_21_21);
                    }
#line 3684 "ml_backend.ml_global_data.c"
                    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_35_35 == (MR_Integer) 0);
#line 236 "ml_global_data.m"
                    ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 236 "ml_global_data.m"
                    if (ml_backend__ml_global_data__succeeded)
#line 236 "ml_global_data.m"
                      *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_35_35;
#line 236 "ml_global_data.m"
                    else
#line 236 "ml_global_data.m"
                      {
#line 236 "ml_global_data.m"
                        MR_Word ml_backend__ml_global_data__V_36_36;

#line 236 "ml_global_data.m"
                        {
#line 236 "ml_global_data.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[1], &ml_backend__ml_global_data__V_36_36, ((MR_Box) (ml_backend__ml_global_data__V_8_8)), ((MR_Box) (ml_backend__ml_global_data__V_22_22)));
                        }
#line 3704 "ml_backend.ml_global_data.c"
                        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_36_36 == (MR_Integer) 0);
#line 236 "ml_global_data.m"
                        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 236 "ml_global_data.m"
                        if (ml_backend__ml_global_data__succeeded)
#line 236 "ml_global_data.m"
                          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_36_36;
#line 236 "ml_global_data.m"
                        else
#line 236 "ml_global_data.m"
                          {
#line 236 "ml_global_data.m"
                            MR_Word ml_backend__ml_global_data__V_37_37;

#line 236 "ml_global_data.m"
                            {
#line 236 "ml_global_data.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[1], &ml_backend__ml_global_data__V_37_37, ((MR_Box) (ml_backend__ml_global_data__V_9_9)), ((MR_Box) (ml_backend__ml_global_data__V_23_23)));
                            }
#line 3724 "ml_backend.ml_global_data.c"
                            ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_37_37 == (MR_Integer) 0);
#line 236 "ml_global_data.m"
                            ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 236 "ml_global_data.m"
                            if (ml_backend__ml_global_data__succeeded)
#line 236 "ml_global_data.m"
                              *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_37_37;
#line 236 "ml_global_data.m"
                            else
#line 236 "ml_global_data.m"
                              {
#line 236 "ml_global_data.m"
                                MR_Word ml_backend__ml_global_data__V_38_38;

#line 236 "ml_global_data.m"
                                {
#line 236 "ml_global_data.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[1], &ml_backend__ml_global_data__V_38_38, ((MR_Box) (ml_backend__ml_global_data__V_10_10)), ((MR_Box) (ml_backend__ml_global_data__V_24_24)));
                                }
#line 3744 "ml_backend.ml_global_data.c"
                                ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_38_38 == (MR_Integer) 0);
#line 236 "ml_global_data.m"
                                ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 236 "ml_global_data.m"
                                if (ml_backend__ml_global_data__succeeded)
#line 236 "ml_global_data.m"
                                  *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_38_38;
#line 236 "ml_global_data.m"
                                else
#line 236 "ml_global_data.m"
                                  {
#line 236 "ml_global_data.m"
                                    MR_Word ml_backend__ml_global_data__V_39_39;

#line 236 "ml_global_data.m"
                                    {
#line 236 "ml_global_data.m"
                                      mercury__counter____Compare____counter_0_0(&ml_backend__ml_global_data__V_39_39, ml_backend__ml_global_data__V_11_11, ml_backend__ml_global_data__V_25_25);
                                    }
#line 3764 "ml_backend.ml_global_data.c"
                                    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_39_39 == (MR_Integer) 0);
#line 236 "ml_global_data.m"
                                    ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 236 "ml_global_data.m"
                                    if (ml_backend__ml_global_data__succeeded)
#line 236 "ml_global_data.m"
                                      *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_39_39;
#line 236 "ml_global_data.m"
                                    else
#line 236 "ml_global_data.m"
                                      {
#line 236 "ml_global_data.m"
                                        MR_Word ml_backend__ml_global_data__V_40_40;

#line 236 "ml_global_data.m"
                                        {
#line 236 "ml_global_data.m"
                                          mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[2], &ml_backend__ml_global_data__V_40_40, ((MR_Box) (ml_backend__ml_global_data__V_12_12)), ((MR_Box) (ml_backend__ml_global_data__V_26_26)));
                                        }
#line 3784 "ml_backend.ml_global_data.c"
                                        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_40_40 == (MR_Integer) 0);
#line 236 "ml_global_data.m"
                                        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 236 "ml_global_data.m"
                                        if (ml_backend__ml_global_data__succeeded)
#line 236 "ml_global_data.m"
                                          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_40_40;
#line 236 "ml_global_data.m"
                                        else
#line 236 "ml_global_data.m"
                                          {
#line 236 "ml_global_data.m"
                                            MR_Word ml_backend__ml_global_data__V_41_41;

#line 236 "ml_global_data.m"
                                            {
#line 236 "ml_global_data.m"
                                              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[3], &ml_backend__ml_global_data__V_41_41, ((MR_Box) (ml_backend__ml_global_data__V_13_13)), ((MR_Box) (ml_backend__ml_global_data__V_27_27)));
                                            }
#line 3804 "ml_backend.ml_global_data.c"
                                            ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_41_41 == (MR_Integer) 0);
#line 236 "ml_global_data.m"
                                            ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 236 "ml_global_data.m"
                                            if (ml_backend__ml_global_data__succeeded)
#line 236 "ml_global_data.m"
                                              *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_41_41;
#line 236 "ml_global_data.m"
                                            else
#line 236 "ml_global_data.m"
                                              {
#line 236 "ml_global_data.m"
                                                MR_Word ml_backend__ml_global_data__V_42_42;

#line 236 "ml_global_data.m"
                                                {
#line 236 "ml_global_data.m"
                                                  mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[4], &ml_backend__ml_global_data__V_42_42, ((MR_Box) (ml_backend__ml_global_data__V_14_14)), ((MR_Box) (ml_backend__ml_global_data__V_28_28)));
                                                }
#line 3824 "ml_backend.ml_global_data.c"
                                                ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_42_42 == (MR_Integer) 0);
#line 236 "ml_global_data.m"
                                                ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 236 "ml_global_data.m"
                                                if (ml_backend__ml_global_data__succeeded)
#line 236 "ml_global_data.m"
                                                  *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_42_42;
#line 236 "ml_global_data.m"
                                                else
#line 236 "ml_global_data.m"
                                                  {
#line 236 "ml_global_data.m"
                                                    MR_Word ml_backend__ml_global_data__V_43_43;

#line 236 "ml_global_data.m"
                                                    {
#line 236 "ml_global_data.m"
                                                      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[5], &ml_backend__ml_global_data__V_43_43, ((MR_Box) (ml_backend__ml_global_data__V_15_15)), ((MR_Box) (ml_backend__ml_global_data__V_29_29)));
                                                    }
#line 3844 "ml_backend.ml_global_data.c"
                                                    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_43_43 == (MR_Integer) 0);
#line 236 "ml_global_data.m"
                                                    ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 236 "ml_global_data.m"
                                                    if (ml_backend__ml_global_data__succeeded)
#line 236 "ml_global_data.m"
                                                      *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_43_43;
#line 236 "ml_global_data.m"
                                                    else
#line 236 "ml_global_data.m"
                                                      {
#line 236 "ml_global_data.m"
                                                        MR_Word ml_backend__ml_global_data__V_44_44;

#line 236 "ml_global_data.m"
                                                        {
#line 236 "ml_global_data.m"
                                                          mercury__counter____Compare____counter_0_0(&ml_backend__ml_global_data__V_44_44, ml_backend__ml_global_data__V_16_16, ml_backend__ml_global_data__V_30_30);
                                                        }
#line 3864 "ml_backend.ml_global_data.c"
                                                        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_44_44 == (MR_Integer) 0);
#line 236 "ml_global_data.m"
                                                        ml_backend__ml_global_data__succeeded = !(ml_backend__ml_global_data__succeeded);
#line 236 "ml_global_data.m"
                                                        if (ml_backend__ml_global_data__succeeded)
#line 236 "ml_global_data.m"
                                                          *ml_backend__ml_global_data__HeadVar__1_1 = ml_backend__ml_global_data__V_44_44;
#line 236 "ml_global_data.m"
                                                        else
#line 236 "ml_global_data.m"
                                                          {
#line 236 "ml_global_data.m"
                                                            {
#line 236 "ml_global_data.m"
                                                              mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[0], ml_backend__ml_global_data__HeadVar__1_1, ((MR_Box) (ml_backend__ml_global_data__V_17_17)), ((MR_Box) (ml_backend__ml_global_data__V_31_31)));
#line 236 "ml_global_data.m"
                                                              return;
                                                            }
#line 236 "ml_global_data.m"
                                                          }
#line 236 "ml_global_data.m"
                                                      }
#line 236 "ml_global_data.m"
                                                  }
#line 236 "ml_global_data.m"
                                              }
#line 236 "ml_global_data.m"
                                          }
#line 236 "ml_global_data.m"
                                      }
#line 236 "ml_global_data.m"
                                  }
#line 236 "ml_global_data.m"
                              }
#line 236 "ml_global_data.m"
                          }
#line 236 "ml_global_data.m"
                      }
#line 236 "ml_global_data.m"
                  }
#line 236 "ml_global_data.m"
              }
#line 236 "ml_global_data.m"
          }
#line 236 "ml_global_data.m"
      }
#line 236 "ml_global_data.m"
  }
#line 236 "ml_global_data.m"
}

#line 236 "ml_global_data.m"
MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_global_data_0_0(
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
    MR_Integer ml_backend__ml_global_data__CastX_31 = (MR_Integer) ml_backend__ml_global_data__HeadVar__1_1;
#line 236 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__CastY_32 = (MR_Integer) ml_backend__ml_global_data__HeadVar__2_2;

#line 236 "ml_global_data.m"
    ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__CastX_31 == ml_backend__ml_global_data__CastY_32);
#line 236 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 236 "ml_global_data.m"
      ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 236 "ml_global_data.m"
    else
#line 236 "ml_global_data.m"
      {
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeInfo_35_35;
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeInfo_36_36;
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeInfo_37_37;
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeInfo_39_39;
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeInfo_40_40;
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeInfo_41_41;
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeInfo_42_42;
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeInfo_44_44;
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 0)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 1)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 2)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 3)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 4)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 5)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 6)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 7)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 8)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 9)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 10)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 11)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 12)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__1_1, (MR_Integer) 13)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 0)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 1)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 2)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 3)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 4)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 5)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 6)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 7)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 8)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 9)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 10)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 11)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 12)));
#line 236 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__HeadVar__2_2, (MR_Integer) 13)));

#line 4017 "ml_backend.ml_global_data.c"
        {
#line 4019 "ml_backend.ml_global_data.c"
          ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[1], ((MR_Box) (ml_backend__ml_global_data__V_3_3)), ((MR_Box) (ml_backend__ml_global_data__V_17_17)));
        }
#line 236 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 236 "ml_global_data.m"
          {
#line 4026 "ml_backend.ml_global_data.c"
            ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_4_4 == ml_backend__ml_global_data__V_18_18);
#line 236 "ml_global_data.m"
            if (ml_backend__ml_global_data__succeeded)
#line 236 "ml_global_data.m"
              {
#line 4032 "ml_backend.ml_global_data.c"
                ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_5_5 == ml_backend__ml_global_data__V_19_19);
#line 236 "ml_global_data.m"
                if (ml_backend__ml_global_data__succeeded)
#line 236 "ml_global_data.m"
                  {
#line 4038 "ml_backend.ml_global_data.c"
                    {
#line 4040 "ml_backend.ml_global_data.c"
                      ml_backend__ml_global_data__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_global_data__V_6_6, ml_backend__ml_global_data__V_20_20);
                    }
#line 236 "ml_global_data.m"
                    if (ml_backend__ml_global_data__succeeded)
#line 236 "ml_global_data.m"
                      {
#line 4047 "ml_backend.ml_global_data.c"
                        ml_backend__ml_global_data__TypeInfo_35_35 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[1];
#line 4049 "ml_backend.ml_global_data.c"
                        {
#line 4051 "ml_backend.ml_global_data.c"
                          ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_35_35, ((MR_Box) (ml_backend__ml_global_data__V_7_7)), ((MR_Box) (ml_backend__ml_global_data__V_21_21)));
                        }
#line 236 "ml_global_data.m"
                        if (ml_backend__ml_global_data__succeeded)
#line 236 "ml_global_data.m"
                          {
#line 4058 "ml_backend.ml_global_data.c"
                            ml_backend__ml_global_data__TypeInfo_36_36 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[1];
#line 4060 "ml_backend.ml_global_data.c"
                            {
#line 4062 "ml_backend.ml_global_data.c"
                              ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_36_36, ((MR_Box) (ml_backend__ml_global_data__V_8_8)), ((MR_Box) (ml_backend__ml_global_data__V_22_22)));
                            }
#line 236 "ml_global_data.m"
                            if (ml_backend__ml_global_data__succeeded)
#line 236 "ml_global_data.m"
                              {
#line 4069 "ml_backend.ml_global_data.c"
                                ml_backend__ml_global_data__TypeInfo_37_37 = (MR_Word) &ml_backend__ml_global_data_scalar_common_1[1];
#line 4071 "ml_backend.ml_global_data.c"
                                {
#line 4073 "ml_backend.ml_global_data.c"
                                  ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_37_37, ((MR_Box) (ml_backend__ml_global_data__V_9_9)), ((MR_Box) (ml_backend__ml_global_data__V_23_23)));
                                }
#line 236 "ml_global_data.m"
                                if (ml_backend__ml_global_data__succeeded)
#line 236 "ml_global_data.m"
                                  {
#line 4080 "ml_backend.ml_global_data.c"
                                    {
#line 4082 "ml_backend.ml_global_data.c"
                                      ml_backend__ml_global_data__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_global_data__V_10_10, ml_backend__ml_global_data__V_24_24);
                                    }
#line 236 "ml_global_data.m"
                                    if (ml_backend__ml_global_data__succeeded)
#line 236 "ml_global_data.m"
                                      {
#line 4089 "ml_backend.ml_global_data.c"
                                        ml_backend__ml_global_data__TypeInfo_39_39 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[2];
#line 4091 "ml_backend.ml_global_data.c"
                                        {
#line 4093 "ml_backend.ml_global_data.c"
                                          ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_39_39, ((MR_Box) (ml_backend__ml_global_data__V_11_11)), ((MR_Box) (ml_backend__ml_global_data__V_25_25)));
                                        }
#line 236 "ml_global_data.m"
                                        if (ml_backend__ml_global_data__succeeded)
#line 236 "ml_global_data.m"
                                          {
#line 4100 "ml_backend.ml_global_data.c"
                                            ml_backend__ml_global_data__TypeInfo_40_40 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[3];
#line 4102 "ml_backend.ml_global_data.c"
                                            {
#line 4104 "ml_backend.ml_global_data.c"
                                              ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_40_40, ((MR_Box) (ml_backend__ml_global_data__V_12_12)), ((MR_Box) (ml_backend__ml_global_data__V_26_26)));
                                            }
#line 236 "ml_global_data.m"
                                            if (ml_backend__ml_global_data__succeeded)
#line 236 "ml_global_data.m"
                                              {
#line 4111 "ml_backend.ml_global_data.c"
                                                ml_backend__ml_global_data__TypeInfo_41_41 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[4];
#line 4113 "ml_backend.ml_global_data.c"
                                                {
#line 4115 "ml_backend.ml_global_data.c"
                                                  ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_41_41, ((MR_Box) (ml_backend__ml_global_data__V_13_13)), ((MR_Box) (ml_backend__ml_global_data__V_27_27)));
                                                }
#line 236 "ml_global_data.m"
                                                if (ml_backend__ml_global_data__succeeded)
#line 236 "ml_global_data.m"
                                                  {
#line 4122 "ml_backend.ml_global_data.c"
                                                    ml_backend__ml_global_data__TypeInfo_42_42 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[5];
#line 4124 "ml_backend.ml_global_data.c"
                                                    {
#line 4126 "ml_backend.ml_global_data.c"
                                                      ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_42_42, ((MR_Box) (ml_backend__ml_global_data__V_14_14)), ((MR_Box) (ml_backend__ml_global_data__V_28_28)));
                                                    }
#line 236 "ml_global_data.m"
                                                    if (ml_backend__ml_global_data__succeeded)
#line 236 "ml_global_data.m"
                                                      {
#line 4133 "ml_backend.ml_global_data.c"
                                                        {
#line 4135 "ml_backend.ml_global_data.c"
                                                          ml_backend__ml_global_data__succeeded = mercury__counter____Unify____counter_0_0(ml_backend__ml_global_data__V_15_15, ml_backend__ml_global_data__V_29_29);
                                                        }
#line 236 "ml_global_data.m"
                                                        if (ml_backend__ml_global_data__succeeded)
#line 236 "ml_global_data.m"
                                                          {
#line 4142 "ml_backend.ml_global_data.c"
                                                            ml_backend__ml_global_data__TypeInfo_44_44 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[0];
#line 4144 "ml_backend.ml_global_data.c"
                                                            {
#line 4146 "ml_backend.ml_global_data.c"
                                                              return ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0(ml_backend__ml_global_data__TypeInfo_44_44, ((MR_Box) (ml_backend__ml_global_data__V_16_16)), ((MR_Box) (ml_backend__ml_global_data__V_30_30)));
                                                            }
#line 236 "ml_global_data.m"
                                                          }
#line 236 "ml_global_data.m"
                                                      }
#line 236 "ml_global_data.m"
                                                  }
#line 236 "ml_global_data.m"
                                              }
#line 236 "ml_global_data.m"
                                          }
#line 236 "ml_global_data.m"
                                      }
#line 236 "ml_global_data.m"
                                  }
#line 236 "ml_global_data.m"
                              }
#line 236 "ml_global_data.m"
                          }
#line 236 "ml_global_data.m"
                      }
#line 236 "ml_global_data.m"
                  }
#line 236 "ml_global_data.m"
              }
#line 236 "ml_global_data.m"
          }
#line 236 "ml_global_data.m"
      }
#line 236 "ml_global_data.m"
    return ml_backend__ml_global_data__succeeded;
#line 236 "ml_global_data.m"
  }
#line 236 "ml_global_data.m"
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
#line 4208 "ml_backend.ml_global_data.c"
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
#line 4238 "ml_backend.ml_global_data.c"
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
#line 4258 "ml_backend.ml_global_data.c"
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
#line 4278 "ml_backend.ml_global_data.c"
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

#line 4351 "ml_backend.ml_global_data.c"
        {
#line 4353 "ml_backend.ml_global_data.c"
          ml_backend__ml_global_data__succeeded = ml_backend__mlds____Unify____mlds_entity_name_0_0(ml_backend__ml_global_data__V_3_3, ml_backend__ml_global_data__V_7_7);
        }
#line 75 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 75 "ml_global_data.m"
          {
#line 4360 "ml_backend.ml_global_data.c"
            {
#line 4362 "ml_backend.ml_global_data.c"
              ml_backend__ml_global_data__succeeded = mercury__term____Unify____context_0_0(ml_backend__ml_global_data__V_4_4, ml_backend__ml_global_data__V_8_8);
            }
#line 75 "ml_global_data.m"
            if (ml_backend__ml_global_data__succeeded)
#line 75 "ml_global_data.m"
              {
#line 4369 "ml_backend.ml_global_data.c"
                ml_backend__ml_global_data__succeeded = (strcmp(ml_backend__ml_global_data__V_5_5, ml_backend__ml_global_data__V_9_9) == 0);
#line 75 "ml_global_data.m"
                if (ml_backend__ml_global_data__succeeded)
#line 4373 "ml_backend.ml_global_data.c"
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

#line 233 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data____Compare____ml_alloc_id_map_0_0(
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
      mercury__builtin__compare_3_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[0], ml_backend__ml_global_data__HeadVar__1_1, ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_4)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_5)));
#line 233 "ml_global_data.m"
      return;
    }
#line 233 "ml_global_data.m"
  }
#line 233 "ml_global_data.m"
}

#line 233 "ml_global_data.m"
static MR_bool MR_CALL 
ml_backend__ml_global_data____Unify____ml_alloc_id_map_0_0(
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
      return ml_backend__ml_global_data__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ml_backend__ml_global_data_scalar_common_2[0], ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar1_3)), ((MR_Box) (ml_backend__ml_global_data__Cast_HeadVar2_4)));
    }
#line 233 "ml_global_data.m"
    return ml_backend__ml_global_data__succeeded;
#line 233 "ml_global_data.m"
  }
#line 233 "ml_global_data.m"
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
#line 4491 "ml_backend.ml_global_data.c"
  {
#line 4493 "ml_backend.ml_global_data.c"
    MR_bool ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__HeadVar__2_1 == ml_backend__ml_global_data__HeadVar__2_2);

#line 4496 "ml_backend.ml_global_data.c"
    return ml_backend__ml_global_data__succeeded;
#line 4498 "ml_backend.ml_global_data.c"
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
#line 769 "ml_global_data.m"
    switch (MR_tag((MR_Word) ml_backend__ml_global_data__ConsId_3)) {
#line 769 "ml_global_data.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 769 "ml_global_data.m"
      case (MR_Integer) 0:
#line 782 "ml_global_data.m"
        ml_backend__ml_global_data__TypeStr_4 = (MR_String) "typeclass_info";
#line 769 "ml_global_data.m"
        break;
#line 769 "ml_global_data.m"
      case (MR_Integer) 1:
#line 779 "ml_global_data.m"
        ml_backend__ml_global_data__TypeStr_4 = (MR_String) "private_builtin.type_info/0";
#line 769 "ml_global_data.m"
        break;
#line 769 "ml_global_data.m"
      case (MR_Integer) 2:
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
        break;
#line 769 "ml_global_data.m"
      case (MR_Integer) 3:
#line 769 "ml_global_data.m"
#line 769 "ml_global_data.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConsId_3, (MR_Integer) 0)))) {
#line 769 "ml_global_data.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 769 "ml_global_data.m"
          case (MR_Integer) 0:
#line 769 "ml_global_data.m"
          case (MR_Integer) 1:
#line 769 "ml_global_data.m"
          case (MR_Integer) 5:
#line 769 "ml_global_data.m"
          case (MR_Integer) 6:
#line 769 "ml_global_data.m"
          case (MR_Integer) 7:
#line 769 "ml_global_data.m"
          case (MR_Integer) 8:
#line 769 "ml_global_data.m"
          case (MR_Integer) 9:
#line 769 "ml_global_data.m"
          case (MR_Integer) 10:
#line 769 "ml_global_data.m"
          case (MR_Integer) 11:
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
            break;
#line 769 "ml_global_data.m"
          case (MR_Integer) 2:
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
                return ml_backend__ml_global_data__TypeStr_4 = parse_tree__prog_out__type_ctor_to_string_1_f_0(ml_backend__ml_global_data__TypeCtor_7);
              }
#line 769 "ml_global_data.m"
            }
#line 769 "ml_global_data.m"
            break;
#line 769 "ml_global_data.m"
          case (MR_Integer) 3:
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
            break;
#line 769 "ml_global_data.m"
          case (MR_Integer) 4:
#line 776 "ml_global_data.m"
            ml_backend__ml_global_data__TypeStr_4 = (MR_String) "closure";
#line 769 "ml_global_data.m"
            break;
#line 769 "ml_global_data.m"
          case (MR_Integer) 12:
#line 785 "ml_global_data.m"
            ml_backend__ml_global_data__TypeStr_4 = (MR_String) "type_info_const";
#line 769 "ml_global_data.m"
            break;
#line 769 "ml_global_data.m"
          case (MR_Integer) 13:
#line 788 "ml_global_data.m"
            ml_backend__ml_global_data__TypeStr_4 = (MR_String) "typeclass_info_const";
#line 769 "ml_global_data.m"
            break;
#line 769 "ml_global_data.m"
          case (MR_Integer) 14:
#line 791 "ml_global_data.m"
            ml_backend__ml_global_data__TypeStr_4 = (MR_String) "ground_term_const";
#line 769 "ml_global_data.m"
            break;
#line 769 "ml_global_data.m"
        }
#line 769 "ml_global_data.m"
        break;
#line 769 "ml_global_data.m"
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

#line 525 "ml_global_data.m"
static MR_bool MR_CALL 
ml_backend__ml_global_data__ml_specialize_generic_array_rval_2_p_0(
#line 525 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13,
#line 525 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_Rval_14)
#line 525 "ml_global_data.m"
{
#line 530 "ml_global_data.m"
  while (MR_TRUE)
#line 530 "ml_global_data.m"
    {
#line 530 "ml_global_data.m"
      /* tailcall optimized into a loop */
#line 530 "ml_global_data.m"
      {
#line 530 "ml_global_data.m"
        MR_bool ml_backend__ml_global_data__succeeded;

#line 530 "ml_global_data.m"
#line 530 "ml_global_data.m"
        switch (MR_tag((MR_Word) ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13)) {
#line 530 "ml_global_data.m"
          default:
#line 530 "ml_global_data.m"
            ml_backend__ml_global_data__succeeded = MR_FALSE;
#line 530 "ml_global_data.m"
            break;
#line 530 "ml_global_data.m"
          case (MR_Integer) 3:
#line 530 "ml_global_data.m"
#line 530 "ml_global_data.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13, (MR_Integer) 0)))) {
#line 530 "ml_global_data.m"
              default:
#line 530 "ml_global_data.m"
                ml_backend__ml_global_data__succeeded = MR_FALSE;
#line 530 "ml_global_data.m"
                break;
#line 530 "ml_global_data.m"
              case (MR_Integer) 0:
#line 530 "ml_global_data.m"
                {
#line 530 "ml_global_data.m"
                  MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13, (MR_Integer) 1)));
#line 530 "ml_global_data.m"
                  MR_Float ml_backend__ml_global_data__V_4_4;

#line 530 "ml_global_data.m"
                  ml_backend__ml_global_data__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_global_data__V_21_21)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__V_21_21, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 530 "ml_global_data.m"
                  if (ml_backend__ml_global_data__succeeded)
#line 530 "ml_global_data.m"
                    {
#line 530 "ml_global_data.m"
                      ml_backend__ml_global_data__V_4_4 = MR_unbox_float((MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__V_21_21, (MR_Integer) 1)));
#line 530 "ml_global_data.m"
                      *ml_backend__ml_global_data__STATE_VARIABLE_Rval_14 = ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13;
#line 530 "ml_global_data.m"
                      ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 530 "ml_global_data.m"
                    }
#line 530 "ml_global_data.m"
                }
#line 530 "ml_global_data.m"
                break;
#line 530 "ml_global_data.m"
              case (MR_Integer) 1:
#line 532 "ml_global_data.m"
                {
#line 532 "ml_global_data.m"
                  MR_Word ml_backend__ml_global_data__Op_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13, (MR_Integer) 1)));
#line 532 "ml_global_data.m"
                  MR_Word ml_backend__ml_global_data__SubRval_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13, (MR_Integer) 2)));
#line 532 "ml_global_data.m"
                  MR_Word ml_backend__ml_global_data__Type_7;

#line 535 "ml_global_data.m"
#line 535 "ml_global_data.m"
                  switch (MR_tag((MR_Word) ml_backend__ml_global_data__Op_5)) {
#line 535 "ml_global_data.m"
                    default:
#line 535 "ml_global_data.m"
                      ml_backend__ml_global_data__succeeded = MR_FALSE;
#line 535 "ml_global_data.m"
                      break;
#line 535 "ml_global_data.m"
                    case (MR_Integer) 0:
#line 534 "ml_global_data.m"
                      {
#line 534 "ml_global_data.m"
                        ml_backend__ml_global_data__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__Op_5, (MR_Integer) 0)));
#line 534 "ml_global_data.m"
                        ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 534 "ml_global_data.m"
                      }
#line 535 "ml_global_data.m"
                      break;
#line 535 "ml_global_data.m"
                    case (MR_Integer) 1:
#line 536 "ml_global_data.m"
                      {
#line 536 "ml_global_data.m"
                        ml_backend__ml_global_data__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__Op_5, (MR_Integer) 0)));
#line 536 "ml_global_data.m"
                        ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 536 "ml_global_data.m"
                      }
#line 535 "ml_global_data.m"
                      break;
#line 535 "ml_global_data.m"
                    case (MR_Integer) 2:
#line 538 "ml_global_data.m"
                      {
#line 538 "ml_global_data.m"
                        ml_backend__ml_global_data__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_global_data__Op_5, (MR_Integer) 0)));
#line 538 "ml_global_data.m"
                        ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 538 "ml_global_data.m"
                      }
#line 535 "ml_global_data.m"
                      break;
#line 535 "ml_global_data.m"
                  }
#line 532 "ml_global_data.m"
                  if (ml_backend__ml_global_data__succeeded)
#line 543 "ml_global_data.m"
                    {
#line 543 "ml_global_data.m"
                      if ((ml_backend__ml_global_data__Type_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 542 "ml_global_data.m"
                        {
#line 542 "ml_global_data.m"
                          *ml_backend__ml_global_data__STATE_VARIABLE_Rval_14 = ml_backend__ml_global_data__SubRval_6;
#line 542 "ml_global_data.m"
                          ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 542 "ml_global_data.m"
                        }
#line 543 "ml_global_data.m"
                      else
#line 543 "ml_global_data.m"
                      if (((MR_tag((MR_Word) ml_backend__ml_global_data__Type_7)) == (MR_mktag((MR_Integer) 2))))
#line 544 "ml_global_data.m"
                        {
#line 544 "ml_global_data.m"
                          MR_Word ml_backend__ml_global_data__CtorCat_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_global_data__Type_7, (MR_Integer) 1)));
#line 544 "ml_global_data.m"
                          MR_Word ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_global_data__Type_7, (MR_Integer) 0)));
#line 544 "ml_global_data.m"
                          MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ml_backend__ml_global_data__Type_7, (MR_Integer) 2)));

#line 548 "ml_global_data.m"
                          if (((MR_tag((MR_Word) ml_backend__ml_global_data__CtorCat_9)) == (MR_mktag((MR_Integer) 1))))
#line 546 "ml_global_data.m"
                            {
#line 546 "ml_global_data.m"
                              MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__CtorCat_9, (MR_Integer) 0)));

#line 546 "ml_global_data.m"
                              ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_18_18 == (MR_Integer) 1);
#line 546 "ml_global_data.m"
                              if (ml_backend__ml_global_data__succeeded)
#line 546 "ml_global_data.m"
                                {
#line 547 "ml_global_data.m"
                                  *ml_backend__ml_global_data__STATE_VARIABLE_Rval_14 = ml_backend__ml_global_data__SubRval_6;
#line 547 "ml_global_data.m"
                                  ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 546 "ml_global_data.m"
                                }
#line 546 "ml_global_data.m"
                            }
#line 548 "ml_global_data.m"
                          else
#line 548 "ml_global_data.m"
                          if (((((MR_tag((MR_Word) ml_backend__ml_global_data__CtorCat_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__CtorCat_9, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 549 "ml_global_data.m"
                            {
#line 549 "ml_global_data.m"
                              MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__CtorCat_9, (MR_Integer) 1)));

#line 549 "ml_global_data.m"
                              ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_16_16 == (MR_Integer) 1);
#line 549 "ml_global_data.m"
                              if (ml_backend__ml_global_data__succeeded)
#line 550 "ml_global_data.m"
                                {
#line 550 "ml_global_data.m"
                                  /* direct tailcall eliminated */
#line 550 "ml_global_data.m"
                                  {
#line 550 "ml_global_data.m"
                                    MR_Word ml_backend__ml_global_data__STATE_VARIABLE_Rval_0__tmp_copy_13 = ml_backend__ml_global_data__SubRval_6;

#line 550 "ml_global_data.m"
                                    ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13 = ml_backend__ml_global_data__STATE_VARIABLE_Rval_0__tmp_copy_13;
#line 550 "ml_global_data.m"
                                  }
#line 550 "ml_global_data.m"
                                  continue;
#line 550 "ml_global_data.m"
                                }
#line 549 "ml_global_data.m"
                            }
#line 548 "ml_global_data.m"
                          else
#line 548 "ml_global_data.m"
                            ml_backend__ml_global_data__succeeded = MR_FALSE;
#line 544 "ml_global_data.m"
                        }
#line 543 "ml_global_data.m"
                      else
#line 543 "ml_global_data.m"
                        ml_backend__ml_global_data__succeeded = MR_FALSE;
#line 543 "ml_global_data.m"
                    }
#line 532 "ml_global_data.m"
                }
#line 530 "ml_global_data.m"
                break;
#line 530 "ml_global_data.m"
              case (MR_Integer) 2:
#line 554 "ml_global_data.m"
                {
#line 554 "ml_global_data.m"
                  MR_Word ml_backend__ml_global_data__Op_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13, (MR_Integer) 1)));
#line 554 "ml_global_data.m"
                  MR_Word ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13, (MR_Integer) 2)));
#line 554 "ml_global_data.m"
                  MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13, (MR_Integer) 3)));

#line 602 "ml_global_data.m"
#line 602 "ml_global_data.m"
                  switch (MR_tag((MR_Word) ml_backend__ml_global_data__Op_22)) {
#line 602 "ml_global_data.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 602 "ml_global_data.m"
                    case (MR_Integer) 0:
#line 602 "ml_global_data.m"
#line 602 "ml_global_data.m"
                      switch (MR_unmkbody(ml_backend__ml_global_data__Op_22)) {
#line 602 "ml_global_data.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 602 "ml_global_data.m"
                        case (MR_Integer) 0:
#line 602 "ml_global_data.m"
                        case (MR_Integer) 1:
#line 602 "ml_global_data.m"
                        case (MR_Integer) 2:
#line 602 "ml_global_data.m"
                        case (MR_Integer) 3:
#line 602 "ml_global_data.m"
                        case (MR_Integer) 4:
#line 602 "ml_global_data.m"
                        case (MR_Integer) 5:
#line 602 "ml_global_data.m"
                        case (MR_Integer) 6:
#line 602 "ml_global_data.m"
                        case (MR_Integer) 7:
#line 602 "ml_global_data.m"
                        case (MR_Integer) 8:
#line 602 "ml_global_data.m"
                        case (MR_Integer) 9:
#line 602 "ml_global_data.m"
                        case (MR_Integer) 10:
#line 602 "ml_global_data.m"
                        case (MR_Integer) 11:
#line 602 "ml_global_data.m"
                        case (MR_Integer) 12:
#line 602 "ml_global_data.m"
                        case (MR_Integer) 13:
#line 602 "ml_global_data.m"
                        case (MR_Integer) 14:
#line 602 "ml_global_data.m"
                        case (MR_Integer) 15:
#line 602 "ml_global_data.m"
                        case (MR_Integer) 16:
#line 602 "ml_global_data.m"
                        case (MR_Integer) 17:
#line 602 "ml_global_data.m"
                        case (MR_Integer) 18:
#line 602 "ml_global_data.m"
                        case (MR_Integer) 19:
#line 602 "ml_global_data.m"
                        case (MR_Integer) 20:
#line 602 "ml_global_data.m"
                        case (MR_Integer) 21:
#line 602 "ml_global_data.m"
                        case (MR_Integer) 22:
#line 602 "ml_global_data.m"
                        case (MR_Integer) 23:
#line 602 "ml_global_data.m"
                        case (MR_Integer) 24:
#line 602 "ml_global_data.m"
                        case (MR_Integer) 25:
#line 602 "ml_global_data.m"
                        case (MR_Integer) 26:
#line 602 "ml_global_data.m"
                        case (MR_Integer) 27:
#line 602 "ml_global_data.m"
                        case (MR_Integer) 32:
#line 602 "ml_global_data.m"
                        case (MR_Integer) 33:
#line 602 "ml_global_data.m"
                        case (MR_Integer) 34:
#line 602 "ml_global_data.m"
                        case (MR_Integer) 35:
#line 602 "ml_global_data.m"
                        case (MR_Integer) 36:
#line 602 "ml_global_data.m"
                        case (MR_Integer) 37:
#line 602 "ml_global_data.m"
                        case (MR_Integer) 38:
#line 602 "ml_global_data.m"
                        case (MR_Integer) 40:
#line 602 "ml_global_data.m"
                        case (MR_Integer) 41:
#line 602 "ml_global_data.m"
                        case (MR_Integer) 42:
#line 603 "ml_global_data.m"
                          {
#line 555 "ml_global_data.m"
                            ml_backend__ml_global_data__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
#line 603 "ml_global_data.m"
                          }
#line 602 "ml_global_data.m"
                          break;
#line 602 "ml_global_data.m"
                        case (MR_Integer) 28:
#line 602 "ml_global_data.m"
                        case (MR_Integer) 29:
#line 602 "ml_global_data.m"
                        case (MR_Integer) 30:
#line 602 "ml_global_data.m"
                        case (MR_Integer) 31:
#line 602 "ml_global_data.m"
                        case (MR_Integer) 39:
#line 611 "ml_global_data.m"
                          {
#line 555 "ml_global_data.m"
                            ml_backend__ml_global_data__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
#line 611 "ml_global_data.m"
                          }
#line 602 "ml_global_data.m"
                          break;
#line 602 "ml_global_data.m"
                      }
#line 602 "ml_global_data.m"
                      break;
#line 602 "ml_global_data.m"
                    case (MR_Integer) 1:
#line 602 "ml_global_data.m"
                    case (MR_Integer) 2:
#line 603 "ml_global_data.m"
                      {
#line 555 "ml_global_data.m"
                        ml_backend__ml_global_data__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
#line 603 "ml_global_data.m"
                      }
#line 602 "ml_global_data.m"
                      break;
#line 602 "ml_global_data.m"
                  }
#line 554 "ml_global_data.m"
                  if (ml_backend__ml_global_data__succeeded)
#line 554 "ml_global_data.m"
                    {
#line 554 "ml_global_data.m"
                      *ml_backend__ml_global_data__STATE_VARIABLE_Rval_14 = ml_backend__ml_global_data__STATE_VARIABLE_Rval_0_13;
#line 554 "ml_global_data.m"
                      ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 554 "ml_global_data.m"
                    }
#line 554 "ml_global_data.m"
                }
#line 530 "ml_global_data.m"
                break;
#line 530 "ml_global_data.m"
            }
#line 530 "ml_global_data.m"
            break;
#line 530 "ml_global_data.m"
        }
#line 530 "ml_global_data.m"
        return ml_backend__ml_global_data__succeeded;
#line 530 "ml_global_data.m"
      }
#line 530 "ml_global_data.m"
      break;
#line 530 "ml_global_data.m"
    }
#line 525 "ml_global_data.m"
}

#line 510 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_specialize_generic_array_init_3_p_0(
#line 510 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Init0_4,
#line 510 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__Init_5,
#line 510 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__Type_6)
#line 510 "ml_global_data.m"
{
#line 520 "ml_global_data.m"
  {
#line 520 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded = ((MR_tag((MR_Word) ml_backend__ml_global_data__Init0_4)) == (MR_mktag((MR_Integer) 1)));
#line 520 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Rval_8;
#line 515 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Rval0_7;

#line 515 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 515 "ml_global_data.m"
      {
#line 515 "ml_global_data.m"
        ml_backend__ml_global_data__Rval0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__Init0_4, (MR_Integer) 0)));
#line 516 "ml_global_data.m"
        {
#line 516 "ml_global_data.m"
          ml_backend__ml_global_data__succeeded = ml_backend__ml_global_data__ml_specialize_generic_array_rval_2_p_0(ml_backend__ml_global_data__Rval0_7, &ml_backend__ml_global_data__Rval_8);
        }
#line 515 "ml_global_data.m"
      }
#line 520 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 518 "ml_global_data.m"
      {
#line 518 "ml_global_data.m"
        {
#line 518 "ml_global_data.m"
          MR_Word base;
#line 518 "ml_global_data.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 518 "ml_global_data.m"
          *ml_backend__ml_global_data__Init_5 = base;
#line 518 "ml_global_data.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_global_data__Rval_8));
#line 518 "ml_global_data.m"
        }
#line 519 "ml_global_data.m"
        *ml_backend__ml_global_data__Type_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 518 "ml_global_data.m"
      }
#line 520 "ml_global_data.m"
    else
#line 521 "ml_global_data.m"
      {
#line 521 "ml_global_data.m"
        *ml_backend__ml_global_data__Init_5 = ml_backend__ml_global_data__Init0_4;
#line 522 "ml_global_data.m"
        *ml_backend__ml_global_data__Type_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 521 "ml_global_data.m"
      }
#line 520 "ml_global_data.m"
  }
#line 510 "ml_global_data.m"
}

#line 468 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_gen_plain_static_defn_7_p_0(
#line 468 "ml_global_data.m"
  MR_String ml_backend__ml_global_data__ConstBaseName_8,
#line 468 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__ConstType_9,
#line 468 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Initializer_10,
#line 468 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Context_11,
#line 468 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__VarName_12,
#line 468 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25,
#line 468 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_26)
#line 468 "ml_global_data.m"
{
#line 473 "ml_global_data.m"
  {
#line 473 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 473 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__ConstCounter0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 3)));
#line 473 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__ConstNum_15;
#line 473 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__ConstCounter_16;
#line 473 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__EntityName_17;
#line 473 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__EntityDefn_19;
#line 473 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__DeclFlags_20;
#line 473 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__MLDS_Context_21;
#line 473 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Defn_22;
#line 473 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevDefns0_23;
#line 473 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevDefns_24;
#line 473 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27;
#line 473 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_28_28;
#line 473 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_29_29;
#line 473 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_30_30;
#line 326 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 0)));
#line 326 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 1)));
#line 326 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 2)));
#line 326 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 4)));
#line 326 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 5)));
#line 326 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 6)));
#line 326 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 7)));
#line 326 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 8)));
#line 326 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 9)));
#line 326 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 10)));
#line 326 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 11)));
#line 326 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 12)));
#line 326 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 13)));
#line 338 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_52_52;
#line 338 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_53_53;
#line 338 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_54_54;
#line 338 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_56_56;
#line 338 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_57_57;
#line 338 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_58_58;
#line 338 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_59_59;
#line 338 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_60_60;
#line 338 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_61_61;
#line 338 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_62_62;
#line 338 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_63_63;
#line 338 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_64_64;
#line 338 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_65_65;
#line 338 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_55_55;
#line 328 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_67_67;
#line 328 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_68_68;
#line 328 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_69_69;
#line 328 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_70_70;
#line 328 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_71_71;
#line 328 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_72_72;
#line 328 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_73_73;
#line 328 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_74_74;
#line 328 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_75_75;
#line 328 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_76_76;
#line 328 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_77_77;
#line 328 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_78_78;
#line 328 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_79_79;

#line 475 "ml_global_data.m"
    {
#line 475 "ml_global_data.m"
      mercury__counter__allocate_3_p_0(&ml_backend__ml_global_data__ConstNum_15, ml_backend__ml_global_data__ConstCounter0_14, &ml_backend__ml_global_data__ConstCounter_16);
    }
#line 338 "ml_global_data.m"
    ml_backend__ml_global_data__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 0)));
#line 338 "ml_global_data.m"
    ml_backend__ml_global_data__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 1)));
#line 338 "ml_global_data.m"
    ml_backend__ml_global_data__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 2)));
#line 338 "ml_global_data.m"
    ml_backend__ml_global_data__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 3)));
#line 338 "ml_global_data.m"
    ml_backend__ml_global_data__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 4)));
#line 338 "ml_global_data.m"
    ml_backend__ml_global_data__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 5)));
#line 338 "ml_global_data.m"
    ml_backend__ml_global_data__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 6)));
#line 338 "ml_global_data.m"
    ml_backend__ml_global_data__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 7)));
#line 338 "ml_global_data.m"
    ml_backend__ml_global_data__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 8)));
#line 338 "ml_global_data.m"
    ml_backend__ml_global_data__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 9)));
#line 338 "ml_global_data.m"
    ml_backend__ml_global_data__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 10)));
#line 338 "ml_global_data.m"
    ml_backend__ml_global_data__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 11)));
#line 338 "ml_global_data.m"
    ml_backend__ml_global_data__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 12)));
#line 338 "ml_global_data.m"
    ml_backend__ml_global_data__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_25, (MR_Integer) 13)));
#line 338 "ml_global_data.m"
    {
#line 338 "ml_global_data.m"
      ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 338 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 0) = ((MR_Box) (ml_backend__ml_global_data__V_52_52));
#line 338 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 1) = ((MR_Box) (ml_backend__ml_global_data__V_53_53));
#line 338 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 2) = ((MR_Box) (ml_backend__ml_global_data__V_54_54));
#line 338 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 3) = ((MR_Box) (ml_backend__ml_global_data__ConstCounter_16));
#line 338 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 4) = ((MR_Box) (ml_backend__ml_global_data__V_56_56));
#line 338 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 5) = ((MR_Box) (ml_backend__ml_global_data__V_57_57));
#line 338 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 6) = ((MR_Box) (ml_backend__ml_global_data__V_58_58));
#line 338 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 7) = ((MR_Box) (ml_backend__ml_global_data__V_59_59));
#line 338 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 8) = ((MR_Box) (ml_backend__ml_global_data__V_60_60));
#line 338 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 9) = ((MR_Box) (ml_backend__ml_global_data__V_61_61));
#line 338 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 10) = ((MR_Box) (ml_backend__ml_global_data__V_62_62));
#line 338 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 11) = ((MR_Box) (ml_backend__ml_global_data__V_63_63));
#line 338 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 12) = ((MR_Box) (ml_backend__ml_global_data__V_64_64));
#line 338 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, 13) = ((MR_Box) (ml_backend__ml_global_data__V_65_65));
#line 338 "ml_global_data.m"
    }
#line 478 "ml_global_data.m"
    {
#line 478 "ml_global_data.m"
      ml_backend__ml_global_data__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 478 "ml_global_data.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__V_28_28, 0) = ((MR_Box) (ml_backend__ml_global_data__ConstNum_15));
#line 478 "ml_global_data.m"
    }
#line 478 "ml_global_data.m"
    {
#line 478 "ml_global_data.m"
      MR_Word base;
#line 478 "ml_global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 478 "ml_global_data.m"
      *ml_backend__ml_global_data__VarName_12 = base;
#line 478 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__ConstBaseName_8));
#line 478 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_28_28));
#line 478 "ml_global_data.m"
    }
#line 479 "ml_global_data.m"
    ml_backend__ml_global_data__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) *ml_backend__ml_global_data__VarName_12);
#line 479 "ml_global_data.m"
    {
#line 479 "ml_global_data.m"
      ml_backend__ml_global_data__EntityName_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 479 "ml_global_data.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__EntityName_17, 0) = ((MR_Box) (ml_backend__ml_global_data__V_29_29));
#line 479 "ml_global_data.m"
    }
#line 483 "ml_global_data.m"
    {
#line 483 "ml_global_data.m"
      ml_backend__ml_global_data__EntityDefn_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 483 "ml_global_data.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__EntityDefn_19, 0) = ((MR_Box) (ml_backend__ml_global_data__ConstType_9));
#line 483 "ml_global_data.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__EntityDefn_19, 1) = ((MR_Box) (ml_backend__ml_global_data__Initializer_10));
#line 483 "ml_global_data.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__EntityDefn_19, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 483 "ml_global_data.m"
    }
#line 484 "ml_global_data.m"
    {
#line 484 "ml_global_data.m"
      ml_backend__ml_global_data__V_30_30 = ml_backend__mlds__ml_static_const_decl_flags_0_f_0();
    }
#line 484 "ml_global_data.m"
    {
#line 484 "ml_global_data.m"
      ml_backend__ml_global_data__DeclFlags_20 = ml_backend__mlds__set_access_2_f_0(ml_backend__ml_global_data__V_30_30, (MR_Integer) 2);
    }
#line 485 "ml_global_data.m"
    {
#line 485 "ml_global_data.m"
      ml_backend__ml_global_data__MLDS_Context_21 = ml_backend__mlds__mlds_make_context_1_f_0(ml_backend__ml_global_data__Context_11);
    }
#line 486 "ml_global_data.m"
    {
#line 486 "ml_global_data.m"
      ml_backend__ml_global_data__Defn_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 486 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__Defn_22, 0) = ((MR_Box) (ml_backend__ml_global_data__EntityName_17));
#line 486 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__Defn_22, 1) = ((MR_Box) (ml_backend__ml_global_data__MLDS_Context_21));
#line 486 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__Defn_22, 2) = ((MR_Box) (ml_backend__ml_global_data__DeclFlags_20));
#line 486 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__Defn_22, 3) = ((MR_Box) (ml_backend__ml_global_data__EntityDefn_19));
#line 486 "ml_global_data.m"
    }
#line 328 "ml_global_data.m"
    ml_backend__ml_global_data__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 0)));
#line 328 "ml_global_data.m"
    ml_backend__ml_global_data__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 1)));
#line 328 "ml_global_data.m"
    ml_backend__ml_global_data__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 2)));
#line 328 "ml_global_data.m"
    ml_backend__ml_global_data__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 3)));
#line 328 "ml_global_data.m"
    ml_backend__ml_global_data__RevDefns0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 4)));
#line 328 "ml_global_data.m"
    ml_backend__ml_global_data__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 5)));
#line 328 "ml_global_data.m"
    ml_backend__ml_global_data__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 6)));
#line 328 "ml_global_data.m"
    ml_backend__ml_global_data__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 7)));
#line 328 "ml_global_data.m"
    ml_backend__ml_global_data__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 8)));
#line 328 "ml_global_data.m"
    ml_backend__ml_global_data__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 9)));
#line 328 "ml_global_data.m"
    ml_backend__ml_global_data__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 10)));
#line 328 "ml_global_data.m"
    ml_backend__ml_global_data__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 11)));
#line 328 "ml_global_data.m"
    ml_backend__ml_global_data__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 12)));
#line 328 "ml_global_data.m"
    ml_backend__ml_global_data__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, (MR_Integer) 13)));
#line 489 "ml_global_data.m"
    {
#line 489 "ml_global_data.m"
      ml_backend__ml_global_data__RevDefns_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 489 "ml_global_data.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__RevDefns_24, 0) = ((MR_Box) (ml_backend__ml_global_data__Defn_22));
#line 489 "ml_global_data.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__RevDefns_24, 1) = ((MR_Box) (ml_backend__ml_global_data__RevDefns0_23));
#line 489 "ml_global_data.m"
    }
#line 490 "ml_global_data.m"
    {
#line 490 "ml_global_data.m"
      ml_backend__ml_global_data__ml_global_data_set_rev_flat_cell_defns_3_p_0(ml_backend__ml_global_data__RevDefns_24, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_27_27, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_26);
#line 490 "ml_global_data.m"
      return;
    }
#line 473 "ml_global_data.m"
  }
#line 468 "ml_global_data.m"
}

#line 410 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_gen_scalar_static_defn_6_p_0(
#line 410 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__MLDS_ModuleName_7,
#line 410 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__ConstType_8,
#line 410 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Initializer_9,
#line 410 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__Common_10,
#line 410 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34,
#line 410 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_35)
#line 410 "ml_global_data.m"
{
#line 415 "ml_global_data.m"
  {
#line 415 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 415 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_172_172;
#line 415 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__InitArraySize_12;
#line 415 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__CellType_13;
#line 415 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeNumMap0_15;
#line 415 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__CellGroupMap0_16;
#line 415 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeNum_18;
#line 415 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RowCounter0_23;
#line 415 "ml_global_data.m"
    MR_Integer ml_backend__ml_global_data__RowNum_24;
#line 415 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RowCounter_25;
#line 415 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__MembersMap0_26;
#line 415 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__NewCommon_27;
#line 415 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__MaybeOldCommon_28;
#line 415 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__MembersMap_29;
#line 415 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37;
#line 415 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43;
#line 419 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_54_54;
#line 419 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_55_55;
#line 419 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_56_56;
#line 419 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_57_57;
#line 419 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_58_58;
#line 419 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_59_59;
#line 419 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_60_60;
#line 419 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_61_61;
#line 419 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_63_63;
#line 419 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_64_64;
#line 419 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_65_65;
#line 419 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_66_66;
#line 429 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__OldTypeNum_17;
#line 421 "ml_global_data.m"
    MR_Box ml_backend__ml_global_data__conv0_OldTypeNum_17;
#line 442 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_121_121;
#line 442 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_122_122;
#line 442 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_123_123;
#line 442 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_124_124;
#line 444 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_125_125;
#line 444 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_126_126;
#line 444 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_127_127;
#line 444 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_128_128;

#line 416 "ml_global_data.m"
    {
#line 416 "ml_global_data.m"
      ml_backend__ml_global_data__InitArraySize_12 = ml_backend__mlds__get_initializer_array_size_1_f_0(ml_backend__ml_global_data__Initializer_9);
    }
#line 417 "ml_global_data.m"
    {
#line 417 "ml_global_data.m"
      ml_backend__ml_global_data__CellType_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 417 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellType_13, 0) = ((MR_Box) (ml_backend__ml_global_data__ConstType_8));
#line 417 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__CellType_13, 1) = ((MR_Box) (ml_backend__ml_global_data__InitArraySize_12));
#line 417 "ml_global_data.m"
    }
#line 419 "ml_global_data.m"
    ml_backend__ml_global_data__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 0)));
#line 419 "ml_global_data.m"
    ml_backend__ml_global_data__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 1)));
#line 419 "ml_global_data.m"
    ml_backend__ml_global_data__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 2)));
#line 419 "ml_global_data.m"
    ml_backend__ml_global_data__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 3)));
#line 419 "ml_global_data.m"
    ml_backend__ml_global_data__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 4)));
#line 419 "ml_global_data.m"
    ml_backend__ml_global_data__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 5)));
#line 419 "ml_global_data.m"
    ml_backend__ml_global_data__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 6)));
#line 419 "ml_global_data.m"
    ml_backend__ml_global_data__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 7)));
#line 419 "ml_global_data.m"
    ml_backend__ml_global_data__TypeNumMap0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 8)));
#line 419 "ml_global_data.m"
    ml_backend__ml_global_data__CellGroupMap0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 9)));
#line 419 "ml_global_data.m"
    ml_backend__ml_global_data__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 10)));
#line 419 "ml_global_data.m"
    ml_backend__ml_global_data__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 11)));
#line 419 "ml_global_data.m"
    ml_backend__ml_global_data__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 12)));
#line 419 "ml_global_data.m"
    ml_backend__ml_global_data__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 13)));
#line 421 "ml_global_data.m"
    {
#line 421 "ml_global_data.m"
      ml_backend__ml_global_data__succeeded = mercury__map__search_3_p_0((MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0, ml_backend__ml_global_data__TypeNumMap0_15, ((MR_Box) (ml_backend__ml_global_data__CellType_13)), &ml_backend__ml_global_data__conv0_OldTypeNum_17);
    }
#line 421 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 421 "ml_global_data.m"
      {
#line 421 "ml_global_data.m"
        ml_backend__ml_global_data__OldTypeNum_17 = ((MR_Word) ml_backend__ml_global_data__conv0_OldTypeNum_17);
#line 421 "ml_global_data.m"
        ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 421 "ml_global_data.m"
      }
#line 429 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 422 "ml_global_data.m"
      {
#line 425 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_36_36;
#line 423 "ml_global_data.m"
        MR_Box ml_backend__ml_global_data__conv1_STATE_VARIABLE_CellGroup_36_36;

#line 422 "ml_global_data.m"
        ml_backend__ml_global_data__TypeNum_18 = ml_backend__ml_global_data__OldTypeNum_17;
#line 423 "ml_global_data.m"
        {
#line 423 "ml_global_data.m"
          ml_backend__ml_global_data__succeeded = mercury__map__search_3_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0, ml_backend__ml_global_data__CellGroupMap0_16, ((MR_Box) (ml_backend__ml_global_data__TypeNum_18)), &ml_backend__ml_global_data__conv1_STATE_VARIABLE_CellGroup_36_36);
        }
#line 423 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 423 "ml_global_data.m"
          {
#line 423 "ml_global_data.m"
            ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_36_36 = ((MR_Word) ml_backend__ml_global_data__conv1_STATE_VARIABLE_CellGroup_36_36);
#line 423 "ml_global_data.m"
            ml_backend__ml_global_data__succeeded = MR_TRUE;
#line 423 "ml_global_data.m"
          }
#line 425 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 425 "ml_global_data.m"
          ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37 = ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_36_36;
#line 425 "ml_global_data.m"
        else
#line 426 "ml_global_data.m"
          {
#line 426 "ml_global_data.m"
            MR_Word ml_backend__ml_global_data__TypeCtorInfo_166_166;
#line 426 "ml_global_data.m"
            MR_Word ml_backend__ml_global_data__V_38_38;
#line 426 "ml_global_data.m"
            MR_Word ml_backend__ml_global_data__V_40_40;
#line 426 "ml_global_data.m"
            MR_Word ml_backend__ml_global_data__V_41_41;

#line 427 "ml_global_data.m"
            {
#line 427 "ml_global_data.m"
              ml_backend__ml_global_data__V_38_38 = mercury__counter__init_1_f_0((MR_Integer) 0);
            }
#line 5903 "ml_backend.ml_global_data.c"
            ml_backend__ml_global_data__TypeCtorInfo_166_166 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
#line 427 "ml_global_data.m"
            {
#line 427 "ml_global_data.m"
              ml_backend__ml_global_data__V_40_40 = mercury__bimap__init_0_f_0(ml_backend__ml_global_data__TypeCtorInfo_166_166, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0);
            }
#line 427 "ml_global_data.m"
            {
#line 427 "ml_global_data.m"
              ml_backend__ml_global_data__V_41_41 = mercury__cord__empty_0_f_0(ml_backend__ml_global_data__TypeCtorInfo_166_166);
            }
#line 426 "ml_global_data.m"
            {
#line 426 "ml_global_data.m"
              ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 426 "ml_global_data.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 0) = ((MR_Box) (ml_backend__ml_global_data__ConstType_8));
#line 426 "ml_global_data.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 1) = ((MR_Box) (ml_backend__ml_global_data__InitArraySize_12));
#line 426 "ml_global_data.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 2) = ((MR_Box) (ml_backend__ml_global_data__V_38_38));
#line 426 "ml_global_data.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 3) = ((MR_Box) (ml_backend__ml_global_data__V_40_40));
#line 426 "ml_global_data.m"
              MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 4) = ((MR_Box) (ml_backend__ml_global_data__V_41_41));
#line 426 "ml_global_data.m"
            }
#line 426 "ml_global_data.m"
          }
#line 422 "ml_global_data.m"
        ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43 = ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34;
#line 422 "ml_global_data.m"
      }
#line 429 "ml_global_data.m"
    else
#line 430 "ml_global_data.m"
      {
#line 430 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeCtorInfo_170_170;
#line 430 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeNumCounter0_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 7)));
#line 430 "ml_global_data.m"
        MR_Integer ml_backend__ml_global_data__TypeRawNum_20;
#line 430 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeNumCounter_21;
#line 430 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__TypeNumMap_22;
#line 430 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42;
#line 430 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_45_45;
#line 430 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_47_47;
#line 430 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_48_48;
#line 430 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 0)));
#line 430 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 1)));
#line 430 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 2)));
#line 430 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 3)));
#line 430 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 4)));
#line 430 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 5)));
#line 430 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 6)));
#line 430 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 8)));
#line 430 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 9)));
#line 430 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 10)));
#line 430 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 11)));
#line 430 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 12)));
#line 430 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 13)));
#line 433 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_93_93;
#line 433 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_94_94;
#line 433 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_95_95;
#line 433 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_96_96;
#line 433 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_97_97;
#line 433 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_98_98;
#line 433 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_99_99;
#line 433 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_101_101;
#line 433 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_102_102;
#line 433 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_103_103;
#line 433 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_104_104;
#line 433 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_105_105;
#line 433 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_106_106;
#line 433 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_100_100;
#line 436 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_107_107;
#line 436 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_108_108;
#line 436 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_109_109;
#line 436 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_110_110;
#line 436 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_111_111;
#line 436 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_112_112;
#line 436 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_113_113;
#line 436 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_114_114;
#line 436 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_116_116;
#line 436 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_117_117;
#line 436 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_118_118;
#line 436 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_119_119;
#line 436 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_120_120;
#line 436 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_115_115;

#line 431 "ml_global_data.m"
        {
#line 431 "ml_global_data.m"
          mercury__counter__allocate_3_p_0(&ml_backend__ml_global_data__TypeRawNum_20, ml_backend__ml_global_data__TypeNumCounter0_19, &ml_backend__ml_global_data__TypeNumCounter_21);
        }
#line 432 "ml_global_data.m"
        ml_backend__ml_global_data__TypeNum_18 = (MR_Word) ml_backend__ml_global_data__TypeRawNum_20;
#line 433 "ml_global_data.m"
        ml_backend__ml_global_data__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 0)));
#line 433 "ml_global_data.m"
        ml_backend__ml_global_data__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 1)));
#line 433 "ml_global_data.m"
        ml_backend__ml_global_data__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 2)));
#line 433 "ml_global_data.m"
        ml_backend__ml_global_data__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 3)));
#line 433 "ml_global_data.m"
        ml_backend__ml_global_data__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 4)));
#line 433 "ml_global_data.m"
        ml_backend__ml_global_data__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 5)));
#line 433 "ml_global_data.m"
        ml_backend__ml_global_data__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 6)));
#line 433 "ml_global_data.m"
        ml_backend__ml_global_data__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 7)));
#line 433 "ml_global_data.m"
        ml_backend__ml_global_data__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 8)));
#line 433 "ml_global_data.m"
        ml_backend__ml_global_data__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 9)));
#line 433 "ml_global_data.m"
        ml_backend__ml_global_data__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 10)));
#line 433 "ml_global_data.m"
        ml_backend__ml_global_data__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 11)));
#line 433 "ml_global_data.m"
        ml_backend__ml_global_data__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 12)));
#line 433 "ml_global_data.m"
        ml_backend__ml_global_data__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_34, (MR_Integer) 13)));
#line 433 "ml_global_data.m"
        {
#line 433 "ml_global_data.m"
          ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 433 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 0) = ((MR_Box) (ml_backend__ml_global_data__V_93_93));
#line 433 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 1) = ((MR_Box) (ml_backend__ml_global_data__V_94_94));
#line 433 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 2) = ((MR_Box) (ml_backend__ml_global_data__V_95_95));
#line 433 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 3) = ((MR_Box) (ml_backend__ml_global_data__V_96_96));
#line 433 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 4) = ((MR_Box) (ml_backend__ml_global_data__V_97_97));
#line 433 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 5) = ((MR_Box) (ml_backend__ml_global_data__V_98_98));
#line 433 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 6) = ((MR_Box) (ml_backend__ml_global_data__V_99_99));
#line 433 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 7) = ((MR_Box) (ml_backend__ml_global_data__TypeNumCounter_21));
#line 433 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 8) = ((MR_Box) (ml_backend__ml_global_data__V_101_101));
#line 433 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 9) = ((MR_Box) (ml_backend__ml_global_data__V_102_102));
#line 433 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 10) = ((MR_Box) (ml_backend__ml_global_data__V_103_103));
#line 433 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 11) = ((MR_Box) (ml_backend__ml_global_data__V_104_104));
#line 433 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 12) = ((MR_Box) (ml_backend__ml_global_data__V_105_105));
#line 433 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, 13) = ((MR_Box) (ml_backend__ml_global_data__V_106_106));
#line 433 "ml_global_data.m"
        }
#line 435 "ml_global_data.m"
        {
#line 435 "ml_global_data.m"
          mercury__map__det_insert_4_p_0((MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0, ((MR_Box) (ml_backend__ml_global_data__CellType_13)), ((MR_Box) (ml_backend__ml_global_data__TypeNum_18)), ml_backend__ml_global_data__TypeNumMap0_15, &ml_backend__ml_global_data__TypeNumMap_22);
        }
#line 436 "ml_global_data.m"
        ml_backend__ml_global_data__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 0)));
#line 436 "ml_global_data.m"
        ml_backend__ml_global_data__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 1)));
#line 436 "ml_global_data.m"
        ml_backend__ml_global_data__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 2)));
#line 436 "ml_global_data.m"
        ml_backend__ml_global_data__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 3)));
#line 436 "ml_global_data.m"
        ml_backend__ml_global_data__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 4)));
#line 436 "ml_global_data.m"
        ml_backend__ml_global_data__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 5)));
#line 436 "ml_global_data.m"
        ml_backend__ml_global_data__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 6)));
#line 436 "ml_global_data.m"
        ml_backend__ml_global_data__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 7)));
#line 436 "ml_global_data.m"
        ml_backend__ml_global_data__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 8)));
#line 436 "ml_global_data.m"
        ml_backend__ml_global_data__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 9)));
#line 436 "ml_global_data.m"
        ml_backend__ml_global_data__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 10)));
#line 436 "ml_global_data.m"
        ml_backend__ml_global_data__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 11)));
#line 436 "ml_global_data.m"
        ml_backend__ml_global_data__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 12)));
#line 436 "ml_global_data.m"
        ml_backend__ml_global_data__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_42_42, (MR_Integer) 13)));
#line 436 "ml_global_data.m"
        {
#line 436 "ml_global_data.m"
          ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 436 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 0) = ((MR_Box) (ml_backend__ml_global_data__V_107_107));
#line 436 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 1) = ((MR_Box) (ml_backend__ml_global_data__V_108_108));
#line 436 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 2) = ((MR_Box) (ml_backend__ml_global_data__V_109_109));
#line 436 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 3) = ((MR_Box) (ml_backend__ml_global_data__V_110_110));
#line 436 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 4) = ((MR_Box) (ml_backend__ml_global_data__V_111_111));
#line 436 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 5) = ((MR_Box) (ml_backend__ml_global_data__V_112_112));
#line 436 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 6) = ((MR_Box) (ml_backend__ml_global_data__V_113_113));
#line 436 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 7) = ((MR_Box) (ml_backend__ml_global_data__V_114_114));
#line 436 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 8) = ((MR_Box) (ml_backend__ml_global_data__TypeNumMap_22));
#line 436 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 9) = ((MR_Box) (ml_backend__ml_global_data__V_116_116));
#line 436 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 10) = ((MR_Box) (ml_backend__ml_global_data__V_117_117));
#line 436 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 11) = ((MR_Box) (ml_backend__ml_global_data__V_118_118));
#line 436 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 12) = ((MR_Box) (ml_backend__ml_global_data__V_119_119));
#line 436 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, 13) = ((MR_Box) (ml_backend__ml_global_data__V_120_120));
#line 436 "ml_global_data.m"
        }
#line 439 "ml_global_data.m"
        {
#line 439 "ml_global_data.m"
          ml_backend__ml_global_data__V_45_45 = mercury__counter__init_1_f_0((MR_Integer) 0);
        }
#line 6183 "ml_backend.ml_global_data.c"
        ml_backend__ml_global_data__TypeCtorInfo_170_170 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
#line 439 "ml_global_data.m"
        {
#line 439 "ml_global_data.m"
          ml_backend__ml_global_data__V_47_47 = mercury__bimap__init_0_f_0(ml_backend__ml_global_data__TypeCtorInfo_170_170, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0);
        }
#line 439 "ml_global_data.m"
        {
#line 439 "ml_global_data.m"
          ml_backend__ml_global_data__V_48_48 = mercury__cord__empty_0_f_0(ml_backend__ml_global_data__TypeCtorInfo_170_170);
        }
#line 438 "ml_global_data.m"
        {
#line 438 "ml_global_data.m"
          ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 438 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 0) = ((MR_Box) (ml_backend__ml_global_data__ConstType_8));
#line 438 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 1) = ((MR_Box) (ml_backend__ml_global_data__InitArraySize_12));
#line 438 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 2) = ((MR_Box) (ml_backend__ml_global_data__V_45_45));
#line 438 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 3) = ((MR_Box) (ml_backend__ml_global_data__V_47_47));
#line 438 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, 4) = ((MR_Box) (ml_backend__ml_global_data__V_48_48));
#line 438 "ml_global_data.m"
        }
#line 430 "ml_global_data.m"
      }
#line 442 "ml_global_data.m"
    ml_backend__ml_global_data__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 0)));
#line 442 "ml_global_data.m"
    ml_backend__ml_global_data__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 1)));
#line 442 "ml_global_data.m"
    ml_backend__ml_global_data__RowCounter0_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 2)));
#line 442 "ml_global_data.m"
    ml_backend__ml_global_data__V_123_123 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 3)));
#line 442 "ml_global_data.m"
    ml_backend__ml_global_data__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 4)));
#line 443 "ml_global_data.m"
    {
#line 443 "ml_global_data.m"
      mercury__counter__allocate_3_p_0(&ml_backend__ml_global_data__RowNum_24, ml_backend__ml_global_data__RowCounter0_23, &ml_backend__ml_global_data__RowCounter_25);
    }
#line 444 "ml_global_data.m"
    ml_backend__ml_global_data__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 0)));
#line 444 "ml_global_data.m"
    ml_backend__ml_global_data__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 1)));
#line 444 "ml_global_data.m"
    ml_backend__ml_global_data__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 2)));
#line 444 "ml_global_data.m"
    ml_backend__ml_global_data__MembersMap0_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 3)));
#line 444 "ml_global_data.m"
    ml_backend__ml_global_data__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 4)));
#line 445 "ml_global_data.m"
    {
#line 445 "ml_global_data.m"
      ml_backend__ml_global_data__NewCommon_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 445 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__NewCommon_27, 0) = ((MR_Box) (ml_backend__ml_global_data__MLDS_ModuleName_7));
#line 445 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__NewCommon_27, 1) = ((MR_Box) (ml_backend__ml_global_data__ConstType_8));
#line 445 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__NewCommon_27, 2) = ((MR_Box) (ml_backend__ml_global_data__TypeNum_18));
#line 445 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__NewCommon_27, 3) = ((MR_Box) (ml_backend__ml_global_data__RowNum_24));
#line 445 "ml_global_data.m"
    }
#line 6252 "ml_backend.ml_global_data.c"
    ml_backend__ml_global_data__TypeCtorInfo_172_172 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
#line 447 "ml_global_data.m"
    {
#line 447 "ml_global_data.m"
      mercury__bimap__search_insert_5_p_0(ml_backend__ml_global_data__TypeCtorInfo_172_172, (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0, ((MR_Box) (ml_backend__ml_global_data__Initializer_9)), ((MR_Box) (ml_backend__ml_global_data__NewCommon_27)), &ml_backend__ml_global_data__MaybeOldCommon_28, ml_backend__ml_global_data__MembersMap0_26, &ml_backend__ml_global_data__MembersMap_29);
    }
#line 453 "ml_global_data.m"
    if ((ml_backend__ml_global_data__MaybeOldCommon_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 454 "ml_global_data.m"
      {
#line 454 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__Rows0_31;
#line 454 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__Rows_32;
#line 454 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__CellGroupMap_33;
#line 454 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50;
#line 454 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53;
#line 454 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_129_129;
#line 454 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_130_130;
#line 454 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_133_133;
#line 456 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_131_131;
#line 456 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_132_132;
#line 461 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_143_143;
#line 461 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_144_144;
#line 461 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_145_145;
#line 461 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_146_146;
#line 461 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_147_147;
#line 464 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_148_148;
#line 464 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_149_149;
#line 464 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_150_150;
#line 464 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_151_151;
#line 464 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_152_152;
#line 464 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_153_153;
#line 464 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_154_154;
#line 464 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_155_155;
#line 464 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_156_156;
#line 464 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_158_158;
#line 464 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_159_159;
#line 464 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_160_160;
#line 464 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_161_161;
#line 464 "ml_global_data.m"
        MR_Word ml_backend__ml_global_data__V_157_157;

#line 455 "ml_global_data.m"
        *ml_backend__ml_global_data__Common_10 = ml_backend__ml_global_data__NewCommon_27;
#line 456 "ml_global_data.m"
        ml_backend__ml_global_data__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 0)));
#line 456 "ml_global_data.m"
        ml_backend__ml_global_data__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 1)));
#line 456 "ml_global_data.m"
        ml_backend__ml_global_data__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 2)));
#line 456 "ml_global_data.m"
        ml_backend__ml_global_data__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 3)));
#line 456 "ml_global_data.m"
        ml_backend__ml_global_data__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_37_37, (MR_Integer) 4)));
#line 457 "ml_global_data.m"
        ml_backend__ml_global_data__Rows0_31 = ml_backend__ml_global_data__V_133_133;
#line 457 "ml_global_data.m"
        {
#line 457 "ml_global_data.m"
          ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 457 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, 0) = ((MR_Box) (ml_backend__ml_global_data__V_129_129));
#line 457 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, 1) = ((MR_Box) (ml_backend__ml_global_data__V_130_130));
#line 457 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, 2) = ((MR_Box) (ml_backend__ml_global_data__RowCounter_25));
#line 457 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, 3) = ((MR_Box) (ml_backend__ml_global_data__MembersMap_29));
#line 457 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, 4) = ((MR_Box) (ml_backend__ml_global_data__Rows0_31));
#line 457 "ml_global_data.m"
        }
#line 460 "ml_global_data.m"
        {
#line 460 "ml_global_data.m"
          ml_backend__ml_global_data__Rows_32 = mercury__cord__snoc_2_f_0(ml_backend__ml_global_data__TypeCtorInfo_172_172, ml_backend__ml_global_data__Rows0_31, ((MR_Box) (ml_backend__ml_global_data__Initializer_9)));
        }
#line 461 "ml_global_data.m"
        ml_backend__ml_global_data__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, (MR_Integer) 0)));
#line 461 "ml_global_data.m"
        ml_backend__ml_global_data__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, (MR_Integer) 1)));
#line 461 "ml_global_data.m"
        ml_backend__ml_global_data__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, (MR_Integer) 2)));
#line 461 "ml_global_data.m"
        ml_backend__ml_global_data__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, (MR_Integer) 3)));
#line 461 "ml_global_data.m"
        ml_backend__ml_global_data__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_50_50, (MR_Integer) 4)));
#line 461 "ml_global_data.m"
        {
#line 461 "ml_global_data.m"
          ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 461 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53, 0) = ((MR_Box) (ml_backend__ml_global_data__V_143_143));
#line 461 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53, 1) = ((MR_Box) (ml_backend__ml_global_data__V_144_144));
#line 461 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53, 2) = ((MR_Box) (ml_backend__ml_global_data__V_145_145));
#line 461 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53, 3) = ((MR_Box) (ml_backend__ml_global_data__V_146_146));
#line 461 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53, 4) = ((MR_Box) (ml_backend__ml_global_data__Rows_32));
#line 461 "ml_global_data.m"
        }
#line 463 "ml_global_data.m"
        {
#line 463 "ml_global_data.m"
          mercury__map__set_4_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0, ((MR_Box) (ml_backend__ml_global_data__TypeNum_18)), ((MR_Box) (ml_backend__ml_global_data__STATE_VARIABLE_CellGroup_51_53)), ml_backend__ml_global_data__CellGroupMap0_16, &ml_backend__ml_global_data__CellGroupMap_33);
        }
#line 464 "ml_global_data.m"
        ml_backend__ml_global_data__V_148_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 0)));
#line 464 "ml_global_data.m"
        ml_backend__ml_global_data__V_149_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 1)));
#line 464 "ml_global_data.m"
        ml_backend__ml_global_data__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 2)));
#line 464 "ml_global_data.m"
        ml_backend__ml_global_data__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 3)));
#line 464 "ml_global_data.m"
        ml_backend__ml_global_data__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 4)));
#line 464 "ml_global_data.m"
        ml_backend__ml_global_data__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 5)));
#line 464 "ml_global_data.m"
        ml_backend__ml_global_data__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 6)));
#line 464 "ml_global_data.m"
        ml_backend__ml_global_data__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 7)));
#line 464 "ml_global_data.m"
        ml_backend__ml_global_data__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 8)));
#line 464 "ml_global_data.m"
        ml_backend__ml_global_data__V_157_157 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 9)));
#line 464 "ml_global_data.m"
        ml_backend__ml_global_data__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 10)));
#line 464 "ml_global_data.m"
        ml_backend__ml_global_data__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 11)));
#line 464 "ml_global_data.m"
        ml_backend__ml_global_data__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 12)));
#line 464 "ml_global_data.m"
        ml_backend__ml_global_data__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43, (MR_Integer) 13)));
#line 464 "ml_global_data.m"
        {
#line 464 "ml_global_data.m"
          MR_Word base;
#line 464 "ml_global_data.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 464 "ml_global_data.m"
          *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_35 = base;
#line 464 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__V_148_148));
#line 464 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_149_149));
#line 464 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_150_150));
#line 464 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_151_151));
#line 464 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__V_152_152));
#line 464 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__V_153_153));
#line 464 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__V_154_154));
#line 464 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_155_155));
#line 464 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_156_156));
#line 464 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__CellGroupMap_33));
#line 464 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_158_158));
#line 464 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__V_159_159));
#line 464 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__V_160_160));
#line 464 "ml_global_data.m"
          MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__V_161_161));
#line 464 "ml_global_data.m"
        }
#line 454 "ml_global_data.m"
      }
#line 453 "ml_global_data.m"
    else
#line 450 "ml_global_data.m"
      {
#line 450 "ml_global_data.m"
        *ml_backend__ml_global_data__Common_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__MaybeOldCommon_28, (MR_Integer) 0)));
#line 450 "ml_global_data.m"
        *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_35 = ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_43_43;
#line 450 "ml_global_data.m"
      }
#line 415 "ml_global_data.m"
  }
#line 410 "ml_global_data.m"
}

#line 319 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_global_data_set_rev_flat_cell_defns_3_p_0(
#line 319 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__Defns_4,
#line 319 "ml_global_data.m"
  MR_Word ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6,
#line 319 "ml_global_data.m"
  MR_Word * ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_7)
#line 319 "ml_global_data.m"
{
#line 340 "ml_global_data.m"
  {
#line 340 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 340 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 0)));
#line 340 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 1)));
#line 340 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 2)));
#line 340 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 3)));
#line 340 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 5)));
#line 340 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 6)));
#line 340 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 7)));
#line 340 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 8)));
#line 340 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 9)));
#line 340 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 10)));
#line 340 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 11)));
#line 340 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 12)));
#line 340 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 13)));
#line 340 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 4)));

#line 340 "ml_global_data.m"
    {
#line 340 "ml_global_data.m"
      MR_Word base;
#line 340 "ml_global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 340 "ml_global_data.m"
      *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_7 = base;
#line 340 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__V_9_9));
#line 340 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_10_10));
#line 340 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_11_11));
#line 340 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_12_12));
#line 340 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__Defns_4));
#line 340 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__V_14_14));
#line 340 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__V_15_15));
#line 340 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_16_16));
#line 340 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_17_17));
#line 340 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__V_18_18));
#line 340 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_19_19));
#line 340 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__V_20_20));
#line 340 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__V_21_21));
#line 340 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__V_22_22));
#line 340 "ml_global_data.m"
    }
#line 340 "ml_global_data.m"
  }
#line 319 "ml_global_data.m"
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
#line 7014 "ml_backend.ml_global_data.c"
    ml_backend__ml_global_data__TypeCtorInfo_79_79 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0;
#line 7016 "ml_backend.ml_global_data.c"
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
#line 620 "ml_global_data.m"
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
#line 7541 "ml_backend.ml_global_data.c"
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
#line 645 "ml_global_data.m"
        switch (ml_backend__ml_global_data__Target_12) {
#line 645 "ml_global_data.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 645 "ml_global_data.m"
          case (MR_Integer) 0:
#line 642 "ml_global_data.m"
            {
#line 643 "ml_global_data.m"
              ml_backend__ml_global_data__ClassKind_34 = (MR_Integer) 3;
#line 644 "ml_global_data.m"
              ml_backend__ml_global_data__CtorDefns_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 642 "ml_global_data.m"
            }
#line 645 "ml_global_data.m"
            break;
#line 645 "ml_global_data.m"
          case (MR_Integer) 2:
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
            break;
#line 645 "ml_global_data.m"
          case (MR_Integer) 4:
#line 645 "ml_global_data.m"
          case (MR_Integer) 1:
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
#line 645 "ml_global_data.m"
            break;
#line 645 "ml_global_data.m"
          case (MR_Integer) 3:
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
            break;
#line 645 "ml_global_data.m"
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

#line 500 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_gen_static_scalar_const_addr_8_p_0_1(
#line 500 "ml_global_data.m"
  MR_Box ml_backend__ml_global_data__closure_arg,
#line 500 "ml_global_data.m"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 500 "ml_global_data.m"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_2,
#line 500 "ml_global_data.m"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_3)
#line 500 "ml_global_data.m"
{
#line 500 "ml_global_data.m"
  {
#line 500 "ml_global_data.m"
    MR_Box ml_backend__ml_global_data__closure = ml_backend__ml_global_data__closure_arg;
#line 500 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__conv1_Init_5;
#line 500 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__conv0_Type_6;

#line 500 "ml_global_data.m"
    {
#line 500 "ml_global_data.m"
      ml_backend__ml_global_data__ml_specialize_generic_array_init_3_p_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), &ml_backend__ml_global_data__conv1_Init_5, &ml_backend__ml_global_data__conv0_Type_6);
    }
#line 500 "ml_global_data.m"
    *ml_backend__ml_global_data__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_global_data__conv1_Init_5));
#line 500 "ml_global_data.m"
    *ml_backend__ml_global_data__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_global_data__conv0_Type_6));
#line 500 "ml_global_data.m"
  }
#line 500 "ml_global_data.m"
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
#line 390 "ml_global_data.m"
  {
#line 390 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_global_data__ConstType0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType0_11, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 390 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__ConstType_16;
#line 390 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Initializer_17;
#line 390 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__UseCommonCells_18;
#line 505 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Inits_49;
#line 505 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Types_50;
#line 498 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_18_57;
#line 498 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_19_58;
#line 498 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Inits0_48;
#line 498 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_51_51;
#line 498 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_52_52;
#line 498 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_53_53;
#line 393 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_31_31;
#line 393 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_32_32;
#line 393 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_33_33;
#line 393 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_34_34;
#line 393 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_35_35;
#line 393 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_36_36;
#line 393 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_37_37;
#line 393 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_38_38;
#line 393 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_39_39;
#line 393 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_40_40;
#line 393 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_41_41;
#line 393 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_42_42;
#line 393 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_43_43;

#line 498 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 498 "ml_global_data.m"
      {
#line 498 "ml_global_data.m"
        ml_backend__ml_global_data__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType0_11, (MR_Integer) 1)));
#line 498 "ml_global_data.m"
        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_51_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 498 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 498 "ml_global_data.m"
          {
#line 499 "ml_global_data.m"
            ml_backend__ml_global_data__succeeded = ((MR_tag((MR_Word) ml_backend__ml_global_data__Initializer0_12)) == (MR_mktag((MR_Integer) 3)));
#line 499 "ml_global_data.m"
            if (ml_backend__ml_global_data__succeeded)
#line 499 "ml_global_data.m"
              {
#line 499 "ml_global_data.m"
                ml_backend__ml_global_data__Inits0_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__Initializer0_12, (MR_Integer) 0)));
#line 500 "ml_global_data.m"
                ml_backend__ml_global_data__V_52_52 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[8];
#line 8072 "ml_backend.ml_global_data.c"
                ml_backend__ml_global_data__TypeCtorInfo_18_57 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
#line 8074 "ml_backend.ml_global_data.c"
                ml_backend__ml_global_data__TypeCtorInfo_19_58 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0;
#line 500 "ml_global_data.m"
                {
#line 500 "ml_global_data.m"
                  mercury__list__map2_4_p_0(ml_backend__ml_global_data__TypeCtorInfo_18_57, ml_backend__ml_global_data__TypeCtorInfo_18_57, ml_backend__ml_global_data__TypeCtorInfo_19_58, ml_backend__ml_global_data__V_52_52, ml_backend__ml_global_data__Inits0_48, &ml_backend__ml_global_data__Inits_49, &ml_backend__ml_global_data__Types_50);
                }
#line 501 "ml_global_data.m"
                ml_backend__ml_global_data__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 501 "ml_global_data.m"
                {
#line 501 "ml_global_data.m"
                  ml_backend__ml_global_data__succeeded = mercury__list__member_2_p_0(ml_backend__ml_global_data__TypeCtorInfo_19_58, ((MR_Box) (ml_backend__ml_global_data__V_53_53)), ml_backend__ml_global_data__Types_50);
                }
#line 499 "ml_global_data.m"
              }
#line 498 "ml_global_data.m"
          }
#line 498 "ml_global_data.m"
      }
#line 505 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 503 "ml_global_data.m"
      {
#line 503 "ml_global_data.m"
        {
#line 503 "ml_global_data.m"
          ml_backend__ml_global_data__ConstType_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "ml_global_data.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 503 "ml_global_data.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType_16, 1) = ((MR_Box) (ml_backend__ml_global_data__Types_50));
#line 503 "ml_global_data.m"
        }
#line 504 "ml_global_data.m"
        {
#line 504 "ml_global_data.m"
          ml_backend__ml_global_data__Initializer_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 504 "ml_global_data.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__Initializer_17, 0) = ((MR_Box) (ml_backend__ml_global_data__Inits_49));
#line 504 "ml_global_data.m"
        }
#line 503 "ml_global_data.m"
      }
#line 505 "ml_global_data.m"
    else
#line 506 "ml_global_data.m"
      {
#line 506 "ml_global_data.m"
        ml_backend__ml_global_data__ConstType_16 = ml_backend__ml_global_data__ConstType0_11;
#line 507 "ml_global_data.m"
        ml_backend__ml_global_data__Initializer_17 = ml_backend__ml_global_data__Initializer0_12;
#line 506 "ml_global_data.m"
      }
#line 393 "ml_global_data.m"
    ml_backend__ml_global_data__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 0)));
#line 393 "ml_global_data.m"
    ml_backend__ml_global_data__UseCommonCells_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 1)));
#line 393 "ml_global_data.m"
    ml_backend__ml_global_data__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 2)));
#line 393 "ml_global_data.m"
    ml_backend__ml_global_data__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 3)));
#line 393 "ml_global_data.m"
    ml_backend__ml_global_data__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 4)));
#line 393 "ml_global_data.m"
    ml_backend__ml_global_data__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 5)));
#line 393 "ml_global_data.m"
    ml_backend__ml_global_data__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 6)));
#line 393 "ml_global_data.m"
    ml_backend__ml_global_data__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 7)));
#line 393 "ml_global_data.m"
    ml_backend__ml_global_data__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 8)));
#line 393 "ml_global_data.m"
    ml_backend__ml_global_data__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 9)));
#line 393 "ml_global_data.m"
    ml_backend__ml_global_data__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 10)));
#line 393 "ml_global_data.m"
    ml_backend__ml_global_data__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 11)));
#line 393 "ml_global_data.m"
    ml_backend__ml_global_data__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 12)));
#line 393 "ml_global_data.m"
    ml_backend__ml_global_data__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, (MR_Integer) 13)));
#line 401 "ml_global_data.m"
#line 401 "ml_global_data.m"
    switch (ml_backend__ml_global_data__UseCommonCells_18) {
#line 401 "ml_global_data.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 401 "ml_global_data.m"
      case (MR_Integer) 0:
#line 402 "ml_global_data.m"
        {
#line 402 "ml_global_data.m"
          MR_Word ml_backend__ml_global_data__VarName_22;
#line 402 "ml_global_data.m"
          MR_Word ml_backend__ml_global_data__DataName_23;
#line 402 "ml_global_data.m"
          MR_Word ml_backend__ml_global_data__V_27_27;
#line 402 "ml_global_data.m"
          MR_Word ml_backend__ml_global_data__DataAddr_30;

#line 403 "ml_global_data.m"
          {
#line 403 "ml_global_data.m"
            ml_backend__ml_global_data__ml_gen_plain_static_defn_7_p_0(ml_backend__ml_global_data__ConstBaseName_10, ml_backend__ml_global_data__ConstType_16, ml_backend__ml_global_data__Initializer_17, ml_backend__ml_global_data__Context_13, &ml_backend__ml_global_data__VarName_22, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_25);
          }
#line 405 "ml_global_data.m"
          ml_backend__ml_global_data__DataName_23 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_global_data__VarName_22);
#line 406 "ml_global_data.m"
          {
#line 406 "ml_global_data.m"
            ml_backend__ml_global_data__DataAddr_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 406 "ml_global_data.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__DataAddr_30, 0) = ((MR_Box) (ml_backend__ml_global_data__MLDS_ModuleName_9));
#line 406 "ml_global_data.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__DataAddr_30, 1) = ((MR_Box) (ml_backend__ml_global_data__DataName_23));
#line 406 "ml_global_data.m"
          }
#line 407 "ml_global_data.m"
          ml_backend__ml_global_data__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_global_data__DataAddr_30);
#line 407 "ml_global_data.m"
          {
#line 407 "ml_global_data.m"
            MR_Word base;
#line 407 "ml_global_data.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 407 "ml_global_data.m"
            *ml_backend__ml_global_data__DataAddrRval_14 = base;
#line 407 "ml_global_data.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 407 "ml_global_data.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_27_27));
#line 407 "ml_global_data.m"
          }
#line 402 "ml_global_data.m"
        }
#line 401 "ml_global_data.m"
        break;
#line 401 "ml_global_data.m"
      case (MR_Integer) 1:
#line 395 "ml_global_data.m"
        {
#line 395 "ml_global_data.m"
          MR_Word ml_backend__ml_global_data__Common_19;
#line 395 "ml_global_data.m"
          MR_Word ml_backend__ml_global_data__CommonDataName_20;
#line 395 "ml_global_data.m"
          MR_Word ml_backend__ml_global_data__DataAddr_21;
#line 395 "ml_global_data.m"
          MR_Word ml_backend__ml_global_data__V_29_29;

#line 396 "ml_global_data.m"
          {
#line 396 "ml_global_data.m"
            ml_backend__ml_global_data__ml_gen_scalar_static_defn_6_p_0(ml_backend__ml_global_data__MLDS_ModuleName_9, ml_backend__ml_global_data__ConstType_16, ml_backend__ml_global_data__Initializer_17, &ml_backend__ml_global_data__Common_19, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_24, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_25);
          }
#line 398 "ml_global_data.m"
          {
#line 398 "ml_global_data.m"
            ml_backend__ml_global_data__CommonDataName_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 398 "ml_global_data.m"
            MR_hl_field(MR_mktag(2), ml_backend__ml_global_data__CommonDataName_20, 0) = ((MR_Box) (ml_backend__ml_global_data__Common_19));
#line 398 "ml_global_data.m"
          }
#line 399 "ml_global_data.m"
          {
#line 399 "ml_global_data.m"
            ml_backend__ml_global_data__DataAddr_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 399 "ml_global_data.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__DataAddr_21, 0) = ((MR_Box) (ml_backend__ml_global_data__MLDS_ModuleName_9));
#line 399 "ml_global_data.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__DataAddr_21, 1) = ((MR_Box) (ml_backend__ml_global_data__CommonDataName_20));
#line 399 "ml_global_data.m"
          }
#line 400 "ml_global_data.m"
          ml_backend__ml_global_data__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), (MR_Word) ml_backend__ml_global_data__DataAddr_21);
#line 400 "ml_global_data.m"
          {
#line 400 "ml_global_data.m"
            MR_Word base;
#line 400 "ml_global_data.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 400 "ml_global_data.m"
            *ml_backend__ml_global_data__DataAddrRval_14 = base;
#line 400 "ml_global_data.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 400 "ml_global_data.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_29_29));
#line 400 "ml_global_data.m"
          }
#line 395 "ml_global_data.m"
        }
#line 401 "ml_global_data.m"
        break;
#line 401 "ml_global_data.m"
    }
#line 390 "ml_global_data.m"
  }
#line 180 "ml_global_data.m"
}

#line 500 "ml_global_data.m"
static void MR_CALL 
ml_backend__ml_global_data__ml_gen_static_scalar_const_value_8_p_0_1(
#line 500 "ml_global_data.m"
  MR_Box ml_backend__ml_global_data__closure_arg,
#line 500 "ml_global_data.m"
  MR_Box ml_backend__ml_global_data__wrapper_arg_1,
#line 500 "ml_global_data.m"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_2,
#line 500 "ml_global_data.m"
  MR_Box * ml_backend__ml_global_data__wrapper_arg_3)
#line 500 "ml_global_data.m"
{
#line 500 "ml_global_data.m"
  {
#line 500 "ml_global_data.m"
    MR_Box ml_backend__ml_global_data__closure = ml_backend__ml_global_data__closure_arg;
#line 500 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__conv1_Init_5;
#line 500 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__conv0_Type_6;

#line 500 "ml_global_data.m"
    {
#line 500 "ml_global_data.m"
      ml_backend__ml_global_data__ml_specialize_generic_array_init_3_p_0(((MR_Word) ml_backend__ml_global_data__wrapper_arg_1), &ml_backend__ml_global_data__conv1_Init_5, &ml_backend__ml_global_data__conv0_Type_6);
    }
#line 500 "ml_global_data.m"
    *ml_backend__ml_global_data__wrapper_arg_2 = ((MR_Box) (ml_backend__ml_global_data__conv1_Init_5));
#line 500 "ml_global_data.m"
    *ml_backend__ml_global_data__wrapper_arg_3 = ((MR_Box) (ml_backend__ml_global_data__conv0_Type_6));
#line 500 "ml_global_data.m"
  }
#line 500 "ml_global_data.m"
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
#line 371 "ml_global_data.m"
  {
#line 371 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded = ((((MR_tag((MR_Word) ml_backend__ml_global_data__ConstType0_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType0_11, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 371 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__ConstType_16;
#line 371 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Initializer_17;
#line 371 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__UseCommonCells_18;
#line 505 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Inits_46;
#line 505 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Types_47;
#line 498 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_18_54;
#line 498 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_19_55;
#line 498 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__Inits0_45;
#line 498 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_48_48;
#line 498 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_49_49;
#line 498 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_50_50;
#line 374 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_28_28;
#line 374 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_29_29;
#line 374 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_30_30;
#line 374 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_31_31;
#line 374 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_32_32;
#line 374 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_33_33;
#line 374 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_34_34;
#line 374 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_35_35;
#line 374 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_36_36;
#line 374 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_37_37;
#line 374 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_38_38;
#line 374 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_39_39;
#line 374 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_40_40;

#line 498 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 498 "ml_global_data.m"
      {
#line 498 "ml_global_data.m"
        ml_backend__ml_global_data__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType0_11, (MR_Integer) 1)));
#line 498 "ml_global_data.m"
        ml_backend__ml_global_data__succeeded = (ml_backend__ml_global_data__V_48_48 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 498 "ml_global_data.m"
        if (ml_backend__ml_global_data__succeeded)
#line 498 "ml_global_data.m"
          {
#line 499 "ml_global_data.m"
            ml_backend__ml_global_data__succeeded = ((MR_tag((MR_Word) ml_backend__ml_global_data__Initializer0_12)) == (MR_mktag((MR_Integer) 3)));
#line 499 "ml_global_data.m"
            if (ml_backend__ml_global_data__succeeded)
#line 499 "ml_global_data.m"
              {
#line 499 "ml_global_data.m"
                ml_backend__ml_global_data__Inits0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__Initializer0_12, (MR_Integer) 0)));
#line 500 "ml_global_data.m"
                ml_backend__ml_global_data__V_49_49 = (MR_Word) &ml_backend__ml_global_data_scalar_common_2[7];
#line 8406 "ml_backend.ml_global_data.c"
                ml_backend__ml_global_data__TypeCtorInfo_18_54 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0;
#line 8408 "ml_backend.ml_global_data.c"
                ml_backend__ml_global_data__TypeCtorInfo_19_55 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0;
#line 500 "ml_global_data.m"
                {
#line 500 "ml_global_data.m"
                  mercury__list__map2_4_p_0(ml_backend__ml_global_data__TypeCtorInfo_18_54, ml_backend__ml_global_data__TypeCtorInfo_18_54, ml_backend__ml_global_data__TypeCtorInfo_19_55, ml_backend__ml_global_data__V_49_49, ml_backend__ml_global_data__Inits0_45, &ml_backend__ml_global_data__Inits_46, &ml_backend__ml_global_data__Types_47);
                }
#line 501 "ml_global_data.m"
                ml_backend__ml_global_data__V_50_50 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 501 "ml_global_data.m"
                {
#line 501 "ml_global_data.m"
                  ml_backend__ml_global_data__succeeded = mercury__list__member_2_p_0(ml_backend__ml_global_data__TypeCtorInfo_19_55, ((MR_Box) (ml_backend__ml_global_data__V_50_50)), ml_backend__ml_global_data__Types_47);
                }
#line 499 "ml_global_data.m"
              }
#line 498 "ml_global_data.m"
          }
#line 498 "ml_global_data.m"
      }
#line 505 "ml_global_data.m"
    if (ml_backend__ml_global_data__succeeded)
#line 503 "ml_global_data.m"
      {
#line 503 "ml_global_data.m"
        {
#line 503 "ml_global_data.m"
          ml_backend__ml_global_data__ConstType_16 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "ml_global_data.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType_16, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 503 "ml_global_data.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__ConstType_16, 1) = ((MR_Box) (ml_backend__ml_global_data__Types_47));
#line 503 "ml_global_data.m"
        }
#line 504 "ml_global_data.m"
        {
#line 504 "ml_global_data.m"
          ml_backend__ml_global_data__Initializer_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 504 "ml_global_data.m"
          MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__Initializer_17, 0) = ((MR_Box) (ml_backend__ml_global_data__Inits_46));
#line 504 "ml_global_data.m"
        }
#line 503 "ml_global_data.m"
      }
#line 505 "ml_global_data.m"
    else
#line 506 "ml_global_data.m"
      {
#line 506 "ml_global_data.m"
        ml_backend__ml_global_data__ConstType_16 = ml_backend__ml_global_data__ConstType0_11;
#line 507 "ml_global_data.m"
        ml_backend__ml_global_data__Initializer_17 = ml_backend__ml_global_data__Initializer0_12;
#line 506 "ml_global_data.m"
      }
#line 374 "ml_global_data.m"
    ml_backend__ml_global_data__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 0)));
#line 374 "ml_global_data.m"
    ml_backend__ml_global_data__UseCommonCells_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 1)));
#line 374 "ml_global_data.m"
    ml_backend__ml_global_data__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 2)));
#line 374 "ml_global_data.m"
    ml_backend__ml_global_data__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 3)));
#line 374 "ml_global_data.m"
    ml_backend__ml_global_data__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 4)));
#line 374 "ml_global_data.m"
    ml_backend__ml_global_data__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 5)));
#line 374 "ml_global_data.m"
    ml_backend__ml_global_data__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 6)));
#line 374 "ml_global_data.m"
    ml_backend__ml_global_data__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 7)));
#line 374 "ml_global_data.m"
    ml_backend__ml_global_data__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 8)));
#line 374 "ml_global_data.m"
    ml_backend__ml_global_data__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 9)));
#line 374 "ml_global_data.m"
    ml_backend__ml_global_data__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 10)));
#line 374 "ml_global_data.m"
    ml_backend__ml_global_data__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 11)));
#line 374 "ml_global_data.m"
    ml_backend__ml_global_data__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 12)));
#line 374 "ml_global_data.m"
    ml_backend__ml_global_data__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, (MR_Integer) 13)));
#line 380 "ml_global_data.m"
#line 380 "ml_global_data.m"
    switch (ml_backend__ml_global_data__UseCommonCells_18) {
#line 380 "ml_global_data.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 380 "ml_global_data.m"
      case (MR_Integer) 0:
#line 381 "ml_global_data.m"
        {
#line 381 "ml_global_data.m"
          MR_Word ml_backend__ml_global_data__VarName_20;
#line 381 "ml_global_data.m"
          MR_Word ml_backend__ml_global_data__QualVarName_21;
#line 381 "ml_global_data.m"
          MR_Word ml_backend__ml_global_data__DataVar_22;

#line 382 "ml_global_data.m"
          {
#line 382 "ml_global_data.m"
            ml_backend__ml_global_data__ml_gen_plain_static_defn_7_p_0(ml_backend__ml_global_data__ConstBaseName_10, ml_backend__ml_global_data__ConstType_16, ml_backend__ml_global_data__Initializer_17, ml_backend__ml_global_data__Context_13, &ml_backend__ml_global_data__VarName_20, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24);
          }
#line 384 "ml_global_data.m"
          {
#line 384 "ml_global_data.m"
            ml_backend__ml_global_data__QualVarName_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 384 "ml_global_data.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__QualVarName_21, 0) = ((MR_Box) (ml_backend__ml_global_data__MLDS_ModuleName_9));
#line 384 "ml_global_data.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__QualVarName_21, 1) = ((MR_Box) ((MR_Integer) 0));
#line 384 "ml_global_data.m"
            MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__QualVarName_21, 2) = ((MR_Box) (ml_backend__ml_global_data__VarName_20));
#line 384 "ml_global_data.m"
          }
#line 385 "ml_global_data.m"
          {
#line 385 "ml_global_data.m"
            ml_backend__ml_global_data__DataVar_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 385 "ml_global_data.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__DataVar_22, 0) = ((MR_Box) (ml_backend__ml_global_data__QualVarName_21));
#line 385 "ml_global_data.m"
            MR_hl_field(MR_mktag(3), ml_backend__ml_global_data__DataVar_22, 1) = ((MR_Box) (ml_backend__ml_global_data__ConstType_16));
#line 385 "ml_global_data.m"
          }
#line 386 "ml_global_data.m"
          {
#line 386 "ml_global_data.m"
            MR_Word base;
#line 386 "ml_global_data.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 386 "ml_global_data.m"
            *ml_backend__ml_global_data__DataRval_14 = base;
#line 386 "ml_global_data.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ml_backend__ml_global_data__DataVar_22));
#line 386 "ml_global_data.m"
          }
#line 381 "ml_global_data.m"
        }
#line 380 "ml_global_data.m"
        break;
#line 380 "ml_global_data.m"
      case (MR_Integer) 1:
#line 376 "ml_global_data.m"
        {
#line 376 "ml_global_data.m"
          MR_Word ml_backend__ml_global_data__Common_19;

#line 377 "ml_global_data.m"
          {
#line 377 "ml_global_data.m"
            ml_backend__ml_global_data__ml_gen_scalar_static_defn_6_p_0(ml_backend__ml_global_data__MLDS_ModuleName_9, ml_backend__ml_global_data__ConstType_16, ml_backend__ml_global_data__Initializer_17, &ml_backend__ml_global_data__Common_19, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_23, ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_24);
          }
#line 379 "ml_global_data.m"
          *ml_backend__ml_global_data__DataRval_14 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) ml_backend__ml_global_data__Common_19);
#line 376 "ml_global_data.m"
        }
#line 380 "ml_global_data.m"
        break;
#line 380 "ml_global_data.m"
    }
#line 371 "ml_global_data.m"
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
#line 363 "ml_global_data.m"
  {
#line 363 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 363 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_12_12 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 363 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevDefns0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
#line 363 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevDefns_7;
#line 363 "ml_global_data.m"
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
    MR_Word ml_backend__ml_global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
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
    MR_Word ml_backend__ml_global_data__V_37_37;
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
    MR_Word ml_backend__ml_global_data__V_38_38;

#line 365 "ml_global_data.m"
    {
#line 365 "ml_global_data.m"
      ml_backend__ml_global_data__V_10_10 = mercury__list__reverse_1_f_0(ml_backend__ml_global_data__TypeCtorInfo_12_12, ml_backend__ml_global_data__Defns_4);
    }
#line 365 "ml_global_data.m"
    {
#line 365 "ml_global_data.m"
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
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__V_37_37));
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__RevDefns_7));
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
#line 363 "ml_global_data.m"
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
#line 358 "ml_global_data.m"
  {
#line 358 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 358 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_12_12 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 358 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevDefns0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
#line 358 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevDefns_7;
#line 358 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_10_10;
#line 330 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
#line 330 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
#line 330 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
#line 330 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
#line 330 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
#line 330 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
#line 330 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 7)));
#line 330 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 8)));
#line 330 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 9)));
#line 330 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 10)));
#line 330 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 11)));
#line 330 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 12)));
#line 330 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 13)));
#line 342 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_32_32;
#line 342 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_33_33;
#line 342 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_34_34;
#line 342 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_35_35;
#line 342 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_36_36;
#line 342 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_38_38;
#line 342 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_39_39;
#line 342 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_40_40;
#line 342 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_41_41;
#line 342 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_42_42;
#line 342 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_43_43;
#line 342 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_44_44;
#line 342 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_45_45;
#line 342 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_37_37;

#line 360 "ml_global_data.m"
    {
#line 360 "ml_global_data.m"
      ml_backend__ml_global_data__V_10_10 = mercury__list__reverse_1_f_0(ml_backend__ml_global_data__TypeCtorInfo_12_12, ml_backend__ml_global_data__Defns_4);
    }
#line 360 "ml_global_data.m"
    {
#line 360 "ml_global_data.m"
      ml_backend__ml_global_data__RevDefns_7 = mercury__list__f_43_43_2_f_0(ml_backend__ml_global_data__TypeCtorInfo_12_12, ml_backend__ml_global_data__V_10_10, ml_backend__ml_global_data__RevDefns0_6);
    }
#line 342 "ml_global_data.m"
    ml_backend__ml_global_data__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
#line 342 "ml_global_data.m"
    ml_backend__ml_global_data__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
#line 342 "ml_global_data.m"
    ml_backend__ml_global_data__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
#line 342 "ml_global_data.m"
    ml_backend__ml_global_data__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
#line 342 "ml_global_data.m"
    ml_backend__ml_global_data__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
#line 342 "ml_global_data.m"
    ml_backend__ml_global_data__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
#line 342 "ml_global_data.m"
    ml_backend__ml_global_data__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
#line 342 "ml_global_data.m"
    ml_backend__ml_global_data__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 7)));
#line 342 "ml_global_data.m"
    ml_backend__ml_global_data__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 8)));
#line 342 "ml_global_data.m"
    ml_backend__ml_global_data__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 9)));
#line 342 "ml_global_data.m"
    ml_backend__ml_global_data__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 10)));
#line 342 "ml_global_data.m"
    ml_backend__ml_global_data__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 11)));
#line 342 "ml_global_data.m"
    ml_backend__ml_global_data__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 12)));
#line 342 "ml_global_data.m"
    ml_backend__ml_global_data__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 13)));
#line 342 "ml_global_data.m"
    {
#line 342 "ml_global_data.m"
      MR_Word base;
#line 342 "ml_global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 342 "ml_global_data.m"
      *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_9 = base;
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__V_32_32));
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_33_33));
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_34_34));
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_35_35));
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__V_36_36));
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__RevDefns_7));
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__V_38_38));
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_39_39));
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_40_40));
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__V_41_41));
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_42_42));
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__V_43_43));
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__V_44_44));
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__V_45_45));
#line 342 "ml_global_data.m"
    }
#line 358 "ml_global_data.m"
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
#line 353 "ml_global_data.m"
  {
#line 353 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 353 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevDefns0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 5)));
#line 353 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevDefns_7;
#line 353 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 0)));
#line 353 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 1)));
#line 353 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 2)));
#line 353 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 3)));
#line 353 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 4)));
#line 353 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 6)));
#line 353 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 7)));
#line 353 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 8)));
#line 353 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 9)));
#line 353 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 10)));
#line 353 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 11)));
#line 353 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 12)));
#line 353 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_8, (MR_Integer) 13)));

#line 355 "ml_global_data.m"
    {
#line 355 "ml_global_data.m"
      ml_backend__ml_global_data__RevDefns_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 355 "ml_global_data.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__RevDefns_7, 0) = ((MR_Box) (ml_backend__ml_global_data__Defn_4));
#line 355 "ml_global_data.m"
      MR_hl_field(MR_mktag(1), ml_backend__ml_global_data__RevDefns_7, 1) = ((MR_Box) (ml_backend__ml_global_data__RevDefns0_6));
#line 355 "ml_global_data.m"
    }
#line 342 "ml_global_data.m"
    {
#line 342 "ml_global_data.m"
      MR_Word base;
#line 342 "ml_global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 342 "ml_global_data.m"
      *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_9 = base;
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__V_12_12));
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_13_13));
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_14_14));
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_15_15));
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__V_16_16));
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__RevDefns_7));
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__V_17_17));
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_18_18));
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_19_19));
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__V_20_20));
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_21_21));
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__V_22_22));
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__V_23_23));
#line 342 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__V_24_24));
#line 342 "ml_global_data.m"
    }
#line 353 "ml_global_data.m"
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
#line 348 "ml_global_data.m"
  {
#line 348 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 348 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__PDupRvalTypeMap0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
#line 348 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__PDupRvalTypeMap_9;
#line 324 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
#line 324 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
#line 324 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
#line 324 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
#line 324 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
#line 324 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
#line 324 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 7)));
#line 324 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 8)));
#line 324 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 9)));
#line 324 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 10)));
#line 324 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 11)));
#line 324 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 12)));
#line 324 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 13)));
#line 336 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_35_35;
#line 336 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_36_36;
#line 336 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_37_37;
#line 336 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_38_38;
#line 336 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_39_39;
#line 336 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_40_40;
#line 336 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_41_41;
#line 336 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_42_42;
#line 336 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_43_43;
#line 336 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_44_44;
#line 336 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_45_45;
#line 336 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_46_46;
#line 336 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_47_47;
#line 336 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_34_34;

#line 350 "ml_global_data.m"
    {
#line 350 "ml_global_data.m"
      mercury__map__det_insert_4_p_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0, ((MR_Box) (ml_backend__ml_global_data__RttiId_5)), ((MR_Box) (ml_backend__ml_global_data__RvalType_6)), ml_backend__ml_global_data__PDupRvalTypeMap0_8, &ml_backend__ml_global_data__PDupRvalTypeMap_9);
    }
#line 336 "ml_global_data.m"
    ml_backend__ml_global_data__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 0)));
#line 336 "ml_global_data.m"
    ml_backend__ml_global_data__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 1)));
#line 336 "ml_global_data.m"
    ml_backend__ml_global_data__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 2)));
#line 336 "ml_global_data.m"
    ml_backend__ml_global_data__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 3)));
#line 336 "ml_global_data.m"
    ml_backend__ml_global_data__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 4)));
#line 336 "ml_global_data.m"
    ml_backend__ml_global_data__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 5)));
#line 336 "ml_global_data.m"
    ml_backend__ml_global_data__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 6)));
#line 336 "ml_global_data.m"
    ml_backend__ml_global_data__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 7)));
#line 336 "ml_global_data.m"
    ml_backend__ml_global_data__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 8)));
#line 336 "ml_global_data.m"
    ml_backend__ml_global_data__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 9)));
#line 336 "ml_global_data.m"
    ml_backend__ml_global_data__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 10)));
#line 336 "ml_global_data.m"
    ml_backend__ml_global_data__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 11)));
#line 336 "ml_global_data.m"
    ml_backend__ml_global_data__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 12)));
#line 336 "ml_global_data.m"
    ml_backend__ml_global_data__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_10, (MR_Integer) 13)));
#line 336 "ml_global_data.m"
    {
#line 336 "ml_global_data.m"
      MR_Word base;
#line 336 "ml_global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 336 "ml_global_data.m"
      *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_11 = base;
#line 336 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__PDupRvalTypeMap_9));
#line 336 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_35_35));
#line 336 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_36_36));
#line 336 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_37_37));
#line 336 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__V_38_38));
#line 336 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__V_39_39));
#line 336 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__V_40_40));
#line 336 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_41_41));
#line 336 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_42_42));
#line 336 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__V_43_43));
#line 336 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_44_44));
#line 336 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__V_45_45));
#line 336 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__V_46_46));
#line 336 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__V_47_47));
#line 336 "ml_global_data.m"
    }
#line 348 "ml_global_data.m"
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
#line 344 "ml_global_data.m"
  {
#line 344 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 344 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 0)));
#line 344 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 1)));
#line 344 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 2)));
#line 344 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 3)));
#line 344 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 4)));
#line 344 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 5)));
#line 344 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 7)));
#line 344 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 8)));
#line 344 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 9)));
#line 344 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 10)));
#line 344 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 11)));
#line 344 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 12)));
#line 344 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 13)));
#line 344 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_0_6, (MR_Integer) 6)));

#line 344 "ml_global_data.m"
    {
#line 344 "ml_global_data.m"
      MR_Word base;
#line 344 "ml_global_data.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 344 "ml_global_data.m"
      *ml_backend__ml_global_data__STATE_VARIABLE_GlobalData_7 = base;
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ml_backend__ml_global_data__V_9_9));
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ml_backend__ml_global_data__V_10_10));
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ml_backend__ml_global_data__V_11_11));
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ml_backend__ml_global_data__V_12_12));
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ml_backend__ml_global_data__V_13_13));
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ml_backend__ml_global_data__V_14_14));
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ml_backend__ml_global_data__Defns_4));
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (ml_backend__ml_global_data__V_16_16));
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (ml_backend__ml_global_data__V_17_17));
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (ml_backend__ml_global_data__V_18_18));
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 10) = ((MR_Box) (ml_backend__ml_global_data__V_19_19));
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 11) = ((MR_Box) (ml_backend__ml_global_data__V_20_20));
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 12) = ((MR_Box) (ml_backend__ml_global_data__V_21_21));
#line 344 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), base, 13) = ((MR_Box) (ml_backend__ml_global_data__V_22_22));
#line 344 "ml_global_data.m"
    }
#line 344 "ml_global_data.m"
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
#line 324 "ml_global_data.m"
  {
#line 324 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 324 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_4_4;
#line 324 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_5_5;
#line 324 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_6_6;
#line 324 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_7_7;
#line 324 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_8_8;
#line 324 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_9_9;
#line 324 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_10_10;
#line 324 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_11_11;
#line 324 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_12_12;
#line 324 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_13_13;
#line 324 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_14_14;
#line 324 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_15_15;
#line 324 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_16_16;

#line 324 "ml_global_data.m"
    *ml_backend__ml_global_data__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 0)));
#line 324 "ml_global_data.m"
    ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 1)));
#line 324 "ml_global_data.m"
    ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 2)));
#line 324 "ml_global_data.m"
    ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 3)));
#line 324 "ml_global_data.m"
    ml_backend__ml_global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 4)));
#line 324 "ml_global_data.m"
    ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 5)));
#line 324 "ml_global_data.m"
    ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 6)));
#line 324 "ml_global_data.m"
    ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 7)));
#line 324 "ml_global_data.m"
    ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 8)));
#line 324 "ml_global_data.m"
    ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 9)));
#line 324 "ml_global_data.m"
    ml_backend__ml_global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 10)));
#line 324 "ml_global_data.m"
    ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 11)));
#line 324 "ml_global_data.m"
    ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 12)));
#line 324 "ml_global_data.m"
    ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 13)));
#line 324 "ml_global_data.m"
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
#line 281 "ml_global_data.m"
  {
#line 281 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 281 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_29_29;
#line 281 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevFlatCellDefns_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 4)));
#line 281 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevFlatRttiDefns_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 5)));
#line 281 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__RevMaybeNonFlatDefns_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 6)));
#line 281 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__AllocIdMap_22;
#line 281 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_23_23;
#line 281 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_24_24;
#line 281 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_25_25;
#line 281 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_26_26;
#line 282 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___PDupRvalTypeMap_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 0)));
#line 282 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___UseCommonCells_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 1)));
#line 282 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___HaveUnboxedFloats_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 2)));
#line 282 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___ConstCounter_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 3)));
#line 282 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___TypeNumCounter_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 7)));
#line 282 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___ScalarTypeNumMap_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 8)));
#line 282 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___VectorTypeNumMap_20;
#line 282 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___AllocIdNumCounter_21;

#line 282 "ml_global_data.m"
    *ml_backend__ml_global_data__ScalarCellGroupMap_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 9)));
#line 282 "ml_global_data.m"
    ml_backend__ml_global_data___VectorTypeNumMap_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 10)));
#line 282 "ml_global_data.m"
    *ml_backend__ml_global_data__VectorCellGroupMap_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 11)));
#line 282 "ml_global_data.m"
    ml_backend__ml_global_data___AllocIdNumCounter_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 12)));
#line 282 "ml_global_data.m"
    ml_backend__ml_global_data__AllocIdMap_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, (MR_Integer) 13)));
#line 289 "ml_global_data.m"
    {
#line 289 "ml_global_data.m"
      mercury__bimap__to_assoc_list_2_p_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_alloc_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0, ml_backend__ml_global_data__AllocIdMap_22, ml_backend__ml_global_data__AllocIds_9);
    }
#line 9372 "ml_backend.ml_global_data.c"
    ml_backend__ml_global_data__TypeCtorInfo_29_29 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_defn_0;
#line 297 "ml_global_data.m"
    {
#line 297 "ml_global_data.m"
      ml_backend__ml_global_data__V_23_23 = mercury__list__reverse_1_f_0(ml_backend__ml_global_data__TypeCtorInfo_29_29, ml_backend__ml_global_data__RevFlatRttiDefns_16);
    }
#line 298 "ml_global_data.m"
    {
#line 298 "ml_global_data.m"
      ml_backend__ml_global_data__V_25_25 = mercury__list__reverse_1_f_0(ml_backend__ml_global_data__TypeCtorInfo_29_29, ml_backend__ml_global_data__RevMaybeNonFlatDefns_17);
    }
#line 299 "ml_global_data.m"
    {
#line 299 "ml_global_data.m"
      ml_backend__ml_global_data__V_26_26 = mercury__list__reverse_1_f_0(ml_backend__ml_global_data__TypeCtorInfo_29_29, ml_backend__ml_global_data__RevFlatCellDefns_15);
    }
#line 298 "ml_global_data.m"
    {
#line 298 "ml_global_data.m"
      ml_backend__ml_global_data__V_24_24 = mercury__list__f_43_43_2_f_0(ml_backend__ml_global_data__TypeCtorInfo_29_29, ml_backend__ml_global_data__V_25_25, ml_backend__ml_global_data__V_26_26);
    }
#line 297 "ml_global_data.m"
    {
#line 297 "ml_global_data.m"
      *ml_backend__ml_global_data__Defns_10 = mercury__list__f_43_43_2_f_0(ml_backend__ml_global_data__TypeCtorInfo_29_29, ml_backend__ml_global_data__V_23_23, ml_backend__ml_global_data__V_24_24);
    }
#line 281 "ml_global_data.m"
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
#line 272 "ml_global_data.m"
  {
#line 272 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 272 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___PDupRvalTypeMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 0)));
#line 272 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___UseCommonCells_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 1)));
#line 272 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___HaveUnboxedFloats_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 2)));
#line 272 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___ConstCounter_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 3)));
#line 272 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___TypeNumCounter_17;
#line 272 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___ScalarTypeNumMap_18;
#line 272 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___VectorTypeNumMap_19;
#line 272 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___AllocIdNumCounter_20;
#line 272 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data___AllocIdMap_21;

#line 272 "ml_global_data.m"
    *ml_backend__ml_global_data__RevFlatCellDefns_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 4)));
#line 272 "ml_global_data.m"
    *ml_backend__ml_global_data__RevFlatRttiDefns_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 5)));
#line 272 "ml_global_data.m"
    *ml_backend__ml_global_data__RevMaybeNonFlatDefns_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 6)));
#line 272 "ml_global_data.m"
    ml_backend__ml_global_data___TypeNumCounter_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 7)));
#line 272 "ml_global_data.m"
    ml_backend__ml_global_data___ScalarTypeNumMap_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 8)));
#line 272 "ml_global_data.m"
    *ml_backend__ml_global_data__ScalarCellGroupMap_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 9)));
#line 272 "ml_global_data.m"
    ml_backend__ml_global_data___VectorTypeNumMap_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 10)));
#line 272 "ml_global_data.m"
    *ml_backend__ml_global_data__VectorCellGroupMap_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 11)));
#line 272 "ml_global_data.m"
    ml_backend__ml_global_data___AllocIdNumCounter_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 12)));
#line 272 "ml_global_data.m"
    ml_backend__ml_global_data___AllocIdMap_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_7, (MR_Integer) 13)));
#line 272 "ml_global_data.m"
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
#line 266 "ml_global_data.m"
  {
#line 266 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 266 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 2)));
#line 266 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 0)));
#line 266 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 1)));
#line 266 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 3)));
#line 266 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 4)));
#line 266 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 5)));
#line 266 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 6)));
#line 266 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 7)));
#line 266 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 8)));
#line 266 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 9)));
#line 266 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 10)));
#line 266 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 11)));
#line 266 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 12)));
#line 266 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_3, (MR_Integer) 13)));

#line 266 "ml_global_data.m"
    return ml_backend__ml_global_data__HeadVar__2_2;
#line 266 "ml_global_data.m"
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
#line 260 "ml_global_data.m"
  {
#line 260 "ml_global_data.m"
    MR_bool ml_backend__ml_global_data__succeeded;
#line 260 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__GlobalData_6;
#line 260 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_25_25;
#line 260 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__TypeCtorInfo_28_28;
#line 260 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_7_7;
#line 260 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_8_8;
#line 260 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_13_13;
#line 260 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_15_15;
#line 260 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_16_16;
#line 260 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_17_17;
#line 260 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_18_18;
#line 260 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_19_19;
#line 260 "ml_global_data.m"
    MR_Word ml_backend__ml_global_data__V_21_21;

#line 261 "ml_global_data.m"
    {
#line 261 "ml_global_data.m"
      ml_backend__ml_global_data__V_7_7 = mercury__map__init_0_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_rval_and_type_0);
    }
#line 262 "ml_global_data.m"
    {
#line 262 "ml_global_data.m"
      ml_backend__ml_global_data__V_8_8 = mercury__counter__init_1_f_0((MR_Integer) 1);
    }
#line 263 "ml_global_data.m"
    {
#line 263 "ml_global_data.m"
      ml_backend__ml_global_data__V_13_13 = mercury__counter__init_1_f_0((MR_Integer) 1);
    }
#line 9569 "ml_backend.ml_global_data.c"
    ml_backend__ml_global_data__TypeCtorInfo_25_25 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0;
#line 263 "ml_global_data.m"
    {
#line 263 "ml_global_data.m"
      ml_backend__ml_global_data__V_15_15 = mercury__map__init_0_f_0((MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_type_0, ml_backend__ml_global_data__TypeCtorInfo_25_25);
    }
#line 263 "ml_global_data.m"
    {
#line 263 "ml_global_data.m"
      ml_backend__ml_global_data__V_16_16 = mercury__map__init_0_f_0(ml_backend__ml_global_data__TypeCtorInfo_25_25, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0);
    }
#line 9581 "ml_backend.ml_global_data.c"
    ml_backend__ml_global_data__TypeCtorInfo_28_28 = (MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0;
#line 263 "ml_global_data.m"
    {
#line 263 "ml_global_data.m"
      ml_backend__ml_global_data__V_17_17 = mercury__map__init_0_f_0((MR_Word) &ml_backend__ml_global_data_scalar_common_1[0], ml_backend__ml_global_data__TypeCtorInfo_28_28);
    }
#line 263 "ml_global_data.m"
    {
#line 263 "ml_global_data.m"
      ml_backend__ml_global_data__V_18_18 = mercury__map__init_0_f_0(ml_backend__ml_global_data__TypeCtorInfo_28_28, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0);
    }
#line 264 "ml_global_data.m"
    {
#line 264 "ml_global_data.m"
      ml_backend__ml_global_data__V_19_19 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
#line 264 "ml_global_data.m"
    {
#line 264 "ml_global_data.m"
      ml_backend__ml_global_data__V_21_21 = mercury__bimap__init_0_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_alloc_id_0, (MR_Word) &ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_alloc_site_data_0);
    }
#line 261 "ml_global_data.m"
    {
#line 261 "ml_global_data.m"
      ml_backend__ml_global_data__GlobalData_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 14 * sizeof(MR_Word)), NULL, NULL);
#line 261 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 0) = ((MR_Box) (ml_backend__ml_global_data__V_7_7));
#line 261 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 1) = ((MR_Box) (ml_backend__ml_global_data__UseCommonCells_4));
#line 261 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 2) = ((MR_Box) (ml_backend__ml_global_data__HaveUnboxedFloats_5));
#line 261 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 3) = ((MR_Box) (ml_backend__ml_global_data__V_8_8));
#line 261 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 261 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 261 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 261 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 7) = ((MR_Box) (ml_backend__ml_global_data__V_13_13));
#line 261 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 8) = ((MR_Box) (ml_backend__ml_global_data__V_15_15));
#line 261 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 9) = ((MR_Box) (ml_backend__ml_global_data__V_16_16));
#line 261 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 10) = ((MR_Box) (ml_backend__ml_global_data__V_17_17));
#line 261 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 11) = ((MR_Box) (ml_backend__ml_global_data__V_18_18));
#line 261 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 12) = ((MR_Box) (ml_backend__ml_global_data__V_19_19));
#line 261 "ml_global_data.m"
      MR_hl_field(MR_mktag(0), ml_backend__ml_global_data__GlobalData_6, 13) = ((MR_Box) (ml_backend__ml_global_data__V_21_21));
#line 261 "ml_global_data.m"
    }
#line 260 "ml_global_data.m"
    return ml_backend__ml_global_data__GlobalData_6;
#line 260 "ml_global_data.m"
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
