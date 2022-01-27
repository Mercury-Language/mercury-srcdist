/*
** Automatically generated from `make_hlds.m'
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


/* :- module hlds.make_hlds. */
/* :- implementation. */

/*
INIT mercury__hlds__make_hlds__init
ENDINIT
*/

#include "hlds.make_hlds.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
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
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.status.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.add_class.mih"
#include "hlds.make_hlds.add_pred.mih"
#include "hlds.make_hlds.add_special_pred.mih"
#include "hlds.make_hlds.make_hlds_passes.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 140 "hlds.make_hlds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_inst_or_mode_0_0;

#line 143 "hlds.make_hlds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_inst_or_mode_0_1;

#line 146 "hlds.make_hlds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__hlds__make_hlds__enum_value_ordered_found_invalid_inst_or_mode_0[2];

#line 149 "hlds.make_hlds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__hlds__make_hlds__enum_name_ordered_found_invalid_inst_or_mode_0[2];

#line 152 "hlds.make_hlds.c"
static const MR_Integer hlds__make_hlds__hlds__make_hlds__functor_number_map_found_invalid_inst_or_mode_0[2];

#line 155 "hlds.make_hlds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_type_0_0;

#line 158 "hlds.make_hlds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_type_0_1;

#line 161 "hlds.make_hlds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__hlds__make_hlds__enum_value_ordered_found_invalid_type_0[2];

#line 164 "hlds.make_hlds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__hlds__make_hlds__enum_name_ordered_found_invalid_type_0[2];

#line 167 "hlds.make_hlds.c"
static const MR_Integer hlds__make_hlds__hlds__make_hlds__functor_number_map_found_invalid_type_0[2];

#line 170 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____found_invalid_inst_or_mode_0_0_10001(
#line 173 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 175 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2);

#line 178 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____found_invalid_inst_or_mode_0_0_10001(
#line 181 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_1,
#line 183 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 185 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3);

#line 188 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____found_invalid_type_0_0_10001(
#line 191 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 193 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2);

#line 196 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____found_invalid_type_0_0_10001(
#line 199 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_1,
#line 201 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 203 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3);

#line 206 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____make_hlds_qual_info_0_0_10001(
#line 209 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 211 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2);

#line 214 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____make_hlds_qual_info_0_0_10001(
#line 217 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_1,
#line 219 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 221 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3);







#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 239 "hlds.make_hlds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_inst_or_mode_0_0 = {
  (MR_String) "did_not_find_invalid_inst_or_mode",
  (MR_Integer) 0
};

#line 245 "hlds.make_hlds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_inst_or_mode_0_1 = {
  (MR_String) "found_invalid_inst_or_mode",
  (MR_Integer) 1
};

#line 251 "hlds.make_hlds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__hlds__make_hlds__enum_value_ordered_found_invalid_inst_or_mode_0[2] = {
  &hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_inst_or_mode_0_0,
  &hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_inst_or_mode_0_1
};

#line 257 "hlds.make_hlds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__hlds__make_hlds__enum_name_ordered_found_invalid_inst_or_mode_0[2] = {
  &hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_inst_or_mode_0_0,
  &hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_inst_or_mode_0_1
};

#line 263 "hlds.make_hlds.c"
static const MR_Integer hlds__make_hlds__hlds__make_hlds__functor_number_map_found_invalid_inst_or_mode_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 269 "hlds.make_hlds.c"
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

#line 286 "hlds.make_hlds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_type_0_0 = {
  (MR_String) "did_not_find_invalid_type",
  (MR_Integer) 0
};

#line 292 "hlds.make_hlds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_type_0_1 = {
  (MR_String) "found_invalid_type",
  (MR_Integer) 1
};

#line 298 "hlds.make_hlds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__hlds__make_hlds__enum_value_ordered_found_invalid_type_0[2] = {
  &hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_type_0_0,
  &hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_type_0_1
};

#line 304 "hlds.make_hlds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__hlds__make_hlds__enum_name_ordered_found_invalid_type_0[2] = {
  &hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_type_0_0,
  &hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_type_0_1
};

#line 310 "hlds.make_hlds.c"
static const MR_Integer hlds__make_hlds__hlds__make_hlds__functor_number_map_found_invalid_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 316 "hlds.make_hlds.c"
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

#line 333 "hlds.make_hlds.c"
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

#line 350 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____found_invalid_inst_or_mode_0_0_10001(
#line 353 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 355 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2)
#line 357 "hlds.make_hlds.c"
{
#line 359 "hlds.make_hlds.c"
  {
#line 361 "hlds.make_hlds.c"
    MR_bool hlds__make_hlds__succeeded;

#line 364 "hlds.make_hlds.c"
    {
#line 366 "hlds.make_hlds.c"
      hlds__make_hlds__succeeded = hlds__make_hlds____Unify____found_invalid_inst_or_mode_0_0(((MR_Word) hlds__make_hlds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__wrapper_arg_2));
    }
#line 369 "hlds.make_hlds.c"
    return hlds__make_hlds__succeeded;
#line 371 "hlds.make_hlds.c"
  }
#line 373 "hlds.make_hlds.c"
}

#line 376 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____found_invalid_inst_or_mode_0_0_10001(
#line 379 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_1,
#line 381 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 383 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3)
#line 385 "hlds.make_hlds.c"
{
#line 387 "hlds.make_hlds.c"
  {
#line 389 "hlds.make_hlds.c"
    MR_Word hlds__make_hlds__conv0_HeadVar__1_1;

#line 392 "hlds.make_hlds.c"
    {
#line 394 "hlds.make_hlds.c"
      hlds__make_hlds____Compare____found_invalid_inst_or_mode_0_0(&hlds__make_hlds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__wrapper_arg_3));
    }
#line 397 "hlds.make_hlds.c"
    *hlds__make_hlds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__conv0_HeadVar__1_1));
#line 399 "hlds.make_hlds.c"
  }
#line 401 "hlds.make_hlds.c"
}

#line 404 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____found_invalid_type_0_0_10001(
#line 407 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 409 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2)
#line 411 "hlds.make_hlds.c"
{
#line 413 "hlds.make_hlds.c"
  {
#line 415 "hlds.make_hlds.c"
    MR_bool hlds__make_hlds__succeeded;

#line 418 "hlds.make_hlds.c"
    {
#line 420 "hlds.make_hlds.c"
      hlds__make_hlds__succeeded = hlds__make_hlds____Unify____found_invalid_type_0_0(((MR_Word) hlds__make_hlds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__wrapper_arg_2));
    }
#line 423 "hlds.make_hlds.c"
    return hlds__make_hlds__succeeded;
#line 425 "hlds.make_hlds.c"
  }
#line 427 "hlds.make_hlds.c"
}

#line 430 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____found_invalid_type_0_0_10001(
#line 433 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_1,
#line 435 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 437 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3)
#line 439 "hlds.make_hlds.c"
{
#line 441 "hlds.make_hlds.c"
  {
#line 443 "hlds.make_hlds.c"
    MR_Word hlds__make_hlds__conv0_HeadVar__1_1;

#line 446 "hlds.make_hlds.c"
    {
#line 448 "hlds.make_hlds.c"
      hlds__make_hlds____Compare____found_invalid_type_0_0(&hlds__make_hlds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__wrapper_arg_3));
    }
#line 451 "hlds.make_hlds.c"
    *hlds__make_hlds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__conv0_HeadVar__1_1));
#line 453 "hlds.make_hlds.c"
  }
#line 455 "hlds.make_hlds.c"
}

#line 458 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____make_hlds_qual_info_0_0_10001(
#line 461 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 463 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2)
#line 465 "hlds.make_hlds.c"
{
#line 467 "hlds.make_hlds.c"
  {
#line 469 "hlds.make_hlds.c"
    MR_bool hlds__make_hlds__succeeded;

#line 472 "hlds.make_hlds.c"
    {
#line 474 "hlds.make_hlds.c"
      hlds__make_hlds__succeeded = hlds__make_hlds____Unify____make_hlds_qual_info_0_0(((MR_Word) hlds__make_hlds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__wrapper_arg_2));
    }
#line 477 "hlds.make_hlds.c"
    return hlds__make_hlds__succeeded;
#line 479 "hlds.make_hlds.c"
  }
#line 481 "hlds.make_hlds.c"
}

#line 484 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____make_hlds_qual_info_0_0_10001(
#line 487 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_1,
#line 489 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 491 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3)
#line 493 "hlds.make_hlds.c"
{
#line 495 "hlds.make_hlds.c"
  {
#line 497 "hlds.make_hlds.c"
    MR_Word hlds__make_hlds__conv0_HeadVar__1_1;

#line 500 "hlds.make_hlds.c"
    {
#line 502 "hlds.make_hlds.c"
      hlds__make_hlds____Compare____make_hlds_qual_info_0_0(&hlds__make_hlds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__wrapper_arg_3));
    }
#line 505 "hlds.make_hlds.c"
    *hlds__make_hlds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__conv0_HeadVar__1_1));
#line 507 "hlds.make_hlds.c"
  }
#line 509 "hlds.make_hlds.c"
}

#line 156 "make_hlds.m"
void MR_CALL 
hlds__make_hlds____Compare____make_hlds_qual_info_0_0(
#line 156 "make_hlds.m"
  MR_Word * hlds__make_hlds__HeadVar__1_1,
#line 156 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_2,
#line 156 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__3_3)
#line 156 "make_hlds.m"
{
#line 156 "make_hlds.m"
  {
#line 156 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;
#line 156 "make_hlds.m"
    MR_Word hlds__make_hlds__Cast_HeadVar1_4 = hlds__make_hlds__HeadVar__2_2;
#line 156 "make_hlds.m"
    MR_Word hlds__make_hlds__Cast_HeadVar2_5 = hlds__make_hlds__HeadVar__3_3;

#line 156 "make_hlds.m"
    {
#line 156 "make_hlds.m"
      hlds__make_hlds__qual_info____Compare____qual_info_0_0(hlds__make_hlds__HeadVar__1_1, hlds__make_hlds__Cast_HeadVar1_4, hlds__make_hlds__Cast_HeadVar2_5);
#line 156 "make_hlds.m"
      return;
    }
#line 156 "make_hlds.m"
  }
#line 156 "make_hlds.m"
}

#line 156 "make_hlds.m"
MR_bool MR_CALL 
hlds__make_hlds____Unify____make_hlds_qual_info_0_0(
#line 156 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__1_1,
#line 156 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_2)
#line 156 "make_hlds.m"
{
#line 156 "make_hlds.m"
  {
#line 156 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;
#line 156 "make_hlds.m"
    MR_Word hlds__make_hlds__Cast_HeadVar1_3 = hlds__make_hlds__HeadVar__1_1;
#line 156 "make_hlds.m"
    MR_Word hlds__make_hlds__Cast_HeadVar2_4 = hlds__make_hlds__HeadVar__2_2;

#line 156 "make_hlds.m"
    {
#line 156 "make_hlds.m"
      return hlds__make_hlds__succeeded = hlds__make_hlds__qual_info____Unify____qual_info_0_0(hlds__make_hlds__Cast_HeadVar1_3, hlds__make_hlds__Cast_HeadVar2_4);
    }
#line 156 "make_hlds.m"
    return hlds__make_hlds__succeeded;
#line 156 "make_hlds.m"
  }
#line 156 "make_hlds.m"
}

#line 50 "make_hlds.m"
void MR_CALL 
hlds__make_hlds____Compare____found_invalid_type_0_0(
#line 50 "make_hlds.m"
  MR_Word * hlds__make_hlds__HeadVar__1_1,
#line 50 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_2,
#line 50 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__3_3)
#line 50 "make_hlds.m"
{
#line 50 "make_hlds.m"
  {
#line 50 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;
#line 50 "make_hlds.m"
    MR_Integer hlds__make_hlds__Cast_HeadVar1_4 = (MR_Integer) hlds__make_hlds__HeadVar__2_2;
#line 50 "make_hlds.m"
    MR_Integer hlds__make_hlds__Cast_HeadVar2_5 = (MR_Integer) hlds__make_hlds__HeadVar__3_3;

#line 50 "make_hlds.m"
    {
#line 50 "make_hlds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__HeadVar__1_1, hlds__make_hlds__Cast_HeadVar1_4, hlds__make_hlds__Cast_HeadVar2_5);
#line 50 "make_hlds.m"
      return;
    }
#line 50 "make_hlds.m"
  }
#line 50 "make_hlds.m"
}

#line 50 "make_hlds.m"
MR_bool MR_CALL 
hlds__make_hlds____Unify____found_invalid_type_0_0(
#line 50 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_1,
#line 50 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_2)
#line 50 "make_hlds.m"
{
#line 615 "hlds.make_hlds.c"
  {
#line 617 "hlds.make_hlds.c"
    MR_bool hlds__make_hlds__succeeded = (hlds__make_hlds__HeadVar__2_1 == hlds__make_hlds__HeadVar__2_2);

#line 620 "hlds.make_hlds.c"
    return hlds__make_hlds__succeeded;
#line 622 "hlds.make_hlds.c"
  }
#line 50 "make_hlds.m"
}

#line 54 "make_hlds.m"
void MR_CALL 
hlds__make_hlds____Compare____found_invalid_inst_or_mode_0_0(
#line 54 "make_hlds.m"
  MR_Word * hlds__make_hlds__HeadVar__1_1,
#line 54 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_2,
#line 54 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__3_3)
#line 54 "make_hlds.m"
{
#line 54 "make_hlds.m"
  {
#line 54 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;
#line 54 "make_hlds.m"
    MR_Integer hlds__make_hlds__Cast_HeadVar1_4 = (MR_Integer) hlds__make_hlds__HeadVar__2_2;
#line 54 "make_hlds.m"
    MR_Integer hlds__make_hlds__Cast_HeadVar2_5 = (MR_Integer) hlds__make_hlds__HeadVar__3_3;

#line 54 "make_hlds.m"
    {
#line 54 "make_hlds.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(hlds__make_hlds__HeadVar__1_1, hlds__make_hlds__Cast_HeadVar1_4, hlds__make_hlds__Cast_HeadVar2_5);
#line 54 "make_hlds.m"
      return;
    }
#line 54 "make_hlds.m"
  }
#line 54 "make_hlds.m"
}

#line 54 "make_hlds.m"
MR_bool MR_CALL 
hlds__make_hlds____Unify____found_invalid_inst_or_mode_0_0(
#line 54 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_1,
#line 54 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_2)
#line 54 "make_hlds.m"
{
#line 668 "hlds.make_hlds.c"
  {
#line 670 "hlds.make_hlds.c"
    MR_bool hlds__make_hlds__succeeded = (hlds__make_hlds__HeadVar__2_1 == hlds__make_hlds__HeadVar__2_2);

#line 673 "hlds.make_hlds.c"
    return hlds__make_hlds__succeeded;
#line 675 "hlds.make_hlds.c"
  }
#line 54 "make_hlds.m"
}

#line 121 "make_hlds.m"
void MR_CALL 
hlds__make_hlds__set_module_recomp_info_3_p_0(
#line 121 "make_hlds.m"
  MR_Word hlds__make_hlds__QualInfo_4,
#line 121 "make_hlds.m"
  MR_Word hlds__make_hlds__STATE_VARIABLE_ModuleInfo_0_6,
#line 121 "make_hlds.m"
  MR_Word * hlds__make_hlds__STATE_VARIABLE_ModuleInfo_7)
#line 121 "make_hlds.m"
{
#line 190 "make_hlds.m"
  {
#line 190 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;

#line 190 "make_hlds.m"
    {
#line 190 "make_hlds.m"
      hlds__make_hlds__qual_info__set_module_recompilation_info_3_p_0(hlds__make_hlds__QualInfo_4, hlds__make_hlds__STATE_VARIABLE_ModuleInfo_0_6, hlds__make_hlds__STATE_VARIABLE_ModuleInfo_7);
#line 190 "make_hlds.m"
      return;
    }
#line 190 "make_hlds.m"
  }
#line 121 "make_hlds.m"
}

#line 111 "make_hlds.m"
void MR_CALL 
hlds__make_hlds__produce_instance_method_clauses_16_p_0(
#line 111 "make_hlds.m"
  MR_Word hlds__make_hlds__InstanceProcDefn_17,
#line 111 "make_hlds.m"
  MR_Word hlds__make_hlds__PredOrFunc_18,
#line 111 "make_hlds.m"
  MR_Integer hlds__make_hlds__PredArity_19,
#line 111 "make_hlds.m"
  MR_Word hlds__make_hlds__ArgTypes_20,
#line 111 "make_hlds.m"
  MR_Word hlds__make_hlds__Markers_21,
#line 111 "make_hlds.m"
  MR_Word hlds__make_hlds__Context_22,
#line 111 "make_hlds.m"
  MR_Word hlds__make_hlds__Status_23,
#line 111 "make_hlds.m"
  MR_Word * hlds__make_hlds__ClausesInfo_24,
#line 111 "make_hlds.m"
  MR_Word hlds__make_hlds__STATE_VARIABLE_TVarSet_0_29,
#line 111 "make_hlds.m"
  MR_Word * hlds__make_hlds__STATE_VARIABLE_TVarSet_30,
#line 111 "make_hlds.m"
  MR_Word hlds__make_hlds__STATE_VARIABLE_ModuleInfo_0_31,
#line 111 "make_hlds.m"
  MR_Word * hlds__make_hlds__STATE_VARIABLE_ModuleInfo_32,
#line 111 "make_hlds.m"
  MR_Word hlds__make_hlds__STATE_VARIABLE_QualInfo_0_33,
#line 111 "make_hlds.m"
  MR_Word * hlds__make_hlds__STATE_VARIABLE_QualInfo_34,
#line 111 "make_hlds.m"
  MR_Word hlds__make_hlds__STATE_VARIABLE_Specs_0_35,
#line 111 "make_hlds.m"
  MR_Word * hlds__make_hlds__STATE_VARIABLE_Specs_36)
#line 111 "make_hlds.m"
{
#line 185 "make_hlds.m"
  {
#line 185 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;

#line 185 "make_hlds.m"
    {
#line 185 "make_hlds.m"
      hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_p_0(hlds__make_hlds__InstanceProcDefn_17, hlds__make_hlds__PredOrFunc_18, hlds__make_hlds__PredArity_19, hlds__make_hlds__ArgTypes_20, hlds__make_hlds__Markers_21, hlds__make_hlds__Context_22, hlds__make_hlds__Status_23, hlds__make_hlds__ClausesInfo_24, hlds__make_hlds__STATE_VARIABLE_TVarSet_0_29, hlds__make_hlds__STATE_VARIABLE_TVarSet_30, hlds__make_hlds__STATE_VARIABLE_ModuleInfo_0_31, hlds__make_hlds__STATE_VARIABLE_ModuleInfo_32, hlds__make_hlds__STATE_VARIABLE_QualInfo_0_33, hlds__make_hlds__STATE_VARIABLE_QualInfo_34, hlds__make_hlds__STATE_VARIABLE_Specs_0_35, hlds__make_hlds__STATE_VARIABLE_Specs_36);
#line 185 "make_hlds.m"
      return;
    }
#line 185 "make_hlds.m"
  }
#line 111 "make_hlds.m"
}

#line 103 "make_hlds.m"
void MR_CALL 
hlds__make_hlds__add_special_pred_decl_for_real_8_p_0(
#line 103 "make_hlds.m"
  MR_Word hlds__make_hlds__SpecialPredId_9,
#line 103 "make_hlds.m"
  MR_Word hlds__make_hlds__TVarSet_10,
#line 103 "make_hlds.m"
  MR_Word hlds__make_hlds__Type_11,
#line 103 "make_hlds.m"
  MR_Word hlds__make_hlds__TypeCtor_12,
#line 103 "make_hlds.m"
  MR_Word hlds__make_hlds__Context_13,
#line 103 "make_hlds.m"
  MR_Word hlds__make_hlds__Status0_14,
#line 103 "make_hlds.m"
  MR_Word hlds__make_hlds__STATE_VARIABLE_ModuleInfo_0_16,
#line 103 "make_hlds.m"
  MR_Word * hlds__make_hlds__STATE_VARIABLE_ModuleInfo_17)
#line 103 "make_hlds.m"
{
#line 179 "make_hlds.m"
  {
#line 179 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;

#line 179 "make_hlds.m"
    {
#line 179 "make_hlds.m"
      hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_p_0(hlds__make_hlds__SpecialPredId_9, hlds__make_hlds__TVarSet_10, hlds__make_hlds__Type_11, hlds__make_hlds__TypeCtor_12, hlds__make_hlds__Context_13, hlds__make_hlds__Status0_14, hlds__make_hlds__STATE_VARIABLE_ModuleInfo_0_16, hlds__make_hlds__STATE_VARIABLE_ModuleInfo_17);
#line 179 "make_hlds.m"
      return;
    }
#line 179 "make_hlds.m"
  }
#line 103 "make_hlds.m"
}

#line 91 "make_hlds.m"
void MR_CALL 
hlds__make_hlds__add_special_pred_for_real_9_p_0(
#line 91 "make_hlds.m"
  MR_Word hlds__make_hlds__SpecialPredId_10,
#line 91 "make_hlds.m"
  MR_Word hlds__make_hlds__TVarSet_11,
#line 91 "make_hlds.m"
  MR_Word hlds__make_hlds__Type0_12,
#line 91 "make_hlds.m"
  MR_Word hlds__make_hlds__TypeCtor_13,
#line 91 "make_hlds.m"
  MR_Word hlds__make_hlds__TypeBody_14,
#line 91 "make_hlds.m"
  MR_Word hlds__make_hlds__Context_15,
#line 91 "make_hlds.m"
  MR_Word hlds__make_hlds__Status0_16,
#line 91 "make_hlds.m"
  MR_Word hlds__make_hlds__STATE_VARIABLE_ModuleInfo_0_18,
#line 91 "make_hlds.m"
  MR_Word * hlds__make_hlds__STATE_VARIABLE_ModuleInfo_19)
#line 91 "make_hlds.m"
{
#line 174 "make_hlds.m"
  {
#line 174 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;

#line 174 "make_hlds.m"
    {
#line 174 "make_hlds.m"
      hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(hlds__make_hlds__SpecialPredId_10, hlds__make_hlds__TVarSet_11, hlds__make_hlds__Type0_12, hlds__make_hlds__TypeCtor_13, hlds__make_hlds__TypeBody_14, hlds__make_hlds__Context_15, hlds__make_hlds__Status0_16, hlds__make_hlds__STATE_VARIABLE_ModuleInfo_0_18, hlds__make_hlds__STATE_VARIABLE_ModuleInfo_19);
#line 174 "make_hlds.m"
      return;
    }
#line 174 "make_hlds.m"
  }
#line 91 "make_hlds.m"
}

#line 76 "make_hlds.m"
void MR_CALL 
hlds__make_hlds__add_new_proc_13_p_0(
#line 76 "make_hlds.m"
  MR_Word hlds__make_hlds__InstVarSet_14,
#line 76 "make_hlds.m"
  MR_Integer hlds__make_hlds__Arity_15,
#line 76 "make_hlds.m"
  MR_Word hlds__make_hlds__ArgModes_16,
#line 76 "make_hlds.m"
  MR_Word hlds__make_hlds__MaybeDeclaredArgModes_17,
#line 76 "make_hlds.m"
  MR_Word hlds__make_hlds__MaybeArgLives_18,
#line 76 "make_hlds.m"
  MR_Word hlds__make_hlds__DetismDecl_19,
#line 76 "make_hlds.m"
  MR_Word hlds__make_hlds__MaybeDet_20,
#line 76 "make_hlds.m"
  MR_Word hlds__make_hlds__Context_21,
#line 76 "make_hlds.m"
  MR_Word hlds__make_hlds__IsAddressTaken_22,
#line 76 "make_hlds.m"
  MR_Word hlds__make_hlds__HasParallelConj_23,
#line 76 "make_hlds.m"
  MR_Word hlds__make_hlds__PredInfo0_24,
#line 76 "make_hlds.m"
  MR_Word * hlds__make_hlds__PredInfo_25,
#line 76 "make_hlds.m"
  MR_Integer * hlds__make_hlds__ModeId_26)
#line 76 "make_hlds.m"
{
#line 168 "make_hlds.m"
  {
#line 168 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;

#line 168 "make_hlds.m"
    {
#line 168 "make_hlds.m"
      hlds__make_hlds__add_pred__do_add_new_proc_13_p_0(hlds__make_hlds__InstVarSet_14, hlds__make_hlds__Arity_15, hlds__make_hlds__ArgModes_16, hlds__make_hlds__MaybeDeclaredArgModes_17, hlds__make_hlds__MaybeArgLives_18, hlds__make_hlds__DetismDecl_19, hlds__make_hlds__MaybeDet_20, hlds__make_hlds__Context_21, hlds__make_hlds__IsAddressTaken_22, hlds__make_hlds__HasParallelConj_23, hlds__make_hlds__PredInfo0_24, hlds__make_hlds__PredInfo_25, hlds__make_hlds__ModeId_26);
#line 168 "make_hlds.m"
      return;
    }
#line 168 "make_hlds.m"
  }
#line 76 "make_hlds.m"
}

#line 71 "make_hlds.m"
void MR_CALL 
hlds__make_hlds__parse_tree_to_hlds_11_p_0(
#line 71 "make_hlds.m"
  MR_Word hlds__make_hlds__AugCompilationUnit_12,
#line 71 "make_hlds.m"
  MR_Word hlds__make_hlds__Globals_13,
#line 71 "make_hlds.m"
  MR_String hlds__make_hlds__DumpBaseFileName_14,
#line 71 "make_hlds.m"
  MR_Word hlds__make_hlds__MQInfo0_15,
#line 71 "make_hlds.m"
  MR_Word hlds__make_hlds__TypeEqvMap_16,
#line 71 "make_hlds.m"
  MR_Word hlds__make_hlds__UsedModules_17,
#line 71 "make_hlds.m"
  MR_Word * hlds__make_hlds__QualInfo_18,
#line 71 "make_hlds.m"
  MR_Word * hlds__make_hlds__FoundInvalidType_19,
#line 71 "make_hlds.m"
  MR_Word * hlds__make_hlds__FoundInvalidMode_20,
#line 71 "make_hlds.m"
  MR_Word * hlds__make_hlds__ModuleInfo_21,
#line 71 "make_hlds.m"
  MR_Word * hlds__make_hlds__Specs_22)
#line 71 "make_hlds.m"
{
#line 161 "make_hlds.m"
  {
#line 161 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;

#line 161 "make_hlds.m"
    {
#line 161 "make_hlds.m"
      hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0(hlds__make_hlds__AugCompilationUnit_12, hlds__make_hlds__Globals_13, hlds__make_hlds__DumpBaseFileName_14, hlds__make_hlds__MQInfo0_15, hlds__make_hlds__TypeEqvMap_16, hlds__make_hlds__UsedModules_17, hlds__make_hlds__QualInfo_18, hlds__make_hlds__FoundInvalidType_19, hlds__make_hlds__FoundInvalidMode_20, hlds__make_hlds__ModuleInfo_21, hlds__make_hlds__Specs_22);
#line 161 "make_hlds.m"
      return;
    }
#line 161 "make_hlds.m"
  }
#line 71 "make_hlds.m"
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
	MR_register_type_ctor_info(&hlds__make_hlds__hlds__make_hlds__type_ctor_info_make_hlds_qual_info_0);
}

void mercury__hlds__make_hlds__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.make_hlds. */
