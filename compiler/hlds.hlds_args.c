/*
** Automatically generated from `hlds_args.m'
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


/* :- module hlds.hlds_args. */
/* :- implementation. */

/*
INIT mercury__hlds__hlds_args__init
ENDINIT
*/

#include "hlds.hlds_args.mih"


#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
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
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 98 "hlds.hlds_args.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_args__hlds__hlds_args__pti_proc_arg_vector_1__pseudo_1;

#line 101 "hlds.hlds_args.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_args__list__pti_list_1__pseudo_1;

#line 104 "hlds.hlds_args.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_args__maybe__pti_maybe_1__pseudo_1;

#line 107 "hlds.hlds_args.c"
static const MR_PseudoTypeInfo hlds__hlds_args__hlds__hlds_args__field_types_proc_arg_vector_1_0[8];

#line 110 "hlds.hlds_args.c"
static const MR_ConstString hlds__hlds_args__hlds__hlds_args__field_names_proc_arg_vector_1_0[8];

#line 113 "hlds.hlds_args.c"
static const MR_DuFunctorDesc hlds__hlds_args__hlds__hlds_args__du_functor_desc_proc_arg_vector_1_0;

#line 116 "hlds.hlds_args.c"
static const MR_DuFunctorDescPtr hlds__hlds_args__hlds__hlds_args__du_stag_ordered_proc_arg_vector_1_0[1];

#line 119 "hlds.hlds_args.c"
static const MR_DuPtagLayout hlds__hlds_args__hlds__hlds_args__du_ptag_ordered_proc_arg_vector_1[1];

#line 122 "hlds.hlds_args.c"
static const MR_DuFunctorDescPtr hlds__hlds_args__hlds__hlds_args__du_name_ordered_proc_arg_vector_1[1];

#line 125 "hlds.hlds_args.c"
static const MR_Integer hlds__hlds_args__hlds__hlds_args__functor_number_map_proc_arg_vector_1[1];

#line 128 "hlds.hlds_args.c"
static MR_bool MR_CALL 
hlds__hlds_args____Unify____poly_arg_vector_1_0_10001(
#line 131 "hlds.hlds_args.c"
  MR_Box hlds__hlds_args__wrapper_arg_1,
#line 133 "hlds.hlds_args.c"
  MR_Box hlds__hlds_args__wrapper_arg_2,
#line 135 "hlds.hlds_args.c"
  MR_Box hlds__hlds_args__wrapper_arg_3);

#line 138 "hlds.hlds_args.c"
static void MR_CALL 
hlds__hlds_args____Compare____poly_arg_vector_1_0_10001(
#line 141 "hlds.hlds_args.c"
  MR_Box hlds__hlds_args__wrapper_arg_1,
#line 143 "hlds.hlds_args.c"
  MR_Box * hlds__hlds_args__wrapper_arg_2,
#line 145 "hlds.hlds_args.c"
  MR_Box hlds__hlds_args__wrapper_arg_3,
#line 147 "hlds.hlds_args.c"
  MR_Box hlds__hlds_args__wrapper_arg_4);

#line 150 "hlds.hlds_args.c"
static MR_bool MR_CALL 
hlds__hlds_args____Unify____proc_arg_vector_1_0_10001(
#line 153 "hlds.hlds_args.c"
  MR_Box hlds__hlds_args__wrapper_arg_1,
#line 155 "hlds.hlds_args.c"
  MR_Box hlds__hlds_args__wrapper_arg_2,
#line 157 "hlds.hlds_args.c"
  MR_Box hlds__hlds_args__wrapper_arg_3);

#line 160 "hlds.hlds_args.c"
static void MR_CALL 
hlds__hlds_args____Compare____proc_arg_vector_1_0_10001(
#line 163 "hlds.hlds_args.c"
  MR_Box hlds__hlds_args__wrapper_arg_1,
#line 165 "hlds.hlds_args.c"
  MR_Box * hlds__hlds_args__wrapper_arg_2,
#line 167 "hlds.hlds_args.c"
  MR_Box hlds__hlds_args__wrapper_arg_3,
#line 169 "hlds.hlds_args.c"
  MR_Box hlds__hlds_args__wrapper_arg_4);


static /* final */ const MR_Box hlds__hlds_args_scalar_common_1[1][8];




static /* final */ const MR_Box hlds__hlds_args_scalar_common_1[1][8] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 201 "hlds.hlds_args.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_args__hlds__hlds_args__pti_proc_arg_vector_1__pseudo_1 = {
  &hlds__hlds_args__hlds__hlds_args__type_ctor_info_proc_arg_vector_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 209 "hlds.hlds_args.c"
const MR_TypeCtorInfo_Struct hlds__hlds_args__hlds__hlds_args__type_ctor_info_poly_arg_vector_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (hlds__hlds_args____Unify____poly_arg_vector_1_0_10001)),
  ((MR_Box) (hlds__hlds_args____Compare____poly_arg_vector_1_0_10001)),
  (MR_String) "hlds.hlds_args",
  (MR_String) "poly_arg_vector",
  {     NULL },
  {     (MR_PseudoTypeInfo) &hlds__hlds_args__hlds__hlds_args__pti_proc_arg_vector_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 226 "hlds.hlds_args.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_args__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 234 "hlds.hlds_args.c"
static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_args__maybe__pti_maybe_1__pseudo_1 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 242 "hlds.hlds_args.c"
static const MR_PseudoTypeInfo hlds__hlds_args__hlds__hlds_args__field_types_proc_arg_vector_1_0[8] = {
  (MR_PseudoTypeInfo) &hlds__hlds_args__list__pti_list_1__pseudo_1,
  (MR_PseudoTypeInfo) &hlds__hlds_args__list__pti_list_1__pseudo_1,
  (MR_PseudoTypeInfo) &hlds__hlds_args__list__pti_list_1__pseudo_1,
  (MR_PseudoTypeInfo) &hlds__hlds_args__list__pti_list_1__pseudo_1,
  (MR_PseudoTypeInfo) &hlds__hlds_args__list__pti_list_1__pseudo_1,
  (MR_PseudoTypeInfo) &hlds__hlds_args__list__pti_list_1__pseudo_1,
  (MR_PseudoTypeInfo) &hlds__hlds_args__list__pti_list_1__pseudo_1,
  (MR_PseudoTypeInfo) &hlds__hlds_args__maybe__pti_maybe_1__pseudo_1
};

#line 254 "hlds.hlds_args.c"
static const MR_ConstString hlds__hlds_args__hlds__hlds_args__field_names_proc_arg_vector_1_0[8] = {
  (MR_String) "pav_instance_type_infos",
  (MR_String) "pav_instance_typeclass_infos",
  (MR_String) "pav_univ_type_infos",
  (MR_String) "pav_exist_type_infos",
  (MR_String) "pav_univ_typeclass_infos",
  (MR_String) "pav_exist_typeclass_infos",
  (MR_String) "pav_user_args",
  (MR_String) "pav_maybe_ret_value"
};

#line 266 "hlds.hlds_args.c"
static const MR_DuFunctorDesc hlds__hlds_args__hlds__hlds_args__du_functor_desc_proc_arg_vector_1_0 = {
  (MR_String) "proc_arg_vector",
  (MR_Integer) 8,
  (MR_Integer) 255,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  hlds__hlds_args__hlds__hlds_args__field_types_proc_arg_vector_1_0,
  hlds__hlds_args__hlds__hlds_args__field_names_proc_arg_vector_1_0,
  NULL,
  NULL
};

#line 281 "hlds.hlds_args.c"
static const MR_DuFunctorDescPtr hlds__hlds_args__hlds__hlds_args__du_stag_ordered_proc_arg_vector_1_0[1] = {
  &hlds__hlds_args__hlds__hlds_args__du_functor_desc_proc_arg_vector_1_0
};

#line 286 "hlds.hlds_args.c"
static const MR_DuPtagLayout hlds__hlds_args__hlds__hlds_args__du_ptag_ordered_proc_arg_vector_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    hlds__hlds_args__hlds__hlds_args__du_stag_ordered_proc_arg_vector_1_0
  }
};

#line 295 "hlds.hlds_args.c"
static const MR_DuFunctorDescPtr hlds__hlds_args__hlds__hlds_args__du_name_ordered_proc_arg_vector_1[1] = {
  &hlds__hlds_args__hlds__hlds_args__du_functor_desc_proc_arg_vector_1_0
};

#line 300 "hlds.hlds_args.c"
static const MR_Integer hlds__hlds_args__hlds__hlds_args__functor_number_map_proc_arg_vector_1[1] = {
  (MR_Integer) 0
};

#line 305 "hlds.hlds_args.c"
const MR_TypeCtorInfo_Struct hlds__hlds_args__hlds__hlds_args__type_ctor_info_proc_arg_vector_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (hlds__hlds_args____Unify____proc_arg_vector_1_0_10001)),
  ((MR_Box) (hlds__hlds_args____Compare____proc_arg_vector_1_0_10001)),
  (MR_String) "hlds.hlds_args",
  (MR_String) "proc_arg_vector",
  {     hlds__hlds_args__hlds__hlds_args__du_name_ordered_proc_arg_vector_1 },
  {     hlds__hlds_args__hlds__hlds_args__du_ptag_ordered_proc_arg_vector_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  hlds__hlds_args__hlds__hlds_args__functor_number_map_proc_arg_vector_1
};

#line 322 "hlds.hlds_args.c"
static MR_bool MR_CALL 
hlds__hlds_args____Unify____poly_arg_vector_1_0_10001(
#line 325 "hlds.hlds_args.c"
  MR_Box hlds__hlds_args__wrapper_arg_1,
#line 327 "hlds.hlds_args.c"
  MR_Box hlds__hlds_args__wrapper_arg_2,
#line 329 "hlds.hlds_args.c"
  MR_Box hlds__hlds_args__wrapper_arg_3)
#line 331 "hlds.hlds_args.c"
{
#line 333 "hlds.hlds_args.c"
  {
#line 335 "hlds.hlds_args.c"
    MR_bool hlds__hlds_args__succeeded;

#line 338 "hlds.hlds_args.c"
    {
#line 340 "hlds.hlds_args.c"
      hlds__hlds_args__succeeded = hlds__hlds_args____Unify____poly_arg_vector_1_0(((MR_Word) hlds__hlds_args__wrapper_arg_1), ((MR_Word) hlds__hlds_args__wrapper_arg_2), ((MR_Word) hlds__hlds_args__wrapper_arg_3));
    }
#line 343 "hlds.hlds_args.c"
    return hlds__hlds_args__succeeded;
#line 345 "hlds.hlds_args.c"
  }
#line 347 "hlds.hlds_args.c"
}

#line 350 "hlds.hlds_args.c"
static void MR_CALL 
hlds__hlds_args____Compare____poly_arg_vector_1_0_10001(
#line 353 "hlds.hlds_args.c"
  MR_Box hlds__hlds_args__wrapper_arg_1,
#line 355 "hlds.hlds_args.c"
  MR_Box * hlds__hlds_args__wrapper_arg_2,
#line 357 "hlds.hlds_args.c"
  MR_Box hlds__hlds_args__wrapper_arg_3,
#line 359 "hlds.hlds_args.c"
  MR_Box hlds__hlds_args__wrapper_arg_4)
#line 361 "hlds.hlds_args.c"
{
#line 363 "hlds.hlds_args.c"
  {
#line 365 "hlds.hlds_args.c"
    MR_Word hlds__hlds_args__conv0_HeadVar__1_1;

#line 368 "hlds.hlds_args.c"
    {
#line 370 "hlds.hlds_args.c"
      hlds__hlds_args____Compare____poly_arg_vector_1_0(((MR_Word) hlds__hlds_args__wrapper_arg_1), &hlds__hlds_args__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_args__wrapper_arg_3), ((MR_Word) hlds__hlds_args__wrapper_arg_4));
    }
#line 373 "hlds.hlds_args.c"
    *hlds__hlds_args__wrapper_arg_2 = ((MR_Box) (hlds__hlds_args__conv0_HeadVar__1_1));
#line 375 "hlds.hlds_args.c"
  }
#line 377 "hlds.hlds_args.c"
}

#line 380 "hlds.hlds_args.c"
static MR_bool MR_CALL 
hlds__hlds_args____Unify____proc_arg_vector_1_0_10001(
#line 383 "hlds.hlds_args.c"
  MR_Box hlds__hlds_args__wrapper_arg_1,
#line 385 "hlds.hlds_args.c"
  MR_Box hlds__hlds_args__wrapper_arg_2,
#line 387 "hlds.hlds_args.c"
  MR_Box hlds__hlds_args__wrapper_arg_3)
#line 389 "hlds.hlds_args.c"
{
#line 391 "hlds.hlds_args.c"
  {
#line 393 "hlds.hlds_args.c"
    MR_bool hlds__hlds_args__succeeded;

#line 396 "hlds.hlds_args.c"
    {
#line 398 "hlds.hlds_args.c"
      hlds__hlds_args__succeeded = hlds__hlds_args____Unify____proc_arg_vector_1_0(((MR_Word) hlds__hlds_args__wrapper_arg_1), ((MR_Word) hlds__hlds_args__wrapper_arg_2), ((MR_Word) hlds__hlds_args__wrapper_arg_3));
    }
#line 401 "hlds.hlds_args.c"
    return hlds__hlds_args__succeeded;
#line 403 "hlds.hlds_args.c"
  }
#line 405 "hlds.hlds_args.c"
}

#line 408 "hlds.hlds_args.c"
static void MR_CALL 
hlds__hlds_args____Compare____proc_arg_vector_1_0_10001(
#line 411 "hlds.hlds_args.c"
  MR_Box hlds__hlds_args__wrapper_arg_1,
#line 413 "hlds.hlds_args.c"
  MR_Box * hlds__hlds_args__wrapper_arg_2,
#line 415 "hlds.hlds_args.c"
  MR_Box hlds__hlds_args__wrapper_arg_3,
#line 417 "hlds.hlds_args.c"
  MR_Box hlds__hlds_args__wrapper_arg_4)
#line 419 "hlds.hlds_args.c"
{
#line 421 "hlds.hlds_args.c"
  {
#line 423 "hlds.hlds_args.c"
    MR_Word hlds__hlds_args__conv0_HeadVar__1_1;

#line 426 "hlds.hlds_args.c"
    {
#line 428 "hlds.hlds_args.c"
      hlds__hlds_args____Compare____proc_arg_vector_1_0(((MR_Word) hlds__hlds_args__wrapper_arg_1), &hlds__hlds_args__conv0_HeadVar__1_1, ((MR_Word) hlds__hlds_args__wrapper_arg_3), ((MR_Word) hlds__hlds_args__wrapper_arg_4));
    }
#line 431 "hlds.hlds_args.c"
    *hlds__hlds_args__wrapper_arg_2 = ((MR_Box) (hlds__hlds_args__conv0_HeadVar__1_1));
#line 433 "hlds.hlds_args.c"
  }
#line 435 "hlds.hlds_args.c"
}

#line 234 "hlds_args.m"
void MR_CALL 
hlds__hlds_args____Compare____proc_arg_vector_1_0(
#line 234 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_29,
#line 234 "hlds_args.m"
  MR_Word * hlds__hlds_args__HeadVar__1_1,
#line 234 "hlds_args.m"
  MR_Word hlds__hlds_args__HeadVar__2_2,
#line 234 "hlds_args.m"
  MR_Word hlds__hlds_args__HeadVar__3_3)
#line 234 "hlds_args.m"
{
#line 234 "hlds_args.m"
  {
#line 234 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 234 "hlds_args.m"
    MR_Integer hlds__hlds_args__CastX_27 = (MR_Integer) hlds__hlds_args__HeadVar__2_2;
#line 234 "hlds_args.m"
    MR_Integer hlds__hlds_args__CastY_28 = (MR_Integer) hlds__hlds_args__HeadVar__3_3;

#line 234 "hlds_args.m"
    hlds__hlds_args__succeeded = (hlds__hlds_args__CastX_27 == hlds__hlds_args__CastY_28);
#line 234 "hlds_args.m"
    if (hlds__hlds_args__succeeded)
#line 464 "hlds.hlds_args.c"
      *hlds__hlds_args__HeadVar__1_1 = (MR_Integer) 0;
#line 234 "hlds_args.m"
    else
#line 234 "hlds_args.m"
      {
#line 234 "hlds_args.m"
        MR_Word hlds__hlds_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 0)));
#line 234 "hlds_args.m"
        MR_Word hlds__hlds_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 1)));
#line 234 "hlds_args.m"
        MR_Word hlds__hlds_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 2)));
#line 234 "hlds_args.m"
        MR_Word hlds__hlds_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 3)));
#line 234 "hlds_args.m"
        MR_Word hlds__hlds_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 4)));
#line 234 "hlds_args.m"
        MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 5)));
#line 234 "hlds_args.m"
        MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 6)));
#line 234 "hlds_args.m"
        MR_Word hlds__hlds_args__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 7)));
#line 234 "hlds_args.m"
        MR_Word hlds__hlds_args__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__3_3, (MR_Integer) 0)));
#line 234 "hlds_args.m"
        MR_Word hlds__hlds_args__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__3_3, (MR_Integer) 1)));
#line 234 "hlds_args.m"
        MR_Word hlds__hlds_args__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__3_3, (MR_Integer) 2)));
#line 234 "hlds_args.m"
        MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__3_3, (MR_Integer) 3)));
#line 234 "hlds_args.m"
        MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__3_3, (MR_Integer) 4)));
#line 234 "hlds_args.m"
        MR_Word hlds__hlds_args__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__3_3, (MR_Integer) 5)));
#line 234 "hlds_args.m"
        MR_Word hlds__hlds_args__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__3_3, (MR_Integer) 6)));
#line 234 "hlds_args.m"
        MR_Word hlds__hlds_args__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__3_3, (MR_Integer) 7)));
#line 234 "hlds_args.m"
        MR_Word hlds__hlds_args__V_20_20;

#line 234 "hlds_args.m"
        {
#line 234 "hlds_args.m"
          mercury__list____Compare____list_1_0(hlds__hlds_args__TypeInfo_for_T_29, &hlds__hlds_args__V_20_20, hlds__hlds_args__V_4_4, hlds__hlds_args__V_12_12);
        }
#line 510 "hlds.hlds_args.c"
        hlds__hlds_args__succeeded = (hlds__hlds_args__V_20_20 == (MR_Integer) 0);
#line 234 "hlds_args.m"
        hlds__hlds_args__succeeded = !(hlds__hlds_args__succeeded);
#line 234 "hlds_args.m"
        if (hlds__hlds_args__succeeded)
#line 234 "hlds_args.m"
          *hlds__hlds_args__HeadVar__1_1 = hlds__hlds_args__V_20_20;
#line 234 "hlds_args.m"
        else
#line 234 "hlds_args.m"
          {
#line 234 "hlds_args.m"
            MR_Word hlds__hlds_args__V_21_21;

#line 234 "hlds_args.m"
            {
#line 234 "hlds_args.m"
              mercury__list____Compare____list_1_0(hlds__hlds_args__TypeInfo_for_T_29, &hlds__hlds_args__V_21_21, hlds__hlds_args__V_5_5, hlds__hlds_args__V_13_13);
            }
#line 530 "hlds.hlds_args.c"
            hlds__hlds_args__succeeded = (hlds__hlds_args__V_21_21 == (MR_Integer) 0);
#line 234 "hlds_args.m"
            hlds__hlds_args__succeeded = !(hlds__hlds_args__succeeded);
#line 234 "hlds_args.m"
            if (hlds__hlds_args__succeeded)
#line 234 "hlds_args.m"
              *hlds__hlds_args__HeadVar__1_1 = hlds__hlds_args__V_21_21;
#line 234 "hlds_args.m"
            else
#line 234 "hlds_args.m"
              {
#line 234 "hlds_args.m"
                MR_Word hlds__hlds_args__V_22_22;

#line 234 "hlds_args.m"
                {
#line 234 "hlds_args.m"
                  mercury__list____Compare____list_1_0(hlds__hlds_args__TypeInfo_for_T_29, &hlds__hlds_args__V_22_22, hlds__hlds_args__V_6_6, hlds__hlds_args__V_14_14);
                }
#line 550 "hlds.hlds_args.c"
                hlds__hlds_args__succeeded = (hlds__hlds_args__V_22_22 == (MR_Integer) 0);
#line 234 "hlds_args.m"
                hlds__hlds_args__succeeded = !(hlds__hlds_args__succeeded);
#line 234 "hlds_args.m"
                if (hlds__hlds_args__succeeded)
#line 234 "hlds_args.m"
                  *hlds__hlds_args__HeadVar__1_1 = hlds__hlds_args__V_22_22;
#line 234 "hlds_args.m"
                else
#line 234 "hlds_args.m"
                  {
#line 234 "hlds_args.m"
                    MR_Word hlds__hlds_args__V_23_23;

#line 234 "hlds_args.m"
                    {
#line 234 "hlds_args.m"
                      mercury__list____Compare____list_1_0(hlds__hlds_args__TypeInfo_for_T_29, &hlds__hlds_args__V_23_23, hlds__hlds_args__V_7_7, hlds__hlds_args__V_15_15);
                    }
#line 570 "hlds.hlds_args.c"
                    hlds__hlds_args__succeeded = (hlds__hlds_args__V_23_23 == (MR_Integer) 0);
#line 234 "hlds_args.m"
                    hlds__hlds_args__succeeded = !(hlds__hlds_args__succeeded);
#line 234 "hlds_args.m"
                    if (hlds__hlds_args__succeeded)
#line 234 "hlds_args.m"
                      *hlds__hlds_args__HeadVar__1_1 = hlds__hlds_args__V_23_23;
#line 234 "hlds_args.m"
                    else
#line 234 "hlds_args.m"
                      {
#line 234 "hlds_args.m"
                        MR_Word hlds__hlds_args__V_24_24;

#line 234 "hlds_args.m"
                        {
#line 234 "hlds_args.m"
                          mercury__list____Compare____list_1_0(hlds__hlds_args__TypeInfo_for_T_29, &hlds__hlds_args__V_24_24, hlds__hlds_args__V_8_8, hlds__hlds_args__V_16_16);
                        }
#line 590 "hlds.hlds_args.c"
                        hlds__hlds_args__succeeded = (hlds__hlds_args__V_24_24 == (MR_Integer) 0);
#line 234 "hlds_args.m"
                        hlds__hlds_args__succeeded = !(hlds__hlds_args__succeeded);
#line 234 "hlds_args.m"
                        if (hlds__hlds_args__succeeded)
#line 234 "hlds_args.m"
                          *hlds__hlds_args__HeadVar__1_1 = hlds__hlds_args__V_24_24;
#line 234 "hlds_args.m"
                        else
#line 234 "hlds_args.m"
                          {
#line 234 "hlds_args.m"
                            MR_Word hlds__hlds_args__V_25_25;

#line 234 "hlds_args.m"
                            {
#line 234 "hlds_args.m"
                              mercury__list____Compare____list_1_0(hlds__hlds_args__TypeInfo_for_T_29, &hlds__hlds_args__V_25_25, hlds__hlds_args__V_9_9, hlds__hlds_args__V_17_17);
                            }
#line 610 "hlds.hlds_args.c"
                            hlds__hlds_args__succeeded = (hlds__hlds_args__V_25_25 == (MR_Integer) 0);
#line 234 "hlds_args.m"
                            hlds__hlds_args__succeeded = !(hlds__hlds_args__succeeded);
#line 234 "hlds_args.m"
                            if (hlds__hlds_args__succeeded)
#line 234 "hlds_args.m"
                              *hlds__hlds_args__HeadVar__1_1 = hlds__hlds_args__V_25_25;
#line 234 "hlds_args.m"
                            else
#line 234 "hlds_args.m"
                              {
#line 234 "hlds_args.m"
                                MR_Word hlds__hlds_args__V_26_26;

#line 234 "hlds_args.m"
                                {
#line 234 "hlds_args.m"
                                  mercury__list____Compare____list_1_0(hlds__hlds_args__TypeInfo_for_T_29, &hlds__hlds_args__V_26_26, hlds__hlds_args__V_10_10, hlds__hlds_args__V_18_18);
                                }
#line 630 "hlds.hlds_args.c"
                                hlds__hlds_args__succeeded = (hlds__hlds_args__V_26_26 == (MR_Integer) 0);
#line 234 "hlds_args.m"
                                hlds__hlds_args__succeeded = !(hlds__hlds_args__succeeded);
#line 234 "hlds_args.m"
                                if (hlds__hlds_args__succeeded)
#line 234 "hlds_args.m"
                                  *hlds__hlds_args__HeadVar__1_1 = hlds__hlds_args__V_26_26;
#line 234 "hlds_args.m"
                                else
#line 234 "hlds_args.m"
                                  {
#line 234 "hlds_args.m"
                                    mercury__maybe____Compare____maybe_1_0(hlds__hlds_args__TypeInfo_for_T_29, hlds__hlds_args__HeadVar__1_1, hlds__hlds_args__V_11_11, hlds__hlds_args__V_19_19);
                                  }
#line 234 "hlds_args.m"
                              }
#line 234 "hlds_args.m"
                          }
#line 234 "hlds_args.m"
                      }
#line 234 "hlds_args.m"
                  }
#line 234 "hlds_args.m"
              }
#line 234 "hlds_args.m"
          }
#line 234 "hlds_args.m"
      }
#line 234 "hlds_args.m"
  }
#line 234 "hlds_args.m"
}

#line 234 "hlds_args.m"
MR_bool MR_CALL 
hlds__hlds_args____Unify____proc_arg_vector_1_0(
#line 234 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_21,
#line 234 "hlds_args.m"
  MR_Word hlds__hlds_args__HeadVar__1_1,
#line 234 "hlds_args.m"
  MR_Word hlds__hlds_args__HeadVar__2_2)
#line 234 "hlds_args.m"
{
#line 234 "hlds_args.m"
  {
#line 234 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 234 "hlds_args.m"
    MR_Integer hlds__hlds_args__CastX_19 = (MR_Integer) hlds__hlds_args__HeadVar__1_1;
#line 234 "hlds_args.m"
    MR_Integer hlds__hlds_args__CastY_20 = (MR_Integer) hlds__hlds_args__HeadVar__2_2;

#line 234 "hlds_args.m"
    hlds__hlds_args__succeeded = (hlds__hlds_args__CastX_19 == hlds__hlds_args__CastY_20);
#line 234 "hlds_args.m"
    if (hlds__hlds_args__succeeded)
#line 234 "hlds_args.m"
      hlds__hlds_args__succeeded = MR_TRUE;
#line 234 "hlds_args.m"
    else
#line 234 "hlds_args.m"
      {
#line 234 "hlds_args.m"
        MR_Word hlds__hlds_args__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__1_1, (MR_Integer) 0)));
#line 234 "hlds_args.m"
        MR_Word hlds__hlds_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__1_1, (MR_Integer) 1)));
#line 234 "hlds_args.m"
        MR_Word hlds__hlds_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__1_1, (MR_Integer) 2)));
#line 234 "hlds_args.m"
        MR_Word hlds__hlds_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__1_1, (MR_Integer) 3)));
#line 234 "hlds_args.m"
        MR_Word hlds__hlds_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__1_1, (MR_Integer) 4)));
#line 234 "hlds_args.m"
        MR_Word hlds__hlds_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__1_1, (MR_Integer) 5)));
#line 234 "hlds_args.m"
        MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__1_1, (MR_Integer) 6)));
#line 234 "hlds_args.m"
        MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__1_1, (MR_Integer) 7)));
#line 234 "hlds_args.m"
        MR_Word hlds__hlds_args__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 0)));
#line 234 "hlds_args.m"
        MR_Word hlds__hlds_args__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 1)));
#line 234 "hlds_args.m"
        MR_Word hlds__hlds_args__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 2)));
#line 234 "hlds_args.m"
        MR_Word hlds__hlds_args__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 3)));
#line 234 "hlds_args.m"
        MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 4)));
#line 234 "hlds_args.m"
        MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 5)));
#line 234 "hlds_args.m"
        MR_Word hlds__hlds_args__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 6)));
#line 234 "hlds_args.m"
        MR_Word hlds__hlds_args__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__HeadVar__2_2, (MR_Integer) 7)));

#line 727 "hlds.hlds_args.c"
        {
#line 729 "hlds.hlds_args.c"
          hlds__hlds_args__succeeded = mercury__list____Unify____list_1_0(hlds__hlds_args__TypeInfo_for_T_21, hlds__hlds_args__V_3_3, hlds__hlds_args__V_11_11);
        }
#line 234 "hlds_args.m"
        if (hlds__hlds_args__succeeded)
#line 234 "hlds_args.m"
          {
#line 736 "hlds.hlds_args.c"
            {
#line 738 "hlds.hlds_args.c"
              hlds__hlds_args__succeeded = mercury__list____Unify____list_1_0(hlds__hlds_args__TypeInfo_for_T_21, hlds__hlds_args__V_4_4, hlds__hlds_args__V_12_12);
            }
#line 234 "hlds_args.m"
            if (hlds__hlds_args__succeeded)
#line 234 "hlds_args.m"
              {
#line 745 "hlds.hlds_args.c"
                {
#line 747 "hlds.hlds_args.c"
                  hlds__hlds_args__succeeded = mercury__list____Unify____list_1_0(hlds__hlds_args__TypeInfo_for_T_21, hlds__hlds_args__V_5_5, hlds__hlds_args__V_13_13);
                }
#line 234 "hlds_args.m"
                if (hlds__hlds_args__succeeded)
#line 234 "hlds_args.m"
                  {
#line 754 "hlds.hlds_args.c"
                    {
#line 756 "hlds.hlds_args.c"
                      hlds__hlds_args__succeeded = mercury__list____Unify____list_1_0(hlds__hlds_args__TypeInfo_for_T_21, hlds__hlds_args__V_6_6, hlds__hlds_args__V_14_14);
                    }
#line 234 "hlds_args.m"
                    if (hlds__hlds_args__succeeded)
#line 234 "hlds_args.m"
                      {
#line 763 "hlds.hlds_args.c"
                        {
#line 765 "hlds.hlds_args.c"
                          hlds__hlds_args__succeeded = mercury__list____Unify____list_1_0(hlds__hlds_args__TypeInfo_for_T_21, hlds__hlds_args__V_7_7, hlds__hlds_args__V_15_15);
                        }
#line 234 "hlds_args.m"
                        if (hlds__hlds_args__succeeded)
#line 234 "hlds_args.m"
                          {
#line 772 "hlds.hlds_args.c"
                            {
#line 774 "hlds.hlds_args.c"
                              hlds__hlds_args__succeeded = mercury__list____Unify____list_1_0(hlds__hlds_args__TypeInfo_for_T_21, hlds__hlds_args__V_8_8, hlds__hlds_args__V_16_16);
                            }
#line 234 "hlds_args.m"
                            if (hlds__hlds_args__succeeded)
#line 234 "hlds_args.m"
                              {
#line 781 "hlds.hlds_args.c"
                                {
#line 783 "hlds.hlds_args.c"
                                  hlds__hlds_args__succeeded = mercury__list____Unify____list_1_0(hlds__hlds_args__TypeInfo_for_T_21, hlds__hlds_args__V_9_9, hlds__hlds_args__V_17_17);
                                }
#line 234 "hlds_args.m"
                                if (hlds__hlds_args__succeeded)
#line 788 "hlds.hlds_args.c"
                                  {
#line 790 "hlds.hlds_args.c"
                                    hlds__hlds_args__succeeded = mercury__maybe____Unify____maybe_1_0(hlds__hlds_args__TypeInfo_for_T_21, hlds__hlds_args__V_10_10, hlds__hlds_args__V_18_18);
                                  }
#line 234 "hlds_args.m"
                              }
#line 234 "hlds_args.m"
                          }
#line 234 "hlds_args.m"
                      }
#line 234 "hlds_args.m"
                  }
#line 234 "hlds_args.m"
              }
#line 234 "hlds_args.m"
          }
#line 234 "hlds_args.m"
      }
#line 234 "hlds_args.m"
    return hlds__hlds_args__succeeded;
#line 234 "hlds_args.m"
  }
#line 234 "hlds_args.m"
}

#line 692 "hlds_args.m"
void MR_CALL 
hlds__hlds_args____Compare____poly_arg_vector_1_0(
#line 692 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_6,
#line 692 "hlds_args.m"
  MR_Word * hlds__hlds_args__HeadVar__1_1,
#line 692 "hlds_args.m"
  MR_Word hlds__hlds_args__HeadVar__2_2,
#line 692 "hlds_args.m"
  MR_Word hlds__hlds_args__HeadVar__3_3)
#line 692 "hlds_args.m"
{
#line 692 "hlds_args.m"
  {
#line 692 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 692 "hlds_args.m"
    MR_Word hlds__hlds_args__Cast_HeadVar1_4 = hlds__hlds_args__HeadVar__2_2;
#line 692 "hlds_args.m"
    MR_Word hlds__hlds_args__Cast_HeadVar2_5 = hlds__hlds_args__HeadVar__3_3;

#line 692 "hlds_args.m"
    {
#line 692 "hlds_args.m"
      hlds__hlds_args____Compare____proc_arg_vector_1_0(hlds__hlds_args__TypeInfo_for_T_6, hlds__hlds_args__HeadVar__1_1, hlds__hlds_args__Cast_HeadVar1_4, hlds__hlds_args__Cast_HeadVar2_5);
    }
#line 692 "hlds_args.m"
  }
#line 692 "hlds_args.m"
}

#line 692 "hlds_args.m"
MR_bool MR_CALL 
hlds__hlds_args____Unify____poly_arg_vector_1_0(
#line 692 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_5,
#line 692 "hlds_args.m"
  MR_Word hlds__hlds_args__HeadVar__1_1,
#line 692 "hlds_args.m"
  MR_Word hlds__hlds_args__HeadVar__2_2)
#line 692 "hlds_args.m"
{
#line 692 "hlds_args.m"
  {
#line 692 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 692 "hlds_args.m"
    MR_Word hlds__hlds_args__Cast_HeadVar1_3 = hlds__hlds_args__HeadVar__1_1;
#line 692 "hlds_args.m"
    MR_Word hlds__hlds_args__Cast_HeadVar2_4 = hlds__hlds_args__HeadVar__2_2;

#line 692 "hlds_args.m"
    {
#line 692 "hlds_args.m"
      hlds__hlds_args__succeeded = hlds__hlds_args____Unify____proc_arg_vector_1_0(hlds__hlds_args__TypeInfo_for_T_5, hlds__hlds_args__Cast_HeadVar1_3, hlds__hlds_args__Cast_HeadVar2_4);
    }
#line 692 "hlds_args.m"
    return hlds__hlds_args__succeeded;
#line 692 "hlds_args.m"
  }
#line 692 "hlds_args.m"
}

#line 216 "hlds_args.m"
MR_Word MR_CALL 
hlds__hlds_args__poly_arg_vector_to_list_1_f_0(
#line 216 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_4,
#line 216 "hlds_args.m"
  MR_Word hlds__hlds_args__V_3)
#line 216 "hlds_args.m"
{
#line 710 "hlds_args.m"
  {
#line 710 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 710 "hlds_args.m"
    MR_Word hlds__hlds_args__HeadVar__2_2;

#line 710 "hlds_args.m"
    {
#line 710 "hlds_args.m"
      hlds__hlds_args__HeadVar__2_2 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0(hlds__hlds_args__TypeInfo_for_T_4, hlds__hlds_args__V_3);
    }
#line 710 "hlds_args.m"
    return hlds__hlds_args__HeadVar__2_2;
#line 710 "hlds_args.m"
  }
#line 216 "hlds_args.m"
}

#line 208 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__poly_arg_vector_set_exist_typeclass_infos_3_p_0(
#line 208 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_9,
#line 208 "hlds_args.m"
  MR_Word hlds__hlds_args__ETCI_4,
#line 208 "hlds_args.m"
  MR_Word hlds__hlds_args__STATE_VARIABLE_A_0_6,
#line 208 "hlds_args.m"
  MR_Word * hlds__hlds_args__STATE_VARIABLE_A_7)
#line 208 "hlds_args.m"
{
#line 323 "hlds_args.m"
  {
#line 323 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 323 "hlds_args.m"
    MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 0)));
#line 323 "hlds_args.m"
    MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 1)));
#line 323 "hlds_args.m"
    MR_Word hlds__hlds_args__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 2)));
#line 323 "hlds_args.m"
    MR_Word hlds__hlds_args__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 3)));
#line 323 "hlds_args.m"
    MR_Word hlds__hlds_args__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 4)));
#line 323 "hlds_args.m"
    MR_Word hlds__hlds_args__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 6)));
#line 323 "hlds_args.m"
    MR_Word hlds__hlds_args__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 7)));
#line 323 "hlds_args.m"
    MR_Word hlds__hlds_args__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 5)));

#line 323 "hlds_args.m"
    {
#line 323 "hlds_args.m"
      MR_Word base;
#line 323 "hlds_args.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 323 "hlds_args.m"
      *hlds__hlds_args__STATE_VARIABLE_A_7 = base;
#line 323 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__V_15_15));
#line 323 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__V_16_16));
#line 323 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__V_17_17));
#line 323 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__V_18_18));
#line 323 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__V_19_19));
#line 323 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__ETCI_4));
#line 323 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__V_21_21));
#line 323 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__V_22_22));
#line 323 "hlds_args.m"
    }
#line 323 "hlds_args.m"
  }
#line 208 "hlds_args.m"
}

#line 206 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__poly_arg_vector_set_univ_typeclass_infos_3_p_0(
#line 206 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_9,
#line 206 "hlds_args.m"
  MR_Word hlds__hlds_args__UTCI_4,
#line 206 "hlds_args.m"
  MR_Word hlds__hlds_args__STATE_VARIABLE_A_0_6,
#line 206 "hlds_args.m"
  MR_Word * hlds__hlds_args__STATE_VARIABLE_A_7)
#line 206 "hlds_args.m"
{
#line 321 "hlds_args.m"
  {
#line 321 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 321 "hlds_args.m"
    MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 0)));
#line 321 "hlds_args.m"
    MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 1)));
#line 321 "hlds_args.m"
    MR_Word hlds__hlds_args__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 2)));
#line 321 "hlds_args.m"
    MR_Word hlds__hlds_args__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 3)));
#line 321 "hlds_args.m"
    MR_Word hlds__hlds_args__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 5)));
#line 321 "hlds_args.m"
    MR_Word hlds__hlds_args__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 6)));
#line 321 "hlds_args.m"
    MR_Word hlds__hlds_args__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 7)));
#line 321 "hlds_args.m"
    MR_Word hlds__hlds_args__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 4)));

#line 321 "hlds_args.m"
    {
#line 321 "hlds_args.m"
      MR_Word base;
#line 321 "hlds_args.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 321 "hlds_args.m"
      *hlds__hlds_args__STATE_VARIABLE_A_7 = base;
#line 321 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__V_15_15));
#line 321 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__V_16_16));
#line 321 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__V_17_17));
#line 321 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__V_18_18));
#line 321 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__UTCI_4));
#line 321 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__V_20_20));
#line 321 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__V_21_21));
#line 321 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__V_22_22));
#line 321 "hlds_args.m"
    }
#line 321 "hlds_args.m"
  }
#line 206 "hlds_args.m"
}

#line 204 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__poly_arg_vector_set_exist_type_infos_3_p_0(
#line 204 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_9,
#line 204 "hlds_args.m"
  MR_Word hlds__hlds_args__ETI_4,
#line 204 "hlds_args.m"
  MR_Word hlds__hlds_args__STATE_VARIABLE_A_0_6,
#line 204 "hlds_args.m"
  MR_Word * hlds__hlds_args__STATE_VARIABLE_A_7)
#line 204 "hlds_args.m"
{
#line 319 "hlds_args.m"
  {
#line 319 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 319 "hlds_args.m"
    MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 0)));
#line 319 "hlds_args.m"
    MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 1)));
#line 319 "hlds_args.m"
    MR_Word hlds__hlds_args__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 2)));
#line 319 "hlds_args.m"
    MR_Word hlds__hlds_args__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 4)));
#line 319 "hlds_args.m"
    MR_Word hlds__hlds_args__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 5)));
#line 319 "hlds_args.m"
    MR_Word hlds__hlds_args__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 6)));
#line 319 "hlds_args.m"
    MR_Word hlds__hlds_args__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 7)));
#line 319 "hlds_args.m"
    MR_Word hlds__hlds_args__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 3)));

#line 319 "hlds_args.m"
    {
#line 319 "hlds_args.m"
      MR_Word base;
#line 319 "hlds_args.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 319 "hlds_args.m"
      *hlds__hlds_args__STATE_VARIABLE_A_7 = base;
#line 319 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__V_15_15));
#line 319 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__V_16_16));
#line 319 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__V_17_17));
#line 319 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__ETI_4));
#line 319 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__V_19_19));
#line 319 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__V_20_20));
#line 319 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__V_21_21));
#line 319 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__V_22_22));
#line 319 "hlds_args.m"
    }
#line 319 "hlds_args.m"
  }
#line 204 "hlds_args.m"
}

#line 202 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__poly_arg_vector_set_univ_type_infos_3_p_0(
#line 202 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_9,
#line 202 "hlds_args.m"
  MR_Word hlds__hlds_args__UTI_4,
#line 202 "hlds_args.m"
  MR_Word hlds__hlds_args__STATE_VARIABLE_A_0_6,
#line 202 "hlds_args.m"
  MR_Word * hlds__hlds_args__STATE_VARIABLE_A_7)
#line 202 "hlds_args.m"
{
#line 317 "hlds_args.m"
  {
#line 317 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 317 "hlds_args.m"
    MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 0)));
#line 317 "hlds_args.m"
    MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 1)));
#line 317 "hlds_args.m"
    MR_Word hlds__hlds_args__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 3)));
#line 317 "hlds_args.m"
    MR_Word hlds__hlds_args__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 4)));
#line 317 "hlds_args.m"
    MR_Word hlds__hlds_args__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 5)));
#line 317 "hlds_args.m"
    MR_Word hlds__hlds_args__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 6)));
#line 317 "hlds_args.m"
    MR_Word hlds__hlds_args__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 7)));
#line 317 "hlds_args.m"
    MR_Word hlds__hlds_args__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 2)));

#line 317 "hlds_args.m"
    {
#line 317 "hlds_args.m"
      MR_Word base;
#line 317 "hlds_args.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 317 "hlds_args.m"
      *hlds__hlds_args__STATE_VARIABLE_A_7 = base;
#line 317 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__V_15_15));
#line 317 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__V_16_16));
#line 317 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__UTI_4));
#line 317 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__V_18_18));
#line 317 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__V_19_19));
#line 317 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__V_20_20));
#line 317 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__V_21_21));
#line 317 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__V_22_22));
#line 317 "hlds_args.m"
    }
#line 317 "hlds_args.m"
  }
#line 202 "hlds_args.m"
}

#line 200 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__poly_arg_vector_set_instance_typeclass_infos_3_p_0(
#line 200 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_9,
#line 200 "hlds_args.m"
  MR_Word hlds__hlds_args__ITCI_4,
#line 200 "hlds_args.m"
  MR_Word hlds__hlds_args__STATE_VARIABLE_A_0_6,
#line 200 "hlds_args.m"
  MR_Word * hlds__hlds_args__STATE_VARIABLE_A_7)
#line 200 "hlds_args.m"
{
#line 315 "hlds_args.m"
  {
#line 315 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 315 "hlds_args.m"
    MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 0)));
#line 315 "hlds_args.m"
    MR_Word hlds__hlds_args__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 2)));
#line 315 "hlds_args.m"
    MR_Word hlds__hlds_args__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 3)));
#line 315 "hlds_args.m"
    MR_Word hlds__hlds_args__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 4)));
#line 315 "hlds_args.m"
    MR_Word hlds__hlds_args__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 5)));
#line 315 "hlds_args.m"
    MR_Word hlds__hlds_args__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 6)));
#line 315 "hlds_args.m"
    MR_Word hlds__hlds_args__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 7)));
#line 315 "hlds_args.m"
    MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 1)));

#line 315 "hlds_args.m"
    {
#line 315 "hlds_args.m"
      MR_Word base;
#line 315 "hlds_args.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 315 "hlds_args.m"
      *hlds__hlds_args__STATE_VARIABLE_A_7 = base;
#line 315 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__V_15_15));
#line 315 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__ITCI_4));
#line 315 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__V_17_17));
#line 315 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__V_18_18));
#line 315 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__V_19_19));
#line 315 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__V_20_20));
#line 315 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__V_21_21));
#line 315 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__V_22_22));
#line 315 "hlds_args.m"
    }
#line 315 "hlds_args.m"
  }
#line 200 "hlds_args.m"
}

#line 198 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__poly_arg_vector_set_instance_type_infos_3_p_0(
#line 198 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_9,
#line 198 "hlds_args.m"
  MR_Word hlds__hlds_args__ITI_4,
#line 198 "hlds_args.m"
  MR_Word hlds__hlds_args__STATE_VARIABLE_A_0_6,
#line 198 "hlds_args.m"
  MR_Word * hlds__hlds_args__STATE_VARIABLE_A_7)
#line 198 "hlds_args.m"
{
#line 313 "hlds_args.m"
  {
#line 313 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 313 "hlds_args.m"
    MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 1)));
#line 313 "hlds_args.m"
    MR_Word hlds__hlds_args__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 2)));
#line 313 "hlds_args.m"
    MR_Word hlds__hlds_args__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 3)));
#line 313 "hlds_args.m"
    MR_Word hlds__hlds_args__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 4)));
#line 313 "hlds_args.m"
    MR_Word hlds__hlds_args__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 5)));
#line 313 "hlds_args.m"
    MR_Word hlds__hlds_args__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 6)));
#line 313 "hlds_args.m"
    MR_Word hlds__hlds_args__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 7)));
#line 313 "hlds_args.m"
    MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_A_0_6, (MR_Integer) 0)));

#line 313 "hlds_args.m"
    {
#line 313 "hlds_args.m"
      MR_Word base;
#line 313 "hlds_args.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 313 "hlds_args.m"
      *hlds__hlds_args__STATE_VARIABLE_A_7 = base;
#line 313 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__ITI_4));
#line 313 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__V_16_16));
#line 313 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__V_17_17));
#line 313 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__V_18_18));
#line 313 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__V_19_19));
#line 313 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__V_20_20));
#line 313 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__V_21_21));
#line 313 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__V_22_22));
#line 313 "hlds_args.m"
    }
#line 313 "hlds_args.m"
  }
#line 198 "hlds_args.m"
}

#line 196 "hlds_args.m"
MR_Word MR_CALL 
hlds__hlds_args__poly_arg_vector_init_0_f_0(
#line 196 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_4)
#line 196 "hlds_args.m"
{
#line 694 "hlds_args.m"
  {
#line 694 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;

#line 694 "hlds_args.m"
    return (MR_Word) &hlds__hlds_args_scalar_common_1[0];
#line 694 "hlds_args.m"
  }
#line 196 "hlds_args.m"
}

#line 175 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__proc_arg_vector_foldl4_corresponding3_12_p_0(
#line 175 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_A_91,
#line 175 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_B_92,
#line 175 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_C_93,
#line 175 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_D_94,
#line 175 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_E_95,
#line 175 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_F_96,
#line 175 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_G_97,
#line 175 "hlds_args.m"
  MR_Word hlds__hlds_args__P_13,
#line 175 "hlds_args.m"
  MR_Word hlds__hlds_args__A_14,
#line 175 "hlds_args.m"
  MR_Word hlds__hlds_args__B_15,
#line 175 "hlds_args.m"
  MR_Word hlds__hlds_args__C_16,
#line 175 "hlds_args.m"
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_0_48,
#line 175 "hlds_args.m"
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc1_49,
#line 175 "hlds_args.m"
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_0_50,
#line 175 "hlds_args.m"
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc2_51,
#line 175 "hlds_args.m"
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_0_52,
#line 175 "hlds_args.m"
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc3_53,
#line 175 "hlds_args.m"
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc4_0_54,
#line 175 "hlds_args.m"
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc4_55)
#line 175 "hlds_args.m"
{
#line 643 "hlds_args.m"
  {
#line 643 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 643 "hlds_args.m"
    MR_Word hlds__hlds_args__ITIA_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_14, (MR_Integer) 0)));
#line 643 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCIA_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_14, (MR_Integer) 1)));
#line 643 "hlds_args.m"
    MR_Word hlds__hlds_args__UTIA_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_14, (MR_Integer) 2)));
#line 643 "hlds_args.m"
    MR_Word hlds__hlds_args__ETIA_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_14, (MR_Integer) 3)));
#line 643 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCIA_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_14, (MR_Integer) 4)));
#line 643 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCIA_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_14, (MR_Integer) 5)));
#line 643 "hlds_args.m"
    MR_Word hlds__hlds_args__ArgsA_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_14, (MR_Integer) 6)));
#line 643 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValA_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_14, (MR_Integer) 7)));
#line 643 "hlds_args.m"
    MR_Word hlds__hlds_args__ITIB_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_15, (MR_Integer) 0)));
#line 643 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCIB_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_15, (MR_Integer) 1)));
#line 643 "hlds_args.m"
    MR_Word hlds__hlds_args__UTIB_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_15, (MR_Integer) 2)));
#line 643 "hlds_args.m"
    MR_Word hlds__hlds_args__ETIB_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_15, (MR_Integer) 3)));
#line 643 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCIB_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_15, (MR_Integer) 4)));
#line 643 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCIB_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_15, (MR_Integer) 5)));
#line 643 "hlds_args.m"
    MR_Word hlds__hlds_args__ArgsB_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_15, (MR_Integer) 6)));
#line 643 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValB_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_15, (MR_Integer) 7)));
#line 643 "hlds_args.m"
    MR_Word hlds__hlds_args__ITIC_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_16, (MR_Integer) 0)));
#line 643 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCIC_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_16, (MR_Integer) 1)));
#line 643 "hlds_args.m"
    MR_Word hlds__hlds_args__UTIC_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_16, (MR_Integer) 2)));
#line 643 "hlds_args.m"
    MR_Word hlds__hlds_args__ETIC_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_16, (MR_Integer) 3)));
#line 643 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCIC_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_16, (MR_Integer) 4)));
#line 643 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCIC_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_16, (MR_Integer) 5)));
#line 643 "hlds_args.m"
    MR_Word hlds__hlds_args__ArgsC_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_16, (MR_Integer) 6)));
#line 643 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValC_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_16, (MR_Integer) 7)));
#line 643 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_56_56;
#line 643 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_57_57;
#line 643 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_58_58;
#line 643 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc4_59_59;
#line 643 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_60_60;
#line 643 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_61_61;
#line 643 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_62_62;
#line 643 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc4_63_63;
#line 643 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_64_64;
#line 643 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_65_65;
#line 643 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_66_66;
#line 643 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc4_67_67;
#line 643 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_68_68;
#line 643 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_69_69;
#line 643 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_70_70;
#line 643 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc4_71_71;
#line 643 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_72_72;
#line 643 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_73_73;
#line 643 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_74_74;
#line 643 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc4_75_75;
#line 643 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_76_76;
#line 643 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_77_77;
#line 643 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_78_78;
#line 643 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc4_79_79;
#line 643 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_80_80;
#line 643 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_81_81;
#line 643 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_82_82;
#line 643 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc4_83_83;
#line 664 "hlds_args.m"
    MR_Box hlds__hlds_args__RetValA_45;
#line 664 "hlds_args.m"
    MR_Box hlds__hlds_args__RetValB_46;
#line 664 "hlds_args.m"
    MR_Box hlds__hlds_args__RetValC_47;

#line 650 "hlds_args.m"
    {
#line 650 "hlds_args.m"
      mercury__list__foldl4_corresponding3_12_p_0(hlds__hlds_args__TypeInfo_for_A_91, hlds__hlds_args__TypeInfo_for_B_92, hlds__hlds_args__TypeInfo_for_C_93, hlds__hlds_args__TypeInfo_for_D_94, hlds__hlds_args__TypeInfo_for_E_95, hlds__hlds_args__TypeInfo_for_F_96, hlds__hlds_args__TypeInfo_for_G_97, hlds__hlds_args__P_13, hlds__hlds_args__ITIA_21, hlds__hlds_args__ITIB_29, hlds__hlds_args__ITIC_37, hlds__hlds_args__STATE_VARIABLE_Acc1_0_48, &hlds__hlds_args__STATE_VARIABLE_Acc1_56_56, hlds__hlds_args__STATE_VARIABLE_Acc2_0_50, &hlds__hlds_args__STATE_VARIABLE_Acc2_57_57, hlds__hlds_args__STATE_VARIABLE_Acc3_0_52, &hlds__hlds_args__STATE_VARIABLE_Acc3_58_58, hlds__hlds_args__STATE_VARIABLE_Acc4_0_54, &hlds__hlds_args__STATE_VARIABLE_Acc4_59_59);
    }
#line 652 "hlds_args.m"
    {
#line 652 "hlds_args.m"
      mercury__list__foldl4_corresponding3_12_p_0(hlds__hlds_args__TypeInfo_for_A_91, hlds__hlds_args__TypeInfo_for_B_92, hlds__hlds_args__TypeInfo_for_C_93, hlds__hlds_args__TypeInfo_for_D_94, hlds__hlds_args__TypeInfo_for_E_95, hlds__hlds_args__TypeInfo_for_F_96, hlds__hlds_args__TypeInfo_for_G_97, hlds__hlds_args__P_13, hlds__hlds_args__ITCIA_22, hlds__hlds_args__ITCIB_30, hlds__hlds_args__ITCIC_38, hlds__hlds_args__STATE_VARIABLE_Acc1_56_56, &hlds__hlds_args__STATE_VARIABLE_Acc1_60_60, hlds__hlds_args__STATE_VARIABLE_Acc2_57_57, &hlds__hlds_args__STATE_VARIABLE_Acc2_61_61, hlds__hlds_args__STATE_VARIABLE_Acc3_58_58, &hlds__hlds_args__STATE_VARIABLE_Acc3_62_62, hlds__hlds_args__STATE_VARIABLE_Acc4_59_59, &hlds__hlds_args__STATE_VARIABLE_Acc4_63_63);
    }
#line 654 "hlds_args.m"
    {
#line 654 "hlds_args.m"
      mercury__list__foldl4_corresponding3_12_p_0(hlds__hlds_args__TypeInfo_for_A_91, hlds__hlds_args__TypeInfo_for_B_92, hlds__hlds_args__TypeInfo_for_C_93, hlds__hlds_args__TypeInfo_for_D_94, hlds__hlds_args__TypeInfo_for_E_95, hlds__hlds_args__TypeInfo_for_F_96, hlds__hlds_args__TypeInfo_for_G_97, hlds__hlds_args__P_13, hlds__hlds_args__UTIA_23, hlds__hlds_args__UTIB_31, hlds__hlds_args__UTIC_39, hlds__hlds_args__STATE_VARIABLE_Acc1_60_60, &hlds__hlds_args__STATE_VARIABLE_Acc1_64_64, hlds__hlds_args__STATE_VARIABLE_Acc2_61_61, &hlds__hlds_args__STATE_VARIABLE_Acc2_65_65, hlds__hlds_args__STATE_VARIABLE_Acc3_62_62, &hlds__hlds_args__STATE_VARIABLE_Acc3_66_66, hlds__hlds_args__STATE_VARIABLE_Acc4_63_63, &hlds__hlds_args__STATE_VARIABLE_Acc4_67_67);
    }
#line 656 "hlds_args.m"
    {
#line 656 "hlds_args.m"
      mercury__list__foldl4_corresponding3_12_p_0(hlds__hlds_args__TypeInfo_for_A_91, hlds__hlds_args__TypeInfo_for_B_92, hlds__hlds_args__TypeInfo_for_C_93, hlds__hlds_args__TypeInfo_for_D_94, hlds__hlds_args__TypeInfo_for_E_95, hlds__hlds_args__TypeInfo_for_F_96, hlds__hlds_args__TypeInfo_for_G_97, hlds__hlds_args__P_13, hlds__hlds_args__ETIA_24, hlds__hlds_args__ETIB_32, hlds__hlds_args__ETIC_40, hlds__hlds_args__STATE_VARIABLE_Acc1_64_64, &hlds__hlds_args__STATE_VARIABLE_Acc1_68_68, hlds__hlds_args__STATE_VARIABLE_Acc2_65_65, &hlds__hlds_args__STATE_VARIABLE_Acc2_69_69, hlds__hlds_args__STATE_VARIABLE_Acc3_66_66, &hlds__hlds_args__STATE_VARIABLE_Acc3_70_70, hlds__hlds_args__STATE_VARIABLE_Acc4_67_67, &hlds__hlds_args__STATE_VARIABLE_Acc4_71_71);
    }
#line 658 "hlds_args.m"
    {
#line 658 "hlds_args.m"
      mercury__list__foldl4_corresponding3_12_p_0(hlds__hlds_args__TypeInfo_for_A_91, hlds__hlds_args__TypeInfo_for_B_92, hlds__hlds_args__TypeInfo_for_C_93, hlds__hlds_args__TypeInfo_for_D_94, hlds__hlds_args__TypeInfo_for_E_95, hlds__hlds_args__TypeInfo_for_F_96, hlds__hlds_args__TypeInfo_for_G_97, hlds__hlds_args__P_13, hlds__hlds_args__UTCIA_25, hlds__hlds_args__UTCIB_33, hlds__hlds_args__UTCIC_41, hlds__hlds_args__STATE_VARIABLE_Acc1_68_68, &hlds__hlds_args__STATE_VARIABLE_Acc1_72_72, hlds__hlds_args__STATE_VARIABLE_Acc2_69_69, &hlds__hlds_args__STATE_VARIABLE_Acc2_73_73, hlds__hlds_args__STATE_VARIABLE_Acc3_70_70, &hlds__hlds_args__STATE_VARIABLE_Acc3_74_74, hlds__hlds_args__STATE_VARIABLE_Acc4_71_71, &hlds__hlds_args__STATE_VARIABLE_Acc4_75_75);
    }
#line 660 "hlds_args.m"
    {
#line 660 "hlds_args.m"
      mercury__list__foldl4_corresponding3_12_p_0(hlds__hlds_args__TypeInfo_for_A_91, hlds__hlds_args__TypeInfo_for_B_92, hlds__hlds_args__TypeInfo_for_C_93, hlds__hlds_args__TypeInfo_for_D_94, hlds__hlds_args__TypeInfo_for_E_95, hlds__hlds_args__TypeInfo_for_F_96, hlds__hlds_args__TypeInfo_for_G_97, hlds__hlds_args__P_13, hlds__hlds_args__ETCIA_26, hlds__hlds_args__ETCIB_34, hlds__hlds_args__ETCIC_42, hlds__hlds_args__STATE_VARIABLE_Acc1_72_72, &hlds__hlds_args__STATE_VARIABLE_Acc1_76_76, hlds__hlds_args__STATE_VARIABLE_Acc2_73_73, &hlds__hlds_args__STATE_VARIABLE_Acc2_77_77, hlds__hlds_args__STATE_VARIABLE_Acc3_74_74, &hlds__hlds_args__STATE_VARIABLE_Acc3_78_78, hlds__hlds_args__STATE_VARIABLE_Acc4_75_75, &hlds__hlds_args__STATE_VARIABLE_Acc4_79_79);
    }
#line 662 "hlds_args.m"
    {
#line 662 "hlds_args.m"
      mercury__list__foldl4_corresponding3_12_p_0(hlds__hlds_args__TypeInfo_for_A_91, hlds__hlds_args__TypeInfo_for_B_92, hlds__hlds_args__TypeInfo_for_C_93, hlds__hlds_args__TypeInfo_for_D_94, hlds__hlds_args__TypeInfo_for_E_95, hlds__hlds_args__TypeInfo_for_F_96, hlds__hlds_args__TypeInfo_for_G_97, hlds__hlds_args__P_13, hlds__hlds_args__ArgsA_27, hlds__hlds_args__ArgsB_35, hlds__hlds_args__ArgsC_43, hlds__hlds_args__STATE_VARIABLE_Acc1_76_76, &hlds__hlds_args__STATE_VARIABLE_Acc1_80_80, hlds__hlds_args__STATE_VARIABLE_Acc2_77_77, &hlds__hlds_args__STATE_VARIABLE_Acc2_81_81, hlds__hlds_args__STATE_VARIABLE_Acc3_78_78, &hlds__hlds_args__STATE_VARIABLE_Acc3_82_82, hlds__hlds_args__STATE_VARIABLE_Acc4_79_79, &hlds__hlds_args__STATE_VARIABLE_Acc4_83_83);
    }
#line 665 "hlds_args.m"
    hlds__hlds_args__succeeded = ((MR_tag((MR_Word) hlds__hlds_args__MaybeRetValA_28)) == (MR_mktag((MR_Integer) 1)));
#line 665 "hlds_args.m"
    if (hlds__hlds_args__succeeded)
#line 665 "hlds_args.m"
      {
#line 665 "hlds_args.m"
        hlds__hlds_args__RetValA_45 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValA_28, (MR_Integer) 0));
#line 666 "hlds_args.m"
        hlds__hlds_args__succeeded = ((MR_tag((MR_Word) hlds__hlds_args__MaybeRetValB_36)) == (MR_mktag((MR_Integer) 1)));
#line 666 "hlds_args.m"
        if (hlds__hlds_args__succeeded)
#line 666 "hlds_args.m"
          {
#line 666 "hlds_args.m"
            hlds__hlds_args__RetValB_46 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValB_36, (MR_Integer) 0));
#line 667 "hlds_args.m"
            hlds__hlds_args__succeeded = ((MR_tag((MR_Word) hlds__hlds_args__MaybeRetValC_44)) == (MR_mktag((MR_Integer) 1)));
#line 667 "hlds_args.m"
            if (hlds__hlds_args__succeeded)
#line 667 "hlds_args.m"
              hlds__hlds_args__RetValC_47 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValC_44, (MR_Integer) 0));
#line 666 "hlds_args.m"
          }
#line 665 "hlds_args.m"
      }
#line 664 "hlds_args.m"
    if (hlds__hlds_args__succeeded)
#line 669 "hlds_args.m"
      {
#line 669 "hlds_args.m"
        void MR_CALL (* hlds__hlds_args__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__hlds_args__P_13, (MR_Integer) 1)));

#line 669 "hlds_args.m"
        {
#line 669 "hlds_args.m"
          hlds__hlds_args__func_0(((MR_Box) hlds__hlds_args__P_13), hlds__hlds_args__RetValA_45, hlds__hlds_args__RetValB_46, hlds__hlds_args__RetValC_47, hlds__hlds_args__STATE_VARIABLE_Acc1_80_80, hlds__hlds_args__STATE_VARIABLE_Acc1_49, hlds__hlds_args__STATE_VARIABLE_Acc2_81_81, hlds__hlds_args__STATE_VARIABLE_Acc2_51, hlds__hlds_args__STATE_VARIABLE_Acc3_82_82, hlds__hlds_args__STATE_VARIABLE_Acc3_53, hlds__hlds_args__STATE_VARIABLE_Acc4_83_83, hlds__hlds_args__STATE_VARIABLE_Acc4_55);
        }
#line 669 "hlds_args.m"
      }
#line 664 "hlds_args.m"
    else
#line 670 "hlds_args.m"
      {
#line 671 "hlds_args.m"
        hlds__hlds_args__succeeded = (hlds__hlds_args__MaybeRetValA_28 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 671 "hlds_args.m"
        if (hlds__hlds_args__succeeded)
#line 671 "hlds_args.m"
          {
#line 672 "hlds_args.m"
            hlds__hlds_args__succeeded = (hlds__hlds_args__MaybeRetValB_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 671 "hlds_args.m"
            if (hlds__hlds_args__succeeded)
#line 673 "hlds_args.m"
              hlds__hlds_args__succeeded = (hlds__hlds_args__MaybeRetValC_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 671 "hlds_args.m"
          }
#line 670 "hlds_args.m"
        if (hlds__hlds_args__succeeded)
#line 675 "hlds_args.m"
          {
#line 675 "hlds_args.m"
          }
#line 670 "hlds_args.m"
        else
#line 677 "hlds_args.m"
          {
#line 677 "hlds_args.m"
            {
#line 677 "hlds_args.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_args", (MR_String) "predicate \140hlds.hlds_args.proc_arg_vector_foldl4_corresponding3\'/12", (MR_String) "mismatched proc_arg_vectors");
#line 677 "hlds_args.m"
              return;
            }
#line 677 "hlds_args.m"
          }
#line 670 "hlds_args.m"
        *hlds__hlds_args__STATE_VARIABLE_Acc4_55 = hlds__hlds_args__STATE_VARIABLE_Acc4_83_83;
#line 670 "hlds_args.m"
        *hlds__hlds_args__STATE_VARIABLE_Acc3_53 = hlds__hlds_args__STATE_VARIABLE_Acc3_82_82;
#line 670 "hlds_args.m"
        *hlds__hlds_args__STATE_VARIABLE_Acc2_51 = hlds__hlds_args__STATE_VARIABLE_Acc2_81_81;
#line 670 "hlds_args.m"
        *hlds__hlds_args__STATE_VARIABLE_Acc1_49 = hlds__hlds_args__STATE_VARIABLE_Acc1_80_80;
#line 670 "hlds_args.m"
      }
#line 643 "hlds_args.m"
  }
#line 175 "hlds_args.m"
}

#line 169 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__proc_arg_vector_foldl3_corresponding3_10_p_0(
#line 169 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_A_78,
#line 169 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_B_79,
#line 169 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_C_80,
#line 169 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_D_81,
#line 169 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_E_82,
#line 169 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_F_83,
#line 169 "hlds_args.m"
  MR_Word hlds__hlds_args__P_11,
#line 169 "hlds_args.m"
  MR_Word hlds__hlds_args__A_12,
#line 169 "hlds_args.m"
  MR_Word hlds__hlds_args__B_13,
#line 169 "hlds_args.m"
  MR_Word hlds__hlds_args__C_14,
#line 169 "hlds_args.m"
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_0_45,
#line 169 "hlds_args.m"
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc1_46,
#line 169 "hlds_args.m"
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_0_47,
#line 169 "hlds_args.m"
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc2_48,
#line 169 "hlds_args.m"
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_0_49,
#line 169 "hlds_args.m"
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc3_50)
#line 169 "hlds_args.m"
{
#line 612 "hlds_args.m"
  {
#line 612 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 612 "hlds_args.m"
    MR_Word hlds__hlds_args__ITIA_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_12, (MR_Integer) 0)));
#line 612 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCIA_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_12, (MR_Integer) 1)));
#line 612 "hlds_args.m"
    MR_Word hlds__hlds_args__UTIA_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_12, (MR_Integer) 2)));
#line 612 "hlds_args.m"
    MR_Word hlds__hlds_args__ETIA_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_12, (MR_Integer) 3)));
#line 612 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCIA_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_12, (MR_Integer) 4)));
#line 612 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCIA_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_12, (MR_Integer) 5)));
#line 612 "hlds_args.m"
    MR_Word hlds__hlds_args__ArgsA_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_12, (MR_Integer) 6)));
#line 612 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValA_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_12, (MR_Integer) 7)));
#line 612 "hlds_args.m"
    MR_Word hlds__hlds_args__ITIB_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_13, (MR_Integer) 0)));
#line 612 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCIB_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_13, (MR_Integer) 1)));
#line 612 "hlds_args.m"
    MR_Word hlds__hlds_args__UTIB_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_13, (MR_Integer) 2)));
#line 612 "hlds_args.m"
    MR_Word hlds__hlds_args__ETIB_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_13, (MR_Integer) 3)));
#line 612 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCIB_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_13, (MR_Integer) 4)));
#line 612 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCIB_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_13, (MR_Integer) 5)));
#line 612 "hlds_args.m"
    MR_Word hlds__hlds_args__ArgsB_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_13, (MR_Integer) 6)));
#line 612 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValB_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_13, (MR_Integer) 7)));
#line 612 "hlds_args.m"
    MR_Word hlds__hlds_args__ITIC_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_14, (MR_Integer) 0)));
#line 612 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCIC_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_14, (MR_Integer) 1)));
#line 612 "hlds_args.m"
    MR_Word hlds__hlds_args__UTIC_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_14, (MR_Integer) 2)));
#line 612 "hlds_args.m"
    MR_Word hlds__hlds_args__ETIC_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_14, (MR_Integer) 3)));
#line 612 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCIC_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_14, (MR_Integer) 4)));
#line 612 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCIC_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_14, (MR_Integer) 5)));
#line 612 "hlds_args.m"
    MR_Word hlds__hlds_args__ArgsC_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_14, (MR_Integer) 6)));
#line 612 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValC_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_14, (MR_Integer) 7)));
#line 612 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_51_51;
#line 612 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_52_52;
#line 612 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_53_53;
#line 612 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_54_54;
#line 612 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_55_55;
#line 612 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_56_56;
#line 612 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_57_57;
#line 612 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_58_58;
#line 612 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_59_59;
#line 612 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_60_60;
#line 612 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_61_61;
#line 612 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_62_62;
#line 612 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_63_63;
#line 612 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_64_64;
#line 612 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_65_65;
#line 612 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_66_66;
#line 612 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_67_67;
#line 612 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_68_68;
#line 612 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_69_69;
#line 612 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_70_70;
#line 612 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_71_71;
#line 626 "hlds_args.m"
    MR_Box hlds__hlds_args__RetValA_42;
#line 626 "hlds_args.m"
    MR_Box hlds__hlds_args__RetValB_43;
#line 626 "hlds_args.m"
    MR_Box hlds__hlds_args__RetValC_44;

#line 619 "hlds_args.m"
    {
#line 619 "hlds_args.m"
      mercury__list__foldl3_corresponding3_10_p_0(hlds__hlds_args__TypeInfo_for_A_78, hlds__hlds_args__TypeInfo_for_B_79, hlds__hlds_args__TypeInfo_for_C_80, hlds__hlds_args__TypeInfo_for_D_81, hlds__hlds_args__TypeInfo_for_E_82, hlds__hlds_args__TypeInfo_for_F_83, hlds__hlds_args__P_11, hlds__hlds_args__ITIA_18, hlds__hlds_args__ITIB_26, hlds__hlds_args__ITIC_34, hlds__hlds_args__STATE_VARIABLE_Acc1_0_45, &hlds__hlds_args__STATE_VARIABLE_Acc1_51_51, hlds__hlds_args__STATE_VARIABLE_Acc2_0_47, &hlds__hlds_args__STATE_VARIABLE_Acc2_52_52, hlds__hlds_args__STATE_VARIABLE_Acc3_0_49, &hlds__hlds_args__STATE_VARIABLE_Acc3_53_53);
    }
#line 620 "hlds_args.m"
    {
#line 620 "hlds_args.m"
      mercury__list__foldl3_corresponding3_10_p_0(hlds__hlds_args__TypeInfo_for_A_78, hlds__hlds_args__TypeInfo_for_B_79, hlds__hlds_args__TypeInfo_for_C_80, hlds__hlds_args__TypeInfo_for_D_81, hlds__hlds_args__TypeInfo_for_E_82, hlds__hlds_args__TypeInfo_for_F_83, hlds__hlds_args__P_11, hlds__hlds_args__ITCIA_19, hlds__hlds_args__ITCIB_27, hlds__hlds_args__ITCIC_35, hlds__hlds_args__STATE_VARIABLE_Acc1_51_51, &hlds__hlds_args__STATE_VARIABLE_Acc1_54_54, hlds__hlds_args__STATE_VARIABLE_Acc2_52_52, &hlds__hlds_args__STATE_VARIABLE_Acc2_55_55, hlds__hlds_args__STATE_VARIABLE_Acc3_53_53, &hlds__hlds_args__STATE_VARIABLE_Acc3_56_56);
    }
#line 621 "hlds_args.m"
    {
#line 621 "hlds_args.m"
      mercury__list__foldl3_corresponding3_10_p_0(hlds__hlds_args__TypeInfo_for_A_78, hlds__hlds_args__TypeInfo_for_B_79, hlds__hlds_args__TypeInfo_for_C_80, hlds__hlds_args__TypeInfo_for_D_81, hlds__hlds_args__TypeInfo_for_E_82, hlds__hlds_args__TypeInfo_for_F_83, hlds__hlds_args__P_11, hlds__hlds_args__UTIA_20, hlds__hlds_args__UTIB_28, hlds__hlds_args__UTIC_36, hlds__hlds_args__STATE_VARIABLE_Acc1_54_54, &hlds__hlds_args__STATE_VARIABLE_Acc1_57_57, hlds__hlds_args__STATE_VARIABLE_Acc2_55_55, &hlds__hlds_args__STATE_VARIABLE_Acc2_58_58, hlds__hlds_args__STATE_VARIABLE_Acc3_56_56, &hlds__hlds_args__STATE_VARIABLE_Acc3_59_59);
    }
#line 622 "hlds_args.m"
    {
#line 622 "hlds_args.m"
      mercury__list__foldl3_corresponding3_10_p_0(hlds__hlds_args__TypeInfo_for_A_78, hlds__hlds_args__TypeInfo_for_B_79, hlds__hlds_args__TypeInfo_for_C_80, hlds__hlds_args__TypeInfo_for_D_81, hlds__hlds_args__TypeInfo_for_E_82, hlds__hlds_args__TypeInfo_for_F_83, hlds__hlds_args__P_11, hlds__hlds_args__ETIA_21, hlds__hlds_args__ETIB_29, hlds__hlds_args__ETIC_37, hlds__hlds_args__STATE_VARIABLE_Acc1_57_57, &hlds__hlds_args__STATE_VARIABLE_Acc1_60_60, hlds__hlds_args__STATE_VARIABLE_Acc2_58_58, &hlds__hlds_args__STATE_VARIABLE_Acc2_61_61, hlds__hlds_args__STATE_VARIABLE_Acc3_59_59, &hlds__hlds_args__STATE_VARIABLE_Acc3_62_62);
    }
#line 623 "hlds_args.m"
    {
#line 623 "hlds_args.m"
      mercury__list__foldl3_corresponding3_10_p_0(hlds__hlds_args__TypeInfo_for_A_78, hlds__hlds_args__TypeInfo_for_B_79, hlds__hlds_args__TypeInfo_for_C_80, hlds__hlds_args__TypeInfo_for_D_81, hlds__hlds_args__TypeInfo_for_E_82, hlds__hlds_args__TypeInfo_for_F_83, hlds__hlds_args__P_11, hlds__hlds_args__UTCIA_22, hlds__hlds_args__UTCIB_30, hlds__hlds_args__UTCIC_38, hlds__hlds_args__STATE_VARIABLE_Acc1_60_60, &hlds__hlds_args__STATE_VARIABLE_Acc1_63_63, hlds__hlds_args__STATE_VARIABLE_Acc2_61_61, &hlds__hlds_args__STATE_VARIABLE_Acc2_64_64, hlds__hlds_args__STATE_VARIABLE_Acc3_62_62, &hlds__hlds_args__STATE_VARIABLE_Acc3_65_65);
    }
#line 624 "hlds_args.m"
    {
#line 624 "hlds_args.m"
      mercury__list__foldl3_corresponding3_10_p_0(hlds__hlds_args__TypeInfo_for_A_78, hlds__hlds_args__TypeInfo_for_B_79, hlds__hlds_args__TypeInfo_for_C_80, hlds__hlds_args__TypeInfo_for_D_81, hlds__hlds_args__TypeInfo_for_E_82, hlds__hlds_args__TypeInfo_for_F_83, hlds__hlds_args__P_11, hlds__hlds_args__ETCIA_23, hlds__hlds_args__ETCIB_31, hlds__hlds_args__ETCIC_39, hlds__hlds_args__STATE_VARIABLE_Acc1_63_63, &hlds__hlds_args__STATE_VARIABLE_Acc1_66_66, hlds__hlds_args__STATE_VARIABLE_Acc2_64_64, &hlds__hlds_args__STATE_VARIABLE_Acc2_67_67, hlds__hlds_args__STATE_VARIABLE_Acc3_65_65, &hlds__hlds_args__STATE_VARIABLE_Acc3_68_68);
    }
#line 625 "hlds_args.m"
    {
#line 625 "hlds_args.m"
      mercury__list__foldl3_corresponding3_10_p_0(hlds__hlds_args__TypeInfo_for_A_78, hlds__hlds_args__TypeInfo_for_B_79, hlds__hlds_args__TypeInfo_for_C_80, hlds__hlds_args__TypeInfo_for_D_81, hlds__hlds_args__TypeInfo_for_E_82, hlds__hlds_args__TypeInfo_for_F_83, hlds__hlds_args__P_11, hlds__hlds_args__ArgsA_24, hlds__hlds_args__ArgsB_32, hlds__hlds_args__ArgsC_40, hlds__hlds_args__STATE_VARIABLE_Acc1_66_66, &hlds__hlds_args__STATE_VARIABLE_Acc1_69_69, hlds__hlds_args__STATE_VARIABLE_Acc2_67_67, &hlds__hlds_args__STATE_VARIABLE_Acc2_70_70, hlds__hlds_args__STATE_VARIABLE_Acc3_68_68, &hlds__hlds_args__STATE_VARIABLE_Acc3_71_71);
    }
#line 627 "hlds_args.m"
    hlds__hlds_args__succeeded = ((MR_tag((MR_Word) hlds__hlds_args__MaybeRetValA_25)) == (MR_mktag((MR_Integer) 1)));
#line 627 "hlds_args.m"
    if (hlds__hlds_args__succeeded)
#line 627 "hlds_args.m"
      {
#line 627 "hlds_args.m"
        hlds__hlds_args__RetValA_42 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValA_25, (MR_Integer) 0));
#line 628 "hlds_args.m"
        hlds__hlds_args__succeeded = ((MR_tag((MR_Word) hlds__hlds_args__MaybeRetValB_33)) == (MR_mktag((MR_Integer) 1)));
#line 628 "hlds_args.m"
        if (hlds__hlds_args__succeeded)
#line 628 "hlds_args.m"
          {
#line 628 "hlds_args.m"
            hlds__hlds_args__RetValB_43 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValB_33, (MR_Integer) 0));
#line 629 "hlds_args.m"
            hlds__hlds_args__succeeded = ((MR_tag((MR_Word) hlds__hlds_args__MaybeRetValC_41)) == (MR_mktag((MR_Integer) 1)));
#line 629 "hlds_args.m"
            if (hlds__hlds_args__succeeded)
#line 629 "hlds_args.m"
              hlds__hlds_args__RetValC_44 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValC_41, (MR_Integer) 0));
#line 628 "hlds_args.m"
          }
#line 627 "hlds_args.m"
      }
#line 626 "hlds_args.m"
    if (hlds__hlds_args__succeeded)
#line 631 "hlds_args.m"
      {
#line 631 "hlds_args.m"
        void MR_CALL (* hlds__hlds_args__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__hlds_args__P_11, (MR_Integer) 1)));

#line 631 "hlds_args.m"
        {
#line 631 "hlds_args.m"
          hlds__hlds_args__func_0(((MR_Box) hlds__hlds_args__P_11), hlds__hlds_args__RetValA_42, hlds__hlds_args__RetValB_43, hlds__hlds_args__RetValC_44, hlds__hlds_args__STATE_VARIABLE_Acc1_69_69, hlds__hlds_args__STATE_VARIABLE_Acc1_46, hlds__hlds_args__STATE_VARIABLE_Acc2_70_70, hlds__hlds_args__STATE_VARIABLE_Acc2_48, hlds__hlds_args__STATE_VARIABLE_Acc3_71_71, hlds__hlds_args__STATE_VARIABLE_Acc3_50);
        }
#line 631 "hlds_args.m"
      }
#line 626 "hlds_args.m"
    else
#line 632 "hlds_args.m"
      {
#line 633 "hlds_args.m"
        hlds__hlds_args__succeeded = (hlds__hlds_args__MaybeRetValA_25 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 633 "hlds_args.m"
        if (hlds__hlds_args__succeeded)
#line 633 "hlds_args.m"
          {
#line 634 "hlds_args.m"
            hlds__hlds_args__succeeded = (hlds__hlds_args__MaybeRetValB_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 633 "hlds_args.m"
            if (hlds__hlds_args__succeeded)
#line 635 "hlds_args.m"
              hlds__hlds_args__succeeded = (hlds__hlds_args__MaybeRetValC_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 633 "hlds_args.m"
          }
#line 632 "hlds_args.m"
        if (hlds__hlds_args__succeeded)
#line 637 "hlds_args.m"
          {
#line 637 "hlds_args.m"
          }
#line 632 "hlds_args.m"
        else
#line 639 "hlds_args.m"
          {
#line 639 "hlds_args.m"
            {
#line 639 "hlds_args.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_args", (MR_String) "predicate \140hlds.hlds_args.proc_arg_vector_foldl3_corresponding3\'/10", (MR_String) "mismatched proc_arg_vectors");
#line 639 "hlds_args.m"
              return;
            }
#line 639 "hlds_args.m"
          }
#line 632 "hlds_args.m"
        *hlds__hlds_args__STATE_VARIABLE_Acc3_50 = hlds__hlds_args__STATE_VARIABLE_Acc3_71_71;
#line 632 "hlds_args.m"
        *hlds__hlds_args__STATE_VARIABLE_Acc2_48 = hlds__hlds_args__STATE_VARIABLE_Acc2_70_70;
#line 632 "hlds_args.m"
        *hlds__hlds_args__STATE_VARIABLE_Acc1_46 = hlds__hlds_args__STATE_VARIABLE_Acc1_69_69;
#line 632 "hlds_args.m"
      }
#line 612 "hlds_args.m"
  }
#line 169 "hlds_args.m"
}

#line 163 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__proc_arg_vector_foldl2_corresponding3_8_p_0(
#line 163 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_A_65,
#line 163 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_B_66,
#line 163 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_C_67,
#line 163 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_D_68,
#line 163 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_E_69,
#line 163 "hlds_args.m"
  MR_Word hlds__hlds_args__P_9,
#line 163 "hlds_args.m"
  MR_Word hlds__hlds_args__A_10,
#line 163 "hlds_args.m"
  MR_Word hlds__hlds_args__B_11,
#line 163 "hlds_args.m"
  MR_Word hlds__hlds_args__C_12,
#line 163 "hlds_args.m"
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_0_42,
#line 163 "hlds_args.m"
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc1_43,
#line 163 "hlds_args.m"
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_0_44,
#line 163 "hlds_args.m"
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc2_45)
#line 163 "hlds_args.m"
{
#line 582 "hlds_args.m"
  {
#line 582 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 582 "hlds_args.m"
    MR_Word hlds__hlds_args__ITIA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 0)));
#line 582 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCIA_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 1)));
#line 582 "hlds_args.m"
    MR_Word hlds__hlds_args__UTIA_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 2)));
#line 582 "hlds_args.m"
    MR_Word hlds__hlds_args__ETIA_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 3)));
#line 582 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCIA_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 4)));
#line 582 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCIA_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 5)));
#line 582 "hlds_args.m"
    MR_Word hlds__hlds_args__ArgsA_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 6)));
#line 582 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValA_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 7)));
#line 582 "hlds_args.m"
    MR_Word hlds__hlds_args__ITIB_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 0)));
#line 582 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCIB_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 1)));
#line 582 "hlds_args.m"
    MR_Word hlds__hlds_args__UTIB_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 2)));
#line 582 "hlds_args.m"
    MR_Word hlds__hlds_args__ETIB_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 3)));
#line 582 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCIB_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 4)));
#line 582 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCIB_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 5)));
#line 582 "hlds_args.m"
    MR_Word hlds__hlds_args__ArgsB_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 6)));
#line 582 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValB_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 7)));
#line 582 "hlds_args.m"
    MR_Word hlds__hlds_args__ITIC_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_12, (MR_Integer) 0)));
#line 582 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCIC_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_12, (MR_Integer) 1)));
#line 582 "hlds_args.m"
    MR_Word hlds__hlds_args__UTIC_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_12, (MR_Integer) 2)));
#line 582 "hlds_args.m"
    MR_Word hlds__hlds_args__ETIC_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_12, (MR_Integer) 3)));
#line 582 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCIC_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_12, (MR_Integer) 4)));
#line 582 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCIC_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_12, (MR_Integer) 5)));
#line 582 "hlds_args.m"
    MR_Word hlds__hlds_args__ArgsC_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_12, (MR_Integer) 6)));
#line 582 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValC_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__C_12, (MR_Integer) 7)));
#line 582 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_46_46;
#line 582 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_47_47;
#line 582 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_48_48;
#line 582 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_49_49;
#line 582 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_50_50;
#line 582 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_51_51;
#line 582 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_52_52;
#line 582 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_53_53;
#line 582 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_54_54;
#line 582 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_55_55;
#line 582 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_56_56;
#line 582 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_57_57;
#line 582 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_58_58;
#line 582 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_59_59;
#line 596 "hlds_args.m"
    MR_Box hlds__hlds_args__RetValA_39;
#line 596 "hlds_args.m"
    MR_Box hlds__hlds_args__RetValB_40;
#line 596 "hlds_args.m"
    MR_Box hlds__hlds_args__RetValC_41;

#line 589 "hlds_args.m"
    {
#line 589 "hlds_args.m"
      mercury__list__foldl2_corresponding3_8_p_0(hlds__hlds_args__TypeInfo_for_A_65, hlds__hlds_args__TypeInfo_for_B_66, hlds__hlds_args__TypeInfo_for_C_67, hlds__hlds_args__TypeInfo_for_D_68, hlds__hlds_args__TypeInfo_for_E_69, hlds__hlds_args__P_9, hlds__hlds_args__ITIA_15, hlds__hlds_args__ITIB_23, hlds__hlds_args__ITIC_31, hlds__hlds_args__STATE_VARIABLE_Acc1_0_42, &hlds__hlds_args__STATE_VARIABLE_Acc1_46_46, hlds__hlds_args__STATE_VARIABLE_Acc2_0_44, &hlds__hlds_args__STATE_VARIABLE_Acc2_47_47);
    }
#line 590 "hlds_args.m"
    {
#line 590 "hlds_args.m"
      mercury__list__foldl2_corresponding3_8_p_0(hlds__hlds_args__TypeInfo_for_A_65, hlds__hlds_args__TypeInfo_for_B_66, hlds__hlds_args__TypeInfo_for_C_67, hlds__hlds_args__TypeInfo_for_D_68, hlds__hlds_args__TypeInfo_for_E_69, hlds__hlds_args__P_9, hlds__hlds_args__ITCIA_16, hlds__hlds_args__ITCIB_24, hlds__hlds_args__ITCIC_32, hlds__hlds_args__STATE_VARIABLE_Acc1_46_46, &hlds__hlds_args__STATE_VARIABLE_Acc1_48_48, hlds__hlds_args__STATE_VARIABLE_Acc2_47_47, &hlds__hlds_args__STATE_VARIABLE_Acc2_49_49);
    }
#line 591 "hlds_args.m"
    {
#line 591 "hlds_args.m"
      mercury__list__foldl2_corresponding3_8_p_0(hlds__hlds_args__TypeInfo_for_A_65, hlds__hlds_args__TypeInfo_for_B_66, hlds__hlds_args__TypeInfo_for_C_67, hlds__hlds_args__TypeInfo_for_D_68, hlds__hlds_args__TypeInfo_for_E_69, hlds__hlds_args__P_9, hlds__hlds_args__UTIA_17, hlds__hlds_args__UTIB_25, hlds__hlds_args__UTIC_33, hlds__hlds_args__STATE_VARIABLE_Acc1_48_48, &hlds__hlds_args__STATE_VARIABLE_Acc1_50_50, hlds__hlds_args__STATE_VARIABLE_Acc2_49_49, &hlds__hlds_args__STATE_VARIABLE_Acc2_51_51);
    }
#line 592 "hlds_args.m"
    {
#line 592 "hlds_args.m"
      mercury__list__foldl2_corresponding3_8_p_0(hlds__hlds_args__TypeInfo_for_A_65, hlds__hlds_args__TypeInfo_for_B_66, hlds__hlds_args__TypeInfo_for_C_67, hlds__hlds_args__TypeInfo_for_D_68, hlds__hlds_args__TypeInfo_for_E_69, hlds__hlds_args__P_9, hlds__hlds_args__ETIA_18, hlds__hlds_args__ETIB_26, hlds__hlds_args__ETIC_34, hlds__hlds_args__STATE_VARIABLE_Acc1_50_50, &hlds__hlds_args__STATE_VARIABLE_Acc1_52_52, hlds__hlds_args__STATE_VARIABLE_Acc2_51_51, &hlds__hlds_args__STATE_VARIABLE_Acc2_53_53);
    }
#line 593 "hlds_args.m"
    {
#line 593 "hlds_args.m"
      mercury__list__foldl2_corresponding3_8_p_0(hlds__hlds_args__TypeInfo_for_A_65, hlds__hlds_args__TypeInfo_for_B_66, hlds__hlds_args__TypeInfo_for_C_67, hlds__hlds_args__TypeInfo_for_D_68, hlds__hlds_args__TypeInfo_for_E_69, hlds__hlds_args__P_9, hlds__hlds_args__UTCIA_19, hlds__hlds_args__UTCIB_27, hlds__hlds_args__UTCIC_35, hlds__hlds_args__STATE_VARIABLE_Acc1_52_52, &hlds__hlds_args__STATE_VARIABLE_Acc1_54_54, hlds__hlds_args__STATE_VARIABLE_Acc2_53_53, &hlds__hlds_args__STATE_VARIABLE_Acc2_55_55);
    }
#line 594 "hlds_args.m"
    {
#line 594 "hlds_args.m"
      mercury__list__foldl2_corresponding3_8_p_0(hlds__hlds_args__TypeInfo_for_A_65, hlds__hlds_args__TypeInfo_for_B_66, hlds__hlds_args__TypeInfo_for_C_67, hlds__hlds_args__TypeInfo_for_D_68, hlds__hlds_args__TypeInfo_for_E_69, hlds__hlds_args__P_9, hlds__hlds_args__ETCIA_20, hlds__hlds_args__ETCIB_28, hlds__hlds_args__ETCIC_36, hlds__hlds_args__STATE_VARIABLE_Acc1_54_54, &hlds__hlds_args__STATE_VARIABLE_Acc1_56_56, hlds__hlds_args__STATE_VARIABLE_Acc2_55_55, &hlds__hlds_args__STATE_VARIABLE_Acc2_57_57);
    }
#line 595 "hlds_args.m"
    {
#line 595 "hlds_args.m"
      mercury__list__foldl2_corresponding3_8_p_0(hlds__hlds_args__TypeInfo_for_A_65, hlds__hlds_args__TypeInfo_for_B_66, hlds__hlds_args__TypeInfo_for_C_67, hlds__hlds_args__TypeInfo_for_D_68, hlds__hlds_args__TypeInfo_for_E_69, hlds__hlds_args__P_9, hlds__hlds_args__ArgsA_21, hlds__hlds_args__ArgsB_29, hlds__hlds_args__ArgsC_37, hlds__hlds_args__STATE_VARIABLE_Acc1_56_56, &hlds__hlds_args__STATE_VARIABLE_Acc1_58_58, hlds__hlds_args__STATE_VARIABLE_Acc2_57_57, &hlds__hlds_args__STATE_VARIABLE_Acc2_59_59);
    }
#line 597 "hlds_args.m"
    hlds__hlds_args__succeeded = ((MR_tag((MR_Word) hlds__hlds_args__MaybeRetValA_22)) == (MR_mktag((MR_Integer) 1)));
#line 597 "hlds_args.m"
    if (hlds__hlds_args__succeeded)
#line 597 "hlds_args.m"
      {
#line 597 "hlds_args.m"
        hlds__hlds_args__RetValA_39 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValA_22, (MR_Integer) 0));
#line 598 "hlds_args.m"
        hlds__hlds_args__succeeded = ((MR_tag((MR_Word) hlds__hlds_args__MaybeRetValB_30)) == (MR_mktag((MR_Integer) 1)));
#line 598 "hlds_args.m"
        if (hlds__hlds_args__succeeded)
#line 598 "hlds_args.m"
          {
#line 598 "hlds_args.m"
            hlds__hlds_args__RetValB_40 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValB_30, (MR_Integer) 0));
#line 599 "hlds_args.m"
            hlds__hlds_args__succeeded = ((MR_tag((MR_Word) hlds__hlds_args__MaybeRetValC_38)) == (MR_mktag((MR_Integer) 1)));
#line 599 "hlds_args.m"
            if (hlds__hlds_args__succeeded)
#line 599 "hlds_args.m"
              hlds__hlds_args__RetValC_41 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValC_38, (MR_Integer) 0));
#line 598 "hlds_args.m"
          }
#line 597 "hlds_args.m"
      }
#line 596 "hlds_args.m"
    if (hlds__hlds_args__succeeded)
#line 601 "hlds_args.m"
      {
#line 601 "hlds_args.m"
        void MR_CALL (* hlds__hlds_args__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__hlds_args__P_9, (MR_Integer) 1)));

#line 601 "hlds_args.m"
        {
#line 601 "hlds_args.m"
          hlds__hlds_args__func_0(((MR_Box) hlds__hlds_args__P_9), hlds__hlds_args__RetValA_39, hlds__hlds_args__RetValB_40, hlds__hlds_args__RetValC_41, hlds__hlds_args__STATE_VARIABLE_Acc1_58_58, hlds__hlds_args__STATE_VARIABLE_Acc1_43, hlds__hlds_args__STATE_VARIABLE_Acc2_59_59, hlds__hlds_args__STATE_VARIABLE_Acc2_45);
        }
#line 601 "hlds_args.m"
      }
#line 596 "hlds_args.m"
    else
#line 602 "hlds_args.m"
      {
#line 603 "hlds_args.m"
        hlds__hlds_args__succeeded = (hlds__hlds_args__MaybeRetValA_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 603 "hlds_args.m"
        if (hlds__hlds_args__succeeded)
#line 603 "hlds_args.m"
          {
#line 604 "hlds_args.m"
            hlds__hlds_args__succeeded = (hlds__hlds_args__MaybeRetValB_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 603 "hlds_args.m"
            if (hlds__hlds_args__succeeded)
#line 605 "hlds_args.m"
              hlds__hlds_args__succeeded = (hlds__hlds_args__MaybeRetValC_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 603 "hlds_args.m"
          }
#line 602 "hlds_args.m"
        if (hlds__hlds_args__succeeded)
#line 607 "hlds_args.m"
          {
#line 607 "hlds_args.m"
          }
#line 602 "hlds_args.m"
        else
#line 609 "hlds_args.m"
          {
#line 609 "hlds_args.m"
            {
#line 609 "hlds_args.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_args", (MR_String) "predicate \140hlds.hlds_args.proc_arg_vector_foldl2_corresponding3\'/8", (MR_String) "mismatched proc_arg_vectors");
#line 609 "hlds_args.m"
              return;
            }
#line 609 "hlds_args.m"
          }
#line 602 "hlds_args.m"
        *hlds__hlds_args__STATE_VARIABLE_Acc2_45 = hlds__hlds_args__STATE_VARIABLE_Acc2_59_59;
#line 602 "hlds_args.m"
        *hlds__hlds_args__STATE_VARIABLE_Acc1_43 = hlds__hlds_args__STATE_VARIABLE_Acc1_58_58;
#line 602 "hlds_args.m"
      }
#line 582 "hlds_args.m"
  }
#line 163 "hlds_args.m"
}

#line 157 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__proc_arg_vector_foldl3_corresponding_9_p_0(
#line 157 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_A_72,
#line 157 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_B_73,
#line 157 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_C_74,
#line 157 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_D_75,
#line 157 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_E_76,
#line 157 "hlds_args.m"
  MR_Word hlds__hlds_args__P_10,
#line 157 "hlds_args.m"
  MR_Word hlds__hlds_args__A_11,
#line 157 "hlds_args.m"
  MR_Word hlds__hlds_args__B_12,
#line 157 "hlds_args.m"
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_0_36,
#line 157 "hlds_args.m"
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc1_37,
#line 157 "hlds_args.m"
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_0_38,
#line 157 "hlds_args.m"
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc2_39,
#line 157 "hlds_args.m"
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_0_40,
#line 157 "hlds_args.m"
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc3_41)
#line 157 "hlds_args.m"
{
#line 553 "hlds_args.m"
  {
#line 553 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 553 "hlds_args.m"
    MR_Word hlds__hlds_args__ITIA_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_11, (MR_Integer) 0)));
#line 553 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCIA_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_11, (MR_Integer) 1)));
#line 553 "hlds_args.m"
    MR_Word hlds__hlds_args__UTIA_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_11, (MR_Integer) 2)));
#line 553 "hlds_args.m"
    MR_Word hlds__hlds_args__ETIA_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_11, (MR_Integer) 3)));
#line 553 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCIA_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_11, (MR_Integer) 4)));
#line 553 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCIA_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_11, (MR_Integer) 5)));
#line 553 "hlds_args.m"
    MR_Word hlds__hlds_args__ArgsA_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_11, (MR_Integer) 6)));
#line 553 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValA_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_11, (MR_Integer) 7)));
#line 553 "hlds_args.m"
    MR_Word hlds__hlds_args__ITIB_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_12, (MR_Integer) 0)));
#line 553 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCIB_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_12, (MR_Integer) 1)));
#line 553 "hlds_args.m"
    MR_Word hlds__hlds_args__UTIB_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_12, (MR_Integer) 2)));
#line 553 "hlds_args.m"
    MR_Word hlds__hlds_args__ETIB_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_12, (MR_Integer) 3)));
#line 553 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCIB_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_12, (MR_Integer) 4)));
#line 553 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCIB_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_12, (MR_Integer) 5)));
#line 553 "hlds_args.m"
    MR_Word hlds__hlds_args__ArgsB_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_12, (MR_Integer) 6)));
#line 553 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValB_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_12, (MR_Integer) 7)));
#line 553 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_42_42;
#line 553 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_43_43;
#line 553 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_44_44;
#line 553 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_45_45;
#line 553 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_46_46;
#line 553 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_47_47;
#line 553 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_48_48;
#line 553 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_49_49;
#line 553 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_50_50;
#line 553 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_51_51;
#line 553 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_52_52;
#line 553 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_53_53;
#line 553 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_54_54;
#line 553 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_55_55;
#line 553 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_56_56;
#line 553 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_57_57;
#line 553 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_58_58;
#line 553 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_59_59;
#line 553 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_60_60;
#line 553 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_61_61;
#line 553 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc3_62_62;

#line 558 "hlds_args.m"
    {
#line 558 "hlds_args.m"
      mercury__list__foldl3_corresponding_9_p_0(hlds__hlds_args__TypeInfo_for_A_72, hlds__hlds_args__TypeInfo_for_B_73, hlds__hlds_args__TypeInfo_for_C_74, hlds__hlds_args__TypeInfo_for_D_75, hlds__hlds_args__TypeInfo_for_E_76, hlds__hlds_args__P_10, hlds__hlds_args__ITIA_16, hlds__hlds_args__ITIB_24, hlds__hlds_args__STATE_VARIABLE_Acc1_0_36, &hlds__hlds_args__STATE_VARIABLE_Acc1_42_42, hlds__hlds_args__STATE_VARIABLE_Acc2_0_38, &hlds__hlds_args__STATE_VARIABLE_Acc2_43_43, hlds__hlds_args__STATE_VARIABLE_Acc3_0_40, &hlds__hlds_args__STATE_VARIABLE_Acc3_44_44);
    }
#line 559 "hlds_args.m"
    {
#line 559 "hlds_args.m"
      mercury__list__foldl3_corresponding_9_p_0(hlds__hlds_args__TypeInfo_for_A_72, hlds__hlds_args__TypeInfo_for_B_73, hlds__hlds_args__TypeInfo_for_C_74, hlds__hlds_args__TypeInfo_for_D_75, hlds__hlds_args__TypeInfo_for_E_76, hlds__hlds_args__P_10, hlds__hlds_args__ITCIA_17, hlds__hlds_args__ITCIB_25, hlds__hlds_args__STATE_VARIABLE_Acc1_42_42, &hlds__hlds_args__STATE_VARIABLE_Acc1_45_45, hlds__hlds_args__STATE_VARIABLE_Acc2_43_43, &hlds__hlds_args__STATE_VARIABLE_Acc2_46_46, hlds__hlds_args__STATE_VARIABLE_Acc3_44_44, &hlds__hlds_args__STATE_VARIABLE_Acc3_47_47);
    }
#line 560 "hlds_args.m"
    {
#line 560 "hlds_args.m"
      mercury__list__foldl3_corresponding_9_p_0(hlds__hlds_args__TypeInfo_for_A_72, hlds__hlds_args__TypeInfo_for_B_73, hlds__hlds_args__TypeInfo_for_C_74, hlds__hlds_args__TypeInfo_for_D_75, hlds__hlds_args__TypeInfo_for_E_76, hlds__hlds_args__P_10, hlds__hlds_args__UTIA_18, hlds__hlds_args__UTIB_26, hlds__hlds_args__STATE_VARIABLE_Acc1_45_45, &hlds__hlds_args__STATE_VARIABLE_Acc1_48_48, hlds__hlds_args__STATE_VARIABLE_Acc2_46_46, &hlds__hlds_args__STATE_VARIABLE_Acc2_49_49, hlds__hlds_args__STATE_VARIABLE_Acc3_47_47, &hlds__hlds_args__STATE_VARIABLE_Acc3_50_50);
    }
#line 561 "hlds_args.m"
    {
#line 561 "hlds_args.m"
      mercury__list__foldl3_corresponding_9_p_0(hlds__hlds_args__TypeInfo_for_A_72, hlds__hlds_args__TypeInfo_for_B_73, hlds__hlds_args__TypeInfo_for_C_74, hlds__hlds_args__TypeInfo_for_D_75, hlds__hlds_args__TypeInfo_for_E_76, hlds__hlds_args__P_10, hlds__hlds_args__ETIA_19, hlds__hlds_args__ETIB_27, hlds__hlds_args__STATE_VARIABLE_Acc1_48_48, &hlds__hlds_args__STATE_VARIABLE_Acc1_51_51, hlds__hlds_args__STATE_VARIABLE_Acc2_49_49, &hlds__hlds_args__STATE_VARIABLE_Acc2_52_52, hlds__hlds_args__STATE_VARIABLE_Acc3_50_50, &hlds__hlds_args__STATE_VARIABLE_Acc3_53_53);
    }
#line 562 "hlds_args.m"
    {
#line 562 "hlds_args.m"
      mercury__list__foldl3_corresponding_9_p_0(hlds__hlds_args__TypeInfo_for_A_72, hlds__hlds_args__TypeInfo_for_B_73, hlds__hlds_args__TypeInfo_for_C_74, hlds__hlds_args__TypeInfo_for_D_75, hlds__hlds_args__TypeInfo_for_E_76, hlds__hlds_args__P_10, hlds__hlds_args__UTCIA_20, hlds__hlds_args__UTCIB_28, hlds__hlds_args__STATE_VARIABLE_Acc1_51_51, &hlds__hlds_args__STATE_VARIABLE_Acc1_54_54, hlds__hlds_args__STATE_VARIABLE_Acc2_52_52, &hlds__hlds_args__STATE_VARIABLE_Acc2_55_55, hlds__hlds_args__STATE_VARIABLE_Acc3_53_53, &hlds__hlds_args__STATE_VARIABLE_Acc3_56_56);
    }
#line 563 "hlds_args.m"
    {
#line 563 "hlds_args.m"
      mercury__list__foldl3_corresponding_9_p_0(hlds__hlds_args__TypeInfo_for_A_72, hlds__hlds_args__TypeInfo_for_B_73, hlds__hlds_args__TypeInfo_for_C_74, hlds__hlds_args__TypeInfo_for_D_75, hlds__hlds_args__TypeInfo_for_E_76, hlds__hlds_args__P_10, hlds__hlds_args__ETCIA_21, hlds__hlds_args__ETCIB_29, hlds__hlds_args__STATE_VARIABLE_Acc1_54_54, &hlds__hlds_args__STATE_VARIABLE_Acc1_57_57, hlds__hlds_args__STATE_VARIABLE_Acc2_55_55, &hlds__hlds_args__STATE_VARIABLE_Acc2_58_58, hlds__hlds_args__STATE_VARIABLE_Acc3_56_56, &hlds__hlds_args__STATE_VARIABLE_Acc3_59_59);
    }
#line 564 "hlds_args.m"
    {
#line 564 "hlds_args.m"
      mercury__list__foldl3_corresponding_9_p_0(hlds__hlds_args__TypeInfo_for_A_72, hlds__hlds_args__TypeInfo_for_B_73, hlds__hlds_args__TypeInfo_for_C_74, hlds__hlds_args__TypeInfo_for_D_75, hlds__hlds_args__TypeInfo_for_E_76, hlds__hlds_args__P_10, hlds__hlds_args__ArgsA_22, hlds__hlds_args__ArgsB_30, hlds__hlds_args__STATE_VARIABLE_Acc1_57_57, &hlds__hlds_args__STATE_VARIABLE_Acc1_60_60, hlds__hlds_args__STATE_VARIABLE_Acc2_58_58, &hlds__hlds_args__STATE_VARIABLE_Acc2_61_61, hlds__hlds_args__STATE_VARIABLE_Acc3_59_59, &hlds__hlds_args__STATE_VARIABLE_Acc3_62_62);
    }
#line 569 "hlds_args.m"
    if ((hlds__hlds_args__MaybeRetValA_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 569 "hlds_args.m"
      if ((hlds__hlds_args__MaybeRetValB_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 578 "hlds_args.m"
        {
#line 578 "hlds_args.m"
          *hlds__hlds_args__STATE_VARIABLE_Acc1_37 = hlds__hlds_args__STATE_VARIABLE_Acc1_60_60;
#line 578 "hlds_args.m"
          *hlds__hlds_args__STATE_VARIABLE_Acc2_39 = hlds__hlds_args__STATE_VARIABLE_Acc2_61_61;
#line 578 "hlds_args.m"
          *hlds__hlds_args__STATE_VARIABLE_Acc3_41 = hlds__hlds_args__STATE_VARIABLE_Acc3_62_62;
#line 578 "hlds_args.m"
        }
#line 569 "hlds_args.m"
      else
#line 574 "hlds_args.m"
        {
#line 576 "hlds_args.m"
          {
#line 576 "hlds_args.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_args", (MR_String) "predicate \140hlds.hlds_args.proc_arg_vector_foldl3_corresponding\'/9", (MR_String) "mismatched proc_arg_vectors");
#line 576 "hlds_args.m"
            return;
          }
#line 574 "hlds_args.m"
        }
#line 569 "hlds_args.m"
    else
#line 569 "hlds_args.m"
      {
#line 569 "hlds_args.m"
        MR_Box hlds__hlds_args__V_77_77 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValA_23, (MR_Integer) 0));

#line 569 "hlds_args.m"
        if ((hlds__hlds_args__MaybeRetValB_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 570 "hlds_args.m"
          {
#line 572 "hlds_args.m"
            {
#line 572 "hlds_args.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_args", (MR_String) "predicate \140hlds.hlds_args.proc_arg_vector_foldl3_corresponding\'/9", (MR_String) "mismatched proc_arg_vectors");
#line 572 "hlds_args.m"
              return;
            }
#line 570 "hlds_args.m"
          }
#line 569 "hlds_args.m"
        else
#line 566 "hlds_args.m"
          {
#line 566 "hlds_args.m"
            MR_Box hlds__hlds_args__RetValB_33 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValB_31, (MR_Integer) 0));
#line 568 "hlds_args.m"
            void MR_CALL (* hlds__hlds_args__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__hlds_args__P_10, (MR_Integer) 1)));

#line 568 "hlds_args.m"
            {
#line 568 "hlds_args.m"
              hlds__hlds_args__func_0(((MR_Box) hlds__hlds_args__P_10), hlds__hlds_args__V_77_77, hlds__hlds_args__RetValB_33, hlds__hlds_args__STATE_VARIABLE_Acc1_60_60, hlds__hlds_args__STATE_VARIABLE_Acc1_37, hlds__hlds_args__STATE_VARIABLE_Acc2_61_61, hlds__hlds_args__STATE_VARIABLE_Acc2_39, hlds__hlds_args__STATE_VARIABLE_Acc3_62_62, hlds__hlds_args__STATE_VARIABLE_Acc3_41);
            }
#line 566 "hlds_args.m"
          }
#line 569 "hlds_args.m"
      }
#line 553 "hlds_args.m"
  }
#line 157 "hlds_args.m"
}

#line 152 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__proc_arg_vector_map_corresponding_foldl2_8_p_0(
#line 152 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_A_70,
#line 152 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_B_71,
#line 152 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_C_72,
#line 152 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_D_73,
#line 152 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_E_74,
#line 152 "hlds_args.m"
  MR_Word hlds__hlds_args__P_9,
#line 152 "hlds_args.m"
  MR_Word hlds__hlds_args__A_10,
#line 152 "hlds_args.m"
  MR_Word hlds__hlds_args__B_11,
#line 152 "hlds_args.m"
  MR_Word * hlds__hlds_args__C_12,
#line 152 "hlds_args.m"
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_0_44,
#line 152 "hlds_args.m"
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc1_45,
#line 152 "hlds_args.m"
  MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_0_46,
#line 152 "hlds_args.m"
  MR_Box * hlds__hlds_args__STATE_VARIABLE_Acc2_47)
#line 152 "hlds_args.m"
{
#line 520 "hlds_args.m"
  {
#line 520 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 520 "hlds_args.m"
    MR_Word hlds__hlds_args__ITIA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 0)));
#line 520 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCIA_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 1)));
#line 520 "hlds_args.m"
    MR_Word hlds__hlds_args__UTIA_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 2)));
#line 520 "hlds_args.m"
    MR_Word hlds__hlds_args__ETIA_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 3)));
#line 520 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCIA_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 4)));
#line 520 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCIA_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 5)));
#line 520 "hlds_args.m"
    MR_Word hlds__hlds_args__ArgsA_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 6)));
#line 520 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValA_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_10, (MR_Integer) 7)));
#line 520 "hlds_args.m"
    MR_Word hlds__hlds_args__ITIB_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 0)));
#line 520 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCIB_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 1)));
#line 520 "hlds_args.m"
    MR_Word hlds__hlds_args__UTIB_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 2)));
#line 520 "hlds_args.m"
    MR_Word hlds__hlds_args__ETIB_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 3)));
#line 520 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCIB_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 4)));
#line 520 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCIB_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 5)));
#line 520 "hlds_args.m"
    MR_Word hlds__hlds_args__ArgsB_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 6)));
#line 520 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValB_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_11, (MR_Integer) 7)));
#line 520 "hlds_args.m"
    MR_Word hlds__hlds_args__ITIC_31;
#line 520 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCIC_32;
#line 520 "hlds_args.m"
    MR_Word hlds__hlds_args__UTIC_33;
#line 520 "hlds_args.m"
    MR_Word hlds__hlds_args__ETIC_34;
#line 520 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCIC_35;
#line 520 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCIC_36;
#line 520 "hlds_args.m"
    MR_Word hlds__hlds_args__ArgsC_37;
#line 520 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValC_41;
#line 520 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_48_48;
#line 520 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_49_49;
#line 520 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_50_50;
#line 520 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_51_51;
#line 520 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_52_52;
#line 520 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_53_53;
#line 520 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_54_54;
#line 520 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_55_55;
#line 520 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_56_56;
#line 520 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_57_57;
#line 520 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_58_58;
#line 520 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_59_59;
#line 520 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc1_60_60;
#line 520 "hlds_args.m"
    MR_Box hlds__hlds_args__STATE_VARIABLE_Acc2_61_61;

#line 525 "hlds_args.m"
    {
#line 525 "hlds_args.m"
      mercury__list__map_corresponding_foldl2_8_p_0(hlds__hlds_args__TypeInfo_for_A_70, hlds__hlds_args__TypeInfo_for_B_71, hlds__hlds_args__TypeInfo_for_C_72, hlds__hlds_args__TypeInfo_for_D_73, hlds__hlds_args__TypeInfo_for_E_74, hlds__hlds_args__P_9, hlds__hlds_args__ITIA_15, hlds__hlds_args__ITIB_23, &hlds__hlds_args__ITIC_31, hlds__hlds_args__STATE_VARIABLE_Acc1_0_44, &hlds__hlds_args__STATE_VARIABLE_Acc1_48_48, hlds__hlds_args__STATE_VARIABLE_Acc2_0_46, &hlds__hlds_args__STATE_VARIABLE_Acc2_49_49);
    }
#line 526 "hlds_args.m"
    {
#line 526 "hlds_args.m"
      mercury__list__map_corresponding_foldl2_8_p_0(hlds__hlds_args__TypeInfo_for_A_70, hlds__hlds_args__TypeInfo_for_B_71, hlds__hlds_args__TypeInfo_for_C_72, hlds__hlds_args__TypeInfo_for_D_73, hlds__hlds_args__TypeInfo_for_E_74, hlds__hlds_args__P_9, hlds__hlds_args__ITCIA_16, hlds__hlds_args__ITCIB_24, &hlds__hlds_args__ITCIC_32, hlds__hlds_args__STATE_VARIABLE_Acc1_48_48, &hlds__hlds_args__STATE_VARIABLE_Acc1_50_50, hlds__hlds_args__STATE_VARIABLE_Acc2_49_49, &hlds__hlds_args__STATE_VARIABLE_Acc2_51_51);
    }
#line 527 "hlds_args.m"
    {
#line 527 "hlds_args.m"
      mercury__list__map_corresponding_foldl2_8_p_0(hlds__hlds_args__TypeInfo_for_A_70, hlds__hlds_args__TypeInfo_for_B_71, hlds__hlds_args__TypeInfo_for_C_72, hlds__hlds_args__TypeInfo_for_D_73, hlds__hlds_args__TypeInfo_for_E_74, hlds__hlds_args__P_9, hlds__hlds_args__UTIA_17, hlds__hlds_args__UTIB_25, &hlds__hlds_args__UTIC_33, hlds__hlds_args__STATE_VARIABLE_Acc1_50_50, &hlds__hlds_args__STATE_VARIABLE_Acc1_52_52, hlds__hlds_args__STATE_VARIABLE_Acc2_51_51, &hlds__hlds_args__STATE_VARIABLE_Acc2_53_53);
    }
#line 528 "hlds_args.m"
    {
#line 528 "hlds_args.m"
      mercury__list__map_corresponding_foldl2_8_p_0(hlds__hlds_args__TypeInfo_for_A_70, hlds__hlds_args__TypeInfo_for_B_71, hlds__hlds_args__TypeInfo_for_C_72, hlds__hlds_args__TypeInfo_for_D_73, hlds__hlds_args__TypeInfo_for_E_74, hlds__hlds_args__P_9, hlds__hlds_args__ETIA_18, hlds__hlds_args__ETIB_26, &hlds__hlds_args__ETIC_34, hlds__hlds_args__STATE_VARIABLE_Acc1_52_52, &hlds__hlds_args__STATE_VARIABLE_Acc1_54_54, hlds__hlds_args__STATE_VARIABLE_Acc2_53_53, &hlds__hlds_args__STATE_VARIABLE_Acc2_55_55);
    }
#line 529 "hlds_args.m"
    {
#line 529 "hlds_args.m"
      mercury__list__map_corresponding_foldl2_8_p_0(hlds__hlds_args__TypeInfo_for_A_70, hlds__hlds_args__TypeInfo_for_B_71, hlds__hlds_args__TypeInfo_for_C_72, hlds__hlds_args__TypeInfo_for_D_73, hlds__hlds_args__TypeInfo_for_E_74, hlds__hlds_args__P_9, hlds__hlds_args__UTCIA_19, hlds__hlds_args__UTCIB_27, &hlds__hlds_args__UTCIC_35, hlds__hlds_args__STATE_VARIABLE_Acc1_54_54, &hlds__hlds_args__STATE_VARIABLE_Acc1_56_56, hlds__hlds_args__STATE_VARIABLE_Acc2_55_55, &hlds__hlds_args__STATE_VARIABLE_Acc2_57_57);
    }
#line 530 "hlds_args.m"
    {
#line 530 "hlds_args.m"
      mercury__list__map_corresponding_foldl2_8_p_0(hlds__hlds_args__TypeInfo_for_A_70, hlds__hlds_args__TypeInfo_for_B_71, hlds__hlds_args__TypeInfo_for_C_72, hlds__hlds_args__TypeInfo_for_D_73, hlds__hlds_args__TypeInfo_for_E_74, hlds__hlds_args__P_9, hlds__hlds_args__ETCIA_20, hlds__hlds_args__ETCIB_28, &hlds__hlds_args__ETCIC_36, hlds__hlds_args__STATE_VARIABLE_Acc1_56_56, &hlds__hlds_args__STATE_VARIABLE_Acc1_58_58, hlds__hlds_args__STATE_VARIABLE_Acc2_57_57, &hlds__hlds_args__STATE_VARIABLE_Acc2_59_59);
    }
#line 531 "hlds_args.m"
    {
#line 531 "hlds_args.m"
      mercury__list__map_corresponding_foldl2_8_p_0(hlds__hlds_args__TypeInfo_for_A_70, hlds__hlds_args__TypeInfo_for_B_71, hlds__hlds_args__TypeInfo_for_C_72, hlds__hlds_args__TypeInfo_for_D_73, hlds__hlds_args__TypeInfo_for_E_74, hlds__hlds_args__P_9, hlds__hlds_args__ArgsA_21, hlds__hlds_args__ArgsB_29, &hlds__hlds_args__ArgsC_37, hlds__hlds_args__STATE_VARIABLE_Acc1_58_58, &hlds__hlds_args__STATE_VARIABLE_Acc1_60_60, hlds__hlds_args__STATE_VARIABLE_Acc2_59_59, &hlds__hlds_args__STATE_VARIABLE_Acc2_61_61);
    }
#line 537 "hlds_args.m"
    if ((hlds__hlds_args__MaybeRetValA_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 537 "hlds_args.m"
      if ((hlds__hlds_args__MaybeRetValB_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 546 "hlds_args.m"
        {
#line 548 "hlds_args.m"
          hlds__hlds_args__MaybeRetValC_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 546 "hlds_args.m"
          *hlds__hlds_args__STATE_VARIABLE_Acc1_45 = hlds__hlds_args__STATE_VARIABLE_Acc1_60_60;
#line 546 "hlds_args.m"
          *hlds__hlds_args__STATE_VARIABLE_Acc2_47 = hlds__hlds_args__STATE_VARIABLE_Acc2_61_61;
#line 546 "hlds_args.m"
        }
#line 537 "hlds_args.m"
      else
#line 542 "hlds_args.m"
        {
#line 544 "hlds_args.m"
          {
#line 544 "hlds_args.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_args", (MR_String) "predicate \140hlds.hlds_args.proc_arg_vector_map_corresponding_foldl2\'/8", (MR_String) "mismatched proc_arg_vectors");
#line 544 "hlds_args.m"
            return;
          }
#line 542 "hlds_args.m"
        }
#line 537 "hlds_args.m"
    else
#line 537 "hlds_args.m"
      {
#line 537 "hlds_args.m"
        MR_Box hlds__hlds_args__V_75_75 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValA_22, (MR_Integer) 0));

#line 537 "hlds_args.m"
        if ((hlds__hlds_args__MaybeRetValB_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 538 "hlds_args.m"
          {
#line 540 "hlds_args.m"
            {
#line 540 "hlds_args.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_args", (MR_String) "predicate \140hlds.hlds_args.proc_arg_vector_map_corresponding_foldl2\'/8", (MR_String) "mismatched proc_arg_vectors");
#line 540 "hlds_args.m"
              return;
            }
#line 538 "hlds_args.m"
          }
#line 537 "hlds_args.m"
        else
#line 533 "hlds_args.m"
          {
#line 533 "hlds_args.m"
            MR_Box hlds__hlds_args__RetValB_39 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValB_30, (MR_Integer) 0));
#line 533 "hlds_args.m"
            MR_Box hlds__hlds_args__RetValC_40;
#line 535 "hlds_args.m"
            void MR_CALL (* hlds__hlds_args__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__hlds_args__P_9, (MR_Integer) 1)));

#line 535 "hlds_args.m"
            {
#line 535 "hlds_args.m"
              hlds__hlds_args__func_0(((MR_Box) hlds__hlds_args__P_9), hlds__hlds_args__V_75_75, hlds__hlds_args__RetValB_39, &hlds__hlds_args__RetValC_40, hlds__hlds_args__STATE_VARIABLE_Acc1_60_60, hlds__hlds_args__STATE_VARIABLE_Acc1_45, hlds__hlds_args__STATE_VARIABLE_Acc2_61_61, hlds__hlds_args__STATE_VARIABLE_Acc2_47);
            }
#line 536 "hlds_args.m"
            {
#line 536 "hlds_args.m"
              hlds__hlds_args__MaybeRetValC_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 536 "hlds_args.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValC_41, 0) = hlds__hlds_args__RetValC_40;
#line 536 "hlds_args.m"
            }
#line 533 "hlds_args.m"
          }
#line 537 "hlds_args.m"
      }
#line 550 "hlds_args.m"
    {
#line 550 "hlds_args.m"
      MR_Word base;
#line 550 "hlds_args.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 550 "hlds_args.m"
      *hlds__hlds_args__C_12 = base;
#line 550 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__ITIC_31));
#line 550 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__ITCIC_32));
#line 550 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__UTIC_33));
#line 550 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__ETIC_34));
#line 550 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__UTCIC_35));
#line 550 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__ETCIC_36));
#line 550 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__ArgsC_37));
#line 550 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__MaybeRetValC_41));
#line 550 "hlds_args.m"
    }
#line 520 "hlds_args.m"
  }
#line 152 "hlds_args.m"
}

#line 149 "hlds_args.m"
MR_bool MR_CALL 
hlds__hlds_args__proc_arg_vector_all_true_2_p_0(
#line 149 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_14,
#line 149 "hlds_args.m"
  MR_Word hlds__hlds_args__P_3,
#line 149 "hlds_args.m"
  MR_Word hlds__hlds_args__V_4)
#line 149 "hlds_args.m"
{
#line 504 "hlds_args.m"
  {
#line 504 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 504 "hlds_args.m"
    MR_Word hlds__hlds_args__ITI_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_4, (MR_Integer) 0)));
#line 504 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCI_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_4, (MR_Integer) 1)));
#line 504 "hlds_args.m"
    MR_Word hlds__hlds_args__UTI_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_4, (MR_Integer) 2)));
#line 504 "hlds_args.m"
    MR_Word hlds__hlds_args__ETI_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_4, (MR_Integer) 3)));
#line 504 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCI_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_4, (MR_Integer) 4)));
#line 504 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCI_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_4, (MR_Integer) 5)));
#line 504 "hlds_args.m"
    MR_Word hlds__hlds_args__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_4, (MR_Integer) 6)));
#line 504 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetVal_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_4, (MR_Integer) 7)));

#line 506 "hlds_args.m"
    {
#line 506 "hlds_args.m"
      hlds__hlds_args__succeeded = mercury__list__all_true_2_p_0(hlds__hlds_args__TypeInfo_for_T_14, hlds__hlds_args__P_3, hlds__hlds_args__ITI_5);
    }
#line 504 "hlds_args.m"
    if (hlds__hlds_args__succeeded)
#line 504 "hlds_args.m"
      {
#line 507 "hlds_args.m"
        {
#line 507 "hlds_args.m"
          hlds__hlds_args__succeeded = mercury__list__all_true_2_p_0(hlds__hlds_args__TypeInfo_for_T_14, hlds__hlds_args__P_3, hlds__hlds_args__ITCI_6);
        }
#line 504 "hlds_args.m"
        if (hlds__hlds_args__succeeded)
#line 504 "hlds_args.m"
          {
#line 508 "hlds_args.m"
            {
#line 508 "hlds_args.m"
              hlds__hlds_args__succeeded = mercury__list__all_true_2_p_0(hlds__hlds_args__TypeInfo_for_T_14, hlds__hlds_args__P_3, hlds__hlds_args__UTI_7);
            }
#line 504 "hlds_args.m"
            if (hlds__hlds_args__succeeded)
#line 504 "hlds_args.m"
              {
#line 509 "hlds_args.m"
                {
#line 509 "hlds_args.m"
                  hlds__hlds_args__succeeded = mercury__list__all_true_2_p_0(hlds__hlds_args__TypeInfo_for_T_14, hlds__hlds_args__P_3, hlds__hlds_args__ETI_8);
                }
#line 504 "hlds_args.m"
                if (hlds__hlds_args__succeeded)
#line 504 "hlds_args.m"
                  {
#line 510 "hlds_args.m"
                    {
#line 510 "hlds_args.m"
                      hlds__hlds_args__succeeded = mercury__list__all_true_2_p_0(hlds__hlds_args__TypeInfo_for_T_14, hlds__hlds_args__P_3, hlds__hlds_args__UTCI_9);
                    }
#line 504 "hlds_args.m"
                    if (hlds__hlds_args__succeeded)
#line 504 "hlds_args.m"
                      {
#line 511 "hlds_args.m"
                        {
#line 511 "hlds_args.m"
                          hlds__hlds_args__succeeded = mercury__list__all_true_2_p_0(hlds__hlds_args__TypeInfo_for_T_14, hlds__hlds_args__P_3, hlds__hlds_args__ETCI_10);
                        }
#line 504 "hlds_args.m"
                        if (hlds__hlds_args__succeeded)
#line 504 "hlds_args.m"
                          {
#line 512 "hlds_args.m"
                            {
#line 512 "hlds_args.m"
                              hlds__hlds_args__succeeded = mercury__list__all_true_2_p_0(hlds__hlds_args__TypeInfo_for_T_14, hlds__hlds_args__P_3, hlds__hlds_args__Args_11);
                            }
#line 504 "hlds_args.m"
                            if (hlds__hlds_args__succeeded)
#line 516 "hlds_args.m"
                              {
#line 516 "hlds_args.m"
                                if ((hlds__hlds_args__MaybeRetVal_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 517 "hlds_args.m"
                                  hlds__hlds_args__succeeded = MR_TRUE;
#line 516 "hlds_args.m"
                                else
#line 514 "hlds_args.m"
                                  {
#line 514 "hlds_args.m"
                                    MR_Box hlds__hlds_args__RetVal_13 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetVal_12, (MR_Integer) 0));
#line 515 "hlds_args.m"
                                    MR_bool MR_CALL (* hlds__hlds_args__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), hlds__hlds_args__P_3, (MR_Integer) 1)));

#line 515 "hlds_args.m"
                                    {
#line 515 "hlds_args.m"
                                      hlds__hlds_args__succeeded = hlds__hlds_args__func_0(((MR_Box) hlds__hlds_args__P_3), hlds__hlds_args__RetVal_13);
                                    }
#line 514 "hlds_args.m"
                                  }
#line 516 "hlds_args.m"
                              }
#line 504 "hlds_args.m"
                          }
#line 504 "hlds_args.m"
                      }
#line 504 "hlds_args.m"
                  }
#line 504 "hlds_args.m"
              }
#line 504 "hlds_args.m"
          }
#line 504 "hlds_args.m"
      }
#line 504 "hlds_args.m"
    return hlds__hlds_args__succeeded;
#line 504 "hlds_args.m"
  }
#line 149 "hlds_args.m"
}

#line 144 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__proc_arg_vector_map_corresponding_4_p_0(
#line 144 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_44,
#line 144 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_U_45,
#line 144 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_V_46,
#line 144 "hlds_args.m"
  MR_Word hlds__hlds_args__P_5,
#line 144 "hlds_args.m"
  MR_Word hlds__hlds_args__A_6,
#line 144 "hlds_args.m"
  MR_Word hlds__hlds_args__B_7,
#line 144 "hlds_args.m"
  MR_Word * hlds__hlds_args__C_8)
#line 144 "hlds_args.m"
{
#line 471 "hlds_args.m"
  {
#line 471 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 471 "hlds_args.m"
    MR_Word hlds__hlds_args__ITIA_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_6, (MR_Integer) 0)));
#line 471 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCIA_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_6, (MR_Integer) 1)));
#line 471 "hlds_args.m"
    MR_Word hlds__hlds_args__UTIA_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_6, (MR_Integer) 2)));
#line 471 "hlds_args.m"
    MR_Word hlds__hlds_args__ETIA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_6, (MR_Integer) 3)));
#line 471 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCIA_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_6, (MR_Integer) 4)));
#line 471 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCIA_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_6, (MR_Integer) 5)));
#line 471 "hlds_args.m"
    MR_Word hlds__hlds_args__ArgsA_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_6, (MR_Integer) 6)));
#line 471 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValA_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__A_6, (MR_Integer) 7)));
#line 471 "hlds_args.m"
    MR_Word hlds__hlds_args__ITIB_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_7, (MR_Integer) 0)));
#line 471 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCIB_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_7, (MR_Integer) 1)));
#line 471 "hlds_args.m"
    MR_Word hlds__hlds_args__UTIB_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_7, (MR_Integer) 2)));
#line 471 "hlds_args.m"
    MR_Word hlds__hlds_args__ETIB_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_7, (MR_Integer) 3)));
#line 471 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCIB_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_7, (MR_Integer) 4)));
#line 471 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCIB_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_7, (MR_Integer) 5)));
#line 471 "hlds_args.m"
    MR_Word hlds__hlds_args__ArgsB_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_7, (MR_Integer) 6)));
#line 471 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValB_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__B_7, (MR_Integer) 7)));
#line 471 "hlds_args.m"
    MR_Word hlds__hlds_args__ITIC_25;
#line 471 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCIC_26;
#line 471 "hlds_args.m"
    MR_Word hlds__hlds_args__UTIC_27;
#line 471 "hlds_args.m"
    MR_Word hlds__hlds_args__ETIC_28;
#line 471 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCIC_29;
#line 471 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCIC_30;
#line 471 "hlds_args.m"
    MR_Word hlds__hlds_args__ArgsC_31;
#line 471 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValC_35;

#line 476 "hlds_args.m"
    {
#line 476 "hlds_args.m"
      mercury__list__map_corresponding_4_p_0(hlds__hlds_args__TypeInfo_for_T_44, hlds__hlds_args__TypeInfo_for_U_45, hlds__hlds_args__TypeInfo_for_V_46, hlds__hlds_args__P_5, hlds__hlds_args__ITIA_9, hlds__hlds_args__ITIB_17, &hlds__hlds_args__ITIC_25);
    }
#line 477 "hlds_args.m"
    {
#line 477 "hlds_args.m"
      mercury__list__map_corresponding_4_p_0(hlds__hlds_args__TypeInfo_for_T_44, hlds__hlds_args__TypeInfo_for_U_45, hlds__hlds_args__TypeInfo_for_V_46, hlds__hlds_args__P_5, hlds__hlds_args__ITCIA_10, hlds__hlds_args__ITCIB_18, &hlds__hlds_args__ITCIC_26);
    }
#line 478 "hlds_args.m"
    {
#line 478 "hlds_args.m"
      mercury__list__map_corresponding_4_p_0(hlds__hlds_args__TypeInfo_for_T_44, hlds__hlds_args__TypeInfo_for_U_45, hlds__hlds_args__TypeInfo_for_V_46, hlds__hlds_args__P_5, hlds__hlds_args__UTIA_11, hlds__hlds_args__UTIB_19, &hlds__hlds_args__UTIC_27);
    }
#line 479 "hlds_args.m"
    {
#line 479 "hlds_args.m"
      mercury__list__map_corresponding_4_p_0(hlds__hlds_args__TypeInfo_for_T_44, hlds__hlds_args__TypeInfo_for_U_45, hlds__hlds_args__TypeInfo_for_V_46, hlds__hlds_args__P_5, hlds__hlds_args__ETIA_12, hlds__hlds_args__ETIB_20, &hlds__hlds_args__ETIC_28);
    }
#line 480 "hlds_args.m"
    {
#line 480 "hlds_args.m"
      mercury__list__map_corresponding_4_p_0(hlds__hlds_args__TypeInfo_for_T_44, hlds__hlds_args__TypeInfo_for_U_45, hlds__hlds_args__TypeInfo_for_V_46, hlds__hlds_args__P_5, hlds__hlds_args__UTCIA_13, hlds__hlds_args__UTCIB_21, &hlds__hlds_args__UTCIC_29);
    }
#line 481 "hlds_args.m"
    {
#line 481 "hlds_args.m"
      mercury__list__map_corresponding_4_p_0(hlds__hlds_args__TypeInfo_for_T_44, hlds__hlds_args__TypeInfo_for_U_45, hlds__hlds_args__TypeInfo_for_V_46, hlds__hlds_args__P_5, hlds__hlds_args__ETCIA_14, hlds__hlds_args__ETCIB_22, &hlds__hlds_args__ETCIC_30);
    }
#line 482 "hlds_args.m"
    {
#line 482 "hlds_args.m"
      mercury__list__map_corresponding_4_p_0(hlds__hlds_args__TypeInfo_for_T_44, hlds__hlds_args__TypeInfo_for_U_45, hlds__hlds_args__TypeInfo_for_V_46, hlds__hlds_args__P_5, hlds__hlds_args__ArgsA_15, hlds__hlds_args__ArgsB_23, &hlds__hlds_args__ArgsC_31);
    }
#line 488 "hlds_args.m"
    if ((hlds__hlds_args__MaybeRetValA_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 488 "hlds_args.m"
      if ((hlds__hlds_args__MaybeRetValB_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 497 "hlds_args.m"
        hlds__hlds_args__MaybeRetValC_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 488 "hlds_args.m"
      else
#line 493 "hlds_args.m"
        {
#line 495 "hlds_args.m"
          {
#line 495 "hlds_args.m"
            mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_args", (MR_String) "predicate \140hlds.hlds_args.proc_arg_vector_map_corresponding\'/4", (MR_String) "mismatched proc_arg_vectors");
#line 495 "hlds_args.m"
            return;
          }
#line 493 "hlds_args.m"
        }
#line 488 "hlds_args.m"
    else
#line 488 "hlds_args.m"
      {
#line 488 "hlds_args.m"
        MR_Box hlds__hlds_args__V_47_47 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValA_16, (MR_Integer) 0));

#line 488 "hlds_args.m"
        if ((hlds__hlds_args__MaybeRetValB_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 489 "hlds_args.m"
          {
#line 491 "hlds_args.m"
            {
#line 491 "hlds_args.m"
              mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_args", (MR_String) "predicate \140hlds.hlds_args.proc_arg_vector_map_corresponding\'/4", (MR_String) "mismatched proc_arg_vectors");
#line 491 "hlds_args.m"
              return;
            }
#line 489 "hlds_args.m"
          }
#line 488 "hlds_args.m"
        else
#line 484 "hlds_args.m"
          {
#line 484 "hlds_args.m"
            MR_Box hlds__hlds_args__RetValB_33 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValB_24, (MR_Integer) 0));
#line 484 "hlds_args.m"
            MR_Box hlds__hlds_args__RetValC_34;
#line 486 "hlds_args.m"
            void MR_CALL (* hlds__hlds_args__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__hlds_args__P_5, (MR_Integer) 1)));

#line 486 "hlds_args.m"
            {
#line 486 "hlds_args.m"
              hlds__hlds_args__func_0(((MR_Box) hlds__hlds_args__P_5), hlds__hlds_args__V_47_47, hlds__hlds_args__RetValB_33, &hlds__hlds_args__RetValC_34);
            }
#line 487 "hlds_args.m"
            {
#line 487 "hlds_args.m"
              hlds__hlds_args__MaybeRetValC_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 487 "hlds_args.m"
              MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValC_35, 0) = hlds__hlds_args__RetValC_34;
#line 487 "hlds_args.m"
            }
#line 484 "hlds_args.m"
          }
#line 488 "hlds_args.m"
      }
#line 501 "hlds_args.m"
    {
#line 501 "hlds_args.m"
      MR_Word base;
#line 501 "hlds_args.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 501 "hlds_args.m"
      *hlds__hlds_args__C_8 = base;
#line 501 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__ITIC_25));
#line 501 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__ITCIC_26));
#line 501 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__UTIC_27));
#line 501 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__ETIC_28));
#line 501 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__UTCIC_29));
#line 501 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__ETCIC_30));
#line 501 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__ArgsC_31));
#line 501 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__MaybeRetValC_35));
#line 501 "hlds_args.m"
    }
#line 471 "hlds_args.m"
  }
#line 144 "hlds_args.m"
}

#line 141 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__proc_arg_vector_map_3_p_0(
#line 141 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_25,
#line 141 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_U_26,
#line 141 "hlds_args.m"
  MR_Word hlds__hlds_args__Pred_4,
#line 141 "hlds_args.m"
  MR_Word hlds__hlds_args__V0_5,
#line 141 "hlds_args.m"
  MR_Word * hlds__hlds_args__V_6)
#line 141 "hlds_args.m"
{
#line 450 "hlds_args.m"
  {
#line 450 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 450 "hlds_args.m"
    MR_Word hlds__hlds_args__ITI0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 0)));
#line 450 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCI0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 1)));
#line 450 "hlds_args.m"
    MR_Word hlds__hlds_args__UTI0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 2)));
#line 450 "hlds_args.m"
    MR_Word hlds__hlds_args__ETI0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 3)));
#line 450 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCI0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 4)));
#line 450 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCI0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 5)));
#line 450 "hlds_args.m"
    MR_Word hlds__hlds_args__Args0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 6)));
#line 450 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetVal0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 7)));
#line 450 "hlds_args.m"
    MR_Word hlds__hlds_args__ITI_15;
#line 450 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCI_16;
#line 450 "hlds_args.m"
    MR_Word hlds__hlds_args__UTI_17;
#line 450 "hlds_args.m"
    MR_Word hlds__hlds_args__ETI_18;
#line 450 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCI_19;
#line 450 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCI_20;
#line 450 "hlds_args.m"
    MR_Word hlds__hlds_args__Args_21;
#line 450 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetVal_24;

#line 453 "hlds_args.m"
    {
#line 453 "hlds_args.m"
      mercury__list__map_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Pred_4, hlds__hlds_args__ITI0_7, &hlds__hlds_args__ITI_15);
    }
#line 454 "hlds_args.m"
    {
#line 454 "hlds_args.m"
      mercury__list__map_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Pred_4, hlds__hlds_args__ITCI0_8, &hlds__hlds_args__ITCI_16);
    }
#line 455 "hlds_args.m"
    {
#line 455 "hlds_args.m"
      mercury__list__map_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Pred_4, hlds__hlds_args__UTI0_9, &hlds__hlds_args__UTI_17);
    }
#line 456 "hlds_args.m"
    {
#line 456 "hlds_args.m"
      mercury__list__map_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Pred_4, hlds__hlds_args__ETI0_10, &hlds__hlds_args__ETI_18);
    }
#line 457 "hlds_args.m"
    {
#line 457 "hlds_args.m"
      mercury__list__map_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Pred_4, hlds__hlds_args__UTCI0_11, &hlds__hlds_args__UTCI_19);
    }
#line 458 "hlds_args.m"
    {
#line 458 "hlds_args.m"
      mercury__list__map_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Pred_4, hlds__hlds_args__ETCI0_12, &hlds__hlds_args__ETCI_20);
    }
#line 459 "hlds_args.m"
    {
#line 459 "hlds_args.m"
      mercury__list__map_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Pred_4, hlds__hlds_args__Args0_13, &hlds__hlds_args__Args_21);
    }
#line 464 "hlds_args.m"
    if ((hlds__hlds_args__MaybeRetVal0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 466 "hlds_args.m"
      hlds__hlds_args__MaybeRetVal_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 464 "hlds_args.m"
    else
#line 461 "hlds_args.m"
      {
#line 461 "hlds_args.m"
        MR_Box hlds__hlds_args__RetVal0_22 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetVal0_14, (MR_Integer) 0));
#line 461 "hlds_args.m"
        MR_Box hlds__hlds_args__RetVal_23;
#line 462 "hlds_args.m"
        void MR_CALL (* hlds__hlds_args__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), hlds__hlds_args__Pred_4, (MR_Integer) 1)));

#line 462 "hlds_args.m"
        {
#line 462 "hlds_args.m"
          hlds__hlds_args__func_0(((MR_Box) hlds__hlds_args__Pred_4), hlds__hlds_args__RetVal0_22, &hlds__hlds_args__RetVal_23);
        }
#line 463 "hlds_args.m"
        {
#line 463 "hlds_args.m"
          hlds__hlds_args__MaybeRetVal_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 463 "hlds_args.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetVal_24, 0) = hlds__hlds_args__RetVal_23;
#line 463 "hlds_args.m"
        }
#line 461 "hlds_args.m"
      }
#line 468 "hlds_args.m"
    {
#line 468 "hlds_args.m"
      MR_Word base;
#line 468 "hlds_args.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 468 "hlds_args.m"
      *hlds__hlds_args__V_6 = base;
#line 468 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__ITI_15));
#line 468 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__ITCI_16));
#line 468 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__UTI_17));
#line 468 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__ETI_18));
#line 468 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__UTCI_19));
#line 468 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__ETCI_20));
#line 468 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__Args_21));
#line 468 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__MaybeRetVal_24));
#line 468 "hlds_args.m"
    }
#line 450 "hlds_args.m"
  }
#line 141 "hlds_args.m"
}

#line 138 "hlds_args.m"
MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_map_2_f_0(
#line 138 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_25,
#line 138 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_U_26,
#line 138 "hlds_args.m"
  MR_Word hlds__hlds_args__Func_4,
#line 138 "hlds_args.m"
  MR_Word hlds__hlds_args__V0_5)
#line 138 "hlds_args.m"
{
#line 429 "hlds_args.m"
  {
#line 429 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 429 "hlds_args.m"
    MR_Word hlds__hlds_args__V_6;
#line 429 "hlds_args.m"
    MR_Word hlds__hlds_args__ITI0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 0)));
#line 429 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCI0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 1)));
#line 429 "hlds_args.m"
    MR_Word hlds__hlds_args__UTI0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 2)));
#line 429 "hlds_args.m"
    MR_Word hlds__hlds_args__ETI0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 3)));
#line 429 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCI0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 4)));
#line 429 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCI0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 5)));
#line 429 "hlds_args.m"
    MR_Word hlds__hlds_args__Args0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 6)));
#line 429 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetVal0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V0_5, (MR_Integer) 7)));
#line 429 "hlds_args.m"
    MR_Word hlds__hlds_args__ITI_15;
#line 429 "hlds_args.m"
    MR_Word hlds__hlds_args__ITCI_16;
#line 429 "hlds_args.m"
    MR_Word hlds__hlds_args__UTI_17;
#line 429 "hlds_args.m"
    MR_Word hlds__hlds_args__ETI_18;
#line 429 "hlds_args.m"
    MR_Word hlds__hlds_args__UTCI_19;
#line 429 "hlds_args.m"
    MR_Word hlds__hlds_args__ETCI_20;
#line 429 "hlds_args.m"
    MR_Word hlds__hlds_args__Args_21;
#line 429 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetVal_24;

#line 432 "hlds_args.m"
    {
#line 432 "hlds_args.m"
      hlds__hlds_args__ITI_15 = mercury__list__map_2_f_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Func_4, hlds__hlds_args__ITI0_7);
    }
#line 433 "hlds_args.m"
    {
#line 433 "hlds_args.m"
      hlds__hlds_args__ITCI_16 = mercury__list__map_2_f_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Func_4, hlds__hlds_args__ITCI0_8);
    }
#line 434 "hlds_args.m"
    {
#line 434 "hlds_args.m"
      hlds__hlds_args__UTI_17 = mercury__list__map_2_f_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Func_4, hlds__hlds_args__UTI0_9);
    }
#line 435 "hlds_args.m"
    {
#line 435 "hlds_args.m"
      hlds__hlds_args__ETI_18 = mercury__list__map_2_f_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Func_4, hlds__hlds_args__ETI0_10);
    }
#line 436 "hlds_args.m"
    {
#line 436 "hlds_args.m"
      hlds__hlds_args__UTCI_19 = mercury__list__map_2_f_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Func_4, hlds__hlds_args__UTCI0_11);
    }
#line 437 "hlds_args.m"
    {
#line 437 "hlds_args.m"
      hlds__hlds_args__ETCI_20 = mercury__list__map_2_f_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Func_4, hlds__hlds_args__ETCI0_12);
    }
#line 438 "hlds_args.m"
    {
#line 438 "hlds_args.m"
      hlds__hlds_args__Args_21 = mercury__list__map_2_f_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_U_26, hlds__hlds_args__Func_4, hlds__hlds_args__Args0_13);
    }
#line 443 "hlds_args.m"
    if ((hlds__hlds_args__MaybeRetVal0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 445 "hlds_args.m"
      hlds__hlds_args__MaybeRetVal_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 443 "hlds_args.m"
    else
#line 440 "hlds_args.m"
      {
#line 440 "hlds_args.m"
        MR_Box hlds__hlds_args__RetVal0_22 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetVal0_14, (MR_Integer) 0));
#line 440 "hlds_args.m"
        MR_Box hlds__hlds_args__RetVal_23;
#line 441 "hlds_args.m"
        MR_Box MR_CALL (* hlds__hlds_args__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), hlds__hlds_args__Func_4, (MR_Integer) 1)));

#line 441 "hlds_args.m"
        {
#line 441 "hlds_args.m"
          hlds__hlds_args__RetVal_23 = hlds__hlds_args__func_0(((MR_Box) hlds__hlds_args__Func_4), hlds__hlds_args__RetVal0_22);
        }
#line 442 "hlds_args.m"
        {
#line 442 "hlds_args.m"
          hlds__hlds_args__MaybeRetVal_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 442 "hlds_args.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetVal_24, 0) = hlds__hlds_args__RetVal_23;
#line 442 "hlds_args.m"
        }
#line 440 "hlds_args.m"
      }
#line 447 "hlds_args.m"
    {
#line 447 "hlds_args.m"
      hlds__hlds_args__V_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 447 "hlds_args.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_args__V_6, 0) = ((MR_Box) (hlds__hlds_args__ITI_15));
#line 447 "hlds_args.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_args__V_6, 1) = ((MR_Box) (hlds__hlds_args__ITCI_16));
#line 447 "hlds_args.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_args__V_6, 2) = ((MR_Box) (hlds__hlds_args__UTI_17));
#line 447 "hlds_args.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_args__V_6, 3) = ((MR_Box) (hlds__hlds_args__ETI_18));
#line 447 "hlds_args.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_args__V_6, 4) = ((MR_Box) (hlds__hlds_args__UTCI_19));
#line 447 "hlds_args.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_args__V_6, 5) = ((MR_Box) (hlds__hlds_args__ETCI_20));
#line 447 "hlds_args.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_args__V_6, 6) = ((MR_Box) (hlds__hlds_args__Args_21));
#line 447 "hlds_args.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_args__V_6, 7) = ((MR_Box) (hlds__hlds_args__MaybeRetVal_24));
#line 447 "hlds_args.m"
    }
#line 429 "hlds_args.m"
    return hlds__hlds_args__V_6;
#line 429 "hlds_args.m"
  }
#line 138 "hlds_args.m"
}

#line 126 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__proc_arg_vector_to_func_args_3_p_0(
#line 126 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_26,
#line 126 "hlds_args.m"
  MR_Word hlds__hlds_args__Vector_4,
#line 126 "hlds_args.m"
  MR_Word * hlds__hlds_args__FuncArgs_5,
#line 126 "hlds_args.m"
  MR_Box * hlds__hlds_args__FuncRetVal_6)
#line 126 "hlds_args.m"
{
#line 413 "hlds_args.m"
  {
#line 413 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 413 "hlds_args.m"
    MR_Word hlds__hlds_args__InstanceTypeInfos_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__Vector_4, (MR_Integer) 0)));
#line 413 "hlds_args.m"
    MR_Word hlds__hlds_args__InstanceTypeClassInfos_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__Vector_4, (MR_Integer) 1)));
#line 413 "hlds_args.m"
    MR_Word hlds__hlds_args__UnivTypeInfos_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__Vector_4, (MR_Integer) 2)));
#line 413 "hlds_args.m"
    MR_Word hlds__hlds_args__ExistTypeInfos_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__Vector_4, (MR_Integer) 3)));
#line 413 "hlds_args.m"
    MR_Word hlds__hlds_args__UnivTypeClassInfos_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__Vector_4, (MR_Integer) 4)));
#line 413 "hlds_args.m"
    MR_Word hlds__hlds_args__ExistTypeClassInfos_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__Vector_4, (MR_Integer) 5)));
#line 413 "hlds_args.m"
    MR_Word hlds__hlds_args__OrigArgs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__Vector_4, (MR_Integer) 6)));
#line 413 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValue_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__Vector_4, (MR_Integer) 7)));
#line 413 "hlds_args.m"
    MR_Word hlds__hlds_args__V_15_15;
#line 413 "hlds_args.m"
    MR_Word hlds__hlds_args__V_16_16;
#line 413 "hlds_args.m"
    MR_Word hlds__hlds_args__V_17_17;
#line 413 "hlds_args.m"
    MR_Word hlds__hlds_args__V_18_18;
#line 413 "hlds_args.m"
    MR_Word hlds__hlds_args__V_19_19;
#line 413 "hlds_args.m"
    MR_Word hlds__hlds_args__V_20_20;
#line 413 "hlds_args.m"
    MR_Word hlds__hlds_args__V_21_21;

#line 419 "hlds_args.m"
    {
#line 419 "hlds_args.m"
      hlds__hlds_args__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 419 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_21_21, 0) = ((MR_Box) (hlds__hlds_args__OrigArgs_13));
#line 419 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 419 "hlds_args.m"
    }
#line 419 "hlds_args.m"
    {
#line 419 "hlds_args.m"
      hlds__hlds_args__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 419 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_20_20, 0) = ((MR_Box) (hlds__hlds_args__ExistTypeClassInfos_12));
#line 419 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_20_20, 1) = ((MR_Box) (hlds__hlds_args__V_21_21));
#line 419 "hlds_args.m"
    }
#line 418 "hlds_args.m"
    {
#line 418 "hlds_args.m"
      hlds__hlds_args__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 418 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_19_19, 0) = ((MR_Box) (hlds__hlds_args__UnivTypeClassInfos_11));
#line 418 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_19_19, 1) = ((MR_Box) (hlds__hlds_args__V_20_20));
#line 418 "hlds_args.m"
    }
#line 418 "hlds_args.m"
    {
#line 418 "hlds_args.m"
      hlds__hlds_args__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 418 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_18_18, 0) = ((MR_Box) (hlds__hlds_args__ExistTypeInfos_10));
#line 418 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_18_18, 1) = ((MR_Box) (hlds__hlds_args__V_19_19));
#line 418 "hlds_args.m"
    }
#line 418 "hlds_args.m"
    {
#line 418 "hlds_args.m"
      hlds__hlds_args__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 418 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_17_17, 0) = ((MR_Box) (hlds__hlds_args__UnivTypeInfos_9));
#line 418 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_17_17, 1) = ((MR_Box) (hlds__hlds_args__V_18_18));
#line 418 "hlds_args.m"
    }
#line 417 "hlds_args.m"
    {
#line 417 "hlds_args.m"
      hlds__hlds_args__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_16_16, 0) = ((MR_Box) (hlds__hlds_args__InstanceTypeClassInfos_8));
#line 417 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_16_16, 1) = ((MR_Box) (hlds__hlds_args__V_17_17));
#line 417 "hlds_args.m"
    }
#line 417 "hlds_args.m"
    {
#line 417 "hlds_args.m"
      hlds__hlds_args__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 417 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_15_15, 0) = ((MR_Box) (hlds__hlds_args__InstanceTypeInfos_7));
#line 417 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_15_15, 1) = ((MR_Box) (hlds__hlds_args__V_16_16));
#line 417 "hlds_args.m"
    }
#line 417 "hlds_args.m"
    {
#line 417 "hlds_args.m"
      *hlds__hlds_args__FuncArgs_5 = mercury__list__condense_1_f_0(hlds__hlds_args__TypeInfo_for_T_26, hlds__hlds_args__V_15_15);
    }
#line 422 "hlds_args.m"
    if ((hlds__hlds_args__MaybeRetValue_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 423 "hlds_args.m"
      {
#line 424 "hlds_args.m"
        {
#line 424 "hlds_args.m"
          mercury__require__unexpected_3_p_0((MR_String) "hlds.hlds_args", (MR_String) "predicate \140hlds.hlds_args.proc_arg_vector_to_func_args\'/3", (MR_String) "predicate");
#line 424 "hlds_args.m"
          return;
        }
#line 423 "hlds_args.m"
      }
#line 422 "hlds_args.m"
    else
#line 421 "hlds_args.m"
      *hlds__hlds_args__FuncRetVal_6 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValue_14, (MR_Integer) 0));
#line 413 "hlds_args.m"
  }
#line 126 "hlds_args.m"
}

#line 120 "hlds_args.m"
MR_bool MR_CALL 
hlds__hlds_args__proc_arg_vector_member_2_p_0(
#line 120 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_13,
#line 120 "hlds_args.m"
  MR_Word hlds__hlds_args__ArgVec_3,
#line 120 "hlds_args.m"
  MR_Box hlds__hlds_args__Var_4)
#line 120 "hlds_args.m"
{
#line 399 "hlds_args.m"
  {
#line 399 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 399 "hlds_args.m"
    MR_Word hlds__hlds_args__InstanceTypeInfos_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 0)));
#line 399 "hlds_args.m"
    MR_Word hlds__hlds_args__InstanceTypeClassInfos_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 1)));
#line 399 "hlds_args.m"
    MR_Word hlds__hlds_args__UnivTypeInfos_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 2)));
#line 399 "hlds_args.m"
    MR_Word hlds__hlds_args__ExistTypeInfos_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 3)));
#line 399 "hlds_args.m"
    MR_Word hlds__hlds_args__UnivTypeClassInfos_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 4)));
#line 399 "hlds_args.m"
    MR_Word hlds__hlds_args__ExistTypeClassInfos_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 5)));
#line 399 "hlds_args.m"
    MR_Word hlds__hlds_args__OrigArgs_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 6)));
#line 399 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValue_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 7)));

#line 403 "hlds_args.m"
    {
#line 403 "hlds_args.m"
      hlds__hlds_args__succeeded = mercury__list__member_2_p_0(hlds__hlds_args__TypeInfo_for_T_13, hlds__hlds_args__Var_4, hlds__hlds_args__OrigArgs_11);
    }
#line 404 "hlds_args.m"
    if (!(hlds__hlds_args__succeeded))
#line 404 "hlds_args.m"
      {
#line 404 "hlds_args.m"
        {
#line 404 "hlds_args.m"
          MR_Box hlds__hlds_args__V_14_14;

#line 404 "hlds_args.m"
          hlds__hlds_args__succeeded = ((MR_tag((MR_Word) hlds__hlds_args__MaybeRetValue_12)) == (MR_mktag((MR_Integer) 1)));
#line 404 "hlds_args.m"
          if (hlds__hlds_args__succeeded)
#line 404 "hlds_args.m"
            {
#line 404 "hlds_args.m"
              hlds__hlds_args__V_14_14 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValue_12, (MR_Integer) 0));
#line 404 "hlds_args.m"
              {
#line 404 "hlds_args.m"
                hlds__hlds_args__succeeded = mercury__builtin__unify_2_p_0(hlds__hlds_args__TypeInfo_for_T_13, hlds__hlds_args__Var_4, hlds__hlds_args__V_14_14);
              }
#line 404 "hlds_args.m"
            }
#line 404 "hlds_args.m"
        }
#line 404 "hlds_args.m"
        if (!(hlds__hlds_args__succeeded))
#line 404 "hlds_args.m"
          {
#line 405 "hlds_args.m"
            {
#line 405 "hlds_args.m"
              hlds__hlds_args__succeeded = mercury__list__member_2_p_0(hlds__hlds_args__TypeInfo_for_T_13, hlds__hlds_args__Var_4, hlds__hlds_args__InstanceTypeInfos_5);
            }
#line 404 "hlds_args.m"
            if (!(hlds__hlds_args__succeeded))
#line 404 "hlds_args.m"
              {
#line 406 "hlds_args.m"
                {
#line 406 "hlds_args.m"
                  hlds__hlds_args__succeeded = mercury__list__member_2_p_0(hlds__hlds_args__TypeInfo_for_T_13, hlds__hlds_args__Var_4, hlds__hlds_args__InstanceTypeClassInfos_6);
                }
#line 404 "hlds_args.m"
                if (!(hlds__hlds_args__succeeded))
#line 404 "hlds_args.m"
                  {
#line 407 "hlds_args.m"
                    {
#line 407 "hlds_args.m"
                      hlds__hlds_args__succeeded = mercury__list__member_2_p_0(hlds__hlds_args__TypeInfo_for_T_13, hlds__hlds_args__Var_4, hlds__hlds_args__UnivTypeInfos_7);
                    }
#line 404 "hlds_args.m"
                    if (!(hlds__hlds_args__succeeded))
#line 404 "hlds_args.m"
                      {
#line 408 "hlds_args.m"
                        {
#line 408 "hlds_args.m"
                          hlds__hlds_args__succeeded = mercury__list__member_2_p_0(hlds__hlds_args__TypeInfo_for_T_13, hlds__hlds_args__Var_4, hlds__hlds_args__ExistTypeInfos_8);
                        }
#line 404 "hlds_args.m"
                        if (!(hlds__hlds_args__succeeded))
#line 404 "hlds_args.m"
                          {
#line 409 "hlds_args.m"
                            {
#line 409 "hlds_args.m"
                              hlds__hlds_args__succeeded = mercury__list__member_2_p_0(hlds__hlds_args__TypeInfo_for_T_13, hlds__hlds_args__Var_4, hlds__hlds_args__UnivTypeClassInfos_9);
                            }
#line 404 "hlds_args.m"
                            if (!(hlds__hlds_args__succeeded))
#line 410 "hlds_args.m"
                              {
#line 410 "hlds_args.m"
                                hlds__hlds_args__succeeded = mercury__list__member_2_p_0(hlds__hlds_args__TypeInfo_for_T_13, hlds__hlds_args__Var_4, hlds__hlds_args__ExistTypeClassInfos_10);
                              }
#line 404 "hlds_args.m"
                          }
#line 404 "hlds_args.m"
                      }
#line 404 "hlds_args.m"
                  }
#line 404 "hlds_args.m"
              }
#line 404 "hlds_args.m"
          }
#line 404 "hlds_args.m"
      }
#line 399 "hlds_args.m"
    return hlds__hlds_args__succeeded;
#line 399 "hlds_args.m"
  }
#line 120 "hlds_args.m"
}

#line 113 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__proc_arg_vector_partition_poly_args_3_p_0(
#line 113 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_25,
#line 113 "hlds_args.m"
  MR_Word hlds__hlds_args__ArgVec_4,
#line 113 "hlds_args.m"
  MR_Word * hlds__hlds_args__PolyArgs_5,
#line 113 "hlds_args.m"
  MR_Word * hlds__hlds_args__NonPolyArgs_6)
#line 113 "hlds_args.m"
{
#line 384 "hlds_args.m"
  {
#line 384 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 384 "hlds_args.m"
    MR_Word hlds__hlds_args__InstanceTypeInfos_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_4, (MR_Integer) 0)));
#line 384 "hlds_args.m"
    MR_Word hlds__hlds_args__InstanceTypeClassInfos_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_4, (MR_Integer) 1)));
#line 384 "hlds_args.m"
    MR_Word hlds__hlds_args__UnivTypeInfos_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_4, (MR_Integer) 2)));
#line 384 "hlds_args.m"
    MR_Word hlds__hlds_args__ExistTypeInfos_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_4, (MR_Integer) 3)));
#line 384 "hlds_args.m"
    MR_Word hlds__hlds_args__UnivTypeClassInfos_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_4, (MR_Integer) 4)));
#line 384 "hlds_args.m"
    MR_Word hlds__hlds_args__ExistTypeClassInfos_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_4, (MR_Integer) 5)));
#line 384 "hlds_args.m"
    MR_Word hlds__hlds_args__OrigArgs_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_4, (MR_Integer) 6)));
#line 384 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValue_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_4, (MR_Integer) 7)));
#line 384 "hlds_args.m"
    MR_Word hlds__hlds_args__V_16_16;
#line 384 "hlds_args.m"
    MR_Word hlds__hlds_args__V_17_17;
#line 384 "hlds_args.m"
    MR_Word hlds__hlds_args__V_18_18;
#line 384 "hlds_args.m"
    MR_Word hlds__hlds_args__V_19_19;
#line 384 "hlds_args.m"
    MR_Word hlds__hlds_args__V_20_20;
#line 384 "hlds_args.m"
    MR_Word hlds__hlds_args__V_21_21;

#line 390 "hlds_args.m"
    {
#line 390 "hlds_args.m"
      hlds__hlds_args__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 390 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_21_21, 0) = ((MR_Box) (hlds__hlds_args__ExistTypeClassInfos_12));
#line 390 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 390 "hlds_args.m"
    }
#line 389 "hlds_args.m"
    {
#line 389 "hlds_args.m"
      hlds__hlds_args__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_20_20, 0) = ((MR_Box) (hlds__hlds_args__UnivTypeClassInfos_11));
#line 389 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_20_20, 1) = ((MR_Box) (hlds__hlds_args__V_21_21));
#line 389 "hlds_args.m"
    }
#line 389 "hlds_args.m"
    {
#line 389 "hlds_args.m"
      hlds__hlds_args__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_19_19, 0) = ((MR_Box) (hlds__hlds_args__ExistTypeInfos_10));
#line 389 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_19_19, 1) = ((MR_Box) (hlds__hlds_args__V_20_20));
#line 389 "hlds_args.m"
    }
#line 389 "hlds_args.m"
    {
#line 389 "hlds_args.m"
      hlds__hlds_args__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 389 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_18_18, 0) = ((MR_Box) (hlds__hlds_args__UnivTypeInfos_9));
#line 389 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_18_18, 1) = ((MR_Box) (hlds__hlds_args__V_19_19));
#line 389 "hlds_args.m"
    }
#line 388 "hlds_args.m"
    {
#line 388 "hlds_args.m"
      hlds__hlds_args__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_17_17, 0) = ((MR_Box) (hlds__hlds_args__InstanceTypeClassInfos_8));
#line 388 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_17_17, 1) = ((MR_Box) (hlds__hlds_args__V_18_18));
#line 388 "hlds_args.m"
    }
#line 388 "hlds_args.m"
    {
#line 388 "hlds_args.m"
      hlds__hlds_args__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 388 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_16_16, 0) = ((MR_Box) (hlds__hlds_args__InstanceTypeInfos_7));
#line 388 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_16_16, 1) = ((MR_Box) (hlds__hlds_args__V_17_17));
#line 388 "hlds_args.m"
    }
#line 388 "hlds_args.m"
    {
#line 388 "hlds_args.m"
      mercury__list__condense_2_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__V_16_16, hlds__hlds_args__PolyArgs_5);
    }
#line 394 "hlds_args.m"
    if ((hlds__hlds_args__MaybeRetValue_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 396 "hlds_args.m"
      *hlds__hlds_args__NonPolyArgs_6 = hlds__hlds_args__OrigArgs_13;
#line 394 "hlds_args.m"
    else
#line 392 "hlds_args.m"
      {
#line 392 "hlds_args.m"
        MR_Box hlds__hlds_args__RetValue_15 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValue_14, (MR_Integer) 0));
#line 392 "hlds_args.m"
        MR_Word hlds__hlds_args__V_23_23;

#line 393 "hlds_args.m"
        {
#line 393 "hlds_args.m"
          hlds__hlds_args__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 393 "hlds_args.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_args__V_23_23, 0) = hlds__hlds_args__RetValue_15;
#line 393 "hlds_args.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_args__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 393 "hlds_args.m"
        }
#line 393 "hlds_args.m"
        {
#line 393 "hlds_args.m"
          *hlds__hlds_args__NonPolyArgs_6 = mercury__list__f_43_43_2_f_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__OrigArgs_13, hlds__hlds_args__V_23_23);
        }
#line 392 "hlds_args.m"
      }
#line 384 "hlds_args.m"
  }
#line 113 "hlds_args.m"
}

#line 105 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__apply_renaming_to_proc_arg_vector_3_p_0(
#line 105 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_25,
#line 105 "hlds_args.m"
  MR_Word hlds__hlds_args__Renaming_4,
#line 105 "hlds_args.m"
  MR_Word hlds__hlds_args__ArgVec0_5,
#line 105 "hlds_args.m"
  MR_Word * hlds__hlds_args__ArgVec_6)
#line 105 "hlds_args.m"
{
#line 355 "hlds_args.m"
  {
#line 355 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 355 "hlds_args.m"
    MR_Word hlds__hlds_args__InstanceTypeInfos0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec0_5, (MR_Integer) 0)));
#line 355 "hlds_args.m"
    MR_Word hlds__hlds_args__InstanceTypeClassInfos0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec0_5, (MR_Integer) 1)));
#line 355 "hlds_args.m"
    MR_Word hlds__hlds_args__UnivTypeInfos0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec0_5, (MR_Integer) 2)));
#line 355 "hlds_args.m"
    MR_Word hlds__hlds_args__ExistTypeInfos0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec0_5, (MR_Integer) 3)));
#line 355 "hlds_args.m"
    MR_Word hlds__hlds_args__UnivTypeClassInfos0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec0_5, (MR_Integer) 4)));
#line 355 "hlds_args.m"
    MR_Word hlds__hlds_args__ExistTypeClassInfos0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec0_5, (MR_Integer) 5)));
#line 355 "hlds_args.m"
    MR_Word hlds__hlds_args__OrigArgs0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec0_5, (MR_Integer) 6)));
#line 355 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValue0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec0_5, (MR_Integer) 7)));
#line 355 "hlds_args.m"
    MR_Word hlds__hlds_args__InstanceTypeInfos_15;
#line 355 "hlds_args.m"
    MR_Word hlds__hlds_args__InstanceTypeClassInfos_16;
#line 355 "hlds_args.m"
    MR_Word hlds__hlds_args__UnivTypeInfos_17;
#line 355 "hlds_args.m"
    MR_Word hlds__hlds_args__ExistTypeInfos_18;
#line 355 "hlds_args.m"
    MR_Word hlds__hlds_args__UnivTypeClassInfos_19;
#line 355 "hlds_args.m"
    MR_Word hlds__hlds_args__ExistTypeClassInfos_20;
#line 355 "hlds_args.m"
    MR_Word hlds__hlds_args__OrigArgs_21;
#line 355 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValue_24;

#line 359 "hlds_args.m"
    {
#line 359 "hlds_args.m"
      parse_tree__prog_type__apply_partial_map_to_list_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__Renaming_4, hlds__hlds_args__InstanceTypeInfos0_7, &hlds__hlds_args__InstanceTypeInfos_15);
    }
#line 360 "hlds_args.m"
    {
#line 360 "hlds_args.m"
      parse_tree__prog_type__apply_partial_map_to_list_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__Renaming_4, hlds__hlds_args__InstanceTypeClassInfos0_8, &hlds__hlds_args__InstanceTypeClassInfos_16);
    }
#line 362 "hlds_args.m"
    {
#line 362 "hlds_args.m"
      parse_tree__prog_type__apply_partial_map_to_list_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__Renaming_4, hlds__hlds_args__UnivTypeInfos0_9, &hlds__hlds_args__UnivTypeInfos_17);
    }
#line 363 "hlds_args.m"
    {
#line 363 "hlds_args.m"
      parse_tree__prog_type__apply_partial_map_to_list_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__Renaming_4, hlds__hlds_args__ExistTypeInfos0_10, &hlds__hlds_args__ExistTypeInfos_18);
    }
#line 364 "hlds_args.m"
    {
#line 364 "hlds_args.m"
      parse_tree__prog_type__apply_partial_map_to_list_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__Renaming_4, hlds__hlds_args__UnivTypeClassInfos0_11, &hlds__hlds_args__UnivTypeClassInfos_19);
    }
#line 366 "hlds_args.m"
    {
#line 366 "hlds_args.m"
      parse_tree__prog_type__apply_partial_map_to_list_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__Renaming_4, hlds__hlds_args__ExistTypeClassInfos0_12, &hlds__hlds_args__ExistTypeClassInfos_20);
    }
#line 368 "hlds_args.m"
    {
#line 368 "hlds_args.m"
      parse_tree__prog_type__apply_partial_map_to_list_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__Renaming_4, hlds__hlds_args__OrigArgs0_13, &hlds__hlds_args__OrigArgs_21);
    }
#line 376 "hlds_args.m"
    if ((hlds__hlds_args__MaybeRetValue0_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 378 "hlds_args.m"
      hlds__hlds_args__MaybeRetValue_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 376 "hlds_args.m"
    else
#line 370 "hlds_args.m"
      {
#line 370 "hlds_args.m"
        MR_Box hlds__hlds_args__Value0_22 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValue0_14, (MR_Integer) 0));
#line 371 "hlds_args.m"
        MR_Box hlds__hlds_args__Value_23;

#line 371 "hlds_args.m"
        {
#line 371 "hlds_args.m"
          hlds__hlds_args__succeeded = mercury__map__search_3_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__Renaming_4, hlds__hlds_args__Value0_22, &hlds__hlds_args__Value_23);
        }
#line 371 "hlds_args.m"
        if (hlds__hlds_args__succeeded)
#line 372 "hlds_args.m"
          {
#line 372 "hlds_args.m"
            hlds__hlds_args__MaybeRetValue_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 372 "hlds_args.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValue_24, 0) = hlds__hlds_args__Value_23;
#line 372 "hlds_args.m"
          }
#line 371 "hlds_args.m"
        else
#line 374 "hlds_args.m"
          hlds__hlds_args__MaybeRetValue_24 = hlds__hlds_args__MaybeRetValue0_14;
#line 370 "hlds_args.m"
      }
#line 380 "hlds_args.m"
    {
#line 380 "hlds_args.m"
      MR_Word base;
#line 380 "hlds_args.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 380 "hlds_args.m"
      *hlds__hlds_args__ArgVec_6 = base;
#line 380 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__InstanceTypeInfos_15));
#line 380 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__InstanceTypeClassInfos_16));
#line 380 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__UnivTypeInfos_17));
#line 380 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__ExistTypeInfos_18));
#line 380 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__UnivTypeClassInfos_19));
#line 380 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__ExistTypeClassInfos_20));
#line 380 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__OrigArgs_21));
#line 380 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__MaybeRetValue_24));
#line 380 "hlds_args.m"
    }
#line 355 "hlds_args.m"
  }
#line 105 "hlds_args.m"
}

#line 100 "hlds_args.m"
MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_to_set_1_f_0(
#line 100 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_6,
#line 100 "hlds_args.m"
  MR_Word hlds__hlds_args__ArgVec_3)
#line 100 "hlds_args.m"
{
#line 351 "hlds_args.m"
  {
#line 351 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 351 "hlds_args.m"
    MR_Word hlds__hlds_args__Set_4;
#line 351 "hlds_args.m"
    MR_Word hlds__hlds_args__List_5;

#line 352 "hlds_args.m"
    {
#line 352 "hlds_args.m"
      hlds__hlds_args__List_5 = hlds__hlds_args__proc_arg_vector_to_list_1_f_0(hlds__hlds_args__TypeInfo_for_T_6, hlds__hlds_args__ArgVec_3);
    }
#line 353 "hlds_args.m"
    {
#line 353 "hlds_args.m"
      hlds__hlds_args__Set_4 = mercury__set__from_list_1_f_0(hlds__hlds_args__TypeInfo_for_T_6, hlds__hlds_args__List_5);
    }
#line 351 "hlds_args.m"
    return hlds__hlds_args__Set_4;
#line 351 "hlds_args.m"
  }
#line 100 "hlds_args.m"
}

#line 96 "hlds_args.m"
MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_to_list_1_f_0(
#line 96 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_25,
#line 96 "hlds_args.m"
  MR_Word hlds__hlds_args__ArgVec_3)
#line 96 "hlds_args.m"
{
#line 331 "hlds_args.m"
  {
#line 331 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 331 "hlds_args.m"
    MR_Word hlds__hlds_args__List_4;
#line 331 "hlds_args.m"
    MR_Word hlds__hlds_args__InstanceTypeInfos_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 0)));
#line 331 "hlds_args.m"
    MR_Word hlds__hlds_args__InstanceTypeClassInfos_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 1)));
#line 331 "hlds_args.m"
    MR_Word hlds__hlds_args__UnivTypeInfos_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 2)));
#line 331 "hlds_args.m"
    MR_Word hlds__hlds_args__ExistTypeInfos_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 3)));
#line 331 "hlds_args.m"
    MR_Word hlds__hlds_args__UnivTypeClassInfos_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 4)));
#line 331 "hlds_args.m"
    MR_Word hlds__hlds_args__ExistTypeClassInfos_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 5)));
#line 331 "hlds_args.m"
    MR_Word hlds__hlds_args__OrigArgs_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 6)));
#line 331 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetValue_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_3, (MR_Integer) 7)));
#line 331 "hlds_args.m"
    MR_Word hlds__hlds_args__RetValue_14;
#line 331 "hlds_args.m"
    MR_Word hlds__hlds_args__V_16_16;
#line 331 "hlds_args.m"
    MR_Word hlds__hlds_args__V_17_17;
#line 331 "hlds_args.m"
    MR_Word hlds__hlds_args__V_18_18;
#line 331 "hlds_args.m"
    MR_Word hlds__hlds_args__V_19_19;
#line 331 "hlds_args.m"
    MR_Word hlds__hlds_args__V_20_20;
#line 331 "hlds_args.m"
    MR_Word hlds__hlds_args__V_21_21;
#line 331 "hlds_args.m"
    MR_Word hlds__hlds_args__V_22_22;
#line 331 "hlds_args.m"
    MR_Word hlds__hlds_args__V_23_23;

#line 338 "hlds_args.m"
    if ((hlds__hlds_args__MaybeRetValue_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 340 "hlds_args.m"
      hlds__hlds_args__RetValue_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 338 "hlds_args.m"
    else
#line 336 "hlds_args.m"
      {
#line 336 "hlds_args.m"
        MR_Box hlds__hlds_args__Value_13 = (MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetValue_12, (MR_Integer) 0));

#line 337 "hlds_args.m"
        {
#line 337 "hlds_args.m"
          hlds__hlds_args__RetValue_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 337 "hlds_args.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_args__RetValue_14, 0) = hlds__hlds_args__Value_13;
#line 337 "hlds_args.m"
          MR_hl_field(MR_mktag(1), hlds__hlds_args__RetValue_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 337 "hlds_args.m"
        }
#line 336 "hlds_args.m"
      }
#line 349 "hlds_args.m"
    {
#line 349 "hlds_args.m"
      hlds__hlds_args__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 349 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_23_23, 0) = ((MR_Box) (hlds__hlds_args__RetValue_14));
#line 349 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_23_23, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 349 "hlds_args.m"
    }
#line 348 "hlds_args.m"
    {
#line 348 "hlds_args.m"
      hlds__hlds_args__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 348 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_22_22, 0) = ((MR_Box) (hlds__hlds_args__OrigArgs_11));
#line 348 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_22_22, 1) = ((MR_Box) (hlds__hlds_args__V_23_23));
#line 348 "hlds_args.m"
    }
#line 347 "hlds_args.m"
    {
#line 347 "hlds_args.m"
      hlds__hlds_args__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 347 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_21_21, 0) = ((MR_Box) (hlds__hlds_args__ExistTypeClassInfos_10));
#line 347 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_21_21, 1) = ((MR_Box) (hlds__hlds_args__V_22_22));
#line 347 "hlds_args.m"
    }
#line 346 "hlds_args.m"
    {
#line 346 "hlds_args.m"
      hlds__hlds_args__V_20_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 346 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_20_20, 0) = ((MR_Box) (hlds__hlds_args__UnivTypeClassInfos_9));
#line 346 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_20_20, 1) = ((MR_Box) (hlds__hlds_args__V_21_21));
#line 346 "hlds_args.m"
    }
#line 345 "hlds_args.m"
    {
#line 345 "hlds_args.m"
      hlds__hlds_args__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 345 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_19_19, 0) = ((MR_Box) (hlds__hlds_args__ExistTypeInfos_8));
#line 345 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_19_19, 1) = ((MR_Box) (hlds__hlds_args__V_20_20));
#line 345 "hlds_args.m"
    }
#line 344 "hlds_args.m"
    {
#line 344 "hlds_args.m"
      hlds__hlds_args__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 344 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_18_18, 0) = ((MR_Box) (hlds__hlds_args__UnivTypeInfos_7));
#line 344 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_18_18, 1) = ((MR_Box) (hlds__hlds_args__V_19_19));
#line 344 "hlds_args.m"
    }
#line 343 "hlds_args.m"
    {
#line 343 "hlds_args.m"
      hlds__hlds_args__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 343 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_17_17, 0) = ((MR_Box) (hlds__hlds_args__InstanceTypeClassInfos_6));
#line 343 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_17_17, 1) = ((MR_Box) (hlds__hlds_args__V_18_18));
#line 343 "hlds_args.m"
    }
#line 342 "hlds_args.m"
    {
#line 342 "hlds_args.m"
      hlds__hlds_args__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 342 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_16_16, 0) = ((MR_Box) (hlds__hlds_args__InstanceTypeInfos_5));
#line 342 "hlds_args.m"
      MR_hl_field(MR_mktag(1), hlds__hlds_args__V_16_16, 1) = ((MR_Box) (hlds__hlds_args__V_17_17));
#line 342 "hlds_args.m"
    }
#line 342 "hlds_args.m"
    {
#line 342 "hlds_args.m"
      mercury__list__condense_2_p_0(hlds__hlds_args__TypeInfo_for_T_25, hlds__hlds_args__V_16_16, &hlds__hlds_args__List_4);
    }
#line 331 "hlds_args.m"
    return hlds__hlds_args__List_4;
#line 331 "hlds_args.m"
  }
#line 96 "hlds_args.m"
}

#line 82 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__proc_arg_vector_set_maybe_ret_value_3_p_0(
#line 82 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_17,
#line 82 "hlds_args.m"
  MR_Word hlds__hlds_args__RV_4,
#line 82 "hlds_args.m"
  MR_Word hlds__hlds_args__STATE_VARIABLE_V_0_6,
#line 82 "hlds_args.m"
  MR_Word * hlds__hlds_args__STATE_VARIABLE_V_7)
#line 82 "hlds_args.m"
{
#line 327 "hlds_args.m"
  {
#line 327 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 327 "hlds_args.m"
    MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 0)));
#line 327 "hlds_args.m"
    MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 1)));
#line 327 "hlds_args.m"
    MR_Word hlds__hlds_args__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 2)));
#line 327 "hlds_args.m"
    MR_Word hlds__hlds_args__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 3)));
#line 327 "hlds_args.m"
    MR_Word hlds__hlds_args__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 4)));
#line 327 "hlds_args.m"
    MR_Word hlds__hlds_args__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 5)));
#line 327 "hlds_args.m"
    MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 6)));
#line 327 "hlds_args.m"
    MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 7)));

#line 327 "hlds_args.m"
    {
#line 327 "hlds_args.m"
      MR_Word base;
#line 327 "hlds_args.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 327 "hlds_args.m"
      *hlds__hlds_args__STATE_VARIABLE_V_7 = base;
#line 327 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__V_9_9));
#line 327 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__V_10_10));
#line 327 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__V_11_11));
#line 327 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__V_12_12));
#line 327 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__V_13_13));
#line 327 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__V_14_14));
#line 327 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__V_15_15));
#line 327 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__RV_4));
#line 327 "hlds_args.m"
    }
#line 327 "hlds_args.m"
  }
#line 82 "hlds_args.m"
}

#line 80 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__proc_arg_vector_set_user_args_3_p_0(
#line 80 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_17,
#line 80 "hlds_args.m"
  MR_Word hlds__hlds_args__UA_4,
#line 80 "hlds_args.m"
  MR_Word hlds__hlds_args__STATE_VARIABLE_V_0_6,
#line 80 "hlds_args.m"
  MR_Word * hlds__hlds_args__STATE_VARIABLE_V_7)
#line 80 "hlds_args.m"
{
#line 325 "hlds_args.m"
  {
#line 325 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 325 "hlds_args.m"
    MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 0)));
#line 325 "hlds_args.m"
    MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 1)));
#line 325 "hlds_args.m"
    MR_Word hlds__hlds_args__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 2)));
#line 325 "hlds_args.m"
    MR_Word hlds__hlds_args__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 3)));
#line 325 "hlds_args.m"
    MR_Word hlds__hlds_args__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 4)));
#line 325 "hlds_args.m"
    MR_Word hlds__hlds_args__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 5)));
#line 325 "hlds_args.m"
    MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 7)));
#line 325 "hlds_args.m"
    MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 6)));

#line 325 "hlds_args.m"
    {
#line 325 "hlds_args.m"
      MR_Word base;
#line 325 "hlds_args.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 325 "hlds_args.m"
      *hlds__hlds_args__STATE_VARIABLE_V_7 = base;
#line 325 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__V_9_9));
#line 325 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__V_10_10));
#line 325 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__V_11_11));
#line 325 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__V_12_12));
#line 325 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__V_13_13));
#line 325 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__V_14_14));
#line 325 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__UA_4));
#line 325 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__V_16_16));
#line 325 "hlds_args.m"
    }
#line 325 "hlds_args.m"
  }
#line 80 "hlds_args.m"
}

#line 78 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__proc_arg_vector_set_exist_typeclass_infos_3_p_0(
#line 78 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_17,
#line 78 "hlds_args.m"
  MR_Word hlds__hlds_args__ETCI_4,
#line 78 "hlds_args.m"
  MR_Word hlds__hlds_args__STATE_VARIABLE_V_0_6,
#line 78 "hlds_args.m"
  MR_Word * hlds__hlds_args__STATE_VARIABLE_V_7)
#line 78 "hlds_args.m"
{
#line 323 "hlds_args.m"
  {
#line 323 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 323 "hlds_args.m"
    MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 0)));
#line 323 "hlds_args.m"
    MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 1)));
#line 323 "hlds_args.m"
    MR_Word hlds__hlds_args__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 2)));
#line 323 "hlds_args.m"
    MR_Word hlds__hlds_args__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 3)));
#line 323 "hlds_args.m"
    MR_Word hlds__hlds_args__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 4)));
#line 323 "hlds_args.m"
    MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 6)));
#line 323 "hlds_args.m"
    MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 7)));
#line 323 "hlds_args.m"
    MR_Word hlds__hlds_args__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 5)));

#line 323 "hlds_args.m"
    {
#line 323 "hlds_args.m"
      MR_Word base;
#line 323 "hlds_args.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 323 "hlds_args.m"
      *hlds__hlds_args__STATE_VARIABLE_V_7 = base;
#line 323 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__V_9_9));
#line 323 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__V_10_10));
#line 323 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__V_11_11));
#line 323 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__V_12_12));
#line 323 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__V_13_13));
#line 323 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__ETCI_4));
#line 323 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__V_15_15));
#line 323 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__V_16_16));
#line 323 "hlds_args.m"
    }
#line 323 "hlds_args.m"
  }
#line 78 "hlds_args.m"
}

#line 76 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__proc_arg_vector_set_univ_typeclass_infos_3_p_0(
#line 76 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_17,
#line 76 "hlds_args.m"
  MR_Word hlds__hlds_args__UTCI_4,
#line 76 "hlds_args.m"
  MR_Word hlds__hlds_args__STATE_VARIABLE_V_0_6,
#line 76 "hlds_args.m"
  MR_Word * hlds__hlds_args__STATE_VARIABLE_V_7)
#line 76 "hlds_args.m"
{
#line 321 "hlds_args.m"
  {
#line 321 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 321 "hlds_args.m"
    MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 0)));
#line 321 "hlds_args.m"
    MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 1)));
#line 321 "hlds_args.m"
    MR_Word hlds__hlds_args__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 2)));
#line 321 "hlds_args.m"
    MR_Word hlds__hlds_args__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 3)));
#line 321 "hlds_args.m"
    MR_Word hlds__hlds_args__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 5)));
#line 321 "hlds_args.m"
    MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 6)));
#line 321 "hlds_args.m"
    MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 7)));
#line 321 "hlds_args.m"
    MR_Word hlds__hlds_args__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 4)));

#line 321 "hlds_args.m"
    {
#line 321 "hlds_args.m"
      MR_Word base;
#line 321 "hlds_args.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 321 "hlds_args.m"
      *hlds__hlds_args__STATE_VARIABLE_V_7 = base;
#line 321 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__V_9_9));
#line 321 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__V_10_10));
#line 321 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__V_11_11));
#line 321 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__V_12_12));
#line 321 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__UTCI_4));
#line 321 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__V_14_14));
#line 321 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__V_15_15));
#line 321 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__V_16_16));
#line 321 "hlds_args.m"
    }
#line 321 "hlds_args.m"
  }
#line 76 "hlds_args.m"
}

#line 74 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__proc_arg_vector_set_exist_type_infos_3_p_0(
#line 74 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_17,
#line 74 "hlds_args.m"
  MR_Word hlds__hlds_args__ETI_4,
#line 74 "hlds_args.m"
  MR_Word hlds__hlds_args__STATE_VARIABLE_V_0_6,
#line 74 "hlds_args.m"
  MR_Word * hlds__hlds_args__STATE_VARIABLE_V_7)
#line 74 "hlds_args.m"
{
#line 319 "hlds_args.m"
  {
#line 319 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 319 "hlds_args.m"
    MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 0)));
#line 319 "hlds_args.m"
    MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 1)));
#line 319 "hlds_args.m"
    MR_Word hlds__hlds_args__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 2)));
#line 319 "hlds_args.m"
    MR_Word hlds__hlds_args__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 4)));
#line 319 "hlds_args.m"
    MR_Word hlds__hlds_args__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 5)));
#line 319 "hlds_args.m"
    MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 6)));
#line 319 "hlds_args.m"
    MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 7)));
#line 319 "hlds_args.m"
    MR_Word hlds__hlds_args__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 3)));

#line 319 "hlds_args.m"
    {
#line 319 "hlds_args.m"
      MR_Word base;
#line 319 "hlds_args.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 319 "hlds_args.m"
      *hlds__hlds_args__STATE_VARIABLE_V_7 = base;
#line 319 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__V_9_9));
#line 319 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__V_10_10));
#line 319 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__V_11_11));
#line 319 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__ETI_4));
#line 319 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__V_13_13));
#line 319 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__V_14_14));
#line 319 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__V_15_15));
#line 319 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__V_16_16));
#line 319 "hlds_args.m"
    }
#line 319 "hlds_args.m"
  }
#line 74 "hlds_args.m"
}

#line 72 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__proc_arg_vector_set_univ_type_infos_3_p_0(
#line 72 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_17,
#line 72 "hlds_args.m"
  MR_Word hlds__hlds_args__UTI_4,
#line 72 "hlds_args.m"
  MR_Word hlds__hlds_args__STATE_VARIABLE_V_0_6,
#line 72 "hlds_args.m"
  MR_Word * hlds__hlds_args__STATE_VARIABLE_V_7)
#line 72 "hlds_args.m"
{
#line 317 "hlds_args.m"
  {
#line 317 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 317 "hlds_args.m"
    MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 0)));
#line 317 "hlds_args.m"
    MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 1)));
#line 317 "hlds_args.m"
    MR_Word hlds__hlds_args__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 3)));
#line 317 "hlds_args.m"
    MR_Word hlds__hlds_args__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 4)));
#line 317 "hlds_args.m"
    MR_Word hlds__hlds_args__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 5)));
#line 317 "hlds_args.m"
    MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 6)));
#line 317 "hlds_args.m"
    MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 7)));
#line 317 "hlds_args.m"
    MR_Word hlds__hlds_args__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 2)));

#line 317 "hlds_args.m"
    {
#line 317 "hlds_args.m"
      MR_Word base;
#line 317 "hlds_args.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 317 "hlds_args.m"
      *hlds__hlds_args__STATE_VARIABLE_V_7 = base;
#line 317 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__V_9_9));
#line 317 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__V_10_10));
#line 317 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__UTI_4));
#line 317 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__V_12_12));
#line 317 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__V_13_13));
#line 317 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__V_14_14));
#line 317 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__V_15_15));
#line 317 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__V_16_16));
#line 317 "hlds_args.m"
    }
#line 317 "hlds_args.m"
  }
#line 72 "hlds_args.m"
}

#line 70 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__proc_arg_vector_set_instance_typeclass_infos_3_p_0(
#line 70 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_17,
#line 70 "hlds_args.m"
  MR_Word hlds__hlds_args__ITCI_4,
#line 70 "hlds_args.m"
  MR_Word hlds__hlds_args__STATE_VARIABLE_V_0_6,
#line 70 "hlds_args.m"
  MR_Word * hlds__hlds_args__STATE_VARIABLE_V_7)
#line 70 "hlds_args.m"
{
#line 315 "hlds_args.m"
  {
#line 315 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 315 "hlds_args.m"
    MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 0)));
#line 315 "hlds_args.m"
    MR_Word hlds__hlds_args__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 2)));
#line 315 "hlds_args.m"
    MR_Word hlds__hlds_args__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 3)));
#line 315 "hlds_args.m"
    MR_Word hlds__hlds_args__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 4)));
#line 315 "hlds_args.m"
    MR_Word hlds__hlds_args__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 5)));
#line 315 "hlds_args.m"
    MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 6)));
#line 315 "hlds_args.m"
    MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 7)));
#line 315 "hlds_args.m"
    MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 1)));

#line 315 "hlds_args.m"
    {
#line 315 "hlds_args.m"
      MR_Word base;
#line 315 "hlds_args.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 315 "hlds_args.m"
      *hlds__hlds_args__STATE_VARIABLE_V_7 = base;
#line 315 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__V_9_9));
#line 315 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__ITCI_4));
#line 315 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__V_11_11));
#line 315 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__V_12_12));
#line 315 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__V_13_13));
#line 315 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__V_14_14));
#line 315 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__V_15_15));
#line 315 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__V_16_16));
#line 315 "hlds_args.m"
    }
#line 315 "hlds_args.m"
  }
#line 70 "hlds_args.m"
}

#line 68 "hlds_args.m"
void MR_CALL 
hlds__hlds_args__proc_arg_vector_set_instance_type_infos_3_p_0(
#line 68 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_17,
#line 68 "hlds_args.m"
  MR_Word hlds__hlds_args__ITI_4,
#line 68 "hlds_args.m"
  MR_Word hlds__hlds_args__STATE_VARIABLE_V_0_6,
#line 68 "hlds_args.m"
  MR_Word * hlds__hlds_args__STATE_VARIABLE_V_7)
#line 68 "hlds_args.m"
{
#line 313 "hlds_args.m"
  {
#line 313 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 313 "hlds_args.m"
    MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 1)));
#line 313 "hlds_args.m"
    MR_Word hlds__hlds_args__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 2)));
#line 313 "hlds_args.m"
    MR_Word hlds__hlds_args__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 3)));
#line 313 "hlds_args.m"
    MR_Word hlds__hlds_args__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 4)));
#line 313 "hlds_args.m"
    MR_Word hlds__hlds_args__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 5)));
#line 313 "hlds_args.m"
    MR_Word hlds__hlds_args__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 6)));
#line 313 "hlds_args.m"
    MR_Word hlds__hlds_args__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 7)));
#line 313 "hlds_args.m"
    MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__STATE_VARIABLE_V_0_6, (MR_Integer) 0)));

#line 313 "hlds_args.m"
    {
#line 313 "hlds_args.m"
      MR_Word base;
#line 313 "hlds_args.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 313 "hlds_args.m"
      *hlds__hlds_args__STATE_VARIABLE_V_7 = base;
#line 313 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (hlds__hlds_args__ITI_4));
#line 313 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (hlds__hlds_args__V_10_10));
#line 313 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (hlds__hlds_args__V_11_11));
#line 313 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (hlds__hlds_args__V_12_12));
#line 313 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (hlds__hlds_args__V_13_13));
#line 313 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (hlds__hlds_args__V_14_14));
#line 313 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (hlds__hlds_args__V_15_15));
#line 313 "hlds_args.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (hlds__hlds_args__V_16_16));
#line 313 "hlds_args.m"
    }
#line 313 "hlds_args.m"
  }
#line 68 "hlds_args.m"
}

#line 66 "hlds_args.m"
MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_get_maybe_ret_value_1_f_0(
#line 66 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_11,
#line 66 "hlds_args.m"
  MR_Word hlds__hlds_args__V_3)
#line 66 "hlds_args.m"
{
#line 310 "hlds_args.m"
  {
#line 310 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 310 "hlds_args.m"
    MR_Word hlds__hlds_args__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 7)));
#line 310 "hlds_args.m"
    MR_Word hlds__hlds_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 0)));
#line 310 "hlds_args.m"
    MR_Word hlds__hlds_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 1)));
#line 310 "hlds_args.m"
    MR_Word hlds__hlds_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 2)));
#line 310 "hlds_args.m"
    MR_Word hlds__hlds_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 3)));
#line 310 "hlds_args.m"
    MR_Word hlds__hlds_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 4)));
#line 310 "hlds_args.m"
    MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 5)));
#line 310 "hlds_args.m"
    MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 6)));

#line 310 "hlds_args.m"
    return hlds__hlds_args__HeadVar__2_2;
#line 310 "hlds_args.m"
  }
#line 66 "hlds_args.m"
}

#line 65 "hlds_args.m"
MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_get_user_args_1_f_0(
#line 65 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_11,
#line 65 "hlds_args.m"
  MR_Word hlds__hlds_args__V_3)
#line 65 "hlds_args.m"
{
#line 308 "hlds_args.m"
  {
#line 308 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 308 "hlds_args.m"
    MR_Word hlds__hlds_args__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 6)));
#line 308 "hlds_args.m"
    MR_Word hlds__hlds_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 0)));
#line 308 "hlds_args.m"
    MR_Word hlds__hlds_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 1)));
#line 308 "hlds_args.m"
    MR_Word hlds__hlds_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 2)));
#line 308 "hlds_args.m"
    MR_Word hlds__hlds_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 3)));
#line 308 "hlds_args.m"
    MR_Word hlds__hlds_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 4)));
#line 308 "hlds_args.m"
    MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 5)));
#line 308 "hlds_args.m"
    MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 7)));

#line 308 "hlds_args.m"
    return hlds__hlds_args__HeadVar__2_2;
#line 308 "hlds_args.m"
  }
#line 65 "hlds_args.m"
}

#line 63 "hlds_args.m"
MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_get_exist_typeclass_infos_1_f_0(
#line 63 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_11,
#line 63 "hlds_args.m"
  MR_Word hlds__hlds_args__V_3)
#line 63 "hlds_args.m"
{
#line 306 "hlds_args.m"
  {
#line 306 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 306 "hlds_args.m"
    MR_Word hlds__hlds_args__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 5)));
#line 306 "hlds_args.m"
    MR_Word hlds__hlds_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 0)));
#line 306 "hlds_args.m"
    MR_Word hlds__hlds_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 1)));
#line 306 "hlds_args.m"
    MR_Word hlds__hlds_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 2)));
#line 306 "hlds_args.m"
    MR_Word hlds__hlds_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 3)));
#line 306 "hlds_args.m"
    MR_Word hlds__hlds_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 4)));
#line 306 "hlds_args.m"
    MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 6)));
#line 306 "hlds_args.m"
    MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 7)));

#line 306 "hlds_args.m"
    return hlds__hlds_args__HeadVar__2_2;
#line 306 "hlds_args.m"
  }
#line 63 "hlds_args.m"
}

#line 62 "hlds_args.m"
MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_get_univ_typeclass_infos_1_f_0(
#line 62 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_11,
#line 62 "hlds_args.m"
  MR_Word hlds__hlds_args__V_3)
#line 62 "hlds_args.m"
{
#line 304 "hlds_args.m"
  {
#line 304 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 304 "hlds_args.m"
    MR_Word hlds__hlds_args__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 4)));
#line 304 "hlds_args.m"
    MR_Word hlds__hlds_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 0)));
#line 304 "hlds_args.m"
    MR_Word hlds__hlds_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 1)));
#line 304 "hlds_args.m"
    MR_Word hlds__hlds_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 2)));
#line 304 "hlds_args.m"
    MR_Word hlds__hlds_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 3)));
#line 304 "hlds_args.m"
    MR_Word hlds__hlds_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 5)));
#line 304 "hlds_args.m"
    MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 6)));
#line 304 "hlds_args.m"
    MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 7)));

#line 304 "hlds_args.m"
    return hlds__hlds_args__HeadVar__2_2;
#line 304 "hlds_args.m"
  }
#line 62 "hlds_args.m"
}

#line 61 "hlds_args.m"
MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_get_exist_type_infos_1_f_0(
#line 61 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_11,
#line 61 "hlds_args.m"
  MR_Word hlds__hlds_args__V_3)
#line 61 "hlds_args.m"
{
#line 302 "hlds_args.m"
  {
#line 302 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 302 "hlds_args.m"
    MR_Word hlds__hlds_args__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 3)));
#line 302 "hlds_args.m"
    MR_Word hlds__hlds_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 0)));
#line 302 "hlds_args.m"
    MR_Word hlds__hlds_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 1)));
#line 302 "hlds_args.m"
    MR_Word hlds__hlds_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 2)));
#line 302 "hlds_args.m"
    MR_Word hlds__hlds_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 4)));
#line 302 "hlds_args.m"
    MR_Word hlds__hlds_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 5)));
#line 302 "hlds_args.m"
    MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 6)));
#line 302 "hlds_args.m"
    MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 7)));

#line 302 "hlds_args.m"
    return hlds__hlds_args__HeadVar__2_2;
#line 302 "hlds_args.m"
  }
#line 61 "hlds_args.m"
}

#line 60 "hlds_args.m"
MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_get_univ_type_infos_1_f_0(
#line 60 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_11,
#line 60 "hlds_args.m"
  MR_Word hlds__hlds_args__V_3)
#line 60 "hlds_args.m"
{
#line 300 "hlds_args.m"
  {
#line 300 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 300 "hlds_args.m"
    MR_Word hlds__hlds_args__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 2)));
#line 300 "hlds_args.m"
    MR_Word hlds__hlds_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 0)));
#line 300 "hlds_args.m"
    MR_Word hlds__hlds_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 1)));
#line 300 "hlds_args.m"
    MR_Word hlds__hlds_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 3)));
#line 300 "hlds_args.m"
    MR_Word hlds__hlds_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 4)));
#line 300 "hlds_args.m"
    MR_Word hlds__hlds_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 5)));
#line 300 "hlds_args.m"
    MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 6)));
#line 300 "hlds_args.m"
    MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 7)));

#line 300 "hlds_args.m"
    return hlds__hlds_args__HeadVar__2_2;
#line 300 "hlds_args.m"
  }
#line 60 "hlds_args.m"
}

#line 58 "hlds_args.m"
MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_get_instance_typeclass_infos_1_f_0(
#line 58 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_11,
#line 58 "hlds_args.m"
  MR_Word hlds__hlds_args__V_3)
#line 58 "hlds_args.m"
{
#line 298 "hlds_args.m"
  {
#line 298 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 298 "hlds_args.m"
    MR_Word hlds__hlds_args__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 1)));
#line 298 "hlds_args.m"
    MR_Word hlds__hlds_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 0)));
#line 298 "hlds_args.m"
    MR_Word hlds__hlds_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 2)));
#line 298 "hlds_args.m"
    MR_Word hlds__hlds_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 3)));
#line 298 "hlds_args.m"
    MR_Word hlds__hlds_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 4)));
#line 298 "hlds_args.m"
    MR_Word hlds__hlds_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 5)));
#line 298 "hlds_args.m"
    MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 6)));
#line 298 "hlds_args.m"
    MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 7)));

#line 298 "hlds_args.m"
    return hlds__hlds_args__HeadVar__2_2;
#line 298 "hlds_args.m"
  }
#line 58 "hlds_args.m"
}

#line 56 "hlds_args.m"
MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_get_instance_type_infos_1_f_0(
#line 56 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_11,
#line 56 "hlds_args.m"
  MR_Word hlds__hlds_args__V_3)
#line 56 "hlds_args.m"
{
#line 296 "hlds_args.m"
  {
#line 296 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 296 "hlds_args.m"
    MR_Word hlds__hlds_args__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 0)));
#line 296 "hlds_args.m"
    MR_Word hlds__hlds_args__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 1)));
#line 296 "hlds_args.m"
    MR_Word hlds__hlds_args__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 2)));
#line 296 "hlds_args.m"
    MR_Word hlds__hlds_args__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 3)));
#line 296 "hlds_args.m"
    MR_Word hlds__hlds_args__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 4)));
#line 296 "hlds_args.m"
    MR_Word hlds__hlds_args__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 5)));
#line 296 "hlds_args.m"
    MR_Word hlds__hlds_args__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 6)));
#line 296 "hlds_args.m"
    MR_Word hlds__hlds_args__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), hlds__hlds_args__V_3, (MR_Integer) 7)));

#line 296 "hlds_args.m"
    return hlds__hlds_args__HeadVar__2_2;
#line 296 "hlds_args.m"
  }
#line 56 "hlds_args.m"
}

#line 49 "hlds_args.m"
MR_Word MR_CALL 
hlds__hlds_args__proc_arg_vector_init_2_f_0(
#line 49 "hlds_args.m"
  MR_Word hlds__hlds_args__TypeInfo_for_T_16,
#line 49 "hlds_args.m"
  MR_Word hlds__hlds_args__PredOrFunc_4,
#line 49 "hlds_args.m"
  MR_Word hlds__hlds_args__Args0_5)
#line 49 "hlds_args.m"
{
#line 281 "hlds_args.m"
  {
#line 281 "hlds_args.m"
    MR_bool hlds__hlds_args__succeeded;
#line 281 "hlds_args.m"
    MR_Word hlds__hlds_args__ArgVec_6;
#line 281 "hlds_args.m"
    MR_Word hlds__hlds_args__Args_7;
#line 281 "hlds_args.m"
    MR_Word hlds__hlds_args__MaybeRetVal_8;

#line 286 "hlds_args.m"
#line 286 "hlds_args.m"
    switch (hlds__hlds_args__PredOrFunc_4) {
#line 286 "hlds_args.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 286 "hlds_args.m"
      case (MR_Integer) 1:
#line 287 "hlds_args.m"
        {
#line 287 "hlds_args.m"
          MR_Box hlds__hlds_args__RetVal_9;

#line 288 "hlds_args.m"
          {
#line 288 "hlds_args.m"
            mercury__list__det_split_last_3_p_0(hlds__hlds_args__TypeInfo_for_T_16, hlds__hlds_args__Args0_5, &hlds__hlds_args__Args_7, &hlds__hlds_args__RetVal_9);
          }
#line 289 "hlds_args.m"
          {
#line 289 "hlds_args.m"
            hlds__hlds_args__MaybeRetVal_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 289 "hlds_args.m"
            MR_hl_field(MR_mktag(1), hlds__hlds_args__MaybeRetVal_8, 0) = hlds__hlds_args__RetVal_9;
#line 289 "hlds_args.m"
          }
#line 287 "hlds_args.m"
        }
#line 286 "hlds_args.m"
        break;
#line 286 "hlds_args.m"
      case (MR_Integer) 0:
#line 283 "hlds_args.m"
        {
#line 284 "hlds_args.m"
          hlds__hlds_args__Args_7 = hlds__hlds_args__Args0_5;
#line 285 "hlds_args.m"
          hlds__hlds_args__MaybeRetVal_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 283 "hlds_args.m"
        }
#line 286 "hlds_args.m"
        break;
#line 286 "hlds_args.m"
    }
#line 291 "hlds_args.m"
    {
#line 291 "hlds_args.m"
      hlds__hlds_args__ArgVec_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 291 "hlds_args.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_6, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 291 "hlds_args.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_6, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 291 "hlds_args.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_6, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 291 "hlds_args.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_6, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 291 "hlds_args.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_6, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 291 "hlds_args.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_6, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 291 "hlds_args.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_6, 6) = ((MR_Box) (hlds__hlds_args__Args_7));
#line 291 "hlds_args.m"
      MR_hl_field(MR_mktag(0), hlds__hlds_args__ArgVec_6, 7) = ((MR_Box) (hlds__hlds_args__MaybeRetVal_8));
#line 291 "hlds_args.m"
    }
#line 281 "hlds_args.m"
    return hlds__hlds_args__ArgVec_6;
#line 281 "hlds_args.m"
  }
#line 49 "hlds_args.m"
}

void mercury__hlds__hlds_args__init(void)
{
}

void mercury__hlds__hlds_args__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&hlds__hlds_args__hlds__hlds_args__type_ctor_info_poly_arg_vector_1);
	MR_register_type_ctor_info(&hlds__hlds_args__hlds__hlds_args__type_ctor_info_proc_arg_vector_1);
}

void mercury__hlds__hlds_args__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module hlds.hlds_args. */
