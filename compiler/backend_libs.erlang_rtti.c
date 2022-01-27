/*
** Automatically generated from `erlang_rtti.m'
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


/* :- module backend_libs.erlang_rtti. */
/* :- implementation. */

/*
INIT mercury__backend_libs__erlang_rtti__init
ENDINIT
*/

#include "backend_libs.erlang_rtti.mih"


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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 135 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_atom_raw_0[1];

#line 138 "backend_libs.erlang_rtti.c"
static const MR_NotagFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__notag_functor_desc_erlang_atom_raw_0;

#line 141 "backend_libs.erlang_rtti.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__erlang_rtti__list__ti_list_1backend_libs__rtti__type_ctor_info_du_arg_info_0;

#line 144 "backend_libs.erlang_rtti.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__erlang_rtti__maybe__ti_maybe_1backend_libs__rtti__type_ctor_info_exist_info_0;

#line 147 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_du_functor_0_0[7];

#line 150 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_du_functor_0_0[7];

#line 153 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_du_functor_0_0;

#line 156 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_du_functor_0_0[1];

#line 159 "backend_libs.erlang_rtti.c"
static const MR_DuPtagLayout backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_du_functor_0[1];

#line 162 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_du_functor_0[1];

#line 165 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_du_functor_0[1];

#line 168 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_0;

#line 171 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_1;

#line 174 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_2;

#line 177 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_3;

#line 180 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_4;

#line 183 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_5;

#line 186 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_6;

#line 189 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_value_ordered_erlang_impl_ctor_0[7];

#line 192 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_name_ordered_erlang_impl_ctor_0[7];

#line 195 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_impl_ctor_0[7];

#line 198 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_0[1];

#line 201 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_0;

#line 204 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_1[1];

#line 207 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_1;

#line 210 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_2[1];

#line 213 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_2;

#line 216 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_3[4];

#line 219 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_3;

#line 222 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_4[1];

#line 225 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_4;

#line 228 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_5[1];

#line 231 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_5;

#line 234 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_0[1];

#line 237 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_1[1];

#line 240 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_2[1];

#line 243 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_3[3];

#line 246 "backend_libs.erlang_rtti.c"
static const MR_DuPtagLayout backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_rtti_data_0[4];

#line 249 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_rtti_data_0[6];

#line 252 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_rtti_data_0[6];

#line 255 "backend_libs.erlang_rtti.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__erlang_rtti__maybe__ti_maybe_1hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0;

#line 258 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_data_0_0[7];

#line 261 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_data_0_0[7];

#line 264 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_data_0_0;

#line 267 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_data_0_0[1];

#line 270 "backend_libs.erlang_rtti.c"
static const MR_DuPtagLayout backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_type_ctor_data_0[1];

#line 273 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_type_ctor_data_0[1];

#line 276 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_type_ctor_data_0[1];

#line 279 "backend_libs.erlang_rtti.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__erlang_rtti__list__ti_list_1backend_libs__erlang_rtti__type_ctor_info_erlang_du_functor_0;

#line 282 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_0[1];

#line 285 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_0[1];

#line 288 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_0;

#line 291 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_1[1];

#line 294 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_1[1];

#line 297 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_1;

#line 300 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_2;

#line 303 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_3;

#line 306 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_4[1];

#line 309 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_4[1];

#line 312 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_4;

#line 315 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_5[1];

#line 318 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_5[1];

#line 321 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_5;

#line 324 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_6[1];

#line 327 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_6[1];

#line 330 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_6;

#line 333 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_7;

#line 336 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_0[3];

#line 339 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_1[1];

#line 342 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_2[1];

#line 345 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_3[3];

#line 348 "backend_libs.erlang_rtti.c"
static const MR_DuPtagLayout backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_type_ctor_details_0[4];

#line 351 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_type_ctor_details_0[8];

#line 354 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_type_ctor_details_0[8];

#line 357 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_atom_raw_0_0_10001(
#line 360 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 362 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2);

#line 365 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_atom_raw_0_0_10001(
#line 368 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 370 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 372 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3);

#line 375 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_du_functor_0_0_10001(
#line 378 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 380 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2);

#line 383 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_du_functor_0_0_10001(
#line 386 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 388 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 390 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3);

#line 393 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_impl_ctor_0_0_10001(
#line 396 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 398 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2);

#line 401 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_impl_ctor_0_0_10001(
#line 404 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 406 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 408 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3);

#line 411 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_rtti_data_0_0_10001(
#line 414 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 416 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2);

#line 419 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_rtti_data_0_0_10001(
#line 422 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 424 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 426 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3);

#line 429 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_type_ctor_data_0_0_10001(
#line 432 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 434 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2);

#line 437 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_type_ctor_data_0_0_10001(
#line 440 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 442 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 444 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3);

#line 447 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_type_ctor_details_0_0_10001(
#line 450 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 452 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2);

#line 455 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_type_ctor_details_0_0_10001(
#line 458 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 460 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 462 "backend_libs.erlang_rtti.c"
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



#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 511 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_atom_raw_0[1] = {
  (MR_Integer) 0
};

#line 516 "backend_libs.erlang_rtti.c"
static const MR_NotagFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__notag_functor_desc_erlang_atom_raw_0 = {
  (MR_String) "erlang_atom_raw",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 523 "backend_libs.erlang_rtti.c"
const MR_TypeCtorInfo_Struct backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_atom_raw_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (backend_libs__erlang_rtti____Unify____erlang_atom_raw_0_0_10001)),
  ((MR_Box) (backend_libs__erlang_rtti____Compare____erlang_atom_raw_0_0_10001)),
  (MR_String) "backend_libs.erlang_rtti",
  (MR_String) "erlang_atom_raw",
  {
    &backend_libs__erlang_rtti__backend_libs__erlang_rtti__notag_functor_desc_erlang_atom_raw_0
  },
  {
    &backend_libs__erlang_rtti__backend_libs__erlang_rtti__notag_functor_desc_erlang_atom_raw_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_atom_raw_0
};

#line 544 "backend_libs.erlang_rtti.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__erlang_rtti__list__ti_list_1backend_libs__rtti__type_ctor_info_du_arg_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0
  }
};

#line 552 "backend_libs.erlang_rtti.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__erlang_rtti__maybe__ti_maybe_1backend_libs__rtti__type_ctor_info_exist_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_info_0
  }
};

#line 560 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_du_functor_0_0[7] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_atom_raw_0,
  (MR_PseudoTypeInfo) &backend_libs__erlang_rtti__list__ti_list_1backend_libs__rtti__type_ctor_info_du_arg_info_0,
  (MR_PseudoTypeInfo) &backend_libs__erlang_rtti__maybe__ti_maybe_1backend_libs__rtti__type_ctor_info_exist_info_0
};

#line 571 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_du_functor_0_0[7] = {
  (MR_String) "edu_name",
  (MR_String) "edu_orig_arity",
  (MR_String) "edu_ordinal",
  (MR_String) "edu_lex",
  (MR_String) "edu_rep",
  (MR_String) "edu_arg_infos",
  (MR_String) "edu_exist_info"
};

#line 582 "backend_libs.erlang_rtti.c"
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

#line 597 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_du_functor_0_0[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_du_functor_0_0
};

#line 602 "backend_libs.erlang_rtti.c"
static const MR_DuPtagLayout backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_du_functor_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_du_functor_0_0
  }
};

#line 611 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_du_functor_0[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_du_functor_0_0
};

#line 616 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_du_functor_0[1] = {
  (MR_Integer) 0
};

#line 621 "backend_libs.erlang_rtti.c"
const MR_TypeCtorInfo_Struct backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_du_functor_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__erlang_rtti____Unify____erlang_du_functor_0_0_10001)),
  ((MR_Box) (backend_libs__erlang_rtti____Compare____erlang_du_functor_0_0_10001)),
  (MR_String) "backend_libs.erlang_rtti",
  (MR_String) "erlang_du_functor",
  {
    backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_du_functor_0
  },
  {
    backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_du_functor_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_du_functor_0
};

#line 642 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_0 = {
  (MR_String) "erlang_impl_ctor_type_info",
  (MR_Integer) 0
};

#line 648 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_1 = {
  (MR_String) "erlang_impl_ctor_type_ctor_info",
  (MR_Integer) 1
};

#line 654 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_2 = {
  (MR_String) "erlang_impl_ctor_typeclass_info",
  (MR_Integer) 2
};

#line 660 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_3 = {
  (MR_String) "erlang_impl_ctor_base_typeclass_info",
  (MR_Integer) 3
};

#line 666 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_4 = {
  (MR_String) "erlang_impl_ctor_hp",
  (MR_Integer) 4
};

#line 672 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_5 = {
  (MR_String) "erlang_impl_ctor_subgoal",
  (MR_Integer) 5
};

#line 678 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_6 = {
  (MR_String) "erlang_impl_ctor_ticket",
  (MR_Integer) 6
};

#line 684 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_value_ordered_erlang_impl_ctor_0[7] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_0,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_1,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_2,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_3,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_4,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_5,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_6
};

#line 695 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_name_ordered_erlang_impl_ctor_0[7] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_3,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_4,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_5,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_6,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_1,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_0,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_2
};

#line 706 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_impl_ctor_0[7] = {
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 6,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 717 "backend_libs.erlang_rtti.c"
const MR_TypeCtorInfo_Struct backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_impl_ctor_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (backend_libs__erlang_rtti____Unify____erlang_impl_ctor_0_0_10001)),
  ((MR_Box) (backend_libs__erlang_rtti____Compare____erlang_impl_ctor_0_0_10001)),
  (MR_String) "backend_libs.erlang_rtti",
  (MR_String) "erlang_impl_ctor",
  {
    backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_name_ordered_erlang_impl_ctor_0
  },
  {
    backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_value_ordered_erlang_impl_ctor_0
  },
  (MR_Integer) 7,
  (MR_Integer) 4,
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_impl_ctor_0
};

#line 738 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_0[1] = {
  (MR_PseudoTypeInfo) &backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_type_ctor_data_0
};

#line 743 "backend_libs.erlang_rtti.c"
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

#line 758 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_1[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0
};

#line 763 "backend_libs.erlang_rtti.c"
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

#line 778 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_2[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_pseudo_type_info_0
};

#line 783 "backend_libs.erlang_rtti.c"
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

#line 798 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_3[4] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_name_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_base_typeclass_info_0
};

#line 806 "backend_libs.erlang_rtti.c"
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

#line 821 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_4[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_decl_0
};

#line 826 "backend_libs.erlang_rtti.c"
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

#line 841 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_5[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_instance_0
};

#line 846 "backend_libs.erlang_rtti.c"
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

#line 861 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_0[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_0
};

#line 866 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_1[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_1
};

#line 871 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_2[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_2
};

#line 876 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_3[3] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_3,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_4,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_5
};

#line 883 "backend_libs.erlang_rtti.c"
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

#line 907 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_rtti_data_0[6] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_3,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_2,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_4,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_5,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_0,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_1
};

#line 917 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_rtti_data_0[6] = {
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 927 "backend_libs.erlang_rtti.c"
const MR_TypeCtorInfo_Struct backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_rtti_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__erlang_rtti____Unify____erlang_rtti_data_0_0_10001)),
  ((MR_Box) (backend_libs__erlang_rtti____Compare____erlang_rtti_data_0_0_10001)),
  (MR_String) "backend_libs.erlang_rtti",
  (MR_String) "erlang_rtti_data",
  {
    backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_rtti_data_0
  },
  {
    backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_rtti_data_0
  },
  (MR_Integer) 6,
  (MR_Integer) 4,
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_rtti_data_0
};

#line 948 "backend_libs.erlang_rtti.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__erlang_rtti__maybe__ti_maybe_1hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0
  }
};

#line 956 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_data_0_0[7] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &backend_libs__erlang_rtti__maybe__ti_maybe_1hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0,
  (MR_PseudoTypeInfo) &backend_libs__erlang_rtti__maybe__ti_maybe_1hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0,
  (MR_PseudoTypeInfo) &backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_type_ctor_details_0
};

#line 967 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_data_0_0[7] = {
  (MR_String) "etcr_version",
  (MR_String) "etcr_module_name",
  (MR_String) "etcr_type_name",
  (MR_String) "etcr_arity",
  (MR_String) "etcr_unify",
  (MR_String) "etcr_compare",
  (MR_String) "etcr_rep_details"
};

#line 978 "backend_libs.erlang_rtti.c"
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

#line 993 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_data_0_0[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_data_0_0
};

#line 998 "backend_libs.erlang_rtti.c"
static const MR_DuPtagLayout backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_type_ctor_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_data_0_0
  }
};

#line 1007 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_type_ctor_data_0[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_data_0_0
};

#line 1012 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_type_ctor_data_0[1] = {
  (MR_Integer) 0
};

#line 1017 "backend_libs.erlang_rtti.c"
const MR_TypeCtorInfo_Struct backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_type_ctor_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__erlang_rtti____Unify____erlang_type_ctor_data_0_0_10001)),
  ((MR_Box) (backend_libs__erlang_rtti____Compare____erlang_type_ctor_data_0_0_10001)),
  (MR_String) "backend_libs.erlang_rtti",
  (MR_String) "erlang_type_ctor_data",
  {
    backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_type_ctor_data_0
  },
  {
    backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_type_ctor_data_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_type_ctor_data_0
};

#line 1038 "backend_libs.erlang_rtti.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__erlang_rtti__list__ti_list_1backend_libs__erlang_rtti__type_ctor_info_erlang_du_functor_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_du_functor_0
  }
};

#line 1046 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_0[1] = {
  (MR_PseudoTypeInfo) &backend_libs__erlang_rtti__list__ti_list_1backend_libs__erlang_rtti__type_ctor_info_erlang_du_functor_0
};

#line 1051 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_0[1] = {
  (MR_String) "edu_functors"
};

#line 1056 "backend_libs.erlang_rtti.c"
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

#line 1071 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1076 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_1[1] = {
  (MR_String) "edummy_name"
};

#line 1081 "backend_libs.erlang_rtti.c"
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

#line 1096 "backend_libs.erlang_rtti.c"
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

#line 1111 "backend_libs.erlang_rtti.c"
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

#line 1126 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_4[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0
};

#line 1131 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_4[1] = {
  (MR_String) "eeqv_type"
};

#line 1136 "backend_libs.erlang_rtti.c"
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

#line 1151 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_5[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_builtin_ctor_0
};

#line 1156 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_5[1] = {
  (MR_String) "ebuiltin_ctor"
};

#line 1161 "backend_libs.erlang_rtti.c"
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

#line 1176 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_6[1] = {
  (MR_PseudoTypeInfo) &backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_impl_ctor_0
};

#line 1181 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_6[1] = {
  (MR_String) "eimpl_ctor"
};

#line 1186 "backend_libs.erlang_rtti.c"
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

#line 1201 "backend_libs.erlang_rtti.c"
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

#line 1216 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_0[3] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_2,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_3,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_7
};

#line 1223 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_1[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_0
};

#line 1228 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_2[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_1
};

#line 1233 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_3[3] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_4,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_5,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_6
};

#line 1240 "backend_libs.erlang_rtti.c"
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

#line 1264 "backend_libs.erlang_rtti.c"
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

#line 1276 "backend_libs.erlang_rtti.c"
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

#line 1288 "backend_libs.erlang_rtti.c"
const MR_TypeCtorInfo_Struct backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_type_ctor_details_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (backend_libs__erlang_rtti____Unify____erlang_type_ctor_details_0_0_10001)),
  ((MR_Box) (backend_libs__erlang_rtti____Compare____erlang_type_ctor_details_0_0_10001)),
  (MR_String) "backend_libs.erlang_rtti",
  (MR_String) "erlang_type_ctor_details",
  {
    backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_type_ctor_details_0
  },
  {
    backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_type_ctor_details_0
  },
  (MR_Integer) 8,
  (MR_Integer) 4,
  backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_type_ctor_details_0
};

#line 1309 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_atom_raw_0_0_10001(
#line 1312 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 1314 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2)
#line 1316 "backend_libs.erlang_rtti.c"
{
#line 1318 "backend_libs.erlang_rtti.c"
  {
#line 1320 "backend_libs.erlang_rtti.c"
    MR_bool backend_libs__erlang_rtti__succeeded;

#line 1323 "backend_libs.erlang_rtti.c"
    {
#line 1325 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti__succeeded = backend_libs__erlang_rtti____Unify____erlang_atom_raw_0_0(((MR_Word) backend_libs__erlang_rtti__wrapper_arg_1), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2));
    }
#line 1328 "backend_libs.erlang_rtti.c"
    return backend_libs__erlang_rtti__succeeded;
#line 1330 "backend_libs.erlang_rtti.c"
  }
#line 1332 "backend_libs.erlang_rtti.c"
}

#line 1335 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_atom_raw_0_0_10001(
#line 1338 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 1340 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 1342 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3)
#line 1344 "backend_libs.erlang_rtti.c"
{
#line 1346 "backend_libs.erlang_rtti.c"
  {
#line 1348 "backend_libs.erlang_rtti.c"
    MR_Word backend_libs__erlang_rtti__conv0_HeadVar__1_1;

#line 1351 "backend_libs.erlang_rtti.c"
    {
#line 1353 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti____Compare____erlang_atom_raw_0_0(&backend_libs__erlang_rtti__conv0_HeadVar__1_1, ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_3));
    }
#line 1356 "backend_libs.erlang_rtti.c"
    *backend_libs__erlang_rtti__wrapper_arg_1 = ((MR_Box) (backend_libs__erlang_rtti__conv0_HeadVar__1_1));
#line 1358 "backend_libs.erlang_rtti.c"
  }
#line 1360 "backend_libs.erlang_rtti.c"
}

#line 1363 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_du_functor_0_0_10001(
#line 1366 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 1368 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2)
#line 1370 "backend_libs.erlang_rtti.c"
{
#line 1372 "backend_libs.erlang_rtti.c"
  {
#line 1374 "backend_libs.erlang_rtti.c"
    MR_bool backend_libs__erlang_rtti__succeeded;

#line 1377 "backend_libs.erlang_rtti.c"
    {
#line 1379 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti__succeeded = backend_libs__erlang_rtti____Unify____erlang_du_functor_0_0(((MR_Word) backend_libs__erlang_rtti__wrapper_arg_1), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2));
    }
#line 1382 "backend_libs.erlang_rtti.c"
    return backend_libs__erlang_rtti__succeeded;
#line 1384 "backend_libs.erlang_rtti.c"
  }
#line 1386 "backend_libs.erlang_rtti.c"
}

#line 1389 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_du_functor_0_0_10001(
#line 1392 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 1394 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 1396 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3)
#line 1398 "backend_libs.erlang_rtti.c"
{
#line 1400 "backend_libs.erlang_rtti.c"
  {
#line 1402 "backend_libs.erlang_rtti.c"
    MR_Word backend_libs__erlang_rtti__conv0_HeadVar__1_1;

#line 1405 "backend_libs.erlang_rtti.c"
    {
#line 1407 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti____Compare____erlang_du_functor_0_0(&backend_libs__erlang_rtti__conv0_HeadVar__1_1, ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_3));
    }
#line 1410 "backend_libs.erlang_rtti.c"
    *backend_libs__erlang_rtti__wrapper_arg_1 = ((MR_Box) (backend_libs__erlang_rtti__conv0_HeadVar__1_1));
#line 1412 "backend_libs.erlang_rtti.c"
  }
#line 1414 "backend_libs.erlang_rtti.c"
}

#line 1417 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_impl_ctor_0_0_10001(
#line 1420 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 1422 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2)
#line 1424 "backend_libs.erlang_rtti.c"
{
#line 1426 "backend_libs.erlang_rtti.c"
  {
#line 1428 "backend_libs.erlang_rtti.c"
    MR_bool backend_libs__erlang_rtti__succeeded;

#line 1431 "backend_libs.erlang_rtti.c"
    {
#line 1433 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti__succeeded = backend_libs__erlang_rtti____Unify____erlang_impl_ctor_0_0(((MR_Word) backend_libs__erlang_rtti__wrapper_arg_1), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2));
    }
#line 1436 "backend_libs.erlang_rtti.c"
    return backend_libs__erlang_rtti__succeeded;
#line 1438 "backend_libs.erlang_rtti.c"
  }
#line 1440 "backend_libs.erlang_rtti.c"
}

#line 1443 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_impl_ctor_0_0_10001(
#line 1446 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 1448 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 1450 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3)
#line 1452 "backend_libs.erlang_rtti.c"
{
#line 1454 "backend_libs.erlang_rtti.c"
  {
#line 1456 "backend_libs.erlang_rtti.c"
    MR_Word backend_libs__erlang_rtti__conv0_HeadVar__1_1;

#line 1459 "backend_libs.erlang_rtti.c"
    {
#line 1461 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti____Compare____erlang_impl_ctor_0_0(&backend_libs__erlang_rtti__conv0_HeadVar__1_1, ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_3));
    }
#line 1464 "backend_libs.erlang_rtti.c"
    *backend_libs__erlang_rtti__wrapper_arg_1 = ((MR_Box) (backend_libs__erlang_rtti__conv0_HeadVar__1_1));
#line 1466 "backend_libs.erlang_rtti.c"
  }
#line 1468 "backend_libs.erlang_rtti.c"
}

#line 1471 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_rtti_data_0_0_10001(
#line 1474 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 1476 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2)
#line 1478 "backend_libs.erlang_rtti.c"
{
#line 1480 "backend_libs.erlang_rtti.c"
  {
#line 1482 "backend_libs.erlang_rtti.c"
    MR_bool backend_libs__erlang_rtti__succeeded;

#line 1485 "backend_libs.erlang_rtti.c"
    {
#line 1487 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti__succeeded = backend_libs__erlang_rtti____Unify____erlang_rtti_data_0_0(((MR_Word) backend_libs__erlang_rtti__wrapper_arg_1), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2));
    }
#line 1490 "backend_libs.erlang_rtti.c"
    return backend_libs__erlang_rtti__succeeded;
#line 1492 "backend_libs.erlang_rtti.c"
  }
#line 1494 "backend_libs.erlang_rtti.c"
}

#line 1497 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_rtti_data_0_0_10001(
#line 1500 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 1502 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 1504 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3)
#line 1506 "backend_libs.erlang_rtti.c"
{
#line 1508 "backend_libs.erlang_rtti.c"
  {
#line 1510 "backend_libs.erlang_rtti.c"
    MR_Word backend_libs__erlang_rtti__conv0_HeadVar__1_1;

#line 1513 "backend_libs.erlang_rtti.c"
    {
#line 1515 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti____Compare____erlang_rtti_data_0_0(&backend_libs__erlang_rtti__conv0_HeadVar__1_1, ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_3));
    }
#line 1518 "backend_libs.erlang_rtti.c"
    *backend_libs__erlang_rtti__wrapper_arg_1 = ((MR_Box) (backend_libs__erlang_rtti__conv0_HeadVar__1_1));
#line 1520 "backend_libs.erlang_rtti.c"
  }
#line 1522 "backend_libs.erlang_rtti.c"
}

#line 1525 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_type_ctor_data_0_0_10001(
#line 1528 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 1530 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2)
#line 1532 "backend_libs.erlang_rtti.c"
{
#line 1534 "backend_libs.erlang_rtti.c"
  {
#line 1536 "backend_libs.erlang_rtti.c"
    MR_bool backend_libs__erlang_rtti__succeeded;

#line 1539 "backend_libs.erlang_rtti.c"
    {
#line 1541 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti__succeeded = backend_libs__erlang_rtti____Unify____erlang_type_ctor_data_0_0(((MR_Word) backend_libs__erlang_rtti__wrapper_arg_1), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2));
    }
#line 1544 "backend_libs.erlang_rtti.c"
    return backend_libs__erlang_rtti__succeeded;
#line 1546 "backend_libs.erlang_rtti.c"
  }
#line 1548 "backend_libs.erlang_rtti.c"
}

#line 1551 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_type_ctor_data_0_0_10001(
#line 1554 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 1556 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 1558 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3)
#line 1560 "backend_libs.erlang_rtti.c"
{
#line 1562 "backend_libs.erlang_rtti.c"
  {
#line 1564 "backend_libs.erlang_rtti.c"
    MR_Word backend_libs__erlang_rtti__conv0_HeadVar__1_1;

#line 1567 "backend_libs.erlang_rtti.c"
    {
#line 1569 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti____Compare____erlang_type_ctor_data_0_0(&backend_libs__erlang_rtti__conv0_HeadVar__1_1, ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_3));
    }
#line 1572 "backend_libs.erlang_rtti.c"
    *backend_libs__erlang_rtti__wrapper_arg_1 = ((MR_Box) (backend_libs__erlang_rtti__conv0_HeadVar__1_1));
#line 1574 "backend_libs.erlang_rtti.c"
  }
#line 1576 "backend_libs.erlang_rtti.c"
}

#line 1579 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_type_ctor_details_0_0_10001(
#line 1582 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 1584 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2)
#line 1586 "backend_libs.erlang_rtti.c"
{
#line 1588 "backend_libs.erlang_rtti.c"
  {
#line 1590 "backend_libs.erlang_rtti.c"
    MR_bool backend_libs__erlang_rtti__succeeded;

#line 1593 "backend_libs.erlang_rtti.c"
    {
#line 1595 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti__succeeded = backend_libs__erlang_rtti____Unify____erlang_type_ctor_details_0_0(((MR_Word) backend_libs__erlang_rtti__wrapper_arg_1), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2));
    }
#line 1598 "backend_libs.erlang_rtti.c"
    return backend_libs__erlang_rtti__succeeded;
#line 1600 "backend_libs.erlang_rtti.c"
  }
#line 1602 "backend_libs.erlang_rtti.c"
}

#line 1605 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_type_ctor_details_0_0_10001(
#line 1608 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 1610 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 1612 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3)
#line 1614 "backend_libs.erlang_rtti.c"
{
#line 1616 "backend_libs.erlang_rtti.c"
  {
#line 1618 "backend_libs.erlang_rtti.c"
    MR_Word backend_libs__erlang_rtti__conv0_HeadVar__1_1;

#line 1621 "backend_libs.erlang_rtti.c"
    {
#line 1623 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti____Compare____erlang_type_ctor_details_0_0(&backend_libs__erlang_rtti__conv0_HeadVar__1_1, ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_3));
    }
#line 1626 "backend_libs.erlang_rtti.c"
    *backend_libs__erlang_rtti__wrapper_arg_1 = ((MR_Box) (backend_libs__erlang_rtti__conv0_HeadVar__1_1));
#line 1628 "backend_libs.erlang_rtti.c"
  }
#line 1630 "backend_libs.erlang_rtti.c"
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
#line 1657 "backend_libs.erlang_rtti.c"
      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 0;
#line 72 "erlang_rtti.m"
    else
#line 72 "erlang_rtti.m"
      if ((backend_libs__erlang_rtti__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 72 "erlang_rtti.m"
        if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 72 "erlang_rtti.m"
          *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 0;
#line 72 "erlang_rtti.m"
        else
#line 72 "erlang_rtti.m"
          if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 72 "erlang_rtti.m"
            *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
          else
#line 72 "erlang_rtti.m"
            if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 72 "erlang_rtti.m"
              *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
            else
#line 72 "erlang_rtti.m"
              if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1683 "backend_libs.erlang_rtti.c"
                *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
              else
#line 72 "erlang_rtti.m"
                if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1689 "backend_libs.erlang_rtti.c"
                  *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                else
#line 72 "erlang_rtti.m"
                  if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1695 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                  else
#line 72 "erlang_rtti.m"
                    if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1701 "backend_libs.erlang_rtti.c"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                    else
#line 1705 "backend_libs.erlang_rtti.c"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
      else
#line 72 "erlang_rtti.m"
        if ((backend_libs__erlang_rtti__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 72 "erlang_rtti.m"
          if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 72 "erlang_rtti.m"
            *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
          else
#line 72 "erlang_rtti.m"
            if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 72 "erlang_rtti.m"
              *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 0;
#line 72 "erlang_rtti.m"
            else
#line 72 "erlang_rtti.m"
              if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 72 "erlang_rtti.m"
                *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
              else
#line 72 "erlang_rtti.m"
                if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1731 "backend_libs.erlang_rtti.c"
                  *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                else
#line 72 "erlang_rtti.m"
                  if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1737 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                  else
#line 72 "erlang_rtti.m"
                    if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1743 "backend_libs.erlang_rtti.c"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                    else
#line 72 "erlang_rtti.m"
                      if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1749 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                      else
#line 1753 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
        else
#line 72 "erlang_rtti.m"
          if ((backend_libs__erlang_rtti__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 72 "erlang_rtti.m"
            if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 72 "erlang_rtti.m"
              *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
            else
#line 72 "erlang_rtti.m"
              if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 72 "erlang_rtti.m"
                *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
              else
#line 72 "erlang_rtti.m"
                if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 72 "erlang_rtti.m"
                  *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 0;
#line 72 "erlang_rtti.m"
                else
#line 72 "erlang_rtti.m"
                  if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1779 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                  else
#line 72 "erlang_rtti.m"
                    if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1785 "backend_libs.erlang_rtti.c"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                    else
#line 72 "erlang_rtti.m"
                      if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1791 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                      else
#line 72 "erlang_rtti.m"
                        if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1797 "backend_libs.erlang_rtti.c"
                          *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                        else
#line 1801 "backend_libs.erlang_rtti.c"
                          *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
          else
#line 72 "erlang_rtti.m"
            if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 72 "erlang_rtti.m"
              {
#line 72 "erlang_rtti.m"
                MR_Word backend_libs__erlang_rtti__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 0)));

#line 72 "erlang_rtti.m"
                if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1814 "backend_libs.erlang_rtti.c"
                  *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                else
#line 72 "erlang_rtti.m"
                  if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1820 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                  else
#line 72 "erlang_rtti.m"
                    if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1826 "backend_libs.erlang_rtti.c"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                    else
#line 72 "erlang_rtti.m"
                      if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 72 "erlang_rtti.m"
                        {
#line 72 "erlang_rtti.m"
                          MR_Word backend_libs__erlang_rtti__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)));

#line 72 "erlang_rtti.m"
                          {
#line 72 "erlang_rtti.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &backend_libs__erlang_rtti_scalar_common_1[3], backend_libs__erlang_rtti__HeadVar__1_1, ((MR_Box) (backend_libs__erlang_rtti__V_92_92)), ((MR_Box) (backend_libs__erlang_rtti__V_5_5)));
#line 72 "erlang_rtti.m"
                            return;
                          }
#line 72 "erlang_rtti.m"
                        }
#line 72 "erlang_rtti.m"
                      else
#line 72 "erlang_rtti.m"
                        if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1850 "backend_libs.erlang_rtti.c"
                          *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                        else
#line 72 "erlang_rtti.m"
                          if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1856 "backend_libs.erlang_rtti.c"
                            *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                          else
#line 72 "erlang_rtti.m"
                            if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1862 "backend_libs.erlang_rtti.c"
                              *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                            else
#line 1866 "backend_libs.erlang_rtti.c"
                              *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
              }
#line 72 "erlang_rtti.m"
            else
#line 72 "erlang_rtti.m"
              if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 72 "erlang_rtti.m"
                {
#line 72 "erlang_rtti.m"
                  MR_String backend_libs__erlang_rtti__V_93_93 = ((MR_String) (MR_hl_field(MR_mktag(2), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 0)));

#line 72 "erlang_rtti.m"
                  if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1881 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                  else
#line 72 "erlang_rtti.m"
                    if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1887 "backend_libs.erlang_rtti.c"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                    else
#line 72 "erlang_rtti.m"
                      if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1893 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                      else
#line 72 "erlang_rtti.m"
                        if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1899 "backend_libs.erlang_rtti.c"
                          *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                        else
#line 72 "erlang_rtti.m"
                          if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 72 "erlang_rtti.m"
                            {
#line 72 "erlang_rtti.m"
                              MR_String backend_libs__erlang_rtti__V_20_20 = ((MR_String) (MR_hl_field(MR_mktag(2), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)));

#line 72 "erlang_rtti.m"
                              {
#line 72 "erlang_rtti.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(backend_libs__erlang_rtti__HeadVar__1_1, backend_libs__erlang_rtti__V_93_93, backend_libs__erlang_rtti__V_20_20);
#line 72 "erlang_rtti.m"
                                return;
                              }
#line 72 "erlang_rtti.m"
                            }
#line 72 "erlang_rtti.m"
                          else
#line 72 "erlang_rtti.m"
                            if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1923 "backend_libs.erlang_rtti.c"
                              *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                            else
#line 72 "erlang_rtti.m"
                              if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1929 "backend_libs.erlang_rtti.c"
                                *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                              else
#line 1933 "backend_libs.erlang_rtti.c"
                                *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                }
#line 72 "erlang_rtti.m"
              else
#line 72 "erlang_rtti.m"
                if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 72 "erlang_rtti.m"
                  {
#line 72 "erlang_rtti.m"
                    MR_Word backend_libs__erlang_rtti__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 1)));

#line 72 "erlang_rtti.m"
                    if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1948 "backend_libs.erlang_rtti.c"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                    else
#line 72 "erlang_rtti.m"
                      if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1954 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                      else
#line 72 "erlang_rtti.m"
                        if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1960 "backend_libs.erlang_rtti.c"
                          *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                        else
#line 72 "erlang_rtti.m"
                          if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1966 "backend_libs.erlang_rtti.c"
                            *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                          else
#line 72 "erlang_rtti.m"
                            if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1972 "backend_libs.erlang_rtti.c"
                              *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                            else
#line 72 "erlang_rtti.m"
                              if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 72 "erlang_rtti.m"
                                {
#line 72 "erlang_rtti.m"
                                  MR_Word backend_libs__erlang_rtti__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 1)));

#line 72 "erlang_rtti.m"
                                  {
#line 72 "erlang_rtti.m"
                                    backend_libs__rtti____Compare____builtin_ctor_0_0(backend_libs__erlang_rtti__HeadVar__1_1, backend_libs__erlang_rtti__V_91_91, backend_libs__erlang_rtti__V_62_62);
#line 72 "erlang_rtti.m"
                                    return;
                                  }
#line 72 "erlang_rtti.m"
                                }
#line 72 "erlang_rtti.m"
                              else
#line 72 "erlang_rtti.m"
                                if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1996 "backend_libs.erlang_rtti.c"
                                  *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                                else
#line 2000 "backend_libs.erlang_rtti.c"
                                  *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                  }
#line 72 "erlang_rtti.m"
                else
#line 72 "erlang_rtti.m"
                  if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 72 "erlang_rtti.m"
                    {
#line 72 "erlang_rtti.m"
                      MR_Word backend_libs__erlang_rtti__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 1)));

#line 72 "erlang_rtti.m"
                      if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2015 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                      else
#line 72 "erlang_rtti.m"
                        if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 2021 "backend_libs.erlang_rtti.c"
                          *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                        else
#line 72 "erlang_rtti.m"
                          if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2027 "backend_libs.erlang_rtti.c"
                            *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                          else
#line 72 "erlang_rtti.m"
                            if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2033 "backend_libs.erlang_rtti.c"
                              *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                            else
#line 72 "erlang_rtti.m"
                              if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2039 "backend_libs.erlang_rtti.c"
                                *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                              else
#line 72 "erlang_rtti.m"
                                if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2045 "backend_libs.erlang_rtti.c"
                                  *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                                else
#line 72 "erlang_rtti.m"
                                  if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 72 "erlang_rtti.m"
                                    {
#line 72 "erlang_rtti.m"
                                      MR_Word backend_libs__erlang_rtti__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 1)));

#line 72 "erlang_rtti.m"
                                      {
#line 72 "erlang_rtti.m"
                                        backend_libs__rtti____Compare____rtti_maybe_pseudo_type_info_0_0(backend_libs__erlang_rtti__HeadVar__1_1, backend_libs__erlang_rtti__V_94_94, backend_libs__erlang_rtti__V_47_47);
#line 72 "erlang_rtti.m"
                                        return;
                                      }
#line 72 "erlang_rtti.m"
                                    }
#line 72 "erlang_rtti.m"
                                  else
#line 2067 "backend_libs.erlang_rtti.c"
                                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                    }
#line 72 "erlang_rtti.m"
                  else
#line 72 "erlang_rtti.m"
                    {
#line 72 "erlang_rtti.m"
                      MR_Word backend_libs__erlang_rtti__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 1)));

#line 72 "erlang_rtti.m"
                      if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 2080 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                      else
#line 72 "erlang_rtti.m"
                        if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 2086 "backend_libs.erlang_rtti.c"
                          *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                        else
#line 72 "erlang_rtti.m"
                          if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2092 "backend_libs.erlang_rtti.c"
                            *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                          else
#line 72 "erlang_rtti.m"
                            if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2098 "backend_libs.erlang_rtti.c"
                              *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                            else
#line 72 "erlang_rtti.m"
                              if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2104 "backend_libs.erlang_rtti.c"
                                *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                              else
#line 72 "erlang_rtti.m"
                                if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2110 "backend_libs.erlang_rtti.c"
                                  *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                                else
#line 72 "erlang_rtti.m"
                                  if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2116 "backend_libs.erlang_rtti.c"
                                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                                  else
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
#line 72 "erlang_rtti.m"
                                        return;
                                      }
#line 72 "erlang_rtti.m"
                                    }
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
      if ((backend_libs__erlang_rtti__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
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
      else
#line 72 "erlang_rtti.m"
        if ((backend_libs__erlang_rtti__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
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
        else
#line 72 "erlang_rtti.m"
          if ((backend_libs__erlang_rtti__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
          else
#line 72 "erlang_rtti.m"
            if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
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
#line 2235 "backend_libs.erlang_rtti.c"
                    backend_libs__erlang_rtti__TypeInfo_22_22 = (MR_Word) &backend_libs__erlang_rtti_scalar_common_1[3];
#line 2237 "backend_libs.erlang_rtti.c"
                    {
#line 2239 "backend_libs.erlang_rtti.c"
                      return backend_libs__erlang_rtti__succeeded = mercury__builtin__unify_2_p_0(backend_libs__erlang_rtti__TypeInfo_22_22, ((MR_Box) (backend_libs__erlang_rtti__V_3_3)), ((MR_Box) (backend_libs__erlang_rtti__V_4_4)));
                    }
#line 72 "erlang_rtti.m"
                  }
#line 72 "erlang_rtti.m"
              }
#line 72 "erlang_rtti.m"
            else
#line 72 "erlang_rtti.m"
              if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
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
#line 2265 "backend_libs.erlang_rtti.c"
                      backend_libs__erlang_rtti__succeeded = (strcmp(backend_libs__erlang_rtti__V_5_5, backend_libs__erlang_rtti__V_6_6) == 0);
#line 72 "erlang_rtti.m"
                    }
#line 72 "erlang_rtti.m"
                }
#line 72 "erlang_rtti.m"
              else
#line 72 "erlang_rtti.m"
                if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
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
#line 2290 "backend_libs.erlang_rtti.c"
                        {
#line 2292 "backend_libs.erlang_rtti.c"
                          return backend_libs__erlang_rtti__succeeded = backend_libs__rtti____Unify____builtin_ctor_0_0(backend_libs__erlang_rtti__V_13_13, backend_libs__erlang_rtti__V_14_14);
                        }
#line 72 "erlang_rtti.m"
                      }
#line 72 "erlang_rtti.m"
                  }
#line 72 "erlang_rtti.m"
                else
#line 72 "erlang_rtti.m"
                  if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
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
#line 2318 "backend_libs.erlang_rtti.c"
                          {
#line 2320 "backend_libs.erlang_rtti.c"
                            return backend_libs__erlang_rtti__succeeded = backend_libs__rtti____Unify____rtti_maybe_pseudo_type_info_0_0(backend_libs__erlang_rtti__V_11_11, backend_libs__erlang_rtti__V_12_12);
                          }
#line 72 "erlang_rtti.m"
                        }
#line 72 "erlang_rtti.m"
                    }
#line 72 "erlang_rtti.m"
                  else
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
#line 2344 "backend_libs.erlang_rtti.c"
                          backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__V_15_15 == backend_libs__erlang_rtti__V_16_16);
#line 72 "erlang_rtti.m"
                        }
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
#line 2381 "backend_libs.erlang_rtti.c"
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
#line 2423 "backend_libs.erlang_rtti.c"
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
#line 2443 "backend_libs.erlang_rtti.c"
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
#line 2463 "backend_libs.erlang_rtti.c"
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
#line 2483 "backend_libs.erlang_rtti.c"
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
#line 2503 "backend_libs.erlang_rtti.c"
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
#line 2523 "backend_libs.erlang_rtti.c"
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
#line 46 "erlang_rtti.m"
                                return;
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

#line 2618 "backend_libs.erlang_rtti.c"
        backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__V_3_3 == backend_libs__erlang_rtti__V_10_10);
#line 46 "erlang_rtti.m"
        if (backend_libs__erlang_rtti__succeeded)
#line 46 "erlang_rtti.m"
          {
#line 2624 "backend_libs.erlang_rtti.c"
            {
#line 2626 "backend_libs.erlang_rtti.c"
              backend_libs__erlang_rtti__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(backend_libs__erlang_rtti__V_4_4, backend_libs__erlang_rtti__V_11_11);
            }
#line 46 "erlang_rtti.m"
            if (backend_libs__erlang_rtti__succeeded)
#line 46 "erlang_rtti.m"
              {
#line 2633 "backend_libs.erlang_rtti.c"
                backend_libs__erlang_rtti__succeeded = (strcmp(backend_libs__erlang_rtti__V_5_5, backend_libs__erlang_rtti__V_12_12) == 0);
#line 46 "erlang_rtti.m"
                if (backend_libs__erlang_rtti__succeeded)
#line 46 "erlang_rtti.m"
                  {
#line 2639 "backend_libs.erlang_rtti.c"
                    backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__V_6_6 == backend_libs__erlang_rtti__V_13_13);
#line 46 "erlang_rtti.m"
                    if (backend_libs__erlang_rtti__succeeded)
#line 46 "erlang_rtti.m"
                      {
#line 2645 "backend_libs.erlang_rtti.c"
                        backend_libs__erlang_rtti__TypeInfo_20_20 = (MR_Word) &backend_libs__erlang_rtti_scalar_common_1[2];
#line 2647 "backend_libs.erlang_rtti.c"
                        {
#line 2649 "backend_libs.erlang_rtti.c"
                          backend_libs__erlang_rtti__succeeded = mercury__builtin__unify_2_p_0(backend_libs__erlang_rtti__TypeInfo_20_20, ((MR_Box) (backend_libs__erlang_rtti__V_7_7)), ((MR_Box) (backend_libs__erlang_rtti__V_14_14)));
                        }
#line 46 "erlang_rtti.m"
                        if (backend_libs__erlang_rtti__succeeded)
#line 46 "erlang_rtti.m"
                          {
#line 2656 "backend_libs.erlang_rtti.c"
                            backend_libs__erlang_rtti__TypeInfo_21_21 = (MR_Word) &backend_libs__erlang_rtti_scalar_common_1[2];
#line 2658 "backend_libs.erlang_rtti.c"
                            {
#line 2660 "backend_libs.erlang_rtti.c"
                              backend_libs__erlang_rtti__succeeded = mercury__builtin__unify_2_p_0(backend_libs__erlang_rtti__TypeInfo_21_21, ((MR_Box) (backend_libs__erlang_rtti__V_8_8)), ((MR_Box) (backend_libs__erlang_rtti__V_15_15)));
                            }
#line 46 "erlang_rtti.m"
                            if (backend_libs__erlang_rtti__succeeded)
#line 2665 "backend_libs.erlang_rtti.c"
                              {
#line 2667 "backend_libs.erlang_rtti.c"
                                return backend_libs__erlang_rtti__succeeded = backend_libs__erlang_rtti____Unify____erlang_type_ctor_details_0_0(backend_libs__erlang_rtti__V_9_9, backend_libs__erlang_rtti__V_16_16);
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
#line 2713 "backend_libs.erlang_rtti.c"
      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 0;
#line 153 "erlang_rtti.m"
    else
#line 153 "erlang_rtti.m"
      if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 153 "erlang_rtti.m"
        {
#line 153 "erlang_rtti.m"
          MR_Word backend_libs__erlang_rtti__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 0)));

#line 153 "erlang_rtti.m"
          if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 153 "erlang_rtti.m"
            {
#line 153 "erlang_rtti.m"
              MR_Word backend_libs__erlang_rtti__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(2), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)));

#line 153 "erlang_rtti.m"
              {
#line 153 "erlang_rtti.m"
                backend_libs__rtti____Compare____rtti_pseudo_type_info_0_0(backend_libs__erlang_rtti__HeadVar__1_1, backend_libs__erlang_rtti__V_130_130, backend_libs__erlang_rtti__V_39_39);
#line 153 "erlang_rtti.m"
                return;
              }
#line 153 "erlang_rtti.m"
            }
#line 153 "erlang_rtti.m"
          else
#line 153 "erlang_rtti.m"
            if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2744 "backend_libs.erlang_rtti.c"
              *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
            else
#line 153 "erlang_rtti.m"
              if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2750 "backend_libs.erlang_rtti.c"
                *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
              else
#line 153 "erlang_rtti.m"
                if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2756 "backend_libs.erlang_rtti.c"
                  *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
                else
#line 153 "erlang_rtti.m"
                  if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2762 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
                  else
#line 2766 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
        }
#line 153 "erlang_rtti.m"
      else
#line 153 "erlang_rtti.m"
        if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 153 "erlang_rtti.m"
          {
#line 153 "erlang_rtti.m"
            MR_Word backend_libs__erlang_rtti__V_133_133 = (MR_Word) MR_body(((MR_Word) backend_libs__erlang_rtti__HeadVar__2_2), (MR_Integer) 0);

#line 153 "erlang_rtti.m"
            if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2781 "backend_libs.erlang_rtti.c"
              *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
            else
#line 153 "erlang_rtti.m"
              if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 153 "erlang_rtti.m"
                {
#line 153 "erlang_rtti.m"
                  MR_Word backend_libs__erlang_rtti__V_5_5 = (MR_Word) MR_body(((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3), (MR_Integer) 0);

#line 153 "erlang_rtti.m"
                  {
#line 153 "erlang_rtti.m"
                    backend_libs__erlang_rtti____Compare____erlang_type_ctor_data_0_0(backend_libs__erlang_rtti__HeadVar__1_1, backend_libs__erlang_rtti__V_133_133, backend_libs__erlang_rtti__V_5_5);
#line 153 "erlang_rtti.m"
                    return;
                  }
#line 153 "erlang_rtti.m"
                }
#line 153 "erlang_rtti.m"
              else
#line 153 "erlang_rtti.m"
                if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2805 "backend_libs.erlang_rtti.c"
                  *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
                else
#line 153 "erlang_rtti.m"
                  if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2811 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
                  else
#line 153 "erlang_rtti.m"
                    if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2817 "backend_libs.erlang_rtti.c"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
                    else
#line 2821 "backend_libs.erlang_rtti.c"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
          }
#line 153 "erlang_rtti.m"
        else
#line 153 "erlang_rtti.m"
          if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 153 "erlang_rtti.m"
            {
#line 153 "erlang_rtti.m"
              MR_Word backend_libs__erlang_rtti__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 0)));

#line 153 "erlang_rtti.m"
              if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2836 "backend_libs.erlang_rtti.c"
                *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
              else
#line 153 "erlang_rtti.m"
                if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2842 "backend_libs.erlang_rtti.c"
                  *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                else
#line 153 "erlang_rtti.m"
                  if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 153 "erlang_rtti.m"
                    {
#line 153 "erlang_rtti.m"
                      MR_Word backend_libs__erlang_rtti__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)));

#line 153 "erlang_rtti.m"
                      {
#line 153 "erlang_rtti.m"
                        backend_libs__rtti____Compare____rtti_type_info_0_0(backend_libs__erlang_rtti__HeadVar__1_1, backend_libs__erlang_rtti__V_134_134, backend_libs__erlang_rtti__V_22_22);
#line 153 "erlang_rtti.m"
                        return;
                      }
#line 153 "erlang_rtti.m"
                    }
#line 153 "erlang_rtti.m"
                  else
#line 153 "erlang_rtti.m"
                    if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2866 "backend_libs.erlang_rtti.c"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
                    else
#line 153 "erlang_rtti.m"
                      if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2872 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
                      else
#line 2876 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
            }
#line 153 "erlang_rtti.m"
          else
#line 153 "erlang_rtti.m"
            if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
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
                if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2897 "backend_libs.erlang_rtti.c"
                  *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                else
#line 153 "erlang_rtti.m"
                  if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2903 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                  else
#line 153 "erlang_rtti.m"
                    if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2909 "backend_libs.erlang_rtti.c"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                    else
#line 153 "erlang_rtti.m"
                      if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
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
#line 2933 "backend_libs.erlang_rtti.c"
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
#line 2953 "backend_libs.erlang_rtti.c"
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
#line 2973 "backend_libs.erlang_rtti.c"
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
#line 153 "erlang_rtti.m"
                                      return;
                                    }
#line 153 "erlang_rtti.m"
                                }
#line 153 "erlang_rtti.m"
                            }
#line 153 "erlang_rtti.m"
                        }
#line 153 "erlang_rtti.m"
                      else
#line 153 "erlang_rtti.m"
                        if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3000 "backend_libs.erlang_rtti.c"
                          *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
                        else
#line 3004 "backend_libs.erlang_rtti.c"
                          *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
              }
#line 153 "erlang_rtti.m"
            else
#line 153 "erlang_rtti.m"
              if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 153 "erlang_rtti.m"
                {
#line 153 "erlang_rtti.m"
                  MR_Word backend_libs__erlang_rtti__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 1)));

#line 153 "erlang_rtti.m"
                  if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3019 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                  else
#line 153 "erlang_rtti.m"
                    if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3025 "backend_libs.erlang_rtti.c"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                    else
#line 153 "erlang_rtti.m"
                      if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3031 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                      else
#line 153 "erlang_rtti.m"
                        if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 3037 "backend_libs.erlang_rtti.c"
                          *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                        else
#line 153 "erlang_rtti.m"
                          if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 153 "erlang_rtti.m"
                            {
#line 153 "erlang_rtti.m"
                              MR_Word backend_libs__erlang_rtti__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 1)));

#line 153 "erlang_rtti.m"
                              {
#line 153 "erlang_rtti.m"
                                backend_libs__rtti____Compare____tc_decl_0_0(backend_libs__erlang_rtti__HeadVar__1_1, backend_libs__erlang_rtti__V_131_131, backend_libs__erlang_rtti__V_97_97);
#line 153 "erlang_rtti.m"
                                return;
                              }
#line 153 "erlang_rtti.m"
                            }
#line 153 "erlang_rtti.m"
                          else
#line 3059 "backend_libs.erlang_rtti.c"
                            *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
                }
#line 153 "erlang_rtti.m"
              else
#line 153 "erlang_rtti.m"
                {
#line 153 "erlang_rtti.m"
                  MR_Word backend_libs__erlang_rtti__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__2_2, (MR_Integer) 1)));

#line 153 "erlang_rtti.m"
                  if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3072 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                  else
#line 153 "erlang_rtti.m"
                    if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3078 "backend_libs.erlang_rtti.c"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                    else
#line 153 "erlang_rtti.m"
                      if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3084 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                      else
#line 153 "erlang_rtti.m"
                        if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 3090 "backend_libs.erlang_rtti.c"
                          *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                        else
#line 153 "erlang_rtti.m"
                          if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3096 "backend_libs.erlang_rtti.c"
                            *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                          else
#line 153 "erlang_rtti.m"
                            {
#line 153 "erlang_rtti.m"
                              MR_Word backend_libs__erlang_rtti__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 1)));

#line 153 "erlang_rtti.m"
                              {
#line 153 "erlang_rtti.m"
                                backend_libs__rtti____Compare____tc_instance_0_0(backend_libs__erlang_rtti__HeadVar__1_1, backend_libs__erlang_rtti__V_132_132, backend_libs__erlang_rtti__V_114_114);
#line 153 "erlang_rtti.m"
                                return;
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
      if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
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
#line 3164 "backend_libs.erlang_rtti.c"
              {
#line 3166 "backend_libs.erlang_rtti.c"
                return backend_libs__erlang_rtti__succeeded = backend_libs__rtti____Unify____rtti_pseudo_type_info_0_0(backend_libs__erlang_rtti__V_7_7, backend_libs__erlang_rtti__V_8_8);
              }
#line 153 "erlang_rtti.m"
            }
#line 153 "erlang_rtti.m"
        }
#line 153 "erlang_rtti.m"
      else
#line 153 "erlang_rtti.m"
        if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
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
#line 3192 "backend_libs.erlang_rtti.c"
                {
#line 3194 "backend_libs.erlang_rtti.c"
                  return backend_libs__erlang_rtti__succeeded = backend_libs__erlang_rtti____Unify____erlang_type_ctor_data_0_0(backend_libs__erlang_rtti__V_3_3, backend_libs__erlang_rtti__V_4_4);
                }
#line 153 "erlang_rtti.m"
              }
#line 153 "erlang_rtti.m"
          }
#line 153 "erlang_rtti.m"
        else
#line 153 "erlang_rtti.m"
          if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
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
#line 3220 "backend_libs.erlang_rtti.c"
                  {
#line 3222 "backend_libs.erlang_rtti.c"
                    return backend_libs__erlang_rtti__succeeded = backend_libs__rtti____Unify____rtti_type_info_0_0(backend_libs__erlang_rtti__V_5_5, backend_libs__erlang_rtti__V_6_6);
                  }
#line 153 "erlang_rtti.m"
                }
#line 153 "erlang_rtti.m"
            }
#line 153 "erlang_rtti.m"
          else
#line 153 "erlang_rtti.m"
            if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
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
#line 3266 "backend_libs.erlang_rtti.c"
                    {
#line 3268 "backend_libs.erlang_rtti.c"
                      backend_libs__erlang_rtti__succeeded = backend_libs__rtti____Unify____tc_name_0_0(backend_libs__erlang_rtti__V_9_9, backend_libs__erlang_rtti__V_13_13);
                    }
#line 153 "erlang_rtti.m"
                    if (backend_libs__erlang_rtti__succeeded)
#line 153 "erlang_rtti.m"
                      {
#line 3275 "backend_libs.erlang_rtti.c"
                        {
#line 3277 "backend_libs.erlang_rtti.c"
                          backend_libs__erlang_rtti__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(backend_libs__erlang_rtti__V_10_10, backend_libs__erlang_rtti__V_14_14);
                        }
#line 153 "erlang_rtti.m"
                        if (backend_libs__erlang_rtti__succeeded)
#line 153 "erlang_rtti.m"
                          {
#line 3284 "backend_libs.erlang_rtti.c"
                            backend_libs__erlang_rtti__succeeded = (strcmp(backend_libs__erlang_rtti__V_11_11, backend_libs__erlang_rtti__V_15_15) == 0);
#line 153 "erlang_rtti.m"
                            if (backend_libs__erlang_rtti__succeeded)
#line 3288 "backend_libs.erlang_rtti.c"
                              {
#line 3290 "backend_libs.erlang_rtti.c"
                                return backend_libs__erlang_rtti__succeeded = backend_libs__rtti____Unify____base_typeclass_info_0_0(backend_libs__erlang_rtti__V_12_12, backend_libs__erlang_rtti__V_16_16);
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
            else
#line 153 "erlang_rtti.m"
              if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
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
#line 3320 "backend_libs.erlang_rtti.c"
                      {
#line 3322 "backend_libs.erlang_rtti.c"
                        return backend_libs__erlang_rtti__succeeded = backend_libs__rtti____Unify____tc_decl_0_0(backend_libs__erlang_rtti__V_17_17, backend_libs__erlang_rtti__V_18_18);
                      }
#line 153 "erlang_rtti.m"
                    }
#line 153 "erlang_rtti.m"
                }
#line 153 "erlang_rtti.m"
              else
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
#line 3346 "backend_libs.erlang_rtti.c"
                      {
#line 3348 "backend_libs.erlang_rtti.c"
                        return backend_libs__erlang_rtti__succeeded = backend_libs__rtti____Unify____tc_instance_0_0(backend_libs__erlang_rtti__V_19_19, backend_libs__erlang_rtti__V_20_20);
                      }
#line 153 "erlang_rtti.m"
                    }
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
#line 133 "erlang_rtti.m"
      return;
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
#line 3403 "backend_libs.erlang_rtti.c"
  {
#line 3405 "backend_libs.erlang_rtti.c"
    MR_bool backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__HeadVar__2_1 == backend_libs__erlang_rtti__HeadVar__2_2);

#line 3408 "backend_libs.erlang_rtti.c"
    return backend_libs__erlang_rtti__succeeded;
#line 3410 "backend_libs.erlang_rtti.c"
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
#line 3439 "backend_libs.erlang_rtti.c"
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
#line 3481 "backend_libs.erlang_rtti.c"
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
#line 3501 "backend_libs.erlang_rtti.c"
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
#line 3521 "backend_libs.erlang_rtti.c"
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
#line 3541 "backend_libs.erlang_rtti.c"
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
#line 3565 "backend_libs.erlang_rtti.c"
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
#line 3585 "backend_libs.erlang_rtti.c"
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
#line 108 "erlang_rtti.m"
                                  return;
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

#line 3688 "backend_libs.erlang_rtti.c"
        backend_libs__erlang_rtti__succeeded = (strcmp(backend_libs__erlang_rtti__V_3_3, backend_libs__erlang_rtti__V_10_10) == 0);
#line 108 "erlang_rtti.m"
        if (backend_libs__erlang_rtti__succeeded)
#line 108 "erlang_rtti.m"
          {
#line 3694 "backend_libs.erlang_rtti.c"
            backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__V_4_4 == backend_libs__erlang_rtti__V_11_11);
#line 108 "erlang_rtti.m"
            if (backend_libs__erlang_rtti__succeeded)
#line 108 "erlang_rtti.m"
              {
#line 3700 "backend_libs.erlang_rtti.c"
                backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__V_5_5 == backend_libs__erlang_rtti__V_12_12);
#line 108 "erlang_rtti.m"
                if (backend_libs__erlang_rtti__succeeded)
#line 108 "erlang_rtti.m"
                  {
#line 3706 "backend_libs.erlang_rtti.c"
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

#line 3731 "backend_libs.erlang_rtti.c"
                            backend_libs__erlang_rtti__succeeded = (strcmp(backend_libs__erlang_rtti__V_21_21, backend_libs__erlang_rtti__V_22_22) == 0);
#line 127 "erlang_rtti.m"
                          }
#line 108 "erlang_rtti.m"
                        if (backend_libs__erlang_rtti__succeeded)
#line 108 "erlang_rtti.m"
                          {
#line 3739 "backend_libs.erlang_rtti.c"
                            backend_libs__erlang_rtti__TypeInfo_19_19 = (MR_Word) &backend_libs__erlang_rtti_scalar_common_1[0];
#line 3741 "backend_libs.erlang_rtti.c"
                            {
#line 3743 "backend_libs.erlang_rtti.c"
                              backend_libs__erlang_rtti__succeeded = mercury__builtin__unify_2_p_0(backend_libs__erlang_rtti__TypeInfo_19_19, ((MR_Box) (backend_libs__erlang_rtti__V_8_8)), ((MR_Box) (backend_libs__erlang_rtti__V_15_15)));
                            }
#line 108 "erlang_rtti.m"
                            if (backend_libs__erlang_rtti__succeeded)
#line 108 "erlang_rtti.m"
                              {
#line 3750 "backend_libs.erlang_rtti.c"
                                backend_libs__erlang_rtti__TypeInfo_20_20 = (MR_Word) &backend_libs__erlang_rtti_scalar_common_1[1];
#line 3752 "backend_libs.erlang_rtti.c"
                                {
#line 3754 "backend_libs.erlang_rtti.c"
                                  return backend_libs__erlang_rtti__succeeded = mercury__builtin__unify_2_p_0(backend_libs__erlang_rtti__TypeInfo_20_20, ((MR_Box) (backend_libs__erlang_rtti__V_9_9)), ((MR_Box) (backend_libs__erlang_rtti__V_16_16)));
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
#line 3802 "backend_libs.erlang_rtti.c"
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
#line 127 "erlang_rtti.m"
          return;
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

#line 3860 "backend_libs.erlang_rtti.c"
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
