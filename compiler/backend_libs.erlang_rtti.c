/*
** Automatically generated from `erlang_rtti.m'
** by the Mercury compiler,
** version 14.01.1, configured for x86_64-apple-darwin13.3.0.
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




#line 130 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_atom_raw_0[1];

#line 133 "backend_libs.erlang_rtti.c"
static const MR_NotagFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__notag_functor_desc_erlang_atom_raw_0;

#line 136 "backend_libs.erlang_rtti.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__erlang_rtti__list__ti_list_1backend_libs__rtti__type_ctor_info_du_arg_info_0;

#line 139 "backend_libs.erlang_rtti.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__erlang_rtti__maybe__ti_maybe_1backend_libs__rtti__type_ctor_info_exist_info_0;

#line 142 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_du_functor_0_0[7];

#line 145 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_du_functor_0_0[7];

#line 148 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_du_functor_0_0;

#line 151 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_du_functor_0_0[1];

#line 154 "backend_libs.erlang_rtti.c"
static const MR_DuPtagLayout backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_du_functor_0[1];

#line 157 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_du_functor_0[1];

#line 160 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_du_functor_0[1];

#line 163 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_0;

#line 166 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_1;

#line 169 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_2;

#line 172 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_3;

#line 175 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_4;

#line 178 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_5;

#line 181 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_6;

#line 184 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_value_ordered_erlang_impl_ctor_0[7];

#line 187 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_name_ordered_erlang_impl_ctor_0[7];

#line 190 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_impl_ctor_0[7];

#line 193 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_0[1];

#line 196 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_0;

#line 199 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_1[1];

#line 202 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_1;

#line 205 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_2[1];

#line 208 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_2;

#line 211 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_3[4];

#line 214 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_3;

#line 217 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_4[1];

#line 220 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_4;

#line 223 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_5[1];

#line 226 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_5;

#line 229 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_0[1];

#line 232 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_1[1];

#line 235 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_2[1];

#line 238 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_3[3];

#line 241 "backend_libs.erlang_rtti.c"
static const MR_DuPtagLayout backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_rtti_data_0[4];

#line 244 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_rtti_data_0[6];

#line 247 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_rtti_data_0[6];

#line 250 "backend_libs.erlang_rtti.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__erlang_rtti__maybe__ti_maybe_1hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0;

#line 253 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_data_0_0[7];

#line 256 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_data_0_0[7];

#line 259 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_data_0_0;

#line 262 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_data_0_0[1];

#line 265 "backend_libs.erlang_rtti.c"
static const MR_DuPtagLayout backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_type_ctor_data_0[1];

#line 268 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_type_ctor_data_0[1];

#line 271 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_type_ctor_data_0[1];

#line 274 "backend_libs.erlang_rtti.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__erlang_rtti__list__ti_list_1backend_libs__erlang_rtti__type_ctor_info_erlang_du_functor_0;

#line 277 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_0[1];

#line 280 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_0[1];

#line 283 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_0;

#line 286 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_1[1];

#line 289 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_1[1];

#line 292 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_1;

#line 295 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_2;

#line 298 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_3;

#line 301 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_4[1];

#line 304 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_4[1];

#line 307 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_4;

#line 310 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_5[1];

#line 313 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_5[1];

#line 316 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_5;

#line 319 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_6[1];

#line 322 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_6[1];

#line 325 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_6;

#line 328 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_7;

#line 331 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_0[3];

#line 334 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_1[1];

#line 337 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_2[1];

#line 340 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_3[3];

#line 343 "backend_libs.erlang_rtti.c"
static const MR_DuPtagLayout backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_type_ctor_details_0[4];

#line 346 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_type_ctor_details_0[8];

#line 349 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_type_ctor_details_0[8];

#line 352 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_atom_raw_0_0_10001(
#line 355 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 357 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2);

#line 360 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_atom_raw_0_0_10001(
#line 363 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 365 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 367 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3);

#line 370 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_du_functor_0_0_10001(
#line 373 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 375 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2);

#line 378 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_du_functor_0_0_10001(
#line 381 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 383 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 385 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3);

#line 388 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_impl_ctor_0_0_10001(
#line 391 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 393 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2);

#line 396 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_impl_ctor_0_0_10001(
#line 399 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 401 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 403 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3);

#line 406 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_rtti_data_0_0_10001(
#line 409 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 411 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2);

#line 414 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_rtti_data_0_0_10001(
#line 417 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 419 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 421 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3);

#line 424 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_type_ctor_data_0_0_10001(
#line 427 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 429 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2);

#line 432 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_type_ctor_data_0_0_10001(
#line 435 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 437 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 439 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3);

#line 442 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_type_ctor_details_0_0_10001(
#line 445 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 447 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2);

#line 450 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_type_ctor_details_0_0_10001(
#line 453 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 455 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 457 "backend_libs.erlang_rtti.c"
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



#line 506 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_atom_raw_0[1] = {
  (MR_Integer) 0
};

#line 511 "backend_libs.erlang_rtti.c"
static const MR_NotagFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__notag_functor_desc_erlang_atom_raw_0 = {
  (MR_String) "erlang_atom_raw",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  NULL
};

#line 518 "backend_libs.erlang_rtti.c"
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

#line 539 "backend_libs.erlang_rtti.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__erlang_rtti__list__ti_list_1backend_libs__rtti__type_ctor_info_du_arg_info_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_du_arg_info_0
  }
};

#line 547 "backend_libs.erlang_rtti.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__erlang_rtti__maybe__ti_maybe_1backend_libs__rtti__type_ctor_info_exist_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_exist_info_0
  }
};

#line 555 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_du_functor_0_0[7] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_atom_raw_0,
  (MR_PseudoTypeInfo) &backend_libs__erlang_rtti__list__ti_list_1backend_libs__rtti__type_ctor_info_du_arg_info_0,
  (MR_PseudoTypeInfo) &backend_libs__erlang_rtti__maybe__ti_maybe_1backend_libs__rtti__type_ctor_info_exist_info_0
};

#line 566 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_du_functor_0_0[7] = {
  (MR_String) "edu_name",
  (MR_String) "edu_orig_arity",
  (MR_String) "edu_ordinal",
  (MR_String) "edu_lex",
  (MR_String) "edu_rep",
  (MR_String) "edu_arg_infos",
  (MR_String) "edu_exist_info"
};

#line 577 "backend_libs.erlang_rtti.c"
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

#line 592 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_du_functor_0_0[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_du_functor_0_0
};

#line 597 "backend_libs.erlang_rtti.c"
static const MR_DuPtagLayout backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_du_functor_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_du_functor_0_0
  }
};

#line 606 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_du_functor_0[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_du_functor_0_0
};

#line 611 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_du_functor_0[1] = {
  (MR_Integer) 0
};

#line 616 "backend_libs.erlang_rtti.c"
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

#line 637 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_0 = {
  (MR_String) "erlang_impl_ctor_type_info",
  (MR_Integer) 0
};

#line 643 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_1 = {
  (MR_String) "erlang_impl_ctor_type_ctor_info",
  (MR_Integer) 1
};

#line 649 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_2 = {
  (MR_String) "erlang_impl_ctor_typeclass_info",
  (MR_Integer) 2
};

#line 655 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_3 = {
  (MR_String) "erlang_impl_ctor_base_typeclass_info",
  (MR_Integer) 3
};

#line 661 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_4 = {
  (MR_String) "erlang_impl_ctor_hp",
  (MR_Integer) 4
};

#line 667 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_5 = {
  (MR_String) "erlang_impl_ctor_subgoal",
  (MR_Integer) 5
};

#line 673 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDesc backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_6 = {
  (MR_String) "erlang_impl_ctor_ticket",
  (MR_Integer) 6
};

#line 679 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_value_ordered_erlang_impl_ctor_0[7] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_0,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_1,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_2,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_3,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_4,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_5,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_6
};

#line 690 "backend_libs.erlang_rtti.c"
static const MR_EnumFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_name_ordered_erlang_impl_ctor_0[7] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_3,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_4,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_5,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_6,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_1,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_0,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__enum_functor_desc_erlang_impl_ctor_0_2
};

#line 701 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_impl_ctor_0[7] = {
  (MR_Integer) 5,
  (MR_Integer) 4,
  (MR_Integer) 6,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 712 "backend_libs.erlang_rtti.c"
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

#line 733 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_0[1] = {
  (MR_PseudoTypeInfo) &backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_type_ctor_data_0
};

#line 738 "backend_libs.erlang_rtti.c"
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

#line 753 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_1[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_type_info_0
};

#line 758 "backend_libs.erlang_rtti.c"
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

#line 773 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_2[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_pseudo_type_info_0
};

#line 778 "backend_libs.erlang_rtti.c"
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

#line 793 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_3[4] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_name_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_base_typeclass_info_0
};

#line 801 "backend_libs.erlang_rtti.c"
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

#line 816 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_4[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_decl_0
};

#line 821 "backend_libs.erlang_rtti.c"
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

#line 836 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_rtti_data_0_5[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_tc_instance_0
};

#line 841 "backend_libs.erlang_rtti.c"
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

#line 856 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_0[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_0
};

#line 861 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_1[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_1
};

#line 866 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_2[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_2
};

#line 871 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_rtti_data_0_3[3] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_3,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_4,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_5
};

#line 878 "backend_libs.erlang_rtti.c"
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

#line 902 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_rtti_data_0[6] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_3,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_2,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_4,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_5,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_0,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_rtti_data_0_1
};

#line 912 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_rtti_data_0[6] = {
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 922 "backend_libs.erlang_rtti.c"
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

#line 943 "backend_libs.erlang_rtti.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__erlang_rtti__maybe__ti_maybe_1hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &hlds__hlds_rtti__hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0
  }
};

#line 951 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_data_0_0[7] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &backend_libs__erlang_rtti__maybe__ti_maybe_1hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0,
  (MR_PseudoTypeInfo) &backend_libs__erlang_rtti__maybe__ti_maybe_1hlds__hlds_rtti__type_ctor_info_rtti_proc_label_0,
  (MR_PseudoTypeInfo) &backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_type_ctor_details_0
};

#line 962 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_data_0_0[7] = {
  (MR_String) "etcr_version",
  (MR_String) "etcr_module_name",
  (MR_String) "etcr_type_name",
  (MR_String) "etcr_arity",
  (MR_String) "etcr_unify",
  (MR_String) "etcr_compare",
  (MR_String) "etcr_rep_details"
};

#line 973 "backend_libs.erlang_rtti.c"
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

#line 988 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_data_0_0[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_data_0_0
};

#line 993 "backend_libs.erlang_rtti.c"
static const MR_DuPtagLayout backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_ptag_ordered_erlang_type_ctor_data_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_data_0_0
  }
};

#line 1002 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_name_ordered_erlang_type_ctor_data_0[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_data_0_0
};

#line 1007 "backend_libs.erlang_rtti.c"
static const MR_Integer backend_libs__erlang_rtti__backend_libs__erlang_rtti__functor_number_map_erlang_type_ctor_data_0[1] = {
  (MR_Integer) 0
};

#line 1012 "backend_libs.erlang_rtti.c"
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

#line 1033 "backend_libs.erlang_rtti.c"
static const MR_FA_TypeInfo_Struct1 backend_libs__erlang_rtti__list__ti_list_1backend_libs__erlang_rtti__type_ctor_info_erlang_du_functor_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_du_functor_0
  }
};

#line 1041 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_0[1] = {
  (MR_PseudoTypeInfo) &backend_libs__erlang_rtti__list__ti_list_1backend_libs__erlang_rtti__type_ctor_info_erlang_du_functor_0
};

#line 1046 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_0[1] = {
  (MR_String) "edu_functors"
};

#line 1051 "backend_libs.erlang_rtti.c"
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

#line 1066 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1071 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_1[1] = {
  (MR_String) "edummy_name"
};

#line 1076 "backend_libs.erlang_rtti.c"
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

#line 1091 "backend_libs.erlang_rtti.c"
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

#line 1106 "backend_libs.erlang_rtti.c"
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

#line 1121 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_4[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0
};

#line 1126 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_4[1] = {
  (MR_String) "eeqv_type"
};

#line 1131 "backend_libs.erlang_rtti.c"
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

#line 1146 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_5[1] = {
  (MR_PseudoTypeInfo) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_builtin_ctor_0
};

#line 1151 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_5[1] = {
  (MR_String) "ebuiltin_ctor"
};

#line 1156 "backend_libs.erlang_rtti.c"
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

#line 1171 "backend_libs.erlang_rtti.c"
static const MR_PseudoTypeInfo backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_types_erlang_type_ctor_details_0_6[1] = {
  (MR_PseudoTypeInfo) &backend_libs__erlang_rtti__backend_libs__erlang_rtti__type_ctor_info_erlang_impl_ctor_0
};

#line 1176 "backend_libs.erlang_rtti.c"
static const MR_ConstString backend_libs__erlang_rtti__backend_libs__erlang_rtti__field_names_erlang_type_ctor_details_0_6[1] = {
  (MR_String) "eimpl_ctor"
};

#line 1181 "backend_libs.erlang_rtti.c"
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

#line 1196 "backend_libs.erlang_rtti.c"
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

#line 1211 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_0[3] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_2,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_3,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_7
};

#line 1218 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_1[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_0
};

#line 1223 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_2[1] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_1
};

#line 1228 "backend_libs.erlang_rtti.c"
static const MR_DuFunctorDescPtr backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_stag_ordered_erlang_type_ctor_details_0_3[3] = {
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_4,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_5,
  &backend_libs__erlang_rtti__backend_libs__erlang_rtti__du_functor_desc_erlang_type_ctor_details_0_6
};

#line 1235 "backend_libs.erlang_rtti.c"
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

#line 1259 "backend_libs.erlang_rtti.c"
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

#line 1271 "backend_libs.erlang_rtti.c"
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

#line 1283 "backend_libs.erlang_rtti.c"
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

#line 1304 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_atom_raw_0_0_10001(
#line 1307 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 1309 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2)
#line 1311 "backend_libs.erlang_rtti.c"
{
#line 1313 "backend_libs.erlang_rtti.c"
  {
#line 1315 "backend_libs.erlang_rtti.c"
    MR_bool backend_libs__erlang_rtti__succeeded;

#line 1318 "backend_libs.erlang_rtti.c"
    {
#line 1320 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti__succeeded = backend_libs__erlang_rtti____Unify____erlang_atom_raw_0_0(((MR_Word) backend_libs__erlang_rtti__wrapper_arg_1), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2));
    }
#line 1323 "backend_libs.erlang_rtti.c"
    return backend_libs__erlang_rtti__succeeded;
#line 1325 "backend_libs.erlang_rtti.c"
  }
#line 1327 "backend_libs.erlang_rtti.c"
}

#line 1330 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_atom_raw_0_0_10001(
#line 1333 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 1335 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 1337 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3)
#line 1339 "backend_libs.erlang_rtti.c"
{
#line 1341 "backend_libs.erlang_rtti.c"
  {
#line 1343 "backend_libs.erlang_rtti.c"
    MR_Word backend_libs__erlang_rtti__conv0_HeadVar__1_1;

#line 1346 "backend_libs.erlang_rtti.c"
    {
#line 1348 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti____Compare____erlang_atom_raw_0_0(&backend_libs__erlang_rtti__conv0_HeadVar__1_1, ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_3));
    }
#line 1351 "backend_libs.erlang_rtti.c"
    *backend_libs__erlang_rtti__wrapper_arg_1 = ((MR_Box) (backend_libs__erlang_rtti__conv0_HeadVar__1_1));
#line 1353 "backend_libs.erlang_rtti.c"
  }
#line 1355 "backend_libs.erlang_rtti.c"
}

#line 1358 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_du_functor_0_0_10001(
#line 1361 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 1363 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2)
#line 1365 "backend_libs.erlang_rtti.c"
{
#line 1367 "backend_libs.erlang_rtti.c"
  {
#line 1369 "backend_libs.erlang_rtti.c"
    MR_bool backend_libs__erlang_rtti__succeeded;

#line 1372 "backend_libs.erlang_rtti.c"
    {
#line 1374 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti__succeeded = backend_libs__erlang_rtti____Unify____erlang_du_functor_0_0(((MR_Word) backend_libs__erlang_rtti__wrapper_arg_1), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2));
    }
#line 1377 "backend_libs.erlang_rtti.c"
    return backend_libs__erlang_rtti__succeeded;
#line 1379 "backend_libs.erlang_rtti.c"
  }
#line 1381 "backend_libs.erlang_rtti.c"
}

#line 1384 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_du_functor_0_0_10001(
#line 1387 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 1389 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 1391 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3)
#line 1393 "backend_libs.erlang_rtti.c"
{
#line 1395 "backend_libs.erlang_rtti.c"
  {
#line 1397 "backend_libs.erlang_rtti.c"
    MR_Word backend_libs__erlang_rtti__conv0_HeadVar__1_1;

#line 1400 "backend_libs.erlang_rtti.c"
    {
#line 1402 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti____Compare____erlang_du_functor_0_0(&backend_libs__erlang_rtti__conv0_HeadVar__1_1, ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_3));
    }
#line 1405 "backend_libs.erlang_rtti.c"
    *backend_libs__erlang_rtti__wrapper_arg_1 = ((MR_Box) (backend_libs__erlang_rtti__conv0_HeadVar__1_1));
#line 1407 "backend_libs.erlang_rtti.c"
  }
#line 1409 "backend_libs.erlang_rtti.c"
}

#line 1412 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_impl_ctor_0_0_10001(
#line 1415 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 1417 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2)
#line 1419 "backend_libs.erlang_rtti.c"
{
#line 1421 "backend_libs.erlang_rtti.c"
  {
#line 1423 "backend_libs.erlang_rtti.c"
    MR_bool backend_libs__erlang_rtti__succeeded;

#line 1426 "backend_libs.erlang_rtti.c"
    {
#line 1428 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti__succeeded = backend_libs__erlang_rtti____Unify____erlang_impl_ctor_0_0(((MR_Word) backend_libs__erlang_rtti__wrapper_arg_1), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2));
    }
#line 1431 "backend_libs.erlang_rtti.c"
    return backend_libs__erlang_rtti__succeeded;
#line 1433 "backend_libs.erlang_rtti.c"
  }
#line 1435 "backend_libs.erlang_rtti.c"
}

#line 1438 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_impl_ctor_0_0_10001(
#line 1441 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 1443 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 1445 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3)
#line 1447 "backend_libs.erlang_rtti.c"
{
#line 1449 "backend_libs.erlang_rtti.c"
  {
#line 1451 "backend_libs.erlang_rtti.c"
    MR_Word backend_libs__erlang_rtti__conv0_HeadVar__1_1;

#line 1454 "backend_libs.erlang_rtti.c"
    {
#line 1456 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti____Compare____erlang_impl_ctor_0_0(&backend_libs__erlang_rtti__conv0_HeadVar__1_1, ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_3));
    }
#line 1459 "backend_libs.erlang_rtti.c"
    *backend_libs__erlang_rtti__wrapper_arg_1 = ((MR_Box) (backend_libs__erlang_rtti__conv0_HeadVar__1_1));
#line 1461 "backend_libs.erlang_rtti.c"
  }
#line 1463 "backend_libs.erlang_rtti.c"
}

#line 1466 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_rtti_data_0_0_10001(
#line 1469 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 1471 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2)
#line 1473 "backend_libs.erlang_rtti.c"
{
#line 1475 "backend_libs.erlang_rtti.c"
  {
#line 1477 "backend_libs.erlang_rtti.c"
    MR_bool backend_libs__erlang_rtti__succeeded;

#line 1480 "backend_libs.erlang_rtti.c"
    {
#line 1482 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti__succeeded = backend_libs__erlang_rtti____Unify____erlang_rtti_data_0_0(((MR_Word) backend_libs__erlang_rtti__wrapper_arg_1), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2));
    }
#line 1485 "backend_libs.erlang_rtti.c"
    return backend_libs__erlang_rtti__succeeded;
#line 1487 "backend_libs.erlang_rtti.c"
  }
#line 1489 "backend_libs.erlang_rtti.c"
}

#line 1492 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_rtti_data_0_0_10001(
#line 1495 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 1497 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 1499 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3)
#line 1501 "backend_libs.erlang_rtti.c"
{
#line 1503 "backend_libs.erlang_rtti.c"
  {
#line 1505 "backend_libs.erlang_rtti.c"
    MR_Word backend_libs__erlang_rtti__conv0_HeadVar__1_1;

#line 1508 "backend_libs.erlang_rtti.c"
    {
#line 1510 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti____Compare____erlang_rtti_data_0_0(&backend_libs__erlang_rtti__conv0_HeadVar__1_1, ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_3));
    }
#line 1513 "backend_libs.erlang_rtti.c"
    *backend_libs__erlang_rtti__wrapper_arg_1 = ((MR_Box) (backend_libs__erlang_rtti__conv0_HeadVar__1_1));
#line 1515 "backend_libs.erlang_rtti.c"
  }
#line 1517 "backend_libs.erlang_rtti.c"
}

#line 1520 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_type_ctor_data_0_0_10001(
#line 1523 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 1525 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2)
#line 1527 "backend_libs.erlang_rtti.c"
{
#line 1529 "backend_libs.erlang_rtti.c"
  {
#line 1531 "backend_libs.erlang_rtti.c"
    MR_bool backend_libs__erlang_rtti__succeeded;

#line 1534 "backend_libs.erlang_rtti.c"
    {
#line 1536 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti__succeeded = backend_libs__erlang_rtti____Unify____erlang_type_ctor_data_0_0(((MR_Word) backend_libs__erlang_rtti__wrapper_arg_1), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2));
    }
#line 1539 "backend_libs.erlang_rtti.c"
    return backend_libs__erlang_rtti__succeeded;
#line 1541 "backend_libs.erlang_rtti.c"
  }
#line 1543 "backend_libs.erlang_rtti.c"
}

#line 1546 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_type_ctor_data_0_0_10001(
#line 1549 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 1551 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 1553 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3)
#line 1555 "backend_libs.erlang_rtti.c"
{
#line 1557 "backend_libs.erlang_rtti.c"
  {
#line 1559 "backend_libs.erlang_rtti.c"
    MR_Word backend_libs__erlang_rtti__conv0_HeadVar__1_1;

#line 1562 "backend_libs.erlang_rtti.c"
    {
#line 1564 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti____Compare____erlang_type_ctor_data_0_0(&backend_libs__erlang_rtti__conv0_HeadVar__1_1, ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_3));
    }
#line 1567 "backend_libs.erlang_rtti.c"
    *backend_libs__erlang_rtti__wrapper_arg_1 = ((MR_Box) (backend_libs__erlang_rtti__conv0_HeadVar__1_1));
#line 1569 "backend_libs.erlang_rtti.c"
  }
#line 1571 "backend_libs.erlang_rtti.c"
}

#line 1574 "backend_libs.erlang_rtti.c"
static MR_bool MR_CALL 
backend_libs__erlang_rtti____Unify____erlang_type_ctor_details_0_0_10001(
#line 1577 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_1,
#line 1579 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2)
#line 1581 "backend_libs.erlang_rtti.c"
{
#line 1583 "backend_libs.erlang_rtti.c"
  {
#line 1585 "backend_libs.erlang_rtti.c"
    MR_bool backend_libs__erlang_rtti__succeeded;

#line 1588 "backend_libs.erlang_rtti.c"
    {
#line 1590 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti__succeeded = backend_libs__erlang_rtti____Unify____erlang_type_ctor_details_0_0(((MR_Word) backend_libs__erlang_rtti__wrapper_arg_1), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2));
    }
#line 1593 "backend_libs.erlang_rtti.c"
    return backend_libs__erlang_rtti__succeeded;
#line 1595 "backend_libs.erlang_rtti.c"
  }
#line 1597 "backend_libs.erlang_rtti.c"
}

#line 1600 "backend_libs.erlang_rtti.c"
static void MR_CALL 
backend_libs__erlang_rtti____Compare____erlang_type_ctor_details_0_0_10001(
#line 1603 "backend_libs.erlang_rtti.c"
  MR_Box * backend_libs__erlang_rtti__wrapper_arg_1,
#line 1605 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_2,
#line 1607 "backend_libs.erlang_rtti.c"
  MR_Box backend_libs__erlang_rtti__wrapper_arg_3)
#line 1609 "backend_libs.erlang_rtti.c"
{
#line 1611 "backend_libs.erlang_rtti.c"
  {
#line 1613 "backend_libs.erlang_rtti.c"
    MR_Word backend_libs__erlang_rtti__conv0_HeadVar__1_1;

#line 1616 "backend_libs.erlang_rtti.c"
    {
#line 1618 "backend_libs.erlang_rtti.c"
      backend_libs__erlang_rtti____Compare____erlang_type_ctor_details_0_0(&backend_libs__erlang_rtti__conv0_HeadVar__1_1, ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_2), ((MR_Word) backend_libs__erlang_rtti__wrapper_arg_3));
    }
#line 1621 "backend_libs.erlang_rtti.c"
    *backend_libs__erlang_rtti__wrapper_arg_1 = ((MR_Box) (backend_libs__erlang_rtti__conv0_HeadVar__1_1));
#line 1623 "backend_libs.erlang_rtti.c"
  }
#line 1625 "backend_libs.erlang_rtti.c"
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
#line 1652 "backend_libs.erlang_rtti.c"
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
#line 1678 "backend_libs.erlang_rtti.c"
                *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
              else
#line 72 "erlang_rtti.m"
                if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1684 "backend_libs.erlang_rtti.c"
                  *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                else
#line 72 "erlang_rtti.m"
                  if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1690 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                  else
#line 72 "erlang_rtti.m"
                    if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1696 "backend_libs.erlang_rtti.c"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                    else
#line 1700 "backend_libs.erlang_rtti.c"
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
#line 1726 "backend_libs.erlang_rtti.c"
                  *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                else
#line 72 "erlang_rtti.m"
                  if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1732 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                  else
#line 72 "erlang_rtti.m"
                    if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1738 "backend_libs.erlang_rtti.c"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                    else
#line 72 "erlang_rtti.m"
                      if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1744 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                      else
#line 1748 "backend_libs.erlang_rtti.c"
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
#line 1774 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                  else
#line 72 "erlang_rtti.m"
                    if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1780 "backend_libs.erlang_rtti.c"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                    else
#line 72 "erlang_rtti.m"
                      if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1786 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                      else
#line 72 "erlang_rtti.m"
                        if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1792 "backend_libs.erlang_rtti.c"
                          *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                        else
#line 1796 "backend_libs.erlang_rtti.c"
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
#line 1809 "backend_libs.erlang_rtti.c"
                  *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                else
#line 72 "erlang_rtti.m"
                  if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1815 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                  else
#line 72 "erlang_rtti.m"
                    if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1821 "backend_libs.erlang_rtti.c"
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
#line 1845 "backend_libs.erlang_rtti.c"
                          *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                        else
#line 72 "erlang_rtti.m"
                          if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1851 "backend_libs.erlang_rtti.c"
                            *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                          else
#line 72 "erlang_rtti.m"
                            if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1857 "backend_libs.erlang_rtti.c"
                              *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                            else
#line 1861 "backend_libs.erlang_rtti.c"
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
#line 1876 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                  else
#line 72 "erlang_rtti.m"
                    if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1882 "backend_libs.erlang_rtti.c"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                    else
#line 72 "erlang_rtti.m"
                      if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1888 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                      else
#line 72 "erlang_rtti.m"
                        if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1894 "backend_libs.erlang_rtti.c"
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
#line 1918 "backend_libs.erlang_rtti.c"
                              *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                            else
#line 72 "erlang_rtti.m"
                              if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1924 "backend_libs.erlang_rtti.c"
                                *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                              else
#line 1928 "backend_libs.erlang_rtti.c"
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
#line 1943 "backend_libs.erlang_rtti.c"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                    else
#line 72 "erlang_rtti.m"
                      if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1949 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                      else
#line 72 "erlang_rtti.m"
                        if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1955 "backend_libs.erlang_rtti.c"
                          *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                        else
#line 72 "erlang_rtti.m"
                          if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1961 "backend_libs.erlang_rtti.c"
                            *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                          else
#line 72 "erlang_rtti.m"
                            if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1967 "backend_libs.erlang_rtti.c"
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
#line 1991 "backend_libs.erlang_rtti.c"
                                  *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                                else
#line 1995 "backend_libs.erlang_rtti.c"
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
#line 2010 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                      else
#line 72 "erlang_rtti.m"
                        if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 2016 "backend_libs.erlang_rtti.c"
                          *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                        else
#line 72 "erlang_rtti.m"
                          if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2022 "backend_libs.erlang_rtti.c"
                            *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                          else
#line 72 "erlang_rtti.m"
                            if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2028 "backend_libs.erlang_rtti.c"
                              *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                            else
#line 72 "erlang_rtti.m"
                              if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2034 "backend_libs.erlang_rtti.c"
                                *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                              else
#line 72 "erlang_rtti.m"
                                if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2040 "backend_libs.erlang_rtti.c"
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
#line 2062 "backend_libs.erlang_rtti.c"
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
#line 2075 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                      else
#line 72 "erlang_rtti.m"
                        if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 2081 "backend_libs.erlang_rtti.c"
                          *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 72 "erlang_rtti.m"
                        else
#line 72 "erlang_rtti.m"
                          if ((backend_libs__erlang_rtti__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2087 "backend_libs.erlang_rtti.c"
                            *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                          else
#line 72 "erlang_rtti.m"
                            if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2093 "backend_libs.erlang_rtti.c"
                              *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                            else
#line 72 "erlang_rtti.m"
                              if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 2099 "backend_libs.erlang_rtti.c"
                                *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                              else
#line 72 "erlang_rtti.m"
                                if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2105 "backend_libs.erlang_rtti.c"
                                  *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 72 "erlang_rtti.m"
                                else
#line 72 "erlang_rtti.m"
                                  if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2111 "backend_libs.erlang_rtti.c"
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
#line 2230 "backend_libs.erlang_rtti.c"
                    backend_libs__erlang_rtti__TypeInfo_22_22 = (MR_Word) &backend_libs__erlang_rtti_scalar_common_1[3];
#line 2232 "backend_libs.erlang_rtti.c"
                    {
#line 2234 "backend_libs.erlang_rtti.c"
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
#line 2260 "backend_libs.erlang_rtti.c"
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
#line 2285 "backend_libs.erlang_rtti.c"
                        {
#line 2287 "backend_libs.erlang_rtti.c"
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
#line 2313 "backend_libs.erlang_rtti.c"
                          {
#line 2315 "backend_libs.erlang_rtti.c"
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
#line 2339 "backend_libs.erlang_rtti.c"
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
#line 2376 "backend_libs.erlang_rtti.c"
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
#line 2418 "backend_libs.erlang_rtti.c"
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
#line 2438 "backend_libs.erlang_rtti.c"
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
#line 2458 "backend_libs.erlang_rtti.c"
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
#line 2478 "backend_libs.erlang_rtti.c"
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
#line 2498 "backend_libs.erlang_rtti.c"
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
#line 2518 "backend_libs.erlang_rtti.c"
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

#line 2613 "backend_libs.erlang_rtti.c"
        backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__V_3_3 == backend_libs__erlang_rtti__V_10_10);
#line 46 "erlang_rtti.m"
        if (backend_libs__erlang_rtti__succeeded)
#line 46 "erlang_rtti.m"
          {
#line 2619 "backend_libs.erlang_rtti.c"
            {
#line 2621 "backend_libs.erlang_rtti.c"
              backend_libs__erlang_rtti__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(backend_libs__erlang_rtti__V_4_4, backend_libs__erlang_rtti__V_11_11);
            }
#line 46 "erlang_rtti.m"
            if (backend_libs__erlang_rtti__succeeded)
#line 46 "erlang_rtti.m"
              {
#line 2628 "backend_libs.erlang_rtti.c"
                backend_libs__erlang_rtti__succeeded = (strcmp(backend_libs__erlang_rtti__V_5_5, backend_libs__erlang_rtti__V_12_12) == 0);
#line 46 "erlang_rtti.m"
                if (backend_libs__erlang_rtti__succeeded)
#line 46 "erlang_rtti.m"
                  {
#line 2634 "backend_libs.erlang_rtti.c"
                    backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__V_6_6 == backend_libs__erlang_rtti__V_13_13);
#line 46 "erlang_rtti.m"
                    if (backend_libs__erlang_rtti__succeeded)
#line 46 "erlang_rtti.m"
                      {
#line 2640 "backend_libs.erlang_rtti.c"
                        backend_libs__erlang_rtti__TypeInfo_20_20 = (MR_Word) &backend_libs__erlang_rtti_scalar_common_1[2];
#line 2642 "backend_libs.erlang_rtti.c"
                        {
#line 2644 "backend_libs.erlang_rtti.c"
                          backend_libs__erlang_rtti__succeeded = mercury__builtin__unify_2_p_0(backend_libs__erlang_rtti__TypeInfo_20_20, ((MR_Box) (backend_libs__erlang_rtti__V_7_7)), ((MR_Box) (backend_libs__erlang_rtti__V_14_14)));
                        }
#line 46 "erlang_rtti.m"
                        if (backend_libs__erlang_rtti__succeeded)
#line 46 "erlang_rtti.m"
                          {
#line 2651 "backend_libs.erlang_rtti.c"
                            backend_libs__erlang_rtti__TypeInfo_21_21 = (MR_Word) &backend_libs__erlang_rtti_scalar_common_1[2];
#line 2653 "backend_libs.erlang_rtti.c"
                            {
#line 2655 "backend_libs.erlang_rtti.c"
                              backend_libs__erlang_rtti__succeeded = mercury__builtin__unify_2_p_0(backend_libs__erlang_rtti__TypeInfo_21_21, ((MR_Box) (backend_libs__erlang_rtti__V_8_8)), ((MR_Box) (backend_libs__erlang_rtti__V_15_15)));
                            }
#line 46 "erlang_rtti.m"
                            if (backend_libs__erlang_rtti__succeeded)
#line 2660 "backend_libs.erlang_rtti.c"
                              {
#line 2662 "backend_libs.erlang_rtti.c"
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
#line 2708 "backend_libs.erlang_rtti.c"
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
#line 2739 "backend_libs.erlang_rtti.c"
              *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
            else
#line 153 "erlang_rtti.m"
              if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2745 "backend_libs.erlang_rtti.c"
                *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
              else
#line 153 "erlang_rtti.m"
                if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2751 "backend_libs.erlang_rtti.c"
                  *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
                else
#line 153 "erlang_rtti.m"
                  if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2757 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
                  else
#line 2761 "backend_libs.erlang_rtti.c"
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
#line 2776 "backend_libs.erlang_rtti.c"
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
#line 2800 "backend_libs.erlang_rtti.c"
                  *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
                else
#line 153 "erlang_rtti.m"
                  if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 2806 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
                  else
#line 153 "erlang_rtti.m"
                    if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2812 "backend_libs.erlang_rtti.c"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
                    else
#line 2816 "backend_libs.erlang_rtti.c"
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
#line 2831 "backend_libs.erlang_rtti.c"
                *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
              else
#line 153 "erlang_rtti.m"
                if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2837 "backend_libs.erlang_rtti.c"
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
#line 2861 "backend_libs.erlang_rtti.c"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
                    else
#line 153 "erlang_rtti.m"
                      if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 2867 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
                      else
#line 2871 "backend_libs.erlang_rtti.c"
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
#line 2892 "backend_libs.erlang_rtti.c"
                  *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                else
#line 153 "erlang_rtti.m"
                  if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 2898 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                  else
#line 153 "erlang_rtti.m"
                    if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 2904 "backend_libs.erlang_rtti.c"
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
#line 2928 "backend_libs.erlang_rtti.c"
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
#line 2948 "backend_libs.erlang_rtti.c"
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
#line 2968 "backend_libs.erlang_rtti.c"
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
#line 2995 "backend_libs.erlang_rtti.c"
                          *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 1;
#line 153 "erlang_rtti.m"
                        else
#line 2999 "backend_libs.erlang_rtti.c"
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
#line 3014 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                  else
#line 153 "erlang_rtti.m"
                    if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3020 "backend_libs.erlang_rtti.c"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                    else
#line 153 "erlang_rtti.m"
                      if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3026 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                      else
#line 153 "erlang_rtti.m"
                        if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 3032 "backend_libs.erlang_rtti.c"
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
#line 3054 "backend_libs.erlang_rtti.c"
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
#line 3067 "backend_libs.erlang_rtti.c"
                    *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                  else
#line 153 "erlang_rtti.m"
                    if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 3073 "backend_libs.erlang_rtti.c"
                      *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                    else
#line 153 "erlang_rtti.m"
                      if (((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3079 "backend_libs.erlang_rtti.c"
                        *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                      else
#line 153 "erlang_rtti.m"
                        if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 3085 "backend_libs.erlang_rtti.c"
                          *backend_libs__erlang_rtti__HeadVar__1_1 = (MR_Integer) 2;
#line 153 "erlang_rtti.m"
                        else
#line 153 "erlang_rtti.m"
                          if (((((MR_tag((MR_Word) backend_libs__erlang_rtti__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), backend_libs__erlang_rtti__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3091 "backend_libs.erlang_rtti.c"
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
#line 3159 "backend_libs.erlang_rtti.c"
              {
#line 3161 "backend_libs.erlang_rtti.c"
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
#line 3187 "backend_libs.erlang_rtti.c"
                {
#line 3189 "backend_libs.erlang_rtti.c"
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
#line 3215 "backend_libs.erlang_rtti.c"
                  {
#line 3217 "backend_libs.erlang_rtti.c"
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
#line 3261 "backend_libs.erlang_rtti.c"
                    {
#line 3263 "backend_libs.erlang_rtti.c"
                      backend_libs__erlang_rtti__succeeded = backend_libs__rtti____Unify____tc_name_0_0(backend_libs__erlang_rtti__V_9_9, backend_libs__erlang_rtti__V_13_13);
                    }
#line 153 "erlang_rtti.m"
                    if (backend_libs__erlang_rtti__succeeded)
#line 153 "erlang_rtti.m"
                      {
#line 3270 "backend_libs.erlang_rtti.c"
                        {
#line 3272 "backend_libs.erlang_rtti.c"
                          backend_libs__erlang_rtti__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(backend_libs__erlang_rtti__V_10_10, backend_libs__erlang_rtti__V_14_14);
                        }
#line 153 "erlang_rtti.m"
                        if (backend_libs__erlang_rtti__succeeded)
#line 153 "erlang_rtti.m"
                          {
#line 3279 "backend_libs.erlang_rtti.c"
                            backend_libs__erlang_rtti__succeeded = (strcmp(backend_libs__erlang_rtti__V_11_11, backend_libs__erlang_rtti__V_15_15) == 0);
#line 153 "erlang_rtti.m"
                            if (backend_libs__erlang_rtti__succeeded)
#line 3283 "backend_libs.erlang_rtti.c"
                              {
#line 3285 "backend_libs.erlang_rtti.c"
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
#line 3315 "backend_libs.erlang_rtti.c"
                      {
#line 3317 "backend_libs.erlang_rtti.c"
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
#line 3341 "backend_libs.erlang_rtti.c"
                      {
#line 3343 "backend_libs.erlang_rtti.c"
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
#line 3398 "backend_libs.erlang_rtti.c"
  {
#line 3400 "backend_libs.erlang_rtti.c"
    MR_bool backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__HeadVar__2_1 == backend_libs__erlang_rtti__HeadVar__2_2);

#line 3403 "backend_libs.erlang_rtti.c"
    return backend_libs__erlang_rtti__succeeded;
#line 3405 "backend_libs.erlang_rtti.c"
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
#line 3434 "backend_libs.erlang_rtti.c"
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
#line 3476 "backend_libs.erlang_rtti.c"
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
#line 3496 "backend_libs.erlang_rtti.c"
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
#line 3516 "backend_libs.erlang_rtti.c"
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
#line 3536 "backend_libs.erlang_rtti.c"
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
#line 3560 "backend_libs.erlang_rtti.c"
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
#line 3580 "backend_libs.erlang_rtti.c"
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

#line 3683 "backend_libs.erlang_rtti.c"
        backend_libs__erlang_rtti__succeeded = (strcmp(backend_libs__erlang_rtti__V_3_3, backend_libs__erlang_rtti__V_10_10) == 0);
#line 108 "erlang_rtti.m"
        if (backend_libs__erlang_rtti__succeeded)
#line 108 "erlang_rtti.m"
          {
#line 3689 "backend_libs.erlang_rtti.c"
            backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__V_4_4 == backend_libs__erlang_rtti__V_11_11);
#line 108 "erlang_rtti.m"
            if (backend_libs__erlang_rtti__succeeded)
#line 108 "erlang_rtti.m"
              {
#line 3695 "backend_libs.erlang_rtti.c"
                backend_libs__erlang_rtti__succeeded = (backend_libs__erlang_rtti__V_5_5 == backend_libs__erlang_rtti__V_12_12);
#line 108 "erlang_rtti.m"
                if (backend_libs__erlang_rtti__succeeded)
#line 108 "erlang_rtti.m"
                  {
#line 3701 "backend_libs.erlang_rtti.c"
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

#line 3726 "backend_libs.erlang_rtti.c"
                            backend_libs__erlang_rtti__succeeded = (strcmp(backend_libs__erlang_rtti__V_21_21, backend_libs__erlang_rtti__V_22_22) == 0);
#line 127 "erlang_rtti.m"
                          }
#line 108 "erlang_rtti.m"
                        if (backend_libs__erlang_rtti__succeeded)
#line 108 "erlang_rtti.m"
                          {
#line 3734 "backend_libs.erlang_rtti.c"
                            backend_libs__erlang_rtti__TypeInfo_19_19 = (MR_Word) &backend_libs__erlang_rtti_scalar_common_1[0];
#line 3736 "backend_libs.erlang_rtti.c"
                            {
#line 3738 "backend_libs.erlang_rtti.c"
                              backend_libs__erlang_rtti__succeeded = mercury__builtin__unify_2_p_0(backend_libs__erlang_rtti__TypeInfo_19_19, ((MR_Box) (backend_libs__erlang_rtti__V_8_8)), ((MR_Box) (backend_libs__erlang_rtti__V_15_15)));
                            }
#line 108 "erlang_rtti.m"
                            if (backend_libs__erlang_rtti__succeeded)
#line 108 "erlang_rtti.m"
                              {
#line 3745 "backend_libs.erlang_rtti.c"
                                backend_libs__erlang_rtti__TypeInfo_20_20 = (MR_Word) &backend_libs__erlang_rtti_scalar_common_1[1];
#line 3747 "backend_libs.erlang_rtti.c"
                                {
#line 3749 "backend_libs.erlang_rtti.c"
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
#line 3797 "backend_libs.erlang_rtti.c"
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

#line 3855 "backend_libs.erlang_rtti.c"
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
