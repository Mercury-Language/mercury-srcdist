/*
** Automatically generated from `make_hlds.m'
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


/* :- module hlds.make_hlds. */
/* :- implementation. */

/*
INIT mercury__hlds__make_hlds__init
ENDINIT
*/

#include "hlds.make_hlds.mih"


#include "analysis.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
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
#include "parse_tree.equiv_type.mih"
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
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_special_pred.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 145 "hlds.make_hlds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_inst_or_mode_0_0;

#line 148 "hlds.make_hlds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_inst_or_mode_0_1;

#line 151 "hlds.make_hlds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__hlds__make_hlds__enum_value_ordered_found_invalid_inst_or_mode_0[2];

#line 154 "hlds.make_hlds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__hlds__make_hlds__enum_name_ordered_found_invalid_inst_or_mode_0[2];

#line 157 "hlds.make_hlds.c"
static const MR_Integer hlds__make_hlds__hlds__make_hlds__functor_number_map_found_invalid_inst_or_mode_0[2];

#line 160 "hlds.make_hlds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_type_0_0;

#line 163 "hlds.make_hlds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_type_0_1;

#line 166 "hlds.make_hlds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__hlds__make_hlds__enum_value_ordered_found_invalid_type_0[2];

#line 169 "hlds.make_hlds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__hlds__make_hlds__enum_name_ordered_found_invalid_type_0[2];

#line 172 "hlds.make_hlds.c"
static const MR_Integer hlds__make_hlds__hlds__make_hlds__functor_number_map_found_invalid_type_0[2];

#line 175 "hlds.make_hlds.c"
static const MR_PseudoTypeInfo hlds__make_hlds__hlds__make_hlds__field_types_ims_item_1_0[2];

#line 178 "hlds.make_hlds.c"
static const MR_DuFunctorDesc hlds__make_hlds__hlds__make_hlds__du_functor_desc_ims_item_1_0;

#line 181 "hlds.make_hlds.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__hlds__make_hlds__du_stag_ordered_ims_item_1_0[1];

#line 184 "hlds.make_hlds.c"
static const MR_DuPtagLayout hlds__make_hlds__hlds__make_hlds__du_ptag_ordered_ims_item_1[1];

#line 187 "hlds.make_hlds.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__hlds__make_hlds__du_name_ordered_ims_item_1[1];

#line 190 "hlds.make_hlds.c"
static const MR_Integer hlds__make_hlds__hlds__make_hlds__functor_number_map_ims_item_1[1];

#line 193 "hlds.make_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__hlds__make_hlds__pti_ims_item_1__pseudo_1;

#line 196 "hlds.make_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__list__pti_list_1__pseudo_hlds__make_hlds__pti_ims_item_1__pseudo_1;

#line 199 "hlds.make_hlds.c"
static const MR_PseudoTypeInfo hlds__make_hlds__hlds__make_hlds__field_types_sec_info_0_0[2];

#line 202 "hlds.make_hlds.c"
static const MR_DuFunctorDesc hlds__make_hlds__hlds__make_hlds__du_functor_desc_sec_info_0_0;

#line 205 "hlds.make_hlds.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__hlds__make_hlds__du_stag_ordered_sec_info_0_0[1];

#line 208 "hlds.make_hlds.c"
static const MR_DuPtagLayout hlds__make_hlds__hlds__make_hlds__du_ptag_ordered_sec_info_0[1];

#line 211 "hlds.make_hlds.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__hlds__make_hlds__du_name_ordered_sec_info_0[1];

#line 214 "hlds.make_hlds.c"
static const MR_Integer hlds__make_hlds__hlds__make_hlds__functor_number_map_sec_info_0[1];

#line 217 "hlds.make_hlds.c"
static const MR_PseudoTypeInfo hlds__make_hlds__hlds__make_hlds__field_types_sec_item_1_0[2];

#line 220 "hlds.make_hlds.c"
static const MR_DuFunctorDesc hlds__make_hlds__hlds__make_hlds__du_functor_desc_sec_item_1_0;

#line 223 "hlds.make_hlds.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__hlds__make_hlds__du_stag_ordered_sec_item_1_0[1];

#line 226 "hlds.make_hlds.c"
static const MR_DuPtagLayout hlds__make_hlds__hlds__make_hlds__du_ptag_ordered_sec_item_1[1];

#line 229 "hlds.make_hlds.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__hlds__make_hlds__du_name_ordered_sec_item_1[1];

#line 232 "hlds.make_hlds.c"
static const MR_Integer hlds__make_hlds__hlds__make_hlds__functor_number_map_sec_item_1[1];

#line 235 "hlds.make_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__hlds__make_hlds__pti_sec_item_1__pseudo_1;

#line 238 "hlds.make_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__list__pti_list_1__pseudo_hlds__make_hlds__pti_sec_item_1__pseudo_1;

#line 241 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____found_invalid_inst_or_mode_0_0_10001(
#line 244 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 246 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2);

#line 249 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____found_invalid_inst_or_mode_0_0_10001(
#line 252 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_1,
#line 254 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 256 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3);

#line 259 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____found_invalid_type_0_0_10001(
#line 262 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 264 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2);

#line 267 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____found_invalid_type_0_0_10001(
#line 270 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_1,
#line 272 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 274 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3);

#line 277 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____ims_item_1_0_10001(
#line 280 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 282 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 284 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3);

#line 287 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____ims_item_1_0_10001(
#line 290 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 292 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_2,
#line 294 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3,
#line 296 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_4);

#line 299 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____ims_list_1_0_10001(
#line 302 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 304 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 306 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3);

#line 309 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____ims_list_1_0_10001(
#line 312 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 314 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_2,
#line 316 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3,
#line 318 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_4);

#line 321 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____make_hlds_qual_info_0_0_10001(
#line 324 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 326 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2);

#line 329 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____make_hlds_qual_info_0_0_10001(
#line 332 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_1,
#line 334 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 336 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3);

#line 339 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____sec_info_0_0_10001(
#line 342 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 344 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2);

#line 347 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____sec_info_0_0_10001(
#line 350 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_1,
#line 352 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 354 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3);

#line 357 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____sec_item_1_0_10001(
#line 360 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 362 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 364 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3);

#line 367 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____sec_item_1_0_10001(
#line 370 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 372 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_2,
#line 374 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3,
#line 376 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_4);

#line 379 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____sec_list_1_0_10001(
#line 382 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 384 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 386 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3);

#line 389 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____sec_list_1_0_10001(
#line 392 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 394 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_2,
#line 396 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3,
#line 398 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_4);







#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 414 "hlds.make_hlds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_inst_or_mode_0_0 = {
  (MR_String) "did_not_find_invalid_inst_or_mode",
  (MR_Integer) 0
};

#line 420 "hlds.make_hlds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_inst_or_mode_0_1 = {
  (MR_String) "found_invalid_inst_or_mode",
  (MR_Integer) 1
};

#line 426 "hlds.make_hlds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__hlds__make_hlds__enum_value_ordered_found_invalid_inst_or_mode_0[2] = {
  &hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_inst_or_mode_0_0,
  &hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_inst_or_mode_0_1
};

#line 432 "hlds.make_hlds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__hlds__make_hlds__enum_name_ordered_found_invalid_inst_or_mode_0[2] = {
  &hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_inst_or_mode_0_0,
  &hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_inst_or_mode_0_1
};

#line 438 "hlds.make_hlds.c"
static const MR_Integer hlds__make_hlds__hlds__make_hlds__functor_number_map_found_invalid_inst_or_mode_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 444 "hlds.make_hlds.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_inst_or_mode_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds____Unify____found_invalid_inst_or_mode_0_0_10001)),
  ((MR_Box) (hlds__make_hlds____Compare____found_invalid_inst_or_mode_0_0_10001)),
  (MR_String) "hlds.make_hlds",
  (MR_String) "found_invalid_inst_or_mode",
  {     hlds__make_hlds__hlds__make_hlds__enum_name_ordered_found_invalid_inst_or_mode_0 },
  {     hlds__make_hlds__hlds__make_hlds__enum_value_ordered_found_invalid_inst_or_mode_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__make_hlds__hlds__make_hlds__functor_number_map_found_invalid_inst_or_mode_0
};

#line 461 "hlds.make_hlds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_type_0_0 = {
  (MR_String) "did_not_find_invalid_type",
  (MR_Integer) 0
};

#line 467 "hlds.make_hlds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_type_0_1 = {
  (MR_String) "found_invalid_type",
  (MR_Integer) 1
};

#line 473 "hlds.make_hlds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__hlds__make_hlds__enum_value_ordered_found_invalid_type_0[2] = {
  &hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_type_0_0,
  &hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_type_0_1
};

#line 479 "hlds.make_hlds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__hlds__make_hlds__enum_name_ordered_found_invalid_type_0[2] = {
  &hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_type_0_0,
  &hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_type_0_1
};

#line 485 "hlds.make_hlds.c"
static const MR_Integer hlds__make_hlds__hlds__make_hlds__functor_number_map_found_invalid_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 491 "hlds.make_hlds.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds____Unify____found_invalid_type_0_0_10001)),
  ((MR_Box) (hlds__make_hlds____Compare____found_invalid_type_0_0_10001)),
  (MR_String) "hlds.make_hlds",
  (MR_String) "found_invalid_type",
  {     hlds__make_hlds__hlds__make_hlds__enum_name_ordered_found_invalid_type_0 },
  {     hlds__make_hlds__hlds__make_hlds__enum_value_ordered_found_invalid_type_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__make_hlds__hlds__make_hlds__functor_number_map_found_invalid_type_0
};

#line 508 "hlds.make_hlds.c"
static const MR_PseudoTypeInfo hlds__make_hlds__hlds__make_hlds__field_types_ims_item_1_0[2] = {
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_item_mercury_status_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 514 "hlds.make_hlds.c"
static const MR_DuFunctorDesc hlds__make_hlds__hlds__make_hlds__du_functor_desc_ims_item_1_0 = {
  (MR_String) "ims_item",
  (MR_Integer) 2,
  (MR_Integer) 2,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__make_hlds__hlds__make_hlds__field_types_ims_item_1_0,
  NULL,
  NULL,
  NULL
};

#line 529 "hlds.make_hlds.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__hlds__make_hlds__du_stag_ordered_ims_item_1_0[1] = {
  &hlds__make_hlds__hlds__make_hlds__du_functor_desc_ims_item_1_0
};

#line 534 "hlds.make_hlds.c"
static const MR_DuPtagLayout hlds__make_hlds__hlds__make_hlds__du_ptag_ordered_ims_item_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__hlds__make_hlds__du_stag_ordered_ims_item_1_0
  }
};

#line 543 "hlds.make_hlds.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__hlds__make_hlds__du_name_ordered_ims_item_1[1] = {
  &hlds__make_hlds__hlds__make_hlds__du_functor_desc_ims_item_1_0
};

#line 548 "hlds.make_hlds.c"
static const MR_Integer hlds__make_hlds__hlds__make_hlds__functor_number_map_ims_item_1[1] = {
  (MR_Integer) 0
};

#line 553 "hlds.make_hlds.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds____Unify____ims_item_1_0_10001)),
  ((MR_Box) (hlds__make_hlds____Compare____ims_item_1_0_10001)),
  (MR_String) "hlds.make_hlds",
  (MR_String) "ims_item",
  {     hlds__make_hlds__hlds__make_hlds__du_name_ordered_ims_item_1 },
  {     hlds__make_hlds__hlds__make_hlds__du_ptag_ordered_ims_item_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__make_hlds__hlds__make_hlds__functor_number_map_ims_item_1
};

#line 570 "hlds.make_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__hlds__make_hlds__pti_ims_item_1__pseudo_1 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 578 "hlds.make_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__list__pti_list_1__pseudo_hlds__make_hlds__pti_ims_item_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__hlds__make_hlds__pti_ims_item_1__pseudo_1
  }
};

#line 586 "hlds.make_hlds.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_list_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (hlds__make_hlds____Unify____ims_list_1_0_10001)),
  ((MR_Box) (hlds__make_hlds____Compare____ims_list_1_0_10001)),
  (MR_String) "hlds.make_hlds",
  (MR_String) "ims_list",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__make_hlds__list__pti_list_1__pseudo_hlds__make_hlds__pti_ims_item_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 603 "hlds.make_hlds.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__hlds__make_hlds__type_ctor_info_make_hlds_qual_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__make_hlds____Unify____make_hlds_qual_info_0_0_10001)),
  ((MR_Box) (hlds__make_hlds____Compare____make_hlds_qual_info_0_0_10001)),
  (MR_String) "hlds.make_hlds",
  (MR_String) "make_hlds_qual_info",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 620 "hlds.make_hlds.c"
static const MR_PseudoTypeInfo hlds__make_hlds__hlds__make_hlds__field_types_sec_info_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_item_mercury_status_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_need_qualifier_0
};

#line 626 "hlds.make_hlds.c"
static const MR_DuFunctorDesc hlds__make_hlds__hlds__make_hlds__du_functor_desc_sec_info_0_0 = {
  (MR_String) "sec_info",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__make_hlds__hlds__make_hlds__field_types_sec_info_0_0,
  NULL,
  NULL,
  NULL
};

#line 641 "hlds.make_hlds.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__hlds__make_hlds__du_stag_ordered_sec_info_0_0[1] = {
  &hlds__make_hlds__hlds__make_hlds__du_functor_desc_sec_info_0_0
};

#line 646 "hlds.make_hlds.c"
static const MR_DuPtagLayout hlds__make_hlds__hlds__make_hlds__du_ptag_ordered_sec_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__hlds__make_hlds__du_stag_ordered_sec_info_0_0
  }
};

#line 655 "hlds.make_hlds.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__hlds__make_hlds__du_name_ordered_sec_info_0[1] = {
  &hlds__make_hlds__hlds__make_hlds__du_functor_desc_sec_info_0_0
};

#line 660 "hlds.make_hlds.c"
static const MR_Integer hlds__make_hlds__hlds__make_hlds__functor_number_map_sec_info_0[1] = {
  (MR_Integer) 0
};

#line 665 "hlds.make_hlds.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds____Unify____sec_info_0_0_10001)),
  ((MR_Box) (hlds__make_hlds____Compare____sec_info_0_0_10001)),
  (MR_String) "hlds.make_hlds",
  (MR_String) "sec_info",
  {     hlds__make_hlds__hlds__make_hlds__du_name_ordered_sec_info_0 },
  {     hlds__make_hlds__hlds__make_hlds__du_ptag_ordered_sec_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__make_hlds__hlds__make_hlds__functor_number_map_sec_info_0
};

#line 682 "hlds.make_hlds.c"
static const MR_PseudoTypeInfo hlds__make_hlds__hlds__make_hlds__field_types_sec_item_1_0[2] = {
  (MR_PseudoTypeInfo) &hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_info_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 688 "hlds.make_hlds.c"
static const MR_DuFunctorDesc hlds__make_hlds__hlds__make_hlds__du_functor_desc_sec_item_1_0 = {
  (MR_String) "sec_item",
  (MR_Integer) 2,
  (MR_Integer) 2,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__make_hlds__hlds__make_hlds__field_types_sec_item_1_0,
  NULL,
  NULL,
  NULL
};

#line 703 "hlds.make_hlds.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__hlds__make_hlds__du_stag_ordered_sec_item_1_0[1] = {
  &hlds__make_hlds__hlds__make_hlds__du_functor_desc_sec_item_1_0
};

#line 708 "hlds.make_hlds.c"
static const MR_DuPtagLayout hlds__make_hlds__hlds__make_hlds__du_ptag_ordered_sec_item_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__hlds__make_hlds__du_stag_ordered_sec_item_1_0
  }
};

#line 717 "hlds.make_hlds.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__hlds__make_hlds__du_name_ordered_sec_item_1[1] = {
  &hlds__make_hlds__hlds__make_hlds__du_functor_desc_sec_item_1_0
};

#line 722 "hlds.make_hlds.c"
static const MR_Integer hlds__make_hlds__hlds__make_hlds__functor_number_map_sec_item_1[1] = {
  (MR_Integer) 0
};

#line 727 "hlds.make_hlds.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__make_hlds____Unify____sec_item_1_0_10001)),
  ((MR_Box) (hlds__make_hlds____Compare____sec_item_1_0_10001)),
  (MR_String) "hlds.make_hlds",
  (MR_String) "sec_item",
  {     hlds__make_hlds__hlds__make_hlds__du_name_ordered_sec_item_1 },
  {     hlds__make_hlds__hlds__make_hlds__du_ptag_ordered_sec_item_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__make_hlds__hlds__make_hlds__functor_number_map_sec_item_1
};

#line 744 "hlds.make_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__hlds__make_hlds__pti_sec_item_1__pseudo_1 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 752 "hlds.make_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__list__pti_list_1__pseudo_hlds__make_hlds__pti_sec_item_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__hlds__make_hlds__pti_sec_item_1__pseudo_1
  }
};

#line 760 "hlds.make_hlds.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_list_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (hlds__make_hlds____Unify____sec_list_1_0_10001)),
  ((MR_Box) (hlds__make_hlds____Compare____sec_list_1_0_10001)),
  (MR_String) "hlds.make_hlds",
  (MR_String) "sec_list",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__make_hlds__list__pti_list_1__pseudo_hlds__make_hlds__pti_sec_item_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 777 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____found_invalid_inst_or_mode_0_0_10001(
#line 780 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 782 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2)
#line 784 "hlds.make_hlds.c"
{
#line 786 "hlds.make_hlds.c"
  {
#line 788 "hlds.make_hlds.c"
    MR_bool hlds__make_hlds__succeeded;

#line 791 "hlds.make_hlds.c"
    {
#line 793 "hlds.make_hlds.c"
      hlds__make_hlds__succeeded = hlds__make_hlds____Unify____found_invalid_inst_or_mode_0_0(((MR_Word) hlds__make_hlds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__wrapper_arg_2));
    }
#line 796 "hlds.make_hlds.c"
    return hlds__make_hlds__succeeded;
#line 798 "hlds.make_hlds.c"
  }
#line 800 "hlds.make_hlds.c"
}

#line 803 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____found_invalid_inst_or_mode_0_0_10001(
#line 806 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_1,
#line 808 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 810 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3)
#line 812 "hlds.make_hlds.c"
{
#line 814 "hlds.make_hlds.c"
  {
#line 816 "hlds.make_hlds.c"
    MR_Word hlds__make_hlds__conv0_HeadVar__1_1;

#line 819 "hlds.make_hlds.c"
    {
#line 821 "hlds.make_hlds.c"
      hlds__make_hlds____Compare____found_invalid_inst_or_mode_0_0(&hlds__make_hlds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__wrapper_arg_3));
    }
#line 824 "hlds.make_hlds.c"
    *hlds__make_hlds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__conv0_HeadVar__1_1));
#line 826 "hlds.make_hlds.c"
  }
#line 828 "hlds.make_hlds.c"
}

#line 831 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____found_invalid_type_0_0_10001(
#line 834 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 836 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2)
#line 838 "hlds.make_hlds.c"
{
#line 840 "hlds.make_hlds.c"
  {
#line 842 "hlds.make_hlds.c"
    MR_bool hlds__make_hlds__succeeded;

#line 845 "hlds.make_hlds.c"
    {
#line 847 "hlds.make_hlds.c"
      hlds__make_hlds__succeeded = hlds__make_hlds____Unify____found_invalid_type_0_0(((MR_Word) hlds__make_hlds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__wrapper_arg_2));
    }
#line 850 "hlds.make_hlds.c"
    return hlds__make_hlds__succeeded;
#line 852 "hlds.make_hlds.c"
  }
#line 854 "hlds.make_hlds.c"
}

#line 857 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____found_invalid_type_0_0_10001(
#line 860 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_1,
#line 862 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 864 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3)
#line 866 "hlds.make_hlds.c"
{
#line 868 "hlds.make_hlds.c"
  {
#line 870 "hlds.make_hlds.c"
    MR_Word hlds__make_hlds__conv0_HeadVar__1_1;

#line 873 "hlds.make_hlds.c"
    {
#line 875 "hlds.make_hlds.c"
      hlds__make_hlds____Compare____found_invalid_type_0_0(&hlds__make_hlds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__wrapper_arg_3));
    }
#line 878 "hlds.make_hlds.c"
    *hlds__make_hlds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__conv0_HeadVar__1_1));
#line 880 "hlds.make_hlds.c"
  }
#line 882 "hlds.make_hlds.c"
}

#line 885 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____ims_item_1_0_10001(
#line 888 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 890 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 892 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3)
#line 894 "hlds.make_hlds.c"
{
#line 896 "hlds.make_hlds.c"
  {
#line 898 "hlds.make_hlds.c"
    MR_bool hlds__make_hlds__succeeded;

#line 901 "hlds.make_hlds.c"
    {
#line 903 "hlds.make_hlds.c"
      hlds__make_hlds__succeeded = hlds__make_hlds____Unify____ims_item_1_0(((MR_Word) hlds__make_hlds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__wrapper_arg_3));
    }
#line 906 "hlds.make_hlds.c"
    return hlds__make_hlds__succeeded;
#line 908 "hlds.make_hlds.c"
  }
#line 910 "hlds.make_hlds.c"
}

#line 913 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____ims_item_1_0_10001(
#line 916 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 918 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_2,
#line 920 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3,
#line 922 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_4)
#line 924 "hlds.make_hlds.c"
{
#line 926 "hlds.make_hlds.c"
  {
#line 928 "hlds.make_hlds.c"
    MR_Word hlds__make_hlds__conv0_HeadVar__1_1;

#line 931 "hlds.make_hlds.c"
    {
#line 933 "hlds.make_hlds.c"
      hlds__make_hlds____Compare____ims_item_1_0(((MR_Word) hlds__make_hlds__wrapper_arg_1), &hlds__make_hlds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__wrapper_arg_3), ((MR_Word) hlds__make_hlds__wrapper_arg_4));
    }
#line 936 "hlds.make_hlds.c"
    *hlds__make_hlds__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__conv0_HeadVar__1_1));
#line 938 "hlds.make_hlds.c"
  }
#line 940 "hlds.make_hlds.c"
}

#line 943 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____ims_list_1_0_10001(
#line 946 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 948 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 950 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3)
#line 952 "hlds.make_hlds.c"
{
#line 954 "hlds.make_hlds.c"
  {
#line 956 "hlds.make_hlds.c"
    MR_bool hlds__make_hlds__succeeded;

#line 959 "hlds.make_hlds.c"
    {
#line 961 "hlds.make_hlds.c"
      hlds__make_hlds__succeeded = hlds__make_hlds____Unify____ims_list_1_0(((MR_Word) hlds__make_hlds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__wrapper_arg_3));
    }
#line 964 "hlds.make_hlds.c"
    return hlds__make_hlds__succeeded;
#line 966 "hlds.make_hlds.c"
  }
#line 968 "hlds.make_hlds.c"
}

#line 971 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____ims_list_1_0_10001(
#line 974 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 976 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_2,
#line 978 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3,
#line 980 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_4)
#line 982 "hlds.make_hlds.c"
{
#line 984 "hlds.make_hlds.c"
  {
#line 986 "hlds.make_hlds.c"
    MR_Word hlds__make_hlds__conv0_HeadVar__1_1;

#line 989 "hlds.make_hlds.c"
    {
#line 991 "hlds.make_hlds.c"
      hlds__make_hlds____Compare____ims_list_1_0(((MR_Word) hlds__make_hlds__wrapper_arg_1), &hlds__make_hlds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__wrapper_arg_3), ((MR_Word) hlds__make_hlds__wrapper_arg_4));
    }
#line 994 "hlds.make_hlds.c"
    *hlds__make_hlds__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__conv0_HeadVar__1_1));
#line 996 "hlds.make_hlds.c"
  }
#line 998 "hlds.make_hlds.c"
}

#line 1001 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____make_hlds_qual_info_0_0_10001(
#line 1004 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 1006 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2)
#line 1008 "hlds.make_hlds.c"
{
#line 1010 "hlds.make_hlds.c"
  {
#line 1012 "hlds.make_hlds.c"
    MR_bool hlds__make_hlds__succeeded;

#line 1015 "hlds.make_hlds.c"
    {
#line 1017 "hlds.make_hlds.c"
      hlds__make_hlds__succeeded = hlds__make_hlds____Unify____make_hlds_qual_info_0_0(((MR_Word) hlds__make_hlds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__wrapper_arg_2));
    }
#line 1020 "hlds.make_hlds.c"
    return hlds__make_hlds__succeeded;
#line 1022 "hlds.make_hlds.c"
  }
#line 1024 "hlds.make_hlds.c"
}

#line 1027 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____make_hlds_qual_info_0_0_10001(
#line 1030 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_1,
#line 1032 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 1034 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3)
#line 1036 "hlds.make_hlds.c"
{
#line 1038 "hlds.make_hlds.c"
  {
#line 1040 "hlds.make_hlds.c"
    MR_Word hlds__make_hlds__conv0_HeadVar__1_1;

#line 1043 "hlds.make_hlds.c"
    {
#line 1045 "hlds.make_hlds.c"
      hlds__make_hlds____Compare____make_hlds_qual_info_0_0(&hlds__make_hlds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__wrapper_arg_3));
    }
#line 1048 "hlds.make_hlds.c"
    *hlds__make_hlds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__conv0_HeadVar__1_1));
#line 1050 "hlds.make_hlds.c"
  }
#line 1052 "hlds.make_hlds.c"
}

#line 1055 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____sec_info_0_0_10001(
#line 1058 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 1060 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2)
#line 1062 "hlds.make_hlds.c"
{
#line 1064 "hlds.make_hlds.c"
  {
#line 1066 "hlds.make_hlds.c"
    MR_bool hlds__make_hlds__succeeded;

#line 1069 "hlds.make_hlds.c"
    {
#line 1071 "hlds.make_hlds.c"
      hlds__make_hlds__succeeded = hlds__make_hlds____Unify____sec_info_0_0(((MR_Word) hlds__make_hlds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__wrapper_arg_2));
    }
#line 1074 "hlds.make_hlds.c"
    return hlds__make_hlds__succeeded;
#line 1076 "hlds.make_hlds.c"
  }
#line 1078 "hlds.make_hlds.c"
}

#line 1081 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____sec_info_0_0_10001(
#line 1084 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_1,
#line 1086 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 1088 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3)
#line 1090 "hlds.make_hlds.c"
{
#line 1092 "hlds.make_hlds.c"
  {
#line 1094 "hlds.make_hlds.c"
    MR_Word hlds__make_hlds__conv0_HeadVar__1_1;

#line 1097 "hlds.make_hlds.c"
    {
#line 1099 "hlds.make_hlds.c"
      hlds__make_hlds____Compare____sec_info_0_0(&hlds__make_hlds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__wrapper_arg_3));
    }
#line 1102 "hlds.make_hlds.c"
    *hlds__make_hlds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__conv0_HeadVar__1_1));
#line 1104 "hlds.make_hlds.c"
  }
#line 1106 "hlds.make_hlds.c"
}

#line 1109 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____sec_item_1_0_10001(
#line 1112 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 1114 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 1116 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3)
#line 1118 "hlds.make_hlds.c"
{
#line 1120 "hlds.make_hlds.c"
  {
#line 1122 "hlds.make_hlds.c"
    MR_bool hlds__make_hlds__succeeded;

#line 1125 "hlds.make_hlds.c"
    {
#line 1127 "hlds.make_hlds.c"
      hlds__make_hlds__succeeded = hlds__make_hlds____Unify____sec_item_1_0(((MR_Word) hlds__make_hlds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__wrapper_arg_3));
    }
#line 1130 "hlds.make_hlds.c"
    return hlds__make_hlds__succeeded;
#line 1132 "hlds.make_hlds.c"
  }
#line 1134 "hlds.make_hlds.c"
}

#line 1137 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____sec_item_1_0_10001(
#line 1140 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 1142 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_2,
#line 1144 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3,
#line 1146 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_4)
#line 1148 "hlds.make_hlds.c"
{
#line 1150 "hlds.make_hlds.c"
  {
#line 1152 "hlds.make_hlds.c"
    MR_Word hlds__make_hlds__conv0_HeadVar__1_1;

#line 1155 "hlds.make_hlds.c"
    {
#line 1157 "hlds.make_hlds.c"
      hlds__make_hlds____Compare____sec_item_1_0(((MR_Word) hlds__make_hlds__wrapper_arg_1), &hlds__make_hlds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__wrapper_arg_3), ((MR_Word) hlds__make_hlds__wrapper_arg_4));
    }
#line 1160 "hlds.make_hlds.c"
    *hlds__make_hlds__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__conv0_HeadVar__1_1));
#line 1162 "hlds.make_hlds.c"
  }
#line 1164 "hlds.make_hlds.c"
}

#line 1167 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____sec_list_1_0_10001(
#line 1170 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 1172 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 1174 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3)
#line 1176 "hlds.make_hlds.c"
{
#line 1178 "hlds.make_hlds.c"
  {
#line 1180 "hlds.make_hlds.c"
    MR_bool hlds__make_hlds__succeeded;

#line 1183 "hlds.make_hlds.c"
    {
#line 1185 "hlds.make_hlds.c"
      hlds__make_hlds__succeeded = hlds__make_hlds____Unify____sec_list_1_0(((MR_Word) hlds__make_hlds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__wrapper_arg_3));
    }
#line 1188 "hlds.make_hlds.c"
    return hlds__make_hlds__succeeded;
#line 1190 "hlds.make_hlds.c"
  }
#line 1192 "hlds.make_hlds.c"
}

#line 1195 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____sec_list_1_0_10001(
#line 1198 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 1200 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_2,
#line 1202 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3,
#line 1204 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_4)
#line 1206 "hlds.make_hlds.c"
{
#line 1208 "hlds.make_hlds.c"
  {
#line 1210 "hlds.make_hlds.c"
    MR_Word hlds__make_hlds__conv0_HeadVar__1_1;

#line 1213 "hlds.make_hlds.c"
    {
#line 1215 "hlds.make_hlds.c"
      hlds__make_hlds____Compare____sec_list_1_0(((MR_Word) hlds__make_hlds__wrapper_arg_1), &hlds__make_hlds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__wrapper_arg_3), ((MR_Word) hlds__make_hlds__wrapper_arg_4));
    }
#line 1218 "hlds.make_hlds.c"
    *hlds__make_hlds__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__conv0_HeadVar__1_1));
#line 1220 "hlds.make_hlds.c"
  }
#line 1222 "hlds.make_hlds.c"
}

#line 63 "make_hlds.m"
void MR_CALL 
hlds__make_hlds____Compare____sec_list_1_0(
#line 63 "make_hlds.m"
  MR_Word hlds__make_hlds__TypeInfo_for_T_6,
#line 63 "make_hlds.m"
  MR_Word * hlds__make_hlds__HeadVar__1_1,
#line 63 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_2,
#line 63 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__3_3)
#line 63 "make_hlds.m"
{
#line 63 "make_hlds.m"
  {
#line 63 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;
#line 63 "make_hlds.m"
    MR_Word hlds__make_hlds__TypeInfo_8_8;
#line 63 "make_hlds.m"
    MR_Word hlds__make_hlds__Cast_HeadVar1_4 = hlds__make_hlds__HeadVar__2_2;
#line 63 "make_hlds.m"
    MR_Word hlds__make_hlds__Cast_HeadVar2_5 = hlds__make_hlds__HeadVar__3_3;

#line 1249 "hlds.make_hlds.c"
    {
#line 1251 "hlds.make_hlds.c"
      hlds__make_hlds__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1253 "hlds.make_hlds.c"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__TypeInfo_8_8, 0) = ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1));
#line 1255 "hlds.make_hlds.c"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__TypeInfo_8_8, 1) = ((MR_Box) (hlds__make_hlds__TypeInfo_for_T_6));
#line 1257 "hlds.make_hlds.c"
    }
#line 63 "make_hlds.m"
    {
#line 63 "make_hlds.m"
      mercury__list____Compare____list_1_0(hlds__make_hlds__TypeInfo_8_8, hlds__make_hlds__HeadVar__1_1, (MR_Word) hlds__make_hlds__Cast_HeadVar1_4, (MR_Word) hlds__make_hlds__Cast_HeadVar2_5);
    }
#line 63 "make_hlds.m"
  }
#line 63 "make_hlds.m"
}

#line 63 "make_hlds.m"
MR_bool MR_CALL 
hlds__make_hlds____Unify____sec_list_1_0(
#line 63 "make_hlds.m"
  MR_Word hlds__make_hlds__TypeInfo_for_T_5,
#line 63 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__1_1,
#line 63 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_2)
#line 63 "make_hlds.m"
{
#line 63 "make_hlds.m"
  {
#line 63 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;
#line 63 "make_hlds.m"
    MR_Word hlds__make_hlds__TypeInfo_7_7;
#line 63 "make_hlds.m"
    MR_Word hlds__make_hlds__Cast_HeadVar1_3 = hlds__make_hlds__HeadVar__1_1;
#line 63 "make_hlds.m"
    MR_Word hlds__make_hlds__Cast_HeadVar2_4 = hlds__make_hlds__HeadVar__2_2;

#line 1291 "hlds.make_hlds.c"
    {
#line 1293 "hlds.make_hlds.c"
      hlds__make_hlds__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1295 "hlds.make_hlds.c"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__TypeInfo_7_7, 0) = ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1));
#line 1297 "hlds.make_hlds.c"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__TypeInfo_7_7, 1) = ((MR_Box) (hlds__make_hlds__TypeInfo_for_T_5));
#line 1299 "hlds.make_hlds.c"
    }
#line 63 "make_hlds.m"
    {
#line 63 "make_hlds.m"
      hlds__make_hlds__succeeded = mercury__list____Unify____list_1_0(hlds__make_hlds__TypeInfo_7_7, (MR_Word) hlds__make_hlds__Cast_HeadVar1_3, (MR_Word) hlds__make_hlds__Cast_HeadVar2_4);
    }
#line 63 "make_hlds.m"
    return hlds__make_hlds__succeeded;
#line 63 "make_hlds.m"
  }
#line 63 "make_hlds.m"
}

#line 64 "make_hlds.m"
void MR_CALL 
hlds__make_hlds____Compare____sec_item_1_0(
#line 64 "make_hlds.m"
  MR_Word hlds__make_hlds__TypeInfo_for_T_11,
#line 64 "make_hlds.m"
  MR_Word * hlds__make_hlds__HeadVar__1_1,
#line 64 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_2,
#line 64 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__3_3)
#line 64 "make_hlds.m"
{
#line 64 "make_hlds.m"
  {
#line 64 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;
#line 64 "make_hlds.m"
    MR_Integer hlds__make_hlds__CastX_9 = (MR_Integer) hlds__make_hlds__HeadVar__2_2;
#line 64 "make_hlds.m"
    MR_Integer hlds__make_hlds__CastY_10 = (MR_Integer) hlds__make_hlds__HeadVar__3_3;

#line 64 "make_hlds.m"
    hlds__make_hlds__succeeded = (hlds__make_hlds__CastX_9 == hlds__make_hlds__CastY_10);
#line 64 "make_hlds.m"
    if (hlds__make_hlds__succeeded)
#line 1339 "hlds.make_hlds.c"
      *hlds__make_hlds__HeadVar__1_1 = (MR_Integer) 0;
#line 64 "make_hlds.m"
    else
#line 64 "make_hlds.m"
      {
#line 64 "make_hlds.m"
        MR_Word hlds__make_hlds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__2_2, (MR_Integer) 0)));
#line 64 "make_hlds.m"
        MR_Box hlds__make_hlds__V_5_5 = (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__2_2, (MR_Integer) 1));
#line 64 "make_hlds.m"
        MR_Word hlds__make_hlds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__3_3, (MR_Integer) 0)));
#line 64 "make_hlds.m"
        MR_Box hlds__make_hlds__V_7_7 = (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__3_3, (MR_Integer) 1));
#line 64 "make_hlds.m"
        MR_Word hlds__make_hlds__V_8_8;

#line 64 "make_hlds.m"
        {
#line 64 "make_hlds.m"
          hlds__make_hlds____Compare____sec_info_0_0(&hlds__make_hlds__V_8_8, hlds__make_hlds__V_4_4, hlds__make_hlds__V_6_6);
        }
#line 1361 "hlds.make_hlds.c"
        hlds__make_hlds__succeeded = (hlds__make_hlds__V_8_8 == (MR_Integer) 0);
#line 64 "make_hlds.m"
        hlds__make_hlds__succeeded = !(hlds__make_hlds__succeeded);
#line 64 "make_hlds.m"
        if (hlds__make_hlds__succeeded)
#line 64 "make_hlds.m"
          *hlds__make_hlds__HeadVar__1_1 = hlds__make_hlds__V_8_8;
#line 64 "make_hlds.m"
        else
#line 64 "make_hlds.m"
          {
#line 64 "make_hlds.m"
            mercury__builtin__compare_3_p_0(hlds__make_hlds__TypeInfo_for_T_11, hlds__make_hlds__HeadVar__1_1, hlds__make_hlds__V_5_5, hlds__make_hlds__V_7_7);
          }
#line 64 "make_hlds.m"
      }
#line 64 "make_hlds.m"
  }
#line 64 "make_hlds.m"
}

#line 64 "make_hlds.m"
MR_bool MR_CALL 
hlds__make_hlds____Unify____sec_item_1_0(
#line 64 "make_hlds.m"
  MR_Word hlds__make_hlds__TypeInfo_for_T_9,
#line 64 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__1_1,
#line 64 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_2)
#line 64 "make_hlds.m"
{
#line 64 "make_hlds.m"
  {
#line 64 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;
#line 64 "make_hlds.m"
    MR_Integer hlds__make_hlds__CastX_7 = (MR_Integer) hlds__make_hlds__HeadVar__1_1;
#line 64 "make_hlds.m"
    MR_Integer hlds__make_hlds__CastY_8 = (MR_Integer) hlds__make_hlds__HeadVar__2_2;

#line 64 "make_hlds.m"
    hlds__make_hlds__succeeded = (hlds__make_hlds__CastX_7 == hlds__make_hlds__CastY_8);
#line 64 "make_hlds.m"
    if (hlds__make_hlds__succeeded)
#line 64 "make_hlds.m"
      hlds__make_hlds__succeeded = MR_TRUE;
#line 64 "make_hlds.m"
    else
#line 64 "make_hlds.m"
      {
#line 64 "make_hlds.m"
        MR_Word hlds__make_hlds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__1_1, (MR_Integer) 0)));
#line 64 "make_hlds.m"
        MR_Box hlds__make_hlds__V_4_4 = (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__1_1, (MR_Integer) 1));
#line 64 "make_hlds.m"
        MR_Word hlds__make_hlds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__2_2, (MR_Integer) 0)));
#line 64 "make_hlds.m"
        MR_Box hlds__make_hlds__V_6_6 = (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__2_2, (MR_Integer) 1));

#line 1422 "hlds.make_hlds.c"
        {
#line 1424 "hlds.make_hlds.c"
          hlds__make_hlds__succeeded = hlds__make_hlds____Unify____sec_info_0_0(hlds__make_hlds__V_3_3, hlds__make_hlds__V_5_5);
        }
#line 64 "make_hlds.m"
        if (hlds__make_hlds__succeeded)
#line 1429 "hlds.make_hlds.c"
          {
#line 1431 "hlds.make_hlds.c"
            hlds__make_hlds__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__TypeInfo_for_T_9, hlds__make_hlds__V_4_4, hlds__make_hlds__V_6_6);
          }
#line 64 "make_hlds.m"
      }
#line 64 "make_hlds.m"
    return hlds__make_hlds__succeeded;
#line 64 "make_hlds.m"
  }
#line 64 "make_hlds.m"
}

#line 66 "make_hlds.m"
void MR_CALL 
hlds__make_hlds____Compare____sec_info_0_0(
#line 66 "make_hlds.m"
  MR_Word * hlds__make_hlds__HeadVar__1_1,
#line 66 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_2,
#line 66 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__3_3)
#line 66 "make_hlds.m"
{
#line 66 "make_hlds.m"
  {
#line 66 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;
#line 66 "make_hlds.m"
    MR_Integer hlds__make_hlds__CastX_9 = (MR_Integer) hlds__make_hlds__HeadVar__2_2;
#line 66 "make_hlds.m"
    MR_Integer hlds__make_hlds__CastY_10 = (MR_Integer) hlds__make_hlds__HeadVar__3_3;

#line 66 "make_hlds.m"
    hlds__make_hlds__succeeded = (hlds__make_hlds__CastX_9 == hlds__make_hlds__CastY_10);
#line 66 "make_hlds.m"
    if (hlds__make_hlds__succeeded)
#line 1467 "hlds.make_hlds.c"
      *hlds__make_hlds__HeadVar__1_1 = (MR_Integer) 0;
#line 66 "make_hlds.m"
    else
#line 66 "make_hlds.m"
      {
#line 66 "make_hlds.m"
        MR_Word hlds__make_hlds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__2_2, (MR_Integer) 0)));
#line 66 "make_hlds.m"
        MR_Word hlds__make_hlds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__2_2, (MR_Integer) 1)));
#line 66 "make_hlds.m"
        MR_Word hlds__make_hlds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__3_3, (MR_Integer) 0)));
#line 66 "make_hlds.m"
        MR_Word hlds__make_hlds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__3_3, (MR_Integer) 1)));
#line 66 "make_hlds.m"
        MR_Word hlds__make_hlds__V_8_8;

#line 66 "make_hlds.m"
        {
#line 66 "make_hlds.m"
          hlds__status____Compare____item_mercury_status_0_0(&hlds__make_hlds__V_8_8, hlds__make_hlds__V_4_4, hlds__make_hlds__V_6_6);
        }
#line 1489 "hlds.make_hlds.c"
        hlds__make_hlds__succeeded = (hlds__make_hlds__V_8_8 == (MR_Integer) 0);
#line 66 "make_hlds.m"
        hlds__make_hlds__succeeded = !(hlds__make_hlds__succeeded);
#line 66 "make_hlds.m"
        if (hlds__make_hlds__succeeded)
#line 66 "make_hlds.m"
          *hlds__make_hlds__HeadVar__1_1 = hlds__make_hlds__V_8_8;
#line 66 "make_hlds.m"
        else
#line 66 "make_hlds.m"
          {
#line 66 "make_hlds.m"
            MR_Integer hlds__make_hlds__V_13_13 = (MR_Integer) hlds__make_hlds__V_5_5;
#line 66 "make_hlds.m"
            MR_Integer hlds__make_hlds__V_14_14 = (MR_Integer) hlds__make_hlds__V_7_7;

#line 66 "make_hlds.m"
            {
#line 66 "make_hlds.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__HeadVar__1_1, hlds__make_hlds__V_13_13, hlds__make_hlds__V_14_14);
            }
#line 66 "make_hlds.m"
          }
#line 66 "make_hlds.m"
      }
#line 66 "make_hlds.m"
  }
#line 66 "make_hlds.m"
}

#line 66 "make_hlds.m"
MR_bool MR_CALL 
hlds__make_hlds____Unify____sec_info_0_0(
#line 66 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__1_1,
#line 66 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_2)
#line 66 "make_hlds.m"
{
#line 66 "make_hlds.m"
  {
#line 66 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;
#line 66 "make_hlds.m"
    MR_Integer hlds__make_hlds__CastX_7 = (MR_Integer) hlds__make_hlds__HeadVar__1_1;
#line 66 "make_hlds.m"
    MR_Integer hlds__make_hlds__CastY_8 = (MR_Integer) hlds__make_hlds__HeadVar__2_2;

#line 66 "make_hlds.m"
    hlds__make_hlds__succeeded = (hlds__make_hlds__CastX_7 == hlds__make_hlds__CastY_8);
#line 66 "make_hlds.m"
    if (hlds__make_hlds__succeeded)
#line 66 "make_hlds.m"
      hlds__make_hlds__succeeded = MR_TRUE;
#line 66 "make_hlds.m"
    else
#line 66 "make_hlds.m"
      {
#line 66 "make_hlds.m"
        MR_Word hlds__make_hlds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__1_1, (MR_Integer) 0)));
#line 66 "make_hlds.m"
        MR_Word hlds__make_hlds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__1_1, (MR_Integer) 1)));
#line 66 "make_hlds.m"
        MR_Word hlds__make_hlds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__2_2, (MR_Integer) 0)));
#line 66 "make_hlds.m"
        MR_Word hlds__make_hlds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__2_2, (MR_Integer) 1)));

#line 1557 "hlds.make_hlds.c"
        {
#line 1559 "hlds.make_hlds.c"
          hlds__make_hlds__succeeded = hlds__status____Unify____item_mercury_status_0_0(hlds__make_hlds__V_3_3, hlds__make_hlds__V_5_5);
        }
#line 66 "make_hlds.m"
        if (hlds__make_hlds__succeeded)
#line 1564 "hlds.make_hlds.c"
          hlds__make_hlds__succeeded = (hlds__make_hlds__V_4_4 == hlds__make_hlds__V_6_6);
#line 66 "make_hlds.m"
      }
#line 66 "make_hlds.m"
    return hlds__make_hlds__succeeded;
#line 66 "make_hlds.m"
  }
#line 66 "make_hlds.m"
}

#line 176 "make_hlds.m"
void MR_CALL 
hlds__make_hlds____Compare____make_hlds_qual_info_0_0(
#line 176 "make_hlds.m"
  MR_Word * hlds__make_hlds__HeadVar__1_1,
#line 176 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_2,
#line 176 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__3_3)
#line 176 "make_hlds.m"
{
#line 176 "make_hlds.m"
  {
#line 176 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;
#line 176 "make_hlds.m"
    MR_Word hlds__make_hlds__Cast_HeadVar1_4 = hlds__make_hlds__HeadVar__2_2;
#line 176 "make_hlds.m"
    MR_Word hlds__make_hlds__Cast_HeadVar2_5 = hlds__make_hlds__HeadVar__3_3;

#line 176 "make_hlds.m"
    {
#line 176 "make_hlds.m"
      hlds__make_hlds__qual_info____Compare____qual_info_0_0(hlds__make_hlds__HeadVar__1_1, hlds__make_hlds__Cast_HeadVar1_4, hlds__make_hlds__Cast_HeadVar2_5);
    }
#line 176 "make_hlds.m"
  }
#line 176 "make_hlds.m"
}

#line 176 "make_hlds.m"
MR_bool MR_CALL 
hlds__make_hlds____Unify____make_hlds_qual_info_0_0(
#line 176 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__1_1,
#line 176 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_2)
#line 176 "make_hlds.m"
{
#line 176 "make_hlds.m"
  {
#line 176 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;
#line 176 "make_hlds.m"
    MR_Word hlds__make_hlds__Cast_HeadVar1_3 = hlds__make_hlds__HeadVar__1_1;
#line 176 "make_hlds.m"
    MR_Word hlds__make_hlds__Cast_HeadVar2_4 = hlds__make_hlds__HeadVar__2_2;

#line 176 "make_hlds.m"
    {
#line 176 "make_hlds.m"
      hlds__make_hlds__succeeded = hlds__make_hlds__qual_info____Unify____qual_info_0_0(hlds__make_hlds__Cast_HeadVar1_3, hlds__make_hlds__Cast_HeadVar2_4);
    }
#line 176 "make_hlds.m"
    return hlds__make_hlds__succeeded;
#line 176 "make_hlds.m"
  }
#line 176 "make_hlds.m"
}

#line 59 "make_hlds.m"
void MR_CALL 
hlds__make_hlds____Compare____ims_list_1_0(
#line 59 "make_hlds.m"
  MR_Word hlds__make_hlds__TypeInfo_for_T_6,
#line 59 "make_hlds.m"
  MR_Word * hlds__make_hlds__HeadVar__1_1,
#line 59 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_2,
#line 59 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__3_3)
#line 59 "make_hlds.m"
{
#line 59 "make_hlds.m"
  {
#line 59 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;
#line 59 "make_hlds.m"
    MR_Word hlds__make_hlds__TypeInfo_8_8;
#line 59 "make_hlds.m"
    MR_Word hlds__make_hlds__Cast_HeadVar1_4 = hlds__make_hlds__HeadVar__2_2;
#line 59 "make_hlds.m"
    MR_Word hlds__make_hlds__Cast_HeadVar2_5 = hlds__make_hlds__HeadVar__3_3;

#line 1659 "hlds.make_hlds.c"
    {
#line 1661 "hlds.make_hlds.c"
      hlds__make_hlds__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1663 "hlds.make_hlds.c"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__TypeInfo_8_8, 0) = ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1));
#line 1665 "hlds.make_hlds.c"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__TypeInfo_8_8, 1) = ((MR_Box) (hlds__make_hlds__TypeInfo_for_T_6));
#line 1667 "hlds.make_hlds.c"
    }
#line 59 "make_hlds.m"
    {
#line 59 "make_hlds.m"
      mercury__list____Compare____list_1_0(hlds__make_hlds__TypeInfo_8_8, hlds__make_hlds__HeadVar__1_1, (MR_Word) hlds__make_hlds__Cast_HeadVar1_4, (MR_Word) hlds__make_hlds__Cast_HeadVar2_5);
    }
#line 59 "make_hlds.m"
  }
#line 59 "make_hlds.m"
}

#line 59 "make_hlds.m"
MR_bool MR_CALL 
hlds__make_hlds____Unify____ims_list_1_0(
#line 59 "make_hlds.m"
  MR_Word hlds__make_hlds__TypeInfo_for_T_5,
#line 59 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__1_1,
#line 59 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_2)
#line 59 "make_hlds.m"
{
#line 59 "make_hlds.m"
  {
#line 59 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;
#line 59 "make_hlds.m"
    MR_Word hlds__make_hlds__TypeInfo_7_7;
#line 59 "make_hlds.m"
    MR_Word hlds__make_hlds__Cast_HeadVar1_3 = hlds__make_hlds__HeadVar__1_1;
#line 59 "make_hlds.m"
    MR_Word hlds__make_hlds__Cast_HeadVar2_4 = hlds__make_hlds__HeadVar__2_2;

#line 1701 "hlds.make_hlds.c"
    {
#line 1703 "hlds.make_hlds.c"
      hlds__make_hlds__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1705 "hlds.make_hlds.c"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__TypeInfo_7_7, 0) = ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1));
#line 1707 "hlds.make_hlds.c"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__TypeInfo_7_7, 1) = ((MR_Box) (hlds__make_hlds__TypeInfo_for_T_5));
#line 1709 "hlds.make_hlds.c"
    }
#line 59 "make_hlds.m"
    {
#line 59 "make_hlds.m"
      hlds__make_hlds__succeeded = mercury__list____Unify____list_1_0(hlds__make_hlds__TypeInfo_7_7, (MR_Word) hlds__make_hlds__Cast_HeadVar1_3, (MR_Word) hlds__make_hlds__Cast_HeadVar2_4);
    }
#line 59 "make_hlds.m"
    return hlds__make_hlds__succeeded;
#line 59 "make_hlds.m"
  }
#line 59 "make_hlds.m"
}

#line 60 "make_hlds.m"
void MR_CALL 
hlds__make_hlds____Compare____ims_item_1_0(
#line 60 "make_hlds.m"
  MR_Word hlds__make_hlds__TypeInfo_for_T_11,
#line 60 "make_hlds.m"
  MR_Word * hlds__make_hlds__HeadVar__1_1,
#line 60 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_2,
#line 60 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__3_3)
#line 60 "make_hlds.m"
{
#line 60 "make_hlds.m"
  {
#line 60 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;
#line 60 "make_hlds.m"
    MR_Integer hlds__make_hlds__CastX_9 = (MR_Integer) hlds__make_hlds__HeadVar__2_2;
#line 60 "make_hlds.m"
    MR_Integer hlds__make_hlds__CastY_10 = (MR_Integer) hlds__make_hlds__HeadVar__3_3;

#line 60 "make_hlds.m"
    hlds__make_hlds__succeeded = (hlds__make_hlds__CastX_9 == hlds__make_hlds__CastY_10);
#line 60 "make_hlds.m"
    if (hlds__make_hlds__succeeded)
#line 1749 "hlds.make_hlds.c"
      *hlds__make_hlds__HeadVar__1_1 = (MR_Integer) 0;
#line 60 "make_hlds.m"
    else
#line 60 "make_hlds.m"
      {
#line 60 "make_hlds.m"
        MR_Word hlds__make_hlds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__2_2, (MR_Integer) 0)));
#line 60 "make_hlds.m"
        MR_Box hlds__make_hlds__V_5_5 = (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__2_2, (MR_Integer) 1));
#line 60 "make_hlds.m"
        MR_Word hlds__make_hlds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__3_3, (MR_Integer) 0)));
#line 60 "make_hlds.m"
        MR_Box hlds__make_hlds__V_7_7 = (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__3_3, (MR_Integer) 1));
#line 60 "make_hlds.m"
        MR_Word hlds__make_hlds__V_8_8;

#line 60 "make_hlds.m"
        {
#line 60 "make_hlds.m"
          hlds__status____Compare____item_mercury_status_0_0(&hlds__make_hlds__V_8_8, hlds__make_hlds__V_4_4, hlds__make_hlds__V_6_6);
        }
#line 1771 "hlds.make_hlds.c"
        hlds__make_hlds__succeeded = (hlds__make_hlds__V_8_8 == (MR_Integer) 0);
#line 60 "make_hlds.m"
        hlds__make_hlds__succeeded = !(hlds__make_hlds__succeeded);
#line 60 "make_hlds.m"
        if (hlds__make_hlds__succeeded)
#line 60 "make_hlds.m"
          *hlds__make_hlds__HeadVar__1_1 = hlds__make_hlds__V_8_8;
#line 60 "make_hlds.m"
        else
#line 60 "make_hlds.m"
          {
#line 60 "make_hlds.m"
            mercury__builtin__compare_3_p_0(hlds__make_hlds__TypeInfo_for_T_11, hlds__make_hlds__HeadVar__1_1, hlds__make_hlds__V_5_5, hlds__make_hlds__V_7_7);
          }
#line 60 "make_hlds.m"
      }
#line 60 "make_hlds.m"
  }
#line 60 "make_hlds.m"
}

#line 60 "make_hlds.m"
MR_bool MR_CALL 
hlds__make_hlds____Unify____ims_item_1_0(
#line 60 "make_hlds.m"
  MR_Word hlds__make_hlds__TypeInfo_for_T_9,
#line 60 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__1_1,
#line 60 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_2)
#line 60 "make_hlds.m"
{
#line 60 "make_hlds.m"
  {
#line 60 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;
#line 60 "make_hlds.m"
    MR_Integer hlds__make_hlds__CastX_7 = (MR_Integer) hlds__make_hlds__HeadVar__1_1;
#line 60 "make_hlds.m"
    MR_Integer hlds__make_hlds__CastY_8 = (MR_Integer) hlds__make_hlds__HeadVar__2_2;

#line 60 "make_hlds.m"
    hlds__make_hlds__succeeded = (hlds__make_hlds__CastX_7 == hlds__make_hlds__CastY_8);
#line 60 "make_hlds.m"
    if (hlds__make_hlds__succeeded)
#line 60 "make_hlds.m"
      hlds__make_hlds__succeeded = MR_TRUE;
#line 60 "make_hlds.m"
    else
#line 60 "make_hlds.m"
      {
#line 60 "make_hlds.m"
        MR_Word hlds__make_hlds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__1_1, (MR_Integer) 0)));
#line 60 "make_hlds.m"
        MR_Box hlds__make_hlds__V_4_4 = (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__1_1, (MR_Integer) 1));
#line 60 "make_hlds.m"
        MR_Word hlds__make_hlds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__2_2, (MR_Integer) 0)));
#line 60 "make_hlds.m"
        MR_Box hlds__make_hlds__V_6_6 = (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__2_2, (MR_Integer) 1));

#line 1832 "hlds.make_hlds.c"
        {
#line 1834 "hlds.make_hlds.c"
          hlds__make_hlds__succeeded = hlds__status____Unify____item_mercury_status_0_0(hlds__make_hlds__V_3_3, hlds__make_hlds__V_5_5);
        }
#line 60 "make_hlds.m"
        if (hlds__make_hlds__succeeded)
#line 1839 "hlds.make_hlds.c"
          {
#line 1841 "hlds.make_hlds.c"
            hlds__make_hlds__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__TypeInfo_for_T_9, hlds__make_hlds__V_4_4, hlds__make_hlds__V_6_6);
          }
#line 60 "make_hlds.m"
      }
#line 60 "make_hlds.m"
    return hlds__make_hlds__succeeded;
#line 60 "make_hlds.m"
  }
#line 60 "make_hlds.m"
}

#line 51 "make_hlds.m"
void MR_CALL 
hlds__make_hlds____Compare____found_invalid_type_0_0(
#line 51 "make_hlds.m"
  MR_Word * hlds__make_hlds__HeadVar__1_1,
#line 51 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_2,
#line 51 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__3_3)
#line 51 "make_hlds.m"
{
#line 51 "make_hlds.m"
  {
#line 51 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;
#line 51 "make_hlds.m"
    MR_Integer hlds__make_hlds__Cast_HeadVar1_4 = (MR_Integer) hlds__make_hlds__HeadVar__2_2;
#line 51 "make_hlds.m"
    MR_Integer hlds__make_hlds__Cast_HeadVar2_5 = (MR_Integer) hlds__make_hlds__HeadVar__3_3;

#line 51 "make_hlds.m"
    {
#line 51 "make_hlds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__HeadVar__1_1, hlds__make_hlds__Cast_HeadVar1_4, hlds__make_hlds__Cast_HeadVar2_5);
    }
#line 51 "make_hlds.m"
  }
#line 51 "make_hlds.m"
}

#line 51 "make_hlds.m"
MR_bool MR_CALL 
hlds__make_hlds____Unify____found_invalid_type_0_0(
#line 51 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_1,
#line 51 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_2)
#line 51 "make_hlds.m"
{
#line 1892 "hlds.make_hlds.c"
  {
#line 1894 "hlds.make_hlds.c"
    MR_bool hlds__make_hlds__succeeded = (hlds__make_hlds__HeadVar__2_1 == hlds__make_hlds__HeadVar__2_2);

#line 1897 "hlds.make_hlds.c"
    return hlds__make_hlds__succeeded;
#line 1899 "hlds.make_hlds.c"
  }
#line 51 "make_hlds.m"
}

#line 55 "make_hlds.m"
void MR_CALL 
hlds__make_hlds____Compare____found_invalid_inst_or_mode_0_0(
#line 55 "make_hlds.m"
  MR_Word * hlds__make_hlds__HeadVar__1_1,
#line 55 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_2,
#line 55 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__3_3)
#line 55 "make_hlds.m"
{
#line 55 "make_hlds.m"
  {
#line 55 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;
#line 55 "make_hlds.m"
    MR_Integer hlds__make_hlds__Cast_HeadVar1_4 = (MR_Integer) hlds__make_hlds__HeadVar__2_2;
#line 55 "make_hlds.m"
    MR_Integer hlds__make_hlds__Cast_HeadVar2_5 = (MR_Integer) hlds__make_hlds__HeadVar__3_3;

#line 55 "make_hlds.m"
    {
#line 55 "make_hlds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__HeadVar__1_1, hlds__make_hlds__Cast_HeadVar1_4, hlds__make_hlds__Cast_HeadVar2_5);
    }
#line 55 "make_hlds.m"
  }
#line 55 "make_hlds.m"
}

#line 55 "make_hlds.m"
MR_bool MR_CALL 
hlds__make_hlds____Unify____found_invalid_inst_or_mode_0_0(
#line 55 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_1,
#line 55 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_2)
#line 55 "make_hlds.m"
{
#line 1943 "hlds.make_hlds.c"
  {
#line 1945 "hlds.make_hlds.c"
    MR_bool hlds__make_hlds__succeeded = (hlds__make_hlds__HeadVar__2_1 == hlds__make_hlds__HeadVar__2_2);

#line 1948 "hlds.make_hlds.c"
    return hlds__make_hlds__succeeded;
#line 1950 "hlds.make_hlds.c"
  }
#line 55 "make_hlds.m"
}

#line 141 "make_hlds.m"
void MR_CALL 
hlds__make_hlds__set_module_recomp_info_3_p_0(
#line 141 "make_hlds.m"
  MR_Word hlds__make_hlds__QualInfo_4,
#line 141 "make_hlds.m"
  MR_Word hlds__make_hlds__STATE_VARIABLE_ModuleInfo_0_6,
#line 141 "make_hlds.m"
  MR_Word * hlds__make_hlds__STATE_VARIABLE_ModuleInfo_7)
#line 141 "make_hlds.m"
{
#line 215 "make_hlds.m"
  {
#line 215 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;

#line 215 "make_hlds.m"
    {
#line 215 "make_hlds.m"
      hlds__make_hlds__qual_info__set_module_recompilation_info_3_p_0(hlds__make_hlds__QualInfo_4, hlds__make_hlds__STATE_VARIABLE_ModuleInfo_0_6, hlds__make_hlds__STATE_VARIABLE_ModuleInfo_7);
    }
#line 215 "make_hlds.m"
  }
#line 141 "make_hlds.m"
}

#line 131 "make_hlds.m"
void MR_CALL 
hlds__make_hlds__produce_instance_method_clauses_16_p_0(
#line 131 "make_hlds.m"
  MR_Word hlds__make_hlds__InstanceProcDefn_17,
#line 131 "make_hlds.m"
  MR_Word hlds__make_hlds__PredOrFunc_18,
#line 131 "make_hlds.m"
  MR_Integer hlds__make_hlds__PredArity_19,
#line 131 "make_hlds.m"
  MR_Word hlds__make_hlds__ArgTypes_20,
#line 131 "make_hlds.m"
  MR_Word hlds__make_hlds__Markers_21,
#line 131 "make_hlds.m"
  MR_Word hlds__make_hlds__Context_22,
#line 131 "make_hlds.m"
  MR_Word hlds__make_hlds__Status_23,
#line 131 "make_hlds.m"
  MR_Word * hlds__make_hlds__ClausesInfo_24,
#line 131 "make_hlds.m"
  MR_Word hlds__make_hlds__STATE_VARIABLE_TVarSet_0_29,
#line 131 "make_hlds.m"
  MR_Word * hlds__make_hlds__STATE_VARIABLE_TVarSet_30,
#line 131 "make_hlds.m"
  MR_Word hlds__make_hlds__STATE_VARIABLE_ModuleInfo_0_31,
#line 131 "make_hlds.m"
  MR_Word * hlds__make_hlds__STATE_VARIABLE_ModuleInfo_32,
#line 131 "make_hlds.m"
  MR_Word hlds__make_hlds__STATE_VARIABLE_QualInfo_0_33,
#line 131 "make_hlds.m"
  MR_Word * hlds__make_hlds__STATE_VARIABLE_QualInfo_34,
#line 131 "make_hlds.m"
  MR_Word hlds__make_hlds__STATE_VARIABLE_Specs_0_35,
#line 131 "make_hlds.m"
  MR_Word * hlds__make_hlds__STATE_VARIABLE_Specs_36)
#line 131 "make_hlds.m"
{
#line 210 "make_hlds.m"
  {
#line 210 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;

#line 210 "make_hlds.m"
    {
#line 210 "make_hlds.m"
      hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_p_0(hlds__make_hlds__InstanceProcDefn_17, hlds__make_hlds__PredOrFunc_18, hlds__make_hlds__PredArity_19, hlds__make_hlds__ArgTypes_20, hlds__make_hlds__Markers_21, hlds__make_hlds__Context_22, hlds__make_hlds__Status_23, hlds__make_hlds__ClausesInfo_24, hlds__make_hlds__STATE_VARIABLE_TVarSet_0_29, hlds__make_hlds__STATE_VARIABLE_TVarSet_30, hlds__make_hlds__STATE_VARIABLE_ModuleInfo_0_31, hlds__make_hlds__STATE_VARIABLE_ModuleInfo_32, hlds__make_hlds__STATE_VARIABLE_QualInfo_0_33, hlds__make_hlds__STATE_VARIABLE_QualInfo_34, hlds__make_hlds__STATE_VARIABLE_Specs_0_35, hlds__make_hlds__STATE_VARIABLE_Specs_36);
    }
#line 210 "make_hlds.m"
  }
#line 131 "make_hlds.m"
}

#line 123 "make_hlds.m"
void MR_CALL 
hlds__make_hlds__add_special_pred_decl_for_real_8_p_0(
#line 123 "make_hlds.m"
  MR_Word hlds__make_hlds__SpecialPredId_9,
#line 123 "make_hlds.m"
  MR_Word hlds__make_hlds__TVarSet_10,
#line 123 "make_hlds.m"
  MR_Word hlds__make_hlds__Type_11,
#line 123 "make_hlds.m"
  MR_Word hlds__make_hlds__TypeCtor_12,
#line 123 "make_hlds.m"
  MR_Word hlds__make_hlds__Context_13,
#line 123 "make_hlds.m"
  MR_Word hlds__make_hlds__Status0_14,
#line 123 "make_hlds.m"
  MR_Word hlds__make_hlds__STATE_VARIABLE_ModuleInfo_0_16,
#line 123 "make_hlds.m"
  MR_Word * hlds__make_hlds__STATE_VARIABLE_ModuleInfo_17)
#line 123 "make_hlds.m"
{
#line 204 "make_hlds.m"
  {
#line 204 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;

#line 204 "make_hlds.m"
    {
#line 204 "make_hlds.m"
      hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_p_0(hlds__make_hlds__SpecialPredId_9, hlds__make_hlds__TVarSet_10, hlds__make_hlds__Type_11, hlds__make_hlds__TypeCtor_12, hlds__make_hlds__Context_13, hlds__make_hlds__Status0_14, hlds__make_hlds__STATE_VARIABLE_ModuleInfo_0_16, hlds__make_hlds__STATE_VARIABLE_ModuleInfo_17);
    }
#line 204 "make_hlds.m"
  }
#line 123 "make_hlds.m"
}

#line 111 "make_hlds.m"
void MR_CALL 
hlds__make_hlds__add_special_pred_for_real_9_p_0(
#line 111 "make_hlds.m"
  MR_Word hlds__make_hlds__SpecialPredId_10,
#line 111 "make_hlds.m"
  MR_Word hlds__make_hlds__TVarSet_11,
#line 111 "make_hlds.m"
  MR_Word hlds__make_hlds__Type0_12,
#line 111 "make_hlds.m"
  MR_Word hlds__make_hlds__TypeCtor_13,
#line 111 "make_hlds.m"
  MR_Word hlds__make_hlds__TypeBody_14,
#line 111 "make_hlds.m"
  MR_Word hlds__make_hlds__Context_15,
#line 111 "make_hlds.m"
  MR_Word hlds__make_hlds__Status0_16,
#line 111 "make_hlds.m"
  MR_Word hlds__make_hlds__STATE_VARIABLE_ModuleInfo_0_18,
#line 111 "make_hlds.m"
  MR_Word * hlds__make_hlds__STATE_VARIABLE_ModuleInfo_19)
#line 111 "make_hlds.m"
{
#line 199 "make_hlds.m"
  {
#line 199 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;

#line 199 "make_hlds.m"
    {
#line 199 "make_hlds.m"
      hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(hlds__make_hlds__SpecialPredId_10, hlds__make_hlds__TVarSet_11, hlds__make_hlds__Type0_12, hlds__make_hlds__TypeCtor_13, hlds__make_hlds__TypeBody_14, hlds__make_hlds__Context_15, hlds__make_hlds__Status0_16, hlds__make_hlds__STATE_VARIABLE_ModuleInfo_0_18, hlds__make_hlds__STATE_VARIABLE_ModuleInfo_19);
    }
#line 199 "make_hlds.m"
  }
#line 111 "make_hlds.m"
}

#line 96 "make_hlds.m"
void MR_CALL 
hlds__make_hlds__add_new_proc_13_p_0(
#line 96 "make_hlds.m"
  MR_Word hlds__make_hlds__InstVarSet_14,
#line 96 "make_hlds.m"
  MR_Integer hlds__make_hlds__Arity_15,
#line 96 "make_hlds.m"
  MR_Word hlds__make_hlds__ArgModes_16,
#line 96 "make_hlds.m"
  MR_Word hlds__make_hlds__MaybeDeclaredArgModes_17,
#line 96 "make_hlds.m"
  MR_Word hlds__make_hlds__MaybeArgLives_18,
#line 96 "make_hlds.m"
  MR_Word hlds__make_hlds__DetismDecl_19,
#line 96 "make_hlds.m"
  MR_Word hlds__make_hlds__MaybeDet_20,
#line 96 "make_hlds.m"
  MR_Word hlds__make_hlds__Context_21,
#line 96 "make_hlds.m"
  MR_Word hlds__make_hlds__IsAddressTaken_22,
#line 96 "make_hlds.m"
  MR_Word hlds__make_hlds__HasParallelConj_23,
#line 96 "make_hlds.m"
  MR_Word hlds__make_hlds__PredInfo0_24,
#line 96 "make_hlds.m"
  MR_Word * hlds__make_hlds__PredInfo_25,
#line 96 "make_hlds.m"
  MR_Integer * hlds__make_hlds__ModeId_26)
#line 96 "make_hlds.m"
{
#line 193 "make_hlds.m"
  {
#line 193 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;

#line 193 "make_hlds.m"
    {
#line 193 "make_hlds.m"
      hlds__make_hlds__add_pred__do_add_new_proc_13_p_0(hlds__make_hlds__InstVarSet_14, hlds__make_hlds__Arity_15, hlds__make_hlds__ArgModes_16, hlds__make_hlds__MaybeDeclaredArgModes_17, hlds__make_hlds__MaybeArgLives_18, hlds__make_hlds__DetismDecl_19, hlds__make_hlds__MaybeDet_20, hlds__make_hlds__Context_21, hlds__make_hlds__IsAddressTaken_22, hlds__make_hlds__HasParallelConj_23, hlds__make_hlds__PredInfo0_24, hlds__make_hlds__PredInfo_25, hlds__make_hlds__ModeId_26);
    }
#line 193 "make_hlds.m"
  }
#line 96 "make_hlds.m"
}

#line 91 "make_hlds.m"
void MR_CALL 
hlds__make_hlds__parse_tree_to_hlds_11_p_0(
#line 91 "make_hlds.m"
  MR_Word hlds__make_hlds__AugCompilationUnit_12,
#line 91 "make_hlds.m"
  MR_Word hlds__make_hlds__Globals_13,
#line 91 "make_hlds.m"
  MR_String hlds__make_hlds__DumpBaseFileName_14,
#line 91 "make_hlds.m"
  MR_Word hlds__make_hlds__MQInfo0_15,
#line 91 "make_hlds.m"
  MR_Word hlds__make_hlds__TypeEqvMap_16,
#line 91 "make_hlds.m"
  MR_Word hlds__make_hlds__UsedModules_17,
#line 91 "make_hlds.m"
  MR_Word * hlds__make_hlds__QualInfo_18,
#line 91 "make_hlds.m"
  MR_Word * hlds__make_hlds__FoundInvalidType_19,
#line 91 "make_hlds.m"
  MR_Word * hlds__make_hlds__FoundInvalidMode_20,
#line 91 "make_hlds.m"
  MR_Word * hlds__make_hlds__ModuleInfo_21,
#line 91 "make_hlds.m"
  MR_Word * hlds__make_hlds__Specs_22)
#line 91 "make_hlds.m"
{
#line 186 "make_hlds.m"
  {
#line 186 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;

#line 186 "make_hlds.m"
    {
#line 186 "make_hlds.m"
      hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0(hlds__make_hlds__AugCompilationUnit_12, hlds__make_hlds__Globals_13, hlds__make_hlds__DumpBaseFileName_14, hlds__make_hlds__MQInfo0_15, hlds__make_hlds__TypeEqvMap_16, hlds__make_hlds__UsedModules_17, hlds__make_hlds__QualInfo_18, hlds__make_hlds__FoundInvalidType_19, hlds__make_hlds__FoundInvalidMode_20, hlds__make_hlds__ModuleInfo_21, hlds__make_hlds__Specs_22);
    }
#line 186 "make_hlds.m"
  }
#line 91 "make_hlds.m"
}

#line 74 "make_hlds.m"
void MR_CALL 
hlds__make_hlds__wrap_with_section_info_3_p_0(
#line 74 "make_hlds.m"
  MR_Word hlds__make_hlds__TypeInfo_for_T_7,
#line 74 "make_hlds.m"
  MR_Word hlds__make_hlds__SectionInfo_4,
#line 74 "make_hlds.m"
  MR_Box hlds__make_hlds__Item_5,
#line 74 "make_hlds.m"
  MR_Word * hlds__make_hlds__SectionItem_6)
#line 74 "make_hlds.m"
{
#line 179 "make_hlds.m"
  {
#line 179 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;

#line 179 "make_hlds.m"
    {
#line 179 "make_hlds.m"
      MR_Word base;
#line 179 "make_hlds.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 179 "make_hlds.m"
      *hlds__make_hlds__SectionItem_6 = base;
#line 179 "make_hlds.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__SectionInfo_4));
#line 179 "make_hlds.m"
      MR_hl_field(MR_mktag(0), base, 1) = hlds__make_hlds__Item_5;
#line 179 "make_hlds.m"
    }
#line 179 "make_hlds.m"
  }
#line 74 "make_hlds.m"
}

void mercury__hlds__make_hlds__init(void)
{
}

void mercury__hlds__make_hlds__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_inst_or_mode_0);
	MR_register_type_ctor_info(&hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_type_0);
	MR_register_type_ctor_info(&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1);
	MR_register_type_ctor_info(&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_list_1);
	MR_register_type_ctor_info(&hlds__make_hlds__hlds__make_hlds__type_ctor_info_make_hlds_qual_info_0);
	MR_register_type_ctor_info(&hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_info_0);
	MR_register_type_ctor_info(&hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1);
	MR_register_type_ctor_info(&hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_list_1);
}

void mercury__hlds__make_hlds__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.make_hlds. */
