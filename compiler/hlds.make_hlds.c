/*
** Automatically generated from `make_hlds.m'
** by the Mercury compiler,
** version DEV
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




#line 144 "hlds.make_hlds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_inst_or_mode_0_0;

#line 147 "hlds.make_hlds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_inst_or_mode_0_1;

#line 150 "hlds.make_hlds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__hlds__make_hlds__enum_value_ordered_found_invalid_inst_or_mode_0[2];

#line 153 "hlds.make_hlds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__hlds__make_hlds__enum_name_ordered_found_invalid_inst_or_mode_0[2];

#line 156 "hlds.make_hlds.c"
static const MR_Integer hlds__make_hlds__hlds__make_hlds__functor_number_map_found_invalid_inst_or_mode_0[2];

#line 159 "hlds.make_hlds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_type_0_0;

#line 162 "hlds.make_hlds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_type_0_1;

#line 165 "hlds.make_hlds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__hlds__make_hlds__enum_value_ordered_found_invalid_type_0[2];

#line 168 "hlds.make_hlds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__hlds__make_hlds__enum_name_ordered_found_invalid_type_0[2];

#line 171 "hlds.make_hlds.c"
static const MR_Integer hlds__make_hlds__hlds__make_hlds__functor_number_map_found_invalid_type_0[2];

#line 174 "hlds.make_hlds.c"
static const MR_PseudoTypeInfo hlds__make_hlds__hlds__make_hlds__field_types_ims_item_1_0[2];

#line 177 "hlds.make_hlds.c"
static const MR_DuFunctorDesc hlds__make_hlds__hlds__make_hlds__du_functor_desc_ims_item_1_0;

#line 180 "hlds.make_hlds.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__hlds__make_hlds__du_stag_ordered_ims_item_1_0[1];

#line 183 "hlds.make_hlds.c"
static const MR_DuPtagLayout hlds__make_hlds__hlds__make_hlds__du_ptag_ordered_ims_item_1[1];

#line 186 "hlds.make_hlds.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__hlds__make_hlds__du_name_ordered_ims_item_1[1];

#line 189 "hlds.make_hlds.c"
static const MR_Integer hlds__make_hlds__hlds__make_hlds__functor_number_map_ims_item_1[1];

#line 192 "hlds.make_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__hlds__make_hlds__pti_ims_item_1__pseudo_1;

#line 195 "hlds.make_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__list__pti_list_1__pseudo_hlds__make_hlds__pti_ims_item_1__pseudo_1;

#line 198 "hlds.make_hlds.c"
static const MR_PseudoTypeInfo hlds__make_hlds__hlds__make_hlds__field_types_sec_info_0_0[2];

#line 201 "hlds.make_hlds.c"
static const MR_DuFunctorDesc hlds__make_hlds__hlds__make_hlds__du_functor_desc_sec_info_0_0;

#line 204 "hlds.make_hlds.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__hlds__make_hlds__du_stag_ordered_sec_info_0_0[1];

#line 207 "hlds.make_hlds.c"
static const MR_DuPtagLayout hlds__make_hlds__hlds__make_hlds__du_ptag_ordered_sec_info_0[1];

#line 210 "hlds.make_hlds.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__hlds__make_hlds__du_name_ordered_sec_info_0[1];

#line 213 "hlds.make_hlds.c"
static const MR_Integer hlds__make_hlds__hlds__make_hlds__functor_number_map_sec_info_0[1];

#line 216 "hlds.make_hlds.c"
static const MR_PseudoTypeInfo hlds__make_hlds__hlds__make_hlds__field_types_sec_item_1_0[2];

#line 219 "hlds.make_hlds.c"
static const MR_DuFunctorDesc hlds__make_hlds__hlds__make_hlds__du_functor_desc_sec_item_1_0;

#line 222 "hlds.make_hlds.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__hlds__make_hlds__du_stag_ordered_sec_item_1_0[1];

#line 225 "hlds.make_hlds.c"
static const MR_DuPtagLayout hlds__make_hlds__hlds__make_hlds__du_ptag_ordered_sec_item_1[1];

#line 228 "hlds.make_hlds.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__hlds__make_hlds__du_name_ordered_sec_item_1[1];

#line 231 "hlds.make_hlds.c"
static const MR_Integer hlds__make_hlds__hlds__make_hlds__functor_number_map_sec_item_1[1];

#line 234 "hlds.make_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__hlds__make_hlds__pti_sec_item_1__pseudo_1;

#line 237 "hlds.make_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__list__pti_list_1__pseudo_hlds__make_hlds__pti_sec_item_1__pseudo_1;

#line 240 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____found_invalid_inst_or_mode_0_0_10001(
#line 243 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 245 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2);

#line 248 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____found_invalid_inst_or_mode_0_0_10001(
#line 251 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_1,
#line 253 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 255 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3);

#line 258 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____found_invalid_type_0_0_10001(
#line 261 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 263 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2);

#line 266 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____found_invalid_type_0_0_10001(
#line 269 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_1,
#line 271 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 273 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3);

#line 276 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____ims_item_1_0_10001(
#line 279 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 281 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 283 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3);

#line 286 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____ims_item_1_0_10001(
#line 289 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 291 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_2,
#line 293 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3,
#line 295 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_4);

#line 298 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____ims_list_1_0_10001(
#line 301 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 303 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 305 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3);

#line 308 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____ims_list_1_0_10001(
#line 311 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 313 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_2,
#line 315 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3,
#line 317 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_4);

#line 320 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____make_hlds_qual_info_0_0_10001(
#line 323 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 325 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2);

#line 328 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____make_hlds_qual_info_0_0_10001(
#line 331 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_1,
#line 333 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 335 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3);

#line 338 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____sec_info_0_0_10001(
#line 341 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 343 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2);

#line 346 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____sec_info_0_0_10001(
#line 349 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_1,
#line 351 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 353 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3);

#line 356 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____sec_item_1_0_10001(
#line 359 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 361 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 363 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3);

#line 366 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____sec_item_1_0_10001(
#line 369 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 371 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_2,
#line 373 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3,
#line 375 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_4);

#line 378 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____sec_list_1_0_10001(
#line 381 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 383 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 385 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3);

#line 388 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____sec_list_1_0_10001(
#line 391 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 393 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_2,
#line 395 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3,
#line 397 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_4);







#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 413 "hlds.make_hlds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_inst_or_mode_0_0 = {
  (MR_String) "did_not_find_invalid_inst_or_mode",
  (MR_Integer) 0
};

#line 419 "hlds.make_hlds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_inst_or_mode_0_1 = {
  (MR_String) "found_invalid_inst_or_mode",
  (MR_Integer) 1
};

#line 425 "hlds.make_hlds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__hlds__make_hlds__enum_value_ordered_found_invalid_inst_or_mode_0[2] = {
  &hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_inst_or_mode_0_0,
  &hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_inst_or_mode_0_1
};

#line 431 "hlds.make_hlds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__hlds__make_hlds__enum_name_ordered_found_invalid_inst_or_mode_0[2] = {
  &hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_inst_or_mode_0_0,
  &hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_inst_or_mode_0_1
};

#line 437 "hlds.make_hlds.c"
static const MR_Integer hlds__make_hlds__hlds__make_hlds__functor_number_map_found_invalid_inst_or_mode_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 443 "hlds.make_hlds.c"
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

#line 460 "hlds.make_hlds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_type_0_0 = {
  (MR_String) "did_not_find_invalid_type",
  (MR_Integer) 0
};

#line 466 "hlds.make_hlds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_type_0_1 = {
  (MR_String) "found_invalid_type",
  (MR_Integer) 1
};

#line 472 "hlds.make_hlds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__hlds__make_hlds__enum_value_ordered_found_invalid_type_0[2] = {
  &hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_type_0_0,
  &hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_type_0_1
};

#line 478 "hlds.make_hlds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__hlds__make_hlds__enum_name_ordered_found_invalid_type_0[2] = {
  &hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_type_0_0,
  &hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_type_0_1
};

#line 484 "hlds.make_hlds.c"
static const MR_Integer hlds__make_hlds__hlds__make_hlds__functor_number_map_found_invalid_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 490 "hlds.make_hlds.c"
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

#line 507 "hlds.make_hlds.c"
static const MR_PseudoTypeInfo hlds__make_hlds__hlds__make_hlds__field_types_ims_item_1_0[2] = {
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_item_mercury_status_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 513 "hlds.make_hlds.c"
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

#line 528 "hlds.make_hlds.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__hlds__make_hlds__du_stag_ordered_ims_item_1_0[1] = {
  &hlds__make_hlds__hlds__make_hlds__du_functor_desc_ims_item_1_0
};

#line 533 "hlds.make_hlds.c"
static const MR_DuPtagLayout hlds__make_hlds__hlds__make_hlds__du_ptag_ordered_ims_item_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__hlds__make_hlds__du_stag_ordered_ims_item_1_0
  }
};

#line 542 "hlds.make_hlds.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__hlds__make_hlds__du_name_ordered_ims_item_1[1] = {
  &hlds__make_hlds__hlds__make_hlds__du_functor_desc_ims_item_1_0
};

#line 547 "hlds.make_hlds.c"
static const MR_Integer hlds__make_hlds__hlds__make_hlds__functor_number_map_ims_item_1[1] = {
  (MR_Integer) 0
};

#line 552 "hlds.make_hlds.c"
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

#line 569 "hlds.make_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__hlds__make_hlds__pti_ims_item_1__pseudo_1 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 577 "hlds.make_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__list__pti_list_1__pseudo_hlds__make_hlds__pti_ims_item_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__hlds__make_hlds__pti_ims_item_1__pseudo_1
  }
};

#line 585 "hlds.make_hlds.c"
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

#line 602 "hlds.make_hlds.c"
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

#line 619 "hlds.make_hlds.c"
static const MR_PseudoTypeInfo hlds__make_hlds__hlds__make_hlds__field_types_sec_info_0_0[2] = {
  (MR_PseudoTypeInfo) &hlds__status__hlds__status__type_ctor_info_item_mercury_status_0,
  (MR_PseudoTypeInfo) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_need_qualifier_0
};

#line 625 "hlds.make_hlds.c"
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

#line 640 "hlds.make_hlds.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__hlds__make_hlds__du_stag_ordered_sec_info_0_0[1] = {
  &hlds__make_hlds__hlds__make_hlds__du_functor_desc_sec_info_0_0
};

#line 645 "hlds.make_hlds.c"
static const MR_DuPtagLayout hlds__make_hlds__hlds__make_hlds__du_ptag_ordered_sec_info_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__hlds__make_hlds__du_stag_ordered_sec_info_0_0
  }
};

#line 654 "hlds.make_hlds.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__hlds__make_hlds__du_name_ordered_sec_info_0[1] = {
  &hlds__make_hlds__hlds__make_hlds__du_functor_desc_sec_info_0_0
};

#line 659 "hlds.make_hlds.c"
static const MR_Integer hlds__make_hlds__hlds__make_hlds__functor_number_map_sec_info_0[1] = {
  (MR_Integer) 0
};

#line 664 "hlds.make_hlds.c"
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

#line 681 "hlds.make_hlds.c"
static const MR_PseudoTypeInfo hlds__make_hlds__hlds__make_hlds__field_types_sec_item_1_0[2] = {
  (MR_PseudoTypeInfo) &hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_info_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 687 "hlds.make_hlds.c"
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

#line 702 "hlds.make_hlds.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__hlds__make_hlds__du_stag_ordered_sec_item_1_0[1] = {
  &hlds__make_hlds__hlds__make_hlds__du_functor_desc_sec_item_1_0
};

#line 707 "hlds.make_hlds.c"
static const MR_DuPtagLayout hlds__make_hlds__hlds__make_hlds__du_ptag_ordered_sec_item_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__make_hlds__hlds__make_hlds__du_stag_ordered_sec_item_1_0
  }
};

#line 716 "hlds.make_hlds.c"
static const MR_DuFunctorDescPtr hlds__make_hlds__hlds__make_hlds__du_name_ordered_sec_item_1[1] = {
  &hlds__make_hlds__hlds__make_hlds__du_functor_desc_sec_item_1_0
};

#line 721 "hlds.make_hlds.c"
static const MR_Integer hlds__make_hlds__hlds__make_hlds__functor_number_map_sec_item_1[1] = {
  (MR_Integer) 0
};

#line 726 "hlds.make_hlds.c"
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

#line 743 "hlds.make_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__hlds__make_hlds__pti_sec_item_1__pseudo_1 = {
  &hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 751 "hlds.make_hlds.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__make_hlds__list__pti_list_1__pseudo_hlds__make_hlds__pti_sec_item_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__hlds__make_hlds__pti_sec_item_1__pseudo_1
  }
};

#line 759 "hlds.make_hlds.c"
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

#line 776 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____found_invalid_inst_or_mode_0_0_10001(
#line 779 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 781 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2)
#line 783 "hlds.make_hlds.c"
{
#line 785 "hlds.make_hlds.c"
  {
#line 787 "hlds.make_hlds.c"
    MR_bool hlds__make_hlds__succeeded;

#line 790 "hlds.make_hlds.c"
    {
#line 792 "hlds.make_hlds.c"
      hlds__make_hlds__succeeded = hlds__make_hlds____Unify____found_invalid_inst_or_mode_0_0(((MR_Word) hlds__make_hlds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__wrapper_arg_2));
    }
#line 795 "hlds.make_hlds.c"
    return hlds__make_hlds__succeeded;
#line 797 "hlds.make_hlds.c"
  }
#line 799 "hlds.make_hlds.c"
}

#line 802 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____found_invalid_inst_or_mode_0_0_10001(
#line 805 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_1,
#line 807 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 809 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3)
#line 811 "hlds.make_hlds.c"
{
#line 813 "hlds.make_hlds.c"
  {
#line 815 "hlds.make_hlds.c"
    MR_Word hlds__make_hlds__conv0_HeadVar__1_1;

#line 818 "hlds.make_hlds.c"
    {
#line 820 "hlds.make_hlds.c"
      hlds__make_hlds____Compare____found_invalid_inst_or_mode_0_0(&hlds__make_hlds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__wrapper_arg_3));
    }
#line 823 "hlds.make_hlds.c"
    *hlds__make_hlds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__conv0_HeadVar__1_1));
#line 825 "hlds.make_hlds.c"
  }
#line 827 "hlds.make_hlds.c"
}

#line 830 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____found_invalid_type_0_0_10001(
#line 833 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 835 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2)
#line 837 "hlds.make_hlds.c"
{
#line 839 "hlds.make_hlds.c"
  {
#line 841 "hlds.make_hlds.c"
    MR_bool hlds__make_hlds__succeeded;

#line 844 "hlds.make_hlds.c"
    {
#line 846 "hlds.make_hlds.c"
      hlds__make_hlds__succeeded = hlds__make_hlds____Unify____found_invalid_type_0_0(((MR_Word) hlds__make_hlds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__wrapper_arg_2));
    }
#line 849 "hlds.make_hlds.c"
    return hlds__make_hlds__succeeded;
#line 851 "hlds.make_hlds.c"
  }
#line 853 "hlds.make_hlds.c"
}

#line 856 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____found_invalid_type_0_0_10001(
#line 859 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_1,
#line 861 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 863 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3)
#line 865 "hlds.make_hlds.c"
{
#line 867 "hlds.make_hlds.c"
  {
#line 869 "hlds.make_hlds.c"
    MR_Word hlds__make_hlds__conv0_HeadVar__1_1;

#line 872 "hlds.make_hlds.c"
    {
#line 874 "hlds.make_hlds.c"
      hlds__make_hlds____Compare____found_invalid_type_0_0(&hlds__make_hlds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__wrapper_arg_3));
    }
#line 877 "hlds.make_hlds.c"
    *hlds__make_hlds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__conv0_HeadVar__1_1));
#line 879 "hlds.make_hlds.c"
  }
#line 881 "hlds.make_hlds.c"
}

#line 884 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____ims_item_1_0_10001(
#line 887 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 889 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 891 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3)
#line 893 "hlds.make_hlds.c"
{
#line 895 "hlds.make_hlds.c"
  {
#line 897 "hlds.make_hlds.c"
    MR_bool hlds__make_hlds__succeeded;

#line 900 "hlds.make_hlds.c"
    {
#line 902 "hlds.make_hlds.c"
      hlds__make_hlds__succeeded = hlds__make_hlds____Unify____ims_item_1_0(((MR_Word) hlds__make_hlds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__wrapper_arg_3));
    }
#line 905 "hlds.make_hlds.c"
    return hlds__make_hlds__succeeded;
#line 907 "hlds.make_hlds.c"
  }
#line 909 "hlds.make_hlds.c"
}

#line 912 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____ims_item_1_0_10001(
#line 915 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 917 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_2,
#line 919 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3,
#line 921 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_4)
#line 923 "hlds.make_hlds.c"
{
#line 925 "hlds.make_hlds.c"
  {
#line 927 "hlds.make_hlds.c"
    MR_Word hlds__make_hlds__conv0_HeadVar__1_1;

#line 930 "hlds.make_hlds.c"
    {
#line 932 "hlds.make_hlds.c"
      hlds__make_hlds____Compare____ims_item_1_0(((MR_Word) hlds__make_hlds__wrapper_arg_1), &hlds__make_hlds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__wrapper_arg_3), ((MR_Word) hlds__make_hlds__wrapper_arg_4));
    }
#line 935 "hlds.make_hlds.c"
    *hlds__make_hlds__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__conv0_HeadVar__1_1));
#line 937 "hlds.make_hlds.c"
  }
#line 939 "hlds.make_hlds.c"
}

#line 942 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____ims_list_1_0_10001(
#line 945 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 947 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 949 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3)
#line 951 "hlds.make_hlds.c"
{
#line 953 "hlds.make_hlds.c"
  {
#line 955 "hlds.make_hlds.c"
    MR_bool hlds__make_hlds__succeeded;

#line 958 "hlds.make_hlds.c"
    {
#line 960 "hlds.make_hlds.c"
      hlds__make_hlds__succeeded = hlds__make_hlds____Unify____ims_list_1_0(((MR_Word) hlds__make_hlds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__wrapper_arg_3));
    }
#line 963 "hlds.make_hlds.c"
    return hlds__make_hlds__succeeded;
#line 965 "hlds.make_hlds.c"
  }
#line 967 "hlds.make_hlds.c"
}

#line 970 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____ims_list_1_0_10001(
#line 973 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 975 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_2,
#line 977 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3,
#line 979 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_4)
#line 981 "hlds.make_hlds.c"
{
#line 983 "hlds.make_hlds.c"
  {
#line 985 "hlds.make_hlds.c"
    MR_Word hlds__make_hlds__conv0_HeadVar__1_1;

#line 988 "hlds.make_hlds.c"
    {
#line 990 "hlds.make_hlds.c"
      hlds__make_hlds____Compare____ims_list_1_0(((MR_Word) hlds__make_hlds__wrapper_arg_1), &hlds__make_hlds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__wrapper_arg_3), ((MR_Word) hlds__make_hlds__wrapper_arg_4));
    }
#line 993 "hlds.make_hlds.c"
    *hlds__make_hlds__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__conv0_HeadVar__1_1));
#line 995 "hlds.make_hlds.c"
  }
#line 997 "hlds.make_hlds.c"
}

#line 1000 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____make_hlds_qual_info_0_0_10001(
#line 1003 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 1005 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2)
#line 1007 "hlds.make_hlds.c"
{
#line 1009 "hlds.make_hlds.c"
  {
#line 1011 "hlds.make_hlds.c"
    MR_bool hlds__make_hlds__succeeded;

#line 1014 "hlds.make_hlds.c"
    {
#line 1016 "hlds.make_hlds.c"
      hlds__make_hlds__succeeded = hlds__make_hlds____Unify____make_hlds_qual_info_0_0(((MR_Word) hlds__make_hlds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__wrapper_arg_2));
    }
#line 1019 "hlds.make_hlds.c"
    return hlds__make_hlds__succeeded;
#line 1021 "hlds.make_hlds.c"
  }
#line 1023 "hlds.make_hlds.c"
}

#line 1026 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____make_hlds_qual_info_0_0_10001(
#line 1029 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_1,
#line 1031 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 1033 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3)
#line 1035 "hlds.make_hlds.c"
{
#line 1037 "hlds.make_hlds.c"
  {
#line 1039 "hlds.make_hlds.c"
    MR_Word hlds__make_hlds__conv0_HeadVar__1_1;

#line 1042 "hlds.make_hlds.c"
    {
#line 1044 "hlds.make_hlds.c"
      hlds__make_hlds____Compare____make_hlds_qual_info_0_0(&hlds__make_hlds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__wrapper_arg_3));
    }
#line 1047 "hlds.make_hlds.c"
    *hlds__make_hlds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__conv0_HeadVar__1_1));
#line 1049 "hlds.make_hlds.c"
  }
#line 1051 "hlds.make_hlds.c"
}

#line 1054 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____sec_info_0_0_10001(
#line 1057 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 1059 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2)
#line 1061 "hlds.make_hlds.c"
{
#line 1063 "hlds.make_hlds.c"
  {
#line 1065 "hlds.make_hlds.c"
    MR_bool hlds__make_hlds__succeeded;

#line 1068 "hlds.make_hlds.c"
    {
#line 1070 "hlds.make_hlds.c"
      hlds__make_hlds__succeeded = hlds__make_hlds____Unify____sec_info_0_0(((MR_Word) hlds__make_hlds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__wrapper_arg_2));
    }
#line 1073 "hlds.make_hlds.c"
    return hlds__make_hlds__succeeded;
#line 1075 "hlds.make_hlds.c"
  }
#line 1077 "hlds.make_hlds.c"
}

#line 1080 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____sec_info_0_0_10001(
#line 1083 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_1,
#line 1085 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 1087 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3)
#line 1089 "hlds.make_hlds.c"
{
#line 1091 "hlds.make_hlds.c"
  {
#line 1093 "hlds.make_hlds.c"
    MR_Word hlds__make_hlds__conv0_HeadVar__1_1;

#line 1096 "hlds.make_hlds.c"
    {
#line 1098 "hlds.make_hlds.c"
      hlds__make_hlds____Compare____sec_info_0_0(&hlds__make_hlds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__wrapper_arg_3));
    }
#line 1101 "hlds.make_hlds.c"
    *hlds__make_hlds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__conv0_HeadVar__1_1));
#line 1103 "hlds.make_hlds.c"
  }
#line 1105 "hlds.make_hlds.c"
}

#line 1108 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____sec_item_1_0_10001(
#line 1111 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 1113 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 1115 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3)
#line 1117 "hlds.make_hlds.c"
{
#line 1119 "hlds.make_hlds.c"
  {
#line 1121 "hlds.make_hlds.c"
    MR_bool hlds__make_hlds__succeeded;

#line 1124 "hlds.make_hlds.c"
    {
#line 1126 "hlds.make_hlds.c"
      hlds__make_hlds__succeeded = hlds__make_hlds____Unify____sec_item_1_0(((MR_Word) hlds__make_hlds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__wrapper_arg_3));
    }
#line 1129 "hlds.make_hlds.c"
    return hlds__make_hlds__succeeded;
#line 1131 "hlds.make_hlds.c"
  }
#line 1133 "hlds.make_hlds.c"
}

#line 1136 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____sec_item_1_0_10001(
#line 1139 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 1141 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_2,
#line 1143 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3,
#line 1145 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_4)
#line 1147 "hlds.make_hlds.c"
{
#line 1149 "hlds.make_hlds.c"
  {
#line 1151 "hlds.make_hlds.c"
    MR_Word hlds__make_hlds__conv0_HeadVar__1_1;

#line 1154 "hlds.make_hlds.c"
    {
#line 1156 "hlds.make_hlds.c"
      hlds__make_hlds____Compare____sec_item_1_0(((MR_Word) hlds__make_hlds__wrapper_arg_1), &hlds__make_hlds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__wrapper_arg_3), ((MR_Word) hlds__make_hlds__wrapper_arg_4));
    }
#line 1159 "hlds.make_hlds.c"
    *hlds__make_hlds__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__conv0_HeadVar__1_1));
#line 1161 "hlds.make_hlds.c"
  }
#line 1163 "hlds.make_hlds.c"
}

#line 1166 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____sec_list_1_0_10001(
#line 1169 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 1171 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 1173 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3)
#line 1175 "hlds.make_hlds.c"
{
#line 1177 "hlds.make_hlds.c"
  {
#line 1179 "hlds.make_hlds.c"
    MR_bool hlds__make_hlds__succeeded;

#line 1182 "hlds.make_hlds.c"
    {
#line 1184 "hlds.make_hlds.c"
      hlds__make_hlds__succeeded = hlds__make_hlds____Unify____sec_list_1_0(((MR_Word) hlds__make_hlds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__wrapper_arg_3));
    }
#line 1187 "hlds.make_hlds.c"
    return hlds__make_hlds__succeeded;
#line 1189 "hlds.make_hlds.c"
  }
#line 1191 "hlds.make_hlds.c"
}

#line 1194 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____sec_list_1_0_10001(
#line 1197 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 1199 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_2,
#line 1201 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3,
#line 1203 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_4)
#line 1205 "hlds.make_hlds.c"
{
#line 1207 "hlds.make_hlds.c"
  {
#line 1209 "hlds.make_hlds.c"
    MR_Word hlds__make_hlds__conv0_HeadVar__1_1;

#line 1212 "hlds.make_hlds.c"
    {
#line 1214 "hlds.make_hlds.c"
      hlds__make_hlds____Compare____sec_list_1_0(((MR_Word) hlds__make_hlds__wrapper_arg_1), &hlds__make_hlds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__wrapper_arg_3), ((MR_Word) hlds__make_hlds__wrapper_arg_4));
    }
#line 1217 "hlds.make_hlds.c"
    *hlds__make_hlds__wrapper_arg_2 = ((MR_Box) (hlds__make_hlds__conv0_HeadVar__1_1));
#line 1219 "hlds.make_hlds.c"
  }
#line 1221 "hlds.make_hlds.c"
}

#line 61 "make_hlds.m"
void MR_CALL 
hlds__make_hlds____Compare____sec_list_1_0(
#line 61 "make_hlds.m"
  MR_Word hlds__make_hlds__TypeInfo_for_T_6,
#line 61 "make_hlds.m"
  MR_Word * hlds__make_hlds__HeadVar__1_1,
#line 61 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_2,
#line 61 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__3_3)
#line 61 "make_hlds.m"
{
#line 61 "make_hlds.m"
  {
#line 61 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;
#line 61 "make_hlds.m"
    MR_Word hlds__make_hlds__TypeInfo_8_8;
#line 61 "make_hlds.m"
    MR_Word hlds__make_hlds__Cast_HeadVar1_4 = hlds__make_hlds__HeadVar__2_2;
#line 61 "make_hlds.m"
    MR_Word hlds__make_hlds__Cast_HeadVar2_5 = hlds__make_hlds__HeadVar__3_3;

#line 1248 "hlds.make_hlds.c"
    {
#line 1250 "hlds.make_hlds.c"
      hlds__make_hlds__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1252 "hlds.make_hlds.c"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__TypeInfo_8_8, 0) = ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1));
#line 1254 "hlds.make_hlds.c"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__TypeInfo_8_8, 1) = ((MR_Box) (hlds__make_hlds__TypeInfo_for_T_6));
#line 1256 "hlds.make_hlds.c"
    }
#line 61 "make_hlds.m"
    {
#line 61 "make_hlds.m"
      mercury__list____Compare____list_1_0(hlds__make_hlds__TypeInfo_8_8, hlds__make_hlds__HeadVar__1_1, (MR_Word) hlds__make_hlds__Cast_HeadVar1_4, (MR_Word) hlds__make_hlds__Cast_HeadVar2_5);
    }
#line 61 "make_hlds.m"
  }
#line 61 "make_hlds.m"
}

#line 61 "make_hlds.m"
MR_bool MR_CALL 
hlds__make_hlds____Unify____sec_list_1_0(
#line 61 "make_hlds.m"
  MR_Word hlds__make_hlds__TypeInfo_for_T_5,
#line 61 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__1_1,
#line 61 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_2)
#line 61 "make_hlds.m"
{
#line 61 "make_hlds.m"
  {
#line 61 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;
#line 61 "make_hlds.m"
    MR_Word hlds__make_hlds__TypeInfo_7_7;
#line 61 "make_hlds.m"
    MR_Word hlds__make_hlds__Cast_HeadVar1_3 = hlds__make_hlds__HeadVar__1_1;
#line 61 "make_hlds.m"
    MR_Word hlds__make_hlds__Cast_HeadVar2_4 = hlds__make_hlds__HeadVar__2_2;

#line 1290 "hlds.make_hlds.c"
    {
#line 1292 "hlds.make_hlds.c"
      hlds__make_hlds__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1294 "hlds.make_hlds.c"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__TypeInfo_7_7, 0) = ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_sec_item_1));
#line 1296 "hlds.make_hlds.c"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__TypeInfo_7_7, 1) = ((MR_Box) (hlds__make_hlds__TypeInfo_for_T_5));
#line 1298 "hlds.make_hlds.c"
    }
#line 61 "make_hlds.m"
    {
#line 61 "make_hlds.m"
      hlds__make_hlds__succeeded = mercury__list____Unify____list_1_0(hlds__make_hlds__TypeInfo_7_7, (MR_Word) hlds__make_hlds__Cast_HeadVar1_3, (MR_Word) hlds__make_hlds__Cast_HeadVar2_4);
    }
#line 61 "make_hlds.m"
    return hlds__make_hlds__succeeded;
#line 61 "make_hlds.m"
  }
#line 61 "make_hlds.m"
}

#line 62 "make_hlds.m"
void MR_CALL 
hlds__make_hlds____Compare____sec_item_1_0(
#line 62 "make_hlds.m"
  MR_Word hlds__make_hlds__TypeInfo_for_T_11,
#line 62 "make_hlds.m"
  MR_Word * hlds__make_hlds__HeadVar__1_1,
#line 62 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_2,
#line 62 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__3_3)
#line 62 "make_hlds.m"
{
#line 62 "make_hlds.m"
  {
#line 62 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;
#line 62 "make_hlds.m"
    MR_Integer hlds__make_hlds__CastX_9 = (MR_Integer) hlds__make_hlds__HeadVar__2_2;
#line 62 "make_hlds.m"
    MR_Integer hlds__make_hlds__CastY_10 = (MR_Integer) hlds__make_hlds__HeadVar__3_3;

#line 62 "make_hlds.m"
    hlds__make_hlds__succeeded = (hlds__make_hlds__CastX_9 == hlds__make_hlds__CastY_10);
#line 62 "make_hlds.m"
    if (hlds__make_hlds__succeeded)
#line 1338 "hlds.make_hlds.c"
      *hlds__make_hlds__HeadVar__1_1 = (MR_Integer) 0;
#line 62 "make_hlds.m"
    else
#line 62 "make_hlds.m"
      {
#line 62 "make_hlds.m"
        MR_Word hlds__make_hlds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__2_2, (MR_Integer) 0)));
#line 62 "make_hlds.m"
        MR_Box hlds__make_hlds__V_5_5 = (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__2_2, (MR_Integer) 1));
#line 62 "make_hlds.m"
        MR_Word hlds__make_hlds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__3_3, (MR_Integer) 0)));
#line 62 "make_hlds.m"
        MR_Box hlds__make_hlds__V_7_7 = (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__3_3, (MR_Integer) 1));
#line 62 "make_hlds.m"
        MR_Word hlds__make_hlds__V_8_8;

#line 62 "make_hlds.m"
        {
#line 62 "make_hlds.m"
          hlds__make_hlds____Compare____sec_info_0_0(&hlds__make_hlds__V_8_8, hlds__make_hlds__V_4_4, hlds__make_hlds__V_6_6);
        }
#line 1360 "hlds.make_hlds.c"
        hlds__make_hlds__succeeded = (hlds__make_hlds__V_8_8 == (MR_Integer) 0);
#line 62 "make_hlds.m"
        hlds__make_hlds__succeeded = !(hlds__make_hlds__succeeded);
#line 62 "make_hlds.m"
        if (hlds__make_hlds__succeeded)
#line 62 "make_hlds.m"
          *hlds__make_hlds__HeadVar__1_1 = hlds__make_hlds__V_8_8;
#line 62 "make_hlds.m"
        else
#line 62 "make_hlds.m"
          {
#line 62 "make_hlds.m"
            mercury__builtin__compare_3_p_0(hlds__make_hlds__TypeInfo_for_T_11, hlds__make_hlds__HeadVar__1_1, hlds__make_hlds__V_5_5, hlds__make_hlds__V_7_7);
          }
#line 62 "make_hlds.m"
      }
#line 62 "make_hlds.m"
  }
#line 62 "make_hlds.m"
}

#line 62 "make_hlds.m"
MR_bool MR_CALL 
hlds__make_hlds____Unify____sec_item_1_0(
#line 62 "make_hlds.m"
  MR_Word hlds__make_hlds__TypeInfo_for_T_9,
#line 62 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__1_1,
#line 62 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_2)
#line 62 "make_hlds.m"
{
#line 62 "make_hlds.m"
  {
#line 62 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;
#line 62 "make_hlds.m"
    MR_Integer hlds__make_hlds__CastX_7 = (MR_Integer) hlds__make_hlds__HeadVar__1_1;
#line 62 "make_hlds.m"
    MR_Integer hlds__make_hlds__CastY_8 = (MR_Integer) hlds__make_hlds__HeadVar__2_2;

#line 62 "make_hlds.m"
    hlds__make_hlds__succeeded = (hlds__make_hlds__CastX_7 == hlds__make_hlds__CastY_8);
#line 62 "make_hlds.m"
    if (hlds__make_hlds__succeeded)
#line 62 "make_hlds.m"
      hlds__make_hlds__succeeded = MR_TRUE;
#line 62 "make_hlds.m"
    else
#line 62 "make_hlds.m"
      {
#line 62 "make_hlds.m"
        MR_Word hlds__make_hlds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__1_1, (MR_Integer) 0)));
#line 62 "make_hlds.m"
        MR_Box hlds__make_hlds__V_4_4 = (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__1_1, (MR_Integer) 1));
#line 62 "make_hlds.m"
        MR_Word hlds__make_hlds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__2_2, (MR_Integer) 0)));
#line 62 "make_hlds.m"
        MR_Box hlds__make_hlds__V_6_6 = (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__2_2, (MR_Integer) 1));

#line 1421 "hlds.make_hlds.c"
        {
#line 1423 "hlds.make_hlds.c"
          hlds__make_hlds__succeeded = hlds__make_hlds____Unify____sec_info_0_0(hlds__make_hlds__V_3_3, hlds__make_hlds__V_5_5);
        }
#line 62 "make_hlds.m"
        if (hlds__make_hlds__succeeded)
#line 1428 "hlds.make_hlds.c"
          {
#line 1430 "hlds.make_hlds.c"
            hlds__make_hlds__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__TypeInfo_for_T_9, hlds__make_hlds__V_4_4, hlds__make_hlds__V_6_6);
          }
#line 62 "make_hlds.m"
      }
#line 62 "make_hlds.m"
    return hlds__make_hlds__succeeded;
#line 62 "make_hlds.m"
  }
#line 62 "make_hlds.m"
}

#line 64 "make_hlds.m"
void MR_CALL 
hlds__make_hlds____Compare____sec_info_0_0(
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
#line 1466 "hlds.make_hlds.c"
      *hlds__make_hlds__HeadVar__1_1 = (MR_Integer) 0;
#line 64 "make_hlds.m"
    else
#line 64 "make_hlds.m"
      {
#line 64 "make_hlds.m"
        MR_Word hlds__make_hlds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__2_2, (MR_Integer) 0)));
#line 64 "make_hlds.m"
        MR_Word hlds__make_hlds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__2_2, (MR_Integer) 1)));
#line 64 "make_hlds.m"
        MR_Word hlds__make_hlds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__3_3, (MR_Integer) 0)));
#line 64 "make_hlds.m"
        MR_Word hlds__make_hlds__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__3_3, (MR_Integer) 1)));
#line 64 "make_hlds.m"
        MR_Word hlds__make_hlds__V_8_8;

#line 64 "make_hlds.m"
        {
#line 64 "make_hlds.m"
          hlds__status____Compare____item_mercury_status_0_0(&hlds__make_hlds__V_8_8, hlds__make_hlds__V_4_4, hlds__make_hlds__V_6_6);
        }
#line 1488 "hlds.make_hlds.c"
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
            MR_Integer hlds__make_hlds__V_13_13 = (MR_Integer) hlds__make_hlds__V_5_5;
#line 64 "make_hlds.m"
            MR_Integer hlds__make_hlds__V_14_14 = (MR_Integer) hlds__make_hlds__V_7_7;

#line 64 "make_hlds.m"
            {
#line 64 "make_hlds.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__HeadVar__1_1, hlds__make_hlds__V_13_13, hlds__make_hlds__V_14_14);
            }
#line 64 "make_hlds.m"
          }
#line 64 "make_hlds.m"
      }
#line 64 "make_hlds.m"
  }
#line 64 "make_hlds.m"
}

#line 64 "make_hlds.m"
MR_bool MR_CALL 
hlds__make_hlds____Unify____sec_info_0_0(
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
        MR_Word hlds__make_hlds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__1_1, (MR_Integer) 1)));
#line 64 "make_hlds.m"
        MR_Word hlds__make_hlds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__2_2, (MR_Integer) 0)));
#line 64 "make_hlds.m"
        MR_Word hlds__make_hlds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__2_2, (MR_Integer) 1)));

#line 1556 "hlds.make_hlds.c"
        {
#line 1558 "hlds.make_hlds.c"
          hlds__make_hlds__succeeded = hlds__status____Unify____item_mercury_status_0_0(hlds__make_hlds__V_3_3, hlds__make_hlds__V_5_5);
        }
#line 64 "make_hlds.m"
        if (hlds__make_hlds__succeeded)
#line 1563 "hlds.make_hlds.c"
          hlds__make_hlds__succeeded = (hlds__make_hlds__V_4_4 == hlds__make_hlds__V_6_6);
#line 64 "make_hlds.m"
      }
#line 64 "make_hlds.m"
    return hlds__make_hlds__succeeded;
#line 64 "make_hlds.m"
  }
#line 64 "make_hlds.m"
}

#line 174 "make_hlds.m"
void MR_CALL 
hlds__make_hlds____Compare____make_hlds_qual_info_0_0(
#line 174 "make_hlds.m"
  MR_Word * hlds__make_hlds__HeadVar__1_1,
#line 174 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_2,
#line 174 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__3_3)
#line 174 "make_hlds.m"
{
#line 174 "make_hlds.m"
  {
#line 174 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;
#line 174 "make_hlds.m"
    MR_Word hlds__make_hlds__Cast_HeadVar1_4 = hlds__make_hlds__HeadVar__2_2;
#line 174 "make_hlds.m"
    MR_Word hlds__make_hlds__Cast_HeadVar2_5 = hlds__make_hlds__HeadVar__3_3;

#line 174 "make_hlds.m"
    {
#line 174 "make_hlds.m"
      hlds__make_hlds__qual_info____Compare____qual_info_0_0(hlds__make_hlds__HeadVar__1_1, hlds__make_hlds__Cast_HeadVar1_4, hlds__make_hlds__Cast_HeadVar2_5);
    }
#line 174 "make_hlds.m"
  }
#line 174 "make_hlds.m"
}

#line 174 "make_hlds.m"
MR_bool MR_CALL 
hlds__make_hlds____Unify____make_hlds_qual_info_0_0(
#line 174 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__1_1,
#line 174 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_2)
#line 174 "make_hlds.m"
{
#line 174 "make_hlds.m"
  {
#line 174 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;
#line 174 "make_hlds.m"
    MR_Word hlds__make_hlds__Cast_HeadVar1_3 = hlds__make_hlds__HeadVar__1_1;
#line 174 "make_hlds.m"
    MR_Word hlds__make_hlds__Cast_HeadVar2_4 = hlds__make_hlds__HeadVar__2_2;

#line 174 "make_hlds.m"
    {
#line 174 "make_hlds.m"
      hlds__make_hlds__succeeded = hlds__make_hlds__qual_info____Unify____qual_info_0_0(hlds__make_hlds__Cast_HeadVar1_3, hlds__make_hlds__Cast_HeadVar2_4);
    }
#line 174 "make_hlds.m"
    return hlds__make_hlds__succeeded;
#line 174 "make_hlds.m"
  }
#line 174 "make_hlds.m"
}

#line 57 "make_hlds.m"
void MR_CALL 
hlds__make_hlds____Compare____ims_list_1_0(
#line 57 "make_hlds.m"
  MR_Word hlds__make_hlds__TypeInfo_for_T_6,
#line 57 "make_hlds.m"
  MR_Word * hlds__make_hlds__HeadVar__1_1,
#line 57 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_2,
#line 57 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__3_3)
#line 57 "make_hlds.m"
{
#line 57 "make_hlds.m"
  {
#line 57 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;
#line 57 "make_hlds.m"
    MR_Word hlds__make_hlds__TypeInfo_8_8;
#line 57 "make_hlds.m"
    MR_Word hlds__make_hlds__Cast_HeadVar1_4 = hlds__make_hlds__HeadVar__2_2;
#line 57 "make_hlds.m"
    MR_Word hlds__make_hlds__Cast_HeadVar2_5 = hlds__make_hlds__HeadVar__3_3;

#line 1658 "hlds.make_hlds.c"
    {
#line 1660 "hlds.make_hlds.c"
      hlds__make_hlds__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1662 "hlds.make_hlds.c"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__TypeInfo_8_8, 0) = ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1));
#line 1664 "hlds.make_hlds.c"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__TypeInfo_8_8, 1) = ((MR_Box) (hlds__make_hlds__TypeInfo_for_T_6));
#line 1666 "hlds.make_hlds.c"
    }
#line 57 "make_hlds.m"
    {
#line 57 "make_hlds.m"
      mercury__list____Compare____list_1_0(hlds__make_hlds__TypeInfo_8_8, hlds__make_hlds__HeadVar__1_1, (MR_Word) hlds__make_hlds__Cast_HeadVar1_4, (MR_Word) hlds__make_hlds__Cast_HeadVar2_5);
    }
#line 57 "make_hlds.m"
  }
#line 57 "make_hlds.m"
}

#line 57 "make_hlds.m"
MR_bool MR_CALL 
hlds__make_hlds____Unify____ims_list_1_0(
#line 57 "make_hlds.m"
  MR_Word hlds__make_hlds__TypeInfo_for_T_5,
#line 57 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__1_1,
#line 57 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_2)
#line 57 "make_hlds.m"
{
#line 57 "make_hlds.m"
  {
#line 57 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;
#line 57 "make_hlds.m"
    MR_Word hlds__make_hlds__TypeInfo_7_7;
#line 57 "make_hlds.m"
    MR_Word hlds__make_hlds__Cast_HeadVar1_3 = hlds__make_hlds__HeadVar__1_1;
#line 57 "make_hlds.m"
    MR_Word hlds__make_hlds__Cast_HeadVar2_4 = hlds__make_hlds__HeadVar__2_2;

#line 1700 "hlds.make_hlds.c"
    {
#line 1702 "hlds.make_hlds.c"
      hlds__make_hlds__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1704 "hlds.make_hlds.c"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__TypeInfo_7_7, 0) = ((MR_Box) (&hlds__make_hlds__hlds__make_hlds__type_ctor_info_ims_item_1));
#line 1706 "hlds.make_hlds.c"
      MR_hl_field(MR_mktag(0), hlds__make_hlds__TypeInfo_7_7, 1) = ((MR_Box) (hlds__make_hlds__TypeInfo_for_T_5));
#line 1708 "hlds.make_hlds.c"
    }
#line 57 "make_hlds.m"
    {
#line 57 "make_hlds.m"
      hlds__make_hlds__succeeded = mercury__list____Unify____list_1_0(hlds__make_hlds__TypeInfo_7_7, (MR_Word) hlds__make_hlds__Cast_HeadVar1_3, (MR_Word) hlds__make_hlds__Cast_HeadVar2_4);
    }
#line 57 "make_hlds.m"
    return hlds__make_hlds__succeeded;
#line 57 "make_hlds.m"
  }
#line 57 "make_hlds.m"
}

#line 58 "make_hlds.m"
void MR_CALL 
hlds__make_hlds____Compare____ims_item_1_0(
#line 58 "make_hlds.m"
  MR_Word hlds__make_hlds__TypeInfo_for_T_11,
#line 58 "make_hlds.m"
  MR_Word * hlds__make_hlds__HeadVar__1_1,
#line 58 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_2,
#line 58 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__3_3)
#line 58 "make_hlds.m"
{
#line 58 "make_hlds.m"
  {
#line 58 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;
#line 58 "make_hlds.m"
    MR_Integer hlds__make_hlds__CastX_9 = (MR_Integer) hlds__make_hlds__HeadVar__2_2;
#line 58 "make_hlds.m"
    MR_Integer hlds__make_hlds__CastY_10 = (MR_Integer) hlds__make_hlds__HeadVar__3_3;

#line 58 "make_hlds.m"
    hlds__make_hlds__succeeded = (hlds__make_hlds__CastX_9 == hlds__make_hlds__CastY_10);
#line 58 "make_hlds.m"
    if (hlds__make_hlds__succeeded)
#line 1748 "hlds.make_hlds.c"
      *hlds__make_hlds__HeadVar__1_1 = (MR_Integer) 0;
#line 58 "make_hlds.m"
    else
#line 58 "make_hlds.m"
      {
#line 58 "make_hlds.m"
        MR_Word hlds__make_hlds__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__2_2, (MR_Integer) 0)));
#line 58 "make_hlds.m"
        MR_Box hlds__make_hlds__V_5_5 = (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__2_2, (MR_Integer) 1));
#line 58 "make_hlds.m"
        MR_Word hlds__make_hlds__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__3_3, (MR_Integer) 0)));
#line 58 "make_hlds.m"
        MR_Box hlds__make_hlds__V_7_7 = (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__3_3, (MR_Integer) 1));
#line 58 "make_hlds.m"
        MR_Word hlds__make_hlds__V_8_8;

#line 58 "make_hlds.m"
        {
#line 58 "make_hlds.m"
          hlds__status____Compare____item_mercury_status_0_0(&hlds__make_hlds__V_8_8, hlds__make_hlds__V_4_4, hlds__make_hlds__V_6_6);
        }
#line 1770 "hlds.make_hlds.c"
        hlds__make_hlds__succeeded = (hlds__make_hlds__V_8_8 == (MR_Integer) 0);
#line 58 "make_hlds.m"
        hlds__make_hlds__succeeded = !(hlds__make_hlds__succeeded);
#line 58 "make_hlds.m"
        if (hlds__make_hlds__succeeded)
#line 58 "make_hlds.m"
          *hlds__make_hlds__HeadVar__1_1 = hlds__make_hlds__V_8_8;
#line 58 "make_hlds.m"
        else
#line 58 "make_hlds.m"
          {
#line 58 "make_hlds.m"
            mercury__builtin__compare_3_p_0(hlds__make_hlds__TypeInfo_for_T_11, hlds__make_hlds__HeadVar__1_1, hlds__make_hlds__V_5_5, hlds__make_hlds__V_7_7);
          }
#line 58 "make_hlds.m"
      }
#line 58 "make_hlds.m"
  }
#line 58 "make_hlds.m"
}

#line 58 "make_hlds.m"
MR_bool MR_CALL 
hlds__make_hlds____Unify____ims_item_1_0(
#line 58 "make_hlds.m"
  MR_Word hlds__make_hlds__TypeInfo_for_T_9,
#line 58 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__1_1,
#line 58 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_2)
#line 58 "make_hlds.m"
{
#line 58 "make_hlds.m"
  {
#line 58 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;
#line 58 "make_hlds.m"
    MR_Integer hlds__make_hlds__CastX_7 = (MR_Integer) hlds__make_hlds__HeadVar__1_1;
#line 58 "make_hlds.m"
    MR_Integer hlds__make_hlds__CastY_8 = (MR_Integer) hlds__make_hlds__HeadVar__2_2;

#line 58 "make_hlds.m"
    hlds__make_hlds__succeeded = (hlds__make_hlds__CastX_7 == hlds__make_hlds__CastY_8);
#line 58 "make_hlds.m"
    if (hlds__make_hlds__succeeded)
#line 58 "make_hlds.m"
      hlds__make_hlds__succeeded = MR_TRUE;
#line 58 "make_hlds.m"
    else
#line 58 "make_hlds.m"
      {
#line 58 "make_hlds.m"
        MR_Word hlds__make_hlds__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__1_1, (MR_Integer) 0)));
#line 58 "make_hlds.m"
        MR_Box hlds__make_hlds__V_4_4 = (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__1_1, (MR_Integer) 1));
#line 58 "make_hlds.m"
        MR_Word hlds__make_hlds__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__2_2, (MR_Integer) 0)));
#line 58 "make_hlds.m"
        MR_Box hlds__make_hlds__V_6_6 = (MR_hl_field(MR_mktag(0), hlds__make_hlds__HeadVar__2_2, (MR_Integer) 1));

#line 1831 "hlds.make_hlds.c"
        {
#line 1833 "hlds.make_hlds.c"
          hlds__make_hlds__succeeded = hlds__status____Unify____item_mercury_status_0_0(hlds__make_hlds__V_3_3, hlds__make_hlds__V_5_5);
        }
#line 58 "make_hlds.m"
        if (hlds__make_hlds__succeeded)
#line 1838 "hlds.make_hlds.c"
          {
#line 1840 "hlds.make_hlds.c"
            hlds__make_hlds__succeeded = mercury__builtin__unify_2_p_0(hlds__make_hlds__TypeInfo_for_T_9, hlds__make_hlds__V_4_4, hlds__make_hlds__V_6_6);
          }
#line 58 "make_hlds.m"
      }
#line 58 "make_hlds.m"
    return hlds__make_hlds__succeeded;
#line 58 "make_hlds.m"
  }
#line 58 "make_hlds.m"
}

#line 49 "make_hlds.m"
void MR_CALL 
hlds__make_hlds____Compare____found_invalid_type_0_0(
#line 49 "make_hlds.m"
  MR_Word * hlds__make_hlds__HeadVar__1_1,
#line 49 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_2,
#line 49 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__3_3)
#line 49 "make_hlds.m"
{
#line 49 "make_hlds.m"
  {
#line 49 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;
#line 49 "make_hlds.m"
    MR_Integer hlds__make_hlds__Cast_HeadVar1_4 = (MR_Integer) hlds__make_hlds__HeadVar__2_2;
#line 49 "make_hlds.m"
    MR_Integer hlds__make_hlds__Cast_HeadVar2_5 = (MR_Integer) hlds__make_hlds__HeadVar__3_3;

#line 49 "make_hlds.m"
    {
#line 49 "make_hlds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__HeadVar__1_1, hlds__make_hlds__Cast_HeadVar1_4, hlds__make_hlds__Cast_HeadVar2_5);
    }
#line 49 "make_hlds.m"
  }
#line 49 "make_hlds.m"
}

#line 49 "make_hlds.m"
MR_bool MR_CALL 
hlds__make_hlds____Unify____found_invalid_type_0_0(
#line 49 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_1,
#line 49 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_2)
#line 49 "make_hlds.m"
{
#line 1891 "hlds.make_hlds.c"
  {
#line 1893 "hlds.make_hlds.c"
    MR_bool hlds__make_hlds__succeeded = (hlds__make_hlds__HeadVar__2_1 == hlds__make_hlds__HeadVar__2_2);

#line 1896 "hlds.make_hlds.c"
    return hlds__make_hlds__succeeded;
#line 1898 "hlds.make_hlds.c"
  }
#line 49 "make_hlds.m"
}

#line 53 "make_hlds.m"
void MR_CALL 
hlds__make_hlds____Compare____found_invalid_inst_or_mode_0_0(
#line 53 "make_hlds.m"
  MR_Word * hlds__make_hlds__HeadVar__1_1,
#line 53 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_2,
#line 53 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__3_3)
#line 53 "make_hlds.m"
{
#line 53 "make_hlds.m"
  {
#line 53 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;
#line 53 "make_hlds.m"
    MR_Integer hlds__make_hlds__Cast_HeadVar1_4 = (MR_Integer) hlds__make_hlds__HeadVar__2_2;
#line 53 "make_hlds.m"
    MR_Integer hlds__make_hlds__Cast_HeadVar2_5 = (MR_Integer) hlds__make_hlds__HeadVar__3_3;

#line 53 "make_hlds.m"
    {
#line 53 "make_hlds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__HeadVar__1_1, hlds__make_hlds__Cast_HeadVar1_4, hlds__make_hlds__Cast_HeadVar2_5);
    }
#line 53 "make_hlds.m"
  }
#line 53 "make_hlds.m"
}

#line 53 "make_hlds.m"
MR_bool MR_CALL 
hlds__make_hlds____Unify____found_invalid_inst_or_mode_0_0(
#line 53 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_1,
#line 53 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_2)
#line 53 "make_hlds.m"
{
#line 1942 "hlds.make_hlds.c"
  {
#line 1944 "hlds.make_hlds.c"
    MR_bool hlds__make_hlds__succeeded = (hlds__make_hlds__HeadVar__2_1 == hlds__make_hlds__HeadVar__2_2);

#line 1947 "hlds.make_hlds.c"
    return hlds__make_hlds__succeeded;
#line 1949 "hlds.make_hlds.c"
  }
#line 53 "make_hlds.m"
}

#line 139 "make_hlds.m"
void MR_CALL 
hlds__make_hlds__set_module_recomp_info_3_p_0(
#line 139 "make_hlds.m"
  MR_Word hlds__make_hlds__QualInfo_4,
#line 139 "make_hlds.m"
  MR_Word hlds__make_hlds__STATE_VARIABLE_ModuleInfo_0_6,
#line 139 "make_hlds.m"
  MR_Word * hlds__make_hlds__STATE_VARIABLE_ModuleInfo_7)
#line 139 "make_hlds.m"
{
#line 213 "make_hlds.m"
  {
#line 213 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;

#line 213 "make_hlds.m"
    {
#line 213 "make_hlds.m"
      hlds__make_hlds__qual_info__set_module_recompilation_info_3_p_0(hlds__make_hlds__QualInfo_4, hlds__make_hlds__STATE_VARIABLE_ModuleInfo_0_6, hlds__make_hlds__STATE_VARIABLE_ModuleInfo_7);
    }
#line 213 "make_hlds.m"
  }
#line 139 "make_hlds.m"
}

#line 129 "make_hlds.m"
void MR_CALL 
hlds__make_hlds__produce_instance_method_clauses_16_p_0(
#line 129 "make_hlds.m"
  MR_Word hlds__make_hlds__InstanceProcDefn_17,
#line 129 "make_hlds.m"
  MR_Word hlds__make_hlds__PredOrFunc_18,
#line 129 "make_hlds.m"
  MR_Integer hlds__make_hlds__PredArity_19,
#line 129 "make_hlds.m"
  MR_Word hlds__make_hlds__ArgTypes_20,
#line 129 "make_hlds.m"
  MR_Word hlds__make_hlds__Markers_21,
#line 129 "make_hlds.m"
  MR_Word hlds__make_hlds__Context_22,
#line 129 "make_hlds.m"
  MR_Word hlds__make_hlds__Status_23,
#line 129 "make_hlds.m"
  MR_Word * hlds__make_hlds__ClausesInfo_24,
#line 129 "make_hlds.m"
  MR_Word hlds__make_hlds__STATE_VARIABLE_TVarSet_0_29,
#line 129 "make_hlds.m"
  MR_Word * hlds__make_hlds__STATE_VARIABLE_TVarSet_30,
#line 129 "make_hlds.m"
  MR_Word hlds__make_hlds__STATE_VARIABLE_ModuleInfo_0_31,
#line 129 "make_hlds.m"
  MR_Word * hlds__make_hlds__STATE_VARIABLE_ModuleInfo_32,
#line 129 "make_hlds.m"
  MR_Word hlds__make_hlds__STATE_VARIABLE_QualInfo_0_33,
#line 129 "make_hlds.m"
  MR_Word * hlds__make_hlds__STATE_VARIABLE_QualInfo_34,
#line 129 "make_hlds.m"
  MR_Word hlds__make_hlds__STATE_VARIABLE_Specs_0_35,
#line 129 "make_hlds.m"
  MR_Word * hlds__make_hlds__STATE_VARIABLE_Specs_36)
#line 129 "make_hlds.m"
{
#line 208 "make_hlds.m"
  {
#line 208 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;

#line 208 "make_hlds.m"
    {
#line 208 "make_hlds.m"
      hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_p_0(hlds__make_hlds__InstanceProcDefn_17, hlds__make_hlds__PredOrFunc_18, hlds__make_hlds__PredArity_19, hlds__make_hlds__ArgTypes_20, hlds__make_hlds__Markers_21, hlds__make_hlds__Context_22, hlds__make_hlds__Status_23, hlds__make_hlds__ClausesInfo_24, hlds__make_hlds__STATE_VARIABLE_TVarSet_0_29, hlds__make_hlds__STATE_VARIABLE_TVarSet_30, hlds__make_hlds__STATE_VARIABLE_ModuleInfo_0_31, hlds__make_hlds__STATE_VARIABLE_ModuleInfo_32, hlds__make_hlds__STATE_VARIABLE_QualInfo_0_33, hlds__make_hlds__STATE_VARIABLE_QualInfo_34, hlds__make_hlds__STATE_VARIABLE_Specs_0_35, hlds__make_hlds__STATE_VARIABLE_Specs_36);
    }
#line 208 "make_hlds.m"
  }
#line 129 "make_hlds.m"
}

#line 121 "make_hlds.m"
void MR_CALL 
hlds__make_hlds__add_special_pred_decl_for_real_8_p_0(
#line 121 "make_hlds.m"
  MR_Word hlds__make_hlds__SpecialPredId_9,
#line 121 "make_hlds.m"
  MR_Word hlds__make_hlds__TVarSet_10,
#line 121 "make_hlds.m"
  MR_Word hlds__make_hlds__Type_11,
#line 121 "make_hlds.m"
  MR_Word hlds__make_hlds__TypeCtor_12,
#line 121 "make_hlds.m"
  MR_Word hlds__make_hlds__Context_13,
#line 121 "make_hlds.m"
  MR_Word hlds__make_hlds__Status0_14,
#line 121 "make_hlds.m"
  MR_Word hlds__make_hlds__STATE_VARIABLE_ModuleInfo_0_16,
#line 121 "make_hlds.m"
  MR_Word * hlds__make_hlds__STATE_VARIABLE_ModuleInfo_17)
#line 121 "make_hlds.m"
{
#line 202 "make_hlds.m"
  {
#line 202 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;

#line 202 "make_hlds.m"
    {
#line 202 "make_hlds.m"
      hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_p_0(hlds__make_hlds__SpecialPredId_9, hlds__make_hlds__TVarSet_10, hlds__make_hlds__Type_11, hlds__make_hlds__TypeCtor_12, hlds__make_hlds__Context_13, hlds__make_hlds__Status0_14, hlds__make_hlds__STATE_VARIABLE_ModuleInfo_0_16, hlds__make_hlds__STATE_VARIABLE_ModuleInfo_17);
    }
#line 202 "make_hlds.m"
  }
#line 121 "make_hlds.m"
}

#line 109 "make_hlds.m"
void MR_CALL 
hlds__make_hlds__add_special_pred_for_real_9_p_0(
#line 109 "make_hlds.m"
  MR_Word hlds__make_hlds__SpecialPredId_10,
#line 109 "make_hlds.m"
  MR_Word hlds__make_hlds__TVarSet_11,
#line 109 "make_hlds.m"
  MR_Word hlds__make_hlds__Type0_12,
#line 109 "make_hlds.m"
  MR_Word hlds__make_hlds__TypeCtor_13,
#line 109 "make_hlds.m"
  MR_Word hlds__make_hlds__TypeBody_14,
#line 109 "make_hlds.m"
  MR_Word hlds__make_hlds__Context_15,
#line 109 "make_hlds.m"
  MR_Word hlds__make_hlds__Status0_16,
#line 109 "make_hlds.m"
  MR_Word hlds__make_hlds__STATE_VARIABLE_ModuleInfo_0_18,
#line 109 "make_hlds.m"
  MR_Word * hlds__make_hlds__STATE_VARIABLE_ModuleInfo_19)
#line 109 "make_hlds.m"
{
#line 197 "make_hlds.m"
  {
#line 197 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;

#line 197 "make_hlds.m"
    {
#line 197 "make_hlds.m"
      hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(hlds__make_hlds__SpecialPredId_10, hlds__make_hlds__TVarSet_11, hlds__make_hlds__Type0_12, hlds__make_hlds__TypeCtor_13, hlds__make_hlds__TypeBody_14, hlds__make_hlds__Context_15, hlds__make_hlds__Status0_16, hlds__make_hlds__STATE_VARIABLE_ModuleInfo_0_18, hlds__make_hlds__STATE_VARIABLE_ModuleInfo_19);
    }
#line 197 "make_hlds.m"
  }
#line 109 "make_hlds.m"
}

#line 94 "make_hlds.m"
void MR_CALL 
hlds__make_hlds__add_new_proc_13_p_0(
#line 94 "make_hlds.m"
  MR_Word hlds__make_hlds__InstVarSet_14,
#line 94 "make_hlds.m"
  MR_Integer hlds__make_hlds__Arity_15,
#line 94 "make_hlds.m"
  MR_Word hlds__make_hlds__ArgModes_16,
#line 94 "make_hlds.m"
  MR_Word hlds__make_hlds__MaybeDeclaredArgModes_17,
#line 94 "make_hlds.m"
  MR_Word hlds__make_hlds__MaybeArgLives_18,
#line 94 "make_hlds.m"
  MR_Word hlds__make_hlds__DetismDecl_19,
#line 94 "make_hlds.m"
  MR_Word hlds__make_hlds__MaybeDet_20,
#line 94 "make_hlds.m"
  MR_Word hlds__make_hlds__Context_21,
#line 94 "make_hlds.m"
  MR_Word hlds__make_hlds__IsAddressTaken_22,
#line 94 "make_hlds.m"
  MR_Word hlds__make_hlds__HasParallelConj_23,
#line 94 "make_hlds.m"
  MR_Word hlds__make_hlds__PredInfo0_24,
#line 94 "make_hlds.m"
  MR_Word * hlds__make_hlds__PredInfo_25,
#line 94 "make_hlds.m"
  MR_Integer * hlds__make_hlds__ModeId_26)
#line 94 "make_hlds.m"
{
#line 191 "make_hlds.m"
  {
#line 191 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;

#line 191 "make_hlds.m"
    {
#line 191 "make_hlds.m"
      hlds__make_hlds__add_pred__do_add_new_proc_13_p_0(hlds__make_hlds__InstVarSet_14, hlds__make_hlds__Arity_15, hlds__make_hlds__ArgModes_16, hlds__make_hlds__MaybeDeclaredArgModes_17, hlds__make_hlds__MaybeArgLives_18, hlds__make_hlds__DetismDecl_19, hlds__make_hlds__MaybeDet_20, hlds__make_hlds__Context_21, hlds__make_hlds__IsAddressTaken_22, hlds__make_hlds__HasParallelConj_23, hlds__make_hlds__PredInfo0_24, hlds__make_hlds__PredInfo_25, hlds__make_hlds__ModeId_26);
    }
#line 191 "make_hlds.m"
  }
#line 94 "make_hlds.m"
}

#line 89 "make_hlds.m"
void MR_CALL 
hlds__make_hlds__parse_tree_to_hlds_11_p_0(
#line 89 "make_hlds.m"
  MR_Word hlds__make_hlds__AugCompilationUnit_12,
#line 89 "make_hlds.m"
  MR_Word hlds__make_hlds__Globals_13,
#line 89 "make_hlds.m"
  MR_String hlds__make_hlds__DumpBaseFileName_14,
#line 89 "make_hlds.m"
  MR_Word hlds__make_hlds__MQInfo0_15,
#line 89 "make_hlds.m"
  MR_Word hlds__make_hlds__TypeEqvMap_16,
#line 89 "make_hlds.m"
  MR_Word hlds__make_hlds__UsedModules_17,
#line 89 "make_hlds.m"
  MR_Word * hlds__make_hlds__QualInfo_18,
#line 89 "make_hlds.m"
  MR_Word * hlds__make_hlds__FoundInvalidType_19,
#line 89 "make_hlds.m"
  MR_Word * hlds__make_hlds__FoundInvalidMode_20,
#line 89 "make_hlds.m"
  MR_Word * hlds__make_hlds__ModuleInfo_21,
#line 89 "make_hlds.m"
  MR_Word * hlds__make_hlds__Specs_22)
#line 89 "make_hlds.m"
{
#line 184 "make_hlds.m"
  {
#line 184 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;

#line 184 "make_hlds.m"
    {
#line 184 "make_hlds.m"
      hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0(hlds__make_hlds__AugCompilationUnit_12, hlds__make_hlds__Globals_13, hlds__make_hlds__DumpBaseFileName_14, hlds__make_hlds__MQInfo0_15, hlds__make_hlds__TypeEqvMap_16, hlds__make_hlds__UsedModules_17, hlds__make_hlds__QualInfo_18, hlds__make_hlds__FoundInvalidType_19, hlds__make_hlds__FoundInvalidMode_20, hlds__make_hlds__ModuleInfo_21, hlds__make_hlds__Specs_22);
    }
#line 184 "make_hlds.m"
  }
#line 89 "make_hlds.m"
}

#line 72 "make_hlds.m"
void MR_CALL 
hlds__make_hlds__wrap_with_section_info_3_p_0(
#line 72 "make_hlds.m"
  MR_Word hlds__make_hlds__TypeInfo_for_T_7,
#line 72 "make_hlds.m"
  MR_Word hlds__make_hlds__SectionInfo_4,
#line 72 "make_hlds.m"
  MR_Box hlds__make_hlds__Item_5,
#line 72 "make_hlds.m"
  MR_Word * hlds__make_hlds__SectionItem_6)
#line 72 "make_hlds.m"
{
#line 177 "make_hlds.m"
  {
#line 177 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;

#line 177 "make_hlds.m"
    {
#line 177 "make_hlds.m"
      MR_Word base;
#line 177 "make_hlds.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 177 "make_hlds.m"
      *hlds__make_hlds__SectionItem_6 = base;
#line 177 "make_hlds.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__make_hlds__SectionInfo_4));
#line 177 "make_hlds.m"
      MR_hl_field(MR_mktag(0), base, 1) = hlds__make_hlds__Item_5;
#line 177 "make_hlds.m"
    }
#line 177 "make_hlds.m"
  }
#line 72 "make_hlds.m"
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
