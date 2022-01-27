/*
** Automatically generated from `erlang_rtti.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
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




#line 131 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_atom_raw_0[1];

#line 134 "backend_libs.erlang_rtti.c"
static const MR_NotagFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__notag_functor_desc_erlang_atom_raw_0;

#line 137 "backend_libs.erlang_rtti.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__erlang_rtti__list__ti_list_1backend_libs__rtti__type_ctor_info_du_arg_info_0;

#line 140 "backend_libs.erlang_rtti.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__erlang_rtti__maybe__ti_maybe_1backend_libs__rtti__type_ctor_info_exist_info_0;

#line 143 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_du_functor_0_0[7];

#line 146 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_du_functor_0_0[7];

#line 149 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_du_functor_0_0;

#line 152 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_du_functor_0_0[1];

#line 155 "backend_libs.erlang_rtti.c"
static const MR_DuPtagLayout backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_du_functor_0[1];

#line 158 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_du_functor_0[1];

#line 161 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_du_functor_0[1];

#line 164 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_0;

#line 167 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_1;

#line 170 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_2;

#line 173 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_3;

#line 176 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_4;

#line 179 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_5;

#line 182 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_6;

#line 185 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_value_ordered_erlang_impl_ctor_0[7];

#line 188 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_name_ordered_erlang_impl_ctor_0[7];

#line 191 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_impl_ctor_0[7];

#line 194 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_0[1];

#line 197 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_0;

#line 200 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_1[1];

#line 203 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_1;

#line 206 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_2[1];

#line 209 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_2;

#line 212 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_3[4];

#line 215 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_3;

#line 218 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_4[1];

#line 221 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_4;

#line 224 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_5[1];

#line 227 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_5;

#line 230 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_0[1];

#line 233 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_1[1];

#line 236 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_2[1];

#line 239 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_3[3];

#line 242 "backend_libs.erlang_rtti.c"
static const MR_DuPtagLayout backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_rtti_data_0[4];

#line 245 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_rtti_data_0[6];

#line 248 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_rtti_data_0[6];

#line 251 "backend_libs.erlang_rtti.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__erlang_rtti__maybe__ti_maybe_1hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0;

#line 254 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_data_0_0[7];

#line 257 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_data_0_0[7];

#line 260 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_data_0_0;

#line 263 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_data_0_0[1];

#line 266 "backend_libs.erlang_rtti.c"
static const MR_DuPtagLayout backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_type_ctor_data_0[1];

#line 269 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_type_ctor_data_0[1];

#line 272 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_type_ctor_data_0[1];

#line 275 "backend_libs.erlang_rtti.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__erlang_rtti__list__ti_list_1backend_libs__erlang_rtti__type_ctor_info_erlang_du_functor_0;

#line 278 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_0[1];

#line 281 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_0[1];

#line 284 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_0;

#line 287 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_1[1];

#line 290 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_1[1];

#line 293 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_1;

#line 296 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_2;

#line 299 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_3;

#line 302 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_4[1];

#line 305 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_4[1];

#line 308 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_4;

#line 311 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_5[1];

#line 314 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_5[1];

#line 317 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_5;

#line 320 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_6[1];

#line 323 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_6[1];

#line 326 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_6;

#line 329 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_7;

#line 332 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_0[3];

#line 335 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_1[1];

#line 338 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_2[1];

#line 341 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_3[3];

#line 344 "backend_libs.erlang_rtti.c"
static const MR_DuPtagLayout backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_type_ctor_details_0[4];

#line 347 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_type_ctor_details_0[8];

#line 350 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_type_ctor_details_0[8];

#line 353 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_atom_raw_0_0_10001(
#line 356 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 358 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2);

#line 361 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_atom_raw_0_0_10001(
#line 364 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 366 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 368 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3);

#line 371 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_du_functor_0_0_10001(
#line 374 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 376 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2);

#line 379 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_du_functor_0_0_10001(
#line 382 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 384 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 386 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3);

#line 389 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_impl_ctor_0_0_10001(
#line 392 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 394 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2);

#line 397 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_impl_ctor_0_0_10001(
#line 400 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 402 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 404 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3);

#line 407 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_rtti_data_0_0_10001(
#line 410 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 412 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2);

#line 415 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_rtti_data_0_0_10001(
#line 418 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 420 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 422 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3);

#line 425 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_type_ctor_data_0_0_10001(
#line 428 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 430 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2);

#line 433 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_type_ctor_data_0_0_10001(
#line 436 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 438 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 440 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3);

#line 443 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_type_ctor_details_0_0_10001(
#line 446 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 448 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2);

#line 451 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_type_ctor_details_0_0_10001(
#line 454 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 456 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 458 "backend_libs.erlang_rtti.c"
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



#line 507 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_atom_raw_0[1] = {
  (MR_Integer) 0
};

#line 512 "backend_libs.erlang_rtti.c"
static const MR_NotagFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__notag_functor_desc_erlang_atom_raw_0 = {
  (MR_String) "erlang_atom_raw",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 519 "backend_libs.erlang_rtti.c"
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

#line 540 "backend_libs.erlang_rtti.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__erlang_rtti__list__ti_list_1backend_libs__rtti__type_ctor_info_du_arg_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0
  }
};

#line 548 "backend_libs.erlang_rtti.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__erlang_rtti__maybe__ti_maybe_1backend_libs__rtti__type_ctor_info_exist_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_info_0
  }
};

#line 556 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_du_functor_0_0[7] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_atom_raw_0,
  (MR_PseudoTypeInfo) &backend_libs__erlang_rtti__list__ti_list_1backend_libs__rtti__type_ctor_info_du_arg_info_0,
  (MR_PseudoTypeInfo) &backend_libs__erlang_rtti__maybe__ti_maybe_1backend_libs__rtti__type_ctor_info_exist_info_0
};

#line 567 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_du_functor_0_0[7] = {
  (MR_String) "edu_name",
  (MR_String) "edu_orig_arity",
  (MR_String) "edu_ordinal",
  (MR_String) "edu_lex",
  (MR_String) "edu_rep",
  (MR_String) "edu_arg_infos",
  (MR_String) "edu_exist_info"
};

#line 578 "backend_libs.erlang_rtti.c"
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

#line 593 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_du_functor_0_0[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_du_functor_0_0
};

#line 598 "backend_libs.erlang_rtti.c"
static const MR_DuPtagLayout backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_du_functor_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_du_functor_0_0
  }
};

#line 607 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_du_functor_0[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_du_functor_0_0
};

#line 612 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_du_functor_0[1] = {
  (MR_Integer) 0
};

#line 617 "backend_libs.erlang_rtti.c"
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

#line 638 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_0 = {
  (MR_String) "erlang_impl_ctor_type_info",
  (MR_Integer) 0
};

#line 644 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_1 = {
  (MR_String) "erlang_impl_ctor_type_ctor_info",
  (MR_Integer) 1
};

#line 650 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_2 = {
  (MR_String) "erlang_impl_ctor_typeclass_info",
  (MR_Integer) 2
};

#line 656 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_3 = {
  (MR_String) "erlang_impl_ctor_base_typeclass_info",
  (MR_Integer) 3
};

#line 662 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_4 = {
  (MR_String) "erlang_impl_ctor_hp",
  (MR_Integer) 4
};

#line 668 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_5 = {
  (MR_String) "erlang_impl_ctor_subgoal",
  (MR_Integer) 5
};

#line 674 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_6 = {
  (MR_String) "erlang_impl_ctor_ticket",
  (MR_Integer) 6
};

#line 680 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_value_ordered_erlang_impl_ctor_0[7] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_0,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_1,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_2,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_3,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_4,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_5,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_6
};

#line 691 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_name_ordered_erlang_impl_ctor_0[7] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_3,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_4,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_5,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_6,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_1,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_0,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_2
};

#line 702 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_impl_ctor_0[7] = {
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 6,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 713 "backend_libs.erlang_rtti.c"
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

#line 734 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_0[1] = {
  (MR_PseudoTypeInfo) &backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_type_ctor_data_0
};

#line 739 "backend_libs.erlang_rtti.c"
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

#line 754 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_1[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0
};

#line 759 "backend_libs.erlang_rtti.c"
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

#line 774 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_2[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_pseudo_type_info_0
};

#line 779 "backend_libs.erlang_rtti.c"
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

#line 794 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_3[4] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_name_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_base_typeclass_info_0
};

#line 802 "backend_libs.erlang_rtti.c"
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

#line 817 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_4[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_decl_0
};

#line 822 "backend_libs.erlang_rtti.c"
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

#line 837 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_5[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_instance_0
};

#line 842 "backend_libs.erlang_rtti.c"
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

#line 857 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_0[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_0
};

#line 862 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_1[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_1
};

#line 867 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_2[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_2
};

#line 872 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_3[3] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_3,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_4,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_5
};

#line 879 "backend_libs.erlang_rtti.c"
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

#line 903 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_rtti_data_0[6] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_3,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_2,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_4,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_5,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_0,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_1
};

#line 913 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_rtti_data_0[6] = {
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 923 "backend_libs.erlang_rtti.c"
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

#line 944 "backend_libs.erlang_rtti.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__erlang_rtti__maybe__ti_maybe_1hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0
  }
};

#line 952 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_data_0_0[7] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &backend_libs__erlang_rtti__maybe__ti_maybe_1hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0,
  (MR_PseudoTypeInfo) &backend_libs__erlang_rtti__maybe__ti_maybe_1hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0,
  (MR_PseudoTypeInfo) &backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_type_ctor_details_0
};

#line 963 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_data_0_0[7] = {
  (MR_String) "etcr_version",
  (MR_String) "etcr_module_name",
  (MR_String) "etcr_type_name",
  (MR_String) "etcr_arity",
  (MR_String) "etcr_unify",
  (MR_String) "etcr_compare",
  (MR_String) "etcr_rep_details"
};

#line 974 "backend_libs.erlang_rtti.c"
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

#line 989 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_data_0_0[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_data_0_0
};

#line 994 "backend_libs.erlang_rtti.c"
static const MR_DuPtagLayout backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_type_ctor_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_data_0_0
  }
};

#line 1003 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_type_ctor_data_0[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_data_0_0
};

#line 1008 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_type_ctor_data_0[1] = {
  (MR_Integer) 0
};

#line 1013 "backend_libs.erlang_rtti.c"
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

#line 1034 "backend_libs.erlang_rtti.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__erlang_rtti__list__ti_list_1backend_libs__erlang_rtti__type_ctor_info_erlang_du_functor_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_du_functor_0
  }
};

#line 1042 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_0[1] = {
  (MR_PseudoTypeInfo) &backend_libs__erlang_rtti__list__ti_list_1backend_libs__erlang_rtti__type_ctor_info_erlang_du_functor_0
};

#line 1047 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_0[1] = {
  (MR_String) "edu_functors"
};

#line 1052 "backend_libs.erlang_rtti.c"
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

#line 1067 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1072 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_1[1] = {
  (MR_String) "edummy_name"
};

#line 1077 "backend_libs.erlang_rtti.c"
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

#line 1092 "backend_libs.erlang_rtti.c"
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

#line 1107 "backend_libs.erlang_rtti.c"
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

#line 1122 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_4[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0
};

#line 1127 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_4[1] = {
  (MR_String) "eeqv_type"
};

#line 1132 "backend_libs.erlang_rtti.c"
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

#line 1147 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_5[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_builtin_ctor_0
};

#line 1152 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_5[1] = {
  (MR_String) "ebuiltin_ctor"
};

#line 1157 "backend_libs.erlang_rtti.c"
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

#line 1172 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_6[1] = {
  (MR_PseudoTypeInfo) &backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_impl_ctor_0
};

#line 1177 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_6[1] = {
  (MR_String) "eimpl_ctor"
};

#line 1182 "backend_libs.erlang_rtti.c"
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

#line 1197 "backend_libs.erlang_rtti.c"
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

#line 1212 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_0[3] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_2,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_3,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_7
};

#line 1219 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_1[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_0
};

#line 1224 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_2[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_1
};

#line 1229 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_3[3] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_4,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_5,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_6
};

#line 1236 "backend_libs.erlang_rtti.c"
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

#line 1260 "backend_libs.erlang_rtti.c"
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

#line 1272 "backend_libs.erlang_rtti.c"
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

#line 1284 "backend_libs.erlang_rtti.c"
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

#line 1305 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_atom_raw_0_0_10001(
#line 1308 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 1310 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2)
#line 1312 "backend_libs.erlang_rtti.c"
{
#line 1314 "backend_libs.erlang_rtti.c"
  {
#line 1316 "backend_libs.erlang_rtti.c"
    MR_bool backend_libs__erlang_rtti__succeeded;

#line 1319 "backend_libs.erlang_rtti.c"
    {
#line 1321 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti__succeeded = backend_libs__erlang_rtti____Unify____erlang_atom_raw_0_0(((MR_Word) backend_libs__erlang_rtti__wrapper_arg_1), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2));
    }
#line 1324 "backend_libs.erlang_rtti.c"
    return backend_libs__erlang_rtti__succeeded;
#line 1326 "backend_libs.erlang_rtti.c"
  }
#line 1328 "backend_libs.erlang_rtti.c"
}

#line 1331 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_atom_raw_0_0_10001(
#line 1334 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 1336 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 1338 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3)
#line 1340 "backend_libs.erlang_rtti.c"
{
#line 1342 "backend_libs.erlang_rtti.c"
  {
#line 1344 "backend_libs.erlang_rtti.c"
    MR_Word backend_libs__erlang_rtti__conv0_HeadVar__1_1;

#line 1347 "backend_libs.erlang_rtti.c"
    {
#line 1349 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti____Compare____erlang_atom_raw_0_0(&backend_libs__erlang_rtti__conv0_HeadVar__1_1, ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_3));
    }
#line 1352 "backend_libs.erlang_rtti.c"
    *backend_libs__erlang_rtti__wrapper_arg_1 = ((MR_Box) (backend_libs__erlang_rtti__conv0_HeadVar__1_1));
#line 1354 "backend_libs.erlang_rtti.c"
  }
#line 1356 "backend_libs.erlang_rtti.c"
}

#line 1359 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_du_functor_0_0_10001(
#line 1362 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 1364 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2)
#line 1366 "backend_libs.erlang_rtti.c"
{
#line 1368 "backend_libs.erlang_rtti.c"
  {
#line 1370 "backend_libs.erlang_rtti.c"
    MR_bool backend_libs__erlang_rtti__succeeded;

#line 1373 "backend_libs.erlang_rtti.c"
    {
#line 1375 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti__succeeded = backend_libs__erlang_rtti____Unify____erlang_du_functor_0_0(((MR_Word) backend_libs__erlang_rtti__wrapper_arg_1), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2));
    }
#line 1378 "backend_libs.erlang_rtti.c"
    return backend_libs__erlang_rtti__succeeded;
#line 1380 "backend_libs.erlang_rtti.c"
  }
#line 1382 "backend_libs.erlang_rtti.c"
}

#line 1385 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_du_functor_0_0_10001(
#line 1388 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 1390 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 1392 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3)
#line 1394 "backend_libs.erlang_rtti.c"
{
#line 1396 "backend_libs.erlang_rtti.c"
  {
#line 1398 "backend_libs.erlang_rtti.c"
    MR_Word backend_libs__erlang_rtti__conv0_HeadVar__1_1;

#line 1401 "backend_libs.erlang_rtti.c"
    {
#line 1403 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti____Compare____erlang_du_functor_0_0(&backend_libs__erlang_rtti__conv0_HeadVar__1_1, ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_3));
    }
#line 1406 "backend_libs.erlang_rtti.c"
    *backend_libs__erlang_rtti__wrapper_arg_1 = ((MR_Box) (backend_libs__erlang_rtti__conv0_HeadVar__1_1));
#line 1408 "backend_libs.erlang_rtti.c"
  }
#line 1410 "backend_libs.erlang_rtti.c"
}

#line 1413 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_impl_ctor_0_0_10001(
#line 1416 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 1418 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2)
#line 1420 "backend_libs.erlang_rtti.c"
{
#line 1422 "backend_libs.erlang_rtti.c"
  {
#line 1424 "backend_libs.erlang_rtti.c"
    MR_bool backend_libs__erlang_rtti__succeeded;

#line 1427 "backend_libs.erlang_rtti.c"
    {
#line 1429 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti__succeeded = backend_libs__erlang_rtti____Unify____erlang_impl_ctor_0_0(((MR_Word) backend_libs__erlang_rtti__wrapper_arg_1), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2));
    }
#line 1432 "backend_libs.erlang_rtti.c"
    return backend_libs__erlang_rtti__succeeded;
#line 1434 "backend_libs.erlang_rtti.c"
  }
#line 1436 "backend_libs.erlang_rtti.c"
}

#line 1439 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_impl_ctor_0_0_10001(
#line 1442 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 1444 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 1446 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3)
#line 1448 "backend_libs.erlang_rtti.c"
{
#line 1450 "backend_libs.erlang_rtti.c"
  {
#line 1452 "backend_libs.erlang_rtti.c"
    MR_Word backend_libs__erlang_rtti__conv0_HeadVar__1_1;

#line 1455 "backend_libs.erlang_rtti.c"
    {
#line 1457 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti____Compare____erlang_impl_ctor_0_0(&backend_libs__erlang_rtti__conv0_HeadVar__1_1, ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_3));
    }
#line 1460 "backend_libs.erlang_rtti.c"
    *backend_libs__erlang_rtti__wrapper_arg_1 = ((MR_Box) (backend_libs__erlang_rtti__conv0_HeadVar__1_1));
#line 1462 "backend_libs.erlang_rtti.c"
  }
#line 1464 "backend_libs.erlang_rtti.c"
}

#line 1467 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_rtti_data_0_0_10001(
#line 1470 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 1472 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2)
#line 1474 "backend_libs.erlang_rtti.c"
{
#line 1476 "backend_libs.erlang_rtti.c"
  {
#line 1478 "backend_libs.erlang_rtti.c"
    MR_bool backend_libs__erlang_rtti__succeeded;

#line 1481 "backend_libs.erlang_rtti.c"
    {
#line 1483 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti__succeeded = backend_libs__erlang_rtti____Unify____erlang_rtti_data_0_0(((MR_Word) backend_libs__erlang_rtti__wrapper_arg_1), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2));
    }
#line 1486 "backend_libs.erlang_rtti.c"
    return backend_libs__erlang_rtti__succeeded;
#line 1488 "backend_libs.erlang_rtti.c"
  }
#line 1490 "backend_libs.erlang_rtti.c"
}

#line 1493 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_rtti_data_0_0_10001(
#line 1496 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 1498 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 1500 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3)
#line 1502 "backend_libs.erlang_rtti.c"
{
#line 1504 "backend_libs.erlang_rtti.c"
  {
#line 1506 "backend_libs.erlang_rtti.c"
    MR_Word backend_libs__erlang_rtti__conv0_HeadVar__1_1;

#line 1509 "backend_libs.erlang_rtti.c"
    {
#line 1511 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti____Compare____erlang_rtti_data_0_0(&backend_libs__erlang_rtti__conv0_HeadVar__1_1, ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_3));
    }
#line 1514 "backend_libs.erlang_rtti.c"
    *backend_libs__erlang_rtti__wrapper_arg_1 = ((MR_Box) (backend_libs__erlang_rtti__conv0_HeadVar__1_1));
#line 1516 "backend_libs.erlang_rtti.c"
  }
#line 1518 "backend_libs.erlang_rtti.c"
}

#line 1521 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_type_ctor_data_0_0_10001(
#line 1524 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 1526 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2)
#line 1528 "backend_libs.erlang_rtti.c"
{
#line 1530 "backend_libs.erlang_rtti.c"
  {
#line 1532 "backend_libs.erlang_rtti.c"
    MR_bool backend_libs__erlang_rtti__succeeded;

#line 1535 "backend_libs.erlang_rtti.c"
    {
#line 1537 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti__succeeded = backend_libs__erlang_rtti____Unify____erlang_type_ctor_data_0_0(((MR_Word) backend_libs__erlang_rtti__wrapper_arg_1), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2));
    }
#line 1540 "backend_libs.erlang_rtti.c"
    return backend_libs__erlang_rtti__succeeded;
#line 1542 "backend_libs.erlang_rtti.c"
  }
#line 1544 "backend_libs.erlang_rtti.c"
}

#line 1547 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_type_ctor_data_0_0_10001(
#line 1550 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 1552 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 1554 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3)
#line 1556 "backend_libs.erlang_rtti.c"
{
#line 1558 "backend_libs.erlang_rtti.c"
  {
#line 1560 "backend_libs.erlang_rtti.c"
    MR_Word backend_libs__erlang_rtti__conv0_HeadVar__1_1;

#line 1563 "backend_libs.erlang_rtti.c"
    {
#line 1565 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti____Compare____erlang_type_ctor_data_0_0(&backend_libs__erlang_rtti__conv0_HeadVar__1_1, ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_3));
    }
#line 1568 "backend_libs.erlang_rtti.c"
    *backend_libs__erlang_rtti__wrapper_arg_1 = ((MR_Box) (backend_libs__erlang_rtti__conv0_HeadVar__1_1));
#line 1570 "backend_libs.erlang_rtti.c"
  }
#line 1572 "backend_libs.erlang_rtti.c"
}

#line 1575 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_type_ctor_details_0_0_10001(
#line 1578 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 1580 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2)
#line 1582 "backend_libs.erlang_rtti.c"
{
#line 1584 "backend_libs.erlang_rtti.c"
  {
#line 1586 "backend_libs.erlang_rtti.c"
    MR_bool backend_libs__erlang_rtti__succeeded;

#line 1589 "backend_libs.erlang_rtti.c"
    {
#line 1591 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti__succeeded = backend_libs__erlang_rtti____Unify____erlang_type_ctor_details_0_0(((MR_Word) backend_libs__erlang_rtti__wrapper_arg_1), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2));
    }
#line 1594 "backend_libs.erlang_rtti.c"
    return backend_libs__erlang_rtti__succeeded;
#line 1596 "backend_libs.erlang_rtti.c"
  }
#line 1598 "backend_libs.erlang_rtti.c"
}

#line 1601 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_type_ctor_details_0_0_10001(
#line 1604 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 1606 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 1608 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3)
#line 1610 "backend_libs.erlang_rtti.c"
{
#line 1612 "backend_libs.erlang_rtti.c"
  {
#line 1614 "backend_libs.erlang_rtti.c"
    MR_Word backend_libs__erlang_rtti__conv0_HeadVar__1_1;

#line 1617 "backend_libs.erlang_rtti.c"
    {
#line 1619 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti____Compare____erlang_type_ctor_details_0_0(&backend_libs__erlang_rtti__conv0_HeadVar__1_1, ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_3));
    }
#line 1622 "backend_libs.erlang_rtti.c"
    *backend_libs__erlang_rtti__wrapper_arg_1 = ((MR_Box) (backend_libs__erlang_rtti__conv0_HeadVar__1_1));
#line 1624 "backend_libs.erlang_rtti.c"
  }
#line 1626 "backend_libs.erlang_rtti.c"
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
#line 1653 "backend_libs.erlang_rtti.c"
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
#line 1679 "backend_libs.erlang_rtti.c"
                *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
              else
#line 72 "erlang_rtti.m"
                if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1685 "backend_libs.erlang_rtti.c"
                  *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                else
#line 72 "erlang_rtti.m"
                  if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1691 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                  else
#line 72 "erlang_rtti.m"
                    if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1697 "backend_libs.erlang_rtti.c"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                    else
#line 1701 "backend_libs.erlang_rtti.c"
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
#line 1727 "backend_libs.erlang_rtti.c"
                  *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                else
#line 72 "erlang_rtti.m"
                  if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1733 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                  else
#line 72 "erlang_rtti.m"
                    if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1739 "backend_libs.erlang_rtti.c"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                    else
#line 72 "erlang_rtti.m"
                      if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1745 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                      else
#line 1749 "backend_libs.erlang_rtti.c"
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
#line 1775 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                  else
#line 72 "erlang_rtti.m"
                    if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1781 "backend_libs.erlang_rtti.c"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                    else
#line 72 "erlang_rtti.m"
                      if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1787 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                      else
#line 72 "erlang_rtti.m"
                        if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1793 "backend_libs.erlang_rtti.c"
                          *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                        else
#line 1797 "backend_libs.erlang_rtti.c"
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
#line 1810 "backend_libs.erlang_rtti.c"
                  *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                else
#line 72 "erlang_rtti.m"
                  if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1816 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                  else
#line 72 "erlang_rtti.m"
                    if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1822 "backend_libs.erlang_rtti.c"
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
#line 1846 "backend_libs.erlang_rtti.c"
                          *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                        else
#line 72 "erlang_rtti.m"
                          if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1852 "backend_libs.erlang_rtti.c"
                            *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                          else
#line 72 "erlang_rtti.m"
                            if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1858 "backend_libs.erlang_rtti.c"
                              *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                            else
#line 1862 "backend_libs.erlang_rtti.c"
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
#line 1877 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                  else
#line 72 "erlang_rtti.m"
                    if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1883 "backend_libs.erlang_rtti.c"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                    else
#line 72 "erlang_rtti.m"
                      if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1889 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                      else
#line 72 "erlang_rtti.m"
                        if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1895 "backend_libs.erlang_rtti.c"
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
#line 1919 "backend_libs.erlang_rtti.c"
                              *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                            else
#line 72 "erlang_rtti.m"
                              if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1925 "backend_libs.erlang_rtti.c"
                                *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                              else
#line 1929 "backend_libs.erlang_rtti.c"
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
#line 1944 "backend_libs.erlang_rtti.c"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                    else
#line 72 "erlang_rtti.m"
                      if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1950 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                      else
#line 72 "erlang_rtti.m"
                        if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1956 "backend_libs.erlang_rtti.c"
                          *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                        else
#line 72 "erlang_rtti.m"
                          if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1962 "backend_libs.erlang_rtti.c"
                            *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                          else
#line 72 "erlang_rtti.m"
                            if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1968 "backend_libs.erlang_rtti.c"
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
#line 1992 "backend_libs.erlang_rtti.c"
                                  *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                                else
#line 1996 "backend_libs.erlang_rtti.c"
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
#line 2011 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                      else
#line 72 "erlang_rtti.m"
                        if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 2017 "backend_libs.erlang_rtti.c"
                          *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                        else
#line 72 "erlang_rtti.m"
                          if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2023 "backend_libs.erlang_rtti.c"
                            *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                          else
#line 72 "erlang_rtti.m"
                            if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2029 "backend_libs.erlang_rtti.c"
                              *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                            else
#line 72 "erlang_rtti.m"
                              if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2035 "backend_libs.erlang_rtti.c"
                                *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                              else
#line 72 "erlang_rtti.m"
                                if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2041 "backend_libs.erlang_rtti.c"
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
#line 2063 "backend_libs.erlang_rtti.c"
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
#line 2076 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                      else
#line 72 "erlang_rtti.m"
                        if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 2082 "backend_libs.erlang_rtti.c"
                          *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                        else
#line 72 "erlang_rtti.m"
                          if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2088 "backend_libs.erlang_rtti.c"
                            *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                          else
#line 72 "erlang_rtti.m"
                            if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2094 "backend_libs.erlang_rtti.c"
                              *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                            else
#line 72 "erlang_rtti.m"
                              if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2100 "backend_libs.erlang_rtti.c"
                                *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                              else
#line 72 "erlang_rtti.m"
                                if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2106 "backend_libs.erlang_rtti.c"
                                  *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                                else
#line 72 "erlang_rtti.m"
                                  if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2112 "backend_libs.erlang_rtti.c"
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
#line 2231 "backend_libs.erlang_rtti.c"
                    backend_libs__erlang_rtti__TypeInfo_22_22 = (MR_Word) &backend_libs__erlang_rtti_scalar_common_1[3];
#line 2233 "backend_libs.erlang_rtti.c"
                    {
#line 2235 "backend_libs.erlang_rtti.c"
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
#line 2261 "backend_libs.erlang_rtti.c"
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
#line 2286 "backend_libs.erlang_rtti.c"
                        {
#line 2288 "backend_libs.erlang_rtti.c"
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
#line 2314 "backend_libs.erlang_rtti.c"
                          {
#line 2316 "backend_libs.erlang_rtti.c"
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
#line 2340 "backend_libs.erlang_rtti.c"
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
#line 2377 "backend_libs.erlang_rtti.c"
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
#line 2419 "backend_libs.erlang_rtti.c"
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
              mdbcomp__prim_data____Compare____sym_name_0_0(&backend_libs__erlang_rtti__V_19_19, backend_libs__erlang_rtti__V_5_5, backend_libs__erlang_rtti__V_12_12);
            }
#line 2439 "backend_libs.erlang_rtti.c"
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
#line 2459 "backend_libs.erlang_rtti.c"
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
#line 2479 "backend_libs.erlang_rtti.c"
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
#line 2499 "backend_libs.erlang_rtti.c"
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
#line 2519 "backend_libs.erlang_rtti.c"
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

#line 2614 "backend_libs.erlang_rtti.c"
        backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__V_3_3 == backend_libs__erlang_rtti__V_10_10);
#line 46 "erlang_rtti.m"
        if (backend_libs__erlang_rtti__succeeded)
#line 46 "erlang_rtti.m"
          {
#line 2620 "backend_libs.erlang_rtti.c"
            {
#line 2622 "backend_libs.erlang_rtti.c"
              backend_libs__erlang_rtti__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(backend_libs__erlang_rtti__V_4_4, backend_libs__erlang_rtti__V_11_11);
            }
#line 46 "erlang_rtti.m"
            if (backend_libs__erlang_rtti__succeeded)
#line 46 "erlang_rtti.m"
              {
#line 2629 "backend_libs.erlang_rtti.c"
                backend_libs__erlang_rtti__succeeded = (strcmp(backend_libs__erlang_rtti__V_5_5, backend_libs__erlang_rtti__V_12_12) == 0);
#line 46 "erlang_rtti.m"
                if (backend_libs__erlang_rtti__succeeded)
#line 46 "erlang_rtti.m"
                  {
#line 2635 "backend_libs.erlang_rtti.c"
                    backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__V_6_6 == backend_libs__erlang_rtti__V_13_13);
#line 46 "erlang_rtti.m"
                    if (backend_libs__erlang_rtti__succeeded)
#line 46 "erlang_rtti.m"
                      {
#line 2641 "backend_libs.erlang_rtti.c"
                        backend_libs__erlang_rtti__TypeInfo_20_20 = (MR_Word) &backend_libs__erlang_rtti_scalar_common_1[2];
#line 2643 "backend_libs.erlang_rtti.c"
                        {
#line 2645 "backend_libs.erlang_rtti.c"
                          backend_libs__erlang_rtti__succeeded = mercury__builtin__unify_2_p_0(backend_libs__erlang_rtti__TypeInfo_20_20, ((MR_Box) (backend_libs__erlang_rtti__V_7_7)), ((MR_Box) (backend_libs__erlang_rtti__V_14_14)));
                        }
#line 46 "erlang_rtti.m"
                        if (backend_libs__erlang_rtti__succeeded)
#line 46 "erlang_rtti.m"
                          {
#line 2652 "backend_libs.erlang_rtti.c"
                            backend_libs__erlang_rtti__TypeInfo_21_21 = (MR_Word) &backend_libs__erlang_rtti_scalar_common_1[2];
#line 2654 "backend_libs.erlang_rtti.c"
                            {
#line 2656 "backend_libs.erlang_rtti.c"
                              backend_libs__erlang_rtti__succeeded = mercury__builtin__unify_2_p_0(backend_libs__erlang_rtti__TypeInfo_21_21, ((MR_Box) (backend_libs__erlang_rtti__V_8_8)), ((MR_Box) (backend_libs__erlang_rtti__V_15_15)));
                            }
#line 46 "erlang_rtti.m"
                            if (backend_libs__erlang_rtti__succeeded)
#line 2661 "backend_libs.erlang_rtti.c"
                              {
#line 2663 "backend_libs.erlang_rtti.c"
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
#line 2709 "backend_libs.erlang_rtti.c"
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
#line 2740 "backend_libs.erlang_rtti.c"
              *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
            else
#line 153 "erlang_rtti.m"
              if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2746 "backend_libs.erlang_rtti.c"
                *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
              else
#line 153 "erlang_rtti.m"
                if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2752 "backend_libs.erlang_rtti.c"
                  *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
                else
#line 153 "erlang_rtti.m"
                  if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2758 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
                  else
#line 2762 "backend_libs.erlang_rtti.c"
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
#line 2777 "backend_libs.erlang_rtti.c"
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
#line 2801 "backend_libs.erlang_rtti.c"
                  *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
                else
#line 153 "erlang_rtti.m"
                  if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2807 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
                  else
#line 153 "erlang_rtti.m"
                    if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2813 "backend_libs.erlang_rtti.c"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
                    else
#line 2817 "backend_libs.erlang_rtti.c"
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
#line 2832 "backend_libs.erlang_rtti.c"
                *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
              else
#line 153 "erlang_rtti.m"
                if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2838 "backend_libs.erlang_rtti.c"
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
#line 2862 "backend_libs.erlang_rtti.c"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
                    else
#line 153 "erlang_rtti.m"
                      if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2868 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
                      else
#line 2872 "backend_libs.erlang_rtti.c"
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
#line 2893 "backend_libs.erlang_rtti.c"
                  *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                else
#line 153 "erlang_rtti.m"
                  if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2899 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                  else
#line 153 "erlang_rtti.m"
                    if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2905 "backend_libs.erlang_rtti.c"
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
#line 2929 "backend_libs.erlang_rtti.c"
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
                                mdbcomp__prim_data____Compare____sym_name_0_0(&backend_libs__erlang_rtti__V_73_73, backend_libs__erlang_rtti__V_128_128, backend_libs__erlang_rtti__V_69_69);
                              }
#line 2949 "backend_libs.erlang_rtti.c"
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
#line 2969 "backend_libs.erlang_rtti.c"
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
#line 2996 "backend_libs.erlang_rtti.c"
                          *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
                        else
#line 3000 "backend_libs.erlang_rtti.c"
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
#line 3015 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                  else
#line 153 "erlang_rtti.m"
                    if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3021 "backend_libs.erlang_rtti.c"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                    else
#line 153 "erlang_rtti.m"
                      if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3027 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                      else
#line 153 "erlang_rtti.m"
                        if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 3033 "backend_libs.erlang_rtti.c"
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
#line 3055 "backend_libs.erlang_rtti.c"
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
#line 3068 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                  else
#line 153 "erlang_rtti.m"
                    if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3074 "backend_libs.erlang_rtti.c"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                    else
#line 153 "erlang_rtti.m"
                      if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3080 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                      else
#line 153 "erlang_rtti.m"
                        if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 3086 "backend_libs.erlang_rtti.c"
                          *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                        else
#line 153 "erlang_rtti.m"
                          if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3092 "backend_libs.erlang_rtti.c"
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
#line 3160 "backend_libs.erlang_rtti.c"
              {
#line 3162 "backend_libs.erlang_rtti.c"
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
#line 3188 "backend_libs.erlang_rtti.c"
                {
#line 3190 "backend_libs.erlang_rtti.c"
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
#line 3216 "backend_libs.erlang_rtti.c"
                  {
#line 3218 "backend_libs.erlang_rtti.c"
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
#line 3262 "backend_libs.erlang_rtti.c"
                    {
#line 3264 "backend_libs.erlang_rtti.c"
                      backend_libs__erlang_rtti__succeeded = backend_libs__rtti____Unify____tc_name_0_0(backend_libs__erlang_rtti__V_9_9, backend_libs__erlang_rtti__V_13_13);
                    }
#line 153 "erlang_rtti.m"
                    if (backend_libs__erlang_rtti__succeeded)
#line 153 "erlang_rtti.m"
                      {
#line 3271 "backend_libs.erlang_rtti.c"
                        {
#line 3273 "backend_libs.erlang_rtti.c"
                          backend_libs__erlang_rtti__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(backend_libs__erlang_rtti__V_10_10, backend_libs__erlang_rtti__V_14_14);
                        }
#line 153 "erlang_rtti.m"
                        if (backend_libs__erlang_rtti__succeeded)
#line 153 "erlang_rtti.m"
                          {
#line 3280 "backend_libs.erlang_rtti.c"
                            backend_libs__erlang_rtti__succeeded = (strcmp(backend_libs__erlang_rtti__V_11_11, backend_libs__erlang_rtti__V_15_15) == 0);
#line 153 "erlang_rtti.m"
                            if (backend_libs__erlang_rtti__succeeded)
#line 3284 "backend_libs.erlang_rtti.c"
                              {
#line 3286 "backend_libs.erlang_rtti.c"
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
#line 3316 "backend_libs.erlang_rtti.c"
                      {
#line 3318 "backend_libs.erlang_rtti.c"
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
#line 3342 "backend_libs.erlang_rtti.c"
                      {
#line 3344 "backend_libs.erlang_rtti.c"
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
#line 3399 "backend_libs.erlang_rtti.c"
  {
#line 3401 "backend_libs.erlang_rtti.c"
    MR_bool backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__HeadVar__2_1 == backend_libs__erlang_rtti__HeadVar__2_2);

#line 3404 "backend_libs.erlang_rtti.c"
    return backend_libs__erlang_rtti__succeeded;
#line 3406 "backend_libs.erlang_rtti.c"
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
#line 3435 "backend_libs.erlang_rtti.c"
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
#line 3477 "backend_libs.erlang_rtti.c"
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
#line 3497 "backend_libs.erlang_rtti.c"
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
#line 3517 "backend_libs.erlang_rtti.c"
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
#line 3537 "backend_libs.erlang_rtti.c"
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
#line 3561 "backend_libs.erlang_rtti.c"
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
#line 3581 "backend_libs.erlang_rtti.c"
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

#line 3684 "backend_libs.erlang_rtti.c"
        backend_libs__erlang_rtti__succeeded = (strcmp(backend_libs__erlang_rtti__V_3_3, backend_libs__erlang_rtti__V_10_10) == 0);
#line 108 "erlang_rtti.m"
        if (backend_libs__erlang_rtti__succeeded)
#line 108 "erlang_rtti.m"
          {
#line 3690 "backend_libs.erlang_rtti.c"
            backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__V_4_4 == backend_libs__erlang_rtti__V_11_11);
#line 108 "erlang_rtti.m"
            if (backend_libs__erlang_rtti__succeeded)
#line 108 "erlang_rtti.m"
              {
#line 3696 "backend_libs.erlang_rtti.c"
                backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__V_5_5 == backend_libs__erlang_rtti__V_12_12);
#line 108 "erlang_rtti.m"
                if (backend_libs__erlang_rtti__succeeded)
#line 108 "erlang_rtti.m"
                  {
#line 3702 "backend_libs.erlang_rtti.c"
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

#line 3727 "backend_libs.erlang_rtti.c"
                            backend_libs__erlang_rtti__succeeded = (strcmp(backend_libs__erlang_rtti__V_21_21, backend_libs__erlang_rtti__V_22_22) == 0);
#line 127 "erlang_rtti.m"
                          }
#line 108 "erlang_rtti.m"
                        if (backend_libs__erlang_rtti__succeeded)
#line 108 "erlang_rtti.m"
                          {
#line 3735 "backend_libs.erlang_rtti.c"
                            backend_libs__erlang_rtti__TypeInfo_19_19 = (MR_Word) &backend_libs__erlang_rtti_scalar_common_1[0];
#line 3737 "backend_libs.erlang_rtti.c"
                            {
#line 3739 "backend_libs.erlang_rtti.c"
                              backend_libs__erlang_rtti__succeeded = mercury__builtin__unify_2_p_0(backend_libs__erlang_rtti__TypeInfo_19_19, ((MR_Box) (backend_libs__erlang_rtti__V_8_8)), ((MR_Box) (backend_libs__erlang_rtti__V_15_15)));
                            }
#line 108 "erlang_rtti.m"
                            if (backend_libs__erlang_rtti__succeeded)
#line 108 "erlang_rtti.m"
                              {
#line 3746 "backend_libs.erlang_rtti.c"
                                backend_libs__erlang_rtti__TypeInfo_20_20 = (MR_Word) &backend_libs__erlang_rtti_scalar_common_1[1];
#line 3748 "backend_libs.erlang_rtti.c"
                                {
#line 3750 "backend_libs.erlang_rtti.c"
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
#line 3798 "backend_libs.erlang_rtti.c"
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

#line 3856 "backend_libs.erlang_rtti.c"
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
