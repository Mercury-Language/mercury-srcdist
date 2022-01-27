/*
** Automatically generated from `make_hlds.m'
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
#include "tree_bitset.mih"
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
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 245 "hlds.make_hlds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_inst_or_mode_0_0 = {
  (MR_String) "did_not_find_invalid_inst_or_mode",
  (MR_Integer) 0
};

#line 251 "hlds.make_hlds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_inst_or_mode_0_1 = {
  (MR_String) "found_invalid_inst_or_mode",
  (MR_Integer) 1
};

#line 257 "hlds.make_hlds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__hlds__make_hlds__enum_value_ordered_found_invalid_inst_or_mode_0[2] = {
  &hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_inst_or_mode_0_0,
  &hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_inst_or_mode_0_1
};

#line 263 "hlds.make_hlds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__hlds__make_hlds__enum_name_ordered_found_invalid_inst_or_mode_0[2] = {
  &hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_inst_or_mode_0_0,
  &hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_inst_or_mode_0_1
};

#line 269 "hlds.make_hlds.c"
static const MR_Integer hlds__make_hlds__hlds__make_hlds__functor_number_map_found_invalid_inst_or_mode_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 275 "hlds.make_hlds.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_inst_or_mode_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds____Unify____found_invalid_inst_or_mode_0_0_10001)),
  ((MR_Box) (hlds__make_hlds____Compare____found_invalid_inst_or_mode_0_0_10001)),
  (MR_String) "hlds.make_hlds",
  (MR_String) "found_invalid_inst_or_mode",
  {
    hlds__make_hlds__hlds__make_hlds__enum_name_ordered_found_invalid_inst_or_mode_0
  },
  {
    hlds__make_hlds__hlds__make_hlds__enum_value_ordered_found_invalid_inst_or_mode_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__make_hlds__hlds__make_hlds__functor_number_map_found_invalid_inst_or_mode_0
};

#line 296 "hlds.make_hlds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_type_0_0 = {
  (MR_String) "did_not_find_invalid_type",
  (MR_Integer) 0
};

#line 302 "hlds.make_hlds.c"
static const MR_EnumFunctorDesc hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_type_0_1 = {
  (MR_String) "found_invalid_type",
  (MR_Integer) 1
};

#line 308 "hlds.make_hlds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__hlds__make_hlds__enum_value_ordered_found_invalid_type_0[2] = {
  &hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_type_0_0,
  &hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_type_0_1
};

#line 314 "hlds.make_hlds.c"
static const MR_EnumFunctorDescPtr hlds__make_hlds__hlds__make_hlds__enum_name_ordered_found_invalid_type_0[2] = {
  &hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_type_0_0,
  &hlds__make_hlds__hlds__make_hlds__enum_functor_desc_found_invalid_type_0_1
};

#line 320 "hlds.make_hlds.c"
static const MR_Integer hlds__make_hlds__hlds__make_hlds__functor_number_map_found_invalid_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 326 "hlds.make_hlds.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__hlds__make_hlds__type_ctor_info_found_invalid_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (hlds__make_hlds____Unify____found_invalid_type_0_0_10001)),
  ((MR_Box) (hlds__make_hlds____Compare____found_invalid_type_0_0_10001)),
  (MR_String) "hlds.make_hlds",
  (MR_String) "found_invalid_type",
  {
    hlds__make_hlds__hlds__make_hlds__enum_name_ordered_found_invalid_type_0
  },
  {
    hlds__make_hlds__hlds__make_hlds__enum_value_ordered_found_invalid_type_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  hlds__make_hlds__hlds__make_hlds__functor_number_map_found_invalid_type_0
};

#line 347 "hlds.make_hlds.c"
const MR_TypeCtorInfo_Struct hlds__make_hlds__hlds__make_hlds__type_ctor_info_make_hlds_qual_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (hlds__make_hlds____Unify____make_hlds_qual_info_0_0_10001)),
  ((MR_Box) (hlds__make_hlds____Compare____make_hlds_qual_info_0_0_10001)),
  (MR_String) "hlds.make_hlds",
  (MR_String) "make_hlds_qual_info",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &hlds__make_hlds__qual_info__hlds__make_hlds__qual_info__type_ctor_info_qual_info_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 368 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____found_invalid_inst_or_mode_0_0_10001(
#line 371 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 373 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2)
#line 375 "hlds.make_hlds.c"
{
#line 377 "hlds.make_hlds.c"
  {
#line 379 "hlds.make_hlds.c"
    MR_bool hlds__make_hlds__succeeded;

#line 382 "hlds.make_hlds.c"
    {
#line 384 "hlds.make_hlds.c"
      hlds__make_hlds__succeeded = hlds__make_hlds____Unify____found_invalid_inst_or_mode_0_0(((MR_Word) hlds__make_hlds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__wrapper_arg_2));
    }
#line 387 "hlds.make_hlds.c"
    return hlds__make_hlds__succeeded;
#line 389 "hlds.make_hlds.c"
  }
#line 391 "hlds.make_hlds.c"
}

#line 394 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____found_invalid_inst_or_mode_0_0_10001(
#line 397 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_1,
#line 399 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 401 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3)
#line 403 "hlds.make_hlds.c"
{
#line 405 "hlds.make_hlds.c"
  {
#line 407 "hlds.make_hlds.c"
    MR_Word hlds__make_hlds__conv0_HeadVar__1_1;

#line 410 "hlds.make_hlds.c"
    {
#line 412 "hlds.make_hlds.c"
      hlds__make_hlds____Compare____found_invalid_inst_or_mode_0_0(&hlds__make_hlds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__wrapper_arg_3));
    }
#line 415 "hlds.make_hlds.c"
    *hlds__make_hlds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__conv0_HeadVar__1_1));
#line 417 "hlds.make_hlds.c"
  }
#line 419 "hlds.make_hlds.c"
}

#line 422 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____found_invalid_type_0_0_10001(
#line 425 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 427 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2)
#line 429 "hlds.make_hlds.c"
{
#line 431 "hlds.make_hlds.c"
  {
#line 433 "hlds.make_hlds.c"
    MR_bool hlds__make_hlds__succeeded;

#line 436 "hlds.make_hlds.c"
    {
#line 438 "hlds.make_hlds.c"
      hlds__make_hlds__succeeded = hlds__make_hlds____Unify____found_invalid_type_0_0(((MR_Word) hlds__make_hlds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__wrapper_arg_2));
    }
#line 441 "hlds.make_hlds.c"
    return hlds__make_hlds__succeeded;
#line 443 "hlds.make_hlds.c"
  }
#line 445 "hlds.make_hlds.c"
}

#line 448 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____found_invalid_type_0_0_10001(
#line 451 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_1,
#line 453 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 455 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3)
#line 457 "hlds.make_hlds.c"
{
#line 459 "hlds.make_hlds.c"
  {
#line 461 "hlds.make_hlds.c"
    MR_Word hlds__make_hlds__conv0_HeadVar__1_1;

#line 464 "hlds.make_hlds.c"
    {
#line 466 "hlds.make_hlds.c"
      hlds__make_hlds____Compare____found_invalid_type_0_0(&hlds__make_hlds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__wrapper_arg_3));
    }
#line 469 "hlds.make_hlds.c"
    *hlds__make_hlds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__conv0_HeadVar__1_1));
#line 471 "hlds.make_hlds.c"
  }
#line 473 "hlds.make_hlds.c"
}

#line 476 "hlds.make_hlds.c"
static MR_bool MR_CALL 
hlds__make_hlds____Unify____make_hlds_qual_info_0_0_10001(
#line 479 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_1,
#line 481 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2)
#line 483 "hlds.make_hlds.c"
{
#line 485 "hlds.make_hlds.c"
  {
#line 487 "hlds.make_hlds.c"
    MR_bool hlds__make_hlds__succeeded;

#line 490 "hlds.make_hlds.c"
    {
#line 492 "hlds.make_hlds.c"
      hlds__make_hlds__succeeded = hlds__make_hlds____Unify____make_hlds_qual_info_0_0(((MR_Word) hlds__make_hlds__wrapper_arg_1), ((MR_Word) hlds__make_hlds__wrapper_arg_2));
    }
#line 495 "hlds.make_hlds.c"
    return hlds__make_hlds__succeeded;
#line 497 "hlds.make_hlds.c"
  }
#line 499 "hlds.make_hlds.c"
}

#line 502 "hlds.make_hlds.c"
static void MR_CALL 
hlds__make_hlds____Compare____make_hlds_qual_info_0_0_10001(
#line 505 "hlds.make_hlds.c"
  MR_Box * hlds__make_hlds__wrapper_arg_1,
#line 507 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_2,
#line 509 "hlds.make_hlds.c"
  MR_Box hlds__make_hlds__wrapper_arg_3)
#line 511 "hlds.make_hlds.c"
{
#line 513 "hlds.make_hlds.c"
  {
#line 515 "hlds.make_hlds.c"
    MR_Word hlds__make_hlds__conv0_HeadVar__1_1;

#line 518 "hlds.make_hlds.c"
    {
#line 520 "hlds.make_hlds.c"
      hlds__make_hlds____Compare____make_hlds_qual_info_0_0(&hlds__make_hlds__conv0_HeadVar__1_1, ((MR_Word) hlds__make_hlds__wrapper_arg_2), ((MR_Word) hlds__make_hlds__wrapper_arg_3));
    }
#line 523 "hlds.make_hlds.c"
    *hlds__make_hlds__wrapper_arg_1 = ((MR_Box) (hlds__make_hlds__conv0_HeadVar__1_1));
#line 525 "hlds.make_hlds.c"
  }
#line 527 "hlds.make_hlds.c"
}

#line 153 "make_hlds.m"
void MR_CALL 
hlds__make_hlds____Compare____make_hlds_qual_info_0_0(
#line 153 "make_hlds.m"
  MR_Word * hlds__make_hlds__HeadVar__1_1,
#line 153 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_2,
#line 153 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__3_3)
#line 153 "make_hlds.m"
{
#line 153 "make_hlds.m"
  {
#line 153 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;
#line 153 "make_hlds.m"
    MR_Word hlds__make_hlds__Cast_HeadVar1_4 = hlds__make_hlds__HeadVar__2_2;
#line 153 "make_hlds.m"
    MR_Word hlds__make_hlds__Cast_HeadVar2_5 = hlds__make_hlds__HeadVar__3_3;

#line 153 "make_hlds.m"
    {
#line 153 "make_hlds.m"
      hlds__make_hlds__qual_info____Compare____qual_info_0_0(hlds__make_hlds__HeadVar__1_1, hlds__make_hlds__Cast_HeadVar1_4, hlds__make_hlds__Cast_HeadVar2_5);
#line 153 "make_hlds.m"
      return;
    }
#line 153 "make_hlds.m"
  }
#line 153 "make_hlds.m"
}

#line 153 "make_hlds.m"
MR_bool MR_CALL 
hlds__make_hlds____Unify____make_hlds_qual_info_0_0(
#line 153 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__1_1,
#line 153 "make_hlds.m"
  MR_Word hlds__make_hlds__HeadVar__2_2)
#line 153 "make_hlds.m"
{
#line 153 "make_hlds.m"
  {
#line 153 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;
#line 153 "make_hlds.m"
    MR_Word hlds__make_hlds__Cast_HeadVar1_3 = hlds__make_hlds__HeadVar__1_1;
#line 153 "make_hlds.m"
    MR_Word hlds__make_hlds__Cast_HeadVar2_4 = hlds__make_hlds__HeadVar__2_2;

#line 153 "make_hlds.m"
    {
#line 153 "make_hlds.m"
      return hlds__make_hlds__succeeded = hlds__make_hlds__qual_info____Unify____qual_info_0_0(hlds__make_hlds__Cast_HeadVar1_3, hlds__make_hlds__Cast_HeadVar2_4);
    }
#line 153 "make_hlds.m"
    return hlds__make_hlds__succeeded;
#line 153 "make_hlds.m"
  }
#line 153 "make_hlds.m"
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
#line 49 "make_hlds.m"
      return;
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
#line 633 "hlds.make_hlds.c"
  {
#line 635 "hlds.make_hlds.c"
    MR_bool hlds__make_hlds__succeeded = (hlds__make_hlds__HeadVar__2_1 == hlds__make_hlds__HeadVar__2_2);

#line 638 "hlds.make_hlds.c"
    return hlds__make_hlds__succeeded;
#line 640 "hlds.make_hlds.c"
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
#line 53 "make_hlds.m"
      return;
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
#line 686 "hlds.make_hlds.c"
  {
#line 688 "hlds.make_hlds.c"
    MR_bool hlds__make_hlds__succeeded = (hlds__make_hlds__HeadVar__2_1 == hlds__make_hlds__HeadVar__2_2);

#line 691 "hlds.make_hlds.c"
    return hlds__make_hlds__succeeded;
#line 693 "hlds.make_hlds.c"
  }
#line 53 "make_hlds.m"
}

#line 118 "make_hlds.m"
void MR_CALL 
hlds__make_hlds__set_module_recomp_info_3_p_0(
#line 118 "make_hlds.m"
  MR_Word hlds__make_hlds__QualInfo_4,
#line 118 "make_hlds.m"
  MR_Word hlds__make_hlds__STATE_VARIABLE_ModuleInfo_0_6,
#line 118 "make_hlds.m"
  MR_Word * hlds__make_hlds__STATE_VARIABLE_ModuleInfo_7)
#line 118 "make_hlds.m"
{
#line 187 "make_hlds.m"
  {
#line 187 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;

#line 187 "make_hlds.m"
    {
#line 187 "make_hlds.m"
      hlds__make_hlds__qual_info__set_module_recompilation_info_3_p_0(hlds__make_hlds__QualInfo_4, hlds__make_hlds__STATE_VARIABLE_ModuleInfo_0_6, hlds__make_hlds__STATE_VARIABLE_ModuleInfo_7);
#line 187 "make_hlds.m"
      return;
    }
#line 187 "make_hlds.m"
  }
#line 118 "make_hlds.m"
}

#line 108 "make_hlds.m"
void MR_CALL 
hlds__make_hlds__produce_instance_method_clauses_16_p_0(
#line 108 "make_hlds.m"
  MR_Word hlds__make_hlds__InstanceProcDefn_17,
#line 108 "make_hlds.m"
  MR_Word hlds__make_hlds__PredOrFunc_18,
#line 108 "make_hlds.m"
  MR_Integer hlds__make_hlds__PredArity_19,
#line 108 "make_hlds.m"
  MR_Word hlds__make_hlds__ArgTypes_20,
#line 108 "make_hlds.m"
  MR_Word hlds__make_hlds__Markers_21,
#line 108 "make_hlds.m"
  MR_Word hlds__make_hlds__Context_22,
#line 108 "make_hlds.m"
  MR_Word hlds__make_hlds__Status_23,
#line 108 "make_hlds.m"
  MR_Word * hlds__make_hlds__ClausesInfo_24,
#line 108 "make_hlds.m"
  MR_Word hlds__make_hlds__STATE_VARIABLE_TVarSet_0_29,
#line 108 "make_hlds.m"
  MR_Word * hlds__make_hlds__STATE_VARIABLE_TVarSet_30,
#line 108 "make_hlds.m"
  MR_Word hlds__make_hlds__STATE_VARIABLE_ModuleInfo_0_31,
#line 108 "make_hlds.m"
  MR_Word * hlds__make_hlds__STATE_VARIABLE_ModuleInfo_32,
#line 108 "make_hlds.m"
  MR_Word hlds__make_hlds__STATE_VARIABLE_QualInfo_0_33,
#line 108 "make_hlds.m"
  MR_Word * hlds__make_hlds__STATE_VARIABLE_QualInfo_34,
#line 108 "make_hlds.m"
  MR_Word hlds__make_hlds__STATE_VARIABLE_Specs_0_35,
#line 108 "make_hlds.m"
  MR_Word * hlds__make_hlds__STATE_VARIABLE_Specs_36)
#line 108 "make_hlds.m"
{
#line 182 "make_hlds.m"
  {
#line 182 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;

#line 182 "make_hlds.m"
    {
#line 182 "make_hlds.m"
      hlds__make_hlds__add_class__do_produce_instance_method_clauses_16_p_0(hlds__make_hlds__InstanceProcDefn_17, hlds__make_hlds__PredOrFunc_18, hlds__make_hlds__PredArity_19, hlds__make_hlds__ArgTypes_20, hlds__make_hlds__Markers_21, hlds__make_hlds__Context_22, hlds__make_hlds__Status_23, hlds__make_hlds__ClausesInfo_24, hlds__make_hlds__STATE_VARIABLE_TVarSet_0_29, hlds__make_hlds__STATE_VARIABLE_TVarSet_30, hlds__make_hlds__STATE_VARIABLE_ModuleInfo_0_31, hlds__make_hlds__STATE_VARIABLE_ModuleInfo_32, hlds__make_hlds__STATE_VARIABLE_QualInfo_0_33, hlds__make_hlds__STATE_VARIABLE_QualInfo_34, hlds__make_hlds__STATE_VARIABLE_Specs_0_35, hlds__make_hlds__STATE_VARIABLE_Specs_36);
#line 182 "make_hlds.m"
      return;
    }
#line 182 "make_hlds.m"
  }
#line 108 "make_hlds.m"
}

#line 100 "make_hlds.m"
void MR_CALL 
hlds__make_hlds__add_special_pred_decl_for_real_8_p_0(
#line 100 "make_hlds.m"
  MR_Word hlds__make_hlds__SpecialPredId_9,
#line 100 "make_hlds.m"
  MR_Word hlds__make_hlds__TVarSet_10,
#line 100 "make_hlds.m"
  MR_Word hlds__make_hlds__Type_11,
#line 100 "make_hlds.m"
  MR_Word hlds__make_hlds__TypeCtor_12,
#line 100 "make_hlds.m"
  MR_Word hlds__make_hlds__Context_13,
#line 100 "make_hlds.m"
  MR_Word hlds__make_hlds__Status0_14,
#line 100 "make_hlds.m"
  MR_Word hlds__make_hlds__STATE_VARIABLE_ModuleInfo_0_16,
#line 100 "make_hlds.m"
  MR_Word * hlds__make_hlds__STATE_VARIABLE_ModuleInfo_17)
#line 100 "make_hlds.m"
{
#line 176 "make_hlds.m"
  {
#line 176 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;

#line 176 "make_hlds.m"
    {
#line 176 "make_hlds.m"
      hlds__make_hlds__add_special_pred__do_add_special_pred_decl_for_real_8_p_0(hlds__make_hlds__SpecialPredId_9, hlds__make_hlds__TVarSet_10, hlds__make_hlds__Type_11, hlds__make_hlds__TypeCtor_12, hlds__make_hlds__Context_13, hlds__make_hlds__Status0_14, hlds__make_hlds__STATE_VARIABLE_ModuleInfo_0_16, hlds__make_hlds__STATE_VARIABLE_ModuleInfo_17);
#line 176 "make_hlds.m"
      return;
    }
#line 176 "make_hlds.m"
  }
#line 100 "make_hlds.m"
}

#line 88 "make_hlds.m"
void MR_CALL 
hlds__make_hlds__add_special_pred_for_real_9_p_0(
#line 88 "make_hlds.m"
  MR_Word hlds__make_hlds__SpecialPredId_10,
#line 88 "make_hlds.m"
  MR_Word hlds__make_hlds__TVarSet_11,
#line 88 "make_hlds.m"
  MR_Word hlds__make_hlds__Type0_12,
#line 88 "make_hlds.m"
  MR_Word hlds__make_hlds__TypeCtor_13,
#line 88 "make_hlds.m"
  MR_Word hlds__make_hlds__TypeBody_14,
#line 88 "make_hlds.m"
  MR_Word hlds__make_hlds__Context_15,
#line 88 "make_hlds.m"
  MR_Word hlds__make_hlds__Status0_16,
#line 88 "make_hlds.m"
  MR_Word hlds__make_hlds__STATE_VARIABLE_ModuleInfo_0_18,
#line 88 "make_hlds.m"
  MR_Word * hlds__make_hlds__STATE_VARIABLE_ModuleInfo_19)
#line 88 "make_hlds.m"
{
#line 171 "make_hlds.m"
  {
#line 171 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;

#line 171 "make_hlds.m"
    {
#line 171 "make_hlds.m"
      hlds__make_hlds__add_special_pred__do_add_special_pred_for_real_9_p_0(hlds__make_hlds__SpecialPredId_10, hlds__make_hlds__TVarSet_11, hlds__make_hlds__Type0_12, hlds__make_hlds__TypeCtor_13, hlds__make_hlds__TypeBody_14, hlds__make_hlds__Context_15, hlds__make_hlds__Status0_16, hlds__make_hlds__STATE_VARIABLE_ModuleInfo_0_18, hlds__make_hlds__STATE_VARIABLE_ModuleInfo_19);
#line 171 "make_hlds.m"
      return;
    }
#line 171 "make_hlds.m"
  }
#line 88 "make_hlds.m"
}

#line 73 "make_hlds.m"
void MR_CALL 
hlds__make_hlds__add_new_proc_13_p_0(
#line 73 "make_hlds.m"
  MR_Word hlds__make_hlds__InstVarSet_14,
#line 73 "make_hlds.m"
  MR_Integer hlds__make_hlds__Arity_15,
#line 73 "make_hlds.m"
  MR_Word hlds__make_hlds__ArgModes_16,
#line 73 "make_hlds.m"
  MR_Word hlds__make_hlds__MaybeDeclaredArgModes_17,
#line 73 "make_hlds.m"
  MR_Word hlds__make_hlds__MaybeArgLives_18,
#line 73 "make_hlds.m"
  MR_Word hlds__make_hlds__DetismDecl_19,
#line 73 "make_hlds.m"
  MR_Word hlds__make_hlds__MaybeDet_20,
#line 73 "make_hlds.m"
  MR_Word hlds__make_hlds__Context_21,
#line 73 "make_hlds.m"
  MR_Word hlds__make_hlds__IsAddressTaken_22,
#line 73 "make_hlds.m"
  MR_Word hlds__make_hlds__HasParallelConj_23,
#line 73 "make_hlds.m"
  MR_Word hlds__make_hlds__PredInfo0_24,
#line 73 "make_hlds.m"
  MR_Word * hlds__make_hlds__PredInfo_25,
#line 73 "make_hlds.m"
  MR_Integer * hlds__make_hlds__ModeId_26)
#line 73 "make_hlds.m"
{
#line 165 "make_hlds.m"
  {
#line 165 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;

#line 165 "make_hlds.m"
    {
#line 165 "make_hlds.m"
      hlds__make_hlds__add_pred__do_add_new_proc_13_p_0(hlds__make_hlds__InstVarSet_14, hlds__make_hlds__Arity_15, hlds__make_hlds__ArgModes_16, hlds__make_hlds__MaybeDeclaredArgModes_17, hlds__make_hlds__MaybeArgLives_18, hlds__make_hlds__DetismDecl_19, hlds__make_hlds__MaybeDet_20, hlds__make_hlds__Context_21, hlds__make_hlds__IsAddressTaken_22, hlds__make_hlds__HasParallelConj_23, hlds__make_hlds__PredInfo0_24, hlds__make_hlds__PredInfo_25, hlds__make_hlds__ModeId_26);
#line 165 "make_hlds.m"
      return;
    }
#line 165 "make_hlds.m"
  }
#line 73 "make_hlds.m"
}

#line 68 "make_hlds.m"
void MR_CALL 
hlds__make_hlds__parse_tree_to_hlds_11_p_0(
#line 68 "make_hlds.m"
  MR_Word hlds__make_hlds__Globals_12,
#line 68 "make_hlds.m"
  MR_String hlds__make_hlds__DumpBaseFileName_13,
#line 68 "make_hlds.m"
  MR_Word hlds__make_hlds__ParseTree_14,
#line 68 "make_hlds.m"
  MR_Word hlds__make_hlds__MQInfo0_15,
#line 68 "make_hlds.m"
  MR_Word hlds__make_hlds__EqvMap_16,
#line 68 "make_hlds.m"
  MR_Word hlds__make_hlds__UsedModules_17,
#line 68 "make_hlds.m"
  MR_Word * hlds__make_hlds__QualInfo_18,
#line 68 "make_hlds.m"
  MR_Word * hlds__make_hlds__FoundInvalidType_19,
#line 68 "make_hlds.m"
  MR_Word * hlds__make_hlds__FoundInvalidMode_20,
#line 68 "make_hlds.m"
  MR_Word * hlds__make_hlds__ModuleInfo_21,
#line 68 "make_hlds.m"
  MR_Word * hlds__make_hlds__Specs_22)
#line 68 "make_hlds.m"
{
#line 158 "make_hlds.m"
  {
#line 158 "make_hlds.m"
    MR_bool hlds__make_hlds__succeeded;

#line 158 "make_hlds.m"
    {
#line 158 "make_hlds.m"
      hlds__make_hlds__make_hlds_passes__do_parse_tree_to_hlds_11_p_0(hlds__make_hlds__Globals_12, hlds__make_hlds__DumpBaseFileName_13, hlds__make_hlds__ParseTree_14, hlds__make_hlds__MQInfo0_15, hlds__make_hlds__EqvMap_16, hlds__make_hlds__UsedModules_17, hlds__make_hlds__QualInfo_18, hlds__make_hlds__FoundInvalidType_19, hlds__make_hlds__FoundInvalidMode_20, hlds__make_hlds__ModuleInfo_21, hlds__make_hlds__Specs_22);
#line 158 "make_hlds.m"
      return;
    }
#line 158 "make_hlds.m"
  }
#line 68 "make_hlds.m"
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
