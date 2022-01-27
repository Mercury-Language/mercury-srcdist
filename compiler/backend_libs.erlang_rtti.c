/*
** Automatically generated from `erlang_rtti.m'
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


/* :- module backend_libs.erlang_rtti. */
/* :- implementation. */

/*
INIT mercury__backend_libs__erlang_rtti__init
ENDINIT
*/

#include "backend_libs.erlang_rtti.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.unify_proc.mih"
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 141 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_atom_raw_0[1];

#line 144 "backend_libs.erlang_rtti.c"
static const MR_NotagFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__notag_functor_desc_erlang_atom_raw_0;

#line 147 "backend_libs.erlang_rtti.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__erlang_rtti__list__ti_list_1backend_libs__rtti__type_ctor_info_du_arg_info_0;

#line 150 "backend_libs.erlang_rtti.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__erlang_rtti__maybe__ti_maybe_1backend_libs__rtti__type_ctor_info_exist_info_0;

#line 153 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_du_functor_0_0[7];

#line 156 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_du_functor_0_0[7];

#line 159 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_du_functor_0_0;

#line 162 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_du_functor_0_0[1];

#line 165 "backend_libs.erlang_rtti.c"
static const MR_DuPtagLayout backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_du_functor_0[1];

#line 168 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_du_functor_0[1];

#line 171 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_du_functor_0[1];

#line 174 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_0;

#line 177 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_1;

#line 180 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_2;

#line 183 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_3;

#line 186 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_4;

#line 189 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_5;

#line 192 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_6;

#line 195 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_value_ordered_erlang_impl_ctor_0[7];

#line 198 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_name_ordered_erlang_impl_ctor_0[7];

#line 201 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_impl_ctor_0[7];

#line 204 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_0[1];

#line 207 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_0;

#line 210 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_1[1];

#line 213 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_1;

#line 216 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_2[1];

#line 219 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_2;

#line 222 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_3[4];

#line 225 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_3;

#line 228 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_4[1];

#line 231 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_4;

#line 234 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_5[1];

#line 237 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_5;

#line 240 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_0[1];

#line 243 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_1[1];

#line 246 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_2[1];

#line 249 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_3[3];

#line 252 "backend_libs.erlang_rtti.c"
static const MR_DuPtagLayout backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_rtti_data_0[4];

#line 255 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_rtti_data_0[6];

#line 258 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_rtti_data_0[6];

#line 261 "backend_libs.erlang_rtti.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__erlang_rtti__maybe__ti_maybe_1hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0;

#line 264 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_data_0_0[7];

#line 267 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_data_0_0[7];

#line 270 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_data_0_0;

#line 273 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_data_0_0[1];

#line 276 "backend_libs.erlang_rtti.c"
static const MR_DuPtagLayout backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_type_ctor_data_0[1];

#line 279 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_type_ctor_data_0[1];

#line 282 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_type_ctor_data_0[1];

#line 285 "backend_libs.erlang_rtti.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__erlang_rtti__list__ti_list_1backend_libs__erlang_rtti__type_ctor_info_erlang_du_functor_0;

#line 288 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_0[1];

#line 291 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_0[1];

#line 294 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_0;

#line 297 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_1[1];

#line 300 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_1[1];

#line 303 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_1;

#line 306 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_2;

#line 309 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_3;

#line 312 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_4[1];

#line 315 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_4[1];

#line 318 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_4;

#line 321 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_5[1];

#line 324 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_5[1];

#line 327 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_5;

#line 330 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_6[1];

#line 333 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_6[1];

#line 336 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_6;

#line 339 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_7;

#line 342 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_0[3];

#line 345 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_1[1];

#line 348 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_2[1];

#line 351 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_3[3];

#line 354 "backend_libs.erlang_rtti.c"
static const MR_DuPtagLayout backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_type_ctor_details_0[4];

#line 357 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_type_ctor_details_0[8];

#line 360 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_type_ctor_details_0[8];

#line 363 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_atom_raw_0_0_10001(
#line 366 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 368 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2);

#line 371 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_atom_raw_0_0_10001(
#line 374 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 376 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 378 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3);

#line 381 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_du_functor_0_0_10001(
#line 384 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 386 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2);

#line 389 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_du_functor_0_0_10001(
#line 392 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 394 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 396 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3);

#line 399 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_impl_ctor_0_0_10001(
#line 402 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 404 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2);

#line 407 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_impl_ctor_0_0_10001(
#line 410 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 412 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 414 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3);

#line 417 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_rtti_data_0_0_10001(
#line 420 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 422 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2);

#line 425 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_rtti_data_0_0_10001(
#line 428 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 430 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 432 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3);

#line 435 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_type_ctor_data_0_0_10001(
#line 438 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 440 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2);

#line 443 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_type_ctor_data_0_0_10001(
#line 446 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 448 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 450 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3);

#line 453 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_type_ctor_details_0_0_10001(
#line 456 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 458 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2);

#line 461 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_type_ctor_details_0_0_10001(
#line 464 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 466 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 468 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3);


static /* final */ const MR_Box backend_libs__erlang_rtti_scalar_common_1[4][2];




static /* final */ const MR_Box backend_libs__erlang_rtti_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_du_functor_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 509 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_atom_raw_0[1] = {
  (MR_Integer) 0
};

#line 514 "backend_libs.erlang_rtti.c"
static const MR_NotagFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__notag_functor_desc_erlang_atom_raw_0 = {
  (MR_String) "erlang_atom_raw",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 521 "backend_libs.erlang_rtti.c"
const MR_TypeCtorInfo_Struct backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_atom_raw_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (backend_libs__erlang_rtti____Unify____erlang_atom_raw_0_0_10001)),
  ((MR_Box) (backend_libs__erlang_rtti____Compare____erlang_atom_raw_0_0_10001)),
  (MR_String) "backend_libs.erlang_rtti",
  (MR_String) "erlang_atom_raw",
  {     &backend_libs__erlang_rtti__backend_libs__erlang_rtti__notag_functor_desc_erlang_atom_raw_0 },
  {     &backend_libs__erlang_rtti__backend_libs__erlang_rtti__notag_functor_desc_erlang_atom_raw_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_atom_raw_0
};

#line 538 "backend_libs.erlang_rtti.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__erlang_rtti__list__ti_list_1backend_libs__rtti__type_ctor_info_du_arg_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0
  }
};

#line 546 "backend_libs.erlang_rtti.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__erlang_rtti__maybe__ti_maybe_1backend_libs__rtti__type_ctor_info_exist_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_info_0
  }
};

#line 554 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_du_functor_0_0[7] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_atom_raw_0,
  (MR_PseudoTypeInfo) &backend_libs__erlang_rtti__list__ti_list_1backend_libs__rtti__type_ctor_info_du_arg_info_0,
  (MR_PseudoTypeInfo) &backend_libs__erlang_rtti__maybe__ti_maybe_1backend_libs__rtti__type_ctor_info_exist_info_0
};

#line 565 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_du_functor_0_0[7] = {
  (MR_String) "edu_name",
  (MR_String) "edu_orig_arity",
  (MR_String) "edu_ordinal",
  (MR_String) "edu_lex",
  (MR_String) "edu_rep",
  (MR_String) "edu_arg_infos",
  (MR_String) "edu_exist_info"
};

#line 576 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_du_functor_0_0 = {
  (MR_String) "erlang_du_functor",
  (MR_Integer) 7,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_du_functor_0_0,
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_du_functor_0_0,
  NULL,
  NULL
};

#line 591 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_du_functor_0_0[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_du_functor_0_0
};

#line 596 "backend_libs.erlang_rtti.c"
static const MR_DuPtagLayout backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_du_functor_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_du_functor_0_0
  }
};

#line 605 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_du_functor_0[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_du_functor_0_0
};

#line 610 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_du_functor_0[1] = {
  (MR_Integer) 0
};

#line 615 "backend_libs.erlang_rtti.c"
const MR_TypeCtorInfo_Struct backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_du_functor_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__erlang_rtti____Unify____erlang_du_functor_0_0_10001)),
  ((MR_Box) (backend_libs__erlang_rtti____Compare____erlang_du_functor_0_0_10001)),
  (MR_String) "backend_libs.erlang_rtti",
  (MR_String) "erlang_du_functor",
  {     backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_du_functor_0 },
  {     backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_du_functor_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_du_functor_0
};

#line 632 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_0 = {
  (MR_String) "erlang_impl_ctor_type_info",
  (MR_Integer) 0
};

#line 638 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_1 = {
  (MR_String) "erlang_impl_ctor_type_ctor_info",
  (MR_Integer) 1
};

#line 644 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_2 = {
  (MR_String) "erlang_impl_ctor_typeclass_info",
  (MR_Integer) 2
};

#line 650 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_3 = {
  (MR_String) "erlang_impl_ctor_base_typeclass_info",
  (MR_Integer) 3
};

#line 656 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_4 = {
  (MR_String) "erlang_impl_ctor_hp",
  (MR_Integer) 4
};

#line 662 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_5 = {
  (MR_String) "erlang_impl_ctor_subgoal",
  (MR_Integer) 5
};

#line 668 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_6 = {
  (MR_String) "erlang_impl_ctor_ticket",
  (MR_Integer) 6
};

#line 674 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_value_ordered_erlang_impl_ctor_0[7] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_0,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_1,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_2,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_3,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_4,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_5,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_6
};

#line 685 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_name_ordered_erlang_impl_ctor_0[7] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_3,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_4,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_5,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_6,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_1,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_0,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_2
};

#line 696 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_impl_ctor_0[7] = {
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 6,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 707 "backend_libs.erlang_rtti.c"
const MR_TypeCtorInfo_Struct backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_impl_ctor_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__erlang_rtti____Unify____erlang_impl_ctor_0_0_10001)),
  ((MR_Box) (backend_libs__erlang_rtti____Compare____erlang_impl_ctor_0_0_10001)),
  (MR_String) "backend_libs.erlang_rtti",
  (MR_String) "erlang_impl_ctor",
  {     backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_name_ordered_erlang_impl_ctor_0 },
  {     backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_value_ordered_erlang_impl_ctor_0 },
  (MR_Integer) 7,
  (MR_Integer) 4,
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_impl_ctor_0
};

#line 724 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_0[1] = {
  (MR_PseudoTypeInfo) &backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_type_ctor_data_0
};

#line 729 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_0 = {
  (MR_String) "erlang_rtti_data_type_ctor_info",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_0,
  NULL,
  NULL,
  NULL
};

#line 744 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_1[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0
};

#line 749 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_1 = {
  (MR_String) "erlang_rtti_data_type_info",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_1,
  NULL,
  NULL,
  NULL
};

#line 764 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_2[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_pseudo_type_info_0
};

#line 769 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_2 = {
  (MR_String) "erlang_rtti_data_pseudo_type_info",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_2,
  NULL,
  NULL,
  NULL
};

#line 784 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_3[4] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_name_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_base_typeclass_info_0
};

#line 792 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_3 = {
  (MR_String) "erlang_rtti_data_base_typeclass_info",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_3,
  NULL,
  NULL,
  NULL
};

#line 807 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_4[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_decl_0
};

#line 812 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_4 = {
  (MR_String) "erlang_rtti_data_type_class_decl",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_4,
  NULL,
  NULL,
  NULL
};

#line 827 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_5[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_instance_0
};

#line 832 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_5 = {
  (MR_String) "erlang_rtti_data_type_class_instance",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_5,
  NULL,
  NULL,
  NULL
};

#line 847 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_0[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_0
};

#line 852 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_1[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_1
};

#line 857 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_2[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_2
};

#line 862 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_3[3] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_3,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_4,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_5
};

#line 869 "backend_libs.erlang_rtti.c"
static const MR_DuPtagLayout backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_rtti_data_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_2
  },
  {
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_3
  }
};

#line 893 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_rtti_data_0[6] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_3,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_2,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_4,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_5,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_0,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_1
};

#line 903 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_rtti_data_0[6] = {
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 913 "backend_libs.erlang_rtti.c"
const MR_TypeCtorInfo_Struct backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_rtti_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__erlang_rtti____Unify____erlang_rtti_data_0_0_10001)),
  ((MR_Box) (backend_libs__erlang_rtti____Compare____erlang_rtti_data_0_0_10001)),
  (MR_String) "backend_libs.erlang_rtti",
  (MR_String) "erlang_rtti_data",
  {     backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_rtti_data_0 },
  {     backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_rtti_data_0 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_rtti_data_0
};

#line 930 "backend_libs.erlang_rtti.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__erlang_rtti__maybe__ti_maybe_1hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0
  }
};

#line 938 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_data_0_0[7] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &backend_libs__erlang_rtti__maybe__ti_maybe_1hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0,
  (MR_PseudoTypeInfo) &backend_libs__erlang_rtti__maybe__ti_maybe_1hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0,
  (MR_PseudoTypeInfo) &backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_type_ctor_details_0
};

#line 949 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_data_0_0[7] = {
  (MR_String) "etcr_version",
  (MR_String) "etcr_module_name",
  (MR_String) "etcr_type_name",
  (MR_String) "etcr_arity",
  (MR_String) "etcr_unify",
  (MR_String) "etcr_compare",
  (MR_String) "etcr_rep_details"
};

#line 960 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_data_0_0 = {
  (MR_String) "erlang_type_ctor_data",
  (MR_Integer) 7,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_data_0_0,
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_data_0_0,
  NULL,
  NULL
};

#line 975 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_data_0_0[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_data_0_0
};

#line 980 "backend_libs.erlang_rtti.c"
static const MR_DuPtagLayout backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_type_ctor_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_data_0_0
  }
};

#line 989 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_type_ctor_data_0[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_data_0_0
};

#line 994 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_type_ctor_data_0[1] = {
  (MR_Integer) 0
};

#line 999 "backend_libs.erlang_rtti.c"
const MR_TypeCtorInfo_Struct backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_type_ctor_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__erlang_rtti____Unify____erlang_type_ctor_data_0_0_10001)),
  ((MR_Box) (backend_libs__erlang_rtti____Compare____erlang_type_ctor_data_0_0_10001)),
  (MR_String) "backend_libs.erlang_rtti",
  (MR_String) "erlang_type_ctor_data",
  {     backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_type_ctor_data_0 },
  {     backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_type_ctor_data_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_type_ctor_data_0
};

#line 1016 "backend_libs.erlang_rtti.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__erlang_rtti__list__ti_list_1backend_libs__erlang_rtti__type_ctor_info_erlang_du_functor_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_du_functor_0
  }
};

#line 1024 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_0[1] = {
  (MR_PseudoTypeInfo) &backend_libs__erlang_rtti__list__ti_list_1backend_libs__erlang_rtti__type_ctor_info_erlang_du_functor_0
};

#line 1029 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_0[1] = {
  (MR_String) "edu_functors"
};

#line 1034 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_0 = {
  (MR_String) "erlang_du",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_0,
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_0,
  NULL,
  NULL
};

#line 1049 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1054 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_1[1] = {
  (MR_String) "edummy_name"
};

#line 1059 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_1 = {
  (MR_String) "erlang_dummy",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_1,
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_1,
  NULL,
  NULL
};

#line 1074 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_2 = {
  (MR_String) "erlang_list",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 2,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1089 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_3 = {
  (MR_String) "erlang_array",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1104 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_4[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0
};

#line 1109 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_4[1] = {
  (MR_String) "eeqv_type"
};

#line 1114 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_4 = {
  (MR_String) "erlang_eqv",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 4,
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_4,
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_4,
  NULL,
  NULL
};

#line 1129 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_5[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_builtin_ctor_0
};

#line 1134 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_5[1] = {
  (MR_String) "ebuiltin_ctor"
};

#line 1139 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_5 = {
  (MR_String) "erlang_builtin",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 5,
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_5,
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_5,
  NULL,
  NULL
};

#line 1154 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_6[1] = {
  (MR_PseudoTypeInfo) &backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_impl_ctor_0
};

#line 1159 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_6[1] = {
  (MR_String) "eimpl_ctor"
};

#line 1164 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_6 = {
  (MR_String) "erlang_impl_artifact",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 6,
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_6,
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_6,
  NULL,
  NULL
};

#line 1179 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_7 = {
  (MR_String) "erlang_foreign",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 7,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1194 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_0[3] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_2,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_3,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_7
};

#line 1201 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_1[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_0
};

#line 1206 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_2[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_1
};

#line 1211 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_3[3] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_4,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_5,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_6
};

#line 1218 "backend_libs.erlang_rtti.c"
static const MR_DuPtagLayout backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_type_ctor_details_0[4] = {
  {
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_2
  },
  {
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_3
  }
};

#line 1242 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_type_ctor_details_0[8] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_3,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_5,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_0,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_1,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_4,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_7,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_6,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_2
};

#line 1254 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_type_ctor_details_0[8] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 7,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 6,
  (MR_Integer) 5
};

#line 1266 "backend_libs.erlang_rtti.c"
const MR_TypeCtorInfo_Struct backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_type_ctor_details_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__erlang_rtti____Unify____erlang_type_ctor_details_0_0_10001)),
  ((MR_Box) (backend_libs__erlang_rtti____Compare____erlang_type_ctor_details_0_0_10001)),
  (MR_String) "backend_libs.erlang_rtti",
  (MR_String) "erlang_type_ctor_details",
  {     backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_type_ctor_details_0 },
  {     backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_type_ctor_details_0 },
  (MR_Integer) 8,
  (MR_Integer) 4,
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_type_ctor_details_0
};

#line 1283 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_atom_raw_0_0_10001(
#line 1286 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 1288 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2)
#line 1290 "backend_libs.erlang_rtti.c"
{
#line 1292 "backend_libs.erlang_rtti.c"
  {
#line 1294 "backend_libs.erlang_rtti.c"
    MR_bool backend_libs__erlang_rtti__succeeded;

#line 1297 "backend_libs.erlang_rtti.c"
    {
#line 1299 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti__succeeded = backend_libs__erlang_rtti____Unify____erlang_atom_raw_0_0(((MR_Word) backend_libs__erlang_rtti__wrapper_arg_1), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2));
    }
#line 1302 "backend_libs.erlang_rtti.c"
    return backend_libs__erlang_rtti__succeeded;
#line 1304 "backend_libs.erlang_rtti.c"
  }
#line 1306 "backend_libs.erlang_rtti.c"
}

#line 1309 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_atom_raw_0_0_10001(
#line 1312 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 1314 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 1316 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3)
#line 1318 "backend_libs.erlang_rtti.c"
{
#line 1320 "backend_libs.erlang_rtti.c"
  {
#line 1322 "backend_libs.erlang_rtti.c"
    MR_Word backend_libs__erlang_rtti__conv0_HeadVar__1_1;

#line 1325 "backend_libs.erlang_rtti.c"
    {
#line 1327 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti____Compare____erlang_atom_raw_0_0(&backend_libs__erlang_rtti__conv0_HeadVar__1_1, ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_3));
    }
#line 1330 "backend_libs.erlang_rtti.c"
    *backend_libs__erlang_rtti__wrapper_arg_1 = ((MR_Box) (backend_libs__erlang_rtti__conv0_HeadVar__1_1));
#line 1332 "backend_libs.erlang_rtti.c"
  }
#line 1334 "backend_libs.erlang_rtti.c"
}

#line 1337 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_du_functor_0_0_10001(
#line 1340 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 1342 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2)
#line 1344 "backend_libs.erlang_rtti.c"
{
#line 1346 "backend_libs.erlang_rtti.c"
  {
#line 1348 "backend_libs.erlang_rtti.c"
    MR_bool backend_libs__erlang_rtti__succeeded;

#line 1351 "backend_libs.erlang_rtti.c"
    {
#line 1353 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti__succeeded = backend_libs__erlang_rtti____Unify____erlang_du_functor_0_0(((MR_Word) backend_libs__erlang_rtti__wrapper_arg_1), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2));
    }
#line 1356 "backend_libs.erlang_rtti.c"
    return backend_libs__erlang_rtti__succeeded;
#line 1358 "backend_libs.erlang_rtti.c"
  }
#line 1360 "backend_libs.erlang_rtti.c"
}

#line 1363 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_du_functor_0_0_10001(
#line 1366 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 1368 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 1370 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3)
#line 1372 "backend_libs.erlang_rtti.c"
{
#line 1374 "backend_libs.erlang_rtti.c"
  {
#line 1376 "backend_libs.erlang_rtti.c"
    MR_Word backend_libs__erlang_rtti__conv0_HeadVar__1_1;

#line 1379 "backend_libs.erlang_rtti.c"
    {
#line 1381 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti____Compare____erlang_du_functor_0_0(&backend_libs__erlang_rtti__conv0_HeadVar__1_1, ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_3));
    }
#line 1384 "backend_libs.erlang_rtti.c"
    *backend_libs__erlang_rtti__wrapper_arg_1 = ((MR_Box) (backend_libs__erlang_rtti__conv0_HeadVar__1_1));
#line 1386 "backend_libs.erlang_rtti.c"
  }
#line 1388 "backend_libs.erlang_rtti.c"
}

#line 1391 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_impl_ctor_0_0_10001(
#line 1394 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 1396 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2)
#line 1398 "backend_libs.erlang_rtti.c"
{
#line 1400 "backend_libs.erlang_rtti.c"
  {
#line 1402 "backend_libs.erlang_rtti.c"
    MR_bool backend_libs__erlang_rtti__succeeded;

#line 1405 "backend_libs.erlang_rtti.c"
    {
#line 1407 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti__succeeded = backend_libs__erlang_rtti____Unify____erlang_impl_ctor_0_0(((MR_Word) backend_libs__erlang_rtti__wrapper_arg_1), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2));
    }
#line 1410 "backend_libs.erlang_rtti.c"
    return backend_libs__erlang_rtti__succeeded;
#line 1412 "backend_libs.erlang_rtti.c"
  }
#line 1414 "backend_libs.erlang_rtti.c"
}

#line 1417 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_impl_ctor_0_0_10001(
#line 1420 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 1422 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 1424 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3)
#line 1426 "backend_libs.erlang_rtti.c"
{
#line 1428 "backend_libs.erlang_rtti.c"
  {
#line 1430 "backend_libs.erlang_rtti.c"
    MR_Word backend_libs__erlang_rtti__conv0_HeadVar__1_1;

#line 1433 "backend_libs.erlang_rtti.c"
    {
#line 1435 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti____Compare____erlang_impl_ctor_0_0(&backend_libs__erlang_rtti__conv0_HeadVar__1_1, ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_3));
    }
#line 1438 "backend_libs.erlang_rtti.c"
    *backend_libs__erlang_rtti__wrapper_arg_1 = ((MR_Box) (backend_libs__erlang_rtti__conv0_HeadVar__1_1));
#line 1440 "backend_libs.erlang_rtti.c"
  }
#line 1442 "backend_libs.erlang_rtti.c"
}

#line 1445 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_rtti_data_0_0_10001(
#line 1448 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 1450 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2)
#line 1452 "backend_libs.erlang_rtti.c"
{
#line 1454 "backend_libs.erlang_rtti.c"
  {
#line 1456 "backend_libs.erlang_rtti.c"
    MR_bool backend_libs__erlang_rtti__succeeded;

#line 1459 "backend_libs.erlang_rtti.c"
    {
#line 1461 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti__succeeded = backend_libs__erlang_rtti____Unify____erlang_rtti_data_0_0(((MR_Word) backend_libs__erlang_rtti__wrapper_arg_1), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2));
    }
#line 1464 "backend_libs.erlang_rtti.c"
    return backend_libs__erlang_rtti__succeeded;
#line 1466 "backend_libs.erlang_rtti.c"
  }
#line 1468 "backend_libs.erlang_rtti.c"
}

#line 1471 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_rtti_data_0_0_10001(
#line 1474 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 1476 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 1478 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3)
#line 1480 "backend_libs.erlang_rtti.c"
{
#line 1482 "backend_libs.erlang_rtti.c"
  {
#line 1484 "backend_libs.erlang_rtti.c"
    MR_Word backend_libs__erlang_rtti__conv0_HeadVar__1_1;

#line 1487 "backend_libs.erlang_rtti.c"
    {
#line 1489 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti____Compare____erlang_rtti_data_0_0(&backend_libs__erlang_rtti__conv0_HeadVar__1_1, ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_3));
    }
#line 1492 "backend_libs.erlang_rtti.c"
    *backend_libs__erlang_rtti__wrapper_arg_1 = ((MR_Box) (backend_libs__erlang_rtti__conv0_HeadVar__1_1));
#line 1494 "backend_libs.erlang_rtti.c"
  }
#line 1496 "backend_libs.erlang_rtti.c"
}

#line 1499 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_type_ctor_data_0_0_10001(
#line 1502 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 1504 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2)
#line 1506 "backend_libs.erlang_rtti.c"
{
#line 1508 "backend_libs.erlang_rtti.c"
  {
#line 1510 "backend_libs.erlang_rtti.c"
    MR_bool backend_libs__erlang_rtti__succeeded;

#line 1513 "backend_libs.erlang_rtti.c"
    {
#line 1515 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti__succeeded = backend_libs__erlang_rtti____Unify____erlang_type_ctor_data_0_0(((MR_Word) backend_libs__erlang_rtti__wrapper_arg_1), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2));
    }
#line 1518 "backend_libs.erlang_rtti.c"
    return backend_libs__erlang_rtti__succeeded;
#line 1520 "backend_libs.erlang_rtti.c"
  }
#line 1522 "backend_libs.erlang_rtti.c"
}

#line 1525 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_type_ctor_data_0_0_10001(
#line 1528 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 1530 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 1532 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3)
#line 1534 "backend_libs.erlang_rtti.c"
{
#line 1536 "backend_libs.erlang_rtti.c"
  {
#line 1538 "backend_libs.erlang_rtti.c"
    MR_Word backend_libs__erlang_rtti__conv0_HeadVar__1_1;

#line 1541 "backend_libs.erlang_rtti.c"
    {
#line 1543 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti____Compare____erlang_type_ctor_data_0_0(&backend_libs__erlang_rtti__conv0_HeadVar__1_1, ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_3));
    }
#line 1546 "backend_libs.erlang_rtti.c"
    *backend_libs__erlang_rtti__wrapper_arg_1 = ((MR_Box) (backend_libs__erlang_rtti__conv0_HeadVar__1_1));
#line 1548 "backend_libs.erlang_rtti.c"
  }
#line 1550 "backend_libs.erlang_rtti.c"
}

#line 1553 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_type_ctor_details_0_0_10001(
#line 1556 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 1558 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2)
#line 1560 "backend_libs.erlang_rtti.c"
{
#line 1562 "backend_libs.erlang_rtti.c"
  {
#line 1564 "backend_libs.erlang_rtti.c"
    MR_bool backend_libs__erlang_rtti__succeeded;

#line 1567 "backend_libs.erlang_rtti.c"
    {
#line 1569 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti__succeeded = backend_libs__erlang_rtti____Unify____erlang_type_ctor_details_0_0(((MR_Word) backend_libs__erlang_rtti__wrapper_arg_1), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2));
    }
#line 1572 "backend_libs.erlang_rtti.c"
    return backend_libs__erlang_rtti__succeeded;
#line 1574 "backend_libs.erlang_rtti.c"
  }
#line 1576 "backend_libs.erlang_rtti.c"
}

#line 1579 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_type_ctor_details_0_0_10001(
#line 1582 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 1584 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 1586 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3)
#line 1588 "backend_libs.erlang_rtti.c"
{
#line 1590 "backend_libs.erlang_rtti.c"
  {
#line 1592 "backend_libs.erlang_rtti.c"
    MR_Word backend_libs__erlang_rtti__conv0_HeadVar__1_1;

#line 1595 "backend_libs.erlang_rtti.c"
    {
#line 1597 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti____Compare____erlang_type_ctor_details_0_0(&backend_libs__erlang_rtti__conv0_HeadVar__1_1, ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_3));
    }
#line 1600 "backend_libs.erlang_rtti.c"
    *backend_libs__erlang_rtti__wrapper_arg_1 = ((MR_Box) (backend_libs__erlang_rtti__conv0_HeadVar__1_1));
#line 1602 "backend_libs.erlang_rtti.c"
  }
#line 1604 "backend_libs.erlang_rtti.c"
}

#line 72 "erlang_rtti.m"
void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_type_ctor_details_0_0(
#line 72 "erlang_rtti.m"
  MR_Word * backend_libs__erlang_rtti__HeadVar__1_1,
#line 72 "erlang_rtti.m"
  MR_Word backend_libs__erlang_rtti__HeadVar__2_2,
#line 72 "erlang_rtti.m"
  MR_Word backend_libs__erlang_rtti__HeadVar__3_3)
#line 72 "erlang_rtti.m"
{
#line 72 "erlang_rtti.m"
  {
#line 72 "erlang_rtti.m"
    MR_bool backend_libs__erlang_rtti__succeeded;
#line 72 "erlang_rtti.m"
    MR_Integer backend_libs__erlang_rtti__CastX_84 = (MR_Integer) backend_libs__erlang_rtti__HeadVar__2_2;
#line 72 "erlang_rtti.m"
    MR_Integer backend_libs__erlang_rtti__CastY_85 = (MR_Integer) backend_libs__erlang_rtti__HeadVar__3_3;

#line 72 "erlang_rtti.m"
    backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__CastX_84 == backend_libs__erlang_rtti__CastY_85);
#line 72 "erlang_rtti.m"
    if (backend_libs__erlang_rtti__succeeded)
#line 1631 "backend_libs.erlang_rtti.c"
      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 0;
#line 72 "erlang_rtti.m"
    else
#line 72 "erlang_rtti.m"
#line 72 "erlang_rtti.m"
      switch (MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__2_2)) {
#line 72 "erlang_rtti.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 72 "erlang_rtti.m"
        case (MR_Integer) 0:
#line 72 "erlang_rtti.m"
#line 72 "erlang_rtti.m"
          switch (MR_unmkbody(backend_libs__erlang_rtti__HeadVar__2_2)) {
#line 72 "erlang_rtti.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 72 "erlang_rtti.m"
            case (MR_Integer) 0:
#line 72 "erlang_rtti.m"
#line 72 "erlang_rtti.m"
              switch (MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) {
#line 72 "erlang_rtti.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 72 "erlang_rtti.m"
                case (MR_Integer) 0:
#line 72 "erlang_rtti.m"
#line 72 "erlang_rtti.m"
                  switch (MR_unmkbody(backend_libs__erlang_rtti__HeadVar__3_3)) {
#line 72 "erlang_rtti.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 72 "erlang_rtti.m"
                    case (MR_Integer) 0:
#line 72 "erlang_rtti.m"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 0;
#line 72 "erlang_rtti.m"
                      break;
#line 72 "erlang_rtti.m"
                    case (MR_Integer) 1:
#line 72 "erlang_rtti.m"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                      break;
#line 72 "erlang_rtti.m"
                    case (MR_Integer) 2:
#line 72 "erlang_rtti.m"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                      break;
#line 72 "erlang_rtti.m"
                  }
#line 72 "erlang_rtti.m"
                  break;
#line 72 "erlang_rtti.m"
                case (MR_Integer) 1:
#line 1685 "backend_libs.erlang_rtti.c"
                  *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                  break;
#line 72 "erlang_rtti.m"
                case (MR_Integer) 2:
#line 1691 "backend_libs.erlang_rtti.c"
                  *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                  break;
#line 72 "erlang_rtti.m"
                case (MR_Integer) 3:
#line 72 "erlang_rtti.m"
#line 72 "erlang_rtti.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) {
#line 72 "erlang_rtti.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 72 "erlang_rtti.m"
                    case (MR_Integer) 0:
#line 1704 "backend_libs.erlang_rtti.c"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                      break;
#line 72 "erlang_rtti.m"
                    case (MR_Integer) 1:
#line 1710 "backend_libs.erlang_rtti.c"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                      break;
#line 72 "erlang_rtti.m"
                    case (MR_Integer) 2:
#line 1716 "backend_libs.erlang_rtti.c"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                      break;
#line 72 "erlang_rtti.m"
                  }
#line 72 "erlang_rtti.m"
                  break;
#line 72 "erlang_rtti.m"
              }
#line 72 "erlang_rtti.m"
              break;
#line 72 "erlang_rtti.m"
            case (MR_Integer) 1:
#line 72 "erlang_rtti.m"
#line 72 "erlang_rtti.m"
              switch (MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) {
#line 72 "erlang_rtti.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 72 "erlang_rtti.m"
                case (MR_Integer) 0:
#line 72 "erlang_rtti.m"
#line 72 "erlang_rtti.m"
                  switch (MR_unmkbody(backend_libs__erlang_rtti__HeadVar__3_3)) {
#line 72 "erlang_rtti.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 72 "erlang_rtti.m"
                    case (MR_Integer) 0:
#line 72 "erlang_rtti.m"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                      break;
#line 72 "erlang_rtti.m"
                    case (MR_Integer) 1:
#line 72 "erlang_rtti.m"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 0;
#line 72 "erlang_rtti.m"
                      break;
#line 72 "erlang_rtti.m"
                    case (MR_Integer) 2:
#line 72 "erlang_rtti.m"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                      break;
#line 72 "erlang_rtti.m"
                  }
#line 72 "erlang_rtti.m"
                  break;
#line 72 "erlang_rtti.m"
                case (MR_Integer) 1:
#line 1766 "backend_libs.erlang_rtti.c"
                  *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                  break;
#line 72 "erlang_rtti.m"
                case (MR_Integer) 2:
#line 1772 "backend_libs.erlang_rtti.c"
                  *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                  break;
#line 72 "erlang_rtti.m"
                case (MR_Integer) 3:
#line 72 "erlang_rtti.m"
#line 72 "erlang_rtti.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) {
#line 72 "erlang_rtti.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 72 "erlang_rtti.m"
                    case (MR_Integer) 0:
#line 1785 "backend_libs.erlang_rtti.c"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                      break;
#line 72 "erlang_rtti.m"
                    case (MR_Integer) 1:
#line 1791 "backend_libs.erlang_rtti.c"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                      break;
#line 72 "erlang_rtti.m"
                    case (MR_Integer) 2:
#line 1797 "backend_libs.erlang_rtti.c"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                      break;
#line 72 "erlang_rtti.m"
                  }
#line 72 "erlang_rtti.m"
                  break;
#line 72 "erlang_rtti.m"
              }
#line 72 "erlang_rtti.m"
              break;
#line 72 "erlang_rtti.m"
            case (MR_Integer) 2:
#line 72 "erlang_rtti.m"
#line 72 "erlang_rtti.m"
              switch (MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) {
#line 72 "erlang_rtti.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 72 "erlang_rtti.m"
                case (MR_Integer) 0:
#line 72 "erlang_rtti.m"
#line 72 "erlang_rtti.m"
                  switch (MR_unmkbody(backend_libs__erlang_rtti__HeadVar__3_3)) {
#line 72 "erlang_rtti.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 72 "erlang_rtti.m"
                    case (MR_Integer) 0:
#line 72 "erlang_rtti.m"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                      break;
#line 72 "erlang_rtti.m"
                    case (MR_Integer) 1:
#line 72 "erlang_rtti.m"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                      break;
#line 72 "erlang_rtti.m"
                    case (MR_Integer) 2:
#line 72 "erlang_rtti.m"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 0;
#line 72 "erlang_rtti.m"
                      break;
#line 72 "erlang_rtti.m"
                  }
#line 72 "erlang_rtti.m"
                  break;
#line 72 "erlang_rtti.m"
                case (MR_Integer) 1:
#line 1847 "backend_libs.erlang_rtti.c"
                  *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                  break;
#line 72 "erlang_rtti.m"
                case (MR_Integer) 2:
#line 1853 "backend_libs.erlang_rtti.c"
                  *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                  break;
#line 72 "erlang_rtti.m"
                case (MR_Integer) 3:
#line 72 "erlang_rtti.m"
#line 72 "erlang_rtti.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) {
#line 72 "erlang_rtti.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 72 "erlang_rtti.m"
                    case (MR_Integer) 0:
#line 1866 "backend_libs.erlang_rtti.c"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                      break;
#line 72 "erlang_rtti.m"
                    case (MR_Integer) 1:
#line 1872 "backend_libs.erlang_rtti.c"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                      break;
#line 72 "erlang_rtti.m"
                    case (MR_Integer) 2:
#line 1878 "backend_libs.erlang_rtti.c"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                      break;
#line 72 "erlang_rtti.m"
                  }
#line 72 "erlang_rtti.m"
                  break;
#line 72 "erlang_rtti.m"
              }
#line 72 "erlang_rtti.m"
              break;
#line 72 "erlang_rtti.m"
          }
#line 72 "erlang_rtti.m"
          break;
#line 72 "erlang_rtti.m"
        case (MR_Integer) 1:
#line 72 "erlang_rtti.m"
          {
#line 72 "erlang_rtti.m"
            MR_Word backend_libs__erlang_rtti__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 0)));

#line 72 "erlang_rtti.m"
#line 72 "erlang_rtti.m"
            switch (MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) {
#line 72 "erlang_rtti.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 72 "erlang_rtti.m"
              case (MR_Integer) 0:
#line 72 "erlang_rtti.m"
#line 72 "erlang_rtti.m"
                switch (MR_unmkbody(backend_libs__erlang_rtti__HeadVar__3_3)) {
#line 72 "erlang_rtti.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 72 "erlang_rtti.m"
                  case (MR_Integer) 0:
#line 1915 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                    break;
#line 72 "erlang_rtti.m"
                  case (MR_Integer) 1:
#line 1921 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                    break;
#line 72 "erlang_rtti.m"
                  case (MR_Integer) 2:
#line 1927 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                    break;
#line 72 "erlang_rtti.m"
                }
#line 72 "erlang_rtti.m"
                break;
#line 72 "erlang_rtti.m"
              case (MR_Integer) 1:
#line 72 "erlang_rtti.m"
                {
#line 72 "erlang_rtti.m"
                  MR_Word backend_libs__erlang_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)));

#line 72 "erlang_rtti.m"
                  {
#line 72 "erlang_rtti.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__erlang_rtti_scalar_common_1[3], backend_libs__erlang_rtti__HeadVar__1_1, ((MR_Box) (backend_libs__erlang_rtti__V_92_92)), ((MR_Box) (backend_libs__erlang_rtti__V_5_5)));
                  }
#line 72 "erlang_rtti.m"
                }
#line 72 "erlang_rtti.m"
                break;
#line 72 "erlang_rtti.m"
              case (MR_Integer) 2:
#line 1953 "backend_libs.erlang_rtti.c"
                *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                break;
#line 72 "erlang_rtti.m"
              case (MR_Integer) 3:
#line 72 "erlang_rtti.m"
#line 72 "erlang_rtti.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) {
#line 72 "erlang_rtti.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 72 "erlang_rtti.m"
                  case (MR_Integer) 0:
#line 1966 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                    break;
#line 72 "erlang_rtti.m"
                  case (MR_Integer) 1:
#line 1972 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                    break;
#line 72 "erlang_rtti.m"
                  case (MR_Integer) 2:
#line 1978 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                    break;
#line 72 "erlang_rtti.m"
                }
#line 72 "erlang_rtti.m"
                break;
#line 72 "erlang_rtti.m"
            }
#line 72 "erlang_rtti.m"
          }
#line 72 "erlang_rtti.m"
          break;
#line 72 "erlang_rtti.m"
        case (MR_Integer) 2:
#line 72 "erlang_rtti.m"
          {
#line 72 "erlang_rtti.m"
            MR_String backend_libs__erlang_rtti__V_93_93 = ((MR_String) (MR_hl_field(MR_mktag(2), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 0)));

#line 72 "erlang_rtti.m"
#line 72 "erlang_rtti.m"
            switch (MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) {
#line 72 "erlang_rtti.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 72 "erlang_rtti.m"
              case (MR_Integer) 0:
#line 72 "erlang_rtti.m"
#line 72 "erlang_rtti.m"
                switch (MR_unmkbody(backend_libs__erlang_rtti__HeadVar__3_3)) {
#line 72 "erlang_rtti.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 72 "erlang_rtti.m"
                  case (MR_Integer) 0:
#line 2013 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                    break;
#line 72 "erlang_rtti.m"
                  case (MR_Integer) 1:
#line 2019 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                    break;
#line 72 "erlang_rtti.m"
                  case (MR_Integer) 2:
#line 2025 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                    break;
#line 72 "erlang_rtti.m"
                }
#line 72 "erlang_rtti.m"
                break;
#line 72 "erlang_rtti.m"
              case (MR_Integer) 1:
#line 2035 "backend_libs.erlang_rtti.c"
                *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                break;
#line 72 "erlang_rtti.m"
              case (MR_Integer) 2:
#line 72 "erlang_rtti.m"
                {
#line 72 "erlang_rtti.m"
                  MR_String backend_libs__erlang_rtti__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(2), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)));

#line 72 "erlang_rtti.m"
                  {
#line 72 "erlang_rtti.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(backend_libs__erlang_rtti__HeadVar__1_1, backend_libs__erlang_rtti__V_93_93, backend_libs__erlang_rtti__V_20_20);
                  }
#line 72 "erlang_rtti.m"
                }
#line 72 "erlang_rtti.m"
                break;
#line 72 "erlang_rtti.m"
              case (MR_Integer) 3:
#line 72 "erlang_rtti.m"
#line 72 "erlang_rtti.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) {
#line 72 "erlang_rtti.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 72 "erlang_rtti.m"
                  case (MR_Integer) 0:
#line 2064 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                    break;
#line 72 "erlang_rtti.m"
                  case (MR_Integer) 1:
#line 2070 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                    break;
#line 72 "erlang_rtti.m"
                  case (MR_Integer) 2:
#line 2076 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                    break;
#line 72 "erlang_rtti.m"
                }
#line 72 "erlang_rtti.m"
                break;
#line 72 "erlang_rtti.m"
            }
#line 72 "erlang_rtti.m"
          }
#line 72 "erlang_rtti.m"
          break;
#line 72 "erlang_rtti.m"
        case (MR_Integer) 3:
#line 72 "erlang_rtti.m"
#line 72 "erlang_rtti.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 0)))) {
#line 72 "erlang_rtti.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 72 "erlang_rtti.m"
            case (MR_Integer) 0:
#line 72 "erlang_rtti.m"
              {
#line 72 "erlang_rtti.m"
                MR_Word backend_libs__erlang_rtti__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 1)));

#line 72 "erlang_rtti.m"
#line 72 "erlang_rtti.m"
                switch (MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) {
#line 72 "erlang_rtti.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 72 "erlang_rtti.m"
                  case (MR_Integer) 0:
#line 72 "erlang_rtti.m"
#line 72 "erlang_rtti.m"
                    switch (MR_unmkbody(backend_libs__erlang_rtti__HeadVar__3_3)) {
#line 72 "erlang_rtti.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 72 "erlang_rtti.m"
                      case (MR_Integer) 0:
#line 2118 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                        break;
#line 72 "erlang_rtti.m"
                      case (MR_Integer) 1:
#line 2124 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                        break;
#line 72 "erlang_rtti.m"
                      case (MR_Integer) 2:
#line 2130 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                        break;
#line 72 "erlang_rtti.m"
                    }
#line 72 "erlang_rtti.m"
                    break;
#line 72 "erlang_rtti.m"
                  case (MR_Integer) 1:
#line 2140 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                    break;
#line 72 "erlang_rtti.m"
                  case (MR_Integer) 2:
#line 2146 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                    break;
#line 72 "erlang_rtti.m"
                  case (MR_Integer) 3:
#line 72 "erlang_rtti.m"
#line 72 "erlang_rtti.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) {
#line 72 "erlang_rtti.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 72 "erlang_rtti.m"
                      case (MR_Integer) 0:
#line 72 "erlang_rtti.m"
                        {
#line 72 "erlang_rtti.m"
                          MR_Word backend_libs__erlang_rtti__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 1)));

#line 72 "erlang_rtti.m"
                          {
#line 72 "erlang_rtti.m"
                            backend_libs__rtti____Compare____rtti_maybe_pseudo_type_info_0_0(backend_libs__erlang_rtti__HeadVar__1_1, backend_libs__erlang_rtti__V_94_94, backend_libs__erlang_rtti__V_47_47);
                          }
#line 72 "erlang_rtti.m"
                        }
#line 72 "erlang_rtti.m"
                        break;
#line 72 "erlang_rtti.m"
                      case (MR_Integer) 1:
#line 2175 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                        break;
#line 72 "erlang_rtti.m"
                      case (MR_Integer) 2:
#line 2181 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                        break;
#line 72 "erlang_rtti.m"
                    }
#line 72 "erlang_rtti.m"
                    break;
#line 72 "erlang_rtti.m"
                }
#line 72 "erlang_rtti.m"
              }
#line 72 "erlang_rtti.m"
              break;
#line 72 "erlang_rtti.m"
            case (MR_Integer) 1:
#line 72 "erlang_rtti.m"
              {
#line 72 "erlang_rtti.m"
                MR_Word backend_libs__erlang_rtti__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 1)));

#line 72 "erlang_rtti.m"
#line 72 "erlang_rtti.m"
                switch (MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) {
#line 72 "erlang_rtti.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 72 "erlang_rtti.m"
                  case (MR_Integer) 0:
#line 72 "erlang_rtti.m"
#line 72 "erlang_rtti.m"
                    switch (MR_unmkbody(backend_libs__erlang_rtti__HeadVar__3_3)) {
#line 72 "erlang_rtti.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 72 "erlang_rtti.m"
                      case (MR_Integer) 0:
#line 2216 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                        break;
#line 72 "erlang_rtti.m"
                      case (MR_Integer) 1:
#line 2222 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                        break;
#line 72 "erlang_rtti.m"
                      case (MR_Integer) 2:
#line 2228 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                        break;
#line 72 "erlang_rtti.m"
                    }
#line 72 "erlang_rtti.m"
                    break;
#line 72 "erlang_rtti.m"
                  case (MR_Integer) 1:
#line 2238 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                    break;
#line 72 "erlang_rtti.m"
                  case (MR_Integer) 2:
#line 2244 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                    break;
#line 72 "erlang_rtti.m"
                  case (MR_Integer) 3:
#line 72 "erlang_rtti.m"
#line 72 "erlang_rtti.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) {
#line 72 "erlang_rtti.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 72 "erlang_rtti.m"
                      case (MR_Integer) 0:
#line 2257 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                        break;
#line 72 "erlang_rtti.m"
                      case (MR_Integer) 1:
#line 72 "erlang_rtti.m"
                        {
#line 72 "erlang_rtti.m"
                          MR_Word backend_libs__erlang_rtti__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 1)));

#line 72 "erlang_rtti.m"
                          {
#line 72 "erlang_rtti.m"
                            backend_libs__rtti____Compare____builtin_ctor_0_0(backend_libs__erlang_rtti__HeadVar__1_1, backend_libs__erlang_rtti__V_91_91, backend_libs__erlang_rtti__V_62_62);
                          }
#line 72 "erlang_rtti.m"
                        }
#line 72 "erlang_rtti.m"
                        break;
#line 72 "erlang_rtti.m"
                      case (MR_Integer) 2:
#line 2279 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                        break;
#line 72 "erlang_rtti.m"
                    }
#line 72 "erlang_rtti.m"
                    break;
#line 72 "erlang_rtti.m"
                }
#line 72 "erlang_rtti.m"
              }
#line 72 "erlang_rtti.m"
              break;
#line 72 "erlang_rtti.m"
            case (MR_Integer) 2:
#line 72 "erlang_rtti.m"
              {
#line 72 "erlang_rtti.m"
                MR_Word backend_libs__erlang_rtti__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 1)));

#line 72 "erlang_rtti.m"
#line 72 "erlang_rtti.m"
                switch (MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) {
#line 72 "erlang_rtti.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 72 "erlang_rtti.m"
                  case (MR_Integer) 0:
#line 72 "erlang_rtti.m"
#line 72 "erlang_rtti.m"
                    switch (MR_unmkbody(backend_libs__erlang_rtti__HeadVar__3_3)) {
#line 72 "erlang_rtti.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 72 "erlang_rtti.m"
                      case (MR_Integer) 0:
#line 2314 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                        break;
#line 72 "erlang_rtti.m"
                      case (MR_Integer) 1:
#line 2320 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                        break;
#line 72 "erlang_rtti.m"
                      case (MR_Integer) 2:
#line 2326 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                        break;
#line 72 "erlang_rtti.m"
                    }
#line 72 "erlang_rtti.m"
                    break;
#line 72 "erlang_rtti.m"
                  case (MR_Integer) 1:
#line 2336 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                    break;
#line 72 "erlang_rtti.m"
                  case (MR_Integer) 2:
#line 2342 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                    break;
#line 72 "erlang_rtti.m"
                  case (MR_Integer) 3:
#line 72 "erlang_rtti.m"
#line 72 "erlang_rtti.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) {
#line 72 "erlang_rtti.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 72 "erlang_rtti.m"
                      case (MR_Integer) 0:
#line 2355 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                        break;
#line 72 "erlang_rtti.m"
                      case (MR_Integer) 1:
#line 2361 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                        break;
#line 72 "erlang_rtti.m"
                      case (MR_Integer) 2:
#line 72 "erlang_rtti.m"
                        {
#line 72 "erlang_rtti.m"
                          MR_Word backend_libs__erlang_rtti__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 1)));
#line 72 "erlang_rtti.m"
                          MR_Integer backend_libs__erlang_rtti__V_96_96 = (MR_Integer) backend_libs__erlang_rtti__V_95_95;
#line 72 "erlang_rtti.m"
                          MR_Integer backend_libs__erlang_rtti__V_97_97 = (MR_Integer) backend_libs__erlang_rtti__V_77_77;

#line 72 "erlang_rtti.m"
                          {
#line 72 "erlang_rtti.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__erlang_rtti__HeadVar__1_1, backend_libs__erlang_rtti__V_96_96, backend_libs__erlang_rtti__V_97_97);
                          }
#line 72 "erlang_rtti.m"
                        }
#line 72 "erlang_rtti.m"
                        break;
#line 72 "erlang_rtti.m"
                    }
#line 72 "erlang_rtti.m"
                    break;
#line 72 "erlang_rtti.m"
                }
#line 72 "erlang_rtti.m"
              }
#line 72 "erlang_rtti.m"
              break;
#line 72 "erlang_rtti.m"
          }
#line 72 "erlang_rtti.m"
          break;
#line 72 "erlang_rtti.m"
      }
#line 72 "erlang_rtti.m"
  }
#line 72 "erlang_rtti.m"
}

#line 72 "erlang_rtti.m"
MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_type_ctor_details_0_0(
#line 72 "erlang_rtti.m"
  MR_Word backend_libs__erlang_rtti__HeadVar__1_1,
#line 72 "erlang_rtti.m"
  MR_Word backend_libs__erlang_rtti__HeadVar__2_2)
#line 72 "erlang_rtti.m"
{
#line 72 "erlang_rtti.m"
  {
#line 72 "erlang_rtti.m"
    MR_bool backend_libs__erlang_rtti__succeeded;
#line 72 "erlang_rtti.m"
    MR_Integer backend_libs__erlang_rtti__CastX_19 = (MR_Integer) backend_libs__erlang_rtti__HeadVar__1_1;
#line 72 "erlang_rtti.m"
    MR_Integer backend_libs__erlang_rtti__CastY_20 = (MR_Integer) backend_libs__erlang_rtti__HeadVar__2_2;

#line 72 "erlang_rtti.m"
    backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__CastX_19 == backend_libs__erlang_rtti__CastY_20);
#line 72 "erlang_rtti.m"
    if (backend_libs__erlang_rtti__succeeded)
#line 72 "erlang_rtti.m"
      backend_libs__erlang_rtti__succeeded = MR_TRUE;
#line 72 "erlang_rtti.m"
    else
#line 72 "erlang_rtti.m"
#line 72 "erlang_rtti.m"
      switch (MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__1_1)) {
#line 72 "erlang_rtti.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 72 "erlang_rtti.m"
        case (MR_Integer) 0:
#line 72 "erlang_rtti.m"
#line 72 "erlang_rtti.m"
          switch (MR_unmkbody(backend_libs__erlang_rtti__HeadVar__1_1)) {
#line 72 "erlang_rtti.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 72 "erlang_rtti.m"
            case (MR_Integer) 0:
#line 72 "erlang_rtti.m"
              {
#line 72 "erlang_rtti.m"
                MR_Integer backend_libs__erlang_rtti__CastX_7 = (MR_Integer) backend_libs__erlang_rtti__HeadVar__1_1;
#line 72 "erlang_rtti.m"
                MR_Integer backend_libs__erlang_rtti__CastY_8 = (MR_Integer) backend_libs__erlang_rtti__HeadVar__2_2;

#line 72 "erlang_rtti.m"
                backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__CastY_8 == backend_libs__erlang_rtti__CastX_7);
#line 72 "erlang_rtti.m"
              }
#line 72 "erlang_rtti.m"
              break;
#line 72 "erlang_rtti.m"
            case (MR_Integer) 1:
#line 72 "erlang_rtti.m"
              {
#line 72 "erlang_rtti.m"
                MR_Integer backend_libs__erlang_rtti__CastX_9 = (MR_Integer) backend_libs__erlang_rtti__HeadVar__1_1;
#line 72 "erlang_rtti.m"
                MR_Integer backend_libs__erlang_rtti__CastY_10 = (MR_Integer) backend_libs__erlang_rtti__HeadVar__2_2;

#line 72 "erlang_rtti.m"
                backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__CastY_10 == backend_libs__erlang_rtti__CastX_9);
#line 72 "erlang_rtti.m"
              }
#line 72 "erlang_rtti.m"
              break;
#line 72 "erlang_rtti.m"
            case (MR_Integer) 2:
#line 72 "erlang_rtti.m"
              {
#line 72 "erlang_rtti.m"
                MR_Integer backend_libs__erlang_rtti__CastX_17 = (MR_Integer) backend_libs__erlang_rtti__HeadVar__1_1;
#line 72 "erlang_rtti.m"
                MR_Integer backend_libs__erlang_rtti__CastY_18 = (MR_Integer) backend_libs__erlang_rtti__HeadVar__2_2;

#line 72 "erlang_rtti.m"
                backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__CastY_18 == backend_libs__erlang_rtti__CastX_17);
#line 72 "erlang_rtti.m"
              }
#line 72 "erlang_rtti.m"
              break;
#line 72 "erlang_rtti.m"
          }
#line 72 "erlang_rtti.m"
          break;
#line 72 "erlang_rtti.m"
        case (MR_Integer) 1:
#line 72 "erlang_rtti.m"
          {
#line 72 "erlang_rtti.m"
            MR_Word backend_libs__erlang_rtti__TypeInfo_22_22;
#line 72 "erlang_rtti.m"
            MR_Word backend_libs__erlang_rtti__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__erlang_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 72 "erlang_rtti.m"
            MR_Word backend_libs__erlang_rtti__V_4_4;

#line 72 "erlang_rtti.m"
            backend_libs__erlang_rtti__succeeded = ((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 72 "erlang_rtti.m"
            if (backend_libs__erlang_rtti__succeeded)
#line 72 "erlang_rtti.m"
              {
#line 72 "erlang_rtti.m"
                backend_libs__erlang_rtti__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 2512 "backend_libs.erlang_rtti.c"
                backend_libs__erlang_rtti__TypeInfo_22_22 = (MR_Word) &backend_libs__erlang_rtti_scalar_common_1[3];
#line 2514 "backend_libs.erlang_rtti.c"
                {
#line 2516 "backend_libs.erlang_rtti.c"
                  backend_libs__erlang_rtti__succeeded = mercury__builtin__unify_2_p_0(backend_libs__erlang_rtti__TypeInfo_22_22, ((MR_Box) (backend_libs__erlang_rtti__V_3_3)), ((MR_Box) (backend_libs__erlang_rtti__V_4_4)));
                }
#line 72 "erlang_rtti.m"
              }
#line 72 "erlang_rtti.m"
          }
#line 72 "erlang_rtti.m"
          break;
#line 72 "erlang_rtti.m"
        case (MR_Integer) 2:
#line 72 "erlang_rtti.m"
          {
#line 72 "erlang_rtti.m"
            MR_String backend_libs__erlang_rtti__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(2), backend_libs__erlang_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 72 "erlang_rtti.m"
            MR_String backend_libs__erlang_rtti__V_6_6;

#line 72 "erlang_rtti.m"
            backend_libs__erlang_rtti__succeeded = ((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 72 "erlang_rtti.m"
            if (backend_libs__erlang_rtti__succeeded)
#line 72 "erlang_rtti.m"
              {
#line 72 "erlang_rtti.m"
                backend_libs__erlang_rtti__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(2), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 2542 "backend_libs.erlang_rtti.c"
                backend_libs__erlang_rtti__succeeded = (strcmp(backend_libs__erlang_rtti__V_5_5, backend_libs__erlang_rtti__V_6_6) == 0);
#line 72 "erlang_rtti.m"
              }
#line 72 "erlang_rtti.m"
          }
#line 72 "erlang_rtti.m"
          break;
#line 72 "erlang_rtti.m"
        case (MR_Integer) 3:
#line 72 "erlang_rtti.m"
#line 72 "erlang_rtti.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__1_1, (MR_Integer) 0)))) {
#line 72 "erlang_rtti.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 72 "erlang_rtti.m"
            case (MR_Integer) 0:
#line 72 "erlang_rtti.m"
              {
#line 72 "erlang_rtti.m"
                MR_Word backend_libs__erlang_rtti__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 72 "erlang_rtti.m"
                MR_Word backend_libs__erlang_rtti__V_12_12;

#line 72 "erlang_rtti.m"
                backend_libs__erlang_rtti__succeeded = ((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 72 "erlang_rtti.m"
                if (backend_libs__erlang_rtti__succeeded)
#line 72 "erlang_rtti.m"
                  {
#line 72 "erlang_rtti.m"
                    backend_libs__erlang_rtti__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 2574 "backend_libs.erlang_rtti.c"
                    {
#line 2576 "backend_libs.erlang_rtti.c"
                      backend_libs__erlang_rtti__succeeded = backend_libs__rtti____Unify____rtti_maybe_pseudo_type_info_0_0(backend_libs__erlang_rtti__V_11_11, backend_libs__erlang_rtti__V_12_12);
                    }
#line 72 "erlang_rtti.m"
                  }
#line 72 "erlang_rtti.m"
              }
#line 72 "erlang_rtti.m"
              break;
#line 72 "erlang_rtti.m"
            case (MR_Integer) 1:
#line 72 "erlang_rtti.m"
              {
#line 72 "erlang_rtti.m"
                MR_Word backend_libs__erlang_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 72 "erlang_rtti.m"
                MR_Word backend_libs__erlang_rtti__V_14_14;

#line 72 "erlang_rtti.m"
                backend_libs__erlang_rtti__succeeded = ((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 72 "erlang_rtti.m"
                if (backend_libs__erlang_rtti__succeeded)
#line 72 "erlang_rtti.m"
                  {
#line 72 "erlang_rtti.m"
                    backend_libs__erlang_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 2602 "backend_libs.erlang_rtti.c"
                    {
#line 2604 "backend_libs.erlang_rtti.c"
                      backend_libs__erlang_rtti__succeeded = backend_libs__rtti____Unify____builtin_ctor_0_0(backend_libs__erlang_rtti__V_13_13, backend_libs__erlang_rtti__V_14_14);
                    }
#line 72 "erlang_rtti.m"
                  }
#line 72 "erlang_rtti.m"
              }
#line 72 "erlang_rtti.m"
              break;
#line 72 "erlang_rtti.m"
            case (MR_Integer) 2:
#line 72 "erlang_rtti.m"
              {
#line 72 "erlang_rtti.m"
                MR_Word backend_libs__erlang_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 72 "erlang_rtti.m"
                MR_Word backend_libs__erlang_rtti__V_16_16;

#line 72 "erlang_rtti.m"
                backend_libs__erlang_rtti__succeeded = ((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 72 "erlang_rtti.m"
                if (backend_libs__erlang_rtti__succeeded)
#line 72 "erlang_rtti.m"
                  {
#line 72 "erlang_rtti.m"
                    backend_libs__erlang_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 2630 "backend_libs.erlang_rtti.c"
                    backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__V_15_15 == backend_libs__erlang_rtti__V_16_16);
#line 72 "erlang_rtti.m"
                  }
#line 72 "erlang_rtti.m"
              }
#line 72 "erlang_rtti.m"
              break;
#line 72 "erlang_rtti.m"
          }
#line 72 "erlang_rtti.m"
          break;
#line 72 "erlang_rtti.m"
      }
#line 72 "erlang_rtti.m"
    return backend_libs__erlang_rtti__succeeded;
#line 72 "erlang_rtti.m"
  }
#line 72 "erlang_rtti.m"
}

#line 46 "erlang_rtti.m"
void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_type_ctor_data_0_0(
#line 46 "erlang_rtti.m"
  MR_Word * backend_libs__erlang_rtti__HeadVar__1_1,
#line 46 "erlang_rtti.m"
  MR_Word backend_libs__erlang_rtti__HeadVar__2_2,
#line 46 "erlang_rtti.m"
  MR_Word backend_libs__erlang_rtti__HeadVar__3_3)
#line 46 "erlang_rtti.m"
{
#line 46 "erlang_rtti.m"
  {
#line 46 "erlang_rtti.m"
    MR_bool backend_libs__erlang_rtti__succeeded;
#line 46 "erlang_rtti.m"
    MR_Integer backend_libs__erlang_rtti__CastX_24 = (MR_Integer) backend_libs__erlang_rtti__HeadVar__2_2;
#line 46 "erlang_rtti.m"
    MR_Integer backend_libs__erlang_rtti__CastY_25 = (MR_Integer) backend_libs__erlang_rtti__HeadVar__3_3;

#line 46 "erlang_rtti.m"
    backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__CastX_24 == backend_libs__erlang_rtti__CastY_25);
#line 46 "erlang_rtti.m"
    if (backend_libs__erlang_rtti__succeeded)
#line 2675 "backend_libs.erlang_rtti.c"
      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 0;
#line 46 "erlang_rtti.m"
    else
#line 46 "erlang_rtti.m"
      {
#line 46 "erlang_rtti.m"
        MR_Integer backend_libs__erlang_rtti__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 46 "erlang_rtti.m"
        MR_Word backend_libs__erlang_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 46 "erlang_rtti.m"
        MR_String backend_libs__erlang_rtti__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 2)));
#line 46 "erlang_rtti.m"
        MR_Integer backend_libs__erlang_rtti__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 3)));
#line 46 "erlang_rtti.m"
        MR_Word backend_libs__erlang_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 4)));
#line 46 "erlang_rtti.m"
        MR_Word backend_libs__erlang_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 5)));
#line 46 "erlang_rtti.m"
        MR_Word backend_libs__erlang_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 6)));
#line 46 "erlang_rtti.m"
        MR_Integer backend_libs__erlang_rtti__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)));
#line 46 "erlang_rtti.m"
        MR_Word backend_libs__erlang_rtti__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 1)));
#line 46 "erlang_rtti.m"
        MR_String backend_libs__erlang_rtti__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 2)));
#line 46 "erlang_rtti.m"
        MR_Integer backend_libs__erlang_rtti__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 3)));
#line 46 "erlang_rtti.m"
        MR_Word backend_libs__erlang_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 4)));
#line 46 "erlang_rtti.m"
        MR_Word backend_libs__erlang_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 5)));
#line 46 "erlang_rtti.m"
        MR_Word backend_libs__erlang_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 6)));
#line 46 "erlang_rtti.m"
        MR_Word backend_libs__erlang_rtti__V_18_18;

#line 46 "erlang_rtti.m"
        {
#line 46 "erlang_rtti.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__erlang_rtti__V_18_18, backend_libs__erlang_rtti__V_4_4, backend_libs__erlang_rtti__V_11_11);
        }
#line 2717 "backend_libs.erlang_rtti.c"
        backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__V_18_18 == (MR_Integer) 0);
#line 46 "erlang_rtti.m"
        backend_libs__erlang_rtti__succeeded = !(backend_libs__erlang_rtti__succeeded);
#line 46 "erlang_rtti.m"
        if (backend_libs__erlang_rtti__succeeded)
#line 46 "erlang_rtti.m"
          *backend_libs__erlang_rtti__HeadVar__1_1 = backend_libs__erlang_rtti__V_18_18;
#line 46 "erlang_rtti.m"
        else
#line 46 "erlang_rtti.m"
          {
#line 46 "erlang_rtti.m"
            MR_Word backend_libs__erlang_rtti__V_19_19;

#line 46 "erlang_rtti.m"
            {
#line 46 "erlang_rtti.m"
              mdbcomp__sym_name____Compare____sym_name_0_0(&backend_libs__erlang_rtti__V_19_19, backend_libs__erlang_rtti__V_5_5, backend_libs__erlang_rtti__V_12_12);
            }
#line 2737 "backend_libs.erlang_rtti.c"
            backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__V_19_19 == (MR_Integer) 0);
#line 46 "erlang_rtti.m"
            backend_libs__erlang_rtti__succeeded = !(backend_libs__erlang_rtti__succeeded);
#line 46 "erlang_rtti.m"
            if (backend_libs__erlang_rtti__succeeded)
#line 46 "erlang_rtti.m"
              *backend_libs__erlang_rtti__HeadVar__1_1 = backend_libs__erlang_rtti__V_19_19;
#line 46 "erlang_rtti.m"
            else
#line 46 "erlang_rtti.m"
              {
#line 46 "erlang_rtti.m"
                MR_Word backend_libs__erlang_rtti__V_20_20;

#line 46 "erlang_rtti.m"
                {
#line 46 "erlang_rtti.m"
                  mercury__private_builtin__builtin_compare_string_3_p_0(&backend_libs__erlang_rtti__V_20_20, backend_libs__erlang_rtti__V_6_6, backend_libs__erlang_rtti__V_13_13);
                }
#line 2757 "backend_libs.erlang_rtti.c"
                backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__V_20_20 == (MR_Integer) 0);
#line 46 "erlang_rtti.m"
                backend_libs__erlang_rtti__succeeded = !(backend_libs__erlang_rtti__succeeded);
#line 46 "erlang_rtti.m"
                if (backend_libs__erlang_rtti__succeeded)
#line 46 "erlang_rtti.m"
                  *backend_libs__erlang_rtti__HeadVar__1_1 = backend_libs__erlang_rtti__V_20_20;
#line 46 "erlang_rtti.m"
                else
#line 46 "erlang_rtti.m"
                  {
#line 46 "erlang_rtti.m"
                    MR_Word backend_libs__erlang_rtti__V_21_21;

#line 46 "erlang_rtti.m"
                    {
#line 46 "erlang_rtti.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__erlang_rtti__V_21_21, backend_libs__erlang_rtti__V_7_7, backend_libs__erlang_rtti__V_14_14);
                    }
#line 2777 "backend_libs.erlang_rtti.c"
                    backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__V_21_21 == (MR_Integer) 0);
#line 46 "erlang_rtti.m"
                    backend_libs__erlang_rtti__succeeded = !(backend_libs__erlang_rtti__succeeded);
#line 46 "erlang_rtti.m"
                    if (backend_libs__erlang_rtti__succeeded)
#line 46 "erlang_rtti.m"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = backend_libs__erlang_rtti__V_21_21;
#line 46 "erlang_rtti.m"
                    else
#line 46 "erlang_rtti.m"
                      {
#line 46 "erlang_rtti.m"
                        MR_Word backend_libs__erlang_rtti__V_22_22;

#line 46 "erlang_rtti.m"
                        {
#line 46 "erlang_rtti.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__erlang_rtti_scalar_common_1[2], &backend_libs__erlang_rtti__V_22_22, ((MR_Box) (backend_libs__erlang_rtti__V_8_8)), ((MR_Box) (backend_libs__erlang_rtti__V_15_15)));
                        }
#line 2797 "backend_libs.erlang_rtti.c"
                        backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__V_22_22 == (MR_Integer) 0);
#line 46 "erlang_rtti.m"
                        backend_libs__erlang_rtti__succeeded = !(backend_libs__erlang_rtti__succeeded);
#line 46 "erlang_rtti.m"
                        if (backend_libs__erlang_rtti__succeeded)
#line 46 "erlang_rtti.m"
                          *backend_libs__erlang_rtti__HeadVar__1_1 = backend_libs__erlang_rtti__V_22_22;
#line 46 "erlang_rtti.m"
                        else
#line 46 "erlang_rtti.m"
                          {
#line 46 "erlang_rtti.m"
                            MR_Word backend_libs__erlang_rtti__V_23_23;

#line 46 "erlang_rtti.m"
                            {
#line 46 "erlang_rtti.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__erlang_rtti_scalar_common_1[2], &backend_libs__erlang_rtti__V_23_23, ((MR_Box) (backend_libs__erlang_rtti__V_9_9)), ((MR_Box) (backend_libs__erlang_rtti__V_16_16)));
                            }
#line 2817 "backend_libs.erlang_rtti.c"
                            backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__V_23_23 == (MR_Integer) 0);
#line 46 "erlang_rtti.m"
                            backend_libs__erlang_rtti__succeeded = !(backend_libs__erlang_rtti__succeeded);
#line 46 "erlang_rtti.m"
                            if (backend_libs__erlang_rtti__succeeded)
#line 46 "erlang_rtti.m"
                              *backend_libs__erlang_rtti__HeadVar__1_1 = backend_libs__erlang_rtti__V_23_23;
#line 46 "erlang_rtti.m"
                            else
#line 46 "erlang_rtti.m"
                              {
#line 46 "erlang_rtti.m"
                                backend_libs__erlang_rtti____Compare____erlang_type_ctor_details_0_0(backend_libs__erlang_rtti__HeadVar__1_1, backend_libs__erlang_rtti__V_10_10, backend_libs__erlang_rtti__V_17_17);
                              }
#line 46 "erlang_rtti.m"
                          }
#line 46 "erlang_rtti.m"
                      }
#line 46 "erlang_rtti.m"
                  }
#line 46 "erlang_rtti.m"
              }
#line 46 "erlang_rtti.m"
          }
#line 46 "erlang_rtti.m"
      }
#line 46 "erlang_rtti.m"
  }
#line 46 "erlang_rtti.m"
}

#line 46 "erlang_rtti.m"
MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_type_ctor_data_0_0(
#line 46 "erlang_rtti.m"
  MR_Word backend_libs__erlang_rtti__HeadVar__1_1,
#line 46 "erlang_rtti.m"
  MR_Word backend_libs__erlang_rtti__HeadVar__2_2)
#line 46 "erlang_rtti.m"
{
#line 46 "erlang_rtti.m"
  {
#line 46 "erlang_rtti.m"
    MR_bool backend_libs__erlang_rtti__succeeded;
#line 46 "erlang_rtti.m"
    MR_Integer backend_libs__erlang_rtti__CastX_17 = (MR_Integer) backend_libs__erlang_rtti__HeadVar__1_1;
#line 46 "erlang_rtti.m"
    MR_Integer backend_libs__erlang_rtti__CastY_18 = (MR_Integer) backend_libs__erlang_rtti__HeadVar__2_2;

#line 46 "erlang_rtti.m"
    backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__CastX_17 == backend_libs__erlang_rtti__CastY_18);
#line 46 "erlang_rtti.m"
    if (backend_libs__erlang_rtti__succeeded)
#line 46 "erlang_rtti.m"
      backend_libs__erlang_rtti__succeeded = MR_TRUE;
#line 46 "erlang_rtti.m"
    else
#line 46 "erlang_rtti.m"
      {
#line 46 "erlang_rtti.m"
        MR_Word backend_libs__erlang_rtti__TypeInfo_20_20;
#line 46 "erlang_rtti.m"
        MR_Word backend_libs__erlang_rtti__TypeInfo_21_21;
#line 46 "erlang_rtti.m"
        MR_Integer backend_libs__erlang_rtti__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 46 "erlang_rtti.m"
        MR_Word backend_libs__erlang_rtti__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 46 "erlang_rtti.m"
        MR_String backend_libs__erlang_rtti__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__1_1, (MR_Integer) 2)));
#line 46 "erlang_rtti.m"
        MR_Integer backend_libs__erlang_rtti__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__1_1, (MR_Integer) 3)));
#line 46 "erlang_rtti.m"
        MR_Word backend_libs__erlang_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__1_1, (MR_Integer) 4)));
#line 46 "erlang_rtti.m"
        MR_Word backend_libs__erlang_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__1_1, (MR_Integer) 5)));
#line 46 "erlang_rtti.m"
        MR_Word backend_libs__erlang_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__1_1, (MR_Integer) 6)));
#line 46 "erlang_rtti.m"
        MR_Integer backend_libs__erlang_rtti__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 46 "erlang_rtti.m"
        MR_Word backend_libs__erlang_rtti__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 46 "erlang_rtti.m"
        MR_String backend_libs__erlang_rtti__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 2)));
#line 46 "erlang_rtti.m"
        MR_Integer backend_libs__erlang_rtti__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 3)));
#line 46 "erlang_rtti.m"
        MR_Word backend_libs__erlang_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 4)));
#line 46 "erlang_rtti.m"
        MR_Word backend_libs__erlang_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 5)));
#line 46 "erlang_rtti.m"
        MR_Word backend_libs__erlang_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 6)));

#line 2910 "backend_libs.erlang_rtti.c"
        backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__V_3_3 == backend_libs__erlang_rtti__V_10_10);
#line 46 "erlang_rtti.m"
        if (backend_libs__erlang_rtti__succeeded)
#line 46 "erlang_rtti.m"
          {
#line 2916 "backend_libs.erlang_rtti.c"
            {
#line 2918 "backend_libs.erlang_rtti.c"
              backend_libs__erlang_rtti__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(backend_libs__erlang_rtti__V_4_4, backend_libs__erlang_rtti__V_11_11);
            }
#line 46 "erlang_rtti.m"
            if (backend_libs__erlang_rtti__succeeded)
#line 46 "erlang_rtti.m"
              {
#line 2925 "backend_libs.erlang_rtti.c"
                backend_libs__erlang_rtti__succeeded = (strcmp(backend_libs__erlang_rtti__V_5_5, backend_libs__erlang_rtti__V_12_12) == 0);
#line 46 "erlang_rtti.m"
                if (backend_libs__erlang_rtti__succeeded)
#line 46 "erlang_rtti.m"
                  {
#line 2931 "backend_libs.erlang_rtti.c"
                    backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__V_6_6 == backend_libs__erlang_rtti__V_13_13);
#line 46 "erlang_rtti.m"
                    if (backend_libs__erlang_rtti__succeeded)
#line 46 "erlang_rtti.m"
                      {
#line 2937 "backend_libs.erlang_rtti.c"
                        backend_libs__erlang_rtti__TypeInfo_20_20 = (MR_Word) &backend_libs__erlang_rtti_scalar_common_1[2];
#line 2939 "backend_libs.erlang_rtti.c"
                        {
#line 2941 "backend_libs.erlang_rtti.c"
                          backend_libs__erlang_rtti__succeeded = mercury__builtin__unify_2_p_0(backend_libs__erlang_rtti__TypeInfo_20_20, ((MR_Box) (backend_libs__erlang_rtti__V_7_7)), ((MR_Box) (backend_libs__erlang_rtti__V_14_14)));
                        }
#line 46 "erlang_rtti.m"
                        if (backend_libs__erlang_rtti__succeeded)
#line 46 "erlang_rtti.m"
                          {
#line 2948 "backend_libs.erlang_rtti.c"
                            backend_libs__erlang_rtti__TypeInfo_21_21 = (MR_Word) &backend_libs__erlang_rtti_scalar_common_1[2];
#line 2950 "backend_libs.erlang_rtti.c"
                            {
#line 2952 "backend_libs.erlang_rtti.c"
                              backend_libs__erlang_rtti__succeeded = mercury__builtin__unify_2_p_0(backend_libs__erlang_rtti__TypeInfo_21_21, ((MR_Box) (backend_libs__erlang_rtti__V_8_8)), ((MR_Box) (backend_libs__erlang_rtti__V_15_15)));
                            }
#line 46 "erlang_rtti.m"
                            if (backend_libs__erlang_rtti__succeeded)
#line 2957 "backend_libs.erlang_rtti.c"
                              {
#line 2959 "backend_libs.erlang_rtti.c"
                                backend_libs__erlang_rtti__succeeded = backend_libs__erlang_rtti____Unify____erlang_type_ctor_details_0_0(backend_libs__erlang_rtti__V_9_9, backend_libs__erlang_rtti__V_16_16);
                              }
#line 46 "erlang_rtti.m"
                          }
#line 46 "erlang_rtti.m"
                      }
#line 46 "erlang_rtti.m"
                  }
#line 46 "erlang_rtti.m"
              }
#line 46 "erlang_rtti.m"
          }
#line 46 "erlang_rtti.m"
      }
#line 46 "erlang_rtti.m"
    return backend_libs__erlang_rtti__succeeded;
#line 46 "erlang_rtti.m"
  }
#line 46 "erlang_rtti.m"
}

#line 153 "erlang_rtti.m"
void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_rtti_data_0_0(
#line 153 "erlang_rtti.m"
  MR_Word * backend_libs__erlang_rtti__HeadVar__1_1,
#line 153 "erlang_rtti.m"
  MR_Word backend_libs__erlang_rtti__HeadVar__2_2,
#line 153 "erlang_rtti.m"
  MR_Word backend_libs__erlang_rtti__HeadVar__3_3)
#line 153 "erlang_rtti.m"
{
#line 153 "erlang_rtti.m"
  {
#line 153 "erlang_rtti.m"
    MR_bool backend_libs__erlang_rtti__succeeded;
#line 153 "erlang_rtti.m"
    MR_Integer backend_libs__erlang_rtti__CastX_115 = (MR_Integer) backend_libs__erlang_rtti__HeadVar__2_2;
#line 153 "erlang_rtti.m"
    MR_Integer backend_libs__erlang_rtti__CastY_116 = (MR_Integer) backend_libs__erlang_rtti__HeadVar__3_3;

#line 153 "erlang_rtti.m"
    backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__CastX_115 == backend_libs__erlang_rtti__CastY_116);
#line 153 "erlang_rtti.m"
    if (backend_libs__erlang_rtti__succeeded)
#line 3005 "backend_libs.erlang_rtti.c"
      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 0;
#line 153 "erlang_rtti.m"
    else
#line 153 "erlang_rtti.m"
#line 153 "erlang_rtti.m"
      switch (MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__2_2)) {
#line 153 "erlang_rtti.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 153 "erlang_rtti.m"
        case (MR_Integer) 0:
#line 153 "erlang_rtti.m"
          {
#line 153 "erlang_rtti.m"
            MR_Word backend_libs__erlang_rtti__V_133_133 = (MR_Word) MR_body(((MR_Word) backend_libs__erlang_rtti__HeadVar__2_2), (MR_Integer) 0);

#line 153 "erlang_rtti.m"
#line 153 "erlang_rtti.m"
            switch (MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) {
#line 153 "erlang_rtti.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 153 "erlang_rtti.m"
              case (MR_Integer) 0:
#line 153 "erlang_rtti.m"
                {
#line 153 "erlang_rtti.m"
                  MR_Word backend_libs__erlang_rtti__V_5_5 = (MR_Word) MR_body(((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3), (MR_Integer) 0);

#line 153 "erlang_rtti.m"
                  {
#line 153 "erlang_rtti.m"
                    backend_libs__erlang_rtti____Compare____erlang_type_ctor_data_0_0(backend_libs__erlang_rtti__HeadVar__1_1, backend_libs__erlang_rtti__V_133_133, backend_libs__erlang_rtti__V_5_5);
                  }
#line 153 "erlang_rtti.m"
                }
#line 153 "erlang_rtti.m"
                break;
#line 153 "erlang_rtti.m"
              case (MR_Integer) 1:
#line 3044 "backend_libs.erlang_rtti.c"
                *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
                break;
#line 153 "erlang_rtti.m"
              case (MR_Integer) 2:
#line 3050 "backend_libs.erlang_rtti.c"
                *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
                break;
#line 153 "erlang_rtti.m"
              case (MR_Integer) 3:
#line 153 "erlang_rtti.m"
#line 153 "erlang_rtti.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) {
#line 153 "erlang_rtti.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 153 "erlang_rtti.m"
                  case (MR_Integer) 0:
#line 3063 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
                    break;
#line 153 "erlang_rtti.m"
                  case (MR_Integer) 1:
#line 3069 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
                    break;
#line 153 "erlang_rtti.m"
                  case (MR_Integer) 2:
#line 3075 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
                    break;
#line 153 "erlang_rtti.m"
                }
#line 153 "erlang_rtti.m"
                break;
#line 153 "erlang_rtti.m"
            }
#line 153 "erlang_rtti.m"
          }
#line 153 "erlang_rtti.m"
          break;
#line 153 "erlang_rtti.m"
        case (MR_Integer) 1:
#line 153 "erlang_rtti.m"
          {
#line 153 "erlang_rtti.m"
            MR_Word backend_libs__erlang_rtti__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 0)));

#line 153 "erlang_rtti.m"
#line 153 "erlang_rtti.m"
            switch (MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) {
#line 153 "erlang_rtti.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 153 "erlang_rtti.m"
              case (MR_Integer) 0:
#line 3103 "backend_libs.erlang_rtti.c"
                *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                break;
#line 153 "erlang_rtti.m"
              case (MR_Integer) 1:
#line 153 "erlang_rtti.m"
                {
#line 153 "erlang_rtti.m"
                  MR_Word backend_libs__erlang_rtti__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)));

#line 153 "erlang_rtti.m"
                  {
#line 153 "erlang_rtti.m"
                    backend_libs__rtti____Compare____rtti_type_info_0_0(backend_libs__erlang_rtti__HeadVar__1_1, backend_libs__erlang_rtti__V_134_134, backend_libs__erlang_rtti__V_22_22);
                  }
#line 153 "erlang_rtti.m"
                }
#line 153 "erlang_rtti.m"
                break;
#line 153 "erlang_rtti.m"
              case (MR_Integer) 2:
#line 3125 "backend_libs.erlang_rtti.c"
                *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
                break;
#line 153 "erlang_rtti.m"
              case (MR_Integer) 3:
#line 153 "erlang_rtti.m"
#line 153 "erlang_rtti.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) {
#line 153 "erlang_rtti.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 153 "erlang_rtti.m"
                  case (MR_Integer) 0:
#line 3138 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
                    break;
#line 153 "erlang_rtti.m"
                  case (MR_Integer) 1:
#line 3144 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
                    break;
#line 153 "erlang_rtti.m"
                  case (MR_Integer) 2:
#line 3150 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
                    break;
#line 153 "erlang_rtti.m"
                }
#line 153 "erlang_rtti.m"
                break;
#line 153 "erlang_rtti.m"
            }
#line 153 "erlang_rtti.m"
          }
#line 153 "erlang_rtti.m"
          break;
#line 153 "erlang_rtti.m"
        case (MR_Integer) 2:
#line 153 "erlang_rtti.m"
          {
#line 153 "erlang_rtti.m"
            MR_Word backend_libs__erlang_rtti__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 0)));

#line 153 "erlang_rtti.m"
#line 153 "erlang_rtti.m"
            switch (MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) {
#line 153 "erlang_rtti.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 153 "erlang_rtti.m"
              case (MR_Integer) 0:
#line 3178 "backend_libs.erlang_rtti.c"
                *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                break;
#line 153 "erlang_rtti.m"
              case (MR_Integer) 1:
#line 3184 "backend_libs.erlang_rtti.c"
                *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                break;
#line 153 "erlang_rtti.m"
              case (MR_Integer) 2:
#line 153 "erlang_rtti.m"
                {
#line 153 "erlang_rtti.m"
                  MR_Word backend_libs__erlang_rtti__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)));

#line 153 "erlang_rtti.m"
                  {
#line 153 "erlang_rtti.m"
                    backend_libs__rtti____Compare____rtti_pseudo_type_info_0_0(backend_libs__erlang_rtti__HeadVar__1_1, backend_libs__erlang_rtti__V_130_130, backend_libs__erlang_rtti__V_39_39);
                  }
#line 153 "erlang_rtti.m"
                }
#line 153 "erlang_rtti.m"
                break;
#line 153 "erlang_rtti.m"
              case (MR_Integer) 3:
#line 153 "erlang_rtti.m"
#line 153 "erlang_rtti.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) {
#line 153 "erlang_rtti.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 153 "erlang_rtti.m"
                  case (MR_Integer) 0:
#line 3213 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
                    break;
#line 153 "erlang_rtti.m"
                  case (MR_Integer) 1:
#line 3219 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
                    break;
#line 153 "erlang_rtti.m"
                  case (MR_Integer) 2:
#line 3225 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
                    break;
#line 153 "erlang_rtti.m"
                }
#line 153 "erlang_rtti.m"
                break;
#line 153 "erlang_rtti.m"
            }
#line 153 "erlang_rtti.m"
          }
#line 153 "erlang_rtti.m"
          break;
#line 153 "erlang_rtti.m"
        case (MR_Integer) 3:
#line 153 "erlang_rtti.m"
#line 153 "erlang_rtti.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 0)))) {
#line 153 "erlang_rtti.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 153 "erlang_rtti.m"
            case (MR_Integer) 0:
#line 153 "erlang_rtti.m"
              {
#line 153 "erlang_rtti.m"
                MR_Word backend_libs__erlang_rtti__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 4)));
#line 153 "erlang_rtti.m"
                MR_String backend_libs__erlang_rtti__V_127_127 = ((MR_String) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 3)));
#line 153 "erlang_rtti.m"
                MR_Word backend_libs__erlang_rtti__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 2)));
#line 153 "erlang_rtti.m"
                MR_Word backend_libs__erlang_rtti__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 1)));

#line 153 "erlang_rtti.m"
#line 153 "erlang_rtti.m"
                switch (MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) {
#line 153 "erlang_rtti.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 153 "erlang_rtti.m"
                  case (MR_Integer) 0:
#line 3266 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                    break;
#line 153 "erlang_rtti.m"
                  case (MR_Integer) 1:
#line 3272 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                    break;
#line 153 "erlang_rtti.m"
                  case (MR_Integer) 2:
#line 3278 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                    break;
#line 153 "erlang_rtti.m"
                  case (MR_Integer) 3:
#line 153 "erlang_rtti.m"
#line 153 "erlang_rtti.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) {
#line 153 "erlang_rtti.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 153 "erlang_rtti.m"
                      case (MR_Integer) 0:
#line 153 "erlang_rtti.m"
                        {
#line 153 "erlang_rtti.m"
                          MR_Word backend_libs__erlang_rtti__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 1)));
#line 153 "erlang_rtti.m"
                          MR_Word backend_libs__erlang_rtti__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 2)));
#line 153 "erlang_rtti.m"
                          MR_String backend_libs__erlang_rtti__V_70_70 = ((MR_String) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 3)));
#line 153 "erlang_rtti.m"
                          MR_Word backend_libs__erlang_rtti__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 4)));
#line 153 "erlang_rtti.m"
                          MR_Word backend_libs__erlang_rtti__V_72_72;

#line 153 "erlang_rtti.m"
                          {
#line 153 "erlang_rtti.m"
                            backend_libs__rtti____Compare____tc_name_0_0(&backend_libs__erlang_rtti__V_72_72, backend_libs__erlang_rtti__V_129_129, backend_libs__erlang_rtti__V_68_68);
                          }
#line 3309 "backend_libs.erlang_rtti.c"
                          backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__V_72_72 == (MR_Integer) 0);
#line 153 "erlang_rtti.m"
                          backend_libs__erlang_rtti__succeeded = !(backend_libs__erlang_rtti__succeeded);
#line 153 "erlang_rtti.m"
                          if (backend_libs__erlang_rtti__succeeded)
#line 153 "erlang_rtti.m"
                            *backend_libs__erlang_rtti__HeadVar__1_1 = backend_libs__erlang_rtti__V_72_72;
#line 153 "erlang_rtti.m"
                          else
#line 153 "erlang_rtti.m"
                            {
#line 153 "erlang_rtti.m"
                              MR_Word backend_libs__erlang_rtti__V_73_73;

#line 153 "erlang_rtti.m"
                              {
#line 153 "erlang_rtti.m"
                                mdbcomp__sym_name____Compare____sym_name_0_0(&backend_libs__erlang_rtti__V_73_73, backend_libs__erlang_rtti__V_128_128, backend_libs__erlang_rtti__V_69_69);
                              }
#line 3329 "backend_libs.erlang_rtti.c"
                              backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__V_73_73 == (MR_Integer) 0);
#line 153 "erlang_rtti.m"
                              backend_libs__erlang_rtti__succeeded = !(backend_libs__erlang_rtti__succeeded);
#line 153 "erlang_rtti.m"
                              if (backend_libs__erlang_rtti__succeeded)
#line 153 "erlang_rtti.m"
                                *backend_libs__erlang_rtti__HeadVar__1_1 = backend_libs__erlang_rtti__V_73_73;
#line 153 "erlang_rtti.m"
                              else
#line 153 "erlang_rtti.m"
                                {
#line 153 "erlang_rtti.m"
                                  MR_Word backend_libs__erlang_rtti__V_74_74;

#line 153 "erlang_rtti.m"
                                  {
#line 153 "erlang_rtti.m"
                                    mercury__private_builtin__builtin_compare_string_3_p_0(&backend_libs__erlang_rtti__V_74_74, backend_libs__erlang_rtti__V_127_127, backend_libs__erlang_rtti__V_70_70);
                                  }
#line 3349 "backend_libs.erlang_rtti.c"
                                  backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__V_74_74 == (MR_Integer) 0);
#line 153 "erlang_rtti.m"
                                  backend_libs__erlang_rtti__succeeded = !(backend_libs__erlang_rtti__succeeded);
#line 153 "erlang_rtti.m"
                                  if (backend_libs__erlang_rtti__succeeded)
#line 153 "erlang_rtti.m"
                                    *backend_libs__erlang_rtti__HeadVar__1_1 = backend_libs__erlang_rtti__V_74_74;
#line 153 "erlang_rtti.m"
                                  else
#line 153 "erlang_rtti.m"
                                    {
#line 153 "erlang_rtti.m"
                                      backend_libs__rtti____Compare____base_typeclass_info_0_0(backend_libs__erlang_rtti__HeadVar__1_1, backend_libs__erlang_rtti__V_126_126, backend_libs__erlang_rtti__V_71_71);
                                    }
#line 153 "erlang_rtti.m"
                                }
#line 153 "erlang_rtti.m"
                            }
#line 153 "erlang_rtti.m"
                        }
#line 153 "erlang_rtti.m"
                        break;
#line 153 "erlang_rtti.m"
                      case (MR_Integer) 1:
#line 3374 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
                        break;
#line 153 "erlang_rtti.m"
                      case (MR_Integer) 2:
#line 3380 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
                        break;
#line 153 "erlang_rtti.m"
                    }
#line 153 "erlang_rtti.m"
                    break;
#line 153 "erlang_rtti.m"
                }
#line 153 "erlang_rtti.m"
              }
#line 153 "erlang_rtti.m"
              break;
#line 153 "erlang_rtti.m"
            case (MR_Integer) 1:
#line 153 "erlang_rtti.m"
              {
#line 153 "erlang_rtti.m"
                MR_Word backend_libs__erlang_rtti__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 1)));

#line 153 "erlang_rtti.m"
#line 153 "erlang_rtti.m"
                switch (MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) {
#line 153 "erlang_rtti.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 153 "erlang_rtti.m"
                  case (MR_Integer) 0:
#line 3408 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                    break;
#line 153 "erlang_rtti.m"
                  case (MR_Integer) 1:
#line 3414 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                    break;
#line 153 "erlang_rtti.m"
                  case (MR_Integer) 2:
#line 3420 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                    break;
#line 153 "erlang_rtti.m"
                  case (MR_Integer) 3:
#line 153 "erlang_rtti.m"
#line 153 "erlang_rtti.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) {
#line 153 "erlang_rtti.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 153 "erlang_rtti.m"
                      case (MR_Integer) 0:
#line 3433 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                        break;
#line 153 "erlang_rtti.m"
                      case (MR_Integer) 1:
#line 153 "erlang_rtti.m"
                        {
#line 153 "erlang_rtti.m"
                          MR_Word backend_libs__erlang_rtti__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 1)));

#line 153 "erlang_rtti.m"
                          {
#line 153 "erlang_rtti.m"
                            backend_libs__rtti____Compare____tc_decl_0_0(backend_libs__erlang_rtti__HeadVar__1_1, backend_libs__erlang_rtti__V_131_131, backend_libs__erlang_rtti__V_97_97);
                          }
#line 153 "erlang_rtti.m"
                        }
#line 153 "erlang_rtti.m"
                        break;
#line 153 "erlang_rtti.m"
                      case (MR_Integer) 2:
#line 3455 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
                        break;
#line 153 "erlang_rtti.m"
                    }
#line 153 "erlang_rtti.m"
                    break;
#line 153 "erlang_rtti.m"
                }
#line 153 "erlang_rtti.m"
              }
#line 153 "erlang_rtti.m"
              break;
#line 153 "erlang_rtti.m"
            case (MR_Integer) 2:
#line 153 "erlang_rtti.m"
              {
#line 153 "erlang_rtti.m"
                MR_Word backend_libs__erlang_rtti__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 1)));

#line 153 "erlang_rtti.m"
#line 153 "erlang_rtti.m"
                switch (MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) {
#line 153 "erlang_rtti.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 153 "erlang_rtti.m"
                  case (MR_Integer) 0:
#line 3483 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                    break;
#line 153 "erlang_rtti.m"
                  case (MR_Integer) 1:
#line 3489 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                    break;
#line 153 "erlang_rtti.m"
                  case (MR_Integer) 2:
#line 3495 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                    break;
#line 153 "erlang_rtti.m"
                  case (MR_Integer) 3:
#line 153 "erlang_rtti.m"
#line 153 "erlang_rtti.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) {
#line 153 "erlang_rtti.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 153 "erlang_rtti.m"
                      case (MR_Integer) 0:
#line 3508 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                        break;
#line 153 "erlang_rtti.m"
                      case (MR_Integer) 1:
#line 3514 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                        break;
#line 153 "erlang_rtti.m"
                      case (MR_Integer) 2:
#line 153 "erlang_rtti.m"
                        {
#line 153 "erlang_rtti.m"
                          MR_Word backend_libs__erlang_rtti__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 1)));

#line 153 "erlang_rtti.m"
                          {
#line 153 "erlang_rtti.m"
                            backend_libs__rtti____Compare____tc_instance_0_0(backend_libs__erlang_rtti__HeadVar__1_1, backend_libs__erlang_rtti__V_132_132, backend_libs__erlang_rtti__V_114_114);
                          }
#line 153 "erlang_rtti.m"
                        }
#line 153 "erlang_rtti.m"
                        break;
#line 153 "erlang_rtti.m"
                    }
#line 153 "erlang_rtti.m"
                    break;
#line 153 "erlang_rtti.m"
                }
#line 153 "erlang_rtti.m"
              }
#line 153 "erlang_rtti.m"
              break;
#line 153 "erlang_rtti.m"
          }
#line 153 "erlang_rtti.m"
          break;
#line 153 "erlang_rtti.m"
      }
#line 153 "erlang_rtti.m"
  }
#line 153 "erlang_rtti.m"
}

#line 153 "erlang_rtti.m"
MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_rtti_data_0_0(
#line 153 "erlang_rtti.m"
  MR_Word backend_libs__erlang_rtti__HeadVar__1_1,
#line 153 "erlang_rtti.m"
  MR_Word backend_libs__erlang_rtti__HeadVar__2_2)
#line 153 "erlang_rtti.m"
{
#line 153 "erlang_rtti.m"
  {
#line 153 "erlang_rtti.m"
    MR_bool backend_libs__erlang_rtti__succeeded;
#line 153 "erlang_rtti.m"
    MR_Integer backend_libs__erlang_rtti__CastX_21 = (MR_Integer) backend_libs__erlang_rtti__HeadVar__1_1;
#line 153 "erlang_rtti.m"
    MR_Integer backend_libs__erlang_rtti__CastY_22 = (MR_Integer) backend_libs__erlang_rtti__HeadVar__2_2;

#line 153 "erlang_rtti.m"
    backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__CastX_21 == backend_libs__erlang_rtti__CastY_22);
#line 153 "erlang_rtti.m"
    if (backend_libs__erlang_rtti__succeeded)
#line 153 "erlang_rtti.m"
      backend_libs__erlang_rtti__succeeded = MR_TRUE;
#line 153 "erlang_rtti.m"
    else
#line 153 "erlang_rtti.m"
#line 153 "erlang_rtti.m"
      switch (MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__1_1)) {
#line 153 "erlang_rtti.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 153 "erlang_rtti.m"
        case (MR_Integer) 0:
#line 153 "erlang_rtti.m"
          {
#line 153 "erlang_rtti.m"
            MR_Word backend_libs__erlang_rtti__V_3_3 = (MR_Word) MR_body(((MR_Word) backend_libs__erlang_rtti__HeadVar__1_1), (MR_Integer) 0);
#line 153 "erlang_rtti.m"
            MR_Word backend_libs__erlang_rtti__V_4_4;

#line 153 "erlang_rtti.m"
            backend_libs__erlang_rtti__succeeded = ((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 153 "erlang_rtti.m"
            if (backend_libs__erlang_rtti__succeeded)
#line 153 "erlang_rtti.m"
              {
#line 153 "erlang_rtti.m"
                backend_libs__erlang_rtti__V_4_4 = (MR_Word) MR_body(((MR_Word) backend_libs__erlang_rtti__HeadVar__2_2), (MR_Integer) 0);
#line 3603 "backend_libs.erlang_rtti.c"
                {
#line 3605 "backend_libs.erlang_rtti.c"
                  backend_libs__erlang_rtti__succeeded = backend_libs__erlang_rtti____Unify____erlang_type_ctor_data_0_0(backend_libs__erlang_rtti__V_3_3, backend_libs__erlang_rtti__V_4_4);
                }
#line 153 "erlang_rtti.m"
              }
#line 153 "erlang_rtti.m"
          }
#line 153 "erlang_rtti.m"
          break;
#line 153 "erlang_rtti.m"
        case (MR_Integer) 1:
#line 153 "erlang_rtti.m"
          {
#line 153 "erlang_rtti.m"
            MR_Word backend_libs__erlang_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__erlang_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 153 "erlang_rtti.m"
            MR_Word backend_libs__erlang_rtti__V_6_6;

#line 153 "erlang_rtti.m"
            backend_libs__erlang_rtti__succeeded = ((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 153 "erlang_rtti.m"
            if (backend_libs__erlang_rtti__succeeded)
#line 153 "erlang_rtti.m"
              {
#line 153 "erlang_rtti.m"
                backend_libs__erlang_rtti__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 3631 "backend_libs.erlang_rtti.c"
                {
#line 3633 "backend_libs.erlang_rtti.c"
                  backend_libs__erlang_rtti__succeeded = backend_libs__rtti____Unify____rtti_type_info_0_0(backend_libs__erlang_rtti__V_5_5, backend_libs__erlang_rtti__V_6_6);
                }
#line 153 "erlang_rtti.m"
              }
#line 153 "erlang_rtti.m"
          }
#line 153 "erlang_rtti.m"
          break;
#line 153 "erlang_rtti.m"
        case (MR_Integer) 2:
#line 153 "erlang_rtti.m"
          {
#line 153 "erlang_rtti.m"
            MR_Word backend_libs__erlang_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__erlang_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 153 "erlang_rtti.m"
            MR_Word backend_libs__erlang_rtti__V_8_8;

#line 153 "erlang_rtti.m"
            backend_libs__erlang_rtti__succeeded = ((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 153 "erlang_rtti.m"
            if (backend_libs__erlang_rtti__succeeded)
#line 153 "erlang_rtti.m"
              {
#line 153 "erlang_rtti.m"
                backend_libs__erlang_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 3659 "backend_libs.erlang_rtti.c"
                {
#line 3661 "backend_libs.erlang_rtti.c"
                  backend_libs__erlang_rtti__succeeded = backend_libs__rtti____Unify____rtti_pseudo_type_info_0_0(backend_libs__erlang_rtti__V_7_7, backend_libs__erlang_rtti__V_8_8);
                }
#line 153 "erlang_rtti.m"
              }
#line 153 "erlang_rtti.m"
          }
#line 153 "erlang_rtti.m"
          break;
#line 153 "erlang_rtti.m"
        case (MR_Integer) 3:
#line 153 "erlang_rtti.m"
#line 153 "erlang_rtti.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__1_1, (MR_Integer) 0)))) {
#line 153 "erlang_rtti.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 153 "erlang_rtti.m"
            case (MR_Integer) 0:
#line 153 "erlang_rtti.m"
              {
#line 153 "erlang_rtti.m"
                MR_Word backend_libs__erlang_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 153 "erlang_rtti.m"
                MR_Word backend_libs__erlang_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__1_1, (MR_Integer) 2)));
#line 153 "erlang_rtti.m"
                MR_String backend_libs__erlang_rtti__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__1_1, (MR_Integer) 3)));
#line 153 "erlang_rtti.m"
                MR_Word backend_libs__erlang_rtti__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__1_1, (MR_Integer) 4)));
#line 153 "erlang_rtti.m"
                MR_Word backend_libs__erlang_rtti__V_13_13;
#line 153 "erlang_rtti.m"
                MR_Word backend_libs__erlang_rtti__V_14_14;
#line 153 "erlang_rtti.m"
                MR_String backend_libs__erlang_rtti__V_15_15;
#line 153 "erlang_rtti.m"
                MR_Word backend_libs__erlang_rtti__V_16_16;

#line 153 "erlang_rtti.m"
                backend_libs__erlang_rtti__succeeded = ((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 153 "erlang_rtti.m"
                if (backend_libs__erlang_rtti__succeeded)
#line 153 "erlang_rtti.m"
                  {
#line 153 "erlang_rtti.m"
                    backend_libs__erlang_rtti__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 153 "erlang_rtti.m"
                    backend_libs__erlang_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 2)));
#line 153 "erlang_rtti.m"
                    backend_libs__erlang_rtti__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 3)));
#line 153 "erlang_rtti.m"
                    backend_libs__erlang_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 4)));
#line 3712 "backend_libs.erlang_rtti.c"
                    {
#line 3714 "backend_libs.erlang_rtti.c"
                      backend_libs__erlang_rtti__succeeded = backend_libs__rtti____Unify____tc_name_0_0(backend_libs__erlang_rtti__V_9_9, backend_libs__erlang_rtti__V_13_13);
                    }
#line 153 "erlang_rtti.m"
                    if (backend_libs__erlang_rtti__succeeded)
#line 153 "erlang_rtti.m"
                      {
#line 3721 "backend_libs.erlang_rtti.c"
                        {
#line 3723 "backend_libs.erlang_rtti.c"
                          backend_libs__erlang_rtti__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(backend_libs__erlang_rtti__V_10_10, backend_libs__erlang_rtti__V_14_14);
                        }
#line 153 "erlang_rtti.m"
                        if (backend_libs__erlang_rtti__succeeded)
#line 153 "erlang_rtti.m"
                          {
#line 3730 "backend_libs.erlang_rtti.c"
                            backend_libs__erlang_rtti__succeeded = (strcmp(backend_libs__erlang_rtti__V_11_11, backend_libs__erlang_rtti__V_15_15) == 0);
#line 153 "erlang_rtti.m"
                            if (backend_libs__erlang_rtti__succeeded)
#line 3734 "backend_libs.erlang_rtti.c"
                              {
#line 3736 "backend_libs.erlang_rtti.c"
                                backend_libs__erlang_rtti__succeeded = backend_libs__rtti____Unify____base_typeclass_info_0_0(backend_libs__erlang_rtti__V_12_12, backend_libs__erlang_rtti__V_16_16);
                              }
#line 153 "erlang_rtti.m"
                          }
#line 153 "erlang_rtti.m"
                      }
#line 153 "erlang_rtti.m"
                  }
#line 153 "erlang_rtti.m"
              }
#line 153 "erlang_rtti.m"
              break;
#line 153 "erlang_rtti.m"
            case (MR_Integer) 1:
#line 153 "erlang_rtti.m"
              {
#line 153 "erlang_rtti.m"
                MR_Word backend_libs__erlang_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 153 "erlang_rtti.m"
                MR_Word backend_libs__erlang_rtti__V_18_18;

#line 153 "erlang_rtti.m"
                backend_libs__erlang_rtti__succeeded = ((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 153 "erlang_rtti.m"
                if (backend_libs__erlang_rtti__succeeded)
#line 153 "erlang_rtti.m"
                  {
#line 153 "erlang_rtti.m"
                    backend_libs__erlang_rtti__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 3766 "backend_libs.erlang_rtti.c"
                    {
#line 3768 "backend_libs.erlang_rtti.c"
                      backend_libs__erlang_rtti__succeeded = backend_libs__rtti____Unify____tc_decl_0_0(backend_libs__erlang_rtti__V_17_17, backend_libs__erlang_rtti__V_18_18);
                    }
#line 153 "erlang_rtti.m"
                  }
#line 153 "erlang_rtti.m"
              }
#line 153 "erlang_rtti.m"
              break;
#line 153 "erlang_rtti.m"
            case (MR_Integer) 2:
#line 153 "erlang_rtti.m"
              {
#line 153 "erlang_rtti.m"
                MR_Word backend_libs__erlang_rtti__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 153 "erlang_rtti.m"
                MR_Word backend_libs__erlang_rtti__V_20_20;

#line 153 "erlang_rtti.m"
                backend_libs__erlang_rtti__succeeded = ((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 153 "erlang_rtti.m"
                if (backend_libs__erlang_rtti__succeeded)
#line 153 "erlang_rtti.m"
                  {
#line 153 "erlang_rtti.m"
                    backend_libs__erlang_rtti__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 3794 "backend_libs.erlang_rtti.c"
                    {
#line 3796 "backend_libs.erlang_rtti.c"
                      backend_libs__erlang_rtti__succeeded = backend_libs__rtti____Unify____tc_instance_0_0(backend_libs__erlang_rtti__V_19_19, backend_libs__erlang_rtti__V_20_20);
                    }
#line 153 "erlang_rtti.m"
                  }
#line 153 "erlang_rtti.m"
              }
#line 153 "erlang_rtti.m"
              break;
#line 153 "erlang_rtti.m"
          }
#line 153 "erlang_rtti.m"
          break;
#line 153 "erlang_rtti.m"
      }
#line 153 "erlang_rtti.m"
    return backend_libs__erlang_rtti__succeeded;
#line 153 "erlang_rtti.m"
  }
#line 153 "erlang_rtti.m"
}

#line 133 "erlang_rtti.m"
void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_impl_ctor_0_0(
#line 133 "erlang_rtti.m"
  MR_Word * backend_libs__erlang_rtti__HeadVar__1_1,
#line 133 "erlang_rtti.m"
  MR_Word backend_libs__erlang_rtti__HeadVar__2_2,
#line 133 "erlang_rtti.m"
  MR_Word backend_libs__erlang_rtti__HeadVar__3_3)
#line 133 "erlang_rtti.m"
{
#line 133 "erlang_rtti.m"
  {
#line 133 "erlang_rtti.m"
    MR_bool backend_libs__erlang_rtti__succeeded;
#line 133 "erlang_rtti.m"
    MR_Integer backend_libs__erlang_rtti__Cast_HeadVar1_4 = (MR_Integer) backend_libs__erlang_rtti__HeadVar__2_2;
#line 133 "erlang_rtti.m"
    MR_Integer backend_libs__erlang_rtti__Cast_HeadVar2_5 = (MR_Integer) backend_libs__erlang_rtti__HeadVar__3_3;

#line 133 "erlang_rtti.m"
    {
#line 133 "erlang_rtti.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(backend_libs__erlang_rtti__HeadVar__1_1, backend_libs__erlang_rtti__Cast_HeadVar1_4, backend_libs__erlang_rtti__Cast_HeadVar2_5);
    }
#line 133 "erlang_rtti.m"
  }
#line 133 "erlang_rtti.m"
}

#line 133 "erlang_rtti.m"
MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_impl_ctor_0_0(
#line 133 "erlang_rtti.m"
  MR_Word backend_libs__erlang_rtti__HeadVar__2_1,
#line 133 "erlang_rtti.m"
  MR_Word backend_libs__erlang_rtti__HeadVar__2_2)
#line 133 "erlang_rtti.m"
{
#line 3857 "backend_libs.erlang_rtti.c"
  {
#line 3859 "backend_libs.erlang_rtti.c"
    MR_bool backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__HeadVar__2_1 == backend_libs__erlang_rtti__HeadVar__2_2);

#line 3862 "backend_libs.erlang_rtti.c"
    return backend_libs__erlang_rtti__succeeded;
#line 3864 "backend_libs.erlang_rtti.c"
  }
#line 133 "erlang_rtti.m"
}

#line 108 "erlang_rtti.m"
void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_du_functor_0_0(
#line 108 "erlang_rtti.m"
  MR_Word * backend_libs__erlang_rtti__HeadVar__1_1,
#line 108 "erlang_rtti.m"
  MR_Word backend_libs__erlang_rtti__HeadVar__2_2,
#line 108 "erlang_rtti.m"
  MR_Word backend_libs__erlang_rtti__HeadVar__3_3)
#line 108 "erlang_rtti.m"
{
#line 108 "erlang_rtti.m"
  {
#line 108 "erlang_rtti.m"
    MR_bool backend_libs__erlang_rtti__succeeded;
#line 108 "erlang_rtti.m"
    MR_Integer backend_libs__erlang_rtti__CastX_24 = (MR_Integer) backend_libs__erlang_rtti__HeadVar__2_2;
#line 108 "erlang_rtti.m"
    MR_Integer backend_libs__erlang_rtti__CastY_25 = (MR_Integer) backend_libs__erlang_rtti__HeadVar__3_3;

#line 108 "erlang_rtti.m"
    backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__CastX_24 == backend_libs__erlang_rtti__CastY_25);
#line 108 "erlang_rtti.m"
    if (backend_libs__erlang_rtti__succeeded)
#line 3893 "backend_libs.erlang_rtti.c"
      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 0;
#line 108 "erlang_rtti.m"
    else
#line 108 "erlang_rtti.m"
      {
#line 108 "erlang_rtti.m"
        MR_String backend_libs__erlang_rtti__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 108 "erlang_rtti.m"
        MR_Integer backend_libs__erlang_rtti__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 108 "erlang_rtti.m"
        MR_Integer backend_libs__erlang_rtti__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 2)));
#line 108 "erlang_rtti.m"
        MR_Integer backend_libs__erlang_rtti__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 3)));
#line 108 "erlang_rtti.m"
        MR_Word backend_libs__erlang_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 4)));
#line 108 "erlang_rtti.m"
        MR_Word backend_libs__erlang_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 5)));
#line 108 "erlang_rtti.m"
        MR_Word backend_libs__erlang_rtti__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 6)));
#line 108 "erlang_rtti.m"
        MR_String backend_libs__erlang_rtti__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)));
#line 108 "erlang_rtti.m"
        MR_Integer backend_libs__erlang_rtti__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 1)));
#line 108 "erlang_rtti.m"
        MR_Integer backend_libs__erlang_rtti__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 2)));
#line 108 "erlang_rtti.m"
        MR_Integer backend_libs__erlang_rtti__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 3)));
#line 108 "erlang_rtti.m"
        MR_Word backend_libs__erlang_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 4)));
#line 108 "erlang_rtti.m"
        MR_Word backend_libs__erlang_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 5)));
#line 108 "erlang_rtti.m"
        MR_Word backend_libs__erlang_rtti__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 6)));
#line 108 "erlang_rtti.m"
        MR_Word backend_libs__erlang_rtti__V_18_18;

#line 108 "erlang_rtti.m"
        {
#line 108 "erlang_rtti.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(&backend_libs__erlang_rtti__V_18_18, backend_libs__erlang_rtti__V_4_4, backend_libs__erlang_rtti__V_11_11);
        }
#line 3935 "backend_libs.erlang_rtti.c"
        backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__V_18_18 == (MR_Integer) 0);
#line 108 "erlang_rtti.m"
        backend_libs__erlang_rtti__succeeded = !(backend_libs__erlang_rtti__succeeded);
#line 108 "erlang_rtti.m"
        if (backend_libs__erlang_rtti__succeeded)
#line 108 "erlang_rtti.m"
          *backend_libs__erlang_rtti__HeadVar__1_1 = backend_libs__erlang_rtti__V_18_18;
#line 108 "erlang_rtti.m"
        else
#line 108 "erlang_rtti.m"
          {
#line 108 "erlang_rtti.m"
            MR_Word backend_libs__erlang_rtti__V_19_19;

#line 108 "erlang_rtti.m"
            {
#line 108 "erlang_rtti.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__erlang_rtti__V_19_19, backend_libs__erlang_rtti__V_5_5, backend_libs__erlang_rtti__V_12_12);
            }
#line 3955 "backend_libs.erlang_rtti.c"
            backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__V_19_19 == (MR_Integer) 0);
#line 108 "erlang_rtti.m"
            backend_libs__erlang_rtti__succeeded = !(backend_libs__erlang_rtti__succeeded);
#line 108 "erlang_rtti.m"
            if (backend_libs__erlang_rtti__succeeded)
#line 108 "erlang_rtti.m"
              *backend_libs__erlang_rtti__HeadVar__1_1 = backend_libs__erlang_rtti__V_19_19;
#line 108 "erlang_rtti.m"
            else
#line 108 "erlang_rtti.m"
              {
#line 108 "erlang_rtti.m"
                MR_Word backend_libs__erlang_rtti__V_20_20;

#line 108 "erlang_rtti.m"
                {
#line 108 "erlang_rtti.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__erlang_rtti__V_20_20, backend_libs__erlang_rtti__V_6_6, backend_libs__erlang_rtti__V_13_13);
                }
#line 3975 "backend_libs.erlang_rtti.c"
                backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__V_20_20 == (MR_Integer) 0);
#line 108 "erlang_rtti.m"
                backend_libs__erlang_rtti__succeeded = !(backend_libs__erlang_rtti__succeeded);
#line 108 "erlang_rtti.m"
                if (backend_libs__erlang_rtti__succeeded)
#line 108 "erlang_rtti.m"
                  *backend_libs__erlang_rtti__HeadVar__1_1 = backend_libs__erlang_rtti__V_20_20;
#line 108 "erlang_rtti.m"
                else
#line 108 "erlang_rtti.m"
                  {
#line 108 "erlang_rtti.m"
                    MR_Word backend_libs__erlang_rtti__V_21_21;

#line 108 "erlang_rtti.m"
                    {
#line 108 "erlang_rtti.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&backend_libs__erlang_rtti__V_21_21, backend_libs__erlang_rtti__V_7_7, backend_libs__erlang_rtti__V_14_14);
                    }
#line 3995 "backend_libs.erlang_rtti.c"
                    backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__V_21_21 == (MR_Integer) 0);
#line 108 "erlang_rtti.m"
                    backend_libs__erlang_rtti__succeeded = !(backend_libs__erlang_rtti__succeeded);
#line 108 "erlang_rtti.m"
                    if (backend_libs__erlang_rtti__succeeded)
#line 108 "erlang_rtti.m"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = backend_libs__erlang_rtti__V_21_21;
#line 108 "erlang_rtti.m"
                    else
#line 108 "erlang_rtti.m"
                      {
#line 108 "erlang_rtti.m"
                        MR_Word backend_libs__erlang_rtti__V_22_22;
#line 108 "erlang_rtti.m"
                        MR_String backend_libs__erlang_rtti__V_33_33 = (MR_String) backend_libs__erlang_rtti__V_8_8;
#line 108 "erlang_rtti.m"
                        MR_String backend_libs__erlang_rtti__V_34_34 = (MR_String) backend_libs__erlang_rtti__V_15_15;

#line 108 "erlang_rtti.m"
                        {
#line 108 "erlang_rtti.m"
                          mercury__private_builtin__builtin_compare_string_3_p_0(&backend_libs__erlang_rtti__V_22_22, backend_libs__erlang_rtti__V_33_33, backend_libs__erlang_rtti__V_34_34);
                        }
#line 4019 "backend_libs.erlang_rtti.c"
                        backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__V_22_22 == (MR_Integer) 0);
#line 108 "erlang_rtti.m"
                        backend_libs__erlang_rtti__succeeded = !(backend_libs__erlang_rtti__succeeded);
#line 108 "erlang_rtti.m"
                        if (backend_libs__erlang_rtti__succeeded)
#line 108 "erlang_rtti.m"
                          *backend_libs__erlang_rtti__HeadVar__1_1 = backend_libs__erlang_rtti__V_22_22;
#line 108 "erlang_rtti.m"
                        else
#line 108 "erlang_rtti.m"
                          {
#line 108 "erlang_rtti.m"
                            MR_Word backend_libs__erlang_rtti__V_23_23;

#line 108 "erlang_rtti.m"
                            {
#line 108 "erlang_rtti.m"
                              mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__erlang_rtti_scalar_common_1[0], &backend_libs__erlang_rtti__V_23_23, ((MR_Box) (backend_libs__erlang_rtti__V_9_9)), ((MR_Box) (backend_libs__erlang_rtti__V_16_16)));
                            }
#line 4039 "backend_libs.erlang_rtti.c"
                            backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__V_23_23 == (MR_Integer) 0);
#line 108 "erlang_rtti.m"
                            backend_libs__erlang_rtti__succeeded = !(backend_libs__erlang_rtti__succeeded);
#line 108 "erlang_rtti.m"
                            if (backend_libs__erlang_rtti__succeeded)
#line 108 "erlang_rtti.m"
                              *backend_libs__erlang_rtti__HeadVar__1_1 = backend_libs__erlang_rtti__V_23_23;
#line 108 "erlang_rtti.m"
                            else
#line 108 "erlang_rtti.m"
                              {
#line 108 "erlang_rtti.m"
                                {
#line 108 "erlang_rtti.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__erlang_rtti_scalar_common_1[1], backend_libs__erlang_rtti__HeadVar__1_1, ((MR_Box) (backend_libs__erlang_rtti__V_10_10)), ((MR_Box) (backend_libs__erlang_rtti__V_17_17)));
                                }
#line 108 "erlang_rtti.m"
                              }
#line 108 "erlang_rtti.m"
                          }
#line 108 "erlang_rtti.m"
                      }
#line 108 "erlang_rtti.m"
                  }
#line 108 "erlang_rtti.m"
              }
#line 108 "erlang_rtti.m"
          }
#line 108 "erlang_rtti.m"
      }
#line 108 "erlang_rtti.m"
  }
#line 108 "erlang_rtti.m"
}

#line 108 "erlang_rtti.m"
MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_du_functor_0_0(
#line 108 "erlang_rtti.m"
  MR_Word backend_libs__erlang_rtti__HeadVar__1_1,
#line 108 "erlang_rtti.m"
  MR_Word backend_libs__erlang_rtti__HeadVar__2_2)
#line 108 "erlang_rtti.m"
{
#line 108 "erlang_rtti.m"
  {
#line 108 "erlang_rtti.m"
    MR_bool backend_libs__erlang_rtti__succeeded;
#line 108 "erlang_rtti.m"
    MR_Integer backend_libs__erlang_rtti__CastX_17 = (MR_Integer) backend_libs__erlang_rtti__HeadVar__1_1;
#line 108 "erlang_rtti.m"
    MR_Integer backend_libs__erlang_rtti__CastY_18 = (MR_Integer) backend_libs__erlang_rtti__HeadVar__2_2;

#line 108 "erlang_rtti.m"
    backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__CastX_17 == backend_libs__erlang_rtti__CastY_18);
#line 108 "erlang_rtti.m"
    if (backend_libs__erlang_rtti__succeeded)
#line 108 "erlang_rtti.m"
      backend_libs__erlang_rtti__succeeded = MR_TRUE;
#line 108 "erlang_rtti.m"
    else
#line 108 "erlang_rtti.m"
      {
#line 108 "erlang_rtti.m"
        MR_Word backend_libs__erlang_rtti__TypeInfo_19_19;
#line 108 "erlang_rtti.m"
        MR_Word backend_libs__erlang_rtti__TypeInfo_20_20;
#line 108 "erlang_rtti.m"
        MR_String backend_libs__erlang_rtti__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__1_1, (MR_Integer) 0)));
#line 108 "erlang_rtti.m"
        MR_Integer backend_libs__erlang_rtti__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__1_1, (MR_Integer) 1)));
#line 108 "erlang_rtti.m"
        MR_Integer backend_libs__erlang_rtti__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__1_1, (MR_Integer) 2)));
#line 108 "erlang_rtti.m"
        MR_Integer backend_libs__erlang_rtti__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__1_1, (MR_Integer) 3)));
#line 108 "erlang_rtti.m"
        MR_Word backend_libs__erlang_rtti__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__1_1, (MR_Integer) 4)));
#line 108 "erlang_rtti.m"
        MR_Word backend_libs__erlang_rtti__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__1_1, (MR_Integer) 5)));
#line 108 "erlang_rtti.m"
        MR_Word backend_libs__erlang_rtti__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__1_1, (MR_Integer) 6)));
#line 108 "erlang_rtti.m"
        MR_String backend_libs__erlang_rtti__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 0)));
#line 108 "erlang_rtti.m"
        MR_Integer backend_libs__erlang_rtti__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 1)));
#line 108 "erlang_rtti.m"
        MR_Integer backend_libs__erlang_rtti__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 2)));
#line 108 "erlang_rtti.m"
        MR_Integer backend_libs__erlang_rtti__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 3)));
#line 108 "erlang_rtti.m"
        MR_Word backend_libs__erlang_rtti__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 4)));
#line 108 "erlang_rtti.m"
        MR_Word backend_libs__erlang_rtti__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 5)));
#line 108 "erlang_rtti.m"
        MR_Word backend_libs__erlang_rtti__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 6)));
#line 127 "erlang_rtti.m"
        MR_Integer backend_libs__erlang_rtti__CastX_23;
#line 127 "erlang_rtti.m"
        MR_Integer backend_libs__erlang_rtti__CastY_24;

#line 4140 "backend_libs.erlang_rtti.c"
        backend_libs__erlang_rtti__succeeded = (strcmp(backend_libs__erlang_rtti__V_3_3, backend_libs__erlang_rtti__V_10_10) == 0);
#line 108 "erlang_rtti.m"
        if (backend_libs__erlang_rtti__succeeded)
#line 108 "erlang_rtti.m"
          {
#line 4146 "backend_libs.erlang_rtti.c"
            backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__V_4_4 == backend_libs__erlang_rtti__V_11_11);
#line 108 "erlang_rtti.m"
            if (backend_libs__erlang_rtti__succeeded)
#line 108 "erlang_rtti.m"
              {
#line 4152 "backend_libs.erlang_rtti.c"
                backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__V_5_5 == backend_libs__erlang_rtti__V_12_12);
#line 108 "erlang_rtti.m"
                if (backend_libs__erlang_rtti__succeeded)
#line 108 "erlang_rtti.m"
                  {
#line 4158 "backend_libs.erlang_rtti.c"
                    backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__V_6_6 == backend_libs__erlang_rtti__V_13_13);
#line 108 "erlang_rtti.m"
                    if (backend_libs__erlang_rtti__succeeded)
#line 108 "erlang_rtti.m"
                      {
#line 127 "erlang_rtti.m"
                        backend_libs__erlang_rtti__CastX_23 = (MR_Integer) backend_libs__erlang_rtti__V_7_7;
#line 127 "erlang_rtti.m"
                        backend_libs__erlang_rtti__CastY_24 = (MR_Integer) backend_libs__erlang_rtti__V_14_14;
#line 127 "erlang_rtti.m"
                        backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__CastX_23 == backend_libs__erlang_rtti__CastY_24);
#line 127 "erlang_rtti.m"
                        if (backend_libs__erlang_rtti__succeeded)
#line 127 "erlang_rtti.m"
                          backend_libs__erlang_rtti__succeeded = MR_TRUE;
#line 127 "erlang_rtti.m"
                        else
#line 127 "erlang_rtti.m"
                          {
#line 127 "erlang_rtti.m"
                            MR_String backend_libs__erlang_rtti__V_21_21 = (MR_String) backend_libs__erlang_rtti__V_7_7;
#line 127 "erlang_rtti.m"
                            MR_String backend_libs__erlang_rtti__V_22_22 = (MR_String) backend_libs__erlang_rtti__V_14_14;

#line 4183 "backend_libs.erlang_rtti.c"
                            backend_libs__erlang_rtti__succeeded = (strcmp(backend_libs__erlang_rtti__V_21_21, backend_libs__erlang_rtti__V_22_22) == 0);
#line 127 "erlang_rtti.m"
                          }
#line 108 "erlang_rtti.m"
                        if (backend_libs__erlang_rtti__succeeded)
#line 108 "erlang_rtti.m"
                          {
#line 4191 "backend_libs.erlang_rtti.c"
                            backend_libs__erlang_rtti__TypeInfo_19_19 = (MR_Word) &backend_libs__erlang_rtti_scalar_common_1[0];
#line 4193 "backend_libs.erlang_rtti.c"
                            {
#line 4195 "backend_libs.erlang_rtti.c"
                              backend_libs__erlang_rtti__succeeded = mercury__builtin__unify_2_p_0(backend_libs__erlang_rtti__TypeInfo_19_19, ((MR_Box) (backend_libs__erlang_rtti__V_8_8)), ((MR_Box) (backend_libs__erlang_rtti__V_15_15)));
                            }
#line 108 "erlang_rtti.m"
                            if (backend_libs__erlang_rtti__succeeded)
#line 108 "erlang_rtti.m"
                              {
#line 4202 "backend_libs.erlang_rtti.c"
                                backend_libs__erlang_rtti__TypeInfo_20_20 = (MR_Word) &backend_libs__erlang_rtti_scalar_common_1[1];
#line 4204 "backend_libs.erlang_rtti.c"
                                {
#line 4206 "backend_libs.erlang_rtti.c"
                                  backend_libs__erlang_rtti__succeeded = mercury__builtin__unify_2_p_0(backend_libs__erlang_rtti__TypeInfo_20_20, ((MR_Box) (backend_libs__erlang_rtti__V_9_9)), ((MR_Box) (backend_libs__erlang_rtti__V_16_16)));
                                }
#line 108 "erlang_rtti.m"
                              }
#line 108 "erlang_rtti.m"
                          }
#line 108 "erlang_rtti.m"
                      }
#line 108 "erlang_rtti.m"
                  }
#line 108 "erlang_rtti.m"
              }
#line 108 "erlang_rtti.m"
          }
#line 108 "erlang_rtti.m"
      }
#line 108 "erlang_rtti.m"
    return backend_libs__erlang_rtti__succeeded;
#line 108 "erlang_rtti.m"
  }
#line 108 "erlang_rtti.m"
}

#line 127 "erlang_rtti.m"
void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_atom_raw_0_0(
#line 127 "erlang_rtti.m"
  MR_Word * backend_libs__erlang_rtti__HeadVar__1_1,
#line 127 "erlang_rtti.m"
  MR_Word backend_libs__erlang_rtti__HeadVar__2_2,
#line 127 "erlang_rtti.m"
  MR_Word backend_libs__erlang_rtti__HeadVar__3_3)
#line 127 "erlang_rtti.m"
{
#line 127 "erlang_rtti.m"
  {
#line 127 "erlang_rtti.m"
    MR_bool backend_libs__erlang_rtti__succeeded;
#line 127 "erlang_rtti.m"
    MR_Integer backend_libs__erlang_rtti__CastX_6 = (MR_Integer) backend_libs__erlang_rtti__HeadVar__2_2;
#line 127 "erlang_rtti.m"
    MR_Integer backend_libs__erlang_rtti__CastY_7 = (MR_Integer) backend_libs__erlang_rtti__HeadVar__3_3;

#line 127 "erlang_rtti.m"
    backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__CastX_6 == backend_libs__erlang_rtti__CastY_7);
#line 127 "erlang_rtti.m"
    if (backend_libs__erlang_rtti__succeeded)
#line 4254 "backend_libs.erlang_rtti.c"
      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 0;
#line 127 "erlang_rtti.m"
    else
#line 127 "erlang_rtti.m"
      {
#line 127 "erlang_rtti.m"
        MR_String backend_libs__erlang_rtti__V_4_4 = (MR_String) backend_libs__erlang_rtti__HeadVar__2_2;
#line 127 "erlang_rtti.m"
        MR_String backend_libs__erlang_rtti__V_5_5 = (MR_String) backend_libs__erlang_rtti__HeadVar__3_3;

#line 127 "erlang_rtti.m"
        {
#line 127 "erlang_rtti.m"
          mercury__private_builtin__builtin_compare_string_3_p_0(backend_libs__erlang_rtti__HeadVar__1_1, backend_libs__erlang_rtti__V_4_4, backend_libs__erlang_rtti__V_5_5);
        }
#line 127 "erlang_rtti.m"
      }
#line 127 "erlang_rtti.m"
  }
#line 127 "erlang_rtti.m"
}

#line 127 "erlang_rtti.m"
MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_atom_raw_0_0(
#line 127 "erlang_rtti.m"
  MR_Word backend_libs__erlang_rtti__HeadVar__1_1,
#line 127 "erlang_rtti.m"
  MR_Word backend_libs__erlang_rtti__HeadVar__2_2)
#line 127 "erlang_rtti.m"
{
#line 127 "erlang_rtti.m"
  {
#line 127 "erlang_rtti.m"
    MR_bool backend_libs__erlang_rtti__succeeded;
#line 127 "erlang_rtti.m"
    MR_Integer backend_libs__erlang_rtti__CastX_5 = (MR_Integer) backend_libs__erlang_rtti__HeadVar__1_1;
#line 127 "erlang_rtti.m"
    MR_Integer backend_libs__erlang_rtti__CastY_6 = (MR_Integer) backend_libs__erlang_rtti__HeadVar__2_2;

#line 127 "erlang_rtti.m"
    backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__CastX_5 == backend_libs__erlang_rtti__CastY_6);
#line 127 "erlang_rtti.m"
    if (backend_libs__erlang_rtti__succeeded)
#line 127 "erlang_rtti.m"
      backend_libs__erlang_rtti__succeeded = MR_TRUE;
#line 127 "erlang_rtti.m"
    else
#line 127 "erlang_rtti.m"
      {
#line 127 "erlang_rtti.m"
        MR_String backend_libs__erlang_rtti__V_3_3 = (MR_String) backend_libs__erlang_rtti__HeadVar__1_1;
#line 127 "erlang_rtti.m"
        MR_String backend_libs__erlang_rtti__V_4_4 = (MR_String) backend_libs__erlang_rtti__HeadVar__2_2;

#line 4310 "backend_libs.erlang_rtti.c"
        backend_libs__erlang_rtti__succeeded = (strcmp(backend_libs__erlang_rtti__V_3_3, backend_libs__erlang_rtti__V_4_4) == 0);
#line 127 "erlang_rtti.m"
      }
#line 127 "erlang_rtti.m"
    return backend_libs__erlang_rtti__succeeded;
#line 127 "erlang_rtti.m"
  }
#line 127 "erlang_rtti.m"
}

void mercury__backend_libs__erlang_rtti__init(void)
{
}

void mercury__backend_libs__erlang_rtti__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_atom_raw_0);
	MR_register_type_ctor_info(&backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_du_functor_0);
	MR_register_type_ctor_info(&backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_impl_ctor_0);
	MR_register_type_ctor_info(&backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_rtti_data_0);
	MR_register_type_ctor_info(&backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_type_ctor_data_0);
	MR_register_type_ctor_info(&backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_type_ctor_details_0);
}

void mercury__backend_libs__erlang_rtti__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module backend_libs.erlang_rtti. */
